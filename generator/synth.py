#!/usr/bin/env python3
"""Synthetic FIX messages for latency testing without branch-predictor memorization.

Takes the real test messages as templates and, per output message: shuffles the optional header fields,
drops body fields at random, adds random fields the message type defines in the XML, regenerates values
with random lengths by field type, and shuffles the order of body fields. Repeating groups are kept as one
block (count tag, then its members in order). BodyLength (9) and CheckSum (10) are recomputed.

usage: synth.py <quickfix.xml> <template messages> <output> [count] [seed]
"""
import random
import sys
import xml.dom.minidom

MAX_LEN = 900          # message buffer is 1024 bytes, mapped at offset 24
DROP_P = 0.25          # probability a body field is dropped
MAX_EXTRA = 8          # up to this many fields added from the XML
SKIP_TYPES = {"DATA", "LENGTH", "NUMINGROUP"}
FIXED = {8, 9, 35, 10}


def children(node):
    return [c for c in node.childNodes if c.nodeType == c.ELEMENT_NODE]


class Dictionary:
    def __init__(self, path):
        doc = xml.dom.minidom.parse(path)
        self.fields = {}  # name -> (number, type, [enum values])
        for f in doc.getElementsByTagName("fields")[0].getElementsByTagName("field"):
            enums = [v.getAttribute("enum") for v in f.getElementsByTagName("value")]
            self.fields[f.getAttribute("name")] = (int(f.getAttribute("number")), f.getAttribute("type"), enums)
        self.by_number = {n: (t, e) for n, t, e in self.fields.values()}
        self.components = {c.getAttribute("name"): c for c in
                           doc.getElementsByTagName("components")[0].getElementsByTagName("component")
                           if c.parentNode.tagName == "components"}
        self.header = set()
        self.walk(doc.getElementsByTagName("header")[0], self.header, {})
        self.messages = {}  # msgtype -> (top-level tags, {group count tag: member tags})
        for m in doc.getElementsByTagName("messages")[0].getElementsByTagName("message"):
            top, groups = set(), {}
            self.walk(m, top, groups)
            self.messages[m.getAttribute("msgtype")] = (top, groups)

    def walk(self, node, top, groups):
        for e in children(node):
            if e.tagName == "field":
                top.add(self.fields[e.getAttribute("name")][0])
            elif e.tagName == "component":
                self.walk(self.components[e.getAttribute("name")], top, groups)
            elif e.tagName == "group":
                members = set()
                self.walk(e, members, groups)
                groups[self.fields[e.getAttribute("name")][0]] = members


ALNUM = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"


def digits(rnd, lo, hi):
    n = rnd.randint(lo, hi)
    return str(rnd.randint(1, 9)) + "".join(rnd.choice("0123456789") for _ in range(n - 1))


def value(rnd, type_, enums, old):
    if enums:
        return rnd.choice(enums)
    if type_ in ("PRICE", "QTY", "AMT", "FLOAT", "PRICEOFFSET", "PERCENTAGE"):
        v = digits(rnd, 1, 6)
        d = rnd.randint(0, 4)
        return v + "." + "".join(rnd.choice("0123456789") for _ in range(d)) if d else v
    if type_ in ("INT", "SEQNUM"):
        return digits(rnd, 1, 7)
    if type_ == "DAYOFMONTH":
        return str(rnd.randint(1, 31))
    if type_ == "UTCTIMESTAMP":
        ts = "2026%02d%02d-%02d:%02d:%02d" % (rnd.randint(1, 12), rnd.randint(1, 28), rnd.randint(0, 23),
                                              rnd.randint(0, 59), rnd.randint(0, 59))
        return ts + ".%03d" % rnd.randint(0, 999) if rnd.random() < 0.5 else ts
    if type_ in ("UTCDATEONLY", "LOCALMKTDATE", "UTCDATE"):
        return "2026%02d%02d" % (rnd.randint(1, 12), rnd.randint(1, 28))
    if type_ == "UTCTIMEONLY":
        return "%02d:%02d:%02d" % (rnd.randint(0, 23), rnd.randint(0, 59), rnd.randint(0, 59))
    if type_ == "MONTHYEAR":
        return "2026%02d" % rnd.randint(1, 12)
    if type_ == "BOOLEAN":
        return rnd.choice("YN")
    if type_ == "CHAR":
        return rnd.choice(ALNUM)
    if type_ == "CURRENCY":
        return rnd.choice(["USD", "EUR", "GBP", "JPY", "CHF"])
    if type_ in ("STRING", "MULTIPLEVALUESTRING", "EXCHANGE", "COUNTRY"):
        return "".join(rnd.choice(ALNUM) for _ in range(rnd.randint(1, 20)))
    return old  # tag not in the dictionary: keep the real value


def parse(line):
    return [(int(t), v) for t, v in (f.split("=", 1) for f in line.strip().rstrip("|").split("|"))]


def units(dic, fields):
    """Splits the template into header fields and body units; a body unit is one field or one group block."""
    msg_type = dict(fields)[35]
    _, groups = dic.messages[msg_type]
    header, body, i = [], [], 0
    while i < len(fields):
        tag, val = fields[i]
        if tag in FIXED:
            i += 1
        elif tag in dic.header:
            header.append([(tag, val)])
            i += 1
        elif tag in groups:
            block = [(tag, val)]
            i += 1
            while i < len(fields) and fields[i][0] in groups[tag]:
                block.append(fields[i])
                i += 1
            body.append(block)
        else:
            body.append([(tag, val)])
            i += 1
    return msg_type, dict(fields)[8], header, body


def synthesize(rnd, dic, template):
    msg_type, begin, header, body = template
    top, _ = dic.messages[msg_type]

    def revalue(unit):
        if len(unit) > 1:
            return unit  # group block: keep as is
        tag, old = unit[0]
        type_, enums = dic.by_number.get(tag, (None, []))
        return [(tag, value(rnd, type_, enums, old))]

    h = [revalue(u) for u in header]
    rnd.shuffle(h)
    b = [revalue(u) for u in body if len(u) > 1 or rnd.random() >= DROP_P]
    present = {u[0][0] for u in h + b}
    candidates = sorted(t for t in top - present - FIXED - dic.header
                        if dic.by_number[t][0] not in SKIP_TYPES)
    for tag in rnd.sample(candidates, rnd.randint(0, min(MAX_EXTRA, len(candidates)))):
        b.append(revalue([(tag, None)]))
    rnd.shuffle(b)

    rest = "".join("%d=%s\x01" % f for u in [[(35, msg_type)]] + h + b for f in u)
    head = "8=%s\x019=%d\x01" % (begin, len(rest))
    msg = head + rest
    checksum = sum(msg.encode()) % 256
    return msg + "10=%03d\x01" % checksum


def check(line):
    msg = line.replace("|", "\x01")
    body_beg = msg.index("\x01", msg.index("\x019=") + 1) + 1
    trailer = msg.rindex("10=")
    assert int(msg.split("\x01")[1][2:]) == trailer - body_beg, "BodyLength"
    assert int(msg[trailer + 3:trailer + 6]) == sum(msg[:trailer].encode()) % 256, "CheckSum"
    assert len(msg) <= MAX_LEN, "length"


def main():
    xml_path, templates_path, out_path = sys.argv[1:4]
    count = int(sys.argv[4]) if len(sys.argv) > 4 else 100_000
    rnd = random.Random(int(sys.argv[5]) if len(sys.argv) > 5 else 1)
    dic = Dictionary(xml_path)
    with open(templates_path) as f:
        templates = [units(dic, parse(line)) for line in f if line.strip()]
    lines = []
    while len(lines) < count:
        msg = synthesize(rnd, dic, rnd.choice(templates))
        if len(msg) <= MAX_LEN:
            lines.append(msg.replace("\x01", "|"))
    for line in lines:
        check(line)
    with open(out_path, "w") as f:
        f.write("\n".join(lines) + "\n")
    sequences = {tuple(f.split("=", 1)[0] for f in line.split("|")) for line in lines}
    total = sum(len(line) for line in lines)
    print("%d messages, %d distinct tag sequences, avg %.2f bytes, %d fields" %
          (len(lines), len(sequences), total / len(lines), sum(line.count("|") for line in lines)))


if __name__ == "__main__":
    main()

#!/usr/bin/env python3
"""C++ port of fix-parser-gen's Generator.java.

Reads a QuickFIX XML dictionary and generates typed C++ classes for every field, repeating group and message.
The dictionary walk (components, groups, group de-duplication and naming, group ownership of fields) and the
generated tag-matching switch follow Generator.java on fix-parser-gen main.

Output (under --output):
    fix/gen/tags.hpp        Tag constants (FixTag)
    fix/gen/fields.hpp/cpp  one class per field, enum constants, enum value() parsers
    fix/gen/groups.hpp/cpp  one group + one component class per repeating group
    fix/gen/messages.hpp/cpp one class per message, with the generated tag switch
    fix/gen/dictionary.hpp  DefaultFixDictionary
"""
import argparse
import os
import sys
from xml.dom import minidom

TYPE_TO_SUPER = {
    "STRING": "StringRef",
    "INT": "LongRef",
    "NUMINGROUP": "LongRef",
    "LENGTH": "LongRef",
    "FLOAT": "DoubleRef",
    "CHAR": "StringRef",
}

T = [" " * i for i in range(0, 48, 2)]

CPP_KEYWORDS = {
    "alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand", "bitor", "bool", "break", "case", "catch",
    "char", "class", "compl", "concept", "const", "consteval", "constexpr", "constinit", "const_cast", "continue",
    "co_await", "co_return", "co_yield", "decltype", "default", "delete", "do", "double", "dynamic_cast", "else",
    "enum", "explicit", "export", "extern", "false", "float", "for", "friend", "goto", "if", "inline", "int",
    "long", "mutable", "namespace", "new", "noexcept", "not", "not_eq", "nullptr", "operator", "or", "or_eq",
    "private", "protected", "public", "register", "reinterpret_cast", "requires", "return", "short", "signed",
    "sizeof", "static", "static_assert", "static_cast", "struct", "switch", "template", "this", "thread_local",
    "throw", "true", "try", "typedef", "typeid", "typename", "union", "unsigned", "using", "virtual", "void",
    "volatile", "wchar_t", "while", "xor", "xor_eq",
}
# Like Lombok @Getter: no accessor is generated when the class already has a method with that name.
MESSAGE_METHODS = {"msgType", "bytes", "version", "valBeg", "valLim", "valLen", "head", "tail", "map", "write",
                   "mapped", "reset", "copy", "unknownField", "toDebugFixString", "mapField", "writeUnmapped",
                   "writeMapped"}
COMPONENT_METHODS = {"map", "write", "field"}
# Enum descriptions that clash with macros from system headers.
CPP_MACROS = {"NULL", "TRUE", "FALSE", "EOF", "DOMAIN", "OVERFLOW", "UNDERFLOW", "SING", "TLOSS", "PLOSS"}


def log(level, msg):
    print(f"[main] {level} generate - {msg}", file=sys.stderr)


def to_small_first_char(s):
    return s[0].lower() + s[1:]


def ident(name):
    return name + "_" if name in CPP_KEYWORDS else name


def const_name(desc):
    if desc[0].isdigit():
        desc = "_" + desc
    if desc in CPP_MACROS:
        desc = desc + "_"
    return desc


# ------------------------------------------------------------------------------------------------ config objects

class ValueCfg:
    def __init__(self, value, desc):
        self.value = value
        self.desc = desc


class FieldCfg:
    def __init__(self):
        self.owner = None
        self.class_name = None
        self.var_name = None
        self.super_class_name = None
        self.values = None
        self.tag = 0
        self.header = False
        self.trailer = False

    def java_equals(self, o):
        if self is o:
            return True
        if not isinstance(o, FieldCfg):
            return False
        if self.tag != o.tag or self.class_name != o.class_name or self.var_name != o.var_name:
            return False
        if self.super_class_name != o.super_class_name:
            return False
        if (self.values is None) != (o.values is None):
            return False
        if self.values is not None:
            if len(o.values) != len(self.values):
                return False
            for key, v in self.values.items():
                ov = o.values.get(key)
                if ov is None or ov is not v:  # ValueCfg has identity equals in Java
                    return False
        return True


class GroupCfg:
    def __init__(self):
        self.class_name = None
        self.var_name = None
        self.no_tag_field = None
        self.id_tag_field = None
        self.elements = []
        self.header = False
        self.trailer = False
        self.owner_set = False

    def set_owner(self, g):
        self.no_tag_field.owner = g
        self.id_tag_field.owner = g
        for c in self.elements:
            if isinstance(c, GroupCfg):
                c.set_owner(g)
            else:
                c.owner = g
        self.owner_set = g is not None

    def java_equals(self, o):
        if self is o:
            return True
        if not isinstance(o, GroupCfg):
            return False
        if self.header != o.header or self.trailer != o.trailer:
            return False
        if self.class_name != o.class_name or self.var_name != o.var_name:
            return False
        if not self.no_tag_field.java_equals(o.no_tag_field):
            return False
        if not self.id_tag_field.java_equals(o.id_tag_field):
            return False
        if len(o.elements) != len(self.elements):
            return False
        this_elements = {e.class_name: e for e in self.elements}
        that_elements = {e.class_name: e for e in o.elements}
        for key, e in this_elements.items():
            cfg = that_elements.get(key)
            if cfg is None or not cfg.java_equals(e):
                return False
        return True


class MessageCfg:
    def __init__(self, class_name, msg_type):
        self.class_name = class_name
        self.msg_type = msg_type
        self.elements = []


class CompCfg:
    def __init__(self):
        self.elements = []


# ------------------------------------------------------------------------------------------------ dictionary walk

class Dictionary:
    def __init__(self, xml_path):
        self.doc = minidom.parse(xml_path).documentElement
        self._fields = None
        self._messages = None
        self._header = None
        self._trailer = None
        self.groups = {}

    @staticmethod
    def elements_of(node):
        return [c for c in node.childNodes if c.nodeType == c.ELEMENT_NODE]

    def fields(self):
        if self._fields is None:
            self._fields = {}
            for e in self.elements_of(self.doc.getElementsByTagName("fields")[0]):
                if e.attributes.length != 3:
                    log("ERROR", f"Unexpected attribute count: {e.attributes.length}")
                f = FieldCfg()
                f.tag = int(e.getAttribute("number"))
                f.class_name = e.getAttribute("name")
                f.var_name = to_small_first_char(e.getAttribute("name"))
                f.super_class_name = self.to_super(e.getAttribute("type"))
                if e.childNodes.length > 0:
                    values = {}
                    for v in self.elements_of(e):
                        vc = ValueCfg(v.getAttribute("enum"), v.getAttribute("description"))
                        values[vc.value + vc.desc] = vc
                    f.values = values
                self._fields[f.class_name] = f
        return self._fields

    @staticmethod
    def to_super(type_):
        sup = TYPE_TO_SUPER.get(type_)
        if sup is None:
            log("ERROR", f"super not mapped for type: {type_}")
            sup = "StringRef"
        return sup

    def messages(self):
        if self._messages is None:
            self._messages = []
            for e in self.elements_of(self.doc.getElementsByTagName("messages")[0]):
                if e.attributes.length != 3:
                    log("ERROR", f"Unexpected attribute count: {e.attributes.length}")
                m = MessageCfg(e.getAttribute("name"), e.getAttribute("msgtype"))
                self.list_message_node(e, m.elements)
                self._messages.append(m)
        return self._messages

    def header(self):
        if self._header is None:
            self._header = CompCfg()
            self.list(self._header, "header")
        return self._header

    def trailer(self):
        if self._trailer is None:
            self._trailer = CompCfg()
            self.list(self._trailer, "trailer")
        return self._trailer

    def list(self, comp_cfg, name):
        for e in self.elements_of(self.doc.getElementsByTagName(name)[0]):
            self.list_child(e, comp_cfg.elements)

    def list_message_node(self, element, elements):
        for e in self.elements_of(element):
            self.list_child(e, elements)

    def list_child(self, e, elements):
        if e.tagName == "field":
            elements.append(self.fields()[e.getAttribute("name")])
        elif e.tagName == "component":
            self.list_comp_node(e, elements, not e.hasChildNodes(), None)
        elif e.tagName == "group":
            self.list_group(e, elements)

    def global_component(self, name, parent):
        for e in self.elements_of(self.doc.getElementsByTagName("components")[0]):
            if e.getAttribute("name") == name:
                comp = CompCfg()
                self.list_comp_node(e, comp.elements, not e.hasChildNodes(), parent)
                return comp
        return None

    def list_comp_node(self, element, elements, is_global, parent):
        if is_global:
            comp = self.global_component(element.getAttribute("name"), parent)
            elements.extend(comp.elements)
            return
        for e in self.elements_of(element):
            if e.tagName == "field":
                field_cfg = self.fields()[e.getAttribute("name")]
                if isinstance(parent, GroupCfg):
                    if parent.id_tag_field is None:
                        parent.id_tag_field = field_cfg
                        parent = None
                else:
                    parent = None
                elements.append(field_cfg)
            elif e.tagName == "component":
                self.list_comp_node(e, elements, not e.hasChildNodes(), parent)
            elif e.tagName == "group":
                self.list_group(e, elements)

    def group(self, new_cfg, depth=0):
        if depth > 9:
            raise RuntimeError("group")
        if depth > 0:
            i = 1 if depth > 1 else 0
            new_cfg.class_name = new_cfg.class_name[:len(new_cfg.class_name) - i] + str(depth)
            new_cfg.var_name = new_cfg.var_name[:len(new_cfg.var_name) - i] + str(depth)
        existing = self.groups.get(new_cfg.class_name)
        if existing is not None:
            if not new_cfg.java_equals(existing):
                return self.group(new_cfg, depth + 1)
            return existing
        self.groups[new_cfg.class_name] = new_cfg
        return new_cfg

    def list_group(self, element, elements):
        name = element.getAttribute("name")
        group_name = name[2:] + "Group"
        g = GroupCfg()
        g.class_name = group_name
        g.var_name = to_small_first_char(group_name)
        g.no_tag_field = self.fields()[name]
        for e in self.elements_of(element):
            if e.tagName == "field":
                f = self.fields()[e.getAttribute("name")]
                if g.id_tag_field is None:
                    g.id_tag_field = f
                g.elements.append(f)
            elif e.tagName == "component":
                self.list_comp_node(e, g.elements, not e.hasChildNodes(), g)
            elif e.tagName == "group":
                self.list_group(e, g.elements)
        elements.append(self.group(g))


def flat_map(elements, out):
    for c in elements:
        if isinstance(c, FieldCfg):
            out.append(c)
        elif isinstance(c, GroupCfg):
            if not c.owner_set:
                c.set_owner(c)
            out.append(c.no_tag_field)
            flat_map(c.elements, out)


def non_head_tail(cfg):
    return cfg.class_name not in ("BeginString", "BodyLength", "CheckSum")


def group_tags(gc, out):
    out.add(gc.no_tag_field.tag)
    out.add(gc.id_tag_field.tag)
    for c in gc.elements:
        if isinstance(c, FieldCfg):
            out.add(c.tag)
        else:
            group_tags(c, out)
    return out


# ------------------------------------------------------------------------------------------------ code generation

class Generator:
    def __init__(self, xml_path, version, output):
        self.d = Dictionary(xml_path)
        self.version = version
        self.out_dir = os.path.join(output, "fix", "gen")
        self.files = {}

    def write_file(self, name, text):
        if name in self.files:
            raise RuntimeError("Could not create file: " + name)
        self.files[name] = text

    def flush(self):
        os.makedirs(self.out_dir, exist_ok=True)
        for name, text in self.files.items():
            path = os.path.join(self.out_dir, name)
            old = None
            if os.path.exists(path):
                with open(path) as f:
                    old = f.read()
            if old != text:
                with open(path, "w") as f:
                    f.write(text)

    def generate(self):
        self.gen_fix_tag()
        self.gen_fields()
        self.gen_messages()
        self.gen_dictionary()
        self.flush()

    # -------------------------------------------------------------------------------------------- tags

    def gen_fix_tag(self):
        tags = sorted(self.d.fields().values(), key=lambda c: c.tag)
        b = ["#pragma once\n\n#include \"fix/tag.hpp\"\n\nnamespace fix::gen::tags {\n\n"]
        for c in tags:
            b.append(f"inline constexpr Tag {ident(c.var_name)}{{{c.tag}, \"{c.var_name}\", \"{c.tag}=\"}};\n")
        b.append("inline constexpr const Tag& unknown = UNKNOWN_TAG;\n\n}  // namespace fix::gen::tags\n")
        self.write_file("tags.hpp", "".join(b))

    # -------------------------------------------------------------------------------------------- fields

    @staticmethod
    def underlying(cfg):
        return {"StringRef": "std::string_view", "BooleanRef": "bool", "LongRef": "int64_t"}.get(cfg.super_class_name) \
            or (_ for _ in ()).throw(RuntimeError("Unexpected superclass name: " + cfg.super_class_name))

    def gen_fields(self):
        h = ["#pragma once\n\n#include <cstdint>\n#include <string_view>\n\n#include \"fix/field.hpp\"\n"
             "#include \"fix/gen/tags.hpp\"\n\nnamespace fix::gen::field {\n\n"]
        cpp = ["#include \"fix/gen/fields.hpp\"\n\n#include <stdexcept>\n\nnamespace fix::gen::field {\n\n"]
        for class_name, cfg in self.d.fields().items():
            h.append(f"class {class_name} : public {cfg.super_class_name} {{\n public:\n")
            if cfg.values is not None:
                for v in cfg.values.values():
                    desc = v.desc
                    if desc[0].isdigit():
                        log("WARN", f"Field: {class_name}, value: {v.value} has numeric description first char: {desc}")
                    name = const_name(desc)
                    if cfg.super_class_name == "StringRef":
                        h.append(f"{T[1]}static constexpr std::string_view {name} = \"{v.value}\";\n")
                    elif cfg.super_class_name == "LongRef":
                        h.append(f"{T[1]}static constexpr int64_t {name} = {v.value};\n")
                    elif cfg.super_class_name == "BooleanRef":
                        h.append(f"{T[1]}static constexpr bool {name} = {v.value};\n")
                h.append("\n")
            h.append(f"{T[1]}explicit {class_name}(AbstractMessage* message) : {cfg.super_class_name}(message, "
                     f"&tags::{ident(cfg.var_name)}) {{")
            if cfg.header:
                h.append(f"\n{T[2]}header_ = true;\n{T[1]}")
            h.append("}\n")
            if cfg.values is not None:
                u = self.underlying(cfg)
                h.append(f"\n{T[1]}static {u} value(const char* bytes, int valBeg);\n")
                cpp.append(f"{u} {class_name}::value(const char* bytes, int valBeg) {{\n")
                self.gen_parse_multi_string_field(cpp, cfg)
                cpp.append("}\n\n")
            h.append("};\n\n")
        h.append("}  // namespace fix::gen::field\n")
        cpp.append("}  // namespace fix::gen::field\n")
        self.write_file("fields.hpp", "".join(h))
        self.write_file("fields.cpp", "".join(cpp))

    def gen_parse_multi_string_field(self, b, cfg):
        sorted_codes = sorted(v.value for v in cfg.values.values())
        code_to_name = {v.value: v.desc for v in cfg.values.values()}
        self.print_multi_string_field_switch(0, len(sorted_codes), 1, 0, sorted_codes, code_to_name, b)
        b.append(f"{T[1]}throw std::runtime_error(\"value\");\n")

    @staticmethod
    def case_label(c):
        return f"case {c}:"

    def print_multi_string_field_switch(self, beg, end, tab, ix, codes, code_to_name, b):
        b.append(f"{T[tab]}switch (bytes[valBeg{'' if ix == 0 else ' + ' + str(ix)}]) {{\n")
        first = codes[beg]
        if len(first) == ix:
            b.append(f"{T[tab + 1]}{self.case_label(1)} return {const_name(code_to_name[first])};\n")
            beg += 1
            first = codes[beg]
        first_char = ord(first[ix])
        same = 1
        i = beg + 1
        while beg < end and i < end:
            s = codes[i]
            c = 1 if len(s) == ix else ord(s[ix])
            if c == first_char:
                same += 1
            else:
                self.print_case(beg, same, first, first_char, tab, ix, codes, code_to_name, b)
                beg += same
                first = s
                first_char = c
                same = 1
            i += 1
        self.print_case(beg, same, first, first_char, tab, ix, codes, code_to_name, b)
        b.append(f"{T[tab + 1]}default: throw std::runtime_error(\"value\");\n")
        b.append(f"{T[tab]}}}\n")

    def print_case(self, beg, same, first, first_char, tab, ix, codes, code_to_name, b):
        if same == 1:
            b.append(f"{T[tab + 1]}{self.case_label(first_char)} return {const_name(code_to_name[first])};\n")
        else:
            b.append(f"{T[tab + 1]}{self.case_label(first_char)}\n")
            self.print_multi_string_field_switch(beg, beg + same, tab + 2, ix + 1, codes, code_to_name, b)

    # -------------------------------------------------------------------------------------------- groups

    def gen_groups(self):
        order = list(self.d.groups.values())
        order += [c for c in self.d.header().elements if isinstance(c, GroupCfg)]
        order += [c for c in self.d.trailer().elements if isinstance(c, GroupCfg)]
        # C++ needs nested groups declared before the components that contain them.
        emitted, seq = set(), []

        def visit(g):
            if g.class_name in emitted:
                return
            for c in g.elements:
                if isinstance(c, GroupCfg):
                    visit(c)
            emitted.add(g.class_name)
            seq.append(g)

        h = ["#pragma once\n\n#include \"fix/group.hpp\"\n#include \"fix/gen/fields.hpp\"\n"
             "#include \"fix/gen/tags.hpp\"\n\nnamespace fix::gen::group {\n\n"]
        cpp = ["#include \"fix/gen/groups.hpp\"\n\nnamespace fix::gen::group {\n\n"]
        names = set()
        for g in order:
            if g.class_name in names:
                raise RuntimeError("Could not create file: " + g.class_name)
            names.add(g.class_name)
            visit(g)
        for g in seq:
            self.gen_group(g, h, cpp)
        h.append("}  // namespace fix::gen::group\n")
        cpp.append("}  // namespace fix::gen::group\n")
        self.write_file("groups.hpp", "".join(h))
        self.write_file("groups.cpp", "".join(cpp))

    @staticmethod
    def member_type(c, group_ns=""):
        return ("field::" if isinstance(c, FieldCfg) else group_ns) + c.class_name

    def gen_group(self, g, h, cpp):
        comp = g.class_name + "Comp"
        # component
        h.append(f"class {comp} : public Component {{\n public:\n")
        h.append(f"{T[1]}explicit {comp}(AbstractMessage* message);\n\n")
        for c in g.elements:
            if c.var_name not in COMPONENT_METHODS:
                h.append(f"{T[1]}{self.member_type(c)}& {ident(c.var_name)}() {{ return {c.var_name}_; }}\n")
        h.append(f"\n{T[1]}AbstractField* map(int tag, int fldBeg) override;\n")
        h.append(f"{T[1]}AbstractField* field(const Tag& tag) override;\n")
        h.append(f"{T[1]}int write(int valBeg) override;\n\n private:\n")
        for c in g.elements:
            h.append(f"{T[1]}{self.member_type(c)} {c.var_name}_;\n")
        h.append("};\n\n")

        init = "".join(f",\n{T[2]}{c.var_name}_(message)" for c in g.elements)
        cpp.append(f"{comp}::{comp}(AbstractMessage* message)\n{T[2]}: Component(message){init} {{}}\n\n")
        cpp.append(f"AbstractField* {comp}::map(int tag, int fldBeg) {{\n")
        cpp.append(f"{T[1]}int64_t version = message_->version();\n{T[1]}const char* bytes = message_->bytes();\n")
        cpp.append(f"{T[1]}switch (tag) {{\n")
        for c in g.elements:
            if isinstance(c, FieldCfg):
                cpp.append(f"{T[2]}case {c.tag}: return {c.var_name}_.map(version, bytes, fldBeg);\n")
            else:
                labels = " ".join(f"case {t}:" for t in sorted(group_tags(c, set())))
                cpp.append(f"{T[2]}{labels}\n{T[3]}return {c.var_name}_.map(tag, fldBeg);\n")
        cpp.append(f"{T[2]}default: return message_->unknownField(fldBeg);\n{T[1]}}}\n}}\n\n")
        cpp.append(f"AbstractField* {comp}::field(const Tag& tag) {{\n{T[1]}switch (tag.number) {{\n")
        for c in g.elements:
            if isinstance(c, FieldCfg):
                cpp.append(f"{T[2]}case {c.tag}: return &{c.var_name}_;\n")
            else:
                labels = " ".join(f"case {t}:" for t in sorted(group_tags(c, set())))
                cpp.append(f"{T[2]}{labels}\n{T[3]}return {c.var_name}_.field(tag);\n")
        cpp.append(f"{T[2]}default: return nullptr;\n{T[1]}}}\n}}\n\n")
        cpp.append(f"int {comp}::write(int valBeg) {{\n")
        for c in g.elements:
            cpp.append(f"{T[1]}valBeg = {c.var_name}_.write(valBeg);\n")
        cpp.append(f"{T[1]}return valBeg;\n}}\n\n")
        # group
        h.append(f"class {g.class_name} : public AbstractGroup {{\n public:\n")
        h.append(f"{T[1]}explicit {g.class_name}(AbstractMessage* message)\n{T[3]}: AbstractGroup(message, "
                 f"&tags::{ident(g.no_tag_field.var_name)}, &tags::{ident(g.id_tag_field.var_name)}, "
                 f"[](AbstractMessage* m) -> Component* {{ return new {comp}(m); }}) {{}}\n\n")
        h.append(f"{T[1]}LongRef& {ident(g.no_tag_field.var_name)}() {{ return countField_; }}\n")
        h.append(f"{T[1]}{comp}& {to_small_first_char(comp)}(int ix) {{ return static_cast<{comp}&>"
                 f"(*components_[ix]); }}\n}};\n\n")

    # -------------------------------------------------------------------------------------------- messages

    def gen_messages(self):
        messages = self.d.messages()
        self.gen_groups()
        header = self.d.header()
        trailer = self.d.trailer()
        h = ["#pragma once\n\n#include \"fix/message.hpp\"\n#include \"fix/gen/fields.hpp\"\n"
             "#include \"fix/gen/groups.hpp\"\n#include \"fix/gen/tags.hpp\"\n\nnamespace fix::gen::message {\n\n"]
        cpp = ["#include \"fix/gen/messages.hpp\"\n\n#include <array>\n\nnamespace fix::gen::message {\n\n"]
        max_tag = max(f.tag for f in self.d.fields().values())
        for m in messages:
            members = header.elements + m.elements + trailer.elements
            cn = m.class_name
            for e in m.elements:
                if isinstance(e, FieldCfg):
                    e.owner = None
                else:
                    e.set_owner(None)
            all_fields = []
            flat_map(m.elements, all_fields)
            flat_map(header.elements, all_fields)
            flat_map(trailer.elements, all_fields)
            all_fields.sort(key=lambda o: str(o.tag))
            slot_fields, slot_groups, tag_slot = self.tag_slots(all_fields)
            h.append(f"class {cn} : public AbstractMessage {{\n public:\n{T[1]}{cn}();\n\n")
            for c in members:
                if c.var_name not in MESSAGE_METHODS:
                    h.append(f"{T[1]}{self.member_type(c, 'group::')}& {ident(c.var_name)}() {{ return {c.var_name}_; }}\n")
            h.append(f"\n protected:\n{T[1]}AbstractField* mapField(int fldBeg) override;\n"
                     f"{T[1]}void writeUnmapped() override;\n{T[1]}AbstractField* msgType() override;\n"
                     f"{T[1]}int writeMapped() override;\n\n private:\n")
            for c in members:
                h.append(f"{T[1]}{self.member_type(c, 'group::')} {c.var_name}_{{this}};\n")
            h.append(f"{T[1]}AbstractField* slotFields_[{len(slot_fields) + 1}];\n")
            h.append(f"{T[1]}AbstractGroup* slotGroups_[{max(1, len(slot_groups))}];\n")
            h.append("};\n\n")

            pairs = ", ".join(f"{{{t}, {sl}}}" for t, sl in sorted(tag_slot.items()))
            cpp.append(f"static const uint16_t* {cn}SlotOfTag() {{\n"
                       f"{T[1]}static const std::array<uint16_t, {max_tag + 1}> table = [] {{\n"
                       f"{T[2]}std::array<uint16_t, {max_tag + 1}> t{{}};\n"
                       f"{T[2]}static const uint16_t pairs[][2] = {{{pairs}}};\n"
                       f"{T[2]}for (const auto& p : pairs) t[p[0]] = p[1];\n"
                       f"{T[2]}return t;\n{T[1]}}}();\n{T[1]}return table.data();\n}}\n\n")
            cpp.append(f"{cn}::{cn}() {{\n{T[1]}beginString_.set(\"{self.version}\");\n"
                       f"{T[1]}bodyLength_.set(999);\n{T[1]}slotFields_[0] = nullptr;\n")
            for i, v in enumerate(slot_fields):
                cpp.append(f"{T[1]}slotFields_[{i + 1}] = &{v}_;\n")
            for i, v in enumerate(slot_groups):
                cpp.append(f"{T[1]}slotGroups_[{i}] = &{v}_;\n")
            cpp.append(f"{T[1]}tagTable({cn}SlotOfTag(), {max_tag}, slotFields_, slotGroups_, "
                       f"{len(slot_fields) + 1});\n}}\n\n")
            cpp.append(f"AbstractField* {cn}::msgType() {{\n{T[1]}return &beginString_;\n}}\n\n")
            cpp.append(f"void {cn}::writeUnmapped() {{\n{T[1]}valBeg_ = 24;\n{T[1]}valLim_ = 24;\n"
                       f"{T[1]}int bodyBeg = 24;\n")
            for c in m.elements:
                if non_head_tail(c):
                    cpp.append(f"{T[1]}valLim_ = {c.var_name}_.write(valLim_);\n")
            cpp.append(f"{T[1]}int bodyLim = valLim_;\n"
                       f"{T[1]}AbstractMessage::writeUnmapped(bodyLength_, bodyLim - bodyBeg, beginString_, "
                       f"checkSum_);\n}}\n\n")
            cpp.append(f"int {cn}::writeMapped() {{\n{T[1]}int fldLim = AbstractMessage::writeMapped();\n"
                       f"{T[1]}calcAndWriteBodyLengthMapped(bodyLength_, beginString_);\n"
                       f"{T[1]}calcAndWriteCheckSum(checkSum_);\n{T[1]}return fldLim;\n}}\n\n")

            self.gen_fix_tag_switch(cn, all_fields, cpp)
        h.append("}  // namespace fix::gen::message\n")
        cpp.append("}  // namespace fix::gen::message\n")
        self.write_file("messages.hpp", "".join(h))
        self.write_file("messages.cpp", "".join(cpp))

    @staticmethod
    def tag_slots(tags):
        """Tag -> slot for the branchless mapper: 1..F index plain fields, F+1.. index groups (the owner group,
        as in field_return). First in sorted order wins, as in the switch."""
        slot_fields, slot_groups, owner = [], [], {}
        for f in tags:
            if f.tag in owner:
                continue
            owner[f.tag] = f.owner.var_name if f.owner is not None else None
            if f.owner is None:
                slot_fields.append(f.var_name)
            elif f.owner.var_name not in slot_groups:
                slot_groups.append(f.owner.var_name)
        base = len(slot_fields) + 1
        tag_slot = {}
        fi = 0
        for f in tags:
            if f.tag in tag_slot:
                continue
            if owner[f.tag] is None:
                fi += 1
                tag_slot[f.tag] = fi
            else:
                tag_slot[f.tag] = base + slot_groups.index(owner[f.tag])
        return slot_fields, slot_groups, tag_slot

    def gen_fix_tag_switch(self, class_name, tags, b):
        b.append(f"AbstractField* {class_name}::mapField(int fldBeg) {{\n")
        b.append(f"{T[1]}int beg = fldBeg;\n")
        self.print_field_switch(0, len(tags), 1, 0, tags, b)
        b.append(f"{T[1]}return unknownField(beg);\n}}\n\n")

    @staticmethod
    def field_return(f):
        if f.owner is not None:
            return f"return {f.owner.var_name}_.map({f.tag}, beg);  // {f.tag}\n"
        return f"return {f.var_name}_.map(version_, bytes_, beg);  // {f.tag}\n"

    def print_field_switch(self, beg, end, tab, ix, tags, b):
        else_case = False
        first_node = tags[beg]
        first_str = str(first_node.tag)
        if len(first_str) == ix:
            beg += 1
            b.append(f"{T[tab]}if (bytes_[fldBeg] == '=') {{\n")
            b.append(f"{T[tab + 1]}{self.field_return(first_node)}")
            b.append(f"{T[tab]}}}")
            if beg == end:
                b.append(f"\n{T[tab]}break;\n")
                return
            else_case = True
            b.append(" else {\n")
            tab += 1
            first_node = tags[beg]
            first_str = str(first_node.tag)
        group_count = end - beg
        if group_count == 1:
            b.append(f"{T[tab]}if (bytes_[fldBeg] == '{first_str[ix]}'")
            ix += 1
            while ix < len(first_str):
                b.append(f" && bytes_[++fldBeg] == '{first_str[ix]}'")
                ix += 1
            b.append(" && bytes_[++fldBeg] == '=') {\n")
            b.append(f"{T[tab + 1]}{self.field_return(first_node)}")
        else:
            b.append(f"{T[tab]}switch (bytes_[fldBeg]) {{\n")
            first_char = first_str[ix]
            same = 0
            while beg < end + 1:
                node = None if beg == end else tags[beg]
                s = None if beg == end else str(node.tag)
                c = "\x01" if beg == end else s[ix]
                if c == first_char:
                    same += 1
                    beg += 1
                else:
                    b.append(f"{T[tab + 1]}case '{first_char}':\n")
                    b.append(f"{T[tab + 2]}fldBeg++;\n")
                    self.print_field_switch(beg - same, beg, tab + 2, ix + 1, tags, b)
                    first_char = c
                    same = 0
        b.append(f"{T[tab]}}}\n")
        if else_case:
            b.append(f"{T[tab - 1]}}}\n")
        if ix > 0:
            b.append(f"{T[tab - (1 if else_case else 0)]}break;\n")

    # -------------------------------------------------------------------------------------------- dictionary

    def gen_dictionary(self):
        self.write_file("dictionary.hpp", """#pragma once

#include <string_view>

#include "fix/message.hpp"
#include "fix/utils.hpp"
#include "fix/gen/fields.hpp"

namespace fix::gen {

class DefaultFixDictionary {
 public:
  /** mFunc: std::string_view msgType -> AbstractMessage* to map into. */
  template <class F>
  AbstractMessage* map(const char* bytes, int offset, int length, F&& mFunc) const {
    int mtValBeg = utils::mtValBeg(bytes, offset);
    std::string_view mt = field::MsgType::value(bytes, mtValBeg);
    AbstractMessage* message = mFunc(mt);
    message->map(bytes, offset, length);
    return message;
  }
};

}  // namespace fix::gen
""")


def main():
    ap = argparse.ArgumentParser(prog="generator")
    ap.add_argument("--fix", required=True, help="Fix definition xml file absolute path")
    ap.add_argument("--version", required=True, help="Begin string value")
    ap.add_argument("--output", required=True, help="Output directory absolute path")
    args = ap.parse_args()
    Generator(args.fix, args.version, args.output).generate()


if __name__ == "__main__":
    main()

// Port of FieldByFieldTest.java: parses every test message and checks every field, in order, against the raw
// message: tag number and value bytes. Unknown fields (tag -1) are checked by the tag text in the bytes.
#include <cstdio>
#include <memory>
#include <string>
#include <vector>

#include "test_support.hpp"

static std::string join(const std::vector<std::string>& v) {
  std::string s;
  for (size_t i = 0; i < v.size(); i++) {
    if (i) s += '|';
    s += v[i];
  }
  return s;
}

// args: [table] [file in resources]; "table" maps with the branchless tag table instead of the switch
int main(int argc, char** argv) {
  std::string file = "42_test_messages_no_unknown.txt";
  for (int i = 1; i < argc; i++) {
    if (std::string(argv[i]) == "table") {
      fix::AbstractMessage::useTagTable = true;
    } else {
      file = argv[i];
    }
  }
  const bool quiet = file != "42_test_messages_no_unknown.txt";
  std::vector<std::string> lines = test::loadMessages(file);
  int failed = 0;
  for (size_t n = 0; n < lines.size(); n++) {
    const std::string& raw = lines[n];
    auto messages = std::make_unique<test::Messages>();  // fresh objects per message, like the Java test

    std::vector<std::string> expected;
    size_t beg = 0;
    while (beg < raw.size()) {
      size_t end = raw.find(fix::FLD_CHAR, beg);
      if (end == std::string::npos) end = raw.size();
      if (end > beg) expected.emplace_back(raw, beg, end - beg);
      beg = end + 1;
    }

    fix::gen::DefaultFixDictionary dict;
    fix::AbstractMessage* m = dict.map(raw.data(), 0, static_cast<int>(raw.size()), *messages);
    const char* bytes = m->bytes();

    std::vector<std::string> actual;
    for (fix::AbstractField* f = m->head(); f != nullptr; f = f->next()) {
      std::string value(bytes + f->valBeg(), f->valLen());
      int tag = f->tag().number;
      std::string tagText;
      if (tag == -1) {
        std::string text(bytes + f->fldBeg(), f->valLim() - f->fldBeg());
        size_t eq = text.find('=');
        tagText = eq == std::string::npos ? text : text.substr(0, eq);
      } else {
        tagText = std::to_string(tag);
      }
      actual.push_back(tagText + "=" + value);
      if (f == m->tail()) break;
    }

    std::string e = join(expected), a = join(actual);
    if (e != a) {
      failed++;
      std::printf("FAIL message %zu\n  expected: %s\n  but was:  %s\n", n + 1, e.c_str(), a.c_str());
    } else if (!quiet) {
      std::printf("PASS message %zu\n", n + 1);
    }
  }
  std::printf("%s, %s: %zu tests completed, %d failed\n", file.c_str(),
              fix::AbstractMessage::useTagTable ? "tag table" : "tag switch", lines.size(), failed);
  return failed == 0 ? 0 : 1;
}

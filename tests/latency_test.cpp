// Port of LatencyTest.java: 10M messages cycling through the test messages, single thread.
// args: [ghz=<clock>] [file in resources]
//   ghz:   core clock for "clock per byte" (default 3.49, Apple M2 Ultra P-core, as in the Java test)
//   file:  default synthetic_messages.txt
#include <chrono>
#include <cstdio>
#include <memory>
#include <string>
#include <vector>

#include "test_support.hpp"

static fix::AbstractMessage* volatile msg;

int main(int argc, char** argv) {
  const int COUNT = 10'000'000;

  fix::gen::DefaultFixDictionary dict;
  auto messages = std::make_unique<test::Messages>();

  double ghz = 3.49;
  std::string file = "synthetic_messages.txt";
  for (int i = 1; i < argc; i++) {
    std::string a = argv[i];
    if (a.rfind("ghz=", 0) == 0) {
      ghz = std::stod(a.substr(4));
    } else {
      file = a;
    }
  }
  std::printf("%s, %.2f GHz\n", file.c_str(), ghz);
  std::vector<std::string> lines = test::loadMessages(file);
  std::vector<const std::string*> bytes(COUNT);
  long long totalBytes = 0;
  for (int i = 0; i < COUNT; i++) {
    bytes[i] = &lines[i % lines.size()];
    totalBytes += static_cast<long long>(bytes[i]->size());
  }

  for (int i = 0; i < COUNT; i++) {
    const std::string* m = bytes[i];
    msg = dict.map(m->data(), 0, static_cast<int>(m->size()), *messages);
  }

  auto beg = std::chrono::steady_clock::now();
  for (int i = 0; i < COUNT; i++) {
    const std::string* m = bytes[i];
    msg = dict.map(m->data(), 0, static_cast<int>(m->size()), *messages);
  }
  auto end = std::chrono::steady_clock::now();
  long long time = std::chrono::duration_cast<std::chrono::nanoseconds>(end - beg).count();
  double timePerByte = static_cast<double>(time) / static_cast<double>(totalBytes);
  double clocksPerByte = timePerByte * ghz;
  double nanosPerMessage = static_cast<double>(time) / COUNT;
  std::printf("%-16s%16lld nanos\n", "time:", time);
  std::printf("%-16s%16.2f bytes\n", "avg message size:", static_cast<double>(totalBytes) / COUNT);
  std::printf("%-16s%16.2f nanos\n", "time per byte", timePerByte);
  std::printf("%-16s%16.2f\n", "clock per byte", clocksPerByte);
  std::printf("%-16s%16.2f nanos\n", "time per message", nanosPerMessage);
  return 0;
}

// Splits latency into reading the message from memory and parsing it.
// Pass 1 (copy): only copies each message's bytes into a fixed buffer, as map() does first. A compiler
// barrier after each copy keeps it from being optimized away. Pass 2 (map): the full map() call.
// parse = map - copy: the work after the bytes are in the message's own (hot) buffer.
// Runs over the 42 real messages and over a second file (default synthetic_messages.txt).
// Each file runs with the tag switch, then with the branchless tag table.
// Run as root (sudo) to also get hardware counters: cycles, instructions, branches, branch mispredictions;
// clocks/byte then comes from measured cycles.
#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <memory>
#include <string>
#include <vector>

#include "kpc.hpp"
#include "test_support.hpp"

static fix::AbstractMessage* volatile msg;
static char buf[fix::MAX_MSG_LEN];

static constexpr int COUNT = 10'000'000;
static constexpr double GHZ = 3.49;  // only without counters: Apple M2 Ultra P-core

static kpc::Counters counters;

struct Sample {
  long long nanos;
  kpc::Counts counts;
};

template <class F>
static Sample measure(F pass) {
  kpc::Counts c0 = counters.read();
  auto t = std::chrono::steady_clock::now();
  pass();
  long long n = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - t).count();
  kpc::Counts c1 = counters.read();
  Sample s{n, {}};
  for (int i = 0; i < kpc::N; i++) s.counts.v[i] = c1.v[i] - c0.v[i];
  return s;
}

// clocks/byte: measured cycles when the counters are available, else nanos at an assumed GHZ (marked '*')
static void print(const char* name, long long nanos, const double* counts, double totalBytes, double fields) {
  const double clocks = counters.ok() ? counts[0] / totalBytes : nanos / totalBytes * GHZ;
  std::printf("  %-6s %8.2f ns/msg %6.2f clocks/byte%s", name, nanos / static_cast<double>(COUNT), clocks,
              counters.ok() ? "" : "*");
  if (counters.ok()) {
    std::printf(" | per msg: %8.1f cycles %8.1f instr %6.1f branches %5.2f mispred | per field: %5.2f mispred",
                counts[0] / COUNT, counts[1] / COUNT, counts[2] / COUNT, counts[3] / COUNT, counts[3] / fields);
  }
  std::printf("\n");
}

static void run(const char* file) {
  fix::gen::DefaultFixDictionary dict;
  auto messages = std::make_unique<test::Messages>();
  std::vector<std::string> lines = test::loadMessages(file);
  std::vector<const std::string*> bytes(COUNT);
  double totalBytes = 0, fields = 0;
  for (int i = 0; i < COUNT; i++) {
    bytes[i] = &lines[i % lines.size()];
    totalBytes += static_cast<double>(bytes[i]->size());
    fields += static_cast<double>(std::count(bytes[i]->begin(), bytes[i]->end(), fix::FLD_CHAR));
  }

  auto copyPass = [&] {
    for (int i = 0; i < COUNT; i++) {
      std::memcpy(buf, bytes[i]->data(), bytes[i]->size());
      asm volatile("" : : "r"(buf) : "memory");
    }
  };
  auto mapPass = [&] {
    for (int i = 0; i < COUNT; i++) {
      const std::string* m = bytes[i];
      msg = dict.map(m->data(), 0, static_cast<int>(m->size()), *messages);
    }
  };

  copyPass();
  mapPass();
  Sample copy = measure(copyPass);
  Sample map = measure(mapPass);

  double c[kpc::N], p[kpc::N], m[kpc::N];
  for (int i = 0; i < kpc::N; i++) {
    c[i] = static_cast<double>(copy.counts.v[i]);
    m[i] = static_cast<double>(map.counts.v[i]);
    p[i] = m[i] - c[i];
  }
  std::printf("%s, %s: %zu messages, avg %.2f bytes, avg %.2f fields\n", file,
              fix::AbstractMessage::useTagTable ? "tag table" : "tag switch", lines.size(), totalBytes / COUNT,
              fields / COUNT);
  print("copy", copy.nanos, c, totalBytes, fields);
  print("parse", map.nanos - copy.nanos, p, totalBytes, fields);
  print("map", map.nanos, m, totalBytes, fields);
}

int main(int argc, char** argv) {
  if (!counters.init()) {
    std::printf("* clocks/byte assume %.2f GHz\n", GHZ);
  }
  const char* second = argc > 1 ? argv[1] : "synthetic_messages.txt";
  for (bool table : {false, true}) {
    fix::AbstractMessage::useTagTable = table;
    run("42_test_messages_no_unknown.txt");
    run(second);
  }
  return 0;
}

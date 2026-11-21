// Port of NumberRefTest.java: NumberRef::append(long) must produce the same text as std::to_string.
#include <cstdio>
#include <random>
#include <string>

#include "fix/field.hpp"

int main() {
  fix::StringRef actual;
  std::mt19937_64 random(std::random_device{}());
  for (int i = 0; i < 1000; i++) {
    int64_t nextLong = static_cast<int64_t>(random());
    std::string expected = std::to_string(nextLong);
    actual.newValueLength(0);
    fix::NumberRef::append(nextLong, actual);
    if (!actual.equals(expected)) {
      std::fprintf(stderr, "expected: %s, actual: %s\n", expected.c_str(), actual.toString().c_str());
      std::printf("testToString FAILED\n");
      return 1;
    }
  }
  std::printf("testToString PASSED\n");
  return 0;
}

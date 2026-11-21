#pragma once

#include "fix/environment.hpp"

namespace fix::utils {

inline int fieldEnd(const char* bytes, int ix) {
  while (bytes[++ix] != FLD_CHAR) {}
  return ix;
}

inline int checksum(const char* bytes, int msgBeg, int msgLim) {
  int sum = 0;
  for (int i = msgBeg; i < msgLim; i++) {
    sum += bytes[i];
  }
  return sum & 255;
}

inline constexpr int MIN_SKIP_BEFORE_MT_VAL = 13;  // "8=FIX4.4|9=0|".length()

inline int mtValBeg(const char* bytes, int offset) {
  int out = offset + MIN_SKIP_BEFORE_MT_VAL;
  while (bytes[out++] != '3') {}
  while (bytes[out++] != '5') {}
  return out + 1;
}

}  // namespace fix::utils

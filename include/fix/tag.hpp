#pragma once

#include <string_view>

namespace fix {

struct Tag {
  int number;
  std::string_view fixStringName;
  std::string_view bytes;  // "<number>="

  int tag() const { return number; }
  std::string_view toString() const { return bytes; }
};

inline constexpr Tag UNKNOWN_TAG{-1, "unknown", "-1="};

}  // namespace fix

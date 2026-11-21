#pragma once

#include <cstdint>
#include <limits>
#include <string_view>

namespace fix {

inline constexpr int MAX_MSG_LEN = 1 << 10;
inline constexpr char FLD_CHAR = '\x01';
inline constexpr std::string_view FLD_STR = "\x01";
inline constexpr int64_t UNSET_LONG = std::numeric_limits<int64_t>::min();
inline constexpr int UNSET_INT = std::numeric_limits<int>::min();
inline constexpr char16_t UNSET_CHAR = u'￿';
inline constexpr std::string_view UNSET_STR = "\xEF\xBF\xBF";  // U+FFFF as UTF-8, like Java's String.valueOf('￿')
inline constexpr double UNSET_DOUBLE = std::numeric_limits<double>::quiet_NaN();
inline constexpr int UNKNOWN_TAG_NUMBER = -1;

}  // namespace fix

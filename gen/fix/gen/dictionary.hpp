#pragma once

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

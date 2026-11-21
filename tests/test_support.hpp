#pragma once

#include <fstream>
#include <stdexcept>
#include <string>
#include <vector>

#include "fix/gen/dictionary.hpp"
#include "fix/gen/messages.hpp"

namespace test {

/** Test messages from a file in the resources directory, '|' replaced with SOH. */
inline std::vector<std::string> loadMessages(const std::string& file = "synthetic_messages.txt") {
  std::ifstream in(std::string(TEST_DATA_DIR) + "/" + file);
  if (!in) {
    throw std::runtime_error("cannot open test messages");
  }
  std::vector<std::string> out;
  std::string line;
  while (std::getline(in, line)) {
    for (char& c : line) {
      if (c == '|') c = fix::FLD_CHAR;
    }
    out.push_back(line);
  }
  return out;
}

/** One reusable message object per type, chosen by MsgType (the Java tests' Function<String, Message>). */
struct Messages {
  fix::gen::message::ExecutionReport er;
  fix::gen::message::NewOrderSingle nos;
  fix::gen::message::OrderCancelRequest ocr;
  fix::gen::message::OrderCancelReplaceRequest ocrr;
  fix::gen::message::Reject r;

  fix::AbstractMessage* operator()(std::string_view mt) {
    using fix::gen::field::MsgType;
    if (mt == MsgType::ORDER_SINGLE) return &nos;
    if (mt == MsgType::EXECUTION_REPORT) return &er;
    if (mt == MsgType::ORDER_CANCEL_REQUEST) return &ocr;
    if (mt == MsgType::ORDER_CANCEL_REPLACE_REQUEST) return &ocrr;
    if (mt == MsgType::REJECT) return &r;
    return nullptr;
  }
};

}  // namespace test

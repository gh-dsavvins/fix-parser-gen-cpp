// Port of TestMessage.java: maps one ExecutionReport 10M times, prints timing, checks two fields.
#include <chrono>
#include <cstdio>
#include <memory>
#include <string>

#include "fix/gen/dictionary.hpp"
#include "fix/gen/messages.hpp"

static int fails = 0;

static void assertEquals(const std::string& expected, const std::string& actual) {
  if (expected != actual) {
    std::fprintf(stderr, "expected: <%s> but was: <%s>\n", expected.c_str(), actual.c_str());
    fails++;
  }
}

int main() {
  std::string data =
      "8=FIX.4.4|9=309|35=8|49=ASX|56=CL1_FIX44|34=4|52=20060324-01:05:58|17=X-B-WOW-1494E9A0:58BD3F9D-1109|150=D|39=0|"
      "11=184271|38=200|198=1494E9A0:58BD3F9D|526=4324|37=B-WOW-1494E9A0:58BD3F9D|"
      "55=WOW|54=1|151=200|14=0|40=2|44=15|59=1|6=0|"
      "453=3|"
      "448=AAA35791|447=D|452=3|"
      "448=8|447=D|452=4|"
      "448=FIX11|447=D|452=36|"
      "60=20060320-03:34:29|10=169|";
  for (char& c : data) {
    if (c == '|') c = fix::FLD_CHAR;
  }
  fix::gen::DefaultFixDictionary dict;
  auto executionReport = std::make_unique<fix::gen::message::ExecutionReport>();
  auto fn = [&](std::string_view) -> fix::AbstractMessage* { return executionReport.get(); };

  const int COUNT = 10'000'000;
  auto beg = std::chrono::steady_clock::now();
  for (int i = 0; i < COUNT; i++) {
    dict.map(data.data(), 0, static_cast<int>(data.size()), fn);
  }
  auto end = std::chrono::steady_clock::now();
  double time = static_cast<double>(std::chrono::duration_cast<std::chrono::nanoseconds>(end - beg).count());
  double timePerMessage = time / COUNT;
  double timePerByte = timePerMessage / static_cast<double>(data.size());
  std::printf("timePerMessage: %16.2f, timePerByte: %16.2f\n", timePerMessage, timePerByte);
  assertEquals("FIX.4.4", executionReport->beginString().toString());
  assertEquals("184271", executionReport->clOrdID().toString());
  return fails == 0 ? 0 : 1;
}

# fix-parser-gen-cpp

A zero-allocation FIX protocol parser for C++, generated from a QuickFIX XML dictionary (FIX 4.4). C++ port of [fix-parser-gen](https://github.com/gh-dsavvins/fix-parser-gen).

The generator (`generator/generate.py`) turns the dictionary into typed C++ classes for every field, group and message. Messages are mapped rather than parsed: each field stores the offsets of its value in the raw bytes and decodes it only when read. Message objects are reused, so parsing allocates nothing.

Field separators (SOH) are found in one pass over the message, 16 bytes at a time with ARM NEON (scalar fallback on other CPUs); each field takes its end from that index instead of scanning.

## Build

Requires CMake 3.20+, a C++20 compiler and Python 3. CMake runs the generator when `generator/generate.py` or `resources/quickfix.44.xml` changes; generated sources go to `gen/`.

```
cmake -S . -B cmake-build-release -DCMAKE_BUILD_TYPE=Release
cmake --build cmake-build-release
cd cmake-build-release && ctest
./latency_test
```

## Test results

`field_by_field_test`: parses each of the 42 test messages and checks every field, in order, against the raw message (tag and value, including unknown fields). All 42 pass.

`latency_test`: 10,000,000 messages, cycling through the same 42 real FIX messages (ExecutionReport, NewOrderSingle, OrderCancelRequest, OrderCancelReplaceRequest, Reject), single thread, Apple clang 21, `-O3`, Apple M2 Ultra (clock per byte assumes 3.49 GHz).

```
time:                 1675739667 nanos
avg message size:          234.02 bytes
time per byte               0.72 nanos
clock per byte              2.50
time per message          167.57 nanos
```

**About 168 ns per message, or 0.72 ns per byte.** The Java version on the same machine and messages: about 285 ns per message, 4.24 clocks per byte.

#pragma once
// Hardware performance counters for the calling thread: cycles, instructions, branches, branch mispredictions.
// macOS (Apple Silicon): private kperf / kperfdata frameworks, loaded with dlopen; needs root.
// Linux: perf_event_open, user space only; needs root or kernel.perf_event_paranoid <= 2.
#include <cstdint>
#include <cstdio>

#if defined(__APPLE__)
#include <dlfcn.h>
#elif defined(__linux__)
#include <linux/perf_event.h>
#include <sys/ioctl.h>
#include <sys/syscall.h>
#include <unistd.h>

#include <cstring>
#endif

namespace kpc {

constexpr int N = 4;  // cycles, instructions, branches, branch mispredictions

struct Counts {
  uint64_t v[N] = {};
};

#if defined(__APPLE__)

constexpr int MAX = 32;
inline constexpr const char* NAMES[N] = {"FIXED_CYCLES", "FIXED_INSTRUCTIONS", "INST_BRANCH",
                                         "BRANCH_MISPRED_NONSPEC"};

class Counters {
 public:
  /** false if the frameworks or events are missing, or not running as root. */
  bool init() {
    void* kperf = dlopen("/System/Library/PrivateFrameworks/kperf.framework/kperf", RTLD_LAZY);
    void* kperfdata = dlopen("/System/Library/PrivateFrameworks/kperfdata.framework/kperfdata", RTLD_LAZY);
    if (!kperf || !kperfdata) return fail("cannot load kperf frameworks");
#define LOAD(lib, fn) fn##_ = reinterpret_cast<decltype(fn##_)>(dlsym(lib, #fn)); if (!fn##_) return fail(#fn);
    LOAD(kperf, kpc_set_counting)
    LOAD(kperf, kpc_set_thread_counting)
    LOAD(kperf, kpc_set_config)
    LOAD(kperf, kpc_get_thread_counters)
    LOAD(kperf, kpc_force_all_ctrs_set)
    LOAD(kperfdata, kpep_db_create)
    LOAD(kperfdata, kpep_db_event)
    LOAD(kperfdata, kpep_config_create)
    LOAD(kperfdata, kpep_config_force_counters)
    LOAD(kperfdata, kpep_config_add_event)
    LOAD(kperfdata, kpep_config_kpc)
    LOAD(kperfdata, kpep_config_kpc_count)
    LOAD(kperfdata, kpep_config_kpc_classes)
    LOAD(kperfdata, kpep_config_kpc_map)
#undef LOAD
    if (kpc_force_all_ctrs_set_(1)) return fail("kpc_force_all_ctrs_set (run as root)");
    void* db = nullptr;
    if (kpep_db_create_(nullptr, &db)) return fail("kpep_db_create");
    void* cfg = nullptr;
    if (kpep_config_create_(db, &cfg)) return fail("kpep_config_create");
    if (kpep_config_force_counters_(cfg)) return fail("kpep_config_force_counters");
    for (const char* name : NAMES) {
      void* ev = nullptr;
      if (kpep_db_event_(db, name, &ev)) return fail(name);
      if (kpep_config_add_event_(cfg, &ev, 0, nullptr)) return fail(name);
    }
    uint32_t classes = 0;
    size_t count = 0;
    uint64_t regs[MAX] = {};
    if (kpep_config_kpc_classes_(cfg, &classes) || kpep_config_kpc_count_(cfg, &count) ||
        kpep_config_kpc_map_(cfg, map_, sizeof(map_)) || kpep_config_kpc_(cfg, regs, sizeof(regs))) {
      return fail("kpep_config");
    }
    if (kpc_set_config_(classes, regs) || kpc_set_counting_(classes) || kpc_set_thread_counting_(classes)) {
      return fail("kpc_set (run as root)");
    }
    return ok_ = true;
  }

  bool ok() const { return ok_; }

  Counts read() {
    Counts c;
    if (!ok_) return c;
    uint64_t buf[MAX] = {};
    kpc_get_thread_counters_(0, MAX, buf);
    for (int i = 0; i < N; i++) c.v[i] = buf[map_[i]];
    return c;
  }

 private:
  bool fail(const char* what) {
    std::printf("hardware counters unavailable: %s\n", what);
    return false;
  }

  bool ok_ = false;
  size_t map_[MAX] = {};
  int (*kpc_set_counting_)(uint32_t);
  int (*kpc_set_thread_counting_)(uint32_t);
  int (*kpc_set_config_)(uint32_t, uint64_t*);
  int (*kpc_get_thread_counters_)(uint32_t, uint32_t, uint64_t*);
  int (*kpc_force_all_ctrs_set_)(int);
  int (*kpep_db_create_)(const char*, void**);
  int (*kpep_db_event_)(void*, const char*, void**);
  int (*kpep_config_create_)(void*, void**);
  int (*kpep_config_force_counters_)(void*);
  int (*kpep_config_add_event_)(void*, void**, uint32_t, uint32_t*);
  int (*kpep_config_kpc_)(void*, uint64_t*, size_t);
  int (*kpep_config_kpc_count_)(void*, size_t*);
  int (*kpep_config_kpc_classes_)(void*, uint32_t*);
  int (*kpep_config_kpc_map_)(void*, size_t*, size_t);
};

#elif defined(__linux__)

class Counters {
 public:
  /** One event group, user space only, this thread, on whatever CPU it runs. */
  bool init() {
    const uint64_t configs[N] = {PERF_COUNT_HW_CPU_CYCLES, PERF_COUNT_HW_INSTRUCTIONS,
                                 PERF_COUNT_HW_BRANCH_INSTRUCTIONS, PERF_COUNT_HW_BRANCH_MISSES};
    for (int i = 0; i < N; i++) {
      perf_event_attr attr;
      std::memset(&attr, 0, sizeof(attr));
      attr.size = sizeof(attr);
      attr.type = PERF_TYPE_HARDWARE;
      attr.config = configs[i];
      attr.disabled = i == 0;
      attr.exclude_kernel = 1;
      attr.exclude_hv = 1;
      attr.read_format = PERF_FORMAT_GROUP;
      fd_[i] = static_cast<int>(syscall(SYS_perf_event_open, &attr, 0, -1, i == 0 ? -1 : fd_[0], 0));
      if (fd_[i] < 0) {
        std::printf("hardware counters unavailable: perf_event_open (run as root, or perf_event_paranoid <= 2)\n");
        return false;
      }
    }
    ioctl(fd_[0], PERF_EVENT_IOC_RESET, PERF_IOC_FLAG_GROUP);
    ioctl(fd_[0], PERF_EVENT_IOC_ENABLE, PERF_IOC_FLAG_GROUP);
    return ok_ = true;
  }

  bool ok() const { return ok_; }

  Counts read() {
    Counts c;
    if (!ok_) return c;
    uint64_t buf[1 + N] = {};  // nr, then the values in group order
    if (::read(fd_[0], buf, sizeof(buf)) == static_cast<ssize_t>(sizeof(buf))) {
      for (int i = 0; i < N; i++) c.v[i] = buf[1 + i];
    }
    return c;
  }

 private:
  bool ok_ = false;
  int fd_[N] = {-1, -1, -1, -1};
};

#else

class Counters {
 public:
  bool init() {
    std::printf("hardware counters unavailable on this OS\n");
    return false;
  }
  bool ok() const { return false; }
  Counts read() { return {}; }
};

#endif

}  // namespace kpc

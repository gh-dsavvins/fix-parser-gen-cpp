#pragma once

#include <array>
#include <cstdint>
#include <string>

#include "fix/environment.hpp"
#include "fix/field.hpp"
#include "fix/tag.hpp"

namespace fix {

class AbstractGroup;

/** Fields for tags the message type does not define; reused across parses. */
class StringRefPool {
 public:
  static constexpr int MAX_SIZE = 127;

  explicit StringRefPool(AbstractMessage* message);
  StringRef* next() { return &pool_[pointer_++]; }
  void reset() { pointer_ = 0; }
  int size() const { return pointer_; }
  StringRef* at(int i) { return &pool_[i]; }

 private:
  friend class AbstractMessage;
  std::array<StringRef, MAX_SIZE> pool_;
  int pointer_ = 0;
};

class AbstractMessage {
 public:
  AbstractMessage();
  virtual ~AbstractMessage() = default;
  AbstractMessage(const AbstractMessage&) = delete;
  AbstractMessage& operator=(const AbstractMessage&) = delete;

  const char* bytes() const { return bytes_; }
  int64_t version() const { return version_; }
  int valBeg() const { return valBeg_; }
  int valLim() const { return valLim_; }
  int valLen() const { return valLim_ - valBeg_; }
  AbstractField* head() const { return head_; }
  AbstractField* tail() const { return tail_; }

  AbstractMessage* map(const char* bytes, int offset, int length);
  AbstractMessage* write();
  bool mapped() const { return head_ != nullptr; }
  void reset();
  AbstractMessage* copy(AbstractMessage& from);
  StringRef* unknownField(int ix);
  std::string toDebugFixString();

  /** true: map with the branchless tag table (mapAllTable); false: with the generated tag switch (mapField). */
  static inline bool useTagTable = false;

 protected:
  friend class AbstractField;
  friend class StringRef;

  /** Maps the field starting at fldBeg (generated per message type). */
  virtual AbstractField* mapField(int fldBeg) = 0;
  virtual void writeUnmapped() = 0;
  virtual AbstractField* msgType() = 0;
  virtual int writeMapped();

  void writeUnmapped(LongRef& bodyLenField, int bodyLen, StringRef& beginString, StringRef& checksum);
  void calcAndWriteBodyLengthMapped(LongRef& bodyLength, StringRef& beginString);
  void calcAndWriteCheckSum(StringRef& checkSum);
  /** Set by the generated constructor: tag -> slot (0 unknown, 1..groupBase-1 fields, groupBase.. groups). */
  void tagTable(const uint16_t* slotOfTag, int maxTag, AbstractField** fields, AbstractGroup** groups,
                int groupBase) {
    slotOfTag_ = slotOfTag;
    maxTag_ = maxTag;
    slotFields_ = fields;
    slotGroups_ = groups;
    groupBase_ = groupBase;
  }

  int64_t version_ = 0;
  static constexpr int SIMD_PAD = 16;  // the last 16-byte load may read past valLim
  char bytes_[MAX_MSG_LEN + SIMD_PAD] = {};
  uint16_t soh_[MAX_MSG_LEN] = {};  // positions of every SOH in [valBeg, valLim), filled by indexSoh()
  int sohIx_ = 0;                   // index of the SOH that ends the field being mapped
  char checksumBuf_[3] = {};
  StringRefPool stringRefPool_;
  AbstractField* head_ = nullptr;
  AbstractField* tail_ = nullptr;
  bool dirty_ = false;
  int valBeg_ = 0;
  int valLim_ = 0;
  const uint16_t* slotOfTag_ = nullptr;
  int maxTag_ = 0;
  AbstractField** slotFields_ = nullptr;
  AbstractGroup** slotGroups_ = nullptr;
  int groupBase_ = 0;
  StringRef listHead_;  // sentinel: the table loop appends without a first-field branch

 private:
  AbstractMessage* mapAll();
  AbstractMessage* mapAllTable();
  int indexSoh();
};

inline AbstractField* AbstractField::map(int64_t version, const char* /*bytes*/, int fldBeg) {
  fldBeg_ = fldBeg;
  valBeg_ = fldBeg + static_cast<int>(tag_->bytes.size());
  valLim_ = message_->soh_[message_->sohIx_];
  version_ = version;
  hash_ = 0;
  unset_ = false;
  parsed_ = false;
  return this;
}

}  // namespace fix

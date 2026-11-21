#include "fix/message.hpp"

#include <cstring>

#if defined(__ARM_NEON)
#include <arm_neon.h>
#endif

#include "fix/utils.hpp"

namespace fix {

// ---------------------------------------------------------------- StringRefPool

StringRefPool::StringRefPool(AbstractMessage* message) {
  for (auto& ref : pool_) {
    ref.message_ = message;
    ref.tag_ = &UNKNOWN_TAG;
  }
}

// ---------------------------------------------------------------- AbstractMessage

AbstractMessage::AbstractMessage() : stringRefPool_(this) {
  reset();
}

AbstractMessage* AbstractMessage::copy(AbstractMessage& that) {
  if (that.dirty_) {
    that.write();
  }
  map(that.bytes_, that.valBeg_, that.valLen());
  return this;
}

void AbstractMessage::reset() {
  head_ = tail_ = nullptr;
  version_++;
  dirty_ = true;
  stringRefPool_.reset();
  valBeg_ = 0;
}

AbstractMessage* AbstractMessage::write() {
  if (!mapped()) {
    msgType()->version_ = -version_;
    writeUnmapped();
  } else {
    writeMapped();
  }
  dirty_ = false;
  return this;
}

int AbstractMessage::writeMapped() {
  AbstractField* f = head_->next_->next_;
  int offset = 0;
  do {
    offset = f->write(offset);
  } while ((f = f->next_)->tag_->number != 10);
  return offset;
}

void AbstractMessage::writeUnmapped(LongRef& bodyLenField, int bodyLen, StringRef& beginString, StringRef& checksum) {
  beginString.version_ = -version_;
  bodyLenField.version_ = -version_;
  checksum.version_ = -version_;
  for (int i = 0; i < stringRefPool_.size(); i++) {
    int oldValLim = valLim_;
    valLim_ = stringRefPool_.at(i)->write(oldValLim);
    bodyLen += (valLim_ - oldValLim);
  }
  bodyLenField.set(bodyLen);
  int bodyLenFieldLength = static_cast<int>(bodyLenField.tag_->bytes.size()) + bodyLenField.newValueLength_ + 1;
  bodyLenField.write(valBeg_ - bodyLenFieldLength);
  valBeg_ -= bodyLenFieldLength;
  int beginStringFieldLength =
      static_cast<int>(beginString.tag_->bytes.size()) + static_cast<int>(beginString.newValue_.size()) + 1;
  beginString.write(valBeg_ - beginStringFieldLength);
  valBeg_ -= beginStringFieldLength;
  calcAndWriteCheckSum(checksum);
}

void AbstractMessage::calcAndWriteBodyLengthMapped(LongRef& bodyLength, StringRef& beginString) {
  int checkSumValBeg = valLim_ - 7;
  int newVal = checkSumValBeg - bodyLength.valLim_ - 1;
  bodyLength.set(newVal);
  int oldLen = bodyLength.valLen();
  int newLen = bodyLength.newValueLength_;
  int offset = oldLen - newLen;
  if (offset != 0) {
    beginString.fldBeg_ += offset;
    beginString.valBeg_ += offset;
    beginString.valLim_ += offset;
    std::memmove(bytes_ + valBeg_ + offset, bytes_ + valBeg_, bodyLength.valBeg_ - valBeg_);
    valBeg_ += offset;
  }
  int newValBeg = bodyLength.valBeg_ + offset;
  bodyLength.valBeg_ = newValBeg;
  std::memcpy(bytes_ + newValBeg, bodyLength.newValue_.data(), bodyLength.newValueLength_);
}

void AbstractMessage::calcAndWriteCheckSum(StringRef& checkSum) {
  if (!mapped()) {
    valLim_ += 7;
  }
  int checksumFldBeg = valLim_ - 7;
  int checksumValBeg = valLim_ - 4;
  int checksumVal = utils::checksum(bytes_, valBeg_, checksumFldBeg);
  int len = NumberRef::stringSize(checksumVal);
  NumberRef::chars(checksumVal, len, checksumBuf_);
  const std::string_view tagBytes = checkSum.tag_->bytes;
  std::memcpy(bytes_ + checksumFldBeg, tagBytes.data(), tagBytes.size());
  std::memset(bytes_ + checksumValBeg, '0', 3);
  std::memcpy(bytes_ + checksumValBeg + (3 - len), checksumBuf_, len);
  bytes_[valLim_ - 1] = FLD_CHAR;
  checkSum.valBeg_ = checksumValBeg;
  checkSum.valLim_ = checksumValBeg + 3;
  checkSum.version_ = version_;
}

AbstractMessage* AbstractMessage::map(const char* bytes, int offset, int length) {
  reset();
  valBeg_ = 24;
  std::memmove(bytes_ + valBeg_, bytes + offset, length);
  valLim_ = valBeg_ + length;
  return mapAll();
}

// One pass over the message: record the position of every SOH (field separator).
#if defined(__ARM_NEON)
int AbstractMessage::indexSoh() {
  int n = 0;
  const auto* base = reinterpret_cast<const uint8_t*>(bytes_);
  const uint8x16_t soh = vdupq_n_u8(static_cast<uint8_t>(FLD_CHAR));
  for (int i = valBeg_; i < valLim_; i += 16) {
    uint8x16_t eq = vceqq_u8(vld1q_u8(base + i), soh);
    // 16 compare results -> 64-bit mask, 4 bits per byte
    uint64_t mask = vget_lane_u64(vreinterpret_u64_u8(vshrn_n_u16(vreinterpretq_u16_u8(eq), 4)), 0);
    int rem = valLim_ - i;
    if (rem < 16) {
      mask &= ~0ULL >> (64 - 4 * rem);
    }
    while (mask) {
      int bit = __builtin_ctzll(mask);
      soh_[n++] = static_cast<uint16_t>(i + (bit >> 2));
      mask &= ~(0xFULL << bit);
    }
  }
  return n;
}
#else
int AbstractMessage::indexSoh() {
  int n = 0;
  for (int i = valBeg_; i < valLim_; i++) {
    if (bytes_[i] == FLD_CHAR) soh_[n++] = static_cast<uint16_t>(i);
  }
  return n;
}
#endif

AbstractMessage* AbstractMessage::mapAll() {
  indexSoh();
  sohIx_ = 0;
  int ix = valBeg_;
  while (ix < valLim_) {
    AbstractField* field = mapField(ix);
    if (head_ == nullptr) {
      head_ = field;
      tail_ = field;
    } else {
      tail_ = tail_->append(field);
    }
    ix = field->valLim_ + 1;
    sohIx_++;
  }
  dirty_ = false;
  return this;
}

StringRef* AbstractMessage::unknownField(int ix) {
  StringRef* aField = stringRefPool_.next();
  aField->tag_ = &UNKNOWN_TAG;
  aField->fldBeg_ = ix;
  int eq = ix;
  while (bytes_[eq] != '=') {
    eq++;
  }
  aField->valBeg_ = eq + 1;
  aField->valLim_ = soh_[sohIx_];
  aField->version_ = version_;
  return aField;
}

std::string AbstractMessage::toDebugFixString() {
  if (dirty_) {
    write();
  }
  if (valLen() < 1) {
    return "";
  }
  std::string s(bytes_ + valBeg_, valLen());
  for (char& c : s) {
    if (c == FLD_CHAR) c = '|';
  }
  return s;
}

}  // namespace fix

#include "fix/message.hpp"

#include <cstring>

#if defined(__ARM_NEON)
#include <arm_neon.h>
#elif defined(__SSE2__)
#include <emmintrin.h>
#endif

#include "fix/group.hpp"
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

AbstractMessage::AbstractMessage() : stringRefPool_(this), listHead_(this, &UNKNOWN_TAG) {
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
#elif defined(__SSE2__)
int AbstractMessage::indexSoh() {
  int n = 0;
  const __m128i soh = _mm_set1_epi8(FLD_CHAR);
  for (int i = valBeg_; i < valLim_; i += 16) {
    __m128i eq = _mm_cmpeq_epi8(_mm_loadu_si128(reinterpret_cast<const __m128i*>(bytes_ + i)), soh);
    unsigned mask = static_cast<unsigned>(_mm_movemask_epi8(eq));  // 1 bit per byte
    int rem = valLim_ - i;
    if (rem < 16) {
      mask &= (1u << rem) - 1;
    }
    while (mask) {
      soh_[n++] = static_cast<uint16_t>(i + __builtin_ctz(mask));
      mask &= mask - 1;
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

// Branchless per field, except for group fields and tags without '=' in the first 8 bytes (both rare):
// SWAR finds '=' and converts the tag digits, one table load gives the slot, a select picks the field
// (known slot, or the next unknown-pool entry), plain stores map it and append it after a sentinel.
// Input is assumed to be valid FIX: tags are not validated (that is the session layer's job).
AbstractMessage* AbstractMessage::mapAll() {
  const int n = indexSoh();
  int& pool = stringRefPool_.pointer_;
  AbstractField* tail = &listHead_;
  int fldBeg = valBeg_;
  for (int k = 0; k < n; k++) {
    sohIx_ = k;
    const int valLim = soh_[k];
    uint64_t w;
    std::memcpy(&w, bytes_ + fldBeg, 8);
    const uint64_t x = w ^ 0x3D3D3D3D3D3D3D3DULL;  // '=' bytes become 0
    const uint64_t z = (x - 0x0101010101010101ULL) & ~x & 0x8080808080808080ULL;
    AbstractField* f;
    if (__builtin_expect(z == 0, 0)) {
      f = unknownField(fldBeg);  // tag longer than 7 characters
    } else {
      const int len = __builtin_ctzll(z) >> 3;
      // digits to the top bytes, leading zeros below; borrows from bytes after '=' are shifted out
      uint64_t d = ((w - 0x3030303030303030ULL) << ((8 - len) * 8 - 1)) << 1;
      d = (d * 10 + (d >> 8)) & 0x00FF00FF00FF00FFULL;
      d = (d * 100 + (d >> 16)) & 0x0000FFFF0000FFFFULL;
      d = (d * 10000 + (d >> 32)) & 0xFFFFFFFFULL;
      const int tag = d <= static_cast<uint64_t>(maxTag_) ? static_cast<int>(d) : 0;
      const unsigned slot = slotOfTag_[tag];
      if (__builtin_expect(slot >= static_cast<unsigned>(groupBase_), 0)) {
        f = slotGroups_[slot - groupBase_]->map(tag, fldBeg);
      } else {
        AbstractField* known = slotFields_[slot];
        AbstractField* unknown = stringRefPool_.at(pool);
        f = slot != 0 ? known : unknown;
        pool += slot == 0;
        f->fldBeg_ = fldBeg;
        f->valBeg_ = fldBeg + len + 1;
        f->valLim_ = valLim;
        f->version_ = version_;
        f->hash_ = 0;
        f->unset_ = false;
        f->parsed_ = false;
      }
    }
    tail->next_ = f;
    f->prev_ = tail;
    tail = f;
    fldBeg = valLim + 1;
  }
  tail->next_ = nullptr;
  if (n > 0) {
    head_ = listHead_.next_;
    head_->prev_ = nullptr;
    tail_ = tail;
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

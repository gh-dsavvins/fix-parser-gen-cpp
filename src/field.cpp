#include "fix/field.hpp"

#include <stdexcept>

#include "fix/message.hpp"

namespace fix {

// ---------------------------------------------------------------- AbstractField

AbstractField::AbstractField(AbstractMessage* message, const Tag* tag)
    : message_(message), tag_(tag), version_(UNSET_LONG) {}

bool AbstractField::dirty() const {
  return message_ == nullptr || message_->version_ == -version_;
}

bool AbstractField::mapped() const {
  return message_ != nullptr && message_->version_ == version_;
}

void AbstractField::copyFrom(const AbstractField& field) {
  const char* from;
  int srcBeg = 0, srcLen;
  if (field.dirty()) {
    from = field.newValue_.data();
    srcLen = field.newValueLength_;
  } else {
    from = field.message_->bytes_;
    srcBeg = field.valBeg_;
    srcLen = field.valLen();
  }
  if (srcLen > 0) {
    ensureCapacity(srcLen);
    std::memmove(newValue_.data(), from + srcBeg, srcLen);
    newValueLength_ = srcLen;
    onValueSet();
  }
}

void AbstractField::set(std::string_view value, int offset, int length) {
  if (length > 0) {
    ensureCapacity(length);
    std::memcpy(newValue_.data(), value.data() + offset, length);
    newValueLength_ = length;
    onValueSet();
  }
}

void AbstractField::copyFrom(const char* bytes, int offset, int length) {
  if (length > 0) {
    ensureCapacity(length);
    std::memmove(newValue_.data(), bytes + offset, length);
    newValueLength_ = length;
    onValueSet();
  }
}

void AbstractField::ensureCapacity(int length) {
  if (static_cast<int>(newValue_.size()) < length) {
    newValue_.resize(length);
  }
}

void AbstractField::onValueSet() {
  hash_ = 0;
  if (message_ != nullptr) {
    if (message_->mapped() && !mapped() && !dirty()) {
      AbstractField* toInsertThisAfter = header_ ? message_->msgType() : message_->tail_->prev_;
      fldBeg_ = valBeg_ = valLim_ = 0;
      insertAfter(toInsertThisAfter);
    }
    version_ = -message_->version_;
    message_->dirty_ = true;
  }
  unset_ = false;
  parsed_ = false;
}

void AbstractField::shift(int offset) {
  fldBeg_ += offset;
  valBeg_ += offset;
  valLim_ += offset;
}

int AbstractField::writeMapped(int offset) {
  char* bytes = message_->bytes_;
  const std::string_view fieldTagBytes = tag_->bytes;
  const int tagLen = static_cast<int>(fieldTagBytes.size());
  if (unset_ && valBeg_ > 0) {
    int diff = tagLen + valLen() + 1;
    std::memmove(bytes + fldBeg_ - 1, bytes + valLim_, message_->valLim_ - valLim_);
    message_->valLim_ -= diff;
    offset -= diff;
    fldBeg_ = valBeg_ = valLim_ = newValueLength_ = 0;
    return offset;
  }
  if (dirty()) {
    int oldValLen = valLen();
    int diff = newValueLength_ - oldValLen;
    if (fldBeg_ == 0) {
      fldBeg_ = prev_->valLim_ + 1;
      valBeg_ = fldBeg_ + tagLen;
      valLim_ = valBeg_ + newValueLength_;
      diff += tagLen + 1;
      if (diff != 0) {
        std::memmove(bytes + prev_->valLim_ + diff, bytes + prev_->valLim_, message_->valLim_ - prev_->valLim_);
        message_->valLim_ += diff;
        offset += diff;
      }
      std::memcpy(bytes + fldBeg_, fieldTagBytes.data(), tagLen);
    } else {
      shift(offset);
      if (diff != 0) {
        std::memmove(bytes + valLim_ + diff, bytes + valLim_, message_->valLim_ - valLim_);
        message_->valLim_ += diff;
        offset += diff;
      }
      valLim_ += diff;
    }
    std::memcpy(bytes + valBeg_, newValue_.data(), newValueLength_);
  } else {
    shift(offset);
  }
  return offset;
}

int AbstractField::writeUnmapped(int msgValLim) {
  if (dirty() && !unset_) {
    char* bytes = message_->bytes_;
    const std::string_view fieldTagBytes = tag_->bytes;
    const int tagLen = static_cast<int>(fieldTagBytes.size());
    fldBeg_ = msgValLim;
    valBeg_ = fldBeg_ + tagLen;
    valLim_ = valBeg_ + newValueLength_;
    msgValLim = valLim_;
    std::memcpy(bytes + fldBeg_, fieldTagBytes.data(), tagLen);
    std::memcpy(bytes + valBeg_, newValue_.data(), newValueLength_);
    bytes[msgValLim++] = FLD_CHAR;
  }
  return msgValLim;
}

int AbstractField::write(int offset) {
  if (message_ == nullptr) {
    return offset;
  }
  if (message_->mapped()) {
    return writeMapped(offset);
  }
  return writeUnmapped(offset);
}

void AbstractField::unset() {
  if (message_ != nullptr) {
    version_ = -message_->version_;
    message_->dirty_ = true;
  }
  unset_ = true;
  newValueLength_ = 0;
}

void AbstractField::insertAfter(AbstractField* field) {
  prev_ = field;
  if (prev_ != nullptr) {
    next_ = prev_->next_;
    prev_->next_ = this;
    if (next_ != nullptr) {
      next_->prev_ = this;
    }
  } else {
    next_ = nullptr;
  }
}

// ---------------------------------------------------------------- StringRef

StringRef& StringRef::append(std::string_view sequence) {
  resetIfNew();
  int length = static_cast<int>(sequence.size());
  int newLength = length + newValueLength_;
  ensureCapacity(newLength);
  for (int i = 0; i < length; i++, newValueLength_++) {
    newValue_[newValueLength_] = sequence[i];
  }
  onValueSet();
  return *this;
}

StringRef& StringRef::append(int64_t number) {
  resetIfNew();
  newValueLength_ += NumberRef::stringSize(number);
  ensureCapacity(newValueLength_);
  NumberRef::chars(number, newValueLength_, newValue_.data());
  onValueSet();
  return *this;
}

void StringRef::resetIfNew() {
  if (!mapped() && !dirty()) {
    newValueLength_ = 0;
  }
}

bool StringRef::equals(std::string_view s) const {
  int length = this->length();
  if (length == static_cast<int>(s.size())) {
    for (int i = 0; i < length; i++) {
      if (charAt(i) != s[i]) {
        return false;
      }
    }
    return true;
  }
  return false;
}

int StringRef::length() const {
  if (dirty()) {
    return newValueLength_;
  }
  if (!mapped()) {
    return 0;
  }
  return valLen();
}

char StringRef::charAt(int ix) const {
  if (dirty()) {
    return newValue_[ix];
  }
  if (!mapped()) {
    return static_cast<char>(0xFF);
  }
  return message_->bytes()[valBeg_ + ix];
}

int StringRef::hashCode() {
  return hash_ == 0 ? (hash_ = computeHashCode()) : hash_;
}

int StringRef::computeHashCode() const {
  const char* bytes = dirty() ? newValue_.data() : message_->bytes();
  int beg = dirty() ? 0 : valBeg_;
  int lim = dirty() ? newValueLength_ : valLim_;
  uint32_t result = 1;
  for (int i = beg; i < lim; i++) {
    result = 31 * result + static_cast<uint8_t>(bytes[i]);
  }
  return static_cast<int>(result);
}

std::string StringRef::toString() const {
  if (unset_) return std::string(UNSET_STR);
  if (dirty()) return std::string(newValue_.data(), newValueLength_);
  if (mapped()) return std::string(message_->bytes() + valBeg_, valLen());
  return std::string(UNSET_STR);
}

// ---------------------------------------------------------------- NumberRef

static constexpr char DigitTens[] = {
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
    '2', '2', '2', '2', '2', '2', '2', '2', '2', '2', '3', '3', '3', '3', '3', '3', '3', '3', '3', '3',
    '4', '4', '4', '4', '4', '4', '4', '4', '4', '4', '5', '5', '5', '5', '5', '5', '5', '5', '5', '5',
    '6', '6', '6', '6', '6', '6', '6', '6', '6', '6', '7', '7', '7', '7', '7', '7', '7', '7', '7', '7',
    '8', '8', '8', '8', '8', '8', '8', '8', '8', '8', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9'};

static constexpr char DigitOnes[] = {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int NumberRef::stringSize(int64_t x) {
  int d = 1;
  if (x >= 0) {
    d = 0;
    x = -x;
  }
  int64_t p = -10;
  for (int i = 1; i < 19; i++) {
    if (x > p) {
      return i + d;
    }
    p = 10 * p;
  }
  return 19 + d;
}

void NumberRef::chars(int64_t i, int index, char* buf) {
  int64_t q;
  int r;
  int charPos = index;
  bool negative = (i < 0);
  if (!negative) {
    i = -i;
  }
  while (i <= std::numeric_limits<int32_t>::min()) {
    q = i / 100;
    r = static_cast<int>((q * 100) - i);
    i = q;
    buf[--charPos] = DigitOnes[r];
    buf[--charPos] = DigitTens[r];
  }
  int q2;
  int i2 = static_cast<int>(i);
  while (i2 <= -100) {
    q2 = i2 / 100;
    r = (q2 * 100) - i2;
    i2 = q2;
    buf[--charPos] = DigitOnes[r];
    buf[--charPos] = DigitTens[r];
  }
  q2 = i2 / 10;
  r = (q2 * 10) - i2;
  buf[--charPos] = static_cast<char>('0' + r);
  if (q2 < 0) {
    buf[--charPos] = static_cast<char>('0' - q2);
  }
  if (negative) {
    buf[--charPos] = '-';
  }
}

void NumberRef::append(int64_t i, StringRef& ref) {
  int size = stringSize(i);
  ref.ensureCapacity(size);
  chars(i, size, ref.newValue_.data());
  ref.newValueLength_ = size;
}

// ---------------------------------------------------------------- LongRef

int64_t LongRef::value() {
  if (dirty()) {
    return value_;
  }
  if (!mapped()) {
    return UNSET_LONG;
  }
  if (!parsed_) {
    parse();
  }
  return value_;
}

void LongRef::parse() {
  value_ = 0;
  bool neg = false;
  const char* bytes = message_->bytes();
  int beg = valBeg_;
  if (bytes[beg] == '-') {
    neg = true;
    beg++;
  }
  for (int i = beg; i < valLim_; i++) {
    value_ *= 10;
    value_ += bytes[i] - '0';
  }
  if (neg) {
    value_ = -value_;
  }
}

LongRef& LongRef::set(int64_t value) {
  value_ = value;
  int charLength = stringSize(value);
  ensureCapacity(charLength);
  chars(value, charLength, newValue_.data());
  newValueLength_ = charLength;
  onValueSet();
  return *this;
}

void LongRef::unset() {
  AbstractField::unset();
  value_ = UNSET_LONG;
}

std::string LongRef::toString() const {
  if (dirty()) return std::to_string(value_);
  if (mapped()) return std::string(message_->bytes() + valBeg_, valLen());
  return std::string(UNSET_STR);
}

// ---------------------------------------------------------------- DoubleRef

static constexpr int64_t MULTIPLIERS[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};

void DoubleRef::parse() {
  exponent_ = 0;
  mantissa_ = 0;
  const char* bytes = message_->bytes();
  int beg = valBeg_;
  bool negative = false;
  if (bytes[beg] == '-') {
    negative = true;
    beg++;
  }
  for (int i = beg; i < valLim_; i++) {
    char c = bytes[i];
    if (c == '.') {
      exponent_ = valLim_ - i - 1;
    } else {
      mantissa_ *= 10;
      mantissa_ += c - '0';
    }
  }
  if (negative) {
    mantissa_ = -mantissa_;
  }
  exponent_ = -exponent_;
  parsed_ = true;
}

DoubleRef& DoubleRef::set(int64_t mantissa, int exponent) {
  if (exponent > 0) {
    throw std::runtime_error("exponent can not be positive");
  }
  mantissa_ = mantissa;
  exponent_ = exponent;
  writeNewBytes();
  onValueSet();
  return *this;
}

DoubleRef& DoubleRef::set(double val, int exponent) {
  if (exponent > 0) {
    throw std::runtime_error("exponent can not be positive");
  }
  exponent_ = exponent;
  mantissa_ = static_cast<int64_t>(val * MULTIPLIERS[-exponent]);
  writeNewBytes();
  onValueSet();
  return *this;
}

void DoubleRef::writeNewBytes() {
  int exponentAbs = -exponent_;
  bool negative = mantissa_ < 0;
  int digits = stringSize(mantissa_);
  chars(mantissa_, digits, buf_);
  int negChars = negative ? 1 : 0;
  int dotChars = exponentAbs > 0 ? 1 : 0;
  digits -= negChars;
  int zeroes = 0;
  if (exponentAbs >= digits) {
    zeroes += 1 + (exponentAbs - digits);
  }
  int charLen = negChars + zeroes + dotChars + digits;
  int dotIx = (charLen - exponentAbs) - 1;
  int digitStartIndex = charLen - digits;
  if (exponentAbs < digits) {
    digitStartIndex--;
  }
  ensureCapacity(charLen);
  int skip = 0;
  for (int i = 0; i < charLen; i++) {
    char c;
    if (i == 0 && mantissa_ < 0) {
      c = buf_[i];
    } else {
      if (exponent_ == 0) {
        c = buf_[i];
      } else if (i == dotIx) {
        skip++;
        c = '.';
      } else if (i < digitStartIndex) {
        skip++;
        c = '0';
      } else {
        c = buf_[i - skip];
      }
    }
    newValue_[i] = c;
  }
  newValueLength_ = charLen;
}

double DoubleRef::value() {
  int64_t m = mantissa();
  if (m == UNSET_LONG) {
    return UNSET_DOUBLE;
  }
  int thisExponent = exponent();
  int e = thisExponent == UNSET_INT ? 0 : -thisExponent;
  if (e == 0) {
    return static_cast<double>(m);
  }
  return static_cast<double>(m) / static_cast<double>(MULTIPLIERS[e]);
}

int64_t DoubleRef::mantissa() {
  if (dirty()) {
    return mantissa_;
  }
  if (!mapped()) {
    return UNSET_LONG;
  }
  if (!parsed_) {
    parse();
  }
  return mantissa_;
}

int DoubleRef::exponent() {
  if (dirty()) {
    return exponent_;
  }
  if (!mapped()) {
    return UNSET_INT;
  }
  if (!parsed_) {
    parse();
  }
  return exponent_;
}

void DoubleRef::unset() {
  AbstractField::unset();
  mantissa_ = UNSET_LONG;
  exponent_ = UNSET_INT;
}

std::string DoubleRef::toString() const {
  if (dirty()) return std::string(newValue_.data(), newValueLength_);
  if (mapped()) return std::string(message_->bytes() + valBeg_, valLen());
  return std::string(UNSET_STR);
}

// ---------------------------------------------------------------- BooleanRef

BooleanRef& BooleanRef::newValue(bool value) {
  newBool_ = value;
  ensureCapacity(1);
  newValue_[0] = value ? 'Y' : 'N';
  newValueLength_ = 1;
  onValueSet();
  return *this;
}

void BooleanRef::parse() {
  switch (message_->bytes()[valBeg_]) {
    case 'Y': case 'y': case 'T': case 't': case '1': parsedValue_ = true; break;
    case 'N': case 'n': case 'F': case 'f': case '0': parsedValue_ = false; break;
    default: parsedValue_.reset();
  }
  parsed_ = true;
}

std::optional<bool> BooleanRef::value() {
  if (dirty()) {
    return newBool_;
  }
  if (!mapped()) {
    return std::nullopt;
  }
  if (!parsed_) {
    parse();
  }
  return parsedValue_;
}

void BooleanRef::unset() {
  AbstractField::unset();
  parsedValue_.reset();
}

std::string BooleanRef::toString() const {
  if (dirty()) return newBool_ ? "Y" : "N";
  if (mapped()) return std::string(message_->bytes() + valBeg_, valLen());
  return std::string(UNSET_STR);
}

}  // namespace fix

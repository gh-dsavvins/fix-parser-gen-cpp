#pragma once

#include <cstdint>
#include <cstring>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

#include "fix/environment.hpp"
#include "fix/tag.hpp"

namespace fix {

class AbstractMessage;
class StringRefPool;

/** A field maps onto the message's bytes (fldBeg/valBeg/valLim) and decodes lazily; set values go to newValue. */
class AbstractField {
 public:
  AbstractField(AbstractMessage* message, const Tag* tag);
  virtual ~AbstractField() = default;
  AbstractField(const AbstractField&) = delete;
  AbstractField& operator=(const AbstractField&) = delete;

  const Tag& tag() const { return *tag_; }
  int fldBeg() const { return fldBeg_; }
  void fldBeg(int v) { fldBeg_ = v; }
  int valBeg() const { return valBeg_; }
  void valBeg(int v) { valBeg_ = v; }
  int valLim() const { return valLim_; }
  void valLim(int v) { valLim_ = v; }
  int valLen() const { return valLim_ - valBeg_; }
  bool header() const { return header_; }
  int newValueLength() const { return newValueLength_; }
  void newValueLength(int v) { newValueLength_ = v; }
  AbstractField* next() const { return next_; }
  AbstractField* prev() const { return prev_; }

  bool dirty() const;
  bool mapped() const;

  void copyFrom(const AbstractField& field);
  void set(std::string_view value) { set(value, 0, static_cast<int>(value.size())); }
  void set(std::string_view value, int offset, int length);
  void copyFrom(const char* bytes, int offset, int length);

  /** Value ends at the message's next indexed SOH (see AbstractMessage::indexSoh); defined in message.hpp. */
  AbstractField* map(int64_t version, const char* bytes, int fldBeg);

  int write(int offset);
  virtual void unset();
  virtual std::string toString() const = 0;

 protected:
  friend class AbstractMessage;
  friend class AbstractGroup;
  friend class StringRefPool;
  friend class NumberRef;

  void ensureCapacity(int length);
  void onValueSet();

  AbstractField* append(AbstractField* field) {
    field->prev_ = this;
    field->next_ = next_;
    if (next_ != nullptr) {
      next_->prev_ = field;
    }
    next_ = field;
    return field;
  }

  void insertAfter(AbstractField* field);

  AbstractMessage* message_;
  const Tag* tag_;
  int hash_ = 0;
  int64_t version_;
  int fldBeg_ = 0;
  int valBeg_ = 0;
  int valLim_ = 0;
  bool unset_ = false;
  bool parsed_ = false;
  bool header_ = false;

  std::vector<char> newValue_;
  int newValueLength_ = 0;
  AbstractField* prev_ = nullptr;
  AbstractField* next_ = nullptr;

 private:
  void shift(int offset);
  int writeMapped(int offset);
  int writeUnmapped(int msgValLim);
};

class StringRef : public AbstractField {
 public:
  StringRef() : StringRef(nullptr, nullptr) {}
  StringRef(AbstractMessage* message, const Tag* tag) : AbstractField(message, tag) {}

  StringRef& append(std::string_view sequence);
  StringRef& append(int64_t number);

  bool equals(std::string_view s) const;
  int length() const;
  char charAt(int ix) const;
  int hashCode();
  std::string toString() const override;

 private:
  void resetIfNew();
  int computeHashCode() const;
};

class NumberRef : public AbstractField {
 public:
  NumberRef(AbstractMessage* message, const Tag* tag) : AbstractField(message, tag) {}

  static int stringSize(int64_t x);
  static void chars(int64_t i, int index, char* buf);
  static void append(int64_t i, StringRef& ref);

 protected:
  char buf_[20] = {};
};

class LongRef : public NumberRef {
 public:
  LongRef() : LongRef(nullptr, nullptr) {}
  LongRef(AbstractMessage* message, const Tag* tag) : NumberRef(message, tag) {}

  int64_t value();
  LongRef& set(int64_t value);
  bool equals(const LongRef& o) const { return value_ == o.value_; }
  void unset() override;
  std::string toString() const override;

 protected:
  void parse();
  int64_t value_ = 0;
};

class DoubleRef : public NumberRef {
 public:
  DoubleRef() : DoubleRef(nullptr, nullptr) {}
  DoubleRef(AbstractMessage* message, const Tag* tag) : NumberRef(message, tag) {}

  DoubleRef& set(int64_t mantissa, int exponent);
  DoubleRef& set(double val, int exponent);
  double value();
  int64_t mantissa();
  int exponent();
  void unset() override;
  std::string toString() const override;

 private:
  void parse();
  void writeNewBytes();
  int exponent_ = 0;
  int64_t mantissa_ = 0;
};

class BooleanRef : public AbstractField {
 public:
  BooleanRef() : BooleanRef(nullptr, nullptr) {}
  BooleanRef(AbstractMessage* message, const Tag* tag) : AbstractField(message, tag) {}

  BooleanRef& newValue(bool value);
  std::optional<bool> value();
  void unset() override;
  std::string toString() const override;

 private:
  void parse();
  std::optional<bool> parsedValue_;
  bool newBool_ = false;
};

}  // namespace fix

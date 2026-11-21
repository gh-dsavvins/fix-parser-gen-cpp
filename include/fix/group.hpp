#pragma once

#include <array>
#include <memory>

#include "fix/field.hpp"
#include "fix/message.hpp"
#include "fix/tag.hpp"

namespace fix {

/** One repetition of a repeating group (generated per group). */
class Component {
 public:
  explicit Component(AbstractMessage* message) : message_(message) {}
  virtual ~Component() = default;
  Component(const Component&) = delete;
  Component& operator=(const Component&) = delete;

  virtual AbstractField* map(int tag, int fldBeg) = 0;
  virtual int write(int valBeg) = 0;
  virtual AbstractField* field(const Tag& tag) = 0;

 protected:
  AbstractMessage* message_;
};

class AbstractGroup {
 public:
  static constexpr int MAX_COMPONENTS = 1 << 4;
  using ComponentFactory = Component* (*)(AbstractMessage*);

  AbstractGroup(AbstractMessage* message, const Tag* noTag, const Tag* idTag, ComponentFactory gen);
  virtual ~AbstractGroup() = default;
  AbstractGroup(const AbstractGroup&) = delete;
  AbstractGroup& operator=(const AbstractGroup&) = delete;

  Component* component(int ix) { return components_[ix].get(); }
  int componentCount() const { return componentCount_; }
  const Tag& tag() const { return *noTag_; }

  AbstractField* map(int tag, int fldBeg);
  Component* newComponent();
  AbstractField* field(const Tag& tag);
  int write(int valBeg);

 protected:
  LongRef countField_;
  std::array<std::unique_ptr<Component>, MAX_COMPONENTS> components_;
  AbstractMessage* message_;
  const Tag* noTag_;
  const Tag* idTag_;
  int componentCount_ = 0;
};

}  // namespace fix

#include "fix/group.hpp"

namespace fix {

AbstractGroup::AbstractGroup(AbstractMessage* message, const Tag* noTag, const Tag* idTag, ComponentFactory gen)
    : countField_(message, noTag), message_(message), noTag_(noTag), idTag_(idTag) {
  for (auto& c : components_) {
    c.reset(gen(message));
  }
}

AbstractField* AbstractGroup::map(int tag, int fldBeg) {
  if (tag == noTag_->number) {
    componentCount_ = 0;
    return countField_.map(message_->version(), message_->bytes(), fldBeg);
  }
  if (countField_.version_ != message_->version()) {
    return message_->unknownField(fldBeg);
  }
  if (tag == idTag_->number) {
    componentCount_++;
  }
  Component* component = components_[componentCount_ - 1].get();
  return component->map(tag, fldBeg);
}

Component* AbstractGroup::newComponent() {
  Component* component = components_[componentCount_++].get();
  countField_.set(componentCount_);
  return component;
}

AbstractField* AbstractGroup::field(const Tag& tag) {
  if (&tag == noTag_) {
    return &countField_;
  }
  return nullptr;
}

int AbstractGroup::write(int valBeg) {
  int index = valBeg;
  index = countField_.write(index);
  for (int i = 0; i < componentCount_; i++) {
    index = components_[i]->write(index);
  }
  return index;
}

}  // namespace fix

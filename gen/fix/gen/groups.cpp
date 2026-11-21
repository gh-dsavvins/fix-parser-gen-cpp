#include "fix/gen/groups.hpp"

namespace fix::gen::group {

SecurityAltIDGroupComp::SecurityAltIDGroupComp(AbstractMessage* message)
    : Component(message),
    securityAltID_(message),
    securityAltIDSource_(message) {}

AbstractField* SecurityAltIDGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 455: return securityAltID_.map(version, bytes, fldBeg);
    case 456: return securityAltIDSource_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* SecurityAltIDGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 455: return &securityAltID_;
    case 456: return &securityAltIDSource_;
    default: return nullptr;
  }
}

int SecurityAltIDGroupComp::write(int valBeg) {
  valBeg = securityAltID_.write(valBeg);
  valBeg = securityAltIDSource_.write(valBeg);
  return valBeg;
}

EventsGroupComp::EventsGroupComp(AbstractMessage* message)
    : Component(message),
    eventType_(message),
    eventDate_(message),
    eventPx_(message),
    eventText_(message) {}

AbstractField* EventsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 865: return eventType_.map(version, bytes, fldBeg);
    case 866: return eventDate_.map(version, bytes, fldBeg);
    case 867: return eventPx_.map(version, bytes, fldBeg);
    case 868: return eventText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* EventsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 865: return &eventType_;
    case 866: return &eventDate_;
    case 867: return &eventPx_;
    case 868: return &eventText_;
    default: return nullptr;
  }
}

int EventsGroupComp::write(int valBeg) {
  valBeg = eventType_.write(valBeg);
  valBeg = eventDate_.write(valBeg);
  valBeg = eventPx_.write(valBeg);
  valBeg = eventText_.write(valBeg);
  return valBeg;
}

UnderlyingSecurityAltIDGroupComp::UnderlyingSecurityAltIDGroupComp(AbstractMessage* message)
    : Component(message),
    underlyingSecurityAltID_(message),
    underlyingSecurityAltIDSource_(message) {}

AbstractField* UnderlyingSecurityAltIDGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 458: return underlyingSecurityAltID_.map(version, bytes, fldBeg);
    case 459: return underlyingSecurityAltIDSource_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* UnderlyingSecurityAltIDGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 458: return &underlyingSecurityAltID_;
    case 459: return &underlyingSecurityAltIDSource_;
    default: return nullptr;
  }
}

int UnderlyingSecurityAltIDGroupComp::write(int valBeg) {
  valBeg = underlyingSecurityAltID_.write(valBeg);
  valBeg = underlyingSecurityAltIDSource_.write(valBeg);
  return valBeg;
}

UnderlyingStipsGroupComp::UnderlyingStipsGroupComp(AbstractMessage* message)
    : Component(message),
    underlyingStipType_(message),
    underlyingStipValue_(message) {}

AbstractField* UnderlyingStipsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 888: return underlyingStipType_.map(version, bytes, fldBeg);
    case 889: return underlyingStipValue_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* UnderlyingStipsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 888: return &underlyingStipType_;
    case 889: return &underlyingStipValue_;
    default: return nullptr;
  }
}

int UnderlyingStipsGroupComp::write(int valBeg) {
  valBeg = underlyingStipType_.write(valBeg);
  valBeg = underlyingStipValue_.write(valBeg);
  return valBeg;
}

UnderlyingsGroupComp::UnderlyingsGroupComp(AbstractMessage* message)
    : Component(message),
    underlyingSymbol_(message),
    underlyingSymbolSfx_(message),
    underlyingSecurityID_(message),
    underlyingSecurityIDSource_(message),
    underlyingSecurityAltIDGroup_(message),
    underlyingProduct_(message),
    underlyingCFICode_(message),
    underlyingSecurityType_(message),
    underlyingSecuritySubType_(message),
    underlyingMaturityMonthYear_(message),
    underlyingMaturityDate_(message),
    underlyingPutOrCall_(message),
    underlyingCouponPaymentDate_(message),
    underlyingIssueDate_(message),
    underlyingRepoCollateralSecurityType_(message),
    underlyingRepurchaseTerm_(message),
    underlyingRepurchaseRate_(message),
    underlyingFactor_(message),
    underlyingCreditRating_(message),
    underlyingInstrRegistry_(message),
    underlyingCountryOfIssue_(message),
    underlyingStateOrProvinceOfIssue_(message),
    underlyingLocaleOfIssue_(message),
    underlyingRedemptionDate_(message),
    underlyingStrikePrice_(message),
    underlyingStrikeCurrency_(message),
    underlyingOptAttribute_(message),
    underlyingContractMultiplier_(message),
    underlyingCouponRate_(message),
    underlyingSecurityExchange_(message),
    underlyingIssuer_(message),
    encodedUnderlyingIssuerLen_(message),
    encodedUnderlyingIssuer_(message),
    underlyingSecurityDesc_(message),
    encodedUnderlyingSecurityDescLen_(message),
    encodedUnderlyingSecurityDesc_(message),
    underlyingCPProgram_(message),
    underlyingCPRegType_(message),
    underlyingCurrency_(message),
    underlyingQty_(message),
    underlyingPx_(message),
    underlyingDirtyPrice_(message),
    underlyingEndPrice_(message),
    underlyingStartValue_(message),
    underlyingCurrentValue_(message),
    underlyingEndValue_(message),
    underlyingStipsGroup_(message) {}

AbstractField* UnderlyingsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 311: return underlyingSymbol_.map(version, bytes, fldBeg);
    case 312: return underlyingSymbolSfx_.map(version, bytes, fldBeg);
    case 309: return underlyingSecurityID_.map(version, bytes, fldBeg);
    case 305: return underlyingSecurityIDSource_.map(version, bytes, fldBeg);
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.map(tag, fldBeg);
    case 462: return underlyingProduct_.map(version, bytes, fldBeg);
    case 463: return underlyingCFICode_.map(version, bytes, fldBeg);
    case 310: return underlyingSecurityType_.map(version, bytes, fldBeg);
    case 763: return underlyingSecuritySubType_.map(version, bytes, fldBeg);
    case 313: return underlyingMaturityMonthYear_.map(version, bytes, fldBeg);
    case 542: return underlyingMaturityDate_.map(version, bytes, fldBeg);
    case 315: return underlyingPutOrCall_.map(version, bytes, fldBeg);
    case 241: return underlyingCouponPaymentDate_.map(version, bytes, fldBeg);
    case 242: return underlyingIssueDate_.map(version, bytes, fldBeg);
    case 243: return underlyingRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 244: return underlyingRepurchaseTerm_.map(version, bytes, fldBeg);
    case 245: return underlyingRepurchaseRate_.map(version, bytes, fldBeg);
    case 246: return underlyingFactor_.map(version, bytes, fldBeg);
    case 256: return underlyingCreditRating_.map(version, bytes, fldBeg);
    case 595: return underlyingInstrRegistry_.map(version, bytes, fldBeg);
    case 592: return underlyingCountryOfIssue_.map(version, bytes, fldBeg);
    case 593: return underlyingStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 594: return underlyingLocaleOfIssue_.map(version, bytes, fldBeg);
    case 247: return underlyingRedemptionDate_.map(version, bytes, fldBeg);
    case 316: return underlyingStrikePrice_.map(version, bytes, fldBeg);
    case 941: return underlyingStrikeCurrency_.map(version, bytes, fldBeg);
    case 317: return underlyingOptAttribute_.map(version, bytes, fldBeg);
    case 436: return underlyingContractMultiplier_.map(version, bytes, fldBeg);
    case 435: return underlyingCouponRate_.map(version, bytes, fldBeg);
    case 308: return underlyingSecurityExchange_.map(version, bytes, fldBeg);
    case 306: return underlyingIssuer_.map(version, bytes, fldBeg);
    case 362: return encodedUnderlyingIssuerLen_.map(version, bytes, fldBeg);
    case 363: return encodedUnderlyingIssuer_.map(version, bytes, fldBeg);
    case 307: return underlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 364: return encodedUnderlyingSecurityDescLen_.map(version, bytes, fldBeg);
    case 365: return encodedUnderlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 877: return underlyingCPProgram_.map(version, bytes, fldBeg);
    case 878: return underlyingCPRegType_.map(version, bytes, fldBeg);
    case 318: return underlyingCurrency_.map(version, bytes, fldBeg);
    case 879: return underlyingQty_.map(version, bytes, fldBeg);
    case 810: return underlyingPx_.map(version, bytes, fldBeg);
    case 882: return underlyingDirtyPrice_.map(version, bytes, fldBeg);
    case 883: return underlyingEndPrice_.map(version, bytes, fldBeg);
    case 884: return underlyingStartValue_.map(version, bytes, fldBeg);
    case 885: return underlyingCurrentValue_.map(version, bytes, fldBeg);
    case 886: return underlyingEndValue_.map(version, bytes, fldBeg);
    case 887: case 888: case 889:
      return underlyingStipsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* UnderlyingsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 311: return &underlyingSymbol_;
    case 312: return &underlyingSymbolSfx_;
    case 309: return &underlyingSecurityID_;
    case 305: return &underlyingSecurityIDSource_;
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.field(tag);
    case 462: return &underlyingProduct_;
    case 463: return &underlyingCFICode_;
    case 310: return &underlyingSecurityType_;
    case 763: return &underlyingSecuritySubType_;
    case 313: return &underlyingMaturityMonthYear_;
    case 542: return &underlyingMaturityDate_;
    case 315: return &underlyingPutOrCall_;
    case 241: return &underlyingCouponPaymentDate_;
    case 242: return &underlyingIssueDate_;
    case 243: return &underlyingRepoCollateralSecurityType_;
    case 244: return &underlyingRepurchaseTerm_;
    case 245: return &underlyingRepurchaseRate_;
    case 246: return &underlyingFactor_;
    case 256: return &underlyingCreditRating_;
    case 595: return &underlyingInstrRegistry_;
    case 592: return &underlyingCountryOfIssue_;
    case 593: return &underlyingStateOrProvinceOfIssue_;
    case 594: return &underlyingLocaleOfIssue_;
    case 247: return &underlyingRedemptionDate_;
    case 316: return &underlyingStrikePrice_;
    case 941: return &underlyingStrikeCurrency_;
    case 317: return &underlyingOptAttribute_;
    case 436: return &underlyingContractMultiplier_;
    case 435: return &underlyingCouponRate_;
    case 308: return &underlyingSecurityExchange_;
    case 306: return &underlyingIssuer_;
    case 362: return &encodedUnderlyingIssuerLen_;
    case 363: return &encodedUnderlyingIssuer_;
    case 307: return &underlyingSecurityDesc_;
    case 364: return &encodedUnderlyingSecurityDescLen_;
    case 365: return &encodedUnderlyingSecurityDesc_;
    case 877: return &underlyingCPProgram_;
    case 878: return &underlyingCPRegType_;
    case 318: return &underlyingCurrency_;
    case 879: return &underlyingQty_;
    case 810: return &underlyingPx_;
    case 882: return &underlyingDirtyPrice_;
    case 883: return &underlyingEndPrice_;
    case 884: return &underlyingStartValue_;
    case 885: return &underlyingCurrentValue_;
    case 886: return &underlyingEndValue_;
    case 887: case 888: case 889:
      return underlyingStipsGroup_.field(tag);
    default: return nullptr;
  }
}

int UnderlyingsGroupComp::write(int valBeg) {
  valBeg = underlyingSymbol_.write(valBeg);
  valBeg = underlyingSymbolSfx_.write(valBeg);
  valBeg = underlyingSecurityID_.write(valBeg);
  valBeg = underlyingSecurityIDSource_.write(valBeg);
  valBeg = underlyingSecurityAltIDGroup_.write(valBeg);
  valBeg = underlyingProduct_.write(valBeg);
  valBeg = underlyingCFICode_.write(valBeg);
  valBeg = underlyingSecurityType_.write(valBeg);
  valBeg = underlyingSecuritySubType_.write(valBeg);
  valBeg = underlyingMaturityMonthYear_.write(valBeg);
  valBeg = underlyingMaturityDate_.write(valBeg);
  valBeg = underlyingPutOrCall_.write(valBeg);
  valBeg = underlyingCouponPaymentDate_.write(valBeg);
  valBeg = underlyingIssueDate_.write(valBeg);
  valBeg = underlyingRepoCollateralSecurityType_.write(valBeg);
  valBeg = underlyingRepurchaseTerm_.write(valBeg);
  valBeg = underlyingRepurchaseRate_.write(valBeg);
  valBeg = underlyingFactor_.write(valBeg);
  valBeg = underlyingCreditRating_.write(valBeg);
  valBeg = underlyingInstrRegistry_.write(valBeg);
  valBeg = underlyingCountryOfIssue_.write(valBeg);
  valBeg = underlyingStateOrProvinceOfIssue_.write(valBeg);
  valBeg = underlyingLocaleOfIssue_.write(valBeg);
  valBeg = underlyingRedemptionDate_.write(valBeg);
  valBeg = underlyingStrikePrice_.write(valBeg);
  valBeg = underlyingStrikeCurrency_.write(valBeg);
  valBeg = underlyingOptAttribute_.write(valBeg);
  valBeg = underlyingContractMultiplier_.write(valBeg);
  valBeg = underlyingCouponRate_.write(valBeg);
  valBeg = underlyingSecurityExchange_.write(valBeg);
  valBeg = underlyingIssuer_.write(valBeg);
  valBeg = encodedUnderlyingIssuerLen_.write(valBeg);
  valBeg = encodedUnderlyingIssuer_.write(valBeg);
  valBeg = underlyingSecurityDesc_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDescLen_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDesc_.write(valBeg);
  valBeg = underlyingCPProgram_.write(valBeg);
  valBeg = underlyingCPRegType_.write(valBeg);
  valBeg = underlyingCurrency_.write(valBeg);
  valBeg = underlyingQty_.write(valBeg);
  valBeg = underlyingPx_.write(valBeg);
  valBeg = underlyingDirtyPrice_.write(valBeg);
  valBeg = underlyingEndPrice_.write(valBeg);
  valBeg = underlyingStartValue_.write(valBeg);
  valBeg = underlyingCurrentValue_.write(valBeg);
  valBeg = underlyingEndValue_.write(valBeg);
  valBeg = underlyingStipsGroup_.write(valBeg);
  return valBeg;
}

StipulationsGroupComp::StipulationsGroupComp(AbstractMessage* message)
    : Component(message),
    stipulationType_(message),
    stipulationValue_(message) {}

AbstractField* StipulationsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 233: return stipulationType_.map(version, bytes, fldBeg);
    case 234: return stipulationValue_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* StipulationsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 233: return &stipulationType_;
    case 234: return &stipulationValue_;
    default: return nullptr;
  }
}

int StipulationsGroupComp::write(int valBeg) {
  valBeg = stipulationType_.write(valBeg);
  valBeg = stipulationValue_.write(valBeg);
  return valBeg;
}

LegSecurityAltIDGroupComp::LegSecurityAltIDGroupComp(AbstractMessage* message)
    : Component(message),
    legSecurityAltID_(message),
    legSecurityAltIDSource_(message) {}

AbstractField* LegSecurityAltIDGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 605: return legSecurityAltID_.map(version, bytes, fldBeg);
    case 606: return legSecurityAltIDSource_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegSecurityAltIDGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 605: return &legSecurityAltID_;
    case 606: return &legSecurityAltIDSource_;
    default: return nullptr;
  }
}

int LegSecurityAltIDGroupComp::write(int valBeg) {
  valBeg = legSecurityAltID_.write(valBeg);
  valBeg = legSecurityAltIDSource_.write(valBeg);
  return valBeg;
}

LegStipulationsGroupComp::LegStipulationsGroupComp(AbstractMessage* message)
    : Component(message),
    legStipulationType_(message),
    legStipulationValue_(message) {}

AbstractField* LegStipulationsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 688: return legStipulationType_.map(version, bytes, fldBeg);
    case 689: return legStipulationValue_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegStipulationsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 688: return &legStipulationType_;
    case 689: return &legStipulationValue_;
    default: return nullptr;
  }
}

int LegStipulationsGroupComp::write(int valBeg) {
  valBeg = legStipulationType_.write(valBeg);
  valBeg = legStipulationValue_.write(valBeg);
  return valBeg;
}

LegsGroupComp::LegsGroupComp(AbstractMessage* message)
    : Component(message),
    legSymbol_(message),
    legSymbolSfx_(message),
    legSecurityID_(message),
    legSecurityIDSource_(message),
    legSecurityAltIDGroup_(message),
    legProduct_(message),
    legCFICode_(message),
    legSecurityType_(message),
    legSecuritySubType_(message),
    legMaturityMonthYear_(message),
    legMaturityDate_(message),
    legCouponPaymentDate_(message),
    legIssueDate_(message),
    legRepoCollateralSecurityType_(message),
    legRepurchaseTerm_(message),
    legRepurchaseRate_(message),
    legFactor_(message),
    legCreditRating_(message),
    legInstrRegistry_(message),
    legCountryOfIssue_(message),
    legStateOrProvinceOfIssue_(message),
    legLocaleOfIssue_(message),
    legRedemptionDate_(message),
    legStrikePrice_(message),
    legStrikeCurrency_(message),
    legOptAttribute_(message),
    legContractMultiplier_(message),
    legCouponRate_(message),
    legSecurityExchange_(message),
    legIssuer_(message),
    encodedLegIssuerLen_(message),
    encodedLegIssuer_(message),
    legSecurityDesc_(message),
    encodedLegSecurityDescLen_(message),
    encodedLegSecurityDesc_(message),
    legRatioQty_(message),
    legSide_(message),
    legCurrency_(message),
    legPool_(message),
    legDatedDate_(message),
    legContractSettlMonth_(message),
    legInterestAccrualDate_(message),
    legIOIQty_(message),
    legStipulationsGroup_(message) {}

AbstractField* LegsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 600: return legSymbol_.map(version, bytes, fldBeg);
    case 601: return legSymbolSfx_.map(version, bytes, fldBeg);
    case 602: return legSecurityID_.map(version, bytes, fldBeg);
    case 603: return legSecurityIDSource_.map(version, bytes, fldBeg);
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.map(tag, fldBeg);
    case 607: return legProduct_.map(version, bytes, fldBeg);
    case 608: return legCFICode_.map(version, bytes, fldBeg);
    case 609: return legSecurityType_.map(version, bytes, fldBeg);
    case 764: return legSecuritySubType_.map(version, bytes, fldBeg);
    case 610: return legMaturityMonthYear_.map(version, bytes, fldBeg);
    case 611: return legMaturityDate_.map(version, bytes, fldBeg);
    case 248: return legCouponPaymentDate_.map(version, bytes, fldBeg);
    case 249: return legIssueDate_.map(version, bytes, fldBeg);
    case 250: return legRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 251: return legRepurchaseTerm_.map(version, bytes, fldBeg);
    case 252: return legRepurchaseRate_.map(version, bytes, fldBeg);
    case 253: return legFactor_.map(version, bytes, fldBeg);
    case 257: return legCreditRating_.map(version, bytes, fldBeg);
    case 599: return legInstrRegistry_.map(version, bytes, fldBeg);
    case 596: return legCountryOfIssue_.map(version, bytes, fldBeg);
    case 597: return legStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 598: return legLocaleOfIssue_.map(version, bytes, fldBeg);
    case 254: return legRedemptionDate_.map(version, bytes, fldBeg);
    case 612: return legStrikePrice_.map(version, bytes, fldBeg);
    case 942: return legStrikeCurrency_.map(version, bytes, fldBeg);
    case 613: return legOptAttribute_.map(version, bytes, fldBeg);
    case 614: return legContractMultiplier_.map(version, bytes, fldBeg);
    case 615: return legCouponRate_.map(version, bytes, fldBeg);
    case 616: return legSecurityExchange_.map(version, bytes, fldBeg);
    case 617: return legIssuer_.map(version, bytes, fldBeg);
    case 618: return encodedLegIssuerLen_.map(version, bytes, fldBeg);
    case 619: return encodedLegIssuer_.map(version, bytes, fldBeg);
    case 620: return legSecurityDesc_.map(version, bytes, fldBeg);
    case 621: return encodedLegSecurityDescLen_.map(version, bytes, fldBeg);
    case 622: return encodedLegSecurityDesc_.map(version, bytes, fldBeg);
    case 623: return legRatioQty_.map(version, bytes, fldBeg);
    case 624: return legSide_.map(version, bytes, fldBeg);
    case 556: return legCurrency_.map(version, bytes, fldBeg);
    case 740: return legPool_.map(version, bytes, fldBeg);
    case 739: return legDatedDate_.map(version, bytes, fldBeg);
    case 955: return legContractSettlMonth_.map(version, bytes, fldBeg);
    case 956: return legInterestAccrualDate_.map(version, bytes, fldBeg);
    case 682: return legIOIQty_.map(version, bytes, fldBeg);
    case 683: case 688: case 689:
      return legStipulationsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 600: return &legSymbol_;
    case 601: return &legSymbolSfx_;
    case 602: return &legSecurityID_;
    case 603: return &legSecurityIDSource_;
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.field(tag);
    case 607: return &legProduct_;
    case 608: return &legCFICode_;
    case 609: return &legSecurityType_;
    case 764: return &legSecuritySubType_;
    case 610: return &legMaturityMonthYear_;
    case 611: return &legMaturityDate_;
    case 248: return &legCouponPaymentDate_;
    case 249: return &legIssueDate_;
    case 250: return &legRepoCollateralSecurityType_;
    case 251: return &legRepurchaseTerm_;
    case 252: return &legRepurchaseRate_;
    case 253: return &legFactor_;
    case 257: return &legCreditRating_;
    case 599: return &legInstrRegistry_;
    case 596: return &legCountryOfIssue_;
    case 597: return &legStateOrProvinceOfIssue_;
    case 598: return &legLocaleOfIssue_;
    case 254: return &legRedemptionDate_;
    case 612: return &legStrikePrice_;
    case 942: return &legStrikeCurrency_;
    case 613: return &legOptAttribute_;
    case 614: return &legContractMultiplier_;
    case 615: return &legCouponRate_;
    case 616: return &legSecurityExchange_;
    case 617: return &legIssuer_;
    case 618: return &encodedLegIssuerLen_;
    case 619: return &encodedLegIssuer_;
    case 620: return &legSecurityDesc_;
    case 621: return &encodedLegSecurityDescLen_;
    case 622: return &encodedLegSecurityDesc_;
    case 623: return &legRatioQty_;
    case 624: return &legSide_;
    case 556: return &legCurrency_;
    case 740: return &legPool_;
    case 739: return &legDatedDate_;
    case 955: return &legContractSettlMonth_;
    case 956: return &legInterestAccrualDate_;
    case 682: return &legIOIQty_;
    case 683: case 688: case 689:
      return legStipulationsGroup_.field(tag);
    default: return nullptr;
  }
}

int LegsGroupComp::write(int valBeg) {
  valBeg = legSymbol_.write(valBeg);
  valBeg = legSymbolSfx_.write(valBeg);
  valBeg = legSecurityID_.write(valBeg);
  valBeg = legSecurityIDSource_.write(valBeg);
  valBeg = legSecurityAltIDGroup_.write(valBeg);
  valBeg = legProduct_.write(valBeg);
  valBeg = legCFICode_.write(valBeg);
  valBeg = legSecurityType_.write(valBeg);
  valBeg = legSecuritySubType_.write(valBeg);
  valBeg = legMaturityMonthYear_.write(valBeg);
  valBeg = legMaturityDate_.write(valBeg);
  valBeg = legCouponPaymentDate_.write(valBeg);
  valBeg = legIssueDate_.write(valBeg);
  valBeg = legRepoCollateralSecurityType_.write(valBeg);
  valBeg = legRepurchaseTerm_.write(valBeg);
  valBeg = legRepurchaseRate_.write(valBeg);
  valBeg = legFactor_.write(valBeg);
  valBeg = legCreditRating_.write(valBeg);
  valBeg = legInstrRegistry_.write(valBeg);
  valBeg = legCountryOfIssue_.write(valBeg);
  valBeg = legStateOrProvinceOfIssue_.write(valBeg);
  valBeg = legLocaleOfIssue_.write(valBeg);
  valBeg = legRedemptionDate_.write(valBeg);
  valBeg = legStrikePrice_.write(valBeg);
  valBeg = legStrikeCurrency_.write(valBeg);
  valBeg = legOptAttribute_.write(valBeg);
  valBeg = legContractMultiplier_.write(valBeg);
  valBeg = legCouponRate_.write(valBeg);
  valBeg = legSecurityExchange_.write(valBeg);
  valBeg = legIssuer_.write(valBeg);
  valBeg = encodedLegIssuerLen_.write(valBeg);
  valBeg = encodedLegIssuer_.write(valBeg);
  valBeg = legSecurityDesc_.write(valBeg);
  valBeg = encodedLegSecurityDescLen_.write(valBeg);
  valBeg = encodedLegSecurityDesc_.write(valBeg);
  valBeg = legRatioQty_.write(valBeg);
  valBeg = legSide_.write(valBeg);
  valBeg = legCurrency_.write(valBeg);
  valBeg = legPool_.write(valBeg);
  valBeg = legDatedDate_.write(valBeg);
  valBeg = legContractSettlMonth_.write(valBeg);
  valBeg = legInterestAccrualDate_.write(valBeg);
  valBeg = legIOIQty_.write(valBeg);
  valBeg = legStipulationsGroup_.write(valBeg);
  return valBeg;
}

IOIQualifiersGroupComp::IOIQualifiersGroupComp(AbstractMessage* message)
    : Component(message),
    iOIQualifier_(message) {}

AbstractField* IOIQualifiersGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 104: return iOIQualifier_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* IOIQualifiersGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 104: return &iOIQualifier_;
    default: return nullptr;
  }
}

int IOIQualifiersGroupComp::write(int valBeg) {
  valBeg = iOIQualifier_.write(valBeg);
  return valBeg;
}

RoutingIDsGroupComp::RoutingIDsGroupComp(AbstractMessage* message)
    : Component(message),
    routingType_(message),
    routingID_(message) {}

AbstractField* RoutingIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 216: return routingType_.map(version, bytes, fldBeg);
    case 217: return routingID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* RoutingIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 216: return &routingType_;
    case 217: return &routingID_;
    default: return nullptr;
  }
}

int RoutingIDsGroupComp::write(int valBeg) {
  valBeg = routingType_.write(valBeg);
  valBeg = routingID_.write(valBeg);
  return valBeg;
}

LegsGroup1Comp::LegsGroup1Comp(AbstractMessage* message)
    : Component(message),
    legSymbol_(message),
    legSymbolSfx_(message),
    legSecurityID_(message),
    legSecurityIDSource_(message),
    legSecurityAltIDGroup_(message),
    legProduct_(message),
    legCFICode_(message),
    legSecurityType_(message),
    legSecuritySubType_(message),
    legMaturityMonthYear_(message),
    legMaturityDate_(message),
    legCouponPaymentDate_(message),
    legIssueDate_(message),
    legRepoCollateralSecurityType_(message),
    legRepurchaseTerm_(message),
    legRepurchaseRate_(message),
    legFactor_(message),
    legCreditRating_(message),
    legInstrRegistry_(message),
    legCountryOfIssue_(message),
    legStateOrProvinceOfIssue_(message),
    legLocaleOfIssue_(message),
    legRedemptionDate_(message),
    legStrikePrice_(message),
    legStrikeCurrency_(message),
    legOptAttribute_(message),
    legContractMultiplier_(message),
    legCouponRate_(message),
    legSecurityExchange_(message),
    legIssuer_(message),
    encodedLegIssuerLen_(message),
    encodedLegIssuer_(message),
    legSecurityDesc_(message),
    encodedLegSecurityDescLen_(message),
    encodedLegSecurityDesc_(message),
    legRatioQty_(message),
    legSide_(message),
    legCurrency_(message),
    legPool_(message),
    legDatedDate_(message),
    legContractSettlMonth_(message),
    legInterestAccrualDate_(message) {}

AbstractField* LegsGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 600: return legSymbol_.map(version, bytes, fldBeg);
    case 601: return legSymbolSfx_.map(version, bytes, fldBeg);
    case 602: return legSecurityID_.map(version, bytes, fldBeg);
    case 603: return legSecurityIDSource_.map(version, bytes, fldBeg);
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.map(tag, fldBeg);
    case 607: return legProduct_.map(version, bytes, fldBeg);
    case 608: return legCFICode_.map(version, bytes, fldBeg);
    case 609: return legSecurityType_.map(version, bytes, fldBeg);
    case 764: return legSecuritySubType_.map(version, bytes, fldBeg);
    case 610: return legMaturityMonthYear_.map(version, bytes, fldBeg);
    case 611: return legMaturityDate_.map(version, bytes, fldBeg);
    case 248: return legCouponPaymentDate_.map(version, bytes, fldBeg);
    case 249: return legIssueDate_.map(version, bytes, fldBeg);
    case 250: return legRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 251: return legRepurchaseTerm_.map(version, bytes, fldBeg);
    case 252: return legRepurchaseRate_.map(version, bytes, fldBeg);
    case 253: return legFactor_.map(version, bytes, fldBeg);
    case 257: return legCreditRating_.map(version, bytes, fldBeg);
    case 599: return legInstrRegistry_.map(version, bytes, fldBeg);
    case 596: return legCountryOfIssue_.map(version, bytes, fldBeg);
    case 597: return legStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 598: return legLocaleOfIssue_.map(version, bytes, fldBeg);
    case 254: return legRedemptionDate_.map(version, bytes, fldBeg);
    case 612: return legStrikePrice_.map(version, bytes, fldBeg);
    case 942: return legStrikeCurrency_.map(version, bytes, fldBeg);
    case 613: return legOptAttribute_.map(version, bytes, fldBeg);
    case 614: return legContractMultiplier_.map(version, bytes, fldBeg);
    case 615: return legCouponRate_.map(version, bytes, fldBeg);
    case 616: return legSecurityExchange_.map(version, bytes, fldBeg);
    case 617: return legIssuer_.map(version, bytes, fldBeg);
    case 618: return encodedLegIssuerLen_.map(version, bytes, fldBeg);
    case 619: return encodedLegIssuer_.map(version, bytes, fldBeg);
    case 620: return legSecurityDesc_.map(version, bytes, fldBeg);
    case 621: return encodedLegSecurityDescLen_.map(version, bytes, fldBeg);
    case 622: return encodedLegSecurityDesc_.map(version, bytes, fldBeg);
    case 623: return legRatioQty_.map(version, bytes, fldBeg);
    case 624: return legSide_.map(version, bytes, fldBeg);
    case 556: return legCurrency_.map(version, bytes, fldBeg);
    case 740: return legPool_.map(version, bytes, fldBeg);
    case 739: return legDatedDate_.map(version, bytes, fldBeg);
    case 955: return legContractSettlMonth_.map(version, bytes, fldBeg);
    case 956: return legInterestAccrualDate_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegsGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 600: return &legSymbol_;
    case 601: return &legSymbolSfx_;
    case 602: return &legSecurityID_;
    case 603: return &legSecurityIDSource_;
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.field(tag);
    case 607: return &legProduct_;
    case 608: return &legCFICode_;
    case 609: return &legSecurityType_;
    case 764: return &legSecuritySubType_;
    case 610: return &legMaturityMonthYear_;
    case 611: return &legMaturityDate_;
    case 248: return &legCouponPaymentDate_;
    case 249: return &legIssueDate_;
    case 250: return &legRepoCollateralSecurityType_;
    case 251: return &legRepurchaseTerm_;
    case 252: return &legRepurchaseRate_;
    case 253: return &legFactor_;
    case 257: return &legCreditRating_;
    case 599: return &legInstrRegistry_;
    case 596: return &legCountryOfIssue_;
    case 597: return &legStateOrProvinceOfIssue_;
    case 598: return &legLocaleOfIssue_;
    case 254: return &legRedemptionDate_;
    case 612: return &legStrikePrice_;
    case 942: return &legStrikeCurrency_;
    case 613: return &legOptAttribute_;
    case 614: return &legContractMultiplier_;
    case 615: return &legCouponRate_;
    case 616: return &legSecurityExchange_;
    case 617: return &legIssuer_;
    case 618: return &encodedLegIssuerLen_;
    case 619: return &encodedLegIssuer_;
    case 620: return &legSecurityDesc_;
    case 621: return &encodedLegSecurityDescLen_;
    case 622: return &encodedLegSecurityDesc_;
    case 623: return &legRatioQty_;
    case 624: return &legSide_;
    case 556: return &legCurrency_;
    case 740: return &legPool_;
    case 739: return &legDatedDate_;
    case 955: return &legContractSettlMonth_;
    case 956: return &legInterestAccrualDate_;
    default: return nullptr;
  }
}

int LegsGroup1Comp::write(int valBeg) {
  valBeg = legSymbol_.write(valBeg);
  valBeg = legSymbolSfx_.write(valBeg);
  valBeg = legSecurityID_.write(valBeg);
  valBeg = legSecurityIDSource_.write(valBeg);
  valBeg = legSecurityAltIDGroup_.write(valBeg);
  valBeg = legProduct_.write(valBeg);
  valBeg = legCFICode_.write(valBeg);
  valBeg = legSecurityType_.write(valBeg);
  valBeg = legSecuritySubType_.write(valBeg);
  valBeg = legMaturityMonthYear_.write(valBeg);
  valBeg = legMaturityDate_.write(valBeg);
  valBeg = legCouponPaymentDate_.write(valBeg);
  valBeg = legIssueDate_.write(valBeg);
  valBeg = legRepoCollateralSecurityType_.write(valBeg);
  valBeg = legRepurchaseTerm_.write(valBeg);
  valBeg = legRepurchaseRate_.write(valBeg);
  valBeg = legFactor_.write(valBeg);
  valBeg = legCreditRating_.write(valBeg);
  valBeg = legInstrRegistry_.write(valBeg);
  valBeg = legCountryOfIssue_.write(valBeg);
  valBeg = legStateOrProvinceOfIssue_.write(valBeg);
  valBeg = legLocaleOfIssue_.write(valBeg);
  valBeg = legRedemptionDate_.write(valBeg);
  valBeg = legStrikePrice_.write(valBeg);
  valBeg = legStrikeCurrency_.write(valBeg);
  valBeg = legOptAttribute_.write(valBeg);
  valBeg = legContractMultiplier_.write(valBeg);
  valBeg = legCouponRate_.write(valBeg);
  valBeg = legSecurityExchange_.write(valBeg);
  valBeg = legIssuer_.write(valBeg);
  valBeg = encodedLegIssuerLen_.write(valBeg);
  valBeg = encodedLegIssuer_.write(valBeg);
  valBeg = legSecurityDesc_.write(valBeg);
  valBeg = encodedLegSecurityDescLen_.write(valBeg);
  valBeg = encodedLegSecurityDesc_.write(valBeg);
  valBeg = legRatioQty_.write(valBeg);
  valBeg = legSide_.write(valBeg);
  valBeg = legCurrency_.write(valBeg);
  valBeg = legPool_.write(valBeg);
  valBeg = legDatedDate_.write(valBeg);
  valBeg = legContractSettlMonth_.write(valBeg);
  valBeg = legInterestAccrualDate_.write(valBeg);
  return valBeg;
}

PartySubIDsGroupComp::PartySubIDsGroupComp(AbstractMessage* message)
    : Component(message),
    partySubID_(message),
    partySubIDType_(message) {}

AbstractField* PartySubIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 523: return partySubID_.map(version, bytes, fldBeg);
    case 803: return partySubIDType_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* PartySubIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 523: return &partySubID_;
    case 803: return &partySubIDType_;
    default: return nullptr;
  }
}

int PartySubIDsGroupComp::write(int valBeg) {
  valBeg = partySubID_.write(valBeg);
  valBeg = partySubIDType_.write(valBeg);
  return valBeg;
}

PartyIDsGroupComp::PartyIDsGroupComp(AbstractMessage* message)
    : Component(message),
    partyID_(message),
    partyIDSource_(message),
    partyRole_(message),
    partySubIDsGroup_(message) {}

AbstractField* PartyIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 448: return partyID_.map(version, bytes, fldBeg);
    case 447: return partyIDSource_.map(version, bytes, fldBeg);
    case 452: return partyRole_.map(version, bytes, fldBeg);
    case 523: case 802: case 803:
      return partySubIDsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* PartyIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 448: return &partyID_;
    case 447: return &partyIDSource_;
    case 452: return &partyRole_;
    case 523: case 802: case 803:
      return partySubIDsGroup_.field(tag);
    default: return nullptr;
  }
}

int PartyIDsGroupComp::write(int valBeg) {
  valBeg = partyID_.write(valBeg);
  valBeg = partyIDSource_.write(valBeg);
  valBeg = partyRole_.write(valBeg);
  valBeg = partySubIDsGroup_.write(valBeg);
  return valBeg;
}

ContraBrokersGroupComp::ContraBrokersGroupComp(AbstractMessage* message)
    : Component(message),
    contraBroker_(message),
    contraTrader_(message),
    contraTradeQty_(message),
    contraTradeTime_(message),
    contraLegRefID_(message) {}

AbstractField* ContraBrokersGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 375: return contraBroker_.map(version, bytes, fldBeg);
    case 337: return contraTrader_.map(version, bytes, fldBeg);
    case 437: return contraTradeQty_.map(version, bytes, fldBeg);
    case 438: return contraTradeTime_.map(version, bytes, fldBeg);
    case 655: return contraLegRefID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* ContraBrokersGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 375: return &contraBroker_;
    case 337: return &contraTrader_;
    case 437: return &contraTradeQty_;
    case 438: return &contraTradeTime_;
    case 655: return &contraLegRefID_;
    default: return nullptr;
  }
}

int ContraBrokersGroupComp::write(int valBeg) {
  valBeg = contraBroker_.write(valBeg);
  valBeg = contraTrader_.write(valBeg);
  valBeg = contraTradeQty_.write(valBeg);
  valBeg = contraTradeTime_.write(valBeg);
  valBeg = contraLegRefID_.write(valBeg);
  return valBeg;
}

ContAmtsGroupComp::ContAmtsGroupComp(AbstractMessage* message)
    : Component(message),
    contAmtType_(message),
    contAmtValue_(message),
    contAmtCurr_(message) {}

AbstractField* ContAmtsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 519: return contAmtType_.map(version, bytes, fldBeg);
    case 520: return contAmtValue_.map(version, bytes, fldBeg);
    case 521: return contAmtCurr_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* ContAmtsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 519: return &contAmtType_;
    case 520: return &contAmtValue_;
    case 521: return &contAmtCurr_;
    default: return nullptr;
  }
}

int ContAmtsGroupComp::write(int valBeg) {
  valBeg = contAmtType_.write(valBeg);
  valBeg = contAmtValue_.write(valBeg);
  valBeg = contAmtCurr_.write(valBeg);
  return valBeg;
}

NestedPartySubIDsGroupComp::NestedPartySubIDsGroupComp(AbstractMessage* message)
    : Component(message),
    nestedPartySubID_(message),
    nestedPartySubIDType_(message) {}

AbstractField* NestedPartySubIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 545: return nestedPartySubID_.map(version, bytes, fldBeg);
    case 805: return nestedPartySubIDType_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* NestedPartySubIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 545: return &nestedPartySubID_;
    case 805: return &nestedPartySubIDType_;
    default: return nullptr;
  }
}

int NestedPartySubIDsGroupComp::write(int valBeg) {
  valBeg = nestedPartySubID_.write(valBeg);
  valBeg = nestedPartySubIDType_.write(valBeg);
  return valBeg;
}

NestedPartyIDsGroupComp::NestedPartyIDsGroupComp(AbstractMessage* message)
    : Component(message),
    nestedPartyID_(message),
    nestedPartyIDSource_(message),
    nestedPartyRole_(message),
    nestedPartySubIDsGroup_(message) {}

AbstractField* NestedPartyIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 524: return nestedPartyID_.map(version, bytes, fldBeg);
    case 525: return nestedPartyIDSource_.map(version, bytes, fldBeg);
    case 538: return nestedPartyRole_.map(version, bytes, fldBeg);
    case 545: case 804: case 805:
      return nestedPartySubIDsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* NestedPartyIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 524: return &nestedPartyID_;
    case 525: return &nestedPartyIDSource_;
    case 538: return &nestedPartyRole_;
    case 545: case 804: case 805:
      return nestedPartySubIDsGroup_.field(tag);
    default: return nullptr;
  }
}

int NestedPartyIDsGroupComp::write(int valBeg) {
  valBeg = nestedPartyID_.write(valBeg);
  valBeg = nestedPartyIDSource_.write(valBeg);
  valBeg = nestedPartyRole_.write(valBeg);
  valBeg = nestedPartySubIDsGroup_.write(valBeg);
  return valBeg;
}

LegsGroup2Comp::LegsGroup2Comp(AbstractMessage* message)
    : Component(message),
    legSymbol_(message),
    legSymbolSfx_(message),
    legSecurityID_(message),
    legSecurityIDSource_(message),
    legSecurityAltIDGroup_(message),
    legProduct_(message),
    legCFICode_(message),
    legSecurityType_(message),
    legSecuritySubType_(message),
    legMaturityMonthYear_(message),
    legMaturityDate_(message),
    legCouponPaymentDate_(message),
    legIssueDate_(message),
    legRepoCollateralSecurityType_(message),
    legRepurchaseTerm_(message),
    legRepurchaseRate_(message),
    legFactor_(message),
    legCreditRating_(message),
    legInstrRegistry_(message),
    legCountryOfIssue_(message),
    legStateOrProvinceOfIssue_(message),
    legLocaleOfIssue_(message),
    legRedemptionDate_(message),
    legStrikePrice_(message),
    legStrikeCurrency_(message),
    legOptAttribute_(message),
    legContractMultiplier_(message),
    legCouponRate_(message),
    legSecurityExchange_(message),
    legIssuer_(message),
    encodedLegIssuerLen_(message),
    encodedLegIssuer_(message),
    legSecurityDesc_(message),
    encodedLegSecurityDescLen_(message),
    encodedLegSecurityDesc_(message),
    legRatioQty_(message),
    legSide_(message),
    legCurrency_(message),
    legPool_(message),
    legDatedDate_(message),
    legContractSettlMonth_(message),
    legInterestAccrualDate_(message),
    legQty_(message),
    legSwapType_(message),
    legStipulationsGroup_(message),
    legPositionEffect_(message),
    legCoveredOrUncovered_(message),
    nestedPartyIDsGroup_(message),
    legRefID_(message),
    legPrice_(message),
    legSettlType_(message),
    legSettlDate_(message),
    legLastPx_(message) {}

AbstractField* LegsGroup2Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 600: return legSymbol_.map(version, bytes, fldBeg);
    case 601: return legSymbolSfx_.map(version, bytes, fldBeg);
    case 602: return legSecurityID_.map(version, bytes, fldBeg);
    case 603: return legSecurityIDSource_.map(version, bytes, fldBeg);
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.map(tag, fldBeg);
    case 607: return legProduct_.map(version, bytes, fldBeg);
    case 608: return legCFICode_.map(version, bytes, fldBeg);
    case 609: return legSecurityType_.map(version, bytes, fldBeg);
    case 764: return legSecuritySubType_.map(version, bytes, fldBeg);
    case 610: return legMaturityMonthYear_.map(version, bytes, fldBeg);
    case 611: return legMaturityDate_.map(version, bytes, fldBeg);
    case 248: return legCouponPaymentDate_.map(version, bytes, fldBeg);
    case 249: return legIssueDate_.map(version, bytes, fldBeg);
    case 250: return legRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 251: return legRepurchaseTerm_.map(version, bytes, fldBeg);
    case 252: return legRepurchaseRate_.map(version, bytes, fldBeg);
    case 253: return legFactor_.map(version, bytes, fldBeg);
    case 257: return legCreditRating_.map(version, bytes, fldBeg);
    case 599: return legInstrRegistry_.map(version, bytes, fldBeg);
    case 596: return legCountryOfIssue_.map(version, bytes, fldBeg);
    case 597: return legStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 598: return legLocaleOfIssue_.map(version, bytes, fldBeg);
    case 254: return legRedemptionDate_.map(version, bytes, fldBeg);
    case 612: return legStrikePrice_.map(version, bytes, fldBeg);
    case 942: return legStrikeCurrency_.map(version, bytes, fldBeg);
    case 613: return legOptAttribute_.map(version, bytes, fldBeg);
    case 614: return legContractMultiplier_.map(version, bytes, fldBeg);
    case 615: return legCouponRate_.map(version, bytes, fldBeg);
    case 616: return legSecurityExchange_.map(version, bytes, fldBeg);
    case 617: return legIssuer_.map(version, bytes, fldBeg);
    case 618: return encodedLegIssuerLen_.map(version, bytes, fldBeg);
    case 619: return encodedLegIssuer_.map(version, bytes, fldBeg);
    case 620: return legSecurityDesc_.map(version, bytes, fldBeg);
    case 621: return encodedLegSecurityDescLen_.map(version, bytes, fldBeg);
    case 622: return encodedLegSecurityDesc_.map(version, bytes, fldBeg);
    case 623: return legRatioQty_.map(version, bytes, fldBeg);
    case 624: return legSide_.map(version, bytes, fldBeg);
    case 556: return legCurrency_.map(version, bytes, fldBeg);
    case 740: return legPool_.map(version, bytes, fldBeg);
    case 739: return legDatedDate_.map(version, bytes, fldBeg);
    case 955: return legContractSettlMonth_.map(version, bytes, fldBeg);
    case 956: return legInterestAccrualDate_.map(version, bytes, fldBeg);
    case 687: return legQty_.map(version, bytes, fldBeg);
    case 690: return legSwapType_.map(version, bytes, fldBeg);
    case 683: case 688: case 689:
      return legStipulationsGroup_.map(tag, fldBeg);
    case 564: return legPositionEffect_.map(version, bytes, fldBeg);
    case 565: return legCoveredOrUncovered_.map(version, bytes, fldBeg);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.map(tag, fldBeg);
    case 654: return legRefID_.map(version, bytes, fldBeg);
    case 566: return legPrice_.map(version, bytes, fldBeg);
    case 587: return legSettlType_.map(version, bytes, fldBeg);
    case 588: return legSettlDate_.map(version, bytes, fldBeg);
    case 637: return legLastPx_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegsGroup2Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 600: return &legSymbol_;
    case 601: return &legSymbolSfx_;
    case 602: return &legSecurityID_;
    case 603: return &legSecurityIDSource_;
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.field(tag);
    case 607: return &legProduct_;
    case 608: return &legCFICode_;
    case 609: return &legSecurityType_;
    case 764: return &legSecuritySubType_;
    case 610: return &legMaturityMonthYear_;
    case 611: return &legMaturityDate_;
    case 248: return &legCouponPaymentDate_;
    case 249: return &legIssueDate_;
    case 250: return &legRepoCollateralSecurityType_;
    case 251: return &legRepurchaseTerm_;
    case 252: return &legRepurchaseRate_;
    case 253: return &legFactor_;
    case 257: return &legCreditRating_;
    case 599: return &legInstrRegistry_;
    case 596: return &legCountryOfIssue_;
    case 597: return &legStateOrProvinceOfIssue_;
    case 598: return &legLocaleOfIssue_;
    case 254: return &legRedemptionDate_;
    case 612: return &legStrikePrice_;
    case 942: return &legStrikeCurrency_;
    case 613: return &legOptAttribute_;
    case 614: return &legContractMultiplier_;
    case 615: return &legCouponRate_;
    case 616: return &legSecurityExchange_;
    case 617: return &legIssuer_;
    case 618: return &encodedLegIssuerLen_;
    case 619: return &encodedLegIssuer_;
    case 620: return &legSecurityDesc_;
    case 621: return &encodedLegSecurityDescLen_;
    case 622: return &encodedLegSecurityDesc_;
    case 623: return &legRatioQty_;
    case 624: return &legSide_;
    case 556: return &legCurrency_;
    case 740: return &legPool_;
    case 739: return &legDatedDate_;
    case 955: return &legContractSettlMonth_;
    case 956: return &legInterestAccrualDate_;
    case 687: return &legQty_;
    case 690: return &legSwapType_;
    case 683: case 688: case 689:
      return legStipulationsGroup_.field(tag);
    case 564: return &legPositionEffect_;
    case 565: return &legCoveredOrUncovered_;
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.field(tag);
    case 654: return &legRefID_;
    case 566: return &legPrice_;
    case 587: return &legSettlType_;
    case 588: return &legSettlDate_;
    case 637: return &legLastPx_;
    default: return nullptr;
  }
}

int LegsGroup2Comp::write(int valBeg) {
  valBeg = legSymbol_.write(valBeg);
  valBeg = legSymbolSfx_.write(valBeg);
  valBeg = legSecurityID_.write(valBeg);
  valBeg = legSecurityIDSource_.write(valBeg);
  valBeg = legSecurityAltIDGroup_.write(valBeg);
  valBeg = legProduct_.write(valBeg);
  valBeg = legCFICode_.write(valBeg);
  valBeg = legSecurityType_.write(valBeg);
  valBeg = legSecuritySubType_.write(valBeg);
  valBeg = legMaturityMonthYear_.write(valBeg);
  valBeg = legMaturityDate_.write(valBeg);
  valBeg = legCouponPaymentDate_.write(valBeg);
  valBeg = legIssueDate_.write(valBeg);
  valBeg = legRepoCollateralSecurityType_.write(valBeg);
  valBeg = legRepurchaseTerm_.write(valBeg);
  valBeg = legRepurchaseRate_.write(valBeg);
  valBeg = legFactor_.write(valBeg);
  valBeg = legCreditRating_.write(valBeg);
  valBeg = legInstrRegistry_.write(valBeg);
  valBeg = legCountryOfIssue_.write(valBeg);
  valBeg = legStateOrProvinceOfIssue_.write(valBeg);
  valBeg = legLocaleOfIssue_.write(valBeg);
  valBeg = legRedemptionDate_.write(valBeg);
  valBeg = legStrikePrice_.write(valBeg);
  valBeg = legStrikeCurrency_.write(valBeg);
  valBeg = legOptAttribute_.write(valBeg);
  valBeg = legContractMultiplier_.write(valBeg);
  valBeg = legCouponRate_.write(valBeg);
  valBeg = legSecurityExchange_.write(valBeg);
  valBeg = legIssuer_.write(valBeg);
  valBeg = encodedLegIssuerLen_.write(valBeg);
  valBeg = encodedLegIssuer_.write(valBeg);
  valBeg = legSecurityDesc_.write(valBeg);
  valBeg = encodedLegSecurityDescLen_.write(valBeg);
  valBeg = encodedLegSecurityDesc_.write(valBeg);
  valBeg = legRatioQty_.write(valBeg);
  valBeg = legSide_.write(valBeg);
  valBeg = legCurrency_.write(valBeg);
  valBeg = legPool_.write(valBeg);
  valBeg = legDatedDate_.write(valBeg);
  valBeg = legContractSettlMonth_.write(valBeg);
  valBeg = legInterestAccrualDate_.write(valBeg);
  valBeg = legQty_.write(valBeg);
  valBeg = legSwapType_.write(valBeg);
  valBeg = legStipulationsGroup_.write(valBeg);
  valBeg = legPositionEffect_.write(valBeg);
  valBeg = legCoveredOrUncovered_.write(valBeg);
  valBeg = nestedPartyIDsGroup_.write(valBeg);
  valBeg = legRefID_.write(valBeg);
  valBeg = legPrice_.write(valBeg);
  valBeg = legSettlType_.write(valBeg);
  valBeg = legSettlDate_.write(valBeg);
  valBeg = legLastPx_.write(valBeg);
  return valBeg;
}

MiscFeesGroupComp::MiscFeesGroupComp(AbstractMessage* message)
    : Component(message),
    miscFeeAmt_(message),
    miscFeeCurr_(message),
    miscFeeType_(message),
    miscFeeBasis_(message) {}

AbstractField* MiscFeesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 137: return miscFeeAmt_.map(version, bytes, fldBeg);
    case 138: return miscFeeCurr_.map(version, bytes, fldBeg);
    case 139: return miscFeeType_.map(version, bytes, fldBeg);
    case 891: return miscFeeBasis_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* MiscFeesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 137: return &miscFeeAmt_;
    case 138: return &miscFeeCurr_;
    case 139: return &miscFeeType_;
    case 891: return &miscFeeBasis_;
    default: return nullptr;
  }
}

int MiscFeesGroupComp::write(int valBeg) {
  valBeg = miscFeeAmt_.write(valBeg);
  valBeg = miscFeeCurr_.write(valBeg);
  valBeg = miscFeeType_.write(valBeg);
  valBeg = miscFeeBasis_.write(valBeg);
  return valBeg;
}

MsgTypesGroupComp::MsgTypesGroupComp(AbstractMessage* message)
    : Component(message),
    refMsgType_(message),
    msgDirection_(message) {}

AbstractField* MsgTypesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 372: return refMsgType_.map(version, bytes, fldBeg);
    case 385: return msgDirection_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* MsgTypesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 372: return &refMsgType_;
    case 385: return &msgDirection_;
    default: return nullptr;
  }
}

int MsgTypesGroupComp::write(int valBeg) {
  valBeg = refMsgType_.write(valBeg);
  valBeg = msgDirection_.write(valBeg);
  return valBeg;
}

RelatedSymGroupComp::RelatedSymGroupComp(AbstractMessage* message)
    : Component(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message) {}

AbstractField* RelatedSymGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* RelatedSymGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    default: return nullptr;
  }
}

int RelatedSymGroupComp::write(int valBeg) {
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  return valBeg;
}

LinesOfTextGroupComp::LinesOfTextGroupComp(AbstractMessage* message)
    : Component(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message) {}

AbstractField* LinesOfTextGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LinesOfTextGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    default: return nullptr;
  }
}

int LinesOfTextGroupComp::write(int valBeg) {
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  return valBeg;
}

AllocsGroupComp::AllocsGroupComp(AbstractMessage* message)
    : Component(message),
    allocAccount_(message),
    allocAcctIDSource_(message),
    allocSettlCurrency_(message),
    individualAllocID_(message),
    nestedPartyIDsGroup_(message),
    allocQty_(message) {}

AbstractField* AllocsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 79: return allocAccount_.map(version, bytes, fldBeg);
    case 661: return allocAcctIDSource_.map(version, bytes, fldBeg);
    case 736: return allocSettlCurrency_.map(version, bytes, fldBeg);
    case 467: return individualAllocID_.map(version, bytes, fldBeg);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.map(tag, fldBeg);
    case 80: return allocQty_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* AllocsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 79: return &allocAccount_;
    case 661: return &allocAcctIDSource_;
    case 736: return &allocSettlCurrency_;
    case 467: return &individualAllocID_;
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.field(tag);
    case 80: return &allocQty_;
    default: return nullptr;
  }
}

int AllocsGroupComp::write(int valBeg) {
  valBeg = allocAccount_.write(valBeg);
  valBeg = allocAcctIDSource_.write(valBeg);
  valBeg = allocSettlCurrency_.write(valBeg);
  valBeg = individualAllocID_.write(valBeg);
  valBeg = nestedPartyIDsGroup_.write(valBeg);
  valBeg = allocQty_.write(valBeg);
  return valBeg;
}

TradingSessionsGroupComp::TradingSessionsGroupComp(AbstractMessage* message)
    : Component(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message) {}

AbstractField* TradingSessionsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* TradingSessionsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    default: return nullptr;
  }
}

int TradingSessionsGroupComp::write(int valBeg) {
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  return valBeg;
}

OrdersGroupComp::OrdersGroupComp(AbstractMessage* message)
    : Component(message),
    clOrdID_(message),
    secondaryClOrdID_(message),
    listSeqNo_(message),
    clOrdLinkID_(message),
    settlInstMode_(message),
    partyIDsGroup_(message),
    tradeOriginationDate_(message),
    tradeDate_(message),
    account_(message),
    acctIDSource_(message),
    accountType_(message),
    dayBookingInst_(message),
    bookingUnit_(message),
    allocID_(message),
    preallocMethod_(message),
    allocsGroup_(message),
    settlType_(message),
    settlDate_(message),
    cashMargin_(message),
    clearingFeeIndicator_(message),
    handlInst_(message),
    execInst_(message),
    minQty_(message),
    maxFloor_(message),
    exDestination_(message),
    tradingSessionsGroup_(message),
    processCode_(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    underlyingsGroup_(message),
    prevClosePx_(message),
    side_(message),
    sideValueInd_(message),
    locateReqd_(message),
    transactTime_(message),
    stipulationsGroup_(message),
    qtyType_(message),
    orderQty_(message),
    cashOrderQty_(message),
    orderPercent_(message),
    roundingDirection_(message),
    roundingModulus_(message),
    ordType_(message),
    priceType_(message),
    price_(message),
    stopPx_(message),
    spread_(message),
    benchmarkCurveCurrency_(message),
    benchmarkCurveName_(message),
    benchmarkCurvePoint_(message),
    benchmarkPrice_(message),
    benchmarkPriceType_(message),
    benchmarkSecurityID_(message),
    benchmarkSecurityIDSource_(message),
    yieldType_(message),
    yield_(message),
    yieldCalcDate_(message),
    yieldRedemptionDate_(message),
    yieldRedemptionPrice_(message),
    yieldRedemptionPriceType_(message),
    currency_(message),
    complianceID_(message),
    solicitedFlag_(message),
    iOIID_(message),
    quoteID_(message),
    timeInForce_(message),
    effectiveTime_(message),
    expireDate_(message),
    expireTime_(message),
    gTBookingInst_(message),
    commission_(message),
    commType_(message),
    commCurrency_(message),
    fundRenewWaiv_(message),
    orderCapacity_(message),
    orderRestrictions_(message),
    custOrderCapacity_(message),
    forexReq_(message),
    settlCurrency_(message),
    bookingType_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message),
    settlDate2_(message),
    orderQty2_(message),
    price2_(message),
    positionEffect_(message),
    coveredOrUncovered_(message),
    maxShow_(message),
    pegOffsetValue_(message),
    pegMoveType_(message),
    pegOffsetType_(message),
    pegLimitType_(message),
    pegRoundDirection_(message),
    pegScope_(message),
    discretionInst_(message),
    discretionOffsetValue_(message),
    discretionMoveType_(message),
    discretionOffsetType_(message),
    discretionLimitType_(message),
    discretionRoundDirection_(message),
    discretionScope_(message),
    targetStrategy_(message),
    targetStrategyParameters_(message),
    participationRate_(message),
    designation_(message) {}

AbstractField* OrdersGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 11: return clOrdID_.map(version, bytes, fldBeg);
    case 526: return secondaryClOrdID_.map(version, bytes, fldBeg);
    case 67: return listSeqNo_.map(version, bytes, fldBeg);
    case 583: return clOrdLinkID_.map(version, bytes, fldBeg);
    case 160: return settlInstMode_.map(version, bytes, fldBeg);
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.map(tag, fldBeg);
    case 229: return tradeOriginationDate_.map(version, bytes, fldBeg);
    case 75: return tradeDate_.map(version, bytes, fldBeg);
    case 1: return account_.map(version, bytes, fldBeg);
    case 660: return acctIDSource_.map(version, bytes, fldBeg);
    case 581: return accountType_.map(version, bytes, fldBeg);
    case 589: return dayBookingInst_.map(version, bytes, fldBeg);
    case 590: return bookingUnit_.map(version, bytes, fldBeg);
    case 70: return allocID_.map(version, bytes, fldBeg);
    case 591: return preallocMethod_.map(version, bytes, fldBeg);
    case 78: case 79: case 80: case 467: case 524: case 525: case 538: case 539: case 545: case 661: case 736: case 804: case 805:
      return allocsGroup_.map(tag, fldBeg);
    case 63: return settlType_.map(version, bytes, fldBeg);
    case 64: return settlDate_.map(version, bytes, fldBeg);
    case 544: return cashMargin_.map(version, bytes, fldBeg);
    case 635: return clearingFeeIndicator_.map(version, bytes, fldBeg);
    case 21: return handlInst_.map(version, bytes, fldBeg);
    case 18: return execInst_.map(version, bytes, fldBeg);
    case 110: return minQty_.map(version, bytes, fldBeg);
    case 111: return maxFloor_.map(version, bytes, fldBeg);
    case 100: return exDestination_.map(version, bytes, fldBeg);
    case 336: case 386: case 625:
      return tradingSessionsGroup_.map(tag, fldBeg);
    case 81: return processCode_.map(version, bytes, fldBeg);
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.map(tag, fldBeg);
    case 140: return prevClosePx_.map(version, bytes, fldBeg);
    case 54: return side_.map(version, bytes, fldBeg);
    case 401: return sideValueInd_.map(version, bytes, fldBeg);
    case 114: return locateReqd_.map(version, bytes, fldBeg);
    case 60: return transactTime_.map(version, bytes, fldBeg);
    case 232: case 233: case 234:
      return stipulationsGroup_.map(tag, fldBeg);
    case 854: return qtyType_.map(version, bytes, fldBeg);
    case 38: return orderQty_.map(version, bytes, fldBeg);
    case 152: return cashOrderQty_.map(version, bytes, fldBeg);
    case 516: return orderPercent_.map(version, bytes, fldBeg);
    case 468: return roundingDirection_.map(version, bytes, fldBeg);
    case 469: return roundingModulus_.map(version, bytes, fldBeg);
    case 40: return ordType_.map(version, bytes, fldBeg);
    case 423: return priceType_.map(version, bytes, fldBeg);
    case 44: return price_.map(version, bytes, fldBeg);
    case 99: return stopPx_.map(version, bytes, fldBeg);
    case 218: return spread_.map(version, bytes, fldBeg);
    case 220: return benchmarkCurveCurrency_.map(version, bytes, fldBeg);
    case 221: return benchmarkCurveName_.map(version, bytes, fldBeg);
    case 222: return benchmarkCurvePoint_.map(version, bytes, fldBeg);
    case 662: return benchmarkPrice_.map(version, bytes, fldBeg);
    case 663: return benchmarkPriceType_.map(version, bytes, fldBeg);
    case 699: return benchmarkSecurityID_.map(version, bytes, fldBeg);
    case 761: return benchmarkSecurityIDSource_.map(version, bytes, fldBeg);
    case 235: return yieldType_.map(version, bytes, fldBeg);
    case 236: return yield_.map(version, bytes, fldBeg);
    case 701: return yieldCalcDate_.map(version, bytes, fldBeg);
    case 696: return yieldRedemptionDate_.map(version, bytes, fldBeg);
    case 697: return yieldRedemptionPrice_.map(version, bytes, fldBeg);
    case 698: return yieldRedemptionPriceType_.map(version, bytes, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    case 376: return complianceID_.map(version, bytes, fldBeg);
    case 377: return solicitedFlag_.map(version, bytes, fldBeg);
    case 23: return iOIID_.map(version, bytes, fldBeg);
    case 117: return quoteID_.map(version, bytes, fldBeg);
    case 59: return timeInForce_.map(version, bytes, fldBeg);
    case 168: return effectiveTime_.map(version, bytes, fldBeg);
    case 432: return expireDate_.map(version, bytes, fldBeg);
    case 126: return expireTime_.map(version, bytes, fldBeg);
    case 427: return gTBookingInst_.map(version, bytes, fldBeg);
    case 12: return commission_.map(version, bytes, fldBeg);
    case 13: return commType_.map(version, bytes, fldBeg);
    case 479: return commCurrency_.map(version, bytes, fldBeg);
    case 497: return fundRenewWaiv_.map(version, bytes, fldBeg);
    case 528: return orderCapacity_.map(version, bytes, fldBeg);
    case 529: return orderRestrictions_.map(version, bytes, fldBeg);
    case 582: return custOrderCapacity_.map(version, bytes, fldBeg);
    case 121: return forexReq_.map(version, bytes, fldBeg);
    case 120: return settlCurrency_.map(version, bytes, fldBeg);
    case 775: return bookingType_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    case 193: return settlDate2_.map(version, bytes, fldBeg);
    case 192: return orderQty2_.map(version, bytes, fldBeg);
    case 640: return price2_.map(version, bytes, fldBeg);
    case 77: return positionEffect_.map(version, bytes, fldBeg);
    case 203: return coveredOrUncovered_.map(version, bytes, fldBeg);
    case 210: return maxShow_.map(version, bytes, fldBeg);
    case 211: return pegOffsetValue_.map(version, bytes, fldBeg);
    case 835: return pegMoveType_.map(version, bytes, fldBeg);
    case 836: return pegOffsetType_.map(version, bytes, fldBeg);
    case 837: return pegLimitType_.map(version, bytes, fldBeg);
    case 838: return pegRoundDirection_.map(version, bytes, fldBeg);
    case 840: return pegScope_.map(version, bytes, fldBeg);
    case 388: return discretionInst_.map(version, bytes, fldBeg);
    case 389: return discretionOffsetValue_.map(version, bytes, fldBeg);
    case 841: return discretionMoveType_.map(version, bytes, fldBeg);
    case 842: return discretionOffsetType_.map(version, bytes, fldBeg);
    case 843: return discretionLimitType_.map(version, bytes, fldBeg);
    case 844: return discretionRoundDirection_.map(version, bytes, fldBeg);
    case 846: return discretionScope_.map(version, bytes, fldBeg);
    case 847: return targetStrategy_.map(version, bytes, fldBeg);
    case 848: return targetStrategyParameters_.map(version, bytes, fldBeg);
    case 849: return participationRate_.map(version, bytes, fldBeg);
    case 494: return designation_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* OrdersGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 11: return &clOrdID_;
    case 526: return &secondaryClOrdID_;
    case 67: return &listSeqNo_;
    case 583: return &clOrdLinkID_;
    case 160: return &settlInstMode_;
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.field(tag);
    case 229: return &tradeOriginationDate_;
    case 75: return &tradeDate_;
    case 1: return &account_;
    case 660: return &acctIDSource_;
    case 581: return &accountType_;
    case 589: return &dayBookingInst_;
    case 590: return &bookingUnit_;
    case 70: return &allocID_;
    case 591: return &preallocMethod_;
    case 78: case 79: case 80: case 467: case 524: case 525: case 538: case 539: case 545: case 661: case 736: case 804: case 805:
      return allocsGroup_.field(tag);
    case 63: return &settlType_;
    case 64: return &settlDate_;
    case 544: return &cashMargin_;
    case 635: return &clearingFeeIndicator_;
    case 21: return &handlInst_;
    case 18: return &execInst_;
    case 110: return &minQty_;
    case 111: return &maxFloor_;
    case 100: return &exDestination_;
    case 336: case 386: case 625:
      return tradingSessionsGroup_.field(tag);
    case 81: return &processCode_;
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.field(tag);
    case 140: return &prevClosePx_;
    case 54: return &side_;
    case 401: return &sideValueInd_;
    case 114: return &locateReqd_;
    case 60: return &transactTime_;
    case 232: case 233: case 234:
      return stipulationsGroup_.field(tag);
    case 854: return &qtyType_;
    case 38: return &orderQty_;
    case 152: return &cashOrderQty_;
    case 516: return &orderPercent_;
    case 468: return &roundingDirection_;
    case 469: return &roundingModulus_;
    case 40: return &ordType_;
    case 423: return &priceType_;
    case 44: return &price_;
    case 99: return &stopPx_;
    case 218: return &spread_;
    case 220: return &benchmarkCurveCurrency_;
    case 221: return &benchmarkCurveName_;
    case 222: return &benchmarkCurvePoint_;
    case 662: return &benchmarkPrice_;
    case 663: return &benchmarkPriceType_;
    case 699: return &benchmarkSecurityID_;
    case 761: return &benchmarkSecurityIDSource_;
    case 235: return &yieldType_;
    case 236: return &yield_;
    case 701: return &yieldCalcDate_;
    case 696: return &yieldRedemptionDate_;
    case 697: return &yieldRedemptionPrice_;
    case 698: return &yieldRedemptionPriceType_;
    case 15: return &currency_;
    case 376: return &complianceID_;
    case 377: return &solicitedFlag_;
    case 23: return &iOIID_;
    case 117: return &quoteID_;
    case 59: return &timeInForce_;
    case 168: return &effectiveTime_;
    case 432: return &expireDate_;
    case 126: return &expireTime_;
    case 427: return &gTBookingInst_;
    case 12: return &commission_;
    case 13: return &commType_;
    case 479: return &commCurrency_;
    case 497: return &fundRenewWaiv_;
    case 528: return &orderCapacity_;
    case 529: return &orderRestrictions_;
    case 582: return &custOrderCapacity_;
    case 121: return &forexReq_;
    case 120: return &settlCurrency_;
    case 775: return &bookingType_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    case 193: return &settlDate2_;
    case 192: return &orderQty2_;
    case 640: return &price2_;
    case 77: return &positionEffect_;
    case 203: return &coveredOrUncovered_;
    case 210: return &maxShow_;
    case 211: return &pegOffsetValue_;
    case 835: return &pegMoveType_;
    case 836: return &pegOffsetType_;
    case 837: return &pegLimitType_;
    case 838: return &pegRoundDirection_;
    case 840: return &pegScope_;
    case 388: return &discretionInst_;
    case 389: return &discretionOffsetValue_;
    case 841: return &discretionMoveType_;
    case 842: return &discretionOffsetType_;
    case 843: return &discretionLimitType_;
    case 844: return &discretionRoundDirection_;
    case 846: return &discretionScope_;
    case 847: return &targetStrategy_;
    case 848: return &targetStrategyParameters_;
    case 849: return &participationRate_;
    case 494: return &designation_;
    default: return nullptr;
  }
}

int OrdersGroupComp::write(int valBeg) {
  valBeg = clOrdID_.write(valBeg);
  valBeg = secondaryClOrdID_.write(valBeg);
  valBeg = listSeqNo_.write(valBeg);
  valBeg = clOrdLinkID_.write(valBeg);
  valBeg = settlInstMode_.write(valBeg);
  valBeg = partyIDsGroup_.write(valBeg);
  valBeg = tradeOriginationDate_.write(valBeg);
  valBeg = tradeDate_.write(valBeg);
  valBeg = account_.write(valBeg);
  valBeg = acctIDSource_.write(valBeg);
  valBeg = accountType_.write(valBeg);
  valBeg = dayBookingInst_.write(valBeg);
  valBeg = bookingUnit_.write(valBeg);
  valBeg = allocID_.write(valBeg);
  valBeg = preallocMethod_.write(valBeg);
  valBeg = allocsGroup_.write(valBeg);
  valBeg = settlType_.write(valBeg);
  valBeg = settlDate_.write(valBeg);
  valBeg = cashMargin_.write(valBeg);
  valBeg = clearingFeeIndicator_.write(valBeg);
  valBeg = handlInst_.write(valBeg);
  valBeg = execInst_.write(valBeg);
  valBeg = minQty_.write(valBeg);
  valBeg = maxFloor_.write(valBeg);
  valBeg = exDestination_.write(valBeg);
  valBeg = tradingSessionsGroup_.write(valBeg);
  valBeg = processCode_.write(valBeg);
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = underlyingsGroup_.write(valBeg);
  valBeg = prevClosePx_.write(valBeg);
  valBeg = side_.write(valBeg);
  valBeg = sideValueInd_.write(valBeg);
  valBeg = locateReqd_.write(valBeg);
  valBeg = transactTime_.write(valBeg);
  valBeg = stipulationsGroup_.write(valBeg);
  valBeg = qtyType_.write(valBeg);
  valBeg = orderQty_.write(valBeg);
  valBeg = cashOrderQty_.write(valBeg);
  valBeg = orderPercent_.write(valBeg);
  valBeg = roundingDirection_.write(valBeg);
  valBeg = roundingModulus_.write(valBeg);
  valBeg = ordType_.write(valBeg);
  valBeg = priceType_.write(valBeg);
  valBeg = price_.write(valBeg);
  valBeg = stopPx_.write(valBeg);
  valBeg = spread_.write(valBeg);
  valBeg = benchmarkCurveCurrency_.write(valBeg);
  valBeg = benchmarkCurveName_.write(valBeg);
  valBeg = benchmarkCurvePoint_.write(valBeg);
  valBeg = benchmarkPrice_.write(valBeg);
  valBeg = benchmarkPriceType_.write(valBeg);
  valBeg = benchmarkSecurityID_.write(valBeg);
  valBeg = benchmarkSecurityIDSource_.write(valBeg);
  valBeg = yieldType_.write(valBeg);
  valBeg = yield_.write(valBeg);
  valBeg = yieldCalcDate_.write(valBeg);
  valBeg = yieldRedemptionDate_.write(valBeg);
  valBeg = yieldRedemptionPrice_.write(valBeg);
  valBeg = yieldRedemptionPriceType_.write(valBeg);
  valBeg = currency_.write(valBeg);
  valBeg = complianceID_.write(valBeg);
  valBeg = solicitedFlag_.write(valBeg);
  valBeg = iOIID_.write(valBeg);
  valBeg = quoteID_.write(valBeg);
  valBeg = timeInForce_.write(valBeg);
  valBeg = effectiveTime_.write(valBeg);
  valBeg = expireDate_.write(valBeg);
  valBeg = expireTime_.write(valBeg);
  valBeg = gTBookingInst_.write(valBeg);
  valBeg = commission_.write(valBeg);
  valBeg = commType_.write(valBeg);
  valBeg = commCurrency_.write(valBeg);
  valBeg = fundRenewWaiv_.write(valBeg);
  valBeg = orderCapacity_.write(valBeg);
  valBeg = orderRestrictions_.write(valBeg);
  valBeg = custOrderCapacity_.write(valBeg);
  valBeg = forexReq_.write(valBeg);
  valBeg = settlCurrency_.write(valBeg);
  valBeg = bookingType_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  valBeg = settlDate2_.write(valBeg);
  valBeg = orderQty2_.write(valBeg);
  valBeg = price2_.write(valBeg);
  valBeg = positionEffect_.write(valBeg);
  valBeg = coveredOrUncovered_.write(valBeg);
  valBeg = maxShow_.write(valBeg);
  valBeg = pegOffsetValue_.write(valBeg);
  valBeg = pegMoveType_.write(valBeg);
  valBeg = pegOffsetType_.write(valBeg);
  valBeg = pegLimitType_.write(valBeg);
  valBeg = pegRoundDirection_.write(valBeg);
  valBeg = pegScope_.write(valBeg);
  valBeg = discretionInst_.write(valBeg);
  valBeg = discretionOffsetValue_.write(valBeg);
  valBeg = discretionMoveType_.write(valBeg);
  valBeg = discretionOffsetType_.write(valBeg);
  valBeg = discretionLimitType_.write(valBeg);
  valBeg = discretionRoundDirection_.write(valBeg);
  valBeg = discretionScope_.write(valBeg);
  valBeg = targetStrategy_.write(valBeg);
  valBeg = targetStrategyParameters_.write(valBeg);
  valBeg = participationRate_.write(valBeg);
  valBeg = designation_.write(valBeg);
  return valBeg;
}

Nested2PartySubIDsGroupComp::Nested2PartySubIDsGroupComp(AbstractMessage* message)
    : Component(message),
    nested2PartySubID_(message),
    nested2PartySubIDType_(message) {}

AbstractField* Nested2PartySubIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 760: return nested2PartySubID_.map(version, bytes, fldBeg);
    case 807: return nested2PartySubIDType_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* Nested2PartySubIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 760: return &nested2PartySubID_;
    case 807: return &nested2PartySubIDType_;
    default: return nullptr;
  }
}

int Nested2PartySubIDsGroupComp::write(int valBeg) {
  valBeg = nested2PartySubID_.write(valBeg);
  valBeg = nested2PartySubIDType_.write(valBeg);
  return valBeg;
}

Nested2PartyIDsGroupComp::Nested2PartyIDsGroupComp(AbstractMessage* message)
    : Component(message),
    nested2PartyID_(message),
    nested2PartyIDSource_(message),
    nested2PartyRole_(message),
    nested2PartySubIDsGroup_(message) {}

AbstractField* Nested2PartyIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 757: return nested2PartyID_.map(version, bytes, fldBeg);
    case 758: return nested2PartyIDSource_.map(version, bytes, fldBeg);
    case 759: return nested2PartyRole_.map(version, bytes, fldBeg);
    case 760: case 806: case 807:
      return nested2PartySubIDsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* Nested2PartyIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 757: return &nested2PartyID_;
    case 758: return &nested2PartyIDSource_;
    case 759: return &nested2PartyRole_;
    case 760: case 806: case 807:
      return nested2PartySubIDsGroup_.field(tag);
    default: return nullptr;
  }
}

int Nested2PartyIDsGroupComp::write(int valBeg) {
  valBeg = nested2PartyID_.write(valBeg);
  valBeg = nested2PartyIDSource_.write(valBeg);
  valBeg = nested2PartyRole_.write(valBeg);
  valBeg = nested2PartySubIDsGroup_.write(valBeg);
  return valBeg;
}

OrdersGroup1Comp::OrdersGroup1Comp(AbstractMessage* message)
    : Component(message),
    clOrdID_(message),
    orderID_(message),
    secondaryOrderID_(message),
    secondaryClOrdID_(message),
    listID_(message),
    nested2PartyIDsGroup_(message),
    orderQty_(message),
    orderAvgPx_(message),
    orderBookingQty_(message) {}

AbstractField* OrdersGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 11: return clOrdID_.map(version, bytes, fldBeg);
    case 37: return orderID_.map(version, bytes, fldBeg);
    case 198: return secondaryOrderID_.map(version, bytes, fldBeg);
    case 526: return secondaryClOrdID_.map(version, bytes, fldBeg);
    case 66: return listID_.map(version, bytes, fldBeg);
    case 756: case 757: case 758: case 759: case 760: case 806: case 807:
      return nested2PartyIDsGroup_.map(tag, fldBeg);
    case 38: return orderQty_.map(version, bytes, fldBeg);
    case 799: return orderAvgPx_.map(version, bytes, fldBeg);
    case 800: return orderBookingQty_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* OrdersGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 11: return &clOrdID_;
    case 37: return &orderID_;
    case 198: return &secondaryOrderID_;
    case 526: return &secondaryClOrdID_;
    case 66: return &listID_;
    case 756: case 757: case 758: case 759: case 760: case 806: case 807:
      return nested2PartyIDsGroup_.field(tag);
    case 38: return &orderQty_;
    case 799: return &orderAvgPx_;
    case 800: return &orderBookingQty_;
    default: return nullptr;
  }
}

int OrdersGroup1Comp::write(int valBeg) {
  valBeg = clOrdID_.write(valBeg);
  valBeg = orderID_.write(valBeg);
  valBeg = secondaryOrderID_.write(valBeg);
  valBeg = secondaryClOrdID_.write(valBeg);
  valBeg = listID_.write(valBeg);
  valBeg = nested2PartyIDsGroup_.write(valBeg);
  valBeg = orderQty_.write(valBeg);
  valBeg = orderAvgPx_.write(valBeg);
  valBeg = orderBookingQty_.write(valBeg);
  return valBeg;
}

ExecsGroupComp::ExecsGroupComp(AbstractMessage* message)
    : Component(message),
    lastQty_(message),
    execID_(message),
    secondaryExecID_(message),
    lastPx_(message),
    lastParPx_(message),
    lastCapacity_(message) {}

AbstractField* ExecsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 32: return lastQty_.map(version, bytes, fldBeg);
    case 17: return execID_.map(version, bytes, fldBeg);
    case 527: return secondaryExecID_.map(version, bytes, fldBeg);
    case 31: return lastPx_.map(version, bytes, fldBeg);
    case 669: return lastParPx_.map(version, bytes, fldBeg);
    case 29: return lastCapacity_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* ExecsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 32: return &lastQty_;
    case 17: return &execID_;
    case 527: return &secondaryExecID_;
    case 31: return &lastPx_;
    case 669: return &lastParPx_;
    case 29: return &lastCapacity_;
    default: return nullptr;
  }
}

int ExecsGroupComp::write(int valBeg) {
  valBeg = lastQty_.write(valBeg);
  valBeg = execID_.write(valBeg);
  valBeg = secondaryExecID_.write(valBeg);
  valBeg = lastPx_.write(valBeg);
  valBeg = lastParPx_.write(valBeg);
  valBeg = lastCapacity_.write(valBeg);
  return valBeg;
}

InstrAttribGroupComp::InstrAttribGroupComp(AbstractMessage* message)
    : Component(message),
    instrAttribType_(message),
    instrAttribValue_(message) {}

AbstractField* InstrAttribGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 871: return instrAttribType_.map(version, bytes, fldBeg);
    case 872: return instrAttribValue_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* InstrAttribGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 871: return &instrAttribType_;
    case 872: return &instrAttribValue_;
    default: return nullptr;
  }
}

int InstrAttribGroupComp::write(int valBeg) {
  valBeg = instrAttribType_.write(valBeg);
  valBeg = instrAttribValue_.write(valBeg);
  return valBeg;
}

ClearingInstructionsGroupComp::ClearingInstructionsGroupComp(AbstractMessage* message)
    : Component(message),
    clearingInstruction_(message) {}

AbstractField* ClearingInstructionsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 577: return clearingInstruction_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* ClearingInstructionsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 577: return &clearingInstruction_;
    default: return nullptr;
  }
}

int ClearingInstructionsGroupComp::write(int valBeg) {
  valBeg = clearingInstruction_.write(valBeg);
  return valBeg;
}

SettlPartySubIDsGroupComp::SettlPartySubIDsGroupComp(AbstractMessage* message)
    : Component(message),
    settlPartySubID_(message),
    settlPartySubIDType_(message) {}

AbstractField* SettlPartySubIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 785: return settlPartySubID_.map(version, bytes, fldBeg);
    case 786: return settlPartySubIDType_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* SettlPartySubIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 785: return &settlPartySubID_;
    case 786: return &settlPartySubIDType_;
    default: return nullptr;
  }
}

int SettlPartySubIDsGroupComp::write(int valBeg) {
  valBeg = settlPartySubID_.write(valBeg);
  valBeg = settlPartySubIDType_.write(valBeg);
  return valBeg;
}

SettlPartyIDsGroupComp::SettlPartyIDsGroupComp(AbstractMessage* message)
    : Component(message),
    settlPartyID_(message),
    settlPartyIDSource_(message),
    settlPartyRole_(message),
    settlPartySubIDsGroup_(message) {}

AbstractField* SettlPartyIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 782: return settlPartyID_.map(version, bytes, fldBeg);
    case 783: return settlPartyIDSource_.map(version, bytes, fldBeg);
    case 784: return settlPartyRole_.map(version, bytes, fldBeg);
    case 785: case 786: case 801:
      return settlPartySubIDsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* SettlPartyIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 782: return &settlPartyID_;
    case 783: return &settlPartyIDSource_;
    case 784: return &settlPartyRole_;
    case 785: case 786: case 801:
      return settlPartySubIDsGroup_.field(tag);
    default: return nullptr;
  }
}

int SettlPartyIDsGroupComp::write(int valBeg) {
  valBeg = settlPartyID_.write(valBeg);
  valBeg = settlPartyIDSource_.write(valBeg);
  valBeg = settlPartyRole_.write(valBeg);
  valBeg = settlPartySubIDsGroup_.write(valBeg);
  return valBeg;
}

DlvyInstGroupComp::DlvyInstGroupComp(AbstractMessage* message)
    : Component(message),
    settlInstSource_(message),
    dlvyInstType_(message),
    settlPartyIDsGroup_(message) {}

AbstractField* DlvyInstGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 165: return settlInstSource_.map(version, bytes, fldBeg);
    case 787: return dlvyInstType_.map(version, bytes, fldBeg);
    case 781: case 782: case 783: case 784: case 785: case 786: case 801:
      return settlPartyIDsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* DlvyInstGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 165: return &settlInstSource_;
    case 787: return &dlvyInstType_;
    case 781: case 782: case 783: case 784: case 785: case 786: case 801:
      return settlPartyIDsGroup_.field(tag);
    default: return nullptr;
  }
}

int DlvyInstGroupComp::write(int valBeg) {
  valBeg = settlInstSource_.write(valBeg);
  valBeg = dlvyInstType_.write(valBeg);
  valBeg = settlPartyIDsGroup_.write(valBeg);
  return valBeg;
}

AllocsGroup1Comp::AllocsGroup1Comp(AbstractMessage* message)
    : Component(message),
    allocAccount_(message),
    allocAcctIDSource_(message),
    matchStatus_(message),
    allocPrice_(message),
    allocQty_(message),
    individualAllocID_(message),
    processCode_(message),
    nestedPartyIDsGroup_(message),
    notifyBrokerOfCredit_(message),
    allocHandlInst_(message),
    allocText_(message),
    encodedAllocTextLen_(message),
    encodedAllocText_(message),
    commission_(message),
    commType_(message),
    commCurrency_(message),
    fundRenewWaiv_(message),
    allocAvgPx_(message),
    allocNetMoney_(message),
    settlCurrAmt_(message),
    allocSettlCurrAmt_(message),
    settlCurrency_(message),
    allocSettlCurrency_(message),
    settlCurrFxRate_(message),
    settlCurrFxRateCalc_(message),
    allocAccruedInterestAmt_(message),
    allocInterestAtMaturity_(message),
    miscFeesGroup_(message),
    clearingInstructionsGroup_(message),
    allocSettlInstType_(message),
    settlDeliveryType_(message),
    standInstDbType_(message),
    standInstDbName_(message),
    standInstDbID_(message),
    dlvyInstGroup_(message) {}

AbstractField* AllocsGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 79: return allocAccount_.map(version, bytes, fldBeg);
    case 661: return allocAcctIDSource_.map(version, bytes, fldBeg);
    case 573: return matchStatus_.map(version, bytes, fldBeg);
    case 366: return allocPrice_.map(version, bytes, fldBeg);
    case 80: return allocQty_.map(version, bytes, fldBeg);
    case 467: return individualAllocID_.map(version, bytes, fldBeg);
    case 81: return processCode_.map(version, bytes, fldBeg);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.map(tag, fldBeg);
    case 208: return notifyBrokerOfCredit_.map(version, bytes, fldBeg);
    case 209: return allocHandlInst_.map(version, bytes, fldBeg);
    case 161: return allocText_.map(version, bytes, fldBeg);
    case 360: return encodedAllocTextLen_.map(version, bytes, fldBeg);
    case 361: return encodedAllocText_.map(version, bytes, fldBeg);
    case 12: return commission_.map(version, bytes, fldBeg);
    case 13: return commType_.map(version, bytes, fldBeg);
    case 479: return commCurrency_.map(version, bytes, fldBeg);
    case 497: return fundRenewWaiv_.map(version, bytes, fldBeg);
    case 153: return allocAvgPx_.map(version, bytes, fldBeg);
    case 154: return allocNetMoney_.map(version, bytes, fldBeg);
    case 119: return settlCurrAmt_.map(version, bytes, fldBeg);
    case 737: return allocSettlCurrAmt_.map(version, bytes, fldBeg);
    case 120: return settlCurrency_.map(version, bytes, fldBeg);
    case 736: return allocSettlCurrency_.map(version, bytes, fldBeg);
    case 155: return settlCurrFxRate_.map(version, bytes, fldBeg);
    case 156: return settlCurrFxRateCalc_.map(version, bytes, fldBeg);
    case 742: return allocAccruedInterestAmt_.map(version, bytes, fldBeg);
    case 741: return allocInterestAtMaturity_.map(version, bytes, fldBeg);
    case 136: case 137: case 138: case 139: case 891:
      return miscFeesGroup_.map(tag, fldBeg);
    case 576: case 577:
      return clearingInstructionsGroup_.map(tag, fldBeg);
    case 780: return allocSettlInstType_.map(version, bytes, fldBeg);
    case 172: return settlDeliveryType_.map(version, bytes, fldBeg);
    case 169: return standInstDbType_.map(version, bytes, fldBeg);
    case 170: return standInstDbName_.map(version, bytes, fldBeg);
    case 171: return standInstDbID_.map(version, bytes, fldBeg);
    case 85: case 165: case 781: case 782: case 783: case 784: case 785: case 786: case 787: case 801:
      return dlvyInstGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* AllocsGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 79: return &allocAccount_;
    case 661: return &allocAcctIDSource_;
    case 573: return &matchStatus_;
    case 366: return &allocPrice_;
    case 80: return &allocQty_;
    case 467: return &individualAllocID_;
    case 81: return &processCode_;
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.field(tag);
    case 208: return &notifyBrokerOfCredit_;
    case 209: return &allocHandlInst_;
    case 161: return &allocText_;
    case 360: return &encodedAllocTextLen_;
    case 361: return &encodedAllocText_;
    case 12: return &commission_;
    case 13: return &commType_;
    case 479: return &commCurrency_;
    case 497: return &fundRenewWaiv_;
    case 153: return &allocAvgPx_;
    case 154: return &allocNetMoney_;
    case 119: return &settlCurrAmt_;
    case 737: return &allocSettlCurrAmt_;
    case 120: return &settlCurrency_;
    case 736: return &allocSettlCurrency_;
    case 155: return &settlCurrFxRate_;
    case 156: return &settlCurrFxRateCalc_;
    case 742: return &allocAccruedInterestAmt_;
    case 741: return &allocInterestAtMaturity_;
    case 136: case 137: case 138: case 139: case 891:
      return miscFeesGroup_.field(tag);
    case 576: case 577:
      return clearingInstructionsGroup_.field(tag);
    case 780: return &allocSettlInstType_;
    case 172: return &settlDeliveryType_;
    case 169: return &standInstDbType_;
    case 170: return &standInstDbName_;
    case 171: return &standInstDbID_;
    case 85: case 165: case 781: case 782: case 783: case 784: case 785: case 786: case 787: case 801:
      return dlvyInstGroup_.field(tag);
    default: return nullptr;
  }
}

int AllocsGroup1Comp::write(int valBeg) {
  valBeg = allocAccount_.write(valBeg);
  valBeg = allocAcctIDSource_.write(valBeg);
  valBeg = matchStatus_.write(valBeg);
  valBeg = allocPrice_.write(valBeg);
  valBeg = allocQty_.write(valBeg);
  valBeg = individualAllocID_.write(valBeg);
  valBeg = processCode_.write(valBeg);
  valBeg = nestedPartyIDsGroup_.write(valBeg);
  valBeg = notifyBrokerOfCredit_.write(valBeg);
  valBeg = allocHandlInst_.write(valBeg);
  valBeg = allocText_.write(valBeg);
  valBeg = encodedAllocTextLen_.write(valBeg);
  valBeg = encodedAllocText_.write(valBeg);
  valBeg = commission_.write(valBeg);
  valBeg = commType_.write(valBeg);
  valBeg = commCurrency_.write(valBeg);
  valBeg = fundRenewWaiv_.write(valBeg);
  valBeg = allocAvgPx_.write(valBeg);
  valBeg = allocNetMoney_.write(valBeg);
  valBeg = settlCurrAmt_.write(valBeg);
  valBeg = allocSettlCurrAmt_.write(valBeg);
  valBeg = settlCurrency_.write(valBeg);
  valBeg = allocSettlCurrency_.write(valBeg);
  valBeg = settlCurrFxRate_.write(valBeg);
  valBeg = settlCurrFxRateCalc_.write(valBeg);
  valBeg = allocAccruedInterestAmt_.write(valBeg);
  valBeg = allocInterestAtMaturity_.write(valBeg);
  valBeg = miscFeesGroup_.write(valBeg);
  valBeg = clearingInstructionsGroup_.write(valBeg);
  valBeg = allocSettlInstType_.write(valBeg);
  valBeg = settlDeliveryType_.write(valBeg);
  valBeg = standInstDbType_.write(valBeg);
  valBeg = standInstDbName_.write(valBeg);
  valBeg = standInstDbID_.write(valBeg);
  valBeg = dlvyInstGroup_.write(valBeg);
  return valBeg;
}

OrdersGroup2Comp::OrdersGroup2Comp(AbstractMessage* message)
    : Component(message),
    clOrdID_(message),
    secondaryClOrdID_(message),
    cumQty_(message),
    ordStatus_(message),
    workingIndicator_(message),
    leavesQty_(message),
    cxlQty_(message),
    avgPx_(message),
    ordRejReason_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message) {}

AbstractField* OrdersGroup2Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 11: return clOrdID_.map(version, bytes, fldBeg);
    case 526: return secondaryClOrdID_.map(version, bytes, fldBeg);
    case 14: return cumQty_.map(version, bytes, fldBeg);
    case 39: return ordStatus_.map(version, bytes, fldBeg);
    case 636: return workingIndicator_.map(version, bytes, fldBeg);
    case 151: return leavesQty_.map(version, bytes, fldBeg);
    case 84: return cxlQty_.map(version, bytes, fldBeg);
    case 6: return avgPx_.map(version, bytes, fldBeg);
    case 103: return ordRejReason_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* OrdersGroup2Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 11: return &clOrdID_;
    case 526: return &secondaryClOrdID_;
    case 14: return &cumQty_;
    case 39: return &ordStatus_;
    case 636: return &workingIndicator_;
    case 151: return &leavesQty_;
    case 84: return &cxlQty_;
    case 6: return &avgPx_;
    case 103: return &ordRejReason_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    default: return nullptr;
  }
}

int OrdersGroup2Comp::write(int valBeg) {
  valBeg = clOrdID_.write(valBeg);
  valBeg = secondaryClOrdID_.write(valBeg);
  valBeg = cumQty_.write(valBeg);
  valBeg = ordStatus_.write(valBeg);
  valBeg = workingIndicator_.write(valBeg);
  valBeg = leavesQty_.write(valBeg);
  valBeg = cxlQty_.write(valBeg);
  valBeg = avgPx_.write(valBeg);
  valBeg = ordRejReason_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  return valBeg;
}

AllocsGroup2Comp::AllocsGroup2Comp(AbstractMessage* message)
    : Component(message),
    allocAccount_(message),
    allocAcctIDSource_(message),
    allocPrice_(message),
    individualAllocID_(message),
    individualAllocRejCode_(message),
    allocText_(message),
    encodedAllocTextLen_(message),
    encodedAllocText_(message) {}

AbstractField* AllocsGroup2Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 79: return allocAccount_.map(version, bytes, fldBeg);
    case 661: return allocAcctIDSource_.map(version, bytes, fldBeg);
    case 366: return allocPrice_.map(version, bytes, fldBeg);
    case 467: return individualAllocID_.map(version, bytes, fldBeg);
    case 776: return individualAllocRejCode_.map(version, bytes, fldBeg);
    case 161: return allocText_.map(version, bytes, fldBeg);
    case 360: return encodedAllocTextLen_.map(version, bytes, fldBeg);
    case 361: return encodedAllocText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* AllocsGroup2Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 79: return &allocAccount_;
    case 661: return &allocAcctIDSource_;
    case 366: return &allocPrice_;
    case 467: return &individualAllocID_;
    case 776: return &individualAllocRejCode_;
    case 161: return &allocText_;
    case 360: return &encodedAllocTextLen_;
    case 361: return &encodedAllocText_;
    default: return nullptr;
  }
}

int AllocsGroup2Comp::write(int valBeg) {
  valBeg = allocAccount_.write(valBeg);
  valBeg = allocAcctIDSource_.write(valBeg);
  valBeg = allocPrice_.write(valBeg);
  valBeg = individualAllocID_.write(valBeg);
  valBeg = individualAllocRejCode_.write(valBeg);
  valBeg = allocText_.write(valBeg);
  valBeg = encodedAllocTextLen_.write(valBeg);
  valBeg = encodedAllocText_.write(valBeg);
  return valBeg;
}

LegsGroup3Comp::LegsGroup3Comp(AbstractMessage* message)
    : Component(message),
    legSymbol_(message),
    legSymbolSfx_(message),
    legSecurityID_(message),
    legSecurityIDSource_(message),
    legSecurityAltIDGroup_(message),
    legProduct_(message),
    legCFICode_(message),
    legSecurityType_(message),
    legSecuritySubType_(message),
    legMaturityMonthYear_(message),
    legMaturityDate_(message),
    legCouponPaymentDate_(message),
    legIssueDate_(message),
    legRepoCollateralSecurityType_(message),
    legRepurchaseTerm_(message),
    legRepurchaseRate_(message),
    legFactor_(message),
    legCreditRating_(message),
    legInstrRegistry_(message),
    legCountryOfIssue_(message),
    legStateOrProvinceOfIssue_(message),
    legLocaleOfIssue_(message),
    legRedemptionDate_(message),
    legStrikePrice_(message),
    legStrikeCurrency_(message),
    legOptAttribute_(message),
    legContractMultiplier_(message),
    legCouponRate_(message),
    legSecurityExchange_(message),
    legIssuer_(message),
    encodedLegIssuerLen_(message),
    encodedLegIssuer_(message),
    legSecurityDesc_(message),
    encodedLegSecurityDescLen_(message),
    encodedLegSecurityDesc_(message),
    legRatioQty_(message),
    legSide_(message),
    legCurrency_(message),
    legPool_(message),
    legDatedDate_(message),
    legContractSettlMonth_(message),
    legInterestAccrualDate_(message),
    legQty_(message),
    legSwapType_(message),
    legSettlType_(message),
    legSettlDate_(message),
    legStipulationsGroup_(message),
    nestedPartyIDsGroup_(message),
    legBenchmarkCurveCurrency_(message),
    legBenchmarkCurveName_(message),
    legBenchmarkCurvePoint_(message),
    legBenchmarkPrice_(message),
    legBenchmarkPriceType_(message) {}

AbstractField* LegsGroup3Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 600: return legSymbol_.map(version, bytes, fldBeg);
    case 601: return legSymbolSfx_.map(version, bytes, fldBeg);
    case 602: return legSecurityID_.map(version, bytes, fldBeg);
    case 603: return legSecurityIDSource_.map(version, bytes, fldBeg);
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.map(tag, fldBeg);
    case 607: return legProduct_.map(version, bytes, fldBeg);
    case 608: return legCFICode_.map(version, bytes, fldBeg);
    case 609: return legSecurityType_.map(version, bytes, fldBeg);
    case 764: return legSecuritySubType_.map(version, bytes, fldBeg);
    case 610: return legMaturityMonthYear_.map(version, bytes, fldBeg);
    case 611: return legMaturityDate_.map(version, bytes, fldBeg);
    case 248: return legCouponPaymentDate_.map(version, bytes, fldBeg);
    case 249: return legIssueDate_.map(version, bytes, fldBeg);
    case 250: return legRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 251: return legRepurchaseTerm_.map(version, bytes, fldBeg);
    case 252: return legRepurchaseRate_.map(version, bytes, fldBeg);
    case 253: return legFactor_.map(version, bytes, fldBeg);
    case 257: return legCreditRating_.map(version, bytes, fldBeg);
    case 599: return legInstrRegistry_.map(version, bytes, fldBeg);
    case 596: return legCountryOfIssue_.map(version, bytes, fldBeg);
    case 597: return legStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 598: return legLocaleOfIssue_.map(version, bytes, fldBeg);
    case 254: return legRedemptionDate_.map(version, bytes, fldBeg);
    case 612: return legStrikePrice_.map(version, bytes, fldBeg);
    case 942: return legStrikeCurrency_.map(version, bytes, fldBeg);
    case 613: return legOptAttribute_.map(version, bytes, fldBeg);
    case 614: return legContractMultiplier_.map(version, bytes, fldBeg);
    case 615: return legCouponRate_.map(version, bytes, fldBeg);
    case 616: return legSecurityExchange_.map(version, bytes, fldBeg);
    case 617: return legIssuer_.map(version, bytes, fldBeg);
    case 618: return encodedLegIssuerLen_.map(version, bytes, fldBeg);
    case 619: return encodedLegIssuer_.map(version, bytes, fldBeg);
    case 620: return legSecurityDesc_.map(version, bytes, fldBeg);
    case 621: return encodedLegSecurityDescLen_.map(version, bytes, fldBeg);
    case 622: return encodedLegSecurityDesc_.map(version, bytes, fldBeg);
    case 623: return legRatioQty_.map(version, bytes, fldBeg);
    case 624: return legSide_.map(version, bytes, fldBeg);
    case 556: return legCurrency_.map(version, bytes, fldBeg);
    case 740: return legPool_.map(version, bytes, fldBeg);
    case 739: return legDatedDate_.map(version, bytes, fldBeg);
    case 955: return legContractSettlMonth_.map(version, bytes, fldBeg);
    case 956: return legInterestAccrualDate_.map(version, bytes, fldBeg);
    case 687: return legQty_.map(version, bytes, fldBeg);
    case 690: return legSwapType_.map(version, bytes, fldBeg);
    case 587: return legSettlType_.map(version, bytes, fldBeg);
    case 588: return legSettlDate_.map(version, bytes, fldBeg);
    case 683: case 688: case 689:
      return legStipulationsGroup_.map(tag, fldBeg);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.map(tag, fldBeg);
    case 676: return legBenchmarkCurveCurrency_.map(version, bytes, fldBeg);
    case 677: return legBenchmarkCurveName_.map(version, bytes, fldBeg);
    case 678: return legBenchmarkCurvePoint_.map(version, bytes, fldBeg);
    case 679: return legBenchmarkPrice_.map(version, bytes, fldBeg);
    case 680: return legBenchmarkPriceType_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegsGroup3Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 600: return &legSymbol_;
    case 601: return &legSymbolSfx_;
    case 602: return &legSecurityID_;
    case 603: return &legSecurityIDSource_;
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.field(tag);
    case 607: return &legProduct_;
    case 608: return &legCFICode_;
    case 609: return &legSecurityType_;
    case 764: return &legSecuritySubType_;
    case 610: return &legMaturityMonthYear_;
    case 611: return &legMaturityDate_;
    case 248: return &legCouponPaymentDate_;
    case 249: return &legIssueDate_;
    case 250: return &legRepoCollateralSecurityType_;
    case 251: return &legRepurchaseTerm_;
    case 252: return &legRepurchaseRate_;
    case 253: return &legFactor_;
    case 257: return &legCreditRating_;
    case 599: return &legInstrRegistry_;
    case 596: return &legCountryOfIssue_;
    case 597: return &legStateOrProvinceOfIssue_;
    case 598: return &legLocaleOfIssue_;
    case 254: return &legRedemptionDate_;
    case 612: return &legStrikePrice_;
    case 942: return &legStrikeCurrency_;
    case 613: return &legOptAttribute_;
    case 614: return &legContractMultiplier_;
    case 615: return &legCouponRate_;
    case 616: return &legSecurityExchange_;
    case 617: return &legIssuer_;
    case 618: return &encodedLegIssuerLen_;
    case 619: return &encodedLegIssuer_;
    case 620: return &legSecurityDesc_;
    case 621: return &encodedLegSecurityDescLen_;
    case 622: return &encodedLegSecurityDesc_;
    case 623: return &legRatioQty_;
    case 624: return &legSide_;
    case 556: return &legCurrency_;
    case 740: return &legPool_;
    case 739: return &legDatedDate_;
    case 955: return &legContractSettlMonth_;
    case 956: return &legInterestAccrualDate_;
    case 687: return &legQty_;
    case 690: return &legSwapType_;
    case 587: return &legSettlType_;
    case 588: return &legSettlDate_;
    case 683: case 688: case 689:
      return legStipulationsGroup_.field(tag);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.field(tag);
    case 676: return &legBenchmarkCurveCurrency_;
    case 677: return &legBenchmarkCurveName_;
    case 678: return &legBenchmarkCurvePoint_;
    case 679: return &legBenchmarkPrice_;
    case 680: return &legBenchmarkPriceType_;
    default: return nullptr;
  }
}

int LegsGroup3Comp::write(int valBeg) {
  valBeg = legSymbol_.write(valBeg);
  valBeg = legSymbolSfx_.write(valBeg);
  valBeg = legSecurityID_.write(valBeg);
  valBeg = legSecurityIDSource_.write(valBeg);
  valBeg = legSecurityAltIDGroup_.write(valBeg);
  valBeg = legProduct_.write(valBeg);
  valBeg = legCFICode_.write(valBeg);
  valBeg = legSecurityType_.write(valBeg);
  valBeg = legSecuritySubType_.write(valBeg);
  valBeg = legMaturityMonthYear_.write(valBeg);
  valBeg = legMaturityDate_.write(valBeg);
  valBeg = legCouponPaymentDate_.write(valBeg);
  valBeg = legIssueDate_.write(valBeg);
  valBeg = legRepoCollateralSecurityType_.write(valBeg);
  valBeg = legRepurchaseTerm_.write(valBeg);
  valBeg = legRepurchaseRate_.write(valBeg);
  valBeg = legFactor_.write(valBeg);
  valBeg = legCreditRating_.write(valBeg);
  valBeg = legInstrRegistry_.write(valBeg);
  valBeg = legCountryOfIssue_.write(valBeg);
  valBeg = legStateOrProvinceOfIssue_.write(valBeg);
  valBeg = legLocaleOfIssue_.write(valBeg);
  valBeg = legRedemptionDate_.write(valBeg);
  valBeg = legStrikePrice_.write(valBeg);
  valBeg = legStrikeCurrency_.write(valBeg);
  valBeg = legOptAttribute_.write(valBeg);
  valBeg = legContractMultiplier_.write(valBeg);
  valBeg = legCouponRate_.write(valBeg);
  valBeg = legSecurityExchange_.write(valBeg);
  valBeg = legIssuer_.write(valBeg);
  valBeg = encodedLegIssuerLen_.write(valBeg);
  valBeg = encodedLegIssuer_.write(valBeg);
  valBeg = legSecurityDesc_.write(valBeg);
  valBeg = encodedLegSecurityDescLen_.write(valBeg);
  valBeg = encodedLegSecurityDesc_.write(valBeg);
  valBeg = legRatioQty_.write(valBeg);
  valBeg = legSide_.write(valBeg);
  valBeg = legCurrency_.write(valBeg);
  valBeg = legPool_.write(valBeg);
  valBeg = legDatedDate_.write(valBeg);
  valBeg = legContractSettlMonth_.write(valBeg);
  valBeg = legInterestAccrualDate_.write(valBeg);
  valBeg = legQty_.write(valBeg);
  valBeg = legSwapType_.write(valBeg);
  valBeg = legSettlType_.write(valBeg);
  valBeg = legSettlDate_.write(valBeg);
  valBeg = legStipulationsGroup_.write(valBeg);
  valBeg = nestedPartyIDsGroup_.write(valBeg);
  valBeg = legBenchmarkCurveCurrency_.write(valBeg);
  valBeg = legBenchmarkCurveName_.write(valBeg);
  valBeg = legBenchmarkCurvePoint_.write(valBeg);
  valBeg = legBenchmarkPrice_.write(valBeg);
  valBeg = legBenchmarkPriceType_.write(valBeg);
  return valBeg;
}

QuoteQualifiersGroupComp::QuoteQualifiersGroupComp(AbstractMessage* message)
    : Component(message),
    quoteQualifier_(message) {}

AbstractField* QuoteQualifiersGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 695: return quoteQualifier_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* QuoteQualifiersGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 695: return &quoteQualifier_;
    default: return nullptr;
  }
}

int QuoteQualifiersGroupComp::write(int valBeg) {
  valBeg = quoteQualifier_.write(valBeg);
  return valBeg;
}

RelatedSymGroup1Comp::RelatedSymGroup1Comp(AbstractMessage* message)
    : Component(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    agreementDesc_(message),
    agreementID_(message),
    agreementDate_(message),
    agreementCurrency_(message),
    terminationType_(message),
    startDate_(message),
    endDate_(message),
    deliveryType_(message),
    marginRatio_(message),
    underlyingsGroup_(message),
    prevClosePx_(message),
    quoteRequestType_(message),
    quoteType_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    tradeOriginationDate_(message),
    side_(message),
    qtyType_(message),
    orderQty_(message),
    cashOrderQty_(message),
    orderPercent_(message),
    roundingDirection_(message),
    roundingModulus_(message),
    settlType_(message),
    settlDate_(message),
    settlDate2_(message),
    orderQty2_(message),
    currency_(message),
    stipulationsGroup_(message),
    account_(message),
    acctIDSource_(message),
    accountType_(message),
    legsGroup3_(message),
    quoteQualifiersGroup_(message),
    quotePriceType_(message),
    ordType_(message),
    validUntilTime_(message),
    expireTime_(message),
    transactTime_(message),
    spread_(message),
    benchmarkCurveCurrency_(message),
    benchmarkCurveName_(message),
    benchmarkCurvePoint_(message),
    benchmarkPrice_(message),
    benchmarkPriceType_(message),
    benchmarkSecurityID_(message),
    benchmarkSecurityIDSource_(message),
    priceType_(message),
    price_(message),
    price2_(message),
    yieldType_(message),
    yield_(message),
    yieldCalcDate_(message),
    yieldRedemptionDate_(message),
    yieldRedemptionPrice_(message),
    yieldRedemptionPriceType_(message),
    partyIDsGroup_(message) {}

AbstractField* RelatedSymGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 913: return agreementDesc_.map(version, bytes, fldBeg);
    case 914: return agreementID_.map(version, bytes, fldBeg);
    case 915: return agreementDate_.map(version, bytes, fldBeg);
    case 918: return agreementCurrency_.map(version, bytes, fldBeg);
    case 788: return terminationType_.map(version, bytes, fldBeg);
    case 916: return startDate_.map(version, bytes, fldBeg);
    case 917: return endDate_.map(version, bytes, fldBeg);
    case 919: return deliveryType_.map(version, bytes, fldBeg);
    case 898: return marginRatio_.map(version, bytes, fldBeg);
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.map(tag, fldBeg);
    case 140: return prevClosePx_.map(version, bytes, fldBeg);
    case 303: return quoteRequestType_.map(version, bytes, fldBeg);
    case 537: return quoteType_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 229: return tradeOriginationDate_.map(version, bytes, fldBeg);
    case 54: return side_.map(version, bytes, fldBeg);
    case 854: return qtyType_.map(version, bytes, fldBeg);
    case 38: return orderQty_.map(version, bytes, fldBeg);
    case 152: return cashOrderQty_.map(version, bytes, fldBeg);
    case 516: return orderPercent_.map(version, bytes, fldBeg);
    case 468: return roundingDirection_.map(version, bytes, fldBeg);
    case 469: return roundingModulus_.map(version, bytes, fldBeg);
    case 63: return settlType_.map(version, bytes, fldBeg);
    case 64: return settlDate_.map(version, bytes, fldBeg);
    case 193: return settlDate2_.map(version, bytes, fldBeg);
    case 192: return orderQty2_.map(version, bytes, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    case 232: case 233: case 234:
      return stipulationsGroup_.map(tag, fldBeg);
    case 1: return account_.map(version, bytes, fldBeg);
    case 660: return acctIDSource_.map(version, bytes, fldBeg);
    case 581: return accountType_.map(version, bytes, fldBeg);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 524: case 525: case 538: case 539: case 545: case 555: case 556: case 587: case 588: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 676: case 677: case 678: case 679: case 680: case 683: case 687: case 688: case 689: case 690: case 739: case 740: case 764: case 804: case 805: case 942: case 955: case 956:
      return legsGroup3_.map(tag, fldBeg);
    case 695: case 735:
      return quoteQualifiersGroup_.map(tag, fldBeg);
    case 692: return quotePriceType_.map(version, bytes, fldBeg);
    case 40: return ordType_.map(version, bytes, fldBeg);
    case 62: return validUntilTime_.map(version, bytes, fldBeg);
    case 126: return expireTime_.map(version, bytes, fldBeg);
    case 60: return transactTime_.map(version, bytes, fldBeg);
    case 218: return spread_.map(version, bytes, fldBeg);
    case 220: return benchmarkCurveCurrency_.map(version, bytes, fldBeg);
    case 221: return benchmarkCurveName_.map(version, bytes, fldBeg);
    case 222: return benchmarkCurvePoint_.map(version, bytes, fldBeg);
    case 662: return benchmarkPrice_.map(version, bytes, fldBeg);
    case 663: return benchmarkPriceType_.map(version, bytes, fldBeg);
    case 699: return benchmarkSecurityID_.map(version, bytes, fldBeg);
    case 761: return benchmarkSecurityIDSource_.map(version, bytes, fldBeg);
    case 423: return priceType_.map(version, bytes, fldBeg);
    case 44: return price_.map(version, bytes, fldBeg);
    case 640: return price2_.map(version, bytes, fldBeg);
    case 235: return yieldType_.map(version, bytes, fldBeg);
    case 236: return yield_.map(version, bytes, fldBeg);
    case 701: return yieldCalcDate_.map(version, bytes, fldBeg);
    case 696: return yieldRedemptionDate_.map(version, bytes, fldBeg);
    case 697: return yieldRedemptionPrice_.map(version, bytes, fldBeg);
    case 698: return yieldRedemptionPriceType_.map(version, bytes, fldBeg);
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* RelatedSymGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 913: return &agreementDesc_;
    case 914: return &agreementID_;
    case 915: return &agreementDate_;
    case 918: return &agreementCurrency_;
    case 788: return &terminationType_;
    case 916: return &startDate_;
    case 917: return &endDate_;
    case 919: return &deliveryType_;
    case 898: return &marginRatio_;
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.field(tag);
    case 140: return &prevClosePx_;
    case 303: return &quoteRequestType_;
    case 537: return &quoteType_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 229: return &tradeOriginationDate_;
    case 54: return &side_;
    case 854: return &qtyType_;
    case 38: return &orderQty_;
    case 152: return &cashOrderQty_;
    case 516: return &orderPercent_;
    case 468: return &roundingDirection_;
    case 469: return &roundingModulus_;
    case 63: return &settlType_;
    case 64: return &settlDate_;
    case 193: return &settlDate2_;
    case 192: return &orderQty2_;
    case 15: return &currency_;
    case 232: case 233: case 234:
      return stipulationsGroup_.field(tag);
    case 1: return &account_;
    case 660: return &acctIDSource_;
    case 581: return &accountType_;
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 524: case 525: case 538: case 539: case 545: case 555: case 556: case 587: case 588: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 676: case 677: case 678: case 679: case 680: case 683: case 687: case 688: case 689: case 690: case 739: case 740: case 764: case 804: case 805: case 942: case 955: case 956:
      return legsGroup3_.field(tag);
    case 695: case 735:
      return quoteQualifiersGroup_.field(tag);
    case 692: return &quotePriceType_;
    case 40: return &ordType_;
    case 62: return &validUntilTime_;
    case 126: return &expireTime_;
    case 60: return &transactTime_;
    case 218: return &spread_;
    case 220: return &benchmarkCurveCurrency_;
    case 221: return &benchmarkCurveName_;
    case 222: return &benchmarkCurvePoint_;
    case 662: return &benchmarkPrice_;
    case 663: return &benchmarkPriceType_;
    case 699: return &benchmarkSecurityID_;
    case 761: return &benchmarkSecurityIDSource_;
    case 423: return &priceType_;
    case 44: return &price_;
    case 640: return &price2_;
    case 235: return &yieldType_;
    case 236: return &yield_;
    case 701: return &yieldCalcDate_;
    case 696: return &yieldRedemptionDate_;
    case 697: return &yieldRedemptionPrice_;
    case 698: return &yieldRedemptionPriceType_;
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.field(tag);
    default: return nullptr;
  }
}

int RelatedSymGroup1Comp::write(int valBeg) {
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = agreementDesc_.write(valBeg);
  valBeg = agreementID_.write(valBeg);
  valBeg = agreementDate_.write(valBeg);
  valBeg = agreementCurrency_.write(valBeg);
  valBeg = terminationType_.write(valBeg);
  valBeg = startDate_.write(valBeg);
  valBeg = endDate_.write(valBeg);
  valBeg = deliveryType_.write(valBeg);
  valBeg = marginRatio_.write(valBeg);
  valBeg = underlyingsGroup_.write(valBeg);
  valBeg = prevClosePx_.write(valBeg);
  valBeg = quoteRequestType_.write(valBeg);
  valBeg = quoteType_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = tradeOriginationDate_.write(valBeg);
  valBeg = side_.write(valBeg);
  valBeg = qtyType_.write(valBeg);
  valBeg = orderQty_.write(valBeg);
  valBeg = cashOrderQty_.write(valBeg);
  valBeg = orderPercent_.write(valBeg);
  valBeg = roundingDirection_.write(valBeg);
  valBeg = roundingModulus_.write(valBeg);
  valBeg = settlType_.write(valBeg);
  valBeg = settlDate_.write(valBeg);
  valBeg = settlDate2_.write(valBeg);
  valBeg = orderQty2_.write(valBeg);
  valBeg = currency_.write(valBeg);
  valBeg = stipulationsGroup_.write(valBeg);
  valBeg = account_.write(valBeg);
  valBeg = acctIDSource_.write(valBeg);
  valBeg = accountType_.write(valBeg);
  valBeg = legsGroup3_.write(valBeg);
  valBeg = quoteQualifiersGroup_.write(valBeg);
  valBeg = quotePriceType_.write(valBeg);
  valBeg = ordType_.write(valBeg);
  valBeg = validUntilTime_.write(valBeg);
  valBeg = expireTime_.write(valBeg);
  valBeg = transactTime_.write(valBeg);
  valBeg = spread_.write(valBeg);
  valBeg = benchmarkCurveCurrency_.write(valBeg);
  valBeg = benchmarkCurveName_.write(valBeg);
  valBeg = benchmarkCurvePoint_.write(valBeg);
  valBeg = benchmarkPrice_.write(valBeg);
  valBeg = benchmarkPriceType_.write(valBeg);
  valBeg = benchmarkSecurityID_.write(valBeg);
  valBeg = benchmarkSecurityIDSource_.write(valBeg);
  valBeg = priceType_.write(valBeg);
  valBeg = price_.write(valBeg);
  valBeg = price2_.write(valBeg);
  valBeg = yieldType_.write(valBeg);
  valBeg = yield_.write(valBeg);
  valBeg = yieldCalcDate_.write(valBeg);
  valBeg = yieldRedemptionDate_.write(valBeg);
  valBeg = yieldRedemptionPrice_.write(valBeg);
  valBeg = yieldRedemptionPriceType_.write(valBeg);
  valBeg = partyIDsGroup_.write(valBeg);
  return valBeg;
}

LegsGroup4Comp::LegsGroup4Comp(AbstractMessage* message)
    : Component(message),
    legSymbol_(message),
    legSymbolSfx_(message),
    legSecurityID_(message),
    legSecurityIDSource_(message),
    legSecurityAltIDGroup_(message),
    legProduct_(message),
    legCFICode_(message),
    legSecurityType_(message),
    legSecuritySubType_(message),
    legMaturityMonthYear_(message),
    legMaturityDate_(message),
    legCouponPaymentDate_(message),
    legIssueDate_(message),
    legRepoCollateralSecurityType_(message),
    legRepurchaseTerm_(message),
    legRepurchaseRate_(message),
    legFactor_(message),
    legCreditRating_(message),
    legInstrRegistry_(message),
    legCountryOfIssue_(message),
    legStateOrProvinceOfIssue_(message),
    legLocaleOfIssue_(message),
    legRedemptionDate_(message),
    legStrikePrice_(message),
    legStrikeCurrency_(message),
    legOptAttribute_(message),
    legContractMultiplier_(message),
    legCouponRate_(message),
    legSecurityExchange_(message),
    legIssuer_(message),
    encodedLegIssuerLen_(message),
    encodedLegIssuer_(message),
    legSecurityDesc_(message),
    encodedLegSecurityDescLen_(message),
    encodedLegSecurityDesc_(message),
    legRatioQty_(message),
    legSide_(message),
    legCurrency_(message),
    legPool_(message),
    legDatedDate_(message),
    legContractSettlMonth_(message),
    legInterestAccrualDate_(message),
    legQty_(message),
    legSwapType_(message),
    legSettlType_(message),
    legSettlDate_(message),
    legStipulationsGroup_(message),
    nestedPartyIDsGroup_(message),
    legPriceType_(message),
    legBidPx_(message),
    legOfferPx_(message),
    legBenchmarkCurveCurrency_(message),
    legBenchmarkCurveName_(message),
    legBenchmarkCurvePoint_(message),
    legBenchmarkPrice_(message),
    legBenchmarkPriceType_(message) {}

AbstractField* LegsGroup4Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 600: return legSymbol_.map(version, bytes, fldBeg);
    case 601: return legSymbolSfx_.map(version, bytes, fldBeg);
    case 602: return legSecurityID_.map(version, bytes, fldBeg);
    case 603: return legSecurityIDSource_.map(version, bytes, fldBeg);
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.map(tag, fldBeg);
    case 607: return legProduct_.map(version, bytes, fldBeg);
    case 608: return legCFICode_.map(version, bytes, fldBeg);
    case 609: return legSecurityType_.map(version, bytes, fldBeg);
    case 764: return legSecuritySubType_.map(version, bytes, fldBeg);
    case 610: return legMaturityMonthYear_.map(version, bytes, fldBeg);
    case 611: return legMaturityDate_.map(version, bytes, fldBeg);
    case 248: return legCouponPaymentDate_.map(version, bytes, fldBeg);
    case 249: return legIssueDate_.map(version, bytes, fldBeg);
    case 250: return legRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 251: return legRepurchaseTerm_.map(version, bytes, fldBeg);
    case 252: return legRepurchaseRate_.map(version, bytes, fldBeg);
    case 253: return legFactor_.map(version, bytes, fldBeg);
    case 257: return legCreditRating_.map(version, bytes, fldBeg);
    case 599: return legInstrRegistry_.map(version, bytes, fldBeg);
    case 596: return legCountryOfIssue_.map(version, bytes, fldBeg);
    case 597: return legStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 598: return legLocaleOfIssue_.map(version, bytes, fldBeg);
    case 254: return legRedemptionDate_.map(version, bytes, fldBeg);
    case 612: return legStrikePrice_.map(version, bytes, fldBeg);
    case 942: return legStrikeCurrency_.map(version, bytes, fldBeg);
    case 613: return legOptAttribute_.map(version, bytes, fldBeg);
    case 614: return legContractMultiplier_.map(version, bytes, fldBeg);
    case 615: return legCouponRate_.map(version, bytes, fldBeg);
    case 616: return legSecurityExchange_.map(version, bytes, fldBeg);
    case 617: return legIssuer_.map(version, bytes, fldBeg);
    case 618: return encodedLegIssuerLen_.map(version, bytes, fldBeg);
    case 619: return encodedLegIssuer_.map(version, bytes, fldBeg);
    case 620: return legSecurityDesc_.map(version, bytes, fldBeg);
    case 621: return encodedLegSecurityDescLen_.map(version, bytes, fldBeg);
    case 622: return encodedLegSecurityDesc_.map(version, bytes, fldBeg);
    case 623: return legRatioQty_.map(version, bytes, fldBeg);
    case 624: return legSide_.map(version, bytes, fldBeg);
    case 556: return legCurrency_.map(version, bytes, fldBeg);
    case 740: return legPool_.map(version, bytes, fldBeg);
    case 739: return legDatedDate_.map(version, bytes, fldBeg);
    case 955: return legContractSettlMonth_.map(version, bytes, fldBeg);
    case 956: return legInterestAccrualDate_.map(version, bytes, fldBeg);
    case 687: return legQty_.map(version, bytes, fldBeg);
    case 690: return legSwapType_.map(version, bytes, fldBeg);
    case 587: return legSettlType_.map(version, bytes, fldBeg);
    case 588: return legSettlDate_.map(version, bytes, fldBeg);
    case 683: case 688: case 689:
      return legStipulationsGroup_.map(tag, fldBeg);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.map(tag, fldBeg);
    case 686: return legPriceType_.map(version, bytes, fldBeg);
    case 681: return legBidPx_.map(version, bytes, fldBeg);
    case 684: return legOfferPx_.map(version, bytes, fldBeg);
    case 676: return legBenchmarkCurveCurrency_.map(version, bytes, fldBeg);
    case 677: return legBenchmarkCurveName_.map(version, bytes, fldBeg);
    case 678: return legBenchmarkCurvePoint_.map(version, bytes, fldBeg);
    case 679: return legBenchmarkPrice_.map(version, bytes, fldBeg);
    case 680: return legBenchmarkPriceType_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegsGroup4Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 600: return &legSymbol_;
    case 601: return &legSymbolSfx_;
    case 602: return &legSecurityID_;
    case 603: return &legSecurityIDSource_;
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.field(tag);
    case 607: return &legProduct_;
    case 608: return &legCFICode_;
    case 609: return &legSecurityType_;
    case 764: return &legSecuritySubType_;
    case 610: return &legMaturityMonthYear_;
    case 611: return &legMaturityDate_;
    case 248: return &legCouponPaymentDate_;
    case 249: return &legIssueDate_;
    case 250: return &legRepoCollateralSecurityType_;
    case 251: return &legRepurchaseTerm_;
    case 252: return &legRepurchaseRate_;
    case 253: return &legFactor_;
    case 257: return &legCreditRating_;
    case 599: return &legInstrRegistry_;
    case 596: return &legCountryOfIssue_;
    case 597: return &legStateOrProvinceOfIssue_;
    case 598: return &legLocaleOfIssue_;
    case 254: return &legRedemptionDate_;
    case 612: return &legStrikePrice_;
    case 942: return &legStrikeCurrency_;
    case 613: return &legOptAttribute_;
    case 614: return &legContractMultiplier_;
    case 615: return &legCouponRate_;
    case 616: return &legSecurityExchange_;
    case 617: return &legIssuer_;
    case 618: return &encodedLegIssuerLen_;
    case 619: return &encodedLegIssuer_;
    case 620: return &legSecurityDesc_;
    case 621: return &encodedLegSecurityDescLen_;
    case 622: return &encodedLegSecurityDesc_;
    case 623: return &legRatioQty_;
    case 624: return &legSide_;
    case 556: return &legCurrency_;
    case 740: return &legPool_;
    case 739: return &legDatedDate_;
    case 955: return &legContractSettlMonth_;
    case 956: return &legInterestAccrualDate_;
    case 687: return &legQty_;
    case 690: return &legSwapType_;
    case 587: return &legSettlType_;
    case 588: return &legSettlDate_;
    case 683: case 688: case 689:
      return legStipulationsGroup_.field(tag);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.field(tag);
    case 686: return &legPriceType_;
    case 681: return &legBidPx_;
    case 684: return &legOfferPx_;
    case 676: return &legBenchmarkCurveCurrency_;
    case 677: return &legBenchmarkCurveName_;
    case 678: return &legBenchmarkCurvePoint_;
    case 679: return &legBenchmarkPrice_;
    case 680: return &legBenchmarkPriceType_;
    default: return nullptr;
  }
}

int LegsGroup4Comp::write(int valBeg) {
  valBeg = legSymbol_.write(valBeg);
  valBeg = legSymbolSfx_.write(valBeg);
  valBeg = legSecurityID_.write(valBeg);
  valBeg = legSecurityIDSource_.write(valBeg);
  valBeg = legSecurityAltIDGroup_.write(valBeg);
  valBeg = legProduct_.write(valBeg);
  valBeg = legCFICode_.write(valBeg);
  valBeg = legSecurityType_.write(valBeg);
  valBeg = legSecuritySubType_.write(valBeg);
  valBeg = legMaturityMonthYear_.write(valBeg);
  valBeg = legMaturityDate_.write(valBeg);
  valBeg = legCouponPaymentDate_.write(valBeg);
  valBeg = legIssueDate_.write(valBeg);
  valBeg = legRepoCollateralSecurityType_.write(valBeg);
  valBeg = legRepurchaseTerm_.write(valBeg);
  valBeg = legRepurchaseRate_.write(valBeg);
  valBeg = legFactor_.write(valBeg);
  valBeg = legCreditRating_.write(valBeg);
  valBeg = legInstrRegistry_.write(valBeg);
  valBeg = legCountryOfIssue_.write(valBeg);
  valBeg = legStateOrProvinceOfIssue_.write(valBeg);
  valBeg = legLocaleOfIssue_.write(valBeg);
  valBeg = legRedemptionDate_.write(valBeg);
  valBeg = legStrikePrice_.write(valBeg);
  valBeg = legStrikeCurrency_.write(valBeg);
  valBeg = legOptAttribute_.write(valBeg);
  valBeg = legContractMultiplier_.write(valBeg);
  valBeg = legCouponRate_.write(valBeg);
  valBeg = legSecurityExchange_.write(valBeg);
  valBeg = legIssuer_.write(valBeg);
  valBeg = encodedLegIssuerLen_.write(valBeg);
  valBeg = encodedLegIssuer_.write(valBeg);
  valBeg = legSecurityDesc_.write(valBeg);
  valBeg = encodedLegSecurityDescLen_.write(valBeg);
  valBeg = encodedLegSecurityDesc_.write(valBeg);
  valBeg = legRatioQty_.write(valBeg);
  valBeg = legSide_.write(valBeg);
  valBeg = legCurrency_.write(valBeg);
  valBeg = legPool_.write(valBeg);
  valBeg = legDatedDate_.write(valBeg);
  valBeg = legContractSettlMonth_.write(valBeg);
  valBeg = legInterestAccrualDate_.write(valBeg);
  valBeg = legQty_.write(valBeg);
  valBeg = legSwapType_.write(valBeg);
  valBeg = legSettlType_.write(valBeg);
  valBeg = legSettlDate_.write(valBeg);
  valBeg = legStipulationsGroup_.write(valBeg);
  valBeg = nestedPartyIDsGroup_.write(valBeg);
  valBeg = legPriceType_.write(valBeg);
  valBeg = legBidPx_.write(valBeg);
  valBeg = legOfferPx_.write(valBeg);
  valBeg = legBenchmarkCurveCurrency_.write(valBeg);
  valBeg = legBenchmarkCurveName_.write(valBeg);
  valBeg = legBenchmarkCurvePoint_.write(valBeg);
  valBeg = legBenchmarkPrice_.write(valBeg);
  valBeg = legBenchmarkPriceType_.write(valBeg);
  return valBeg;
}

SettlInstGroupComp::SettlInstGroupComp(AbstractMessage* message)
    : Component(message),
    settlInstID_(message),
    settlInstTransType_(message),
    settlInstRefID_(message),
    partyIDsGroup_(message),
    side_(message),
    product_(message),
    securityType_(message),
    cFICode_(message),
    effectiveTime_(message),
    expireTime_(message),
    lastUpdateTime_(message),
    settlDeliveryType_(message),
    standInstDbType_(message),
    standInstDbName_(message),
    standInstDbID_(message),
    dlvyInstGroup_(message),
    paymentMethod_(message),
    paymentRef_(message),
    cardHolderName_(message),
    cardNumber_(message),
    cardStartDate_(message),
    cardExpDate_(message),
    cardIssNum_(message),
    paymentDate_(message),
    paymentRemitterID_(message) {}

AbstractField* SettlInstGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 162: return settlInstID_.map(version, bytes, fldBeg);
    case 163: return settlInstTransType_.map(version, bytes, fldBeg);
    case 214: return settlInstRefID_.map(version, bytes, fldBeg);
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.map(tag, fldBeg);
    case 54: return side_.map(version, bytes, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 168: return effectiveTime_.map(version, bytes, fldBeg);
    case 126: return expireTime_.map(version, bytes, fldBeg);
    case 779: return lastUpdateTime_.map(version, bytes, fldBeg);
    case 172: return settlDeliveryType_.map(version, bytes, fldBeg);
    case 169: return standInstDbType_.map(version, bytes, fldBeg);
    case 170: return standInstDbName_.map(version, bytes, fldBeg);
    case 171: return standInstDbID_.map(version, bytes, fldBeg);
    case 85: case 165: case 781: case 782: case 783: case 784: case 785: case 786: case 787: case 801:
      return dlvyInstGroup_.map(tag, fldBeg);
    case 492: return paymentMethod_.map(version, bytes, fldBeg);
    case 476: return paymentRef_.map(version, bytes, fldBeg);
    case 488: return cardHolderName_.map(version, bytes, fldBeg);
    case 489: return cardNumber_.map(version, bytes, fldBeg);
    case 503: return cardStartDate_.map(version, bytes, fldBeg);
    case 490: return cardExpDate_.map(version, bytes, fldBeg);
    case 491: return cardIssNum_.map(version, bytes, fldBeg);
    case 504: return paymentDate_.map(version, bytes, fldBeg);
    case 505: return paymentRemitterID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* SettlInstGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 162: return &settlInstID_;
    case 163: return &settlInstTransType_;
    case 214: return &settlInstRefID_;
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.field(tag);
    case 54: return &side_;
    case 460: return &product_;
    case 167: return &securityType_;
    case 461: return &cFICode_;
    case 168: return &effectiveTime_;
    case 126: return &expireTime_;
    case 779: return &lastUpdateTime_;
    case 172: return &settlDeliveryType_;
    case 169: return &standInstDbType_;
    case 170: return &standInstDbName_;
    case 171: return &standInstDbID_;
    case 85: case 165: case 781: case 782: case 783: case 784: case 785: case 786: case 787: case 801:
      return dlvyInstGroup_.field(tag);
    case 492: return &paymentMethod_;
    case 476: return &paymentRef_;
    case 488: return &cardHolderName_;
    case 489: return &cardNumber_;
    case 503: return &cardStartDate_;
    case 490: return &cardExpDate_;
    case 491: return &cardIssNum_;
    case 504: return &paymentDate_;
    case 505: return &paymentRemitterID_;
    default: return nullptr;
  }
}

int SettlInstGroupComp::write(int valBeg) {
  valBeg = settlInstID_.write(valBeg);
  valBeg = settlInstTransType_.write(valBeg);
  valBeg = settlInstRefID_.write(valBeg);
  valBeg = partyIDsGroup_.write(valBeg);
  valBeg = side_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = effectiveTime_.write(valBeg);
  valBeg = expireTime_.write(valBeg);
  valBeg = lastUpdateTime_.write(valBeg);
  valBeg = settlDeliveryType_.write(valBeg);
  valBeg = standInstDbType_.write(valBeg);
  valBeg = standInstDbName_.write(valBeg);
  valBeg = standInstDbID_.write(valBeg);
  valBeg = dlvyInstGroup_.write(valBeg);
  valBeg = paymentMethod_.write(valBeg);
  valBeg = paymentRef_.write(valBeg);
  valBeg = cardHolderName_.write(valBeg);
  valBeg = cardNumber_.write(valBeg);
  valBeg = cardStartDate_.write(valBeg);
  valBeg = cardExpDate_.write(valBeg);
  valBeg = cardIssNum_.write(valBeg);
  valBeg = paymentDate_.write(valBeg);
  valBeg = paymentRemitterID_.write(valBeg);
  return valBeg;
}

MDEntryTypesGroupComp::MDEntryTypesGroupComp(AbstractMessage* message)
    : Component(message),
    mDEntryType_(message) {}

AbstractField* MDEntryTypesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 269: return mDEntryType_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* MDEntryTypesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 269: return &mDEntryType_;
    default: return nullptr;
  }
}

int MDEntryTypesGroupComp::write(int valBeg) {
  valBeg = mDEntryType_.write(valBeg);
  return valBeg;
}

RelatedSymGroup2Comp::RelatedSymGroup2Comp(AbstractMessage* message)
    : Component(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    underlyingsGroup_(message),
    legsGroup1_(message) {}

AbstractField* RelatedSymGroup2Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.map(tag, fldBeg);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* RelatedSymGroup2Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.field(tag);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.field(tag);
    default: return nullptr;
  }
}

int RelatedSymGroup2Comp::write(int valBeg) {
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = underlyingsGroup_.write(valBeg);
  valBeg = legsGroup1_.write(valBeg);
  return valBeg;
}

MDEntriesGroupComp::MDEntriesGroupComp(AbstractMessage* message)
    : Component(message),
    mDEntryType_(message),
    mDEntryPx_(message),
    currency_(message),
    mDEntrySize_(message),
    mDEntryDate_(message),
    mDEntryTime_(message),
    tickDirection_(message),
    mDMkt_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    quoteCondition_(message),
    tradeCondition_(message),
    mDEntryOriginator_(message),
    locationID_(message),
    deskID_(message),
    openCloseSettlFlag_(message),
    timeInForce_(message),
    expireDate_(message),
    expireTime_(message),
    minQty_(message),
    execInst_(message),
    sellerDays_(message),
    orderID_(message),
    quoteEntryID_(message),
    mDEntryBuyer_(message),
    mDEntrySeller_(message),
    numberOfOrders_(message),
    mDEntryPositionNo_(message),
    scope_(message),
    priceDelta_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message) {}

AbstractField* MDEntriesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 269: return mDEntryType_.map(version, bytes, fldBeg);
    case 270: return mDEntryPx_.map(version, bytes, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    case 271: return mDEntrySize_.map(version, bytes, fldBeg);
    case 272: return mDEntryDate_.map(version, bytes, fldBeg);
    case 273: return mDEntryTime_.map(version, bytes, fldBeg);
    case 274: return tickDirection_.map(version, bytes, fldBeg);
    case 275: return mDMkt_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 276: return quoteCondition_.map(version, bytes, fldBeg);
    case 277: return tradeCondition_.map(version, bytes, fldBeg);
    case 282: return mDEntryOriginator_.map(version, bytes, fldBeg);
    case 283: return locationID_.map(version, bytes, fldBeg);
    case 284: return deskID_.map(version, bytes, fldBeg);
    case 286: return openCloseSettlFlag_.map(version, bytes, fldBeg);
    case 59: return timeInForce_.map(version, bytes, fldBeg);
    case 432: return expireDate_.map(version, bytes, fldBeg);
    case 126: return expireTime_.map(version, bytes, fldBeg);
    case 110: return minQty_.map(version, bytes, fldBeg);
    case 18: return execInst_.map(version, bytes, fldBeg);
    case 287: return sellerDays_.map(version, bytes, fldBeg);
    case 37: return orderID_.map(version, bytes, fldBeg);
    case 299: return quoteEntryID_.map(version, bytes, fldBeg);
    case 288: return mDEntryBuyer_.map(version, bytes, fldBeg);
    case 289: return mDEntrySeller_.map(version, bytes, fldBeg);
    case 346: return numberOfOrders_.map(version, bytes, fldBeg);
    case 290: return mDEntryPositionNo_.map(version, bytes, fldBeg);
    case 546: return scope_.map(version, bytes, fldBeg);
    case 811: return priceDelta_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* MDEntriesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 269: return &mDEntryType_;
    case 270: return &mDEntryPx_;
    case 15: return &currency_;
    case 271: return &mDEntrySize_;
    case 272: return &mDEntryDate_;
    case 273: return &mDEntryTime_;
    case 274: return &tickDirection_;
    case 275: return &mDMkt_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 276: return &quoteCondition_;
    case 277: return &tradeCondition_;
    case 282: return &mDEntryOriginator_;
    case 283: return &locationID_;
    case 284: return &deskID_;
    case 286: return &openCloseSettlFlag_;
    case 59: return &timeInForce_;
    case 432: return &expireDate_;
    case 126: return &expireTime_;
    case 110: return &minQty_;
    case 18: return &execInst_;
    case 287: return &sellerDays_;
    case 37: return &orderID_;
    case 299: return &quoteEntryID_;
    case 288: return &mDEntryBuyer_;
    case 289: return &mDEntrySeller_;
    case 346: return &numberOfOrders_;
    case 290: return &mDEntryPositionNo_;
    case 546: return &scope_;
    case 811: return &priceDelta_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    default: return nullptr;
  }
}

int MDEntriesGroupComp::write(int valBeg) {
  valBeg = mDEntryType_.write(valBeg);
  valBeg = mDEntryPx_.write(valBeg);
  valBeg = currency_.write(valBeg);
  valBeg = mDEntrySize_.write(valBeg);
  valBeg = mDEntryDate_.write(valBeg);
  valBeg = mDEntryTime_.write(valBeg);
  valBeg = tickDirection_.write(valBeg);
  valBeg = mDMkt_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = quoteCondition_.write(valBeg);
  valBeg = tradeCondition_.write(valBeg);
  valBeg = mDEntryOriginator_.write(valBeg);
  valBeg = locationID_.write(valBeg);
  valBeg = deskID_.write(valBeg);
  valBeg = openCloseSettlFlag_.write(valBeg);
  valBeg = timeInForce_.write(valBeg);
  valBeg = expireDate_.write(valBeg);
  valBeg = expireTime_.write(valBeg);
  valBeg = minQty_.write(valBeg);
  valBeg = execInst_.write(valBeg);
  valBeg = sellerDays_.write(valBeg);
  valBeg = orderID_.write(valBeg);
  valBeg = quoteEntryID_.write(valBeg);
  valBeg = mDEntryBuyer_.write(valBeg);
  valBeg = mDEntrySeller_.write(valBeg);
  valBeg = numberOfOrders_.write(valBeg);
  valBeg = mDEntryPositionNo_.write(valBeg);
  valBeg = scope_.write(valBeg);
  valBeg = priceDelta_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  return valBeg;
}

MDEntriesGroup1Comp::MDEntriesGroup1Comp(AbstractMessage* message)
    : Component(message),
    mDUpdateAction_(message),
    deleteReason_(message),
    mDEntryType_(message),
    mDEntryID_(message),
    mDEntryRefID_(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    underlyingsGroup_(message),
    legsGroup1_(message),
    financialStatus_(message),
    corporateAction_(message),
    mDEntryPx_(message),
    currency_(message),
    mDEntrySize_(message),
    mDEntryDate_(message),
    mDEntryTime_(message),
    tickDirection_(message),
    mDMkt_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    quoteCondition_(message),
    tradeCondition_(message),
    mDEntryOriginator_(message),
    locationID_(message),
    deskID_(message),
    openCloseSettlFlag_(message),
    timeInForce_(message),
    expireDate_(message),
    expireTime_(message),
    minQty_(message),
    execInst_(message),
    sellerDays_(message),
    orderID_(message),
    quoteEntryID_(message),
    mDEntryBuyer_(message),
    mDEntrySeller_(message),
    numberOfOrders_(message),
    mDEntryPositionNo_(message),
    scope_(message),
    priceDelta_(message),
    netChgPrevDay_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message) {}

AbstractField* MDEntriesGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 279: return mDUpdateAction_.map(version, bytes, fldBeg);
    case 285: return deleteReason_.map(version, bytes, fldBeg);
    case 269: return mDEntryType_.map(version, bytes, fldBeg);
    case 278: return mDEntryID_.map(version, bytes, fldBeg);
    case 280: return mDEntryRefID_.map(version, bytes, fldBeg);
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.map(tag, fldBeg);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.map(tag, fldBeg);
    case 291: return financialStatus_.map(version, bytes, fldBeg);
    case 292: return corporateAction_.map(version, bytes, fldBeg);
    case 270: return mDEntryPx_.map(version, bytes, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    case 271: return mDEntrySize_.map(version, bytes, fldBeg);
    case 272: return mDEntryDate_.map(version, bytes, fldBeg);
    case 273: return mDEntryTime_.map(version, bytes, fldBeg);
    case 274: return tickDirection_.map(version, bytes, fldBeg);
    case 275: return mDMkt_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 276: return quoteCondition_.map(version, bytes, fldBeg);
    case 277: return tradeCondition_.map(version, bytes, fldBeg);
    case 282: return mDEntryOriginator_.map(version, bytes, fldBeg);
    case 283: return locationID_.map(version, bytes, fldBeg);
    case 284: return deskID_.map(version, bytes, fldBeg);
    case 286: return openCloseSettlFlag_.map(version, bytes, fldBeg);
    case 59: return timeInForce_.map(version, bytes, fldBeg);
    case 432: return expireDate_.map(version, bytes, fldBeg);
    case 126: return expireTime_.map(version, bytes, fldBeg);
    case 110: return minQty_.map(version, bytes, fldBeg);
    case 18: return execInst_.map(version, bytes, fldBeg);
    case 287: return sellerDays_.map(version, bytes, fldBeg);
    case 37: return orderID_.map(version, bytes, fldBeg);
    case 299: return quoteEntryID_.map(version, bytes, fldBeg);
    case 288: return mDEntryBuyer_.map(version, bytes, fldBeg);
    case 289: return mDEntrySeller_.map(version, bytes, fldBeg);
    case 346: return numberOfOrders_.map(version, bytes, fldBeg);
    case 290: return mDEntryPositionNo_.map(version, bytes, fldBeg);
    case 546: return scope_.map(version, bytes, fldBeg);
    case 811: return priceDelta_.map(version, bytes, fldBeg);
    case 451: return netChgPrevDay_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* MDEntriesGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 279: return &mDUpdateAction_;
    case 285: return &deleteReason_;
    case 269: return &mDEntryType_;
    case 278: return &mDEntryID_;
    case 280: return &mDEntryRefID_;
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.field(tag);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.field(tag);
    case 291: return &financialStatus_;
    case 292: return &corporateAction_;
    case 270: return &mDEntryPx_;
    case 15: return &currency_;
    case 271: return &mDEntrySize_;
    case 272: return &mDEntryDate_;
    case 273: return &mDEntryTime_;
    case 274: return &tickDirection_;
    case 275: return &mDMkt_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 276: return &quoteCondition_;
    case 277: return &tradeCondition_;
    case 282: return &mDEntryOriginator_;
    case 283: return &locationID_;
    case 284: return &deskID_;
    case 286: return &openCloseSettlFlag_;
    case 59: return &timeInForce_;
    case 432: return &expireDate_;
    case 126: return &expireTime_;
    case 110: return &minQty_;
    case 18: return &execInst_;
    case 287: return &sellerDays_;
    case 37: return &orderID_;
    case 299: return &quoteEntryID_;
    case 288: return &mDEntryBuyer_;
    case 289: return &mDEntrySeller_;
    case 346: return &numberOfOrders_;
    case 290: return &mDEntryPositionNo_;
    case 546: return &scope_;
    case 811: return &priceDelta_;
    case 451: return &netChgPrevDay_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    default: return nullptr;
  }
}

int MDEntriesGroup1Comp::write(int valBeg) {
  valBeg = mDUpdateAction_.write(valBeg);
  valBeg = deleteReason_.write(valBeg);
  valBeg = mDEntryType_.write(valBeg);
  valBeg = mDEntryID_.write(valBeg);
  valBeg = mDEntryRefID_.write(valBeg);
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = underlyingsGroup_.write(valBeg);
  valBeg = legsGroup1_.write(valBeg);
  valBeg = financialStatus_.write(valBeg);
  valBeg = corporateAction_.write(valBeg);
  valBeg = mDEntryPx_.write(valBeg);
  valBeg = currency_.write(valBeg);
  valBeg = mDEntrySize_.write(valBeg);
  valBeg = mDEntryDate_.write(valBeg);
  valBeg = mDEntryTime_.write(valBeg);
  valBeg = tickDirection_.write(valBeg);
  valBeg = mDMkt_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = quoteCondition_.write(valBeg);
  valBeg = tradeCondition_.write(valBeg);
  valBeg = mDEntryOriginator_.write(valBeg);
  valBeg = locationID_.write(valBeg);
  valBeg = deskID_.write(valBeg);
  valBeg = openCloseSettlFlag_.write(valBeg);
  valBeg = timeInForce_.write(valBeg);
  valBeg = expireDate_.write(valBeg);
  valBeg = expireTime_.write(valBeg);
  valBeg = minQty_.write(valBeg);
  valBeg = execInst_.write(valBeg);
  valBeg = sellerDays_.write(valBeg);
  valBeg = orderID_.write(valBeg);
  valBeg = quoteEntryID_.write(valBeg);
  valBeg = mDEntryBuyer_.write(valBeg);
  valBeg = mDEntrySeller_.write(valBeg);
  valBeg = numberOfOrders_.write(valBeg);
  valBeg = mDEntryPositionNo_.write(valBeg);
  valBeg = scope_.write(valBeg);
  valBeg = priceDelta_.write(valBeg);
  valBeg = netChgPrevDay_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  return valBeg;
}

AltMDSourceGroupComp::AltMDSourceGroupComp(AbstractMessage* message)
    : Component(message),
    altMDSourceID_(message) {}

AbstractField* AltMDSourceGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 817: return altMDSourceID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* AltMDSourceGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 817: return &altMDSourceID_;
    default: return nullptr;
  }
}

int AltMDSourceGroupComp::write(int valBeg) {
  valBeg = altMDSourceID_.write(valBeg);
  return valBeg;
}

QuoteEntriesGroupComp::QuoteEntriesGroupComp(AbstractMessage* message)
    : Component(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    agreementDesc_(message),
    agreementID_(message),
    agreementDate_(message),
    agreementCurrency_(message),
    terminationType_(message),
    startDate_(message),
    endDate_(message),
    deliveryType_(message),
    marginRatio_(message),
    underlyingsGroup_(message),
    legsGroup1_(message) {}

AbstractField* QuoteEntriesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 913: return agreementDesc_.map(version, bytes, fldBeg);
    case 914: return agreementID_.map(version, bytes, fldBeg);
    case 915: return agreementDate_.map(version, bytes, fldBeg);
    case 918: return agreementCurrency_.map(version, bytes, fldBeg);
    case 788: return terminationType_.map(version, bytes, fldBeg);
    case 916: return startDate_.map(version, bytes, fldBeg);
    case 917: return endDate_.map(version, bytes, fldBeg);
    case 919: return deliveryType_.map(version, bytes, fldBeg);
    case 898: return marginRatio_.map(version, bytes, fldBeg);
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.map(tag, fldBeg);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* QuoteEntriesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 913: return &agreementDesc_;
    case 914: return &agreementID_;
    case 915: return &agreementDate_;
    case 918: return &agreementCurrency_;
    case 788: return &terminationType_;
    case 916: return &startDate_;
    case 917: return &endDate_;
    case 919: return &deliveryType_;
    case 898: return &marginRatio_;
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.field(tag);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.field(tag);
    default: return nullptr;
  }
}

int QuoteEntriesGroupComp::write(int valBeg) {
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = agreementDesc_.write(valBeg);
  valBeg = agreementID_.write(valBeg);
  valBeg = agreementDate_.write(valBeg);
  valBeg = agreementCurrency_.write(valBeg);
  valBeg = terminationType_.write(valBeg);
  valBeg = startDate_.write(valBeg);
  valBeg = endDate_.write(valBeg);
  valBeg = deliveryType_.write(valBeg);
  valBeg = marginRatio_.write(valBeg);
  valBeg = underlyingsGroup_.write(valBeg);
  valBeg = legsGroup1_.write(valBeg);
  return valBeg;
}

QuoteEntriesGroup1Comp::QuoteEntriesGroup1Comp(AbstractMessage* message)
    : Component(message),
    quoteEntryID_(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    legsGroup1_(message),
    bidPx_(message),
    offerPx_(message),
    bidSize_(message),
    offerSize_(message),
    validUntilTime_(message),
    bidSpotRate_(message),
    offerSpotRate_(message),
    bidForwardPoints_(message),
    offerForwardPoints_(message),
    midPx_(message),
    bidYield_(message),
    midYield_(message),
    offerYield_(message),
    transactTime_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    settlDate_(message),
    ordType_(message),
    settlDate2_(message),
    orderQty2_(message),
    bidForwardPoints2_(message),
    offerForwardPoints2_(message),
    currency_(message),
    quoteEntryRejectReason_(message) {}

AbstractField* QuoteEntriesGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 299: return quoteEntryID_.map(version, bytes, fldBeg);
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.map(tag, fldBeg);
    case 132: return bidPx_.map(version, bytes, fldBeg);
    case 133: return offerPx_.map(version, bytes, fldBeg);
    case 134: return bidSize_.map(version, bytes, fldBeg);
    case 135: return offerSize_.map(version, bytes, fldBeg);
    case 62: return validUntilTime_.map(version, bytes, fldBeg);
    case 188: return bidSpotRate_.map(version, bytes, fldBeg);
    case 190: return offerSpotRate_.map(version, bytes, fldBeg);
    case 189: return bidForwardPoints_.map(version, bytes, fldBeg);
    case 191: return offerForwardPoints_.map(version, bytes, fldBeg);
    case 631: return midPx_.map(version, bytes, fldBeg);
    case 632: return bidYield_.map(version, bytes, fldBeg);
    case 633: return midYield_.map(version, bytes, fldBeg);
    case 634: return offerYield_.map(version, bytes, fldBeg);
    case 60: return transactTime_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 64: return settlDate_.map(version, bytes, fldBeg);
    case 40: return ordType_.map(version, bytes, fldBeg);
    case 193: return settlDate2_.map(version, bytes, fldBeg);
    case 192: return orderQty2_.map(version, bytes, fldBeg);
    case 642: return bidForwardPoints2_.map(version, bytes, fldBeg);
    case 643: return offerForwardPoints2_.map(version, bytes, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    case 368: return quoteEntryRejectReason_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* QuoteEntriesGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 299: return &quoteEntryID_;
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.field(tag);
    case 132: return &bidPx_;
    case 133: return &offerPx_;
    case 134: return &bidSize_;
    case 135: return &offerSize_;
    case 62: return &validUntilTime_;
    case 188: return &bidSpotRate_;
    case 190: return &offerSpotRate_;
    case 189: return &bidForwardPoints_;
    case 191: return &offerForwardPoints_;
    case 631: return &midPx_;
    case 632: return &bidYield_;
    case 633: return &midYield_;
    case 634: return &offerYield_;
    case 60: return &transactTime_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 64: return &settlDate_;
    case 40: return &ordType_;
    case 193: return &settlDate2_;
    case 192: return &orderQty2_;
    case 642: return &bidForwardPoints2_;
    case 643: return &offerForwardPoints2_;
    case 15: return &currency_;
    case 368: return &quoteEntryRejectReason_;
    default: return nullptr;
  }
}

int QuoteEntriesGroup1Comp::write(int valBeg) {
  valBeg = quoteEntryID_.write(valBeg);
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = legsGroup1_.write(valBeg);
  valBeg = bidPx_.write(valBeg);
  valBeg = offerPx_.write(valBeg);
  valBeg = bidSize_.write(valBeg);
  valBeg = offerSize_.write(valBeg);
  valBeg = validUntilTime_.write(valBeg);
  valBeg = bidSpotRate_.write(valBeg);
  valBeg = offerSpotRate_.write(valBeg);
  valBeg = bidForwardPoints_.write(valBeg);
  valBeg = offerForwardPoints_.write(valBeg);
  valBeg = midPx_.write(valBeg);
  valBeg = bidYield_.write(valBeg);
  valBeg = midYield_.write(valBeg);
  valBeg = offerYield_.write(valBeg);
  valBeg = transactTime_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = settlDate_.write(valBeg);
  valBeg = ordType_.write(valBeg);
  valBeg = settlDate2_.write(valBeg);
  valBeg = orderQty2_.write(valBeg);
  valBeg = bidForwardPoints2_.write(valBeg);
  valBeg = offerForwardPoints2_.write(valBeg);
  valBeg = currency_.write(valBeg);
  valBeg = quoteEntryRejectReason_.write(valBeg);
  return valBeg;
}

QuoteSetsGroupComp::QuoteSetsGroupComp(AbstractMessage* message)
    : Component(message),
    quoteSetID_(message),
    underlyingSymbol_(message),
    underlyingSymbolSfx_(message),
    underlyingSecurityID_(message),
    underlyingSecurityIDSource_(message),
    underlyingSecurityAltIDGroup_(message),
    underlyingProduct_(message),
    underlyingCFICode_(message),
    underlyingSecurityType_(message),
    underlyingSecuritySubType_(message),
    underlyingMaturityMonthYear_(message),
    underlyingMaturityDate_(message),
    underlyingPutOrCall_(message),
    underlyingCouponPaymentDate_(message),
    underlyingIssueDate_(message),
    underlyingRepoCollateralSecurityType_(message),
    underlyingRepurchaseTerm_(message),
    underlyingRepurchaseRate_(message),
    underlyingFactor_(message),
    underlyingCreditRating_(message),
    underlyingInstrRegistry_(message),
    underlyingCountryOfIssue_(message),
    underlyingStateOrProvinceOfIssue_(message),
    underlyingLocaleOfIssue_(message),
    underlyingRedemptionDate_(message),
    underlyingStrikePrice_(message),
    underlyingStrikeCurrency_(message),
    underlyingOptAttribute_(message),
    underlyingContractMultiplier_(message),
    underlyingCouponRate_(message),
    underlyingSecurityExchange_(message),
    underlyingIssuer_(message),
    encodedUnderlyingIssuerLen_(message),
    encodedUnderlyingIssuer_(message),
    underlyingSecurityDesc_(message),
    encodedUnderlyingSecurityDescLen_(message),
    encodedUnderlyingSecurityDesc_(message),
    underlyingCPProgram_(message),
    underlyingCPRegType_(message),
    underlyingCurrency_(message),
    underlyingQty_(message),
    underlyingPx_(message),
    underlyingDirtyPrice_(message),
    underlyingEndPrice_(message),
    underlyingStartValue_(message),
    underlyingCurrentValue_(message),
    underlyingEndValue_(message),
    underlyingStipsGroup_(message),
    totNoQuoteEntries_(message),
    lastFragment_(message),
    quoteEntriesGroup1_(message) {}

AbstractField* QuoteSetsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 302: return quoteSetID_.map(version, bytes, fldBeg);
    case 311: return underlyingSymbol_.map(version, bytes, fldBeg);
    case 312: return underlyingSymbolSfx_.map(version, bytes, fldBeg);
    case 309: return underlyingSecurityID_.map(version, bytes, fldBeg);
    case 305: return underlyingSecurityIDSource_.map(version, bytes, fldBeg);
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.map(tag, fldBeg);
    case 462: return underlyingProduct_.map(version, bytes, fldBeg);
    case 463: return underlyingCFICode_.map(version, bytes, fldBeg);
    case 310: return underlyingSecurityType_.map(version, bytes, fldBeg);
    case 763: return underlyingSecuritySubType_.map(version, bytes, fldBeg);
    case 313: return underlyingMaturityMonthYear_.map(version, bytes, fldBeg);
    case 542: return underlyingMaturityDate_.map(version, bytes, fldBeg);
    case 315: return underlyingPutOrCall_.map(version, bytes, fldBeg);
    case 241: return underlyingCouponPaymentDate_.map(version, bytes, fldBeg);
    case 242: return underlyingIssueDate_.map(version, bytes, fldBeg);
    case 243: return underlyingRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 244: return underlyingRepurchaseTerm_.map(version, bytes, fldBeg);
    case 245: return underlyingRepurchaseRate_.map(version, bytes, fldBeg);
    case 246: return underlyingFactor_.map(version, bytes, fldBeg);
    case 256: return underlyingCreditRating_.map(version, bytes, fldBeg);
    case 595: return underlyingInstrRegistry_.map(version, bytes, fldBeg);
    case 592: return underlyingCountryOfIssue_.map(version, bytes, fldBeg);
    case 593: return underlyingStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 594: return underlyingLocaleOfIssue_.map(version, bytes, fldBeg);
    case 247: return underlyingRedemptionDate_.map(version, bytes, fldBeg);
    case 316: return underlyingStrikePrice_.map(version, bytes, fldBeg);
    case 941: return underlyingStrikeCurrency_.map(version, bytes, fldBeg);
    case 317: return underlyingOptAttribute_.map(version, bytes, fldBeg);
    case 436: return underlyingContractMultiplier_.map(version, bytes, fldBeg);
    case 435: return underlyingCouponRate_.map(version, bytes, fldBeg);
    case 308: return underlyingSecurityExchange_.map(version, bytes, fldBeg);
    case 306: return underlyingIssuer_.map(version, bytes, fldBeg);
    case 362: return encodedUnderlyingIssuerLen_.map(version, bytes, fldBeg);
    case 363: return encodedUnderlyingIssuer_.map(version, bytes, fldBeg);
    case 307: return underlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 364: return encodedUnderlyingSecurityDescLen_.map(version, bytes, fldBeg);
    case 365: return encodedUnderlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 877: return underlyingCPProgram_.map(version, bytes, fldBeg);
    case 878: return underlyingCPRegType_.map(version, bytes, fldBeg);
    case 318: return underlyingCurrency_.map(version, bytes, fldBeg);
    case 879: return underlyingQty_.map(version, bytes, fldBeg);
    case 810: return underlyingPx_.map(version, bytes, fldBeg);
    case 882: return underlyingDirtyPrice_.map(version, bytes, fldBeg);
    case 883: return underlyingEndPrice_.map(version, bytes, fldBeg);
    case 884: return underlyingStartValue_.map(version, bytes, fldBeg);
    case 885: return underlyingCurrentValue_.map(version, bytes, fldBeg);
    case 886: return underlyingEndValue_.map(version, bytes, fldBeg);
    case 887: case 888: case 889:
      return underlyingStipsGroup_.map(tag, fldBeg);
    case 304: return totNoQuoteEntries_.map(version, bytes, fldBeg);
    case 893: return lastFragment_.map(version, bytes, fldBeg);
    case 15: case 22: case 40: case 48: case 55: case 60: case 62: case 64: case 65: case 106: case 107: case 132: case 133: case 134: case 135: case 167: case 188: case 189: case 190: case 191: case 192: case 193: case 200: case 201: case 202: case 206: case 207: case 223: case 224: case 225: case 226: case 227: case 228: case 231: case 239: case 240: case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 255: case 257: case 295: case 299: case 336: case 348: case 349: case 350: case 351: case 368: case 454: case 455: case 456: case 460: case 461: case 470: case 471: case 472: case 541: case 543: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 625: case 631: case 632: case 633: case 634: case 642: case 643: case 667: case 691: case 739: case 740: case 762: case 764: case 864: case 865: case 866: case 867: case 868: case 873: case 874: case 875: case 876: case 942: case 947: case 955: case 956:
      return quoteEntriesGroup1_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* QuoteSetsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 302: return &quoteSetID_;
    case 311: return &underlyingSymbol_;
    case 312: return &underlyingSymbolSfx_;
    case 309: return &underlyingSecurityID_;
    case 305: return &underlyingSecurityIDSource_;
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.field(tag);
    case 462: return &underlyingProduct_;
    case 463: return &underlyingCFICode_;
    case 310: return &underlyingSecurityType_;
    case 763: return &underlyingSecuritySubType_;
    case 313: return &underlyingMaturityMonthYear_;
    case 542: return &underlyingMaturityDate_;
    case 315: return &underlyingPutOrCall_;
    case 241: return &underlyingCouponPaymentDate_;
    case 242: return &underlyingIssueDate_;
    case 243: return &underlyingRepoCollateralSecurityType_;
    case 244: return &underlyingRepurchaseTerm_;
    case 245: return &underlyingRepurchaseRate_;
    case 246: return &underlyingFactor_;
    case 256: return &underlyingCreditRating_;
    case 595: return &underlyingInstrRegistry_;
    case 592: return &underlyingCountryOfIssue_;
    case 593: return &underlyingStateOrProvinceOfIssue_;
    case 594: return &underlyingLocaleOfIssue_;
    case 247: return &underlyingRedemptionDate_;
    case 316: return &underlyingStrikePrice_;
    case 941: return &underlyingStrikeCurrency_;
    case 317: return &underlyingOptAttribute_;
    case 436: return &underlyingContractMultiplier_;
    case 435: return &underlyingCouponRate_;
    case 308: return &underlyingSecurityExchange_;
    case 306: return &underlyingIssuer_;
    case 362: return &encodedUnderlyingIssuerLen_;
    case 363: return &encodedUnderlyingIssuer_;
    case 307: return &underlyingSecurityDesc_;
    case 364: return &encodedUnderlyingSecurityDescLen_;
    case 365: return &encodedUnderlyingSecurityDesc_;
    case 877: return &underlyingCPProgram_;
    case 878: return &underlyingCPRegType_;
    case 318: return &underlyingCurrency_;
    case 879: return &underlyingQty_;
    case 810: return &underlyingPx_;
    case 882: return &underlyingDirtyPrice_;
    case 883: return &underlyingEndPrice_;
    case 884: return &underlyingStartValue_;
    case 885: return &underlyingCurrentValue_;
    case 886: return &underlyingEndValue_;
    case 887: case 888: case 889:
      return underlyingStipsGroup_.field(tag);
    case 304: return &totNoQuoteEntries_;
    case 893: return &lastFragment_;
    case 15: case 22: case 40: case 48: case 55: case 60: case 62: case 64: case 65: case 106: case 107: case 132: case 133: case 134: case 135: case 167: case 188: case 189: case 190: case 191: case 192: case 193: case 200: case 201: case 202: case 206: case 207: case 223: case 224: case 225: case 226: case 227: case 228: case 231: case 239: case 240: case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 255: case 257: case 295: case 299: case 336: case 348: case 349: case 350: case 351: case 368: case 454: case 455: case 456: case 460: case 461: case 470: case 471: case 472: case 541: case 543: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 625: case 631: case 632: case 633: case 634: case 642: case 643: case 667: case 691: case 739: case 740: case 762: case 764: case 864: case 865: case 866: case 867: case 868: case 873: case 874: case 875: case 876: case 942: case 947: case 955: case 956:
      return quoteEntriesGroup1_.field(tag);
    default: return nullptr;
  }
}

int QuoteSetsGroupComp::write(int valBeg) {
  valBeg = quoteSetID_.write(valBeg);
  valBeg = underlyingSymbol_.write(valBeg);
  valBeg = underlyingSymbolSfx_.write(valBeg);
  valBeg = underlyingSecurityID_.write(valBeg);
  valBeg = underlyingSecurityIDSource_.write(valBeg);
  valBeg = underlyingSecurityAltIDGroup_.write(valBeg);
  valBeg = underlyingProduct_.write(valBeg);
  valBeg = underlyingCFICode_.write(valBeg);
  valBeg = underlyingSecurityType_.write(valBeg);
  valBeg = underlyingSecuritySubType_.write(valBeg);
  valBeg = underlyingMaturityMonthYear_.write(valBeg);
  valBeg = underlyingMaturityDate_.write(valBeg);
  valBeg = underlyingPutOrCall_.write(valBeg);
  valBeg = underlyingCouponPaymentDate_.write(valBeg);
  valBeg = underlyingIssueDate_.write(valBeg);
  valBeg = underlyingRepoCollateralSecurityType_.write(valBeg);
  valBeg = underlyingRepurchaseTerm_.write(valBeg);
  valBeg = underlyingRepurchaseRate_.write(valBeg);
  valBeg = underlyingFactor_.write(valBeg);
  valBeg = underlyingCreditRating_.write(valBeg);
  valBeg = underlyingInstrRegistry_.write(valBeg);
  valBeg = underlyingCountryOfIssue_.write(valBeg);
  valBeg = underlyingStateOrProvinceOfIssue_.write(valBeg);
  valBeg = underlyingLocaleOfIssue_.write(valBeg);
  valBeg = underlyingRedemptionDate_.write(valBeg);
  valBeg = underlyingStrikePrice_.write(valBeg);
  valBeg = underlyingStrikeCurrency_.write(valBeg);
  valBeg = underlyingOptAttribute_.write(valBeg);
  valBeg = underlyingContractMultiplier_.write(valBeg);
  valBeg = underlyingCouponRate_.write(valBeg);
  valBeg = underlyingSecurityExchange_.write(valBeg);
  valBeg = underlyingIssuer_.write(valBeg);
  valBeg = encodedUnderlyingIssuerLen_.write(valBeg);
  valBeg = encodedUnderlyingIssuer_.write(valBeg);
  valBeg = underlyingSecurityDesc_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDescLen_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDesc_.write(valBeg);
  valBeg = underlyingCPProgram_.write(valBeg);
  valBeg = underlyingCPRegType_.write(valBeg);
  valBeg = underlyingCurrency_.write(valBeg);
  valBeg = underlyingQty_.write(valBeg);
  valBeg = underlyingPx_.write(valBeg);
  valBeg = underlyingDirtyPrice_.write(valBeg);
  valBeg = underlyingEndPrice_.write(valBeg);
  valBeg = underlyingStartValue_.write(valBeg);
  valBeg = underlyingCurrentValue_.write(valBeg);
  valBeg = underlyingEndValue_.write(valBeg);
  valBeg = underlyingStipsGroup_.write(valBeg);
  valBeg = totNoQuoteEntries_.write(valBeg);
  valBeg = lastFragment_.write(valBeg);
  valBeg = quoteEntriesGroup1_.write(valBeg);
  return valBeg;
}

QuoteEntriesGroup2Comp::QuoteEntriesGroup2Comp(AbstractMessage* message)
    : Component(message),
    quoteEntryID_(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    legsGroup1_(message),
    bidPx_(message),
    offerPx_(message),
    bidSize_(message),
    offerSize_(message),
    validUntilTime_(message),
    bidSpotRate_(message),
    offerSpotRate_(message),
    bidForwardPoints_(message),
    offerForwardPoints_(message),
    midPx_(message),
    bidYield_(message),
    midYield_(message),
    offerYield_(message),
    transactTime_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    settlDate_(message),
    ordType_(message),
    settlDate2_(message),
    orderQty2_(message),
    bidForwardPoints2_(message),
    offerForwardPoints2_(message),
    currency_(message) {}

AbstractField* QuoteEntriesGroup2Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 299: return quoteEntryID_.map(version, bytes, fldBeg);
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.map(tag, fldBeg);
    case 132: return bidPx_.map(version, bytes, fldBeg);
    case 133: return offerPx_.map(version, bytes, fldBeg);
    case 134: return bidSize_.map(version, bytes, fldBeg);
    case 135: return offerSize_.map(version, bytes, fldBeg);
    case 62: return validUntilTime_.map(version, bytes, fldBeg);
    case 188: return bidSpotRate_.map(version, bytes, fldBeg);
    case 190: return offerSpotRate_.map(version, bytes, fldBeg);
    case 189: return bidForwardPoints_.map(version, bytes, fldBeg);
    case 191: return offerForwardPoints_.map(version, bytes, fldBeg);
    case 631: return midPx_.map(version, bytes, fldBeg);
    case 632: return bidYield_.map(version, bytes, fldBeg);
    case 633: return midYield_.map(version, bytes, fldBeg);
    case 634: return offerYield_.map(version, bytes, fldBeg);
    case 60: return transactTime_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 64: return settlDate_.map(version, bytes, fldBeg);
    case 40: return ordType_.map(version, bytes, fldBeg);
    case 193: return settlDate2_.map(version, bytes, fldBeg);
    case 192: return orderQty2_.map(version, bytes, fldBeg);
    case 642: return bidForwardPoints2_.map(version, bytes, fldBeg);
    case 643: return offerForwardPoints2_.map(version, bytes, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* QuoteEntriesGroup2Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 299: return &quoteEntryID_;
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.field(tag);
    case 132: return &bidPx_;
    case 133: return &offerPx_;
    case 134: return &bidSize_;
    case 135: return &offerSize_;
    case 62: return &validUntilTime_;
    case 188: return &bidSpotRate_;
    case 190: return &offerSpotRate_;
    case 189: return &bidForwardPoints_;
    case 191: return &offerForwardPoints_;
    case 631: return &midPx_;
    case 632: return &bidYield_;
    case 633: return &midYield_;
    case 634: return &offerYield_;
    case 60: return &transactTime_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 64: return &settlDate_;
    case 40: return &ordType_;
    case 193: return &settlDate2_;
    case 192: return &orderQty2_;
    case 642: return &bidForwardPoints2_;
    case 643: return &offerForwardPoints2_;
    case 15: return &currency_;
    default: return nullptr;
  }
}

int QuoteEntriesGroup2Comp::write(int valBeg) {
  valBeg = quoteEntryID_.write(valBeg);
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = legsGroup1_.write(valBeg);
  valBeg = bidPx_.write(valBeg);
  valBeg = offerPx_.write(valBeg);
  valBeg = bidSize_.write(valBeg);
  valBeg = offerSize_.write(valBeg);
  valBeg = validUntilTime_.write(valBeg);
  valBeg = bidSpotRate_.write(valBeg);
  valBeg = offerSpotRate_.write(valBeg);
  valBeg = bidForwardPoints_.write(valBeg);
  valBeg = offerForwardPoints_.write(valBeg);
  valBeg = midPx_.write(valBeg);
  valBeg = bidYield_.write(valBeg);
  valBeg = midYield_.write(valBeg);
  valBeg = offerYield_.write(valBeg);
  valBeg = transactTime_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = settlDate_.write(valBeg);
  valBeg = ordType_.write(valBeg);
  valBeg = settlDate2_.write(valBeg);
  valBeg = orderQty2_.write(valBeg);
  valBeg = bidForwardPoints2_.write(valBeg);
  valBeg = offerForwardPoints2_.write(valBeg);
  valBeg = currency_.write(valBeg);
  return valBeg;
}

QuoteSetsGroup1Comp::QuoteSetsGroup1Comp(AbstractMessage* message)
    : Component(message),
    quoteSetID_(message),
    underlyingSymbol_(message),
    underlyingSymbolSfx_(message),
    underlyingSecurityID_(message),
    underlyingSecurityIDSource_(message),
    underlyingSecurityAltIDGroup_(message),
    underlyingProduct_(message),
    underlyingCFICode_(message),
    underlyingSecurityType_(message),
    underlyingSecuritySubType_(message),
    underlyingMaturityMonthYear_(message),
    underlyingMaturityDate_(message),
    underlyingPutOrCall_(message),
    underlyingCouponPaymentDate_(message),
    underlyingIssueDate_(message),
    underlyingRepoCollateralSecurityType_(message),
    underlyingRepurchaseTerm_(message),
    underlyingRepurchaseRate_(message),
    underlyingFactor_(message),
    underlyingCreditRating_(message),
    underlyingInstrRegistry_(message),
    underlyingCountryOfIssue_(message),
    underlyingStateOrProvinceOfIssue_(message),
    underlyingLocaleOfIssue_(message),
    underlyingRedemptionDate_(message),
    underlyingStrikePrice_(message),
    underlyingStrikeCurrency_(message),
    underlyingOptAttribute_(message),
    underlyingContractMultiplier_(message),
    underlyingCouponRate_(message),
    underlyingSecurityExchange_(message),
    underlyingIssuer_(message),
    encodedUnderlyingIssuerLen_(message),
    encodedUnderlyingIssuer_(message),
    underlyingSecurityDesc_(message),
    encodedUnderlyingSecurityDescLen_(message),
    encodedUnderlyingSecurityDesc_(message),
    underlyingCPProgram_(message),
    underlyingCPRegType_(message),
    underlyingCurrency_(message),
    underlyingQty_(message),
    underlyingPx_(message),
    underlyingDirtyPrice_(message),
    underlyingEndPrice_(message),
    underlyingStartValue_(message),
    underlyingCurrentValue_(message),
    underlyingEndValue_(message),
    underlyingStipsGroup_(message),
    quoteSetValidUntilTime_(message),
    totNoQuoteEntries_(message),
    lastFragment_(message),
    quoteEntriesGroup2_(message) {}

AbstractField* QuoteSetsGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 302: return quoteSetID_.map(version, bytes, fldBeg);
    case 311: return underlyingSymbol_.map(version, bytes, fldBeg);
    case 312: return underlyingSymbolSfx_.map(version, bytes, fldBeg);
    case 309: return underlyingSecurityID_.map(version, bytes, fldBeg);
    case 305: return underlyingSecurityIDSource_.map(version, bytes, fldBeg);
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.map(tag, fldBeg);
    case 462: return underlyingProduct_.map(version, bytes, fldBeg);
    case 463: return underlyingCFICode_.map(version, bytes, fldBeg);
    case 310: return underlyingSecurityType_.map(version, bytes, fldBeg);
    case 763: return underlyingSecuritySubType_.map(version, bytes, fldBeg);
    case 313: return underlyingMaturityMonthYear_.map(version, bytes, fldBeg);
    case 542: return underlyingMaturityDate_.map(version, bytes, fldBeg);
    case 315: return underlyingPutOrCall_.map(version, bytes, fldBeg);
    case 241: return underlyingCouponPaymentDate_.map(version, bytes, fldBeg);
    case 242: return underlyingIssueDate_.map(version, bytes, fldBeg);
    case 243: return underlyingRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 244: return underlyingRepurchaseTerm_.map(version, bytes, fldBeg);
    case 245: return underlyingRepurchaseRate_.map(version, bytes, fldBeg);
    case 246: return underlyingFactor_.map(version, bytes, fldBeg);
    case 256: return underlyingCreditRating_.map(version, bytes, fldBeg);
    case 595: return underlyingInstrRegistry_.map(version, bytes, fldBeg);
    case 592: return underlyingCountryOfIssue_.map(version, bytes, fldBeg);
    case 593: return underlyingStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 594: return underlyingLocaleOfIssue_.map(version, bytes, fldBeg);
    case 247: return underlyingRedemptionDate_.map(version, bytes, fldBeg);
    case 316: return underlyingStrikePrice_.map(version, bytes, fldBeg);
    case 941: return underlyingStrikeCurrency_.map(version, bytes, fldBeg);
    case 317: return underlyingOptAttribute_.map(version, bytes, fldBeg);
    case 436: return underlyingContractMultiplier_.map(version, bytes, fldBeg);
    case 435: return underlyingCouponRate_.map(version, bytes, fldBeg);
    case 308: return underlyingSecurityExchange_.map(version, bytes, fldBeg);
    case 306: return underlyingIssuer_.map(version, bytes, fldBeg);
    case 362: return encodedUnderlyingIssuerLen_.map(version, bytes, fldBeg);
    case 363: return encodedUnderlyingIssuer_.map(version, bytes, fldBeg);
    case 307: return underlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 364: return encodedUnderlyingSecurityDescLen_.map(version, bytes, fldBeg);
    case 365: return encodedUnderlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 877: return underlyingCPProgram_.map(version, bytes, fldBeg);
    case 878: return underlyingCPRegType_.map(version, bytes, fldBeg);
    case 318: return underlyingCurrency_.map(version, bytes, fldBeg);
    case 879: return underlyingQty_.map(version, bytes, fldBeg);
    case 810: return underlyingPx_.map(version, bytes, fldBeg);
    case 882: return underlyingDirtyPrice_.map(version, bytes, fldBeg);
    case 883: return underlyingEndPrice_.map(version, bytes, fldBeg);
    case 884: return underlyingStartValue_.map(version, bytes, fldBeg);
    case 885: return underlyingCurrentValue_.map(version, bytes, fldBeg);
    case 886: return underlyingEndValue_.map(version, bytes, fldBeg);
    case 887: case 888: case 889:
      return underlyingStipsGroup_.map(tag, fldBeg);
    case 367: return quoteSetValidUntilTime_.map(version, bytes, fldBeg);
    case 304: return totNoQuoteEntries_.map(version, bytes, fldBeg);
    case 893: return lastFragment_.map(version, bytes, fldBeg);
    case 15: case 22: case 40: case 48: case 55: case 60: case 62: case 64: case 65: case 106: case 107: case 132: case 133: case 134: case 135: case 167: case 188: case 189: case 190: case 191: case 192: case 193: case 200: case 201: case 202: case 206: case 207: case 223: case 224: case 225: case 226: case 227: case 228: case 231: case 239: case 240: case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 255: case 257: case 295: case 299: case 336: case 348: case 349: case 350: case 351: case 454: case 455: case 456: case 460: case 461: case 470: case 471: case 472: case 541: case 543: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 625: case 631: case 632: case 633: case 634: case 642: case 643: case 667: case 691: case 739: case 740: case 762: case 764: case 864: case 865: case 866: case 867: case 868: case 873: case 874: case 875: case 876: case 942: case 947: case 955: case 956:
      return quoteEntriesGroup2_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* QuoteSetsGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 302: return &quoteSetID_;
    case 311: return &underlyingSymbol_;
    case 312: return &underlyingSymbolSfx_;
    case 309: return &underlyingSecurityID_;
    case 305: return &underlyingSecurityIDSource_;
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.field(tag);
    case 462: return &underlyingProduct_;
    case 463: return &underlyingCFICode_;
    case 310: return &underlyingSecurityType_;
    case 763: return &underlyingSecuritySubType_;
    case 313: return &underlyingMaturityMonthYear_;
    case 542: return &underlyingMaturityDate_;
    case 315: return &underlyingPutOrCall_;
    case 241: return &underlyingCouponPaymentDate_;
    case 242: return &underlyingIssueDate_;
    case 243: return &underlyingRepoCollateralSecurityType_;
    case 244: return &underlyingRepurchaseTerm_;
    case 245: return &underlyingRepurchaseRate_;
    case 246: return &underlyingFactor_;
    case 256: return &underlyingCreditRating_;
    case 595: return &underlyingInstrRegistry_;
    case 592: return &underlyingCountryOfIssue_;
    case 593: return &underlyingStateOrProvinceOfIssue_;
    case 594: return &underlyingLocaleOfIssue_;
    case 247: return &underlyingRedemptionDate_;
    case 316: return &underlyingStrikePrice_;
    case 941: return &underlyingStrikeCurrency_;
    case 317: return &underlyingOptAttribute_;
    case 436: return &underlyingContractMultiplier_;
    case 435: return &underlyingCouponRate_;
    case 308: return &underlyingSecurityExchange_;
    case 306: return &underlyingIssuer_;
    case 362: return &encodedUnderlyingIssuerLen_;
    case 363: return &encodedUnderlyingIssuer_;
    case 307: return &underlyingSecurityDesc_;
    case 364: return &encodedUnderlyingSecurityDescLen_;
    case 365: return &encodedUnderlyingSecurityDesc_;
    case 877: return &underlyingCPProgram_;
    case 878: return &underlyingCPRegType_;
    case 318: return &underlyingCurrency_;
    case 879: return &underlyingQty_;
    case 810: return &underlyingPx_;
    case 882: return &underlyingDirtyPrice_;
    case 883: return &underlyingEndPrice_;
    case 884: return &underlyingStartValue_;
    case 885: return &underlyingCurrentValue_;
    case 886: return &underlyingEndValue_;
    case 887: case 888: case 889:
      return underlyingStipsGroup_.field(tag);
    case 367: return &quoteSetValidUntilTime_;
    case 304: return &totNoQuoteEntries_;
    case 893: return &lastFragment_;
    case 15: case 22: case 40: case 48: case 55: case 60: case 62: case 64: case 65: case 106: case 107: case 132: case 133: case 134: case 135: case 167: case 188: case 189: case 190: case 191: case 192: case 193: case 200: case 201: case 202: case 206: case 207: case 223: case 224: case 225: case 226: case 227: case 228: case 231: case 239: case 240: case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 255: case 257: case 295: case 299: case 336: case 348: case 349: case 350: case 351: case 454: case 455: case 456: case 460: case 461: case 470: case 471: case 472: case 541: case 543: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 625: case 631: case 632: case 633: case 634: case 642: case 643: case 667: case 691: case 739: case 740: case 762: case 764: case 864: case 865: case 866: case 867: case 868: case 873: case 874: case 875: case 876: case 942: case 947: case 955: case 956:
      return quoteEntriesGroup2_.field(tag);
    default: return nullptr;
  }
}

int QuoteSetsGroup1Comp::write(int valBeg) {
  valBeg = quoteSetID_.write(valBeg);
  valBeg = underlyingSymbol_.write(valBeg);
  valBeg = underlyingSymbolSfx_.write(valBeg);
  valBeg = underlyingSecurityID_.write(valBeg);
  valBeg = underlyingSecurityIDSource_.write(valBeg);
  valBeg = underlyingSecurityAltIDGroup_.write(valBeg);
  valBeg = underlyingProduct_.write(valBeg);
  valBeg = underlyingCFICode_.write(valBeg);
  valBeg = underlyingSecurityType_.write(valBeg);
  valBeg = underlyingSecuritySubType_.write(valBeg);
  valBeg = underlyingMaturityMonthYear_.write(valBeg);
  valBeg = underlyingMaturityDate_.write(valBeg);
  valBeg = underlyingPutOrCall_.write(valBeg);
  valBeg = underlyingCouponPaymentDate_.write(valBeg);
  valBeg = underlyingIssueDate_.write(valBeg);
  valBeg = underlyingRepoCollateralSecurityType_.write(valBeg);
  valBeg = underlyingRepurchaseTerm_.write(valBeg);
  valBeg = underlyingRepurchaseRate_.write(valBeg);
  valBeg = underlyingFactor_.write(valBeg);
  valBeg = underlyingCreditRating_.write(valBeg);
  valBeg = underlyingInstrRegistry_.write(valBeg);
  valBeg = underlyingCountryOfIssue_.write(valBeg);
  valBeg = underlyingStateOrProvinceOfIssue_.write(valBeg);
  valBeg = underlyingLocaleOfIssue_.write(valBeg);
  valBeg = underlyingRedemptionDate_.write(valBeg);
  valBeg = underlyingStrikePrice_.write(valBeg);
  valBeg = underlyingStrikeCurrency_.write(valBeg);
  valBeg = underlyingOptAttribute_.write(valBeg);
  valBeg = underlyingContractMultiplier_.write(valBeg);
  valBeg = underlyingCouponRate_.write(valBeg);
  valBeg = underlyingSecurityExchange_.write(valBeg);
  valBeg = underlyingIssuer_.write(valBeg);
  valBeg = encodedUnderlyingIssuerLen_.write(valBeg);
  valBeg = encodedUnderlyingIssuer_.write(valBeg);
  valBeg = underlyingSecurityDesc_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDescLen_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDesc_.write(valBeg);
  valBeg = underlyingCPProgram_.write(valBeg);
  valBeg = underlyingCPRegType_.write(valBeg);
  valBeg = underlyingCurrency_.write(valBeg);
  valBeg = underlyingQty_.write(valBeg);
  valBeg = underlyingPx_.write(valBeg);
  valBeg = underlyingDirtyPrice_.write(valBeg);
  valBeg = underlyingEndPrice_.write(valBeg);
  valBeg = underlyingStartValue_.write(valBeg);
  valBeg = underlyingCurrentValue_.write(valBeg);
  valBeg = underlyingEndValue_.write(valBeg);
  valBeg = underlyingStipsGroup_.write(valBeg);
  valBeg = quoteSetValidUntilTime_.write(valBeg);
  valBeg = totNoQuoteEntries_.write(valBeg);
  valBeg = lastFragment_.write(valBeg);
  valBeg = quoteEntriesGroup2_.write(valBeg);
  return valBeg;
}

BidDescriptorsGroupComp::BidDescriptorsGroupComp(AbstractMessage* message)
    : Component(message),
    bidDescriptorType_(message),
    bidDescriptor_(message),
    sideValueInd_(message),
    liquidityValue_(message),
    liquidityNumSecurities_(message),
    liquidityPctLow_(message),
    liquidityPctHigh_(message),
    eFPTrackingError_(message),
    fairValue_(message),
    outsideIndexPct_(message),
    valueOfFutures_(message) {}

AbstractField* BidDescriptorsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 399: return bidDescriptorType_.map(version, bytes, fldBeg);
    case 400: return bidDescriptor_.map(version, bytes, fldBeg);
    case 401: return sideValueInd_.map(version, bytes, fldBeg);
    case 404: return liquidityValue_.map(version, bytes, fldBeg);
    case 441: return liquidityNumSecurities_.map(version, bytes, fldBeg);
    case 402: return liquidityPctLow_.map(version, bytes, fldBeg);
    case 403: return liquidityPctHigh_.map(version, bytes, fldBeg);
    case 405: return eFPTrackingError_.map(version, bytes, fldBeg);
    case 406: return fairValue_.map(version, bytes, fldBeg);
    case 407: return outsideIndexPct_.map(version, bytes, fldBeg);
    case 408: return valueOfFutures_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* BidDescriptorsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 399: return &bidDescriptorType_;
    case 400: return &bidDescriptor_;
    case 401: return &sideValueInd_;
    case 404: return &liquidityValue_;
    case 441: return &liquidityNumSecurities_;
    case 402: return &liquidityPctLow_;
    case 403: return &liquidityPctHigh_;
    case 405: return &eFPTrackingError_;
    case 406: return &fairValue_;
    case 407: return &outsideIndexPct_;
    case 408: return &valueOfFutures_;
    default: return nullptr;
  }
}

int BidDescriptorsGroupComp::write(int valBeg) {
  valBeg = bidDescriptorType_.write(valBeg);
  valBeg = bidDescriptor_.write(valBeg);
  valBeg = sideValueInd_.write(valBeg);
  valBeg = liquidityValue_.write(valBeg);
  valBeg = liquidityNumSecurities_.write(valBeg);
  valBeg = liquidityPctLow_.write(valBeg);
  valBeg = liquidityPctHigh_.write(valBeg);
  valBeg = eFPTrackingError_.write(valBeg);
  valBeg = fairValue_.write(valBeg);
  valBeg = outsideIndexPct_.write(valBeg);
  valBeg = valueOfFutures_.write(valBeg);
  return valBeg;
}

BidComponentsGroupComp::BidComponentsGroupComp(AbstractMessage* message)
    : Component(message),
    listID_(message),
    side_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    netGrossInd_(message),
    settlType_(message),
    settlDate_(message),
    account_(message),
    acctIDSource_(message) {}

AbstractField* BidComponentsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 66: return listID_.map(version, bytes, fldBeg);
    case 54: return side_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 430: return netGrossInd_.map(version, bytes, fldBeg);
    case 63: return settlType_.map(version, bytes, fldBeg);
    case 64: return settlDate_.map(version, bytes, fldBeg);
    case 1: return account_.map(version, bytes, fldBeg);
    case 660: return acctIDSource_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* BidComponentsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 66: return &listID_;
    case 54: return &side_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 430: return &netGrossInd_;
    case 63: return &settlType_;
    case 64: return &settlDate_;
    case 1: return &account_;
    case 660: return &acctIDSource_;
    default: return nullptr;
  }
}

int BidComponentsGroupComp::write(int valBeg) {
  valBeg = listID_.write(valBeg);
  valBeg = side_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = netGrossInd_.write(valBeg);
  valBeg = settlType_.write(valBeg);
  valBeg = settlDate_.write(valBeg);
  valBeg = account_.write(valBeg);
  valBeg = acctIDSource_.write(valBeg);
  return valBeg;
}

BidComponentsGroup1Comp::BidComponentsGroup1Comp(AbstractMessage* message)
    : Component(message),
    commission_(message),
    commType_(message),
    commCurrency_(message),
    fundRenewWaiv_(message),
    listID_(message),
    country_(message),
    side_(message),
    price_(message),
    priceType_(message),
    fairValue_(message),
    netGrossInd_(message),
    settlType_(message),
    settlDate_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message) {}

AbstractField* BidComponentsGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 12: return commission_.map(version, bytes, fldBeg);
    case 13: return commType_.map(version, bytes, fldBeg);
    case 479: return commCurrency_.map(version, bytes, fldBeg);
    case 497: return fundRenewWaiv_.map(version, bytes, fldBeg);
    case 66: return listID_.map(version, bytes, fldBeg);
    case 421: return country_.map(version, bytes, fldBeg);
    case 54: return side_.map(version, bytes, fldBeg);
    case 44: return price_.map(version, bytes, fldBeg);
    case 423: return priceType_.map(version, bytes, fldBeg);
    case 406: return fairValue_.map(version, bytes, fldBeg);
    case 430: return netGrossInd_.map(version, bytes, fldBeg);
    case 63: return settlType_.map(version, bytes, fldBeg);
    case 64: return settlDate_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* BidComponentsGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 12: return &commission_;
    case 13: return &commType_;
    case 479: return &commCurrency_;
    case 497: return &fundRenewWaiv_;
    case 66: return &listID_;
    case 421: return &country_;
    case 54: return &side_;
    case 44: return &price_;
    case 423: return &priceType_;
    case 406: return &fairValue_;
    case 430: return &netGrossInd_;
    case 63: return &settlType_;
    case 64: return &settlDate_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    default: return nullptr;
  }
}

int BidComponentsGroup1Comp::write(int valBeg) {
  valBeg = commission_.write(valBeg);
  valBeg = commType_.write(valBeg);
  valBeg = commCurrency_.write(valBeg);
  valBeg = fundRenewWaiv_.write(valBeg);
  valBeg = listID_.write(valBeg);
  valBeg = country_.write(valBeg);
  valBeg = side_.write(valBeg);
  valBeg = price_.write(valBeg);
  valBeg = priceType_.write(valBeg);
  valBeg = fairValue_.write(valBeg);
  valBeg = netGrossInd_.write(valBeg);
  valBeg = settlType_.write(valBeg);
  valBeg = settlDate_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  return valBeg;
}

StrikesGroupComp::StrikesGroupComp(AbstractMessage* message)
    : Component(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message) {}

AbstractField* StrikesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* StrikesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    default: return nullptr;
  }
}

int StrikesGroupComp::write(int valBeg) {
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  return valBeg;
}

UnderlyingsGroup1Comp::UnderlyingsGroup1Comp(AbstractMessage* message)
    : Component(message),
    underlyingSymbol_(message),
    underlyingSymbolSfx_(message),
    underlyingSecurityID_(message),
    underlyingSecurityIDSource_(message),
    underlyingSecurityAltIDGroup_(message),
    underlyingProduct_(message),
    underlyingCFICode_(message),
    underlyingSecurityType_(message),
    underlyingSecuritySubType_(message),
    underlyingMaturityMonthYear_(message),
    underlyingMaturityDate_(message),
    underlyingPutOrCall_(message),
    underlyingCouponPaymentDate_(message),
    underlyingIssueDate_(message),
    underlyingRepoCollateralSecurityType_(message),
    underlyingRepurchaseTerm_(message),
    underlyingRepurchaseRate_(message),
    underlyingFactor_(message),
    underlyingCreditRating_(message),
    underlyingInstrRegistry_(message),
    underlyingCountryOfIssue_(message),
    underlyingStateOrProvinceOfIssue_(message),
    underlyingLocaleOfIssue_(message),
    underlyingRedemptionDate_(message),
    underlyingStrikePrice_(message),
    underlyingStrikeCurrency_(message),
    underlyingOptAttribute_(message),
    underlyingContractMultiplier_(message),
    underlyingCouponRate_(message),
    underlyingSecurityExchange_(message),
    underlyingIssuer_(message),
    encodedUnderlyingIssuerLen_(message),
    encodedUnderlyingIssuer_(message),
    underlyingSecurityDesc_(message),
    encodedUnderlyingSecurityDescLen_(message),
    encodedUnderlyingSecurityDesc_(message),
    underlyingCPProgram_(message),
    underlyingCPRegType_(message),
    underlyingCurrency_(message),
    underlyingQty_(message),
    underlyingPx_(message),
    underlyingDirtyPrice_(message),
    underlyingEndPrice_(message),
    underlyingStartValue_(message),
    underlyingCurrentValue_(message),
    underlyingEndValue_(message),
    underlyingStipsGroup_(message),
    prevClosePx_(message),
    clOrdID_(message),
    secondaryClOrdID_(message),
    side_(message),
    price_(message),
    currency_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message) {}

AbstractField* UnderlyingsGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 311: return underlyingSymbol_.map(version, bytes, fldBeg);
    case 312: return underlyingSymbolSfx_.map(version, bytes, fldBeg);
    case 309: return underlyingSecurityID_.map(version, bytes, fldBeg);
    case 305: return underlyingSecurityIDSource_.map(version, bytes, fldBeg);
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.map(tag, fldBeg);
    case 462: return underlyingProduct_.map(version, bytes, fldBeg);
    case 463: return underlyingCFICode_.map(version, bytes, fldBeg);
    case 310: return underlyingSecurityType_.map(version, bytes, fldBeg);
    case 763: return underlyingSecuritySubType_.map(version, bytes, fldBeg);
    case 313: return underlyingMaturityMonthYear_.map(version, bytes, fldBeg);
    case 542: return underlyingMaturityDate_.map(version, bytes, fldBeg);
    case 315: return underlyingPutOrCall_.map(version, bytes, fldBeg);
    case 241: return underlyingCouponPaymentDate_.map(version, bytes, fldBeg);
    case 242: return underlyingIssueDate_.map(version, bytes, fldBeg);
    case 243: return underlyingRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 244: return underlyingRepurchaseTerm_.map(version, bytes, fldBeg);
    case 245: return underlyingRepurchaseRate_.map(version, bytes, fldBeg);
    case 246: return underlyingFactor_.map(version, bytes, fldBeg);
    case 256: return underlyingCreditRating_.map(version, bytes, fldBeg);
    case 595: return underlyingInstrRegistry_.map(version, bytes, fldBeg);
    case 592: return underlyingCountryOfIssue_.map(version, bytes, fldBeg);
    case 593: return underlyingStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 594: return underlyingLocaleOfIssue_.map(version, bytes, fldBeg);
    case 247: return underlyingRedemptionDate_.map(version, bytes, fldBeg);
    case 316: return underlyingStrikePrice_.map(version, bytes, fldBeg);
    case 941: return underlyingStrikeCurrency_.map(version, bytes, fldBeg);
    case 317: return underlyingOptAttribute_.map(version, bytes, fldBeg);
    case 436: return underlyingContractMultiplier_.map(version, bytes, fldBeg);
    case 435: return underlyingCouponRate_.map(version, bytes, fldBeg);
    case 308: return underlyingSecurityExchange_.map(version, bytes, fldBeg);
    case 306: return underlyingIssuer_.map(version, bytes, fldBeg);
    case 362: return encodedUnderlyingIssuerLen_.map(version, bytes, fldBeg);
    case 363: return encodedUnderlyingIssuer_.map(version, bytes, fldBeg);
    case 307: return underlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 364: return encodedUnderlyingSecurityDescLen_.map(version, bytes, fldBeg);
    case 365: return encodedUnderlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 877: return underlyingCPProgram_.map(version, bytes, fldBeg);
    case 878: return underlyingCPRegType_.map(version, bytes, fldBeg);
    case 318: return underlyingCurrency_.map(version, bytes, fldBeg);
    case 879: return underlyingQty_.map(version, bytes, fldBeg);
    case 810: return underlyingPx_.map(version, bytes, fldBeg);
    case 882: return underlyingDirtyPrice_.map(version, bytes, fldBeg);
    case 883: return underlyingEndPrice_.map(version, bytes, fldBeg);
    case 884: return underlyingStartValue_.map(version, bytes, fldBeg);
    case 885: return underlyingCurrentValue_.map(version, bytes, fldBeg);
    case 886: return underlyingEndValue_.map(version, bytes, fldBeg);
    case 887: case 888: case 889:
      return underlyingStipsGroup_.map(tag, fldBeg);
    case 140: return prevClosePx_.map(version, bytes, fldBeg);
    case 11: return clOrdID_.map(version, bytes, fldBeg);
    case 526: return secondaryClOrdID_.map(version, bytes, fldBeg);
    case 54: return side_.map(version, bytes, fldBeg);
    case 44: return price_.map(version, bytes, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* UnderlyingsGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 311: return &underlyingSymbol_;
    case 312: return &underlyingSymbolSfx_;
    case 309: return &underlyingSecurityID_;
    case 305: return &underlyingSecurityIDSource_;
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.field(tag);
    case 462: return &underlyingProduct_;
    case 463: return &underlyingCFICode_;
    case 310: return &underlyingSecurityType_;
    case 763: return &underlyingSecuritySubType_;
    case 313: return &underlyingMaturityMonthYear_;
    case 542: return &underlyingMaturityDate_;
    case 315: return &underlyingPutOrCall_;
    case 241: return &underlyingCouponPaymentDate_;
    case 242: return &underlyingIssueDate_;
    case 243: return &underlyingRepoCollateralSecurityType_;
    case 244: return &underlyingRepurchaseTerm_;
    case 245: return &underlyingRepurchaseRate_;
    case 246: return &underlyingFactor_;
    case 256: return &underlyingCreditRating_;
    case 595: return &underlyingInstrRegistry_;
    case 592: return &underlyingCountryOfIssue_;
    case 593: return &underlyingStateOrProvinceOfIssue_;
    case 594: return &underlyingLocaleOfIssue_;
    case 247: return &underlyingRedemptionDate_;
    case 316: return &underlyingStrikePrice_;
    case 941: return &underlyingStrikeCurrency_;
    case 317: return &underlyingOptAttribute_;
    case 436: return &underlyingContractMultiplier_;
    case 435: return &underlyingCouponRate_;
    case 308: return &underlyingSecurityExchange_;
    case 306: return &underlyingIssuer_;
    case 362: return &encodedUnderlyingIssuerLen_;
    case 363: return &encodedUnderlyingIssuer_;
    case 307: return &underlyingSecurityDesc_;
    case 364: return &encodedUnderlyingSecurityDescLen_;
    case 365: return &encodedUnderlyingSecurityDesc_;
    case 877: return &underlyingCPProgram_;
    case 878: return &underlyingCPRegType_;
    case 318: return &underlyingCurrency_;
    case 879: return &underlyingQty_;
    case 810: return &underlyingPx_;
    case 882: return &underlyingDirtyPrice_;
    case 883: return &underlyingEndPrice_;
    case 884: return &underlyingStartValue_;
    case 885: return &underlyingCurrentValue_;
    case 886: return &underlyingEndValue_;
    case 887: case 888: case 889:
      return underlyingStipsGroup_.field(tag);
    case 140: return &prevClosePx_;
    case 11: return &clOrdID_;
    case 526: return &secondaryClOrdID_;
    case 54: return &side_;
    case 44: return &price_;
    case 15: return &currency_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    default: return nullptr;
  }
}

int UnderlyingsGroup1Comp::write(int valBeg) {
  valBeg = underlyingSymbol_.write(valBeg);
  valBeg = underlyingSymbolSfx_.write(valBeg);
  valBeg = underlyingSecurityID_.write(valBeg);
  valBeg = underlyingSecurityIDSource_.write(valBeg);
  valBeg = underlyingSecurityAltIDGroup_.write(valBeg);
  valBeg = underlyingProduct_.write(valBeg);
  valBeg = underlyingCFICode_.write(valBeg);
  valBeg = underlyingSecurityType_.write(valBeg);
  valBeg = underlyingSecuritySubType_.write(valBeg);
  valBeg = underlyingMaturityMonthYear_.write(valBeg);
  valBeg = underlyingMaturityDate_.write(valBeg);
  valBeg = underlyingPutOrCall_.write(valBeg);
  valBeg = underlyingCouponPaymentDate_.write(valBeg);
  valBeg = underlyingIssueDate_.write(valBeg);
  valBeg = underlyingRepoCollateralSecurityType_.write(valBeg);
  valBeg = underlyingRepurchaseTerm_.write(valBeg);
  valBeg = underlyingRepurchaseRate_.write(valBeg);
  valBeg = underlyingFactor_.write(valBeg);
  valBeg = underlyingCreditRating_.write(valBeg);
  valBeg = underlyingInstrRegistry_.write(valBeg);
  valBeg = underlyingCountryOfIssue_.write(valBeg);
  valBeg = underlyingStateOrProvinceOfIssue_.write(valBeg);
  valBeg = underlyingLocaleOfIssue_.write(valBeg);
  valBeg = underlyingRedemptionDate_.write(valBeg);
  valBeg = underlyingStrikePrice_.write(valBeg);
  valBeg = underlyingStrikeCurrency_.write(valBeg);
  valBeg = underlyingOptAttribute_.write(valBeg);
  valBeg = underlyingContractMultiplier_.write(valBeg);
  valBeg = underlyingCouponRate_.write(valBeg);
  valBeg = underlyingSecurityExchange_.write(valBeg);
  valBeg = underlyingIssuer_.write(valBeg);
  valBeg = encodedUnderlyingIssuerLen_.write(valBeg);
  valBeg = encodedUnderlyingIssuer_.write(valBeg);
  valBeg = underlyingSecurityDesc_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDescLen_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDesc_.write(valBeg);
  valBeg = underlyingCPProgram_.write(valBeg);
  valBeg = underlyingCPRegType_.write(valBeg);
  valBeg = underlyingCurrency_.write(valBeg);
  valBeg = underlyingQty_.write(valBeg);
  valBeg = underlyingPx_.write(valBeg);
  valBeg = underlyingDirtyPrice_.write(valBeg);
  valBeg = underlyingEndPrice_.write(valBeg);
  valBeg = underlyingStartValue_.write(valBeg);
  valBeg = underlyingCurrentValue_.write(valBeg);
  valBeg = underlyingEndValue_.write(valBeg);
  valBeg = underlyingStipsGroup_.write(valBeg);
  valBeg = prevClosePx_.write(valBeg);
  valBeg = clOrdID_.write(valBeg);
  valBeg = secondaryClOrdID_.write(valBeg);
  valBeg = side_.write(valBeg);
  valBeg = price_.write(valBeg);
  valBeg = currency_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  return valBeg;
}

RegistDtlsGroupComp::RegistDtlsGroupComp(AbstractMessage* message)
    : Component(message),
    registDtls_(message),
    registEmail_(message),
    mailingDtls_(message),
    mailingInst_(message),
    nestedPartyIDsGroup_(message),
    ownerType_(message),
    dateOfBirth_(message),
    investorCountryOfResidence_(message) {}

AbstractField* RegistDtlsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 509: return registDtls_.map(version, bytes, fldBeg);
    case 511: return registEmail_.map(version, bytes, fldBeg);
    case 474: return mailingDtls_.map(version, bytes, fldBeg);
    case 482: return mailingInst_.map(version, bytes, fldBeg);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.map(tag, fldBeg);
    case 522: return ownerType_.map(version, bytes, fldBeg);
    case 486: return dateOfBirth_.map(version, bytes, fldBeg);
    case 475: return investorCountryOfResidence_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* RegistDtlsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 509: return &registDtls_;
    case 511: return &registEmail_;
    case 474: return &mailingDtls_;
    case 482: return &mailingInst_;
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.field(tag);
    case 522: return &ownerType_;
    case 486: return &dateOfBirth_;
    case 475: return &investorCountryOfResidence_;
    default: return nullptr;
  }
}

int RegistDtlsGroupComp::write(int valBeg) {
  valBeg = registDtls_.write(valBeg);
  valBeg = registEmail_.write(valBeg);
  valBeg = mailingDtls_.write(valBeg);
  valBeg = mailingInst_.write(valBeg);
  valBeg = nestedPartyIDsGroup_.write(valBeg);
  valBeg = ownerType_.write(valBeg);
  valBeg = dateOfBirth_.write(valBeg);
  valBeg = investorCountryOfResidence_.write(valBeg);
  return valBeg;
}

DistribInstsGroupComp::DistribInstsGroupComp(AbstractMessage* message)
    : Component(message),
    distribPaymentMethod_(message),
    distribPercentage_(message),
    cashDistribCurr_(message),
    cashDistribAgentName_(message),
    cashDistribAgentCode_(message),
    cashDistribAgentAcctNumber_(message),
    cashDistribPayRef_(message),
    cashDistribAgentAcctName_(message) {}

AbstractField* DistribInstsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 477: return distribPaymentMethod_.map(version, bytes, fldBeg);
    case 512: return distribPercentage_.map(version, bytes, fldBeg);
    case 478: return cashDistribCurr_.map(version, bytes, fldBeg);
    case 498: return cashDistribAgentName_.map(version, bytes, fldBeg);
    case 499: return cashDistribAgentCode_.map(version, bytes, fldBeg);
    case 500: return cashDistribAgentAcctNumber_.map(version, bytes, fldBeg);
    case 501: return cashDistribPayRef_.map(version, bytes, fldBeg);
    case 502: return cashDistribAgentAcctName_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* DistribInstsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 477: return &distribPaymentMethod_;
    case 512: return &distribPercentage_;
    case 478: return &cashDistribCurr_;
    case 498: return &cashDistribAgentName_;
    case 499: return &cashDistribAgentCode_;
    case 500: return &cashDistribAgentAcctNumber_;
    case 501: return &cashDistribPayRef_;
    case 502: return &cashDistribAgentAcctName_;
    default: return nullptr;
  }
}

int DistribInstsGroupComp::write(int valBeg) {
  valBeg = distribPaymentMethod_.write(valBeg);
  valBeg = distribPercentage_.write(valBeg);
  valBeg = cashDistribCurr_.write(valBeg);
  valBeg = cashDistribAgentName_.write(valBeg);
  valBeg = cashDistribAgentCode_.write(valBeg);
  valBeg = cashDistribAgentAcctNumber_.write(valBeg);
  valBeg = cashDistribPayRef_.write(valBeg);
  valBeg = cashDistribAgentAcctName_.write(valBeg);
  return valBeg;
}

AffectedOrdersGroupComp::AffectedOrdersGroupComp(AbstractMessage* message)
    : Component(message),
    origClOrdID_(message),
    affectedOrderID_(message),
    affectedSecondaryOrderID_(message) {}

AbstractField* AffectedOrdersGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 41: return origClOrdID_.map(version, bytes, fldBeg);
    case 535: return affectedOrderID_.map(version, bytes, fldBeg);
    case 536: return affectedSecondaryOrderID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* AffectedOrdersGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 41: return &origClOrdID_;
    case 535: return &affectedOrderID_;
    case 536: return &affectedSecondaryOrderID_;
    default: return nullptr;
  }
}

int AffectedOrdersGroupComp::write(int valBeg) {
  valBeg = origClOrdID_.write(valBeg);
  valBeg = affectedOrderID_.write(valBeg);
  valBeg = affectedSecondaryOrderID_.write(valBeg);
  return valBeg;
}

SidesGroupComp::SidesGroupComp(AbstractMessage* message)
    : Component(message),
    side_(message),
    clOrdID_(message),
    secondaryClOrdID_(message),
    clOrdLinkID_(message),
    partyIDsGroup_(message),
    tradeOriginationDate_(message),
    tradeDate_(message),
    account_(message),
    acctIDSource_(message),
    accountType_(message),
    dayBookingInst_(message),
    bookingUnit_(message),
    preallocMethod_(message),
    allocID_(message),
    allocsGroup_(message),
    qtyType_(message),
    orderQty_(message),
    cashOrderQty_(message),
    orderPercent_(message),
    roundingDirection_(message),
    roundingModulus_(message),
    commission_(message),
    commType_(message),
    commCurrency_(message),
    fundRenewWaiv_(message),
    orderCapacity_(message),
    orderRestrictions_(message),
    custOrderCapacity_(message),
    forexReq_(message),
    settlCurrency_(message),
    bookingType_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message),
    positionEffect_(message),
    coveredOrUncovered_(message),
    cashMargin_(message),
    clearingFeeIndicator_(message),
    solicitedFlag_(message),
    sideComplianceID_(message) {}

AbstractField* SidesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 54: return side_.map(version, bytes, fldBeg);
    case 11: return clOrdID_.map(version, bytes, fldBeg);
    case 526: return secondaryClOrdID_.map(version, bytes, fldBeg);
    case 583: return clOrdLinkID_.map(version, bytes, fldBeg);
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.map(tag, fldBeg);
    case 229: return tradeOriginationDate_.map(version, bytes, fldBeg);
    case 75: return tradeDate_.map(version, bytes, fldBeg);
    case 1: return account_.map(version, bytes, fldBeg);
    case 660: return acctIDSource_.map(version, bytes, fldBeg);
    case 581: return accountType_.map(version, bytes, fldBeg);
    case 589: return dayBookingInst_.map(version, bytes, fldBeg);
    case 590: return bookingUnit_.map(version, bytes, fldBeg);
    case 591: return preallocMethod_.map(version, bytes, fldBeg);
    case 70: return allocID_.map(version, bytes, fldBeg);
    case 78: case 79: case 80: case 467: case 524: case 525: case 538: case 539: case 545: case 661: case 736: case 804: case 805:
      return allocsGroup_.map(tag, fldBeg);
    case 854: return qtyType_.map(version, bytes, fldBeg);
    case 38: return orderQty_.map(version, bytes, fldBeg);
    case 152: return cashOrderQty_.map(version, bytes, fldBeg);
    case 516: return orderPercent_.map(version, bytes, fldBeg);
    case 468: return roundingDirection_.map(version, bytes, fldBeg);
    case 469: return roundingModulus_.map(version, bytes, fldBeg);
    case 12: return commission_.map(version, bytes, fldBeg);
    case 13: return commType_.map(version, bytes, fldBeg);
    case 479: return commCurrency_.map(version, bytes, fldBeg);
    case 497: return fundRenewWaiv_.map(version, bytes, fldBeg);
    case 528: return orderCapacity_.map(version, bytes, fldBeg);
    case 529: return orderRestrictions_.map(version, bytes, fldBeg);
    case 582: return custOrderCapacity_.map(version, bytes, fldBeg);
    case 121: return forexReq_.map(version, bytes, fldBeg);
    case 120: return settlCurrency_.map(version, bytes, fldBeg);
    case 775: return bookingType_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    case 77: return positionEffect_.map(version, bytes, fldBeg);
    case 203: return coveredOrUncovered_.map(version, bytes, fldBeg);
    case 544: return cashMargin_.map(version, bytes, fldBeg);
    case 635: return clearingFeeIndicator_.map(version, bytes, fldBeg);
    case 377: return solicitedFlag_.map(version, bytes, fldBeg);
    case 659: return sideComplianceID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* SidesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 54: return &side_;
    case 11: return &clOrdID_;
    case 526: return &secondaryClOrdID_;
    case 583: return &clOrdLinkID_;
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.field(tag);
    case 229: return &tradeOriginationDate_;
    case 75: return &tradeDate_;
    case 1: return &account_;
    case 660: return &acctIDSource_;
    case 581: return &accountType_;
    case 589: return &dayBookingInst_;
    case 590: return &bookingUnit_;
    case 591: return &preallocMethod_;
    case 70: return &allocID_;
    case 78: case 79: case 80: case 467: case 524: case 525: case 538: case 539: case 545: case 661: case 736: case 804: case 805:
      return allocsGroup_.field(tag);
    case 854: return &qtyType_;
    case 38: return &orderQty_;
    case 152: return &cashOrderQty_;
    case 516: return &orderPercent_;
    case 468: return &roundingDirection_;
    case 469: return &roundingModulus_;
    case 12: return &commission_;
    case 13: return &commType_;
    case 479: return &commCurrency_;
    case 497: return &fundRenewWaiv_;
    case 528: return &orderCapacity_;
    case 529: return &orderRestrictions_;
    case 582: return &custOrderCapacity_;
    case 121: return &forexReq_;
    case 120: return &settlCurrency_;
    case 775: return &bookingType_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    case 77: return &positionEffect_;
    case 203: return &coveredOrUncovered_;
    case 544: return &cashMargin_;
    case 635: return &clearingFeeIndicator_;
    case 377: return &solicitedFlag_;
    case 659: return &sideComplianceID_;
    default: return nullptr;
  }
}

int SidesGroupComp::write(int valBeg) {
  valBeg = side_.write(valBeg);
  valBeg = clOrdID_.write(valBeg);
  valBeg = secondaryClOrdID_.write(valBeg);
  valBeg = clOrdLinkID_.write(valBeg);
  valBeg = partyIDsGroup_.write(valBeg);
  valBeg = tradeOriginationDate_.write(valBeg);
  valBeg = tradeDate_.write(valBeg);
  valBeg = account_.write(valBeg);
  valBeg = acctIDSource_.write(valBeg);
  valBeg = accountType_.write(valBeg);
  valBeg = dayBookingInst_.write(valBeg);
  valBeg = bookingUnit_.write(valBeg);
  valBeg = preallocMethod_.write(valBeg);
  valBeg = allocID_.write(valBeg);
  valBeg = allocsGroup_.write(valBeg);
  valBeg = qtyType_.write(valBeg);
  valBeg = orderQty_.write(valBeg);
  valBeg = cashOrderQty_.write(valBeg);
  valBeg = orderPercent_.write(valBeg);
  valBeg = roundingDirection_.write(valBeg);
  valBeg = roundingModulus_.write(valBeg);
  valBeg = commission_.write(valBeg);
  valBeg = commType_.write(valBeg);
  valBeg = commCurrency_.write(valBeg);
  valBeg = fundRenewWaiv_.write(valBeg);
  valBeg = orderCapacity_.write(valBeg);
  valBeg = orderRestrictions_.write(valBeg);
  valBeg = custOrderCapacity_.write(valBeg);
  valBeg = forexReq_.write(valBeg);
  valBeg = settlCurrency_.write(valBeg);
  valBeg = bookingType_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  valBeg = positionEffect_.write(valBeg);
  valBeg = coveredOrUncovered_.write(valBeg);
  valBeg = cashMargin_.write(valBeg);
  valBeg = clearingFeeIndicator_.write(valBeg);
  valBeg = solicitedFlag_.write(valBeg);
  valBeg = sideComplianceID_.write(valBeg);
  return valBeg;
}

SidesGroup1Comp::SidesGroup1Comp(AbstractMessage* message)
    : Component(message),
    side_(message),
    origClOrdID_(message),
    clOrdID_(message),
    secondaryClOrdID_(message),
    clOrdLinkID_(message),
    origOrdModTime_(message),
    partyIDsGroup_(message),
    tradeOriginationDate_(message),
    tradeDate_(message),
    orderQty_(message),
    cashOrderQty_(message),
    orderPercent_(message),
    roundingDirection_(message),
    roundingModulus_(message),
    complianceID_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message) {}

AbstractField* SidesGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 54: return side_.map(version, bytes, fldBeg);
    case 41: return origClOrdID_.map(version, bytes, fldBeg);
    case 11: return clOrdID_.map(version, bytes, fldBeg);
    case 526: return secondaryClOrdID_.map(version, bytes, fldBeg);
    case 583: return clOrdLinkID_.map(version, bytes, fldBeg);
    case 586: return origOrdModTime_.map(version, bytes, fldBeg);
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.map(tag, fldBeg);
    case 229: return tradeOriginationDate_.map(version, bytes, fldBeg);
    case 75: return tradeDate_.map(version, bytes, fldBeg);
    case 38: return orderQty_.map(version, bytes, fldBeg);
    case 152: return cashOrderQty_.map(version, bytes, fldBeg);
    case 516: return orderPercent_.map(version, bytes, fldBeg);
    case 468: return roundingDirection_.map(version, bytes, fldBeg);
    case 469: return roundingModulus_.map(version, bytes, fldBeg);
    case 376: return complianceID_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* SidesGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 54: return &side_;
    case 41: return &origClOrdID_;
    case 11: return &clOrdID_;
    case 526: return &secondaryClOrdID_;
    case 583: return &clOrdLinkID_;
    case 586: return &origOrdModTime_;
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.field(tag);
    case 229: return &tradeOriginationDate_;
    case 75: return &tradeDate_;
    case 38: return &orderQty_;
    case 152: return &cashOrderQty_;
    case 516: return &orderPercent_;
    case 468: return &roundingDirection_;
    case 469: return &roundingModulus_;
    case 376: return &complianceID_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    default: return nullptr;
  }
}

int SidesGroup1Comp::write(int valBeg) {
  valBeg = side_.write(valBeg);
  valBeg = origClOrdID_.write(valBeg);
  valBeg = clOrdID_.write(valBeg);
  valBeg = secondaryClOrdID_.write(valBeg);
  valBeg = clOrdLinkID_.write(valBeg);
  valBeg = origOrdModTime_.write(valBeg);
  valBeg = partyIDsGroup_.write(valBeg);
  valBeg = tradeOriginationDate_.write(valBeg);
  valBeg = tradeDate_.write(valBeg);
  valBeg = orderQty_.write(valBeg);
  valBeg = cashOrderQty_.write(valBeg);
  valBeg = orderPercent_.write(valBeg);
  valBeg = roundingDirection_.write(valBeg);
  valBeg = roundingModulus_.write(valBeg);
  valBeg = complianceID_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  return valBeg;
}

SecurityTypesGroupComp::SecurityTypesGroupComp(AbstractMessage* message)
    : Component(message),
    securityType_(message),
    securitySubType_(message),
    product_(message),
    cFICode_(message) {}

AbstractField* SecurityTypesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* SecurityTypesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 460: return &product_;
    case 461: return &cFICode_;
    default: return nullptr;
  }
}

int SecurityTypesGroupComp::write(int valBeg) {
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  return valBeg;
}

LegsGroup5Comp::LegsGroup5Comp(AbstractMessage* message)
    : Component(message),
    legSymbol_(message),
    legSymbolSfx_(message),
    legSecurityID_(message),
    legSecurityIDSource_(message),
    legSecurityAltIDGroup_(message),
    legProduct_(message),
    legCFICode_(message),
    legSecurityType_(message),
    legSecuritySubType_(message),
    legMaturityMonthYear_(message),
    legMaturityDate_(message),
    legCouponPaymentDate_(message),
    legIssueDate_(message),
    legRepoCollateralSecurityType_(message),
    legRepurchaseTerm_(message),
    legRepurchaseRate_(message),
    legFactor_(message),
    legCreditRating_(message),
    legInstrRegistry_(message),
    legCountryOfIssue_(message),
    legStateOrProvinceOfIssue_(message),
    legLocaleOfIssue_(message),
    legRedemptionDate_(message),
    legStrikePrice_(message),
    legStrikeCurrency_(message),
    legOptAttribute_(message),
    legContractMultiplier_(message),
    legCouponRate_(message),
    legSecurityExchange_(message),
    legIssuer_(message),
    encodedLegIssuerLen_(message),
    encodedLegIssuer_(message),
    legSecurityDesc_(message),
    encodedLegSecurityDescLen_(message),
    encodedLegSecurityDesc_(message),
    legRatioQty_(message),
    legSide_(message),
    legCurrency_(message),
    legPool_(message),
    legDatedDate_(message),
    legContractSettlMonth_(message),
    legInterestAccrualDate_(message),
    legSwapType_(message),
    legSettlType_(message),
    legStipulationsGroup_(message),
    legBenchmarkCurveCurrency_(message),
    legBenchmarkCurveName_(message),
    legBenchmarkCurvePoint_(message),
    legBenchmarkPrice_(message),
    legBenchmarkPriceType_(message) {}

AbstractField* LegsGroup5Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 600: return legSymbol_.map(version, bytes, fldBeg);
    case 601: return legSymbolSfx_.map(version, bytes, fldBeg);
    case 602: return legSecurityID_.map(version, bytes, fldBeg);
    case 603: return legSecurityIDSource_.map(version, bytes, fldBeg);
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.map(tag, fldBeg);
    case 607: return legProduct_.map(version, bytes, fldBeg);
    case 608: return legCFICode_.map(version, bytes, fldBeg);
    case 609: return legSecurityType_.map(version, bytes, fldBeg);
    case 764: return legSecuritySubType_.map(version, bytes, fldBeg);
    case 610: return legMaturityMonthYear_.map(version, bytes, fldBeg);
    case 611: return legMaturityDate_.map(version, bytes, fldBeg);
    case 248: return legCouponPaymentDate_.map(version, bytes, fldBeg);
    case 249: return legIssueDate_.map(version, bytes, fldBeg);
    case 250: return legRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 251: return legRepurchaseTerm_.map(version, bytes, fldBeg);
    case 252: return legRepurchaseRate_.map(version, bytes, fldBeg);
    case 253: return legFactor_.map(version, bytes, fldBeg);
    case 257: return legCreditRating_.map(version, bytes, fldBeg);
    case 599: return legInstrRegistry_.map(version, bytes, fldBeg);
    case 596: return legCountryOfIssue_.map(version, bytes, fldBeg);
    case 597: return legStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 598: return legLocaleOfIssue_.map(version, bytes, fldBeg);
    case 254: return legRedemptionDate_.map(version, bytes, fldBeg);
    case 612: return legStrikePrice_.map(version, bytes, fldBeg);
    case 942: return legStrikeCurrency_.map(version, bytes, fldBeg);
    case 613: return legOptAttribute_.map(version, bytes, fldBeg);
    case 614: return legContractMultiplier_.map(version, bytes, fldBeg);
    case 615: return legCouponRate_.map(version, bytes, fldBeg);
    case 616: return legSecurityExchange_.map(version, bytes, fldBeg);
    case 617: return legIssuer_.map(version, bytes, fldBeg);
    case 618: return encodedLegIssuerLen_.map(version, bytes, fldBeg);
    case 619: return encodedLegIssuer_.map(version, bytes, fldBeg);
    case 620: return legSecurityDesc_.map(version, bytes, fldBeg);
    case 621: return encodedLegSecurityDescLen_.map(version, bytes, fldBeg);
    case 622: return encodedLegSecurityDesc_.map(version, bytes, fldBeg);
    case 623: return legRatioQty_.map(version, bytes, fldBeg);
    case 624: return legSide_.map(version, bytes, fldBeg);
    case 556: return legCurrency_.map(version, bytes, fldBeg);
    case 740: return legPool_.map(version, bytes, fldBeg);
    case 739: return legDatedDate_.map(version, bytes, fldBeg);
    case 955: return legContractSettlMonth_.map(version, bytes, fldBeg);
    case 956: return legInterestAccrualDate_.map(version, bytes, fldBeg);
    case 690: return legSwapType_.map(version, bytes, fldBeg);
    case 587: return legSettlType_.map(version, bytes, fldBeg);
    case 683: case 688: case 689:
      return legStipulationsGroup_.map(tag, fldBeg);
    case 676: return legBenchmarkCurveCurrency_.map(version, bytes, fldBeg);
    case 677: return legBenchmarkCurveName_.map(version, bytes, fldBeg);
    case 678: return legBenchmarkCurvePoint_.map(version, bytes, fldBeg);
    case 679: return legBenchmarkPrice_.map(version, bytes, fldBeg);
    case 680: return legBenchmarkPriceType_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegsGroup5Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 600: return &legSymbol_;
    case 601: return &legSymbolSfx_;
    case 602: return &legSecurityID_;
    case 603: return &legSecurityIDSource_;
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.field(tag);
    case 607: return &legProduct_;
    case 608: return &legCFICode_;
    case 609: return &legSecurityType_;
    case 764: return &legSecuritySubType_;
    case 610: return &legMaturityMonthYear_;
    case 611: return &legMaturityDate_;
    case 248: return &legCouponPaymentDate_;
    case 249: return &legIssueDate_;
    case 250: return &legRepoCollateralSecurityType_;
    case 251: return &legRepurchaseTerm_;
    case 252: return &legRepurchaseRate_;
    case 253: return &legFactor_;
    case 257: return &legCreditRating_;
    case 599: return &legInstrRegistry_;
    case 596: return &legCountryOfIssue_;
    case 597: return &legStateOrProvinceOfIssue_;
    case 598: return &legLocaleOfIssue_;
    case 254: return &legRedemptionDate_;
    case 612: return &legStrikePrice_;
    case 942: return &legStrikeCurrency_;
    case 613: return &legOptAttribute_;
    case 614: return &legContractMultiplier_;
    case 615: return &legCouponRate_;
    case 616: return &legSecurityExchange_;
    case 617: return &legIssuer_;
    case 618: return &encodedLegIssuerLen_;
    case 619: return &encodedLegIssuer_;
    case 620: return &legSecurityDesc_;
    case 621: return &encodedLegSecurityDescLen_;
    case 622: return &encodedLegSecurityDesc_;
    case 623: return &legRatioQty_;
    case 624: return &legSide_;
    case 556: return &legCurrency_;
    case 740: return &legPool_;
    case 739: return &legDatedDate_;
    case 955: return &legContractSettlMonth_;
    case 956: return &legInterestAccrualDate_;
    case 690: return &legSwapType_;
    case 587: return &legSettlType_;
    case 683: case 688: case 689:
      return legStipulationsGroup_.field(tag);
    case 676: return &legBenchmarkCurveCurrency_;
    case 677: return &legBenchmarkCurveName_;
    case 678: return &legBenchmarkCurvePoint_;
    case 679: return &legBenchmarkPrice_;
    case 680: return &legBenchmarkPriceType_;
    default: return nullptr;
  }
}

int LegsGroup5Comp::write(int valBeg) {
  valBeg = legSymbol_.write(valBeg);
  valBeg = legSymbolSfx_.write(valBeg);
  valBeg = legSecurityID_.write(valBeg);
  valBeg = legSecurityIDSource_.write(valBeg);
  valBeg = legSecurityAltIDGroup_.write(valBeg);
  valBeg = legProduct_.write(valBeg);
  valBeg = legCFICode_.write(valBeg);
  valBeg = legSecurityType_.write(valBeg);
  valBeg = legSecuritySubType_.write(valBeg);
  valBeg = legMaturityMonthYear_.write(valBeg);
  valBeg = legMaturityDate_.write(valBeg);
  valBeg = legCouponPaymentDate_.write(valBeg);
  valBeg = legIssueDate_.write(valBeg);
  valBeg = legRepoCollateralSecurityType_.write(valBeg);
  valBeg = legRepurchaseTerm_.write(valBeg);
  valBeg = legRepurchaseRate_.write(valBeg);
  valBeg = legFactor_.write(valBeg);
  valBeg = legCreditRating_.write(valBeg);
  valBeg = legInstrRegistry_.write(valBeg);
  valBeg = legCountryOfIssue_.write(valBeg);
  valBeg = legStateOrProvinceOfIssue_.write(valBeg);
  valBeg = legLocaleOfIssue_.write(valBeg);
  valBeg = legRedemptionDate_.write(valBeg);
  valBeg = legStrikePrice_.write(valBeg);
  valBeg = legStrikeCurrency_.write(valBeg);
  valBeg = legOptAttribute_.write(valBeg);
  valBeg = legContractMultiplier_.write(valBeg);
  valBeg = legCouponRate_.write(valBeg);
  valBeg = legSecurityExchange_.write(valBeg);
  valBeg = legIssuer_.write(valBeg);
  valBeg = encodedLegIssuerLen_.write(valBeg);
  valBeg = encodedLegIssuer_.write(valBeg);
  valBeg = legSecurityDesc_.write(valBeg);
  valBeg = encodedLegSecurityDescLen_.write(valBeg);
  valBeg = encodedLegSecurityDesc_.write(valBeg);
  valBeg = legRatioQty_.write(valBeg);
  valBeg = legSide_.write(valBeg);
  valBeg = legCurrency_.write(valBeg);
  valBeg = legPool_.write(valBeg);
  valBeg = legDatedDate_.write(valBeg);
  valBeg = legContractSettlMonth_.write(valBeg);
  valBeg = legInterestAccrualDate_.write(valBeg);
  valBeg = legSwapType_.write(valBeg);
  valBeg = legSettlType_.write(valBeg);
  valBeg = legStipulationsGroup_.write(valBeg);
  valBeg = legBenchmarkCurveCurrency_.write(valBeg);
  valBeg = legBenchmarkCurveName_.write(valBeg);
  valBeg = legBenchmarkCurvePoint_.write(valBeg);
  valBeg = legBenchmarkPrice_.write(valBeg);
  valBeg = legBenchmarkPriceType_.write(valBeg);
  return valBeg;
}

RelatedSymGroup3Comp::RelatedSymGroup3Comp(AbstractMessage* message)
    : Component(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    deliveryForm_(message),
    pctAtRisk_(message),
    instrAttribGroup_(message),
    agreementDesc_(message),
    agreementID_(message),
    agreementDate_(message),
    agreementCurrency_(message),
    terminationType_(message),
    startDate_(message),
    endDate_(message),
    deliveryType_(message),
    marginRatio_(message),
    underlyingsGroup_(message),
    currency_(message),
    stipulationsGroup_(message),
    legsGroup5_(message),
    spread_(message),
    benchmarkCurveCurrency_(message),
    benchmarkCurveName_(message),
    benchmarkCurvePoint_(message),
    benchmarkPrice_(message),
    benchmarkPriceType_(message),
    benchmarkSecurityID_(message),
    benchmarkSecurityIDSource_(message),
    yieldType_(message),
    yield_(message),
    yieldCalcDate_(message),
    yieldRedemptionDate_(message),
    yieldRedemptionPrice_(message),
    yieldRedemptionPriceType_(message),
    roundLot_(message),
    minTradeVol_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    expirationCycle_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message) {}

AbstractField* RelatedSymGroup3Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 668: return deliveryForm_.map(version, bytes, fldBeg);
    case 869: return pctAtRisk_.map(version, bytes, fldBeg);
    case 870: case 871: case 872:
      return instrAttribGroup_.map(tag, fldBeg);
    case 913: return agreementDesc_.map(version, bytes, fldBeg);
    case 914: return agreementID_.map(version, bytes, fldBeg);
    case 915: return agreementDate_.map(version, bytes, fldBeg);
    case 918: return agreementCurrency_.map(version, bytes, fldBeg);
    case 788: return terminationType_.map(version, bytes, fldBeg);
    case 916: return startDate_.map(version, bytes, fldBeg);
    case 917: return endDate_.map(version, bytes, fldBeg);
    case 919: return deliveryType_.map(version, bytes, fldBeg);
    case 898: return marginRatio_.map(version, bytes, fldBeg);
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.map(tag, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    case 232: case 233: case 234:
      return stipulationsGroup_.map(tag, fldBeg);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 587: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 676: case 677: case 678: case 679: case 680: case 683: case 688: case 689: case 690: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup5_.map(tag, fldBeg);
    case 218: return spread_.map(version, bytes, fldBeg);
    case 220: return benchmarkCurveCurrency_.map(version, bytes, fldBeg);
    case 221: return benchmarkCurveName_.map(version, bytes, fldBeg);
    case 222: return benchmarkCurvePoint_.map(version, bytes, fldBeg);
    case 662: return benchmarkPrice_.map(version, bytes, fldBeg);
    case 663: return benchmarkPriceType_.map(version, bytes, fldBeg);
    case 699: return benchmarkSecurityID_.map(version, bytes, fldBeg);
    case 761: return benchmarkSecurityIDSource_.map(version, bytes, fldBeg);
    case 235: return yieldType_.map(version, bytes, fldBeg);
    case 236: return yield_.map(version, bytes, fldBeg);
    case 701: return yieldCalcDate_.map(version, bytes, fldBeg);
    case 696: return yieldRedemptionDate_.map(version, bytes, fldBeg);
    case 697: return yieldRedemptionPrice_.map(version, bytes, fldBeg);
    case 698: return yieldRedemptionPriceType_.map(version, bytes, fldBeg);
    case 561: return roundLot_.map(version, bytes, fldBeg);
    case 562: return minTradeVol_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 827: return expirationCycle_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* RelatedSymGroup3Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 668: return &deliveryForm_;
    case 869: return &pctAtRisk_;
    case 870: case 871: case 872:
      return instrAttribGroup_.field(tag);
    case 913: return &agreementDesc_;
    case 914: return &agreementID_;
    case 915: return &agreementDate_;
    case 918: return &agreementCurrency_;
    case 788: return &terminationType_;
    case 916: return &startDate_;
    case 917: return &endDate_;
    case 919: return &deliveryType_;
    case 898: return &marginRatio_;
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.field(tag);
    case 15: return &currency_;
    case 232: case 233: case 234:
      return stipulationsGroup_.field(tag);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 587: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 676: case 677: case 678: case 679: case 680: case 683: case 688: case 689: case 690: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup5_.field(tag);
    case 218: return &spread_;
    case 220: return &benchmarkCurveCurrency_;
    case 221: return &benchmarkCurveName_;
    case 222: return &benchmarkCurvePoint_;
    case 662: return &benchmarkPrice_;
    case 663: return &benchmarkPriceType_;
    case 699: return &benchmarkSecurityID_;
    case 761: return &benchmarkSecurityIDSource_;
    case 235: return &yieldType_;
    case 236: return &yield_;
    case 701: return &yieldCalcDate_;
    case 696: return &yieldRedemptionDate_;
    case 697: return &yieldRedemptionPrice_;
    case 698: return &yieldRedemptionPriceType_;
    case 561: return &roundLot_;
    case 562: return &minTradeVol_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 827: return &expirationCycle_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    default: return nullptr;
  }
}

int RelatedSymGroup3Comp::write(int valBeg) {
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = deliveryForm_.write(valBeg);
  valBeg = pctAtRisk_.write(valBeg);
  valBeg = instrAttribGroup_.write(valBeg);
  valBeg = agreementDesc_.write(valBeg);
  valBeg = agreementID_.write(valBeg);
  valBeg = agreementDate_.write(valBeg);
  valBeg = agreementCurrency_.write(valBeg);
  valBeg = terminationType_.write(valBeg);
  valBeg = startDate_.write(valBeg);
  valBeg = endDate_.write(valBeg);
  valBeg = deliveryType_.write(valBeg);
  valBeg = marginRatio_.write(valBeg);
  valBeg = underlyingsGroup_.write(valBeg);
  valBeg = currency_.write(valBeg);
  valBeg = stipulationsGroup_.write(valBeg);
  valBeg = legsGroup5_.write(valBeg);
  valBeg = spread_.write(valBeg);
  valBeg = benchmarkCurveCurrency_.write(valBeg);
  valBeg = benchmarkCurveName_.write(valBeg);
  valBeg = benchmarkCurvePoint_.write(valBeg);
  valBeg = benchmarkPrice_.write(valBeg);
  valBeg = benchmarkPriceType_.write(valBeg);
  valBeg = benchmarkSecurityID_.write(valBeg);
  valBeg = benchmarkSecurityIDSource_.write(valBeg);
  valBeg = yieldType_.write(valBeg);
  valBeg = yield_.write(valBeg);
  valBeg = yieldCalcDate_.write(valBeg);
  valBeg = yieldRedemptionDate_.write(valBeg);
  valBeg = yieldRedemptionPrice_.write(valBeg);
  valBeg = yieldRedemptionPriceType_.write(valBeg);
  valBeg = roundLot_.write(valBeg);
  valBeg = minTradeVol_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = expirationCycle_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  return valBeg;
}

RelatedSymGroup4Comp::RelatedSymGroup4Comp(AbstractMessage* message)
    : Component(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    currency_(message),
    expirationCycle_(message),
    deliveryForm_(message),
    pctAtRisk_(message),
    instrAttribGroup_(message),
    legsGroup1_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message) {}

AbstractField* RelatedSymGroup4Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    case 827: return expirationCycle_.map(version, bytes, fldBeg);
    case 668: return deliveryForm_.map(version, bytes, fldBeg);
    case 869: return pctAtRisk_.map(version, bytes, fldBeg);
    case 870: case 871: case 872:
      return instrAttribGroup_.map(tag, fldBeg);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.map(tag, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* RelatedSymGroup4Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 15: return &currency_;
    case 827: return &expirationCycle_;
    case 668: return &deliveryForm_;
    case 869: return &pctAtRisk_;
    case 870: case 871: case 872:
      return instrAttribGroup_.field(tag);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.field(tag);
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    default: return nullptr;
  }
}

int RelatedSymGroup4Comp::write(int valBeg) {
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = currency_.write(valBeg);
  valBeg = expirationCycle_.write(valBeg);
  valBeg = deliveryForm_.write(valBeg);
  valBeg = pctAtRisk_.write(valBeg);
  valBeg = instrAttribGroup_.write(valBeg);
  valBeg = legsGroup1_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  return valBeg;
}

Nested3PartySubIDsGroupComp::Nested3PartySubIDsGroupComp(AbstractMessage* message)
    : Component(message),
    nested3PartySubID_(message),
    nested3PartySubIDType_(message) {}

AbstractField* Nested3PartySubIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 953: return nested3PartySubID_.map(version, bytes, fldBeg);
    case 954: return nested3PartySubIDType_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* Nested3PartySubIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 953: return &nested3PartySubID_;
    case 954: return &nested3PartySubIDType_;
    default: return nullptr;
  }
}

int Nested3PartySubIDsGroupComp::write(int valBeg) {
  valBeg = nested3PartySubID_.write(valBeg);
  valBeg = nested3PartySubIDType_.write(valBeg);
  return valBeg;
}

Nested3PartyIDsGroupComp::Nested3PartyIDsGroupComp(AbstractMessage* message)
    : Component(message),
    nested3PartyID_(message),
    nested3PartyIDSource_(message),
    nested3PartyRole_(message),
    nested3PartySubIDsGroup_(message) {}

AbstractField* Nested3PartyIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 949: return nested3PartyID_.map(version, bytes, fldBeg);
    case 950: return nested3PartyIDSource_.map(version, bytes, fldBeg);
    case 951: return nested3PartyRole_.map(version, bytes, fldBeg);
    case 952: case 953: case 954:
      return nested3PartySubIDsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* Nested3PartyIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 949: return &nested3PartyID_;
    case 950: return &nested3PartyIDSource_;
    case 951: return &nested3PartyRole_;
    case 952: case 953: case 954:
      return nested3PartySubIDsGroup_.field(tag);
    default: return nullptr;
  }
}

int Nested3PartyIDsGroupComp::write(int valBeg) {
  valBeg = nested3PartyID_.write(valBeg);
  valBeg = nested3PartyIDSource_.write(valBeg);
  valBeg = nested3PartyRole_.write(valBeg);
  valBeg = nested3PartySubIDsGroup_.write(valBeg);
  return valBeg;
}

AllocsGroup3Comp::AllocsGroup3Comp(AbstractMessage* message)
    : Component(message),
    allocAccount_(message),
    allocAcctIDSource_(message),
    allocSettlCurrency_(message),
    individualAllocID_(message),
    nested3PartyIDsGroup_(message),
    allocQty_(message) {}

AbstractField* AllocsGroup3Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 79: return allocAccount_.map(version, bytes, fldBeg);
    case 661: return allocAcctIDSource_.map(version, bytes, fldBeg);
    case 736: return allocSettlCurrency_.map(version, bytes, fldBeg);
    case 467: return individualAllocID_.map(version, bytes, fldBeg);
    case 948: case 949: case 950: case 951: case 952: case 953: case 954:
      return nested3PartyIDsGroup_.map(tag, fldBeg);
    case 80: return allocQty_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* AllocsGroup3Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 79: return &allocAccount_;
    case 661: return &allocAcctIDSource_;
    case 736: return &allocSettlCurrency_;
    case 467: return &individualAllocID_;
    case 948: case 949: case 950: case 951: case 952: case 953: case 954:
      return nested3PartyIDsGroup_.field(tag);
    case 80: return &allocQty_;
    default: return nullptr;
  }
}

int AllocsGroup3Comp::write(int valBeg) {
  valBeg = allocAccount_.write(valBeg);
  valBeg = allocAcctIDSource_.write(valBeg);
  valBeg = allocSettlCurrency_.write(valBeg);
  valBeg = individualAllocID_.write(valBeg);
  valBeg = nested3PartyIDsGroup_.write(valBeg);
  valBeg = allocQty_.write(valBeg);
  return valBeg;
}

LegAllocsGroupComp::LegAllocsGroupComp(AbstractMessage* message)
    : Component(message),
    legAllocAccount_(message),
    legIndividualAllocID_(message),
    nested2PartyIDsGroup_(message),
    legAllocQty_(message),
    legAllocAcctIDSource_(message),
    legSettlCurrency_(message) {}

AbstractField* LegAllocsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 671: return legAllocAccount_.map(version, bytes, fldBeg);
    case 672: return legIndividualAllocID_.map(version, bytes, fldBeg);
    case 756: case 757: case 758: case 759: case 760: case 806: case 807:
      return nested2PartyIDsGroup_.map(tag, fldBeg);
    case 673: return legAllocQty_.map(version, bytes, fldBeg);
    case 674: return legAllocAcctIDSource_.map(version, bytes, fldBeg);
    case 675: return legSettlCurrency_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegAllocsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 671: return &legAllocAccount_;
    case 672: return &legIndividualAllocID_;
    case 756: case 757: case 758: case 759: case 760: case 806: case 807:
      return nested2PartyIDsGroup_.field(tag);
    case 673: return &legAllocQty_;
    case 674: return &legAllocAcctIDSource_;
    case 675: return &legSettlCurrency_;
    default: return nullptr;
  }
}

int LegAllocsGroupComp::write(int valBeg) {
  valBeg = legAllocAccount_.write(valBeg);
  valBeg = legIndividualAllocID_.write(valBeg);
  valBeg = nested2PartyIDsGroup_.write(valBeg);
  valBeg = legAllocQty_.write(valBeg);
  valBeg = legAllocAcctIDSource_.write(valBeg);
  valBeg = legSettlCurrency_.write(valBeg);
  return valBeg;
}

LegsGroup6Comp::LegsGroup6Comp(AbstractMessage* message)
    : Component(message),
    legSymbol_(message),
    legSymbolSfx_(message),
    legSecurityID_(message),
    legSecurityIDSource_(message),
    legSecurityAltIDGroup_(message),
    legProduct_(message),
    legCFICode_(message),
    legSecurityType_(message),
    legSecuritySubType_(message),
    legMaturityMonthYear_(message),
    legMaturityDate_(message),
    legCouponPaymentDate_(message),
    legIssueDate_(message),
    legRepoCollateralSecurityType_(message),
    legRepurchaseTerm_(message),
    legRepurchaseRate_(message),
    legFactor_(message),
    legCreditRating_(message),
    legInstrRegistry_(message),
    legCountryOfIssue_(message),
    legStateOrProvinceOfIssue_(message),
    legLocaleOfIssue_(message),
    legRedemptionDate_(message),
    legStrikePrice_(message),
    legStrikeCurrency_(message),
    legOptAttribute_(message),
    legContractMultiplier_(message),
    legCouponRate_(message),
    legSecurityExchange_(message),
    legIssuer_(message),
    encodedLegIssuerLen_(message),
    encodedLegIssuer_(message),
    legSecurityDesc_(message),
    encodedLegSecurityDescLen_(message),
    encodedLegSecurityDesc_(message),
    legRatioQty_(message),
    legSide_(message),
    legCurrency_(message),
    legPool_(message),
    legDatedDate_(message),
    legContractSettlMonth_(message),
    legInterestAccrualDate_(message),
    legQty_(message),
    legSwapType_(message),
    legStipulationsGroup_(message),
    legAllocsGroup_(message),
    legPositionEffect_(message),
    legCoveredOrUncovered_(message),
    nestedPartyIDsGroup_(message),
    legRefID_(message),
    legPrice_(message),
    legSettlType_(message),
    legSettlDate_(message) {}

AbstractField* LegsGroup6Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 600: return legSymbol_.map(version, bytes, fldBeg);
    case 601: return legSymbolSfx_.map(version, bytes, fldBeg);
    case 602: return legSecurityID_.map(version, bytes, fldBeg);
    case 603: return legSecurityIDSource_.map(version, bytes, fldBeg);
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.map(tag, fldBeg);
    case 607: return legProduct_.map(version, bytes, fldBeg);
    case 608: return legCFICode_.map(version, bytes, fldBeg);
    case 609: return legSecurityType_.map(version, bytes, fldBeg);
    case 764: return legSecuritySubType_.map(version, bytes, fldBeg);
    case 610: return legMaturityMonthYear_.map(version, bytes, fldBeg);
    case 611: return legMaturityDate_.map(version, bytes, fldBeg);
    case 248: return legCouponPaymentDate_.map(version, bytes, fldBeg);
    case 249: return legIssueDate_.map(version, bytes, fldBeg);
    case 250: return legRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 251: return legRepurchaseTerm_.map(version, bytes, fldBeg);
    case 252: return legRepurchaseRate_.map(version, bytes, fldBeg);
    case 253: return legFactor_.map(version, bytes, fldBeg);
    case 257: return legCreditRating_.map(version, bytes, fldBeg);
    case 599: return legInstrRegistry_.map(version, bytes, fldBeg);
    case 596: return legCountryOfIssue_.map(version, bytes, fldBeg);
    case 597: return legStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 598: return legLocaleOfIssue_.map(version, bytes, fldBeg);
    case 254: return legRedemptionDate_.map(version, bytes, fldBeg);
    case 612: return legStrikePrice_.map(version, bytes, fldBeg);
    case 942: return legStrikeCurrency_.map(version, bytes, fldBeg);
    case 613: return legOptAttribute_.map(version, bytes, fldBeg);
    case 614: return legContractMultiplier_.map(version, bytes, fldBeg);
    case 615: return legCouponRate_.map(version, bytes, fldBeg);
    case 616: return legSecurityExchange_.map(version, bytes, fldBeg);
    case 617: return legIssuer_.map(version, bytes, fldBeg);
    case 618: return encodedLegIssuerLen_.map(version, bytes, fldBeg);
    case 619: return encodedLegIssuer_.map(version, bytes, fldBeg);
    case 620: return legSecurityDesc_.map(version, bytes, fldBeg);
    case 621: return encodedLegSecurityDescLen_.map(version, bytes, fldBeg);
    case 622: return encodedLegSecurityDesc_.map(version, bytes, fldBeg);
    case 623: return legRatioQty_.map(version, bytes, fldBeg);
    case 624: return legSide_.map(version, bytes, fldBeg);
    case 556: return legCurrency_.map(version, bytes, fldBeg);
    case 740: return legPool_.map(version, bytes, fldBeg);
    case 739: return legDatedDate_.map(version, bytes, fldBeg);
    case 955: return legContractSettlMonth_.map(version, bytes, fldBeg);
    case 956: return legInterestAccrualDate_.map(version, bytes, fldBeg);
    case 687: return legQty_.map(version, bytes, fldBeg);
    case 690: return legSwapType_.map(version, bytes, fldBeg);
    case 683: case 688: case 689:
      return legStipulationsGroup_.map(tag, fldBeg);
    case 670: case 671: case 672: case 673: case 674: case 675: case 756: case 757: case 758: case 759: case 760: case 806: case 807:
      return legAllocsGroup_.map(tag, fldBeg);
    case 564: return legPositionEffect_.map(version, bytes, fldBeg);
    case 565: return legCoveredOrUncovered_.map(version, bytes, fldBeg);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.map(tag, fldBeg);
    case 654: return legRefID_.map(version, bytes, fldBeg);
    case 566: return legPrice_.map(version, bytes, fldBeg);
    case 587: return legSettlType_.map(version, bytes, fldBeg);
    case 588: return legSettlDate_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegsGroup6Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 600: return &legSymbol_;
    case 601: return &legSymbolSfx_;
    case 602: return &legSecurityID_;
    case 603: return &legSecurityIDSource_;
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.field(tag);
    case 607: return &legProduct_;
    case 608: return &legCFICode_;
    case 609: return &legSecurityType_;
    case 764: return &legSecuritySubType_;
    case 610: return &legMaturityMonthYear_;
    case 611: return &legMaturityDate_;
    case 248: return &legCouponPaymentDate_;
    case 249: return &legIssueDate_;
    case 250: return &legRepoCollateralSecurityType_;
    case 251: return &legRepurchaseTerm_;
    case 252: return &legRepurchaseRate_;
    case 253: return &legFactor_;
    case 257: return &legCreditRating_;
    case 599: return &legInstrRegistry_;
    case 596: return &legCountryOfIssue_;
    case 597: return &legStateOrProvinceOfIssue_;
    case 598: return &legLocaleOfIssue_;
    case 254: return &legRedemptionDate_;
    case 612: return &legStrikePrice_;
    case 942: return &legStrikeCurrency_;
    case 613: return &legOptAttribute_;
    case 614: return &legContractMultiplier_;
    case 615: return &legCouponRate_;
    case 616: return &legSecurityExchange_;
    case 617: return &legIssuer_;
    case 618: return &encodedLegIssuerLen_;
    case 619: return &encodedLegIssuer_;
    case 620: return &legSecurityDesc_;
    case 621: return &encodedLegSecurityDescLen_;
    case 622: return &encodedLegSecurityDesc_;
    case 623: return &legRatioQty_;
    case 624: return &legSide_;
    case 556: return &legCurrency_;
    case 740: return &legPool_;
    case 739: return &legDatedDate_;
    case 955: return &legContractSettlMonth_;
    case 956: return &legInterestAccrualDate_;
    case 687: return &legQty_;
    case 690: return &legSwapType_;
    case 683: case 688: case 689:
      return legStipulationsGroup_.field(tag);
    case 670: case 671: case 672: case 673: case 674: case 675: case 756: case 757: case 758: case 759: case 760: case 806: case 807:
      return legAllocsGroup_.field(tag);
    case 564: return &legPositionEffect_;
    case 565: return &legCoveredOrUncovered_;
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.field(tag);
    case 654: return &legRefID_;
    case 566: return &legPrice_;
    case 587: return &legSettlType_;
    case 588: return &legSettlDate_;
    default: return nullptr;
  }
}

int LegsGroup6Comp::write(int valBeg) {
  valBeg = legSymbol_.write(valBeg);
  valBeg = legSymbolSfx_.write(valBeg);
  valBeg = legSecurityID_.write(valBeg);
  valBeg = legSecurityIDSource_.write(valBeg);
  valBeg = legSecurityAltIDGroup_.write(valBeg);
  valBeg = legProduct_.write(valBeg);
  valBeg = legCFICode_.write(valBeg);
  valBeg = legSecurityType_.write(valBeg);
  valBeg = legSecuritySubType_.write(valBeg);
  valBeg = legMaturityMonthYear_.write(valBeg);
  valBeg = legMaturityDate_.write(valBeg);
  valBeg = legCouponPaymentDate_.write(valBeg);
  valBeg = legIssueDate_.write(valBeg);
  valBeg = legRepoCollateralSecurityType_.write(valBeg);
  valBeg = legRepurchaseTerm_.write(valBeg);
  valBeg = legRepurchaseRate_.write(valBeg);
  valBeg = legFactor_.write(valBeg);
  valBeg = legCreditRating_.write(valBeg);
  valBeg = legInstrRegistry_.write(valBeg);
  valBeg = legCountryOfIssue_.write(valBeg);
  valBeg = legStateOrProvinceOfIssue_.write(valBeg);
  valBeg = legLocaleOfIssue_.write(valBeg);
  valBeg = legRedemptionDate_.write(valBeg);
  valBeg = legStrikePrice_.write(valBeg);
  valBeg = legStrikeCurrency_.write(valBeg);
  valBeg = legOptAttribute_.write(valBeg);
  valBeg = legContractMultiplier_.write(valBeg);
  valBeg = legCouponRate_.write(valBeg);
  valBeg = legSecurityExchange_.write(valBeg);
  valBeg = legIssuer_.write(valBeg);
  valBeg = encodedLegIssuerLen_.write(valBeg);
  valBeg = encodedLegIssuer_.write(valBeg);
  valBeg = legSecurityDesc_.write(valBeg);
  valBeg = encodedLegSecurityDescLen_.write(valBeg);
  valBeg = encodedLegSecurityDesc_.write(valBeg);
  valBeg = legRatioQty_.write(valBeg);
  valBeg = legSide_.write(valBeg);
  valBeg = legCurrency_.write(valBeg);
  valBeg = legPool_.write(valBeg);
  valBeg = legDatedDate_.write(valBeg);
  valBeg = legContractSettlMonth_.write(valBeg);
  valBeg = legInterestAccrualDate_.write(valBeg);
  valBeg = legQty_.write(valBeg);
  valBeg = legSwapType_.write(valBeg);
  valBeg = legStipulationsGroup_.write(valBeg);
  valBeg = legAllocsGroup_.write(valBeg);
  valBeg = legPositionEffect_.write(valBeg);
  valBeg = legCoveredOrUncovered_.write(valBeg);
  valBeg = nestedPartyIDsGroup_.write(valBeg);
  valBeg = legRefID_.write(valBeg);
  valBeg = legPrice_.write(valBeg);
  valBeg = legSettlType_.write(valBeg);
  valBeg = legSettlDate_.write(valBeg);
  return valBeg;
}

DatesGroupComp::DatesGroupComp(AbstractMessage* message)
    : Component(message),
    tradeDate_(message),
    transactTime_(message) {}

AbstractField* DatesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 75: return tradeDate_.map(version, bytes, fldBeg);
    case 60: return transactTime_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* DatesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 75: return &tradeDate_;
    case 60: return &transactTime_;
    default: return nullptr;
  }
}

int DatesGroupComp::write(int valBeg) {
  valBeg = tradeDate_.write(valBeg);
  valBeg = transactTime_.write(valBeg);
  return valBeg;
}

PosAmtGroupComp::PosAmtGroupComp(AbstractMessage* message)
    : Component(message),
    posAmtType_(message),
    posAmt_(message) {}

AbstractField* PosAmtGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 707: return posAmtType_.map(version, bytes, fldBeg);
    case 708: return posAmt_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* PosAmtGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 707: return &posAmtType_;
    case 708: return &posAmt_;
    default: return nullptr;
  }
}

int PosAmtGroupComp::write(int valBeg) {
  valBeg = posAmtType_.write(valBeg);
  valBeg = posAmt_.write(valBeg);
  return valBeg;
}

TrdRegTimestampsGroupComp::TrdRegTimestampsGroupComp(AbstractMessage* message)
    : Component(message),
    trdRegTimestamp_(message),
    trdRegTimestampType_(message),
    trdRegTimestampOrigin_(message) {}

AbstractField* TrdRegTimestampsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 769: return trdRegTimestamp_.map(version, bytes, fldBeg);
    case 770: return trdRegTimestampType_.map(version, bytes, fldBeg);
    case 771: return trdRegTimestampOrigin_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* TrdRegTimestampsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 769: return &trdRegTimestamp_;
    case 770: return &trdRegTimestampType_;
    case 771: return &trdRegTimestampOrigin_;
    default: return nullptr;
  }
}

int TrdRegTimestampsGroupComp::write(int valBeg) {
  valBeg = trdRegTimestamp_.write(valBeg);
  valBeg = trdRegTimestampType_.write(valBeg);
  valBeg = trdRegTimestampOrigin_.write(valBeg);
  return valBeg;
}

AllocsGroup4Comp::AllocsGroup4Comp(AbstractMessage* message)
    : Component(message),
    allocAccount_(message),
    allocAcctIDSource_(message),
    allocSettlCurrency_(message),
    individualAllocID_(message),
    nested2PartyIDsGroup_(message),
    allocQty_(message) {}

AbstractField* AllocsGroup4Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 79: return allocAccount_.map(version, bytes, fldBeg);
    case 661: return allocAcctIDSource_.map(version, bytes, fldBeg);
    case 736: return allocSettlCurrency_.map(version, bytes, fldBeg);
    case 467: return individualAllocID_.map(version, bytes, fldBeg);
    case 756: case 757: case 758: case 759: case 760: case 806: case 807:
      return nested2PartyIDsGroup_.map(tag, fldBeg);
    case 80: return allocQty_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* AllocsGroup4Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 79: return &allocAccount_;
    case 661: return &allocAcctIDSource_;
    case 736: return &allocSettlCurrency_;
    case 467: return &individualAllocID_;
    case 756: case 757: case 758: case 759: case 760: case 806: case 807:
      return nested2PartyIDsGroup_.field(tag);
    case 80: return &allocQty_;
    default: return nullptr;
  }
}

int AllocsGroup4Comp::write(int valBeg) {
  valBeg = allocAccount_.write(valBeg);
  valBeg = allocAcctIDSource_.write(valBeg);
  valBeg = allocSettlCurrency_.write(valBeg);
  valBeg = individualAllocID_.write(valBeg);
  valBeg = nested2PartyIDsGroup_.write(valBeg);
  valBeg = allocQty_.write(valBeg);
  return valBeg;
}

SidesGroup2Comp::SidesGroup2Comp(AbstractMessage* message)
    : Component(message),
    side_(message),
    orderID_(message),
    secondaryOrderID_(message),
    clOrdID_(message),
    secondaryClOrdID_(message),
    listID_(message),
    partyIDsGroup_(message),
    account_(message),
    acctIDSource_(message),
    accountType_(message),
    processCode_(message),
    oddLot_(message),
    clearingInstructionsGroup_(message),
    tradeInputSource_(message),
    tradeInputDevice_(message),
    orderInputDevice_(message),
    currency_(message),
    complianceID_(message),
    solicitedFlag_(message),
    orderCapacity_(message),
    orderRestrictions_(message),
    custOrderCapacity_(message),
    ordType_(message),
    execInst_(message),
    transBkdTime_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    timeBracket_(message),
    commission_(message),
    commType_(message),
    commCurrency_(message),
    fundRenewWaiv_(message),
    grossTradeAmt_(message),
    numDaysInterest_(message),
    exDate_(message),
    accruedInterestRate_(message),
    accruedInterestAmt_(message),
    interestAtMaturity_(message),
    endAccruedInterestAmt_(message),
    startCash_(message),
    endCash_(message),
    concession_(message),
    totalTakedown_(message),
    netMoney_(message),
    settlCurrAmt_(message),
    settlCurrency_(message),
    settlCurrFxRate_(message),
    settlCurrFxRateCalc_(message),
    positionEffect_(message),
    text_(message),
    encodedTextLen_(message),
    encodedText_(message),
    sideMultiLegReportingType_(message),
    contAmtsGroup_(message),
    stipulationsGroup_(message),
    miscFeesGroup_(message),
    exchangeRule_(message),
    tradeAllocIndicator_(message),
    preallocMethod_(message),
    allocID_(message),
    allocsGroup4_(message) {}

AbstractField* SidesGroup2Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 54: return side_.map(version, bytes, fldBeg);
    case 37: return orderID_.map(version, bytes, fldBeg);
    case 198: return secondaryOrderID_.map(version, bytes, fldBeg);
    case 11: return clOrdID_.map(version, bytes, fldBeg);
    case 526: return secondaryClOrdID_.map(version, bytes, fldBeg);
    case 66: return listID_.map(version, bytes, fldBeg);
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.map(tag, fldBeg);
    case 1: return account_.map(version, bytes, fldBeg);
    case 660: return acctIDSource_.map(version, bytes, fldBeg);
    case 581: return accountType_.map(version, bytes, fldBeg);
    case 81: return processCode_.map(version, bytes, fldBeg);
    case 575: return oddLot_.map(version, bytes, fldBeg);
    case 576: case 577:
      return clearingInstructionsGroup_.map(tag, fldBeg);
    case 578: return tradeInputSource_.map(version, bytes, fldBeg);
    case 579: return tradeInputDevice_.map(version, bytes, fldBeg);
    case 821: return orderInputDevice_.map(version, bytes, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    case 376: return complianceID_.map(version, bytes, fldBeg);
    case 377: return solicitedFlag_.map(version, bytes, fldBeg);
    case 528: return orderCapacity_.map(version, bytes, fldBeg);
    case 529: return orderRestrictions_.map(version, bytes, fldBeg);
    case 582: return custOrderCapacity_.map(version, bytes, fldBeg);
    case 40: return ordType_.map(version, bytes, fldBeg);
    case 18: return execInst_.map(version, bytes, fldBeg);
    case 483: return transBkdTime_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 943: return timeBracket_.map(version, bytes, fldBeg);
    case 12: return commission_.map(version, bytes, fldBeg);
    case 13: return commType_.map(version, bytes, fldBeg);
    case 479: return commCurrency_.map(version, bytes, fldBeg);
    case 497: return fundRenewWaiv_.map(version, bytes, fldBeg);
    case 381: return grossTradeAmt_.map(version, bytes, fldBeg);
    case 157: return numDaysInterest_.map(version, bytes, fldBeg);
    case 230: return exDate_.map(version, bytes, fldBeg);
    case 158: return accruedInterestRate_.map(version, bytes, fldBeg);
    case 159: return accruedInterestAmt_.map(version, bytes, fldBeg);
    case 738: return interestAtMaturity_.map(version, bytes, fldBeg);
    case 920: return endAccruedInterestAmt_.map(version, bytes, fldBeg);
    case 921: return startCash_.map(version, bytes, fldBeg);
    case 922: return endCash_.map(version, bytes, fldBeg);
    case 238: return concession_.map(version, bytes, fldBeg);
    case 237: return totalTakedown_.map(version, bytes, fldBeg);
    case 118: return netMoney_.map(version, bytes, fldBeg);
    case 119: return settlCurrAmt_.map(version, bytes, fldBeg);
    case 120: return settlCurrency_.map(version, bytes, fldBeg);
    case 155: return settlCurrFxRate_.map(version, bytes, fldBeg);
    case 156: return settlCurrFxRateCalc_.map(version, bytes, fldBeg);
    case 77: return positionEffect_.map(version, bytes, fldBeg);
    case 58: return text_.map(version, bytes, fldBeg);
    case 354: return encodedTextLen_.map(version, bytes, fldBeg);
    case 355: return encodedText_.map(version, bytes, fldBeg);
    case 752: return sideMultiLegReportingType_.map(version, bytes, fldBeg);
    case 518: case 519: case 520: case 521:
      return contAmtsGroup_.map(tag, fldBeg);
    case 232: case 233: case 234:
      return stipulationsGroup_.map(tag, fldBeg);
    case 136: case 137: case 138: case 139: case 891:
      return miscFeesGroup_.map(tag, fldBeg);
    case 825: return exchangeRule_.map(version, bytes, fldBeg);
    case 826: return tradeAllocIndicator_.map(version, bytes, fldBeg);
    case 591: return preallocMethod_.map(version, bytes, fldBeg);
    case 70: return allocID_.map(version, bytes, fldBeg);
    case 78: case 79: case 80: case 467: case 661: case 736: case 756: case 757: case 758: case 759: case 760: case 806: case 807:
      return allocsGroup4_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* SidesGroup2Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 54: return &side_;
    case 37: return &orderID_;
    case 198: return &secondaryOrderID_;
    case 11: return &clOrdID_;
    case 526: return &secondaryClOrdID_;
    case 66: return &listID_;
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.field(tag);
    case 1: return &account_;
    case 660: return &acctIDSource_;
    case 581: return &accountType_;
    case 81: return &processCode_;
    case 575: return &oddLot_;
    case 576: case 577:
      return clearingInstructionsGroup_.field(tag);
    case 578: return &tradeInputSource_;
    case 579: return &tradeInputDevice_;
    case 821: return &orderInputDevice_;
    case 15: return &currency_;
    case 376: return &complianceID_;
    case 377: return &solicitedFlag_;
    case 528: return &orderCapacity_;
    case 529: return &orderRestrictions_;
    case 582: return &custOrderCapacity_;
    case 40: return &ordType_;
    case 18: return &execInst_;
    case 483: return &transBkdTime_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 943: return &timeBracket_;
    case 12: return &commission_;
    case 13: return &commType_;
    case 479: return &commCurrency_;
    case 497: return &fundRenewWaiv_;
    case 381: return &grossTradeAmt_;
    case 157: return &numDaysInterest_;
    case 230: return &exDate_;
    case 158: return &accruedInterestRate_;
    case 159: return &accruedInterestAmt_;
    case 738: return &interestAtMaturity_;
    case 920: return &endAccruedInterestAmt_;
    case 921: return &startCash_;
    case 922: return &endCash_;
    case 238: return &concession_;
    case 237: return &totalTakedown_;
    case 118: return &netMoney_;
    case 119: return &settlCurrAmt_;
    case 120: return &settlCurrency_;
    case 155: return &settlCurrFxRate_;
    case 156: return &settlCurrFxRateCalc_;
    case 77: return &positionEffect_;
    case 58: return &text_;
    case 354: return &encodedTextLen_;
    case 355: return &encodedText_;
    case 752: return &sideMultiLegReportingType_;
    case 518: case 519: case 520: case 521:
      return contAmtsGroup_.field(tag);
    case 232: case 233: case 234:
      return stipulationsGroup_.field(tag);
    case 136: case 137: case 138: case 139: case 891:
      return miscFeesGroup_.field(tag);
    case 825: return &exchangeRule_;
    case 826: return &tradeAllocIndicator_;
    case 591: return &preallocMethod_;
    case 70: return &allocID_;
    case 78: case 79: case 80: case 467: case 661: case 736: case 756: case 757: case 758: case 759: case 760: case 806: case 807:
      return allocsGroup4_.field(tag);
    default: return nullptr;
  }
}

int SidesGroup2Comp::write(int valBeg) {
  valBeg = side_.write(valBeg);
  valBeg = orderID_.write(valBeg);
  valBeg = secondaryOrderID_.write(valBeg);
  valBeg = clOrdID_.write(valBeg);
  valBeg = secondaryClOrdID_.write(valBeg);
  valBeg = listID_.write(valBeg);
  valBeg = partyIDsGroup_.write(valBeg);
  valBeg = account_.write(valBeg);
  valBeg = acctIDSource_.write(valBeg);
  valBeg = accountType_.write(valBeg);
  valBeg = processCode_.write(valBeg);
  valBeg = oddLot_.write(valBeg);
  valBeg = clearingInstructionsGroup_.write(valBeg);
  valBeg = tradeInputSource_.write(valBeg);
  valBeg = tradeInputDevice_.write(valBeg);
  valBeg = orderInputDevice_.write(valBeg);
  valBeg = currency_.write(valBeg);
  valBeg = complianceID_.write(valBeg);
  valBeg = solicitedFlag_.write(valBeg);
  valBeg = orderCapacity_.write(valBeg);
  valBeg = orderRestrictions_.write(valBeg);
  valBeg = custOrderCapacity_.write(valBeg);
  valBeg = ordType_.write(valBeg);
  valBeg = execInst_.write(valBeg);
  valBeg = transBkdTime_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = timeBracket_.write(valBeg);
  valBeg = commission_.write(valBeg);
  valBeg = commType_.write(valBeg);
  valBeg = commCurrency_.write(valBeg);
  valBeg = fundRenewWaiv_.write(valBeg);
  valBeg = grossTradeAmt_.write(valBeg);
  valBeg = numDaysInterest_.write(valBeg);
  valBeg = exDate_.write(valBeg);
  valBeg = accruedInterestRate_.write(valBeg);
  valBeg = accruedInterestAmt_.write(valBeg);
  valBeg = interestAtMaturity_.write(valBeg);
  valBeg = endAccruedInterestAmt_.write(valBeg);
  valBeg = startCash_.write(valBeg);
  valBeg = endCash_.write(valBeg);
  valBeg = concession_.write(valBeg);
  valBeg = totalTakedown_.write(valBeg);
  valBeg = netMoney_.write(valBeg);
  valBeg = settlCurrAmt_.write(valBeg);
  valBeg = settlCurrency_.write(valBeg);
  valBeg = settlCurrFxRate_.write(valBeg);
  valBeg = settlCurrFxRateCalc_.write(valBeg);
  valBeg = positionEffect_.write(valBeg);
  valBeg = text_.write(valBeg);
  valBeg = encodedTextLen_.write(valBeg);
  valBeg = encodedText_.write(valBeg);
  valBeg = sideMultiLegReportingType_.write(valBeg);
  valBeg = contAmtsGroup_.write(valBeg);
  valBeg = stipulationsGroup_.write(valBeg);
  valBeg = miscFeesGroup_.write(valBeg);
  valBeg = exchangeRule_.write(valBeg);
  valBeg = tradeAllocIndicator_.write(valBeg);
  valBeg = preallocMethod_.write(valBeg);
  valBeg = allocID_.write(valBeg);
  valBeg = allocsGroup4_.write(valBeg);
  return valBeg;
}

RelatedSymGroup5Comp::RelatedSymGroup5Comp(AbstractMessage* message)
    : Component(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    agreementDesc_(message),
    agreementID_(message),
    agreementDate_(message),
    agreementCurrency_(message),
    terminationType_(message),
    startDate_(message),
    endDate_(message),
    deliveryType_(message),
    marginRatio_(message),
    underlyingsGroup_(message),
    prevClosePx_(message),
    quoteRequestType_(message),
    quoteType_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message),
    tradeOriginationDate_(message),
    side_(message),
    qtyType_(message),
    orderQty_(message),
    cashOrderQty_(message),
    orderPercent_(message),
    roundingDirection_(message),
    roundingModulus_(message),
    settlType_(message),
    settlDate_(message),
    settlDate2_(message),
    orderQty2_(message),
    currency_(message),
    stipulationsGroup_(message),
    account_(message),
    acctIDSource_(message),
    accountType_(message),
    legsGroup3_(message),
    quoteQualifiersGroup_(message),
    quotePriceType_(message),
    ordType_(message),
    expireTime_(message),
    transactTime_(message),
    spread_(message),
    benchmarkCurveCurrency_(message),
    benchmarkCurveName_(message),
    benchmarkCurvePoint_(message),
    benchmarkPrice_(message),
    benchmarkPriceType_(message),
    benchmarkSecurityID_(message),
    benchmarkSecurityIDSource_(message),
    priceType_(message),
    price_(message),
    price2_(message),
    yieldType_(message),
    yield_(message),
    yieldCalcDate_(message),
    yieldRedemptionDate_(message),
    yieldRedemptionPrice_(message),
    yieldRedemptionPriceType_(message),
    partyIDsGroup_(message) {}

AbstractField* RelatedSymGroup5Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 913: return agreementDesc_.map(version, bytes, fldBeg);
    case 914: return agreementID_.map(version, bytes, fldBeg);
    case 915: return agreementDate_.map(version, bytes, fldBeg);
    case 918: return agreementCurrency_.map(version, bytes, fldBeg);
    case 788: return terminationType_.map(version, bytes, fldBeg);
    case 916: return startDate_.map(version, bytes, fldBeg);
    case 917: return endDate_.map(version, bytes, fldBeg);
    case 919: return deliveryType_.map(version, bytes, fldBeg);
    case 898: return marginRatio_.map(version, bytes, fldBeg);
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.map(tag, fldBeg);
    case 140: return prevClosePx_.map(version, bytes, fldBeg);
    case 303: return quoteRequestType_.map(version, bytes, fldBeg);
    case 537: return quoteType_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    case 229: return tradeOriginationDate_.map(version, bytes, fldBeg);
    case 54: return side_.map(version, bytes, fldBeg);
    case 854: return qtyType_.map(version, bytes, fldBeg);
    case 38: return orderQty_.map(version, bytes, fldBeg);
    case 152: return cashOrderQty_.map(version, bytes, fldBeg);
    case 516: return orderPercent_.map(version, bytes, fldBeg);
    case 468: return roundingDirection_.map(version, bytes, fldBeg);
    case 469: return roundingModulus_.map(version, bytes, fldBeg);
    case 63: return settlType_.map(version, bytes, fldBeg);
    case 64: return settlDate_.map(version, bytes, fldBeg);
    case 193: return settlDate2_.map(version, bytes, fldBeg);
    case 192: return orderQty2_.map(version, bytes, fldBeg);
    case 15: return currency_.map(version, bytes, fldBeg);
    case 232: case 233: case 234:
      return stipulationsGroup_.map(tag, fldBeg);
    case 1: return account_.map(version, bytes, fldBeg);
    case 660: return acctIDSource_.map(version, bytes, fldBeg);
    case 581: return accountType_.map(version, bytes, fldBeg);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 524: case 525: case 538: case 539: case 545: case 555: case 556: case 587: case 588: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 676: case 677: case 678: case 679: case 680: case 683: case 687: case 688: case 689: case 690: case 739: case 740: case 764: case 804: case 805: case 942: case 955: case 956:
      return legsGroup3_.map(tag, fldBeg);
    case 695: case 735:
      return quoteQualifiersGroup_.map(tag, fldBeg);
    case 692: return quotePriceType_.map(version, bytes, fldBeg);
    case 40: return ordType_.map(version, bytes, fldBeg);
    case 126: return expireTime_.map(version, bytes, fldBeg);
    case 60: return transactTime_.map(version, bytes, fldBeg);
    case 218: return spread_.map(version, bytes, fldBeg);
    case 220: return benchmarkCurveCurrency_.map(version, bytes, fldBeg);
    case 221: return benchmarkCurveName_.map(version, bytes, fldBeg);
    case 222: return benchmarkCurvePoint_.map(version, bytes, fldBeg);
    case 662: return benchmarkPrice_.map(version, bytes, fldBeg);
    case 663: return benchmarkPriceType_.map(version, bytes, fldBeg);
    case 699: return benchmarkSecurityID_.map(version, bytes, fldBeg);
    case 761: return benchmarkSecurityIDSource_.map(version, bytes, fldBeg);
    case 423: return priceType_.map(version, bytes, fldBeg);
    case 44: return price_.map(version, bytes, fldBeg);
    case 640: return price2_.map(version, bytes, fldBeg);
    case 235: return yieldType_.map(version, bytes, fldBeg);
    case 236: return yield_.map(version, bytes, fldBeg);
    case 701: return yieldCalcDate_.map(version, bytes, fldBeg);
    case 696: return yieldRedemptionDate_.map(version, bytes, fldBeg);
    case 697: return yieldRedemptionPrice_.map(version, bytes, fldBeg);
    case 698: return yieldRedemptionPriceType_.map(version, bytes, fldBeg);
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* RelatedSymGroup5Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 913: return &agreementDesc_;
    case 914: return &agreementID_;
    case 915: return &agreementDate_;
    case 918: return &agreementCurrency_;
    case 788: return &terminationType_;
    case 916: return &startDate_;
    case 917: return &endDate_;
    case 919: return &deliveryType_;
    case 898: return &marginRatio_;
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.field(tag);
    case 140: return &prevClosePx_;
    case 303: return &quoteRequestType_;
    case 537: return &quoteType_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    case 229: return &tradeOriginationDate_;
    case 54: return &side_;
    case 854: return &qtyType_;
    case 38: return &orderQty_;
    case 152: return &cashOrderQty_;
    case 516: return &orderPercent_;
    case 468: return &roundingDirection_;
    case 469: return &roundingModulus_;
    case 63: return &settlType_;
    case 64: return &settlDate_;
    case 193: return &settlDate2_;
    case 192: return &orderQty2_;
    case 15: return &currency_;
    case 232: case 233: case 234:
      return stipulationsGroup_.field(tag);
    case 1: return &account_;
    case 660: return &acctIDSource_;
    case 581: return &accountType_;
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 524: case 525: case 538: case 539: case 545: case 555: case 556: case 587: case 588: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 676: case 677: case 678: case 679: case 680: case 683: case 687: case 688: case 689: case 690: case 739: case 740: case 764: case 804: case 805: case 942: case 955: case 956:
      return legsGroup3_.field(tag);
    case 695: case 735:
      return quoteQualifiersGroup_.field(tag);
    case 692: return &quotePriceType_;
    case 40: return &ordType_;
    case 126: return &expireTime_;
    case 60: return &transactTime_;
    case 218: return &spread_;
    case 220: return &benchmarkCurveCurrency_;
    case 221: return &benchmarkCurveName_;
    case 222: return &benchmarkCurvePoint_;
    case 662: return &benchmarkPrice_;
    case 663: return &benchmarkPriceType_;
    case 699: return &benchmarkSecurityID_;
    case 761: return &benchmarkSecurityIDSource_;
    case 423: return &priceType_;
    case 44: return &price_;
    case 640: return &price2_;
    case 235: return &yieldType_;
    case 236: return &yield_;
    case 701: return &yieldCalcDate_;
    case 696: return &yieldRedemptionDate_;
    case 697: return &yieldRedemptionPrice_;
    case 698: return &yieldRedemptionPriceType_;
    case 447: case 448: case 452: case 453: case 523: case 802: case 803:
      return partyIDsGroup_.field(tag);
    default: return nullptr;
  }
}

int RelatedSymGroup5Comp::write(int valBeg) {
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = agreementDesc_.write(valBeg);
  valBeg = agreementID_.write(valBeg);
  valBeg = agreementDate_.write(valBeg);
  valBeg = agreementCurrency_.write(valBeg);
  valBeg = terminationType_.write(valBeg);
  valBeg = startDate_.write(valBeg);
  valBeg = endDate_.write(valBeg);
  valBeg = deliveryType_.write(valBeg);
  valBeg = marginRatio_.write(valBeg);
  valBeg = underlyingsGroup_.write(valBeg);
  valBeg = prevClosePx_.write(valBeg);
  valBeg = quoteRequestType_.write(valBeg);
  valBeg = quoteType_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  valBeg = tradeOriginationDate_.write(valBeg);
  valBeg = side_.write(valBeg);
  valBeg = qtyType_.write(valBeg);
  valBeg = orderQty_.write(valBeg);
  valBeg = cashOrderQty_.write(valBeg);
  valBeg = orderPercent_.write(valBeg);
  valBeg = roundingDirection_.write(valBeg);
  valBeg = roundingModulus_.write(valBeg);
  valBeg = settlType_.write(valBeg);
  valBeg = settlDate_.write(valBeg);
  valBeg = settlDate2_.write(valBeg);
  valBeg = orderQty2_.write(valBeg);
  valBeg = currency_.write(valBeg);
  valBeg = stipulationsGroup_.write(valBeg);
  valBeg = account_.write(valBeg);
  valBeg = acctIDSource_.write(valBeg);
  valBeg = accountType_.write(valBeg);
  valBeg = legsGroup3_.write(valBeg);
  valBeg = quoteQualifiersGroup_.write(valBeg);
  valBeg = quotePriceType_.write(valBeg);
  valBeg = ordType_.write(valBeg);
  valBeg = expireTime_.write(valBeg);
  valBeg = transactTime_.write(valBeg);
  valBeg = spread_.write(valBeg);
  valBeg = benchmarkCurveCurrency_.write(valBeg);
  valBeg = benchmarkCurveName_.write(valBeg);
  valBeg = benchmarkCurvePoint_.write(valBeg);
  valBeg = benchmarkPrice_.write(valBeg);
  valBeg = benchmarkPriceType_.write(valBeg);
  valBeg = benchmarkSecurityID_.write(valBeg);
  valBeg = benchmarkSecurityIDSource_.write(valBeg);
  valBeg = priceType_.write(valBeg);
  valBeg = price_.write(valBeg);
  valBeg = price2_.write(valBeg);
  valBeg = yieldType_.write(valBeg);
  valBeg = yield_.write(valBeg);
  valBeg = yieldCalcDate_.write(valBeg);
  valBeg = yieldRedemptionDate_.write(valBeg);
  valBeg = yieldRedemptionPrice_.write(valBeg);
  valBeg = yieldRedemptionPriceType_.write(valBeg);
  valBeg = partyIDsGroup_.write(valBeg);
  return valBeg;
}

RelatedSymGroup6Comp::RelatedSymGroup6Comp(AbstractMessage* message)
    : Component(message),
    symbol_(message),
    symbolSfx_(message),
    securityID_(message),
    securityIDSource_(message),
    securityAltIDGroup_(message),
    product_(message),
    cFICode_(message),
    securityType_(message),
    securitySubType_(message),
    maturityMonthYear_(message),
    maturityDate_(message),
    putOrCall_(message),
    couponPaymentDate_(message),
    issueDate_(message),
    repoCollateralSecurityType_(message),
    repurchaseTerm_(message),
    repurchaseRate_(message),
    factor_(message),
    creditRating_(message),
    instrRegistry_(message),
    countryOfIssue_(message),
    stateOrProvinceOfIssue_(message),
    localeOfIssue_(message),
    redemptionDate_(message),
    strikePrice_(message),
    strikeCurrency_(message),
    optAttribute_(message),
    contractMultiplier_(message),
    couponRate_(message),
    securityExchange_(message),
    issuer_(message),
    encodedIssuerLen_(message),
    encodedIssuer_(message),
    securityDesc_(message),
    encodedSecurityDescLen_(message),
    encodedSecurityDesc_(message),
    pool_(message),
    contractSettlMonth_(message),
    cPProgram_(message),
    cPRegType_(message),
    eventsGroup_(message),
    datedDate_(message),
    interestAccrualDate_(message),
    underlyingsGroup_(message),
    legsGroup1_(message),
    prevClosePx_(message),
    quoteRequestType_(message),
    quoteType_(message),
    tradingSessionID_(message),
    tradingSessionSubID_(message) {}

AbstractField* RelatedSymGroup6Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 55: return symbol_.map(version, bytes, fldBeg);
    case 65: return symbolSfx_.map(version, bytes, fldBeg);
    case 48: return securityID_.map(version, bytes, fldBeg);
    case 22: return securityIDSource_.map(version, bytes, fldBeg);
    case 454: case 455: case 456:
      return securityAltIDGroup_.map(tag, fldBeg);
    case 460: return product_.map(version, bytes, fldBeg);
    case 461: return cFICode_.map(version, bytes, fldBeg);
    case 167: return securityType_.map(version, bytes, fldBeg);
    case 762: return securitySubType_.map(version, bytes, fldBeg);
    case 200: return maturityMonthYear_.map(version, bytes, fldBeg);
    case 541: return maturityDate_.map(version, bytes, fldBeg);
    case 201: return putOrCall_.map(version, bytes, fldBeg);
    case 224: return couponPaymentDate_.map(version, bytes, fldBeg);
    case 225: return issueDate_.map(version, bytes, fldBeg);
    case 239: return repoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 226: return repurchaseTerm_.map(version, bytes, fldBeg);
    case 227: return repurchaseRate_.map(version, bytes, fldBeg);
    case 228: return factor_.map(version, bytes, fldBeg);
    case 255: return creditRating_.map(version, bytes, fldBeg);
    case 543: return instrRegistry_.map(version, bytes, fldBeg);
    case 470: return countryOfIssue_.map(version, bytes, fldBeg);
    case 471: return stateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 472: return localeOfIssue_.map(version, bytes, fldBeg);
    case 240: return redemptionDate_.map(version, bytes, fldBeg);
    case 202: return strikePrice_.map(version, bytes, fldBeg);
    case 947: return strikeCurrency_.map(version, bytes, fldBeg);
    case 206: return optAttribute_.map(version, bytes, fldBeg);
    case 231: return contractMultiplier_.map(version, bytes, fldBeg);
    case 223: return couponRate_.map(version, bytes, fldBeg);
    case 207: return securityExchange_.map(version, bytes, fldBeg);
    case 106: return issuer_.map(version, bytes, fldBeg);
    case 348: return encodedIssuerLen_.map(version, bytes, fldBeg);
    case 349: return encodedIssuer_.map(version, bytes, fldBeg);
    case 107: return securityDesc_.map(version, bytes, fldBeg);
    case 350: return encodedSecurityDescLen_.map(version, bytes, fldBeg);
    case 351: return encodedSecurityDesc_.map(version, bytes, fldBeg);
    case 691: return pool_.map(version, bytes, fldBeg);
    case 667: return contractSettlMonth_.map(version, bytes, fldBeg);
    case 875: return cPProgram_.map(version, bytes, fldBeg);
    case 876: return cPRegType_.map(version, bytes, fldBeg);
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.map(tag, fldBeg);
    case 873: return datedDate_.map(version, bytes, fldBeg);
    case 874: return interestAccrualDate_.map(version, bytes, fldBeg);
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.map(tag, fldBeg);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.map(tag, fldBeg);
    case 140: return prevClosePx_.map(version, bytes, fldBeg);
    case 303: return quoteRequestType_.map(version, bytes, fldBeg);
    case 537: return quoteType_.map(version, bytes, fldBeg);
    case 336: return tradingSessionID_.map(version, bytes, fldBeg);
    case 625: return tradingSessionSubID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* RelatedSymGroup6Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 55: return &symbol_;
    case 65: return &symbolSfx_;
    case 48: return &securityID_;
    case 22: return &securityIDSource_;
    case 454: case 455: case 456:
      return securityAltIDGroup_.field(tag);
    case 460: return &product_;
    case 461: return &cFICode_;
    case 167: return &securityType_;
    case 762: return &securitySubType_;
    case 200: return &maturityMonthYear_;
    case 541: return &maturityDate_;
    case 201: return &putOrCall_;
    case 224: return &couponPaymentDate_;
    case 225: return &issueDate_;
    case 239: return &repoCollateralSecurityType_;
    case 226: return &repurchaseTerm_;
    case 227: return &repurchaseRate_;
    case 228: return &factor_;
    case 255: return &creditRating_;
    case 543: return &instrRegistry_;
    case 470: return &countryOfIssue_;
    case 471: return &stateOrProvinceOfIssue_;
    case 472: return &localeOfIssue_;
    case 240: return &redemptionDate_;
    case 202: return &strikePrice_;
    case 947: return &strikeCurrency_;
    case 206: return &optAttribute_;
    case 231: return &contractMultiplier_;
    case 223: return &couponRate_;
    case 207: return &securityExchange_;
    case 106: return &issuer_;
    case 348: return &encodedIssuerLen_;
    case 349: return &encodedIssuer_;
    case 107: return &securityDesc_;
    case 350: return &encodedSecurityDescLen_;
    case 351: return &encodedSecurityDesc_;
    case 691: return &pool_;
    case 667: return &contractSettlMonth_;
    case 875: return &cPProgram_;
    case 876: return &cPRegType_;
    case 864: case 865: case 866: case 867: case 868:
      return eventsGroup_.field(tag);
    case 873: return &datedDate_;
    case 874: return &interestAccrualDate_;
    case 241: case 242: case 243: case 244: case 245: case 246: case 247: case 256: case 305: case 306: case 307: case 308: case 309: case 310: case 311: case 312: case 313: case 315: case 316: case 317: case 318: case 362: case 363: case 364: case 365: case 435: case 436: case 457: case 458: case 459: case 462: case 463: case 542: case 592: case 593: case 594: case 595: case 711: case 763: case 810: case 877: case 878: case 879: case 882: case 883: case 884: case 885: case 886: case 887: case 888: case 889: case 941:
      return underlyingsGroup_.field(tag);
    case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 257: case 555: case 556: case 596: case 597: case 598: case 599: case 600: case 601: case 602: case 603: case 604: case 605: case 606: case 607: case 608: case 609: case 610: case 611: case 612: case 613: case 614: case 615: case 616: case 617: case 618: case 619: case 620: case 621: case 622: case 623: case 624: case 739: case 740: case 764: case 942: case 955: case 956:
      return legsGroup1_.field(tag);
    case 140: return &prevClosePx_;
    case 303: return &quoteRequestType_;
    case 537: return &quoteType_;
    case 336: return &tradingSessionID_;
    case 625: return &tradingSessionSubID_;
    default: return nullptr;
  }
}

int RelatedSymGroup6Comp::write(int valBeg) {
  valBeg = symbol_.write(valBeg);
  valBeg = symbolSfx_.write(valBeg);
  valBeg = securityID_.write(valBeg);
  valBeg = securityIDSource_.write(valBeg);
  valBeg = securityAltIDGroup_.write(valBeg);
  valBeg = product_.write(valBeg);
  valBeg = cFICode_.write(valBeg);
  valBeg = securityType_.write(valBeg);
  valBeg = securitySubType_.write(valBeg);
  valBeg = maturityMonthYear_.write(valBeg);
  valBeg = maturityDate_.write(valBeg);
  valBeg = putOrCall_.write(valBeg);
  valBeg = couponPaymentDate_.write(valBeg);
  valBeg = issueDate_.write(valBeg);
  valBeg = repoCollateralSecurityType_.write(valBeg);
  valBeg = repurchaseTerm_.write(valBeg);
  valBeg = repurchaseRate_.write(valBeg);
  valBeg = factor_.write(valBeg);
  valBeg = creditRating_.write(valBeg);
  valBeg = instrRegistry_.write(valBeg);
  valBeg = countryOfIssue_.write(valBeg);
  valBeg = stateOrProvinceOfIssue_.write(valBeg);
  valBeg = localeOfIssue_.write(valBeg);
  valBeg = redemptionDate_.write(valBeg);
  valBeg = strikePrice_.write(valBeg);
  valBeg = strikeCurrency_.write(valBeg);
  valBeg = optAttribute_.write(valBeg);
  valBeg = contractMultiplier_.write(valBeg);
  valBeg = couponRate_.write(valBeg);
  valBeg = securityExchange_.write(valBeg);
  valBeg = issuer_.write(valBeg);
  valBeg = encodedIssuerLen_.write(valBeg);
  valBeg = encodedIssuer_.write(valBeg);
  valBeg = securityDesc_.write(valBeg);
  valBeg = encodedSecurityDescLen_.write(valBeg);
  valBeg = encodedSecurityDesc_.write(valBeg);
  valBeg = pool_.write(valBeg);
  valBeg = contractSettlMonth_.write(valBeg);
  valBeg = cPProgram_.write(valBeg);
  valBeg = cPRegType_.write(valBeg);
  valBeg = eventsGroup_.write(valBeg);
  valBeg = datedDate_.write(valBeg);
  valBeg = interestAccrualDate_.write(valBeg);
  valBeg = underlyingsGroup_.write(valBeg);
  valBeg = legsGroup1_.write(valBeg);
  valBeg = prevClosePx_.write(valBeg);
  valBeg = quoteRequestType_.write(valBeg);
  valBeg = quoteType_.write(valBeg);
  valBeg = tradingSessionID_.write(valBeg);
  valBeg = tradingSessionSubID_.write(valBeg);
  return valBeg;
}

LegsGroup7Comp::LegsGroup7Comp(AbstractMessage* message)
    : Component(message),
    legSymbol_(message),
    legSymbolSfx_(message),
    legSecurityID_(message),
    legSecurityIDSource_(message),
    legSecurityAltIDGroup_(message),
    legProduct_(message),
    legCFICode_(message),
    legSecurityType_(message),
    legSecuritySubType_(message),
    legMaturityMonthYear_(message),
    legMaturityDate_(message),
    legCouponPaymentDate_(message),
    legIssueDate_(message),
    legRepoCollateralSecurityType_(message),
    legRepurchaseTerm_(message),
    legRepurchaseRate_(message),
    legFactor_(message),
    legCreditRating_(message),
    legInstrRegistry_(message),
    legCountryOfIssue_(message),
    legStateOrProvinceOfIssue_(message),
    legLocaleOfIssue_(message),
    legRedemptionDate_(message),
    legStrikePrice_(message),
    legStrikeCurrency_(message),
    legOptAttribute_(message),
    legContractMultiplier_(message),
    legCouponRate_(message),
    legSecurityExchange_(message),
    legIssuer_(message),
    encodedLegIssuerLen_(message),
    encodedLegIssuer_(message),
    legSecurityDesc_(message),
    encodedLegSecurityDescLen_(message),
    encodedLegSecurityDesc_(message),
    legRatioQty_(message),
    legSide_(message),
    legCurrency_(message),
    legPool_(message),
    legDatedDate_(message),
    legContractSettlMonth_(message),
    legInterestAccrualDate_(message),
    legQty_(message),
    legSwapType_(message),
    legSettlType_(message),
    legSettlDate_(message),
    legStipulationsGroup_(message),
    nestedPartyIDsGroup_(message) {}

AbstractField* LegsGroup7Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 600: return legSymbol_.map(version, bytes, fldBeg);
    case 601: return legSymbolSfx_.map(version, bytes, fldBeg);
    case 602: return legSecurityID_.map(version, bytes, fldBeg);
    case 603: return legSecurityIDSource_.map(version, bytes, fldBeg);
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.map(tag, fldBeg);
    case 607: return legProduct_.map(version, bytes, fldBeg);
    case 608: return legCFICode_.map(version, bytes, fldBeg);
    case 609: return legSecurityType_.map(version, bytes, fldBeg);
    case 764: return legSecuritySubType_.map(version, bytes, fldBeg);
    case 610: return legMaturityMonthYear_.map(version, bytes, fldBeg);
    case 611: return legMaturityDate_.map(version, bytes, fldBeg);
    case 248: return legCouponPaymentDate_.map(version, bytes, fldBeg);
    case 249: return legIssueDate_.map(version, bytes, fldBeg);
    case 250: return legRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 251: return legRepurchaseTerm_.map(version, bytes, fldBeg);
    case 252: return legRepurchaseRate_.map(version, bytes, fldBeg);
    case 253: return legFactor_.map(version, bytes, fldBeg);
    case 257: return legCreditRating_.map(version, bytes, fldBeg);
    case 599: return legInstrRegistry_.map(version, bytes, fldBeg);
    case 596: return legCountryOfIssue_.map(version, bytes, fldBeg);
    case 597: return legStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 598: return legLocaleOfIssue_.map(version, bytes, fldBeg);
    case 254: return legRedemptionDate_.map(version, bytes, fldBeg);
    case 612: return legStrikePrice_.map(version, bytes, fldBeg);
    case 942: return legStrikeCurrency_.map(version, bytes, fldBeg);
    case 613: return legOptAttribute_.map(version, bytes, fldBeg);
    case 614: return legContractMultiplier_.map(version, bytes, fldBeg);
    case 615: return legCouponRate_.map(version, bytes, fldBeg);
    case 616: return legSecurityExchange_.map(version, bytes, fldBeg);
    case 617: return legIssuer_.map(version, bytes, fldBeg);
    case 618: return encodedLegIssuerLen_.map(version, bytes, fldBeg);
    case 619: return encodedLegIssuer_.map(version, bytes, fldBeg);
    case 620: return legSecurityDesc_.map(version, bytes, fldBeg);
    case 621: return encodedLegSecurityDescLen_.map(version, bytes, fldBeg);
    case 622: return encodedLegSecurityDesc_.map(version, bytes, fldBeg);
    case 623: return legRatioQty_.map(version, bytes, fldBeg);
    case 624: return legSide_.map(version, bytes, fldBeg);
    case 556: return legCurrency_.map(version, bytes, fldBeg);
    case 740: return legPool_.map(version, bytes, fldBeg);
    case 739: return legDatedDate_.map(version, bytes, fldBeg);
    case 955: return legContractSettlMonth_.map(version, bytes, fldBeg);
    case 956: return legInterestAccrualDate_.map(version, bytes, fldBeg);
    case 687: return legQty_.map(version, bytes, fldBeg);
    case 690: return legSwapType_.map(version, bytes, fldBeg);
    case 587: return legSettlType_.map(version, bytes, fldBeg);
    case 588: return legSettlDate_.map(version, bytes, fldBeg);
    case 683: case 688: case 689:
      return legStipulationsGroup_.map(tag, fldBeg);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* LegsGroup7Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 600: return &legSymbol_;
    case 601: return &legSymbolSfx_;
    case 602: return &legSecurityID_;
    case 603: return &legSecurityIDSource_;
    case 604: case 605: case 606:
      return legSecurityAltIDGroup_.field(tag);
    case 607: return &legProduct_;
    case 608: return &legCFICode_;
    case 609: return &legSecurityType_;
    case 764: return &legSecuritySubType_;
    case 610: return &legMaturityMonthYear_;
    case 611: return &legMaturityDate_;
    case 248: return &legCouponPaymentDate_;
    case 249: return &legIssueDate_;
    case 250: return &legRepoCollateralSecurityType_;
    case 251: return &legRepurchaseTerm_;
    case 252: return &legRepurchaseRate_;
    case 253: return &legFactor_;
    case 257: return &legCreditRating_;
    case 599: return &legInstrRegistry_;
    case 596: return &legCountryOfIssue_;
    case 597: return &legStateOrProvinceOfIssue_;
    case 598: return &legLocaleOfIssue_;
    case 254: return &legRedemptionDate_;
    case 612: return &legStrikePrice_;
    case 942: return &legStrikeCurrency_;
    case 613: return &legOptAttribute_;
    case 614: return &legContractMultiplier_;
    case 615: return &legCouponRate_;
    case 616: return &legSecurityExchange_;
    case 617: return &legIssuer_;
    case 618: return &encodedLegIssuerLen_;
    case 619: return &encodedLegIssuer_;
    case 620: return &legSecurityDesc_;
    case 621: return &encodedLegSecurityDescLen_;
    case 622: return &encodedLegSecurityDesc_;
    case 623: return &legRatioQty_;
    case 624: return &legSide_;
    case 556: return &legCurrency_;
    case 740: return &legPool_;
    case 739: return &legDatedDate_;
    case 955: return &legContractSettlMonth_;
    case 956: return &legInterestAccrualDate_;
    case 687: return &legQty_;
    case 690: return &legSwapType_;
    case 587: return &legSettlType_;
    case 588: return &legSettlDate_;
    case 683: case 688: case 689:
      return legStipulationsGroup_.field(tag);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.field(tag);
    default: return nullptr;
  }
}

int LegsGroup7Comp::write(int valBeg) {
  valBeg = legSymbol_.write(valBeg);
  valBeg = legSymbolSfx_.write(valBeg);
  valBeg = legSecurityID_.write(valBeg);
  valBeg = legSecurityIDSource_.write(valBeg);
  valBeg = legSecurityAltIDGroup_.write(valBeg);
  valBeg = legProduct_.write(valBeg);
  valBeg = legCFICode_.write(valBeg);
  valBeg = legSecurityType_.write(valBeg);
  valBeg = legSecuritySubType_.write(valBeg);
  valBeg = legMaturityMonthYear_.write(valBeg);
  valBeg = legMaturityDate_.write(valBeg);
  valBeg = legCouponPaymentDate_.write(valBeg);
  valBeg = legIssueDate_.write(valBeg);
  valBeg = legRepoCollateralSecurityType_.write(valBeg);
  valBeg = legRepurchaseTerm_.write(valBeg);
  valBeg = legRepurchaseRate_.write(valBeg);
  valBeg = legFactor_.write(valBeg);
  valBeg = legCreditRating_.write(valBeg);
  valBeg = legInstrRegistry_.write(valBeg);
  valBeg = legCountryOfIssue_.write(valBeg);
  valBeg = legStateOrProvinceOfIssue_.write(valBeg);
  valBeg = legLocaleOfIssue_.write(valBeg);
  valBeg = legRedemptionDate_.write(valBeg);
  valBeg = legStrikePrice_.write(valBeg);
  valBeg = legStrikeCurrency_.write(valBeg);
  valBeg = legOptAttribute_.write(valBeg);
  valBeg = legContractMultiplier_.write(valBeg);
  valBeg = legCouponRate_.write(valBeg);
  valBeg = legSecurityExchange_.write(valBeg);
  valBeg = legIssuer_.write(valBeg);
  valBeg = encodedLegIssuerLen_.write(valBeg);
  valBeg = encodedLegIssuer_.write(valBeg);
  valBeg = legSecurityDesc_.write(valBeg);
  valBeg = encodedLegSecurityDescLen_.write(valBeg);
  valBeg = encodedLegSecurityDesc_.write(valBeg);
  valBeg = legRatioQty_.write(valBeg);
  valBeg = legSide_.write(valBeg);
  valBeg = legCurrency_.write(valBeg);
  valBeg = legPool_.write(valBeg);
  valBeg = legDatedDate_.write(valBeg);
  valBeg = legContractSettlMonth_.write(valBeg);
  valBeg = legInterestAccrualDate_.write(valBeg);
  valBeg = legQty_.write(valBeg);
  valBeg = legSwapType_.write(valBeg);
  valBeg = legSettlType_.write(valBeg);
  valBeg = legSettlDate_.write(valBeg);
  valBeg = legStipulationsGroup_.write(valBeg);
  valBeg = nestedPartyIDsGroup_.write(valBeg);
  return valBeg;
}

CapacitiesGroupComp::CapacitiesGroupComp(AbstractMessage* message)
    : Component(message),
    orderCapacity_(message),
    orderRestrictions_(message),
    orderCapacityQty_(message) {}

AbstractField* CapacitiesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 528: return orderCapacity_.map(version, bytes, fldBeg);
    case 529: return orderRestrictions_.map(version, bytes, fldBeg);
    case 863: return orderCapacityQty_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* CapacitiesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 528: return &orderCapacity_;
    case 529: return &orderRestrictions_;
    case 863: return &orderCapacityQty_;
    default: return nullptr;
  }
}

int CapacitiesGroupComp::write(int valBeg) {
  valBeg = orderCapacity_.write(valBeg);
  valBeg = orderRestrictions_.write(valBeg);
  valBeg = orderCapacityQty_.write(valBeg);
  return valBeg;
}

PositionsGroupComp::PositionsGroupComp(AbstractMessage* message)
    : Component(message),
    posType_(message),
    longQty_(message),
    shortQty_(message),
    posQtyStatus_(message),
    nestedPartyIDsGroup_(message) {}

AbstractField* PositionsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 703: return posType_.map(version, bytes, fldBeg);
    case 704: return longQty_.map(version, bytes, fldBeg);
    case 705: return shortQty_.map(version, bytes, fldBeg);
    case 706: return posQtyStatus_.map(version, bytes, fldBeg);
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.map(tag, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* PositionsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 703: return &posType_;
    case 704: return &longQty_;
    case 705: return &shortQty_;
    case 706: return &posQtyStatus_;
    case 524: case 525: case 538: case 539: case 545: case 804: case 805:
      return nestedPartyIDsGroup_.field(tag);
    default: return nullptr;
  }
}

int PositionsGroupComp::write(int valBeg) {
  valBeg = posType_.write(valBeg);
  valBeg = longQty_.write(valBeg);
  valBeg = shortQty_.write(valBeg);
  valBeg = posQtyStatus_.write(valBeg);
  valBeg = nestedPartyIDsGroup_.write(valBeg);
  return valBeg;
}

UnderlyingsGroup2Comp::UnderlyingsGroup2Comp(AbstractMessage* message)
    : Component(message),
    underlyingSymbol_(message),
    underlyingSymbolSfx_(message),
    underlyingSecurityID_(message),
    underlyingSecurityIDSource_(message),
    underlyingSecurityAltIDGroup_(message),
    underlyingProduct_(message),
    underlyingCFICode_(message),
    underlyingSecurityType_(message),
    underlyingSecuritySubType_(message),
    underlyingMaturityMonthYear_(message),
    underlyingMaturityDate_(message),
    underlyingPutOrCall_(message),
    underlyingCouponPaymentDate_(message),
    underlyingIssueDate_(message),
    underlyingRepoCollateralSecurityType_(message),
    underlyingRepurchaseTerm_(message),
    underlyingRepurchaseRate_(message),
    underlyingFactor_(message),
    underlyingCreditRating_(message),
    underlyingInstrRegistry_(message),
    underlyingCountryOfIssue_(message),
    underlyingStateOrProvinceOfIssue_(message),
    underlyingLocaleOfIssue_(message),
    underlyingRedemptionDate_(message),
    underlyingStrikePrice_(message),
    underlyingStrikeCurrency_(message),
    underlyingOptAttribute_(message),
    underlyingContractMultiplier_(message),
    underlyingCouponRate_(message),
    underlyingSecurityExchange_(message),
    underlyingIssuer_(message),
    encodedUnderlyingIssuerLen_(message),
    encodedUnderlyingIssuer_(message),
    underlyingSecurityDesc_(message),
    encodedUnderlyingSecurityDescLen_(message),
    encodedUnderlyingSecurityDesc_(message),
    underlyingCPProgram_(message),
    underlyingCPRegType_(message),
    underlyingCurrency_(message),
    underlyingQty_(message),
    underlyingPx_(message),
    underlyingDirtyPrice_(message),
    underlyingEndPrice_(message),
    underlyingStartValue_(message),
    underlyingCurrentValue_(message),
    underlyingEndValue_(message),
    underlyingStipsGroup_(message),
    underlyingSettlPrice_(message),
    underlyingSettlPriceType_(message) {}

AbstractField* UnderlyingsGroup2Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 311: return underlyingSymbol_.map(version, bytes, fldBeg);
    case 312: return underlyingSymbolSfx_.map(version, bytes, fldBeg);
    case 309: return underlyingSecurityID_.map(version, bytes, fldBeg);
    case 305: return underlyingSecurityIDSource_.map(version, bytes, fldBeg);
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.map(tag, fldBeg);
    case 462: return underlyingProduct_.map(version, bytes, fldBeg);
    case 463: return underlyingCFICode_.map(version, bytes, fldBeg);
    case 310: return underlyingSecurityType_.map(version, bytes, fldBeg);
    case 763: return underlyingSecuritySubType_.map(version, bytes, fldBeg);
    case 313: return underlyingMaturityMonthYear_.map(version, bytes, fldBeg);
    case 542: return underlyingMaturityDate_.map(version, bytes, fldBeg);
    case 315: return underlyingPutOrCall_.map(version, bytes, fldBeg);
    case 241: return underlyingCouponPaymentDate_.map(version, bytes, fldBeg);
    case 242: return underlyingIssueDate_.map(version, bytes, fldBeg);
    case 243: return underlyingRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 244: return underlyingRepurchaseTerm_.map(version, bytes, fldBeg);
    case 245: return underlyingRepurchaseRate_.map(version, bytes, fldBeg);
    case 246: return underlyingFactor_.map(version, bytes, fldBeg);
    case 256: return underlyingCreditRating_.map(version, bytes, fldBeg);
    case 595: return underlyingInstrRegistry_.map(version, bytes, fldBeg);
    case 592: return underlyingCountryOfIssue_.map(version, bytes, fldBeg);
    case 593: return underlyingStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 594: return underlyingLocaleOfIssue_.map(version, bytes, fldBeg);
    case 247: return underlyingRedemptionDate_.map(version, bytes, fldBeg);
    case 316: return underlyingStrikePrice_.map(version, bytes, fldBeg);
    case 941: return underlyingStrikeCurrency_.map(version, bytes, fldBeg);
    case 317: return underlyingOptAttribute_.map(version, bytes, fldBeg);
    case 436: return underlyingContractMultiplier_.map(version, bytes, fldBeg);
    case 435: return underlyingCouponRate_.map(version, bytes, fldBeg);
    case 308: return underlyingSecurityExchange_.map(version, bytes, fldBeg);
    case 306: return underlyingIssuer_.map(version, bytes, fldBeg);
    case 362: return encodedUnderlyingIssuerLen_.map(version, bytes, fldBeg);
    case 363: return encodedUnderlyingIssuer_.map(version, bytes, fldBeg);
    case 307: return underlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 364: return encodedUnderlyingSecurityDescLen_.map(version, bytes, fldBeg);
    case 365: return encodedUnderlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 877: return underlyingCPProgram_.map(version, bytes, fldBeg);
    case 878: return underlyingCPRegType_.map(version, bytes, fldBeg);
    case 318: return underlyingCurrency_.map(version, bytes, fldBeg);
    case 879: return underlyingQty_.map(version, bytes, fldBeg);
    case 810: return underlyingPx_.map(version, bytes, fldBeg);
    case 882: return underlyingDirtyPrice_.map(version, bytes, fldBeg);
    case 883: return underlyingEndPrice_.map(version, bytes, fldBeg);
    case 884: return underlyingStartValue_.map(version, bytes, fldBeg);
    case 885: return underlyingCurrentValue_.map(version, bytes, fldBeg);
    case 886: return underlyingEndValue_.map(version, bytes, fldBeg);
    case 887: case 888: case 889:
      return underlyingStipsGroup_.map(tag, fldBeg);
    case 732: return underlyingSettlPrice_.map(version, bytes, fldBeg);
    case 733: return underlyingSettlPriceType_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* UnderlyingsGroup2Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 311: return &underlyingSymbol_;
    case 312: return &underlyingSymbolSfx_;
    case 309: return &underlyingSecurityID_;
    case 305: return &underlyingSecurityIDSource_;
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.field(tag);
    case 462: return &underlyingProduct_;
    case 463: return &underlyingCFICode_;
    case 310: return &underlyingSecurityType_;
    case 763: return &underlyingSecuritySubType_;
    case 313: return &underlyingMaturityMonthYear_;
    case 542: return &underlyingMaturityDate_;
    case 315: return &underlyingPutOrCall_;
    case 241: return &underlyingCouponPaymentDate_;
    case 242: return &underlyingIssueDate_;
    case 243: return &underlyingRepoCollateralSecurityType_;
    case 244: return &underlyingRepurchaseTerm_;
    case 245: return &underlyingRepurchaseRate_;
    case 246: return &underlyingFactor_;
    case 256: return &underlyingCreditRating_;
    case 595: return &underlyingInstrRegistry_;
    case 592: return &underlyingCountryOfIssue_;
    case 593: return &underlyingStateOrProvinceOfIssue_;
    case 594: return &underlyingLocaleOfIssue_;
    case 247: return &underlyingRedemptionDate_;
    case 316: return &underlyingStrikePrice_;
    case 941: return &underlyingStrikeCurrency_;
    case 317: return &underlyingOptAttribute_;
    case 436: return &underlyingContractMultiplier_;
    case 435: return &underlyingCouponRate_;
    case 308: return &underlyingSecurityExchange_;
    case 306: return &underlyingIssuer_;
    case 362: return &encodedUnderlyingIssuerLen_;
    case 363: return &encodedUnderlyingIssuer_;
    case 307: return &underlyingSecurityDesc_;
    case 364: return &encodedUnderlyingSecurityDescLen_;
    case 365: return &encodedUnderlyingSecurityDesc_;
    case 877: return &underlyingCPProgram_;
    case 878: return &underlyingCPRegType_;
    case 318: return &underlyingCurrency_;
    case 879: return &underlyingQty_;
    case 810: return &underlyingPx_;
    case 882: return &underlyingDirtyPrice_;
    case 883: return &underlyingEndPrice_;
    case 884: return &underlyingStartValue_;
    case 885: return &underlyingCurrentValue_;
    case 886: return &underlyingEndValue_;
    case 887: case 888: case 889:
      return underlyingStipsGroup_.field(tag);
    case 732: return &underlyingSettlPrice_;
    case 733: return &underlyingSettlPriceType_;
    default: return nullptr;
  }
}

int UnderlyingsGroup2Comp::write(int valBeg) {
  valBeg = underlyingSymbol_.write(valBeg);
  valBeg = underlyingSymbolSfx_.write(valBeg);
  valBeg = underlyingSecurityID_.write(valBeg);
  valBeg = underlyingSecurityIDSource_.write(valBeg);
  valBeg = underlyingSecurityAltIDGroup_.write(valBeg);
  valBeg = underlyingProduct_.write(valBeg);
  valBeg = underlyingCFICode_.write(valBeg);
  valBeg = underlyingSecurityType_.write(valBeg);
  valBeg = underlyingSecuritySubType_.write(valBeg);
  valBeg = underlyingMaturityMonthYear_.write(valBeg);
  valBeg = underlyingMaturityDate_.write(valBeg);
  valBeg = underlyingPutOrCall_.write(valBeg);
  valBeg = underlyingCouponPaymentDate_.write(valBeg);
  valBeg = underlyingIssueDate_.write(valBeg);
  valBeg = underlyingRepoCollateralSecurityType_.write(valBeg);
  valBeg = underlyingRepurchaseTerm_.write(valBeg);
  valBeg = underlyingRepurchaseRate_.write(valBeg);
  valBeg = underlyingFactor_.write(valBeg);
  valBeg = underlyingCreditRating_.write(valBeg);
  valBeg = underlyingInstrRegistry_.write(valBeg);
  valBeg = underlyingCountryOfIssue_.write(valBeg);
  valBeg = underlyingStateOrProvinceOfIssue_.write(valBeg);
  valBeg = underlyingLocaleOfIssue_.write(valBeg);
  valBeg = underlyingRedemptionDate_.write(valBeg);
  valBeg = underlyingStrikePrice_.write(valBeg);
  valBeg = underlyingStrikeCurrency_.write(valBeg);
  valBeg = underlyingOptAttribute_.write(valBeg);
  valBeg = underlyingContractMultiplier_.write(valBeg);
  valBeg = underlyingCouponRate_.write(valBeg);
  valBeg = underlyingSecurityExchange_.write(valBeg);
  valBeg = underlyingIssuer_.write(valBeg);
  valBeg = encodedUnderlyingIssuerLen_.write(valBeg);
  valBeg = encodedUnderlyingIssuer_.write(valBeg);
  valBeg = underlyingSecurityDesc_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDescLen_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDesc_.write(valBeg);
  valBeg = underlyingCPProgram_.write(valBeg);
  valBeg = underlyingCPRegType_.write(valBeg);
  valBeg = underlyingCurrency_.write(valBeg);
  valBeg = underlyingQty_.write(valBeg);
  valBeg = underlyingPx_.write(valBeg);
  valBeg = underlyingDirtyPrice_.write(valBeg);
  valBeg = underlyingEndPrice_.write(valBeg);
  valBeg = underlyingStartValue_.write(valBeg);
  valBeg = underlyingCurrentValue_.write(valBeg);
  valBeg = underlyingEndValue_.write(valBeg);
  valBeg = underlyingStipsGroup_.write(valBeg);
  valBeg = underlyingSettlPrice_.write(valBeg);
  valBeg = underlyingSettlPriceType_.write(valBeg);
  return valBeg;
}

ExecsGroup1Comp::ExecsGroup1Comp(AbstractMessage* message)
    : Component(message),
    execID_(message) {}

AbstractField* ExecsGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 17: return execID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* ExecsGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 17: return &execID_;
    default: return nullptr;
  }
}

int ExecsGroup1Comp::write(int valBeg) {
  valBeg = execID_.write(valBeg);
  return valBeg;
}

TradesGroupComp::TradesGroupComp(AbstractMessage* message)
    : Component(message),
    tradeReportID_(message),
    secondaryTradeReportID_(message) {}

AbstractField* TradesGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 571: return tradeReportID_.map(version, bytes, fldBeg);
    case 818: return secondaryTradeReportID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* TradesGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 571: return &tradeReportID_;
    case 818: return &secondaryTradeReportID_;
    default: return nullptr;
  }
}

int TradesGroupComp::write(int valBeg) {
  valBeg = tradeReportID_.write(valBeg);
  valBeg = secondaryTradeReportID_.write(valBeg);
  return valBeg;
}

UnderlyingsGroup3Comp::UnderlyingsGroup3Comp(AbstractMessage* message)
    : Component(message),
    underlyingSymbol_(message),
    underlyingSymbolSfx_(message),
    underlyingSecurityID_(message),
    underlyingSecurityIDSource_(message),
    underlyingSecurityAltIDGroup_(message),
    underlyingProduct_(message),
    underlyingCFICode_(message),
    underlyingSecurityType_(message),
    underlyingSecuritySubType_(message),
    underlyingMaturityMonthYear_(message),
    underlyingMaturityDate_(message),
    underlyingPutOrCall_(message),
    underlyingCouponPaymentDate_(message),
    underlyingIssueDate_(message),
    underlyingRepoCollateralSecurityType_(message),
    underlyingRepurchaseTerm_(message),
    underlyingRepurchaseRate_(message),
    underlyingFactor_(message),
    underlyingCreditRating_(message),
    underlyingInstrRegistry_(message),
    underlyingCountryOfIssue_(message),
    underlyingStateOrProvinceOfIssue_(message),
    underlyingLocaleOfIssue_(message),
    underlyingRedemptionDate_(message),
    underlyingStrikePrice_(message),
    underlyingStrikeCurrency_(message),
    underlyingOptAttribute_(message),
    underlyingContractMultiplier_(message),
    underlyingCouponRate_(message),
    underlyingSecurityExchange_(message),
    underlyingIssuer_(message),
    encodedUnderlyingIssuerLen_(message),
    encodedUnderlyingIssuer_(message),
    underlyingSecurityDesc_(message),
    encodedUnderlyingSecurityDescLen_(message),
    encodedUnderlyingSecurityDesc_(message),
    underlyingCPProgram_(message),
    underlyingCPRegType_(message),
    underlyingCurrency_(message),
    underlyingQty_(message),
    underlyingPx_(message),
    underlyingDirtyPrice_(message),
    underlyingEndPrice_(message),
    underlyingStartValue_(message),
    underlyingCurrentValue_(message),
    underlyingEndValue_(message),
    underlyingStipsGroup_(message),
    collAction_(message) {}

AbstractField* UnderlyingsGroup3Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 311: return underlyingSymbol_.map(version, bytes, fldBeg);
    case 312: return underlyingSymbolSfx_.map(version, bytes, fldBeg);
    case 309: return underlyingSecurityID_.map(version, bytes, fldBeg);
    case 305: return underlyingSecurityIDSource_.map(version, bytes, fldBeg);
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.map(tag, fldBeg);
    case 462: return underlyingProduct_.map(version, bytes, fldBeg);
    case 463: return underlyingCFICode_.map(version, bytes, fldBeg);
    case 310: return underlyingSecurityType_.map(version, bytes, fldBeg);
    case 763: return underlyingSecuritySubType_.map(version, bytes, fldBeg);
    case 313: return underlyingMaturityMonthYear_.map(version, bytes, fldBeg);
    case 542: return underlyingMaturityDate_.map(version, bytes, fldBeg);
    case 315: return underlyingPutOrCall_.map(version, bytes, fldBeg);
    case 241: return underlyingCouponPaymentDate_.map(version, bytes, fldBeg);
    case 242: return underlyingIssueDate_.map(version, bytes, fldBeg);
    case 243: return underlyingRepoCollateralSecurityType_.map(version, bytes, fldBeg);
    case 244: return underlyingRepurchaseTerm_.map(version, bytes, fldBeg);
    case 245: return underlyingRepurchaseRate_.map(version, bytes, fldBeg);
    case 246: return underlyingFactor_.map(version, bytes, fldBeg);
    case 256: return underlyingCreditRating_.map(version, bytes, fldBeg);
    case 595: return underlyingInstrRegistry_.map(version, bytes, fldBeg);
    case 592: return underlyingCountryOfIssue_.map(version, bytes, fldBeg);
    case 593: return underlyingStateOrProvinceOfIssue_.map(version, bytes, fldBeg);
    case 594: return underlyingLocaleOfIssue_.map(version, bytes, fldBeg);
    case 247: return underlyingRedemptionDate_.map(version, bytes, fldBeg);
    case 316: return underlyingStrikePrice_.map(version, bytes, fldBeg);
    case 941: return underlyingStrikeCurrency_.map(version, bytes, fldBeg);
    case 317: return underlyingOptAttribute_.map(version, bytes, fldBeg);
    case 436: return underlyingContractMultiplier_.map(version, bytes, fldBeg);
    case 435: return underlyingCouponRate_.map(version, bytes, fldBeg);
    case 308: return underlyingSecurityExchange_.map(version, bytes, fldBeg);
    case 306: return underlyingIssuer_.map(version, bytes, fldBeg);
    case 362: return encodedUnderlyingIssuerLen_.map(version, bytes, fldBeg);
    case 363: return encodedUnderlyingIssuer_.map(version, bytes, fldBeg);
    case 307: return underlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 364: return encodedUnderlyingSecurityDescLen_.map(version, bytes, fldBeg);
    case 365: return encodedUnderlyingSecurityDesc_.map(version, bytes, fldBeg);
    case 877: return underlyingCPProgram_.map(version, bytes, fldBeg);
    case 878: return underlyingCPRegType_.map(version, bytes, fldBeg);
    case 318: return underlyingCurrency_.map(version, bytes, fldBeg);
    case 879: return underlyingQty_.map(version, bytes, fldBeg);
    case 810: return underlyingPx_.map(version, bytes, fldBeg);
    case 882: return underlyingDirtyPrice_.map(version, bytes, fldBeg);
    case 883: return underlyingEndPrice_.map(version, bytes, fldBeg);
    case 884: return underlyingStartValue_.map(version, bytes, fldBeg);
    case 885: return underlyingCurrentValue_.map(version, bytes, fldBeg);
    case 886: return underlyingEndValue_.map(version, bytes, fldBeg);
    case 887: case 888: case 889:
      return underlyingStipsGroup_.map(tag, fldBeg);
    case 944: return collAction_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* UnderlyingsGroup3Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 311: return &underlyingSymbol_;
    case 312: return &underlyingSymbolSfx_;
    case 309: return &underlyingSecurityID_;
    case 305: return &underlyingSecurityIDSource_;
    case 457: case 458: case 459:
      return underlyingSecurityAltIDGroup_.field(tag);
    case 462: return &underlyingProduct_;
    case 463: return &underlyingCFICode_;
    case 310: return &underlyingSecurityType_;
    case 763: return &underlyingSecuritySubType_;
    case 313: return &underlyingMaturityMonthYear_;
    case 542: return &underlyingMaturityDate_;
    case 315: return &underlyingPutOrCall_;
    case 241: return &underlyingCouponPaymentDate_;
    case 242: return &underlyingIssueDate_;
    case 243: return &underlyingRepoCollateralSecurityType_;
    case 244: return &underlyingRepurchaseTerm_;
    case 245: return &underlyingRepurchaseRate_;
    case 246: return &underlyingFactor_;
    case 256: return &underlyingCreditRating_;
    case 595: return &underlyingInstrRegistry_;
    case 592: return &underlyingCountryOfIssue_;
    case 593: return &underlyingStateOrProvinceOfIssue_;
    case 594: return &underlyingLocaleOfIssue_;
    case 247: return &underlyingRedemptionDate_;
    case 316: return &underlyingStrikePrice_;
    case 941: return &underlyingStrikeCurrency_;
    case 317: return &underlyingOptAttribute_;
    case 436: return &underlyingContractMultiplier_;
    case 435: return &underlyingCouponRate_;
    case 308: return &underlyingSecurityExchange_;
    case 306: return &underlyingIssuer_;
    case 362: return &encodedUnderlyingIssuerLen_;
    case 363: return &encodedUnderlyingIssuer_;
    case 307: return &underlyingSecurityDesc_;
    case 364: return &encodedUnderlyingSecurityDescLen_;
    case 365: return &encodedUnderlyingSecurityDesc_;
    case 877: return &underlyingCPProgram_;
    case 878: return &underlyingCPRegType_;
    case 318: return &underlyingCurrency_;
    case 879: return &underlyingQty_;
    case 810: return &underlyingPx_;
    case 882: return &underlyingDirtyPrice_;
    case 883: return &underlyingEndPrice_;
    case 884: return &underlyingStartValue_;
    case 885: return &underlyingCurrentValue_;
    case 886: return &underlyingEndValue_;
    case 887: case 888: case 889:
      return underlyingStipsGroup_.field(tag);
    case 944: return &collAction_;
    default: return nullptr;
  }
}

int UnderlyingsGroup3Comp::write(int valBeg) {
  valBeg = underlyingSymbol_.write(valBeg);
  valBeg = underlyingSymbolSfx_.write(valBeg);
  valBeg = underlyingSecurityID_.write(valBeg);
  valBeg = underlyingSecurityIDSource_.write(valBeg);
  valBeg = underlyingSecurityAltIDGroup_.write(valBeg);
  valBeg = underlyingProduct_.write(valBeg);
  valBeg = underlyingCFICode_.write(valBeg);
  valBeg = underlyingSecurityType_.write(valBeg);
  valBeg = underlyingSecuritySubType_.write(valBeg);
  valBeg = underlyingMaturityMonthYear_.write(valBeg);
  valBeg = underlyingMaturityDate_.write(valBeg);
  valBeg = underlyingPutOrCall_.write(valBeg);
  valBeg = underlyingCouponPaymentDate_.write(valBeg);
  valBeg = underlyingIssueDate_.write(valBeg);
  valBeg = underlyingRepoCollateralSecurityType_.write(valBeg);
  valBeg = underlyingRepurchaseTerm_.write(valBeg);
  valBeg = underlyingRepurchaseRate_.write(valBeg);
  valBeg = underlyingFactor_.write(valBeg);
  valBeg = underlyingCreditRating_.write(valBeg);
  valBeg = underlyingInstrRegistry_.write(valBeg);
  valBeg = underlyingCountryOfIssue_.write(valBeg);
  valBeg = underlyingStateOrProvinceOfIssue_.write(valBeg);
  valBeg = underlyingLocaleOfIssue_.write(valBeg);
  valBeg = underlyingRedemptionDate_.write(valBeg);
  valBeg = underlyingStrikePrice_.write(valBeg);
  valBeg = underlyingStrikeCurrency_.write(valBeg);
  valBeg = underlyingOptAttribute_.write(valBeg);
  valBeg = underlyingContractMultiplier_.write(valBeg);
  valBeg = underlyingCouponRate_.write(valBeg);
  valBeg = underlyingSecurityExchange_.write(valBeg);
  valBeg = underlyingIssuer_.write(valBeg);
  valBeg = encodedUnderlyingIssuerLen_.write(valBeg);
  valBeg = encodedUnderlyingIssuer_.write(valBeg);
  valBeg = underlyingSecurityDesc_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDescLen_.write(valBeg);
  valBeg = encodedUnderlyingSecurityDesc_.write(valBeg);
  valBeg = underlyingCPProgram_.write(valBeg);
  valBeg = underlyingCPRegType_.write(valBeg);
  valBeg = underlyingCurrency_.write(valBeg);
  valBeg = underlyingQty_.write(valBeg);
  valBeg = underlyingPx_.write(valBeg);
  valBeg = underlyingDirtyPrice_.write(valBeg);
  valBeg = underlyingEndPrice_.write(valBeg);
  valBeg = underlyingStartValue_.write(valBeg);
  valBeg = underlyingCurrentValue_.write(valBeg);
  valBeg = underlyingEndValue_.write(valBeg);
  valBeg = underlyingStipsGroup_.write(valBeg);
  valBeg = collAction_.write(valBeg);
  return valBeg;
}

CollInquiryQualifierGroupComp::CollInquiryQualifierGroupComp(AbstractMessage* message)
    : Component(message),
    collInquiryQualifier_(message) {}

AbstractField* CollInquiryQualifierGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 896: return collInquiryQualifier_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* CollInquiryQualifierGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 896: return &collInquiryQualifier_;
    default: return nullptr;
  }
}

int CollInquiryQualifierGroupComp::write(int valBeg) {
  valBeg = collInquiryQualifier_.write(valBeg);
  return valBeg;
}

CompIDsGroupComp::CompIDsGroupComp(AbstractMessage* message)
    : Component(message),
    refCompID_(message),
    refSubID_(message),
    locationID_(message),
    deskID_(message) {}

AbstractField* CompIDsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 930: return refCompID_.map(version, bytes, fldBeg);
    case 931: return refSubID_.map(version, bytes, fldBeg);
    case 283: return locationID_.map(version, bytes, fldBeg);
    case 284: return deskID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* CompIDsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 930: return &refCompID_;
    case 931: return &refSubID_;
    case 283: return &locationID_;
    case 284: return &deskID_;
    default: return nullptr;
  }
}

int CompIDsGroupComp::write(int valBeg) {
  valBeg = refCompID_.write(valBeg);
  valBeg = refSubID_.write(valBeg);
  valBeg = locationID_.write(valBeg);
  valBeg = deskID_.write(valBeg);
  return valBeg;
}

CompIDsGroup1Comp::CompIDsGroup1Comp(AbstractMessage* message)
    : Component(message),
    refCompID_(message),
    refSubID_(message),
    locationID_(message),
    deskID_(message),
    statusValue_(message),
    statusText_(message) {}

AbstractField* CompIDsGroup1Comp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 930: return refCompID_.map(version, bytes, fldBeg);
    case 931: return refSubID_.map(version, bytes, fldBeg);
    case 283: return locationID_.map(version, bytes, fldBeg);
    case 284: return deskID_.map(version, bytes, fldBeg);
    case 928: return statusValue_.map(version, bytes, fldBeg);
    case 929: return statusText_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* CompIDsGroup1Comp::field(const Tag& tag) {
  switch (tag.number) {
    case 930: return &refCompID_;
    case 931: return &refSubID_;
    case 283: return &locationID_;
    case 284: return &deskID_;
    case 928: return &statusValue_;
    case 929: return &statusText_;
    default: return nullptr;
  }
}

int CompIDsGroup1Comp::write(int valBeg) {
  valBeg = refCompID_.write(valBeg);
  valBeg = refSubID_.write(valBeg);
  valBeg = locationID_.write(valBeg);
  valBeg = deskID_.write(valBeg);
  valBeg = statusValue_.write(valBeg);
  valBeg = statusText_.write(valBeg);
  return valBeg;
}

HopsGroupComp::HopsGroupComp(AbstractMessage* message)
    : Component(message),
    hopCompID_(message),
    hopSendingTime_(message),
    hopRefID_(message) {}

AbstractField* HopsGroupComp::map(int tag, int fldBeg) {
  int64_t version = message_->version();
  const char* bytes = message_->bytes();
  switch (tag) {
    case 628: return hopCompID_.map(version, bytes, fldBeg);
    case 629: return hopSendingTime_.map(version, bytes, fldBeg);
    case 630: return hopRefID_.map(version, bytes, fldBeg);
    default: return message_->unknownField(fldBeg);
  }
}

AbstractField* HopsGroupComp::field(const Tag& tag) {
  switch (tag.number) {
    case 628: return &hopCompID_;
    case 629: return &hopSendingTime_;
    case 630: return &hopRefID_;
    default: return nullptr;
  }
}

int HopsGroupComp::write(int valBeg) {
  valBeg = hopCompID_.write(valBeg);
  valBeg = hopSendingTime_.write(valBeg);
  valBeg = hopRefID_.write(valBeg);
  return valBeg;
}

}  // namespace fix::gen::group

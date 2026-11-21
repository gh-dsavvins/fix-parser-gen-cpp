#pragma once

#include "fix/group.hpp"
#include "fix/gen/fields.hpp"
#include "fix/gen/tags.hpp"

namespace fix::gen::group {

class SecurityAltIDGroupComp : public Component {
 public:
  explicit SecurityAltIDGroupComp(AbstractMessage* message);

  field::SecurityAltID& securityAltID() { return securityAltID_; }
  field::SecurityAltIDSource& securityAltIDSource() { return securityAltIDSource_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::SecurityAltID securityAltID_;
  field::SecurityAltIDSource securityAltIDSource_;
};

class SecurityAltIDGroup : public AbstractGroup {
 public:
  explicit SecurityAltIDGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noSecurityAltID, &tags::securityAltID, [](AbstractMessage* m) -> Component* { return new SecurityAltIDGroupComp(m); }) {}

  LongRef& noSecurityAltID() { return countField_; }
  SecurityAltIDGroupComp& securityAltIDGroupComp(int ix) { return static_cast<SecurityAltIDGroupComp&>(*components_[ix]); }
};

class EventsGroupComp : public Component {
 public:
  explicit EventsGroupComp(AbstractMessage* message);

  field::EventType& eventType() { return eventType_; }
  field::EventDate& eventDate() { return eventDate_; }
  field::EventPx& eventPx() { return eventPx_; }
  field::EventText& eventText() { return eventText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::EventType eventType_;
  field::EventDate eventDate_;
  field::EventPx eventPx_;
  field::EventText eventText_;
};

class EventsGroup : public AbstractGroup {
 public:
  explicit EventsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noEvents, &tags::eventType, [](AbstractMessage* m) -> Component* { return new EventsGroupComp(m); }) {}

  LongRef& noEvents() { return countField_; }
  EventsGroupComp& eventsGroupComp(int ix) { return static_cast<EventsGroupComp&>(*components_[ix]); }
};

class UnderlyingSecurityAltIDGroupComp : public Component {
 public:
  explicit UnderlyingSecurityAltIDGroupComp(AbstractMessage* message);

  field::UnderlyingSecurityAltID& underlyingSecurityAltID() { return underlyingSecurityAltID_; }
  field::UnderlyingSecurityAltIDSource& underlyingSecurityAltIDSource() { return underlyingSecurityAltIDSource_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::UnderlyingSecurityAltID underlyingSecurityAltID_;
  field::UnderlyingSecurityAltIDSource underlyingSecurityAltIDSource_;
};

class UnderlyingSecurityAltIDGroup : public AbstractGroup {
 public:
  explicit UnderlyingSecurityAltIDGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noUnderlyingSecurityAltID, &tags::underlyingSecurityAltID, [](AbstractMessage* m) -> Component* { return new UnderlyingSecurityAltIDGroupComp(m); }) {}

  LongRef& noUnderlyingSecurityAltID() { return countField_; }
  UnderlyingSecurityAltIDGroupComp& underlyingSecurityAltIDGroupComp(int ix) { return static_cast<UnderlyingSecurityAltIDGroupComp&>(*components_[ix]); }
};

class UnderlyingStipsGroupComp : public Component {
 public:
  explicit UnderlyingStipsGroupComp(AbstractMessage* message);

  field::UnderlyingStipType& underlyingStipType() { return underlyingStipType_; }
  field::UnderlyingStipValue& underlyingStipValue() { return underlyingStipValue_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::UnderlyingStipType underlyingStipType_;
  field::UnderlyingStipValue underlyingStipValue_;
};

class UnderlyingStipsGroup : public AbstractGroup {
 public:
  explicit UnderlyingStipsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noUnderlyingStips, &tags::underlyingStipType, [](AbstractMessage* m) -> Component* { return new UnderlyingStipsGroupComp(m); }) {}

  LongRef& noUnderlyingStips() { return countField_; }
  UnderlyingStipsGroupComp& underlyingStipsGroupComp(int ix) { return static_cast<UnderlyingStipsGroupComp&>(*components_[ix]); }
};

class UnderlyingsGroupComp : public Component {
 public:
  explicit UnderlyingsGroupComp(AbstractMessage* message);

  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
  field::UnderlyingProduct& underlyingProduct() { return underlyingProduct_; }
  field::UnderlyingCFICode& underlyingCFICode() { return underlyingCFICode_; }
  field::UnderlyingSecurityType& underlyingSecurityType() { return underlyingSecurityType_; }
  field::UnderlyingSecuritySubType& underlyingSecuritySubType() { return underlyingSecuritySubType_; }
  field::UnderlyingMaturityMonthYear& underlyingMaturityMonthYear() { return underlyingMaturityMonthYear_; }
  field::UnderlyingMaturityDate& underlyingMaturityDate() { return underlyingMaturityDate_; }
  field::UnderlyingPutOrCall& underlyingPutOrCall() { return underlyingPutOrCall_; }
  field::UnderlyingCouponPaymentDate& underlyingCouponPaymentDate() { return underlyingCouponPaymentDate_; }
  field::UnderlyingIssueDate& underlyingIssueDate() { return underlyingIssueDate_; }
  field::UnderlyingRepoCollateralSecurityType& underlyingRepoCollateralSecurityType() { return underlyingRepoCollateralSecurityType_; }
  field::UnderlyingRepurchaseTerm& underlyingRepurchaseTerm() { return underlyingRepurchaseTerm_; }
  field::UnderlyingRepurchaseRate& underlyingRepurchaseRate() { return underlyingRepurchaseRate_; }
  field::UnderlyingFactor& underlyingFactor() { return underlyingFactor_; }
  field::UnderlyingCreditRating& underlyingCreditRating() { return underlyingCreditRating_; }
  field::UnderlyingInstrRegistry& underlyingInstrRegistry() { return underlyingInstrRegistry_; }
  field::UnderlyingCountryOfIssue& underlyingCountryOfIssue() { return underlyingCountryOfIssue_; }
  field::UnderlyingStateOrProvinceOfIssue& underlyingStateOrProvinceOfIssue() { return underlyingStateOrProvinceOfIssue_; }
  field::UnderlyingLocaleOfIssue& underlyingLocaleOfIssue() { return underlyingLocaleOfIssue_; }
  field::UnderlyingRedemptionDate& underlyingRedemptionDate() { return underlyingRedemptionDate_; }
  field::UnderlyingStrikePrice& underlyingStrikePrice() { return underlyingStrikePrice_; }
  field::UnderlyingStrikeCurrency& underlyingStrikeCurrency() { return underlyingStrikeCurrency_; }
  field::UnderlyingOptAttribute& underlyingOptAttribute() { return underlyingOptAttribute_; }
  field::UnderlyingContractMultiplier& underlyingContractMultiplier() { return underlyingContractMultiplier_; }
  field::UnderlyingCouponRate& underlyingCouponRate() { return underlyingCouponRate_; }
  field::UnderlyingSecurityExchange& underlyingSecurityExchange() { return underlyingSecurityExchange_; }
  field::UnderlyingIssuer& underlyingIssuer() { return underlyingIssuer_; }
  field::EncodedUnderlyingIssuerLen& encodedUnderlyingIssuerLen() { return encodedUnderlyingIssuerLen_; }
  field::EncodedUnderlyingIssuer& encodedUnderlyingIssuer() { return encodedUnderlyingIssuer_; }
  field::UnderlyingSecurityDesc& underlyingSecurityDesc() { return underlyingSecurityDesc_; }
  field::EncodedUnderlyingSecurityDescLen& encodedUnderlyingSecurityDescLen() { return encodedUnderlyingSecurityDescLen_; }
  field::EncodedUnderlyingSecurityDesc& encodedUnderlyingSecurityDesc() { return encodedUnderlyingSecurityDesc_; }
  field::UnderlyingCPProgram& underlyingCPProgram() { return underlyingCPProgram_; }
  field::UnderlyingCPRegType& underlyingCPRegType() { return underlyingCPRegType_; }
  field::UnderlyingCurrency& underlyingCurrency() { return underlyingCurrency_; }
  field::UnderlyingQty& underlyingQty() { return underlyingQty_; }
  field::UnderlyingPx& underlyingPx() { return underlyingPx_; }
  field::UnderlyingDirtyPrice& underlyingDirtyPrice() { return underlyingDirtyPrice_; }
  field::UnderlyingEndPrice& underlyingEndPrice() { return underlyingEndPrice_; }
  field::UnderlyingStartValue& underlyingStartValue() { return underlyingStartValue_; }
  field::UnderlyingCurrentValue& underlyingCurrentValue() { return underlyingCurrentValue_; }
  field::UnderlyingEndValue& underlyingEndValue() { return underlyingEndValue_; }
  UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::UnderlyingSymbol underlyingSymbol_;
  field::UnderlyingSymbolSfx underlyingSymbolSfx_;
  field::UnderlyingSecurityID underlyingSecurityID_;
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_;
  UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_;
  field::UnderlyingProduct underlyingProduct_;
  field::UnderlyingCFICode underlyingCFICode_;
  field::UnderlyingSecurityType underlyingSecurityType_;
  field::UnderlyingSecuritySubType underlyingSecuritySubType_;
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_;
  field::UnderlyingMaturityDate underlyingMaturityDate_;
  field::UnderlyingPutOrCall underlyingPutOrCall_;
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_;
  field::UnderlyingIssueDate underlyingIssueDate_;
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_;
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_;
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_;
  field::UnderlyingFactor underlyingFactor_;
  field::UnderlyingCreditRating underlyingCreditRating_;
  field::UnderlyingInstrRegistry underlyingInstrRegistry_;
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_;
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_;
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_;
  field::UnderlyingRedemptionDate underlyingRedemptionDate_;
  field::UnderlyingStrikePrice underlyingStrikePrice_;
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_;
  field::UnderlyingOptAttribute underlyingOptAttribute_;
  field::UnderlyingContractMultiplier underlyingContractMultiplier_;
  field::UnderlyingCouponRate underlyingCouponRate_;
  field::UnderlyingSecurityExchange underlyingSecurityExchange_;
  field::UnderlyingIssuer underlyingIssuer_;
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_;
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_;
  field::UnderlyingSecurityDesc underlyingSecurityDesc_;
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_;
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_;
  field::UnderlyingCPProgram underlyingCPProgram_;
  field::UnderlyingCPRegType underlyingCPRegType_;
  field::UnderlyingCurrency underlyingCurrency_;
  field::UnderlyingQty underlyingQty_;
  field::UnderlyingPx underlyingPx_;
  field::UnderlyingDirtyPrice underlyingDirtyPrice_;
  field::UnderlyingEndPrice underlyingEndPrice_;
  field::UnderlyingStartValue underlyingStartValue_;
  field::UnderlyingCurrentValue underlyingCurrentValue_;
  field::UnderlyingEndValue underlyingEndValue_;
  UnderlyingStipsGroup underlyingStipsGroup_;
};

class UnderlyingsGroup : public AbstractGroup {
 public:
  explicit UnderlyingsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noUnderlyings, &tags::underlyingSymbol, [](AbstractMessage* m) -> Component* { return new UnderlyingsGroupComp(m); }) {}

  LongRef& noUnderlyings() { return countField_; }
  UnderlyingsGroupComp& underlyingsGroupComp(int ix) { return static_cast<UnderlyingsGroupComp&>(*components_[ix]); }
};

class StipulationsGroupComp : public Component {
 public:
  explicit StipulationsGroupComp(AbstractMessage* message);

  field::StipulationType& stipulationType() { return stipulationType_; }
  field::StipulationValue& stipulationValue() { return stipulationValue_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::StipulationType stipulationType_;
  field::StipulationValue stipulationValue_;
};

class StipulationsGroup : public AbstractGroup {
 public:
  explicit StipulationsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noStipulations, &tags::stipulationType, [](AbstractMessage* m) -> Component* { return new StipulationsGroupComp(m); }) {}

  LongRef& noStipulations() { return countField_; }
  StipulationsGroupComp& stipulationsGroupComp(int ix) { return static_cast<StipulationsGroupComp&>(*components_[ix]); }
};

class LegSecurityAltIDGroupComp : public Component {
 public:
  explicit LegSecurityAltIDGroupComp(AbstractMessage* message);

  field::LegSecurityAltID& legSecurityAltID() { return legSecurityAltID_; }
  field::LegSecurityAltIDSource& legSecurityAltIDSource() { return legSecurityAltIDSource_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegSecurityAltID legSecurityAltID_;
  field::LegSecurityAltIDSource legSecurityAltIDSource_;
};

class LegSecurityAltIDGroup : public AbstractGroup {
 public:
  explicit LegSecurityAltIDGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegSecurityAltID, &tags::legSecurityAltID, [](AbstractMessage* m) -> Component* { return new LegSecurityAltIDGroupComp(m); }) {}

  LongRef& noLegSecurityAltID() { return countField_; }
  LegSecurityAltIDGroupComp& legSecurityAltIDGroupComp(int ix) { return static_cast<LegSecurityAltIDGroupComp&>(*components_[ix]); }
};

class LegStipulationsGroupComp : public Component {
 public:
  explicit LegStipulationsGroupComp(AbstractMessage* message);

  field::LegStipulationType& legStipulationType() { return legStipulationType_; }
  field::LegStipulationValue& legStipulationValue() { return legStipulationValue_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegStipulationType legStipulationType_;
  field::LegStipulationValue legStipulationValue_;
};

class LegStipulationsGroup : public AbstractGroup {
 public:
  explicit LegStipulationsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegStipulations, &tags::legStipulationType, [](AbstractMessage* m) -> Component* { return new LegStipulationsGroupComp(m); }) {}

  LongRef& noLegStipulations() { return countField_; }
  LegStipulationsGroupComp& legStipulationsGroupComp(int ix) { return static_cast<LegStipulationsGroupComp&>(*components_[ix]); }
};

class LegsGroupComp : public Component {
 public:
  explicit LegsGroupComp(AbstractMessage* message);

  field::LegSymbol& legSymbol() { return legSymbol_; }
  field::LegSymbolSfx& legSymbolSfx() { return legSymbolSfx_; }
  field::LegSecurityID& legSecurityID() { return legSecurityID_; }
  field::LegSecurityIDSource& legSecurityIDSource() { return legSecurityIDSource_; }
  LegSecurityAltIDGroup& legSecurityAltIDGroup() { return legSecurityAltIDGroup_; }
  field::LegProduct& legProduct() { return legProduct_; }
  field::LegCFICode& legCFICode() { return legCFICode_; }
  field::LegSecurityType& legSecurityType() { return legSecurityType_; }
  field::LegSecuritySubType& legSecuritySubType() { return legSecuritySubType_; }
  field::LegMaturityMonthYear& legMaturityMonthYear() { return legMaturityMonthYear_; }
  field::LegMaturityDate& legMaturityDate() { return legMaturityDate_; }
  field::LegCouponPaymentDate& legCouponPaymentDate() { return legCouponPaymentDate_; }
  field::LegIssueDate& legIssueDate() { return legIssueDate_; }
  field::LegRepoCollateralSecurityType& legRepoCollateralSecurityType() { return legRepoCollateralSecurityType_; }
  field::LegRepurchaseTerm& legRepurchaseTerm() { return legRepurchaseTerm_; }
  field::LegRepurchaseRate& legRepurchaseRate() { return legRepurchaseRate_; }
  field::LegFactor& legFactor() { return legFactor_; }
  field::LegCreditRating& legCreditRating() { return legCreditRating_; }
  field::LegInstrRegistry& legInstrRegistry() { return legInstrRegistry_; }
  field::LegCountryOfIssue& legCountryOfIssue() { return legCountryOfIssue_; }
  field::LegStateOrProvinceOfIssue& legStateOrProvinceOfIssue() { return legStateOrProvinceOfIssue_; }
  field::LegLocaleOfIssue& legLocaleOfIssue() { return legLocaleOfIssue_; }
  field::LegRedemptionDate& legRedemptionDate() { return legRedemptionDate_; }
  field::LegStrikePrice& legStrikePrice() { return legStrikePrice_; }
  field::LegStrikeCurrency& legStrikeCurrency() { return legStrikeCurrency_; }
  field::LegOptAttribute& legOptAttribute() { return legOptAttribute_; }
  field::LegContractMultiplier& legContractMultiplier() { return legContractMultiplier_; }
  field::LegCouponRate& legCouponRate() { return legCouponRate_; }
  field::LegSecurityExchange& legSecurityExchange() { return legSecurityExchange_; }
  field::LegIssuer& legIssuer() { return legIssuer_; }
  field::EncodedLegIssuerLen& encodedLegIssuerLen() { return encodedLegIssuerLen_; }
  field::EncodedLegIssuer& encodedLegIssuer() { return encodedLegIssuer_; }
  field::LegSecurityDesc& legSecurityDesc() { return legSecurityDesc_; }
  field::EncodedLegSecurityDescLen& encodedLegSecurityDescLen() { return encodedLegSecurityDescLen_; }
  field::EncodedLegSecurityDesc& encodedLegSecurityDesc() { return encodedLegSecurityDesc_; }
  field::LegRatioQty& legRatioQty() { return legRatioQty_; }
  field::LegSide& legSide() { return legSide_; }
  field::LegCurrency& legCurrency() { return legCurrency_; }
  field::LegPool& legPool() { return legPool_; }
  field::LegDatedDate& legDatedDate() { return legDatedDate_; }
  field::LegContractSettlMonth& legContractSettlMonth() { return legContractSettlMonth_; }
  field::LegInterestAccrualDate& legInterestAccrualDate() { return legInterestAccrualDate_; }
  field::LegIOIQty& legIOIQty() { return legIOIQty_; }
  LegStipulationsGroup& legStipulationsGroup() { return legStipulationsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegSymbol legSymbol_;
  field::LegSymbolSfx legSymbolSfx_;
  field::LegSecurityID legSecurityID_;
  field::LegSecurityIDSource legSecurityIDSource_;
  LegSecurityAltIDGroup legSecurityAltIDGroup_;
  field::LegProduct legProduct_;
  field::LegCFICode legCFICode_;
  field::LegSecurityType legSecurityType_;
  field::LegSecuritySubType legSecuritySubType_;
  field::LegMaturityMonthYear legMaturityMonthYear_;
  field::LegMaturityDate legMaturityDate_;
  field::LegCouponPaymentDate legCouponPaymentDate_;
  field::LegIssueDate legIssueDate_;
  field::LegRepoCollateralSecurityType legRepoCollateralSecurityType_;
  field::LegRepurchaseTerm legRepurchaseTerm_;
  field::LegRepurchaseRate legRepurchaseRate_;
  field::LegFactor legFactor_;
  field::LegCreditRating legCreditRating_;
  field::LegInstrRegistry legInstrRegistry_;
  field::LegCountryOfIssue legCountryOfIssue_;
  field::LegStateOrProvinceOfIssue legStateOrProvinceOfIssue_;
  field::LegLocaleOfIssue legLocaleOfIssue_;
  field::LegRedemptionDate legRedemptionDate_;
  field::LegStrikePrice legStrikePrice_;
  field::LegStrikeCurrency legStrikeCurrency_;
  field::LegOptAttribute legOptAttribute_;
  field::LegContractMultiplier legContractMultiplier_;
  field::LegCouponRate legCouponRate_;
  field::LegSecurityExchange legSecurityExchange_;
  field::LegIssuer legIssuer_;
  field::EncodedLegIssuerLen encodedLegIssuerLen_;
  field::EncodedLegIssuer encodedLegIssuer_;
  field::LegSecurityDesc legSecurityDesc_;
  field::EncodedLegSecurityDescLen encodedLegSecurityDescLen_;
  field::EncodedLegSecurityDesc encodedLegSecurityDesc_;
  field::LegRatioQty legRatioQty_;
  field::LegSide legSide_;
  field::LegCurrency legCurrency_;
  field::LegPool legPool_;
  field::LegDatedDate legDatedDate_;
  field::LegContractSettlMonth legContractSettlMonth_;
  field::LegInterestAccrualDate legInterestAccrualDate_;
  field::LegIOIQty legIOIQty_;
  LegStipulationsGroup legStipulationsGroup_;
};

class LegsGroup : public AbstractGroup {
 public:
  explicit LegsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegs, &tags::legSymbol, [](AbstractMessage* m) -> Component* { return new LegsGroupComp(m); }) {}

  LongRef& noLegs() { return countField_; }
  LegsGroupComp& legsGroupComp(int ix) { return static_cast<LegsGroupComp&>(*components_[ix]); }
};

class IOIQualifiersGroupComp : public Component {
 public:
  explicit IOIQualifiersGroupComp(AbstractMessage* message);

  field::IOIQualifier& iOIQualifier() { return iOIQualifier_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::IOIQualifier iOIQualifier_;
};

class IOIQualifiersGroup : public AbstractGroup {
 public:
  explicit IOIQualifiersGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noIOIQualifiers, &tags::iOIQualifier, [](AbstractMessage* m) -> Component* { return new IOIQualifiersGroupComp(m); }) {}

  LongRef& noIOIQualifiers() { return countField_; }
  IOIQualifiersGroupComp& iOIQualifiersGroupComp(int ix) { return static_cast<IOIQualifiersGroupComp&>(*components_[ix]); }
};

class RoutingIDsGroupComp : public Component {
 public:
  explicit RoutingIDsGroupComp(AbstractMessage* message);

  field::RoutingType& routingType() { return routingType_; }
  field::RoutingID& routingID() { return routingID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::RoutingType routingType_;
  field::RoutingID routingID_;
};

class RoutingIDsGroup : public AbstractGroup {
 public:
  explicit RoutingIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noRoutingIDs, &tags::routingType, [](AbstractMessage* m) -> Component* { return new RoutingIDsGroupComp(m); }) {}

  LongRef& noRoutingIDs() { return countField_; }
  RoutingIDsGroupComp& routingIDsGroupComp(int ix) { return static_cast<RoutingIDsGroupComp&>(*components_[ix]); }
};

class LegsGroup1Comp : public Component {
 public:
  explicit LegsGroup1Comp(AbstractMessage* message);

  field::LegSymbol& legSymbol() { return legSymbol_; }
  field::LegSymbolSfx& legSymbolSfx() { return legSymbolSfx_; }
  field::LegSecurityID& legSecurityID() { return legSecurityID_; }
  field::LegSecurityIDSource& legSecurityIDSource() { return legSecurityIDSource_; }
  LegSecurityAltIDGroup& legSecurityAltIDGroup() { return legSecurityAltIDGroup_; }
  field::LegProduct& legProduct() { return legProduct_; }
  field::LegCFICode& legCFICode() { return legCFICode_; }
  field::LegSecurityType& legSecurityType() { return legSecurityType_; }
  field::LegSecuritySubType& legSecuritySubType() { return legSecuritySubType_; }
  field::LegMaturityMonthYear& legMaturityMonthYear() { return legMaturityMonthYear_; }
  field::LegMaturityDate& legMaturityDate() { return legMaturityDate_; }
  field::LegCouponPaymentDate& legCouponPaymentDate() { return legCouponPaymentDate_; }
  field::LegIssueDate& legIssueDate() { return legIssueDate_; }
  field::LegRepoCollateralSecurityType& legRepoCollateralSecurityType() { return legRepoCollateralSecurityType_; }
  field::LegRepurchaseTerm& legRepurchaseTerm() { return legRepurchaseTerm_; }
  field::LegRepurchaseRate& legRepurchaseRate() { return legRepurchaseRate_; }
  field::LegFactor& legFactor() { return legFactor_; }
  field::LegCreditRating& legCreditRating() { return legCreditRating_; }
  field::LegInstrRegistry& legInstrRegistry() { return legInstrRegistry_; }
  field::LegCountryOfIssue& legCountryOfIssue() { return legCountryOfIssue_; }
  field::LegStateOrProvinceOfIssue& legStateOrProvinceOfIssue() { return legStateOrProvinceOfIssue_; }
  field::LegLocaleOfIssue& legLocaleOfIssue() { return legLocaleOfIssue_; }
  field::LegRedemptionDate& legRedemptionDate() { return legRedemptionDate_; }
  field::LegStrikePrice& legStrikePrice() { return legStrikePrice_; }
  field::LegStrikeCurrency& legStrikeCurrency() { return legStrikeCurrency_; }
  field::LegOptAttribute& legOptAttribute() { return legOptAttribute_; }
  field::LegContractMultiplier& legContractMultiplier() { return legContractMultiplier_; }
  field::LegCouponRate& legCouponRate() { return legCouponRate_; }
  field::LegSecurityExchange& legSecurityExchange() { return legSecurityExchange_; }
  field::LegIssuer& legIssuer() { return legIssuer_; }
  field::EncodedLegIssuerLen& encodedLegIssuerLen() { return encodedLegIssuerLen_; }
  field::EncodedLegIssuer& encodedLegIssuer() { return encodedLegIssuer_; }
  field::LegSecurityDesc& legSecurityDesc() { return legSecurityDesc_; }
  field::EncodedLegSecurityDescLen& encodedLegSecurityDescLen() { return encodedLegSecurityDescLen_; }
  field::EncodedLegSecurityDesc& encodedLegSecurityDesc() { return encodedLegSecurityDesc_; }
  field::LegRatioQty& legRatioQty() { return legRatioQty_; }
  field::LegSide& legSide() { return legSide_; }
  field::LegCurrency& legCurrency() { return legCurrency_; }
  field::LegPool& legPool() { return legPool_; }
  field::LegDatedDate& legDatedDate() { return legDatedDate_; }
  field::LegContractSettlMonth& legContractSettlMonth() { return legContractSettlMonth_; }
  field::LegInterestAccrualDate& legInterestAccrualDate() { return legInterestAccrualDate_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegSymbol legSymbol_;
  field::LegSymbolSfx legSymbolSfx_;
  field::LegSecurityID legSecurityID_;
  field::LegSecurityIDSource legSecurityIDSource_;
  LegSecurityAltIDGroup legSecurityAltIDGroup_;
  field::LegProduct legProduct_;
  field::LegCFICode legCFICode_;
  field::LegSecurityType legSecurityType_;
  field::LegSecuritySubType legSecuritySubType_;
  field::LegMaturityMonthYear legMaturityMonthYear_;
  field::LegMaturityDate legMaturityDate_;
  field::LegCouponPaymentDate legCouponPaymentDate_;
  field::LegIssueDate legIssueDate_;
  field::LegRepoCollateralSecurityType legRepoCollateralSecurityType_;
  field::LegRepurchaseTerm legRepurchaseTerm_;
  field::LegRepurchaseRate legRepurchaseRate_;
  field::LegFactor legFactor_;
  field::LegCreditRating legCreditRating_;
  field::LegInstrRegistry legInstrRegistry_;
  field::LegCountryOfIssue legCountryOfIssue_;
  field::LegStateOrProvinceOfIssue legStateOrProvinceOfIssue_;
  field::LegLocaleOfIssue legLocaleOfIssue_;
  field::LegRedemptionDate legRedemptionDate_;
  field::LegStrikePrice legStrikePrice_;
  field::LegStrikeCurrency legStrikeCurrency_;
  field::LegOptAttribute legOptAttribute_;
  field::LegContractMultiplier legContractMultiplier_;
  field::LegCouponRate legCouponRate_;
  field::LegSecurityExchange legSecurityExchange_;
  field::LegIssuer legIssuer_;
  field::EncodedLegIssuerLen encodedLegIssuerLen_;
  field::EncodedLegIssuer encodedLegIssuer_;
  field::LegSecurityDesc legSecurityDesc_;
  field::EncodedLegSecurityDescLen encodedLegSecurityDescLen_;
  field::EncodedLegSecurityDesc encodedLegSecurityDesc_;
  field::LegRatioQty legRatioQty_;
  field::LegSide legSide_;
  field::LegCurrency legCurrency_;
  field::LegPool legPool_;
  field::LegDatedDate legDatedDate_;
  field::LegContractSettlMonth legContractSettlMonth_;
  field::LegInterestAccrualDate legInterestAccrualDate_;
};

class LegsGroup1 : public AbstractGroup {
 public:
  explicit LegsGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegs, &tags::legSymbol, [](AbstractMessage* m) -> Component* { return new LegsGroup1Comp(m); }) {}

  LongRef& noLegs() { return countField_; }
  LegsGroup1Comp& legsGroup1Comp(int ix) { return static_cast<LegsGroup1Comp&>(*components_[ix]); }
};

class PartySubIDsGroupComp : public Component {
 public:
  explicit PartySubIDsGroupComp(AbstractMessage* message);

  field::PartySubID& partySubID() { return partySubID_; }
  field::PartySubIDType& partySubIDType() { return partySubIDType_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::PartySubID partySubID_;
  field::PartySubIDType partySubIDType_;
};

class PartySubIDsGroup : public AbstractGroup {
 public:
  explicit PartySubIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noPartySubIDs, &tags::partySubID, [](AbstractMessage* m) -> Component* { return new PartySubIDsGroupComp(m); }) {}

  LongRef& noPartySubIDs() { return countField_; }
  PartySubIDsGroupComp& partySubIDsGroupComp(int ix) { return static_cast<PartySubIDsGroupComp&>(*components_[ix]); }
};

class PartyIDsGroupComp : public Component {
 public:
  explicit PartyIDsGroupComp(AbstractMessage* message);

  field::PartyID& partyID() { return partyID_; }
  field::PartyIDSource& partyIDSource() { return partyIDSource_; }
  field::PartyRole& partyRole() { return partyRole_; }
  PartySubIDsGroup& partySubIDsGroup() { return partySubIDsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::PartyID partyID_;
  field::PartyIDSource partyIDSource_;
  field::PartyRole partyRole_;
  PartySubIDsGroup partySubIDsGroup_;
};

class PartyIDsGroup : public AbstractGroup {
 public:
  explicit PartyIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noPartyIDs, &tags::partyID, [](AbstractMessage* m) -> Component* { return new PartyIDsGroupComp(m); }) {}

  LongRef& noPartyIDs() { return countField_; }
  PartyIDsGroupComp& partyIDsGroupComp(int ix) { return static_cast<PartyIDsGroupComp&>(*components_[ix]); }
};

class ContraBrokersGroupComp : public Component {
 public:
  explicit ContraBrokersGroupComp(AbstractMessage* message);

  field::ContraBroker& contraBroker() { return contraBroker_; }
  field::ContraTrader& contraTrader() { return contraTrader_; }
  field::ContraTradeQty& contraTradeQty() { return contraTradeQty_; }
  field::ContraTradeTime& contraTradeTime() { return contraTradeTime_; }
  field::ContraLegRefID& contraLegRefID() { return contraLegRefID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::ContraBroker contraBroker_;
  field::ContraTrader contraTrader_;
  field::ContraTradeQty contraTradeQty_;
  field::ContraTradeTime contraTradeTime_;
  field::ContraLegRefID contraLegRefID_;
};

class ContraBrokersGroup : public AbstractGroup {
 public:
  explicit ContraBrokersGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noContraBrokers, &tags::contraBroker, [](AbstractMessage* m) -> Component* { return new ContraBrokersGroupComp(m); }) {}

  LongRef& noContraBrokers() { return countField_; }
  ContraBrokersGroupComp& contraBrokersGroupComp(int ix) { return static_cast<ContraBrokersGroupComp&>(*components_[ix]); }
};

class ContAmtsGroupComp : public Component {
 public:
  explicit ContAmtsGroupComp(AbstractMessage* message);

  field::ContAmtType& contAmtType() { return contAmtType_; }
  field::ContAmtValue& contAmtValue() { return contAmtValue_; }
  field::ContAmtCurr& contAmtCurr() { return contAmtCurr_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::ContAmtType contAmtType_;
  field::ContAmtValue contAmtValue_;
  field::ContAmtCurr contAmtCurr_;
};

class ContAmtsGroup : public AbstractGroup {
 public:
  explicit ContAmtsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noContAmts, &tags::contAmtType, [](AbstractMessage* m) -> Component* { return new ContAmtsGroupComp(m); }) {}

  LongRef& noContAmts() { return countField_; }
  ContAmtsGroupComp& contAmtsGroupComp(int ix) { return static_cast<ContAmtsGroupComp&>(*components_[ix]); }
};

class NestedPartySubIDsGroupComp : public Component {
 public:
  explicit NestedPartySubIDsGroupComp(AbstractMessage* message);

  field::NestedPartySubID& nestedPartySubID() { return nestedPartySubID_; }
  field::NestedPartySubIDType& nestedPartySubIDType() { return nestedPartySubIDType_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::NestedPartySubID nestedPartySubID_;
  field::NestedPartySubIDType nestedPartySubIDType_;
};

class NestedPartySubIDsGroup : public AbstractGroup {
 public:
  explicit NestedPartySubIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noNestedPartySubIDs, &tags::nestedPartySubID, [](AbstractMessage* m) -> Component* { return new NestedPartySubIDsGroupComp(m); }) {}

  LongRef& noNestedPartySubIDs() { return countField_; }
  NestedPartySubIDsGroupComp& nestedPartySubIDsGroupComp(int ix) { return static_cast<NestedPartySubIDsGroupComp&>(*components_[ix]); }
};

class NestedPartyIDsGroupComp : public Component {
 public:
  explicit NestedPartyIDsGroupComp(AbstractMessage* message);

  field::NestedPartyID& nestedPartyID() { return nestedPartyID_; }
  field::NestedPartyIDSource& nestedPartyIDSource() { return nestedPartyIDSource_; }
  field::NestedPartyRole& nestedPartyRole() { return nestedPartyRole_; }
  NestedPartySubIDsGroup& nestedPartySubIDsGroup() { return nestedPartySubIDsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::NestedPartyID nestedPartyID_;
  field::NestedPartyIDSource nestedPartyIDSource_;
  field::NestedPartyRole nestedPartyRole_;
  NestedPartySubIDsGroup nestedPartySubIDsGroup_;
};

class NestedPartyIDsGroup : public AbstractGroup {
 public:
  explicit NestedPartyIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noNestedPartyIDs, &tags::nestedPartyID, [](AbstractMessage* m) -> Component* { return new NestedPartyIDsGroupComp(m); }) {}

  LongRef& noNestedPartyIDs() { return countField_; }
  NestedPartyIDsGroupComp& nestedPartyIDsGroupComp(int ix) { return static_cast<NestedPartyIDsGroupComp&>(*components_[ix]); }
};

class LegsGroup2Comp : public Component {
 public:
  explicit LegsGroup2Comp(AbstractMessage* message);

  field::LegSymbol& legSymbol() { return legSymbol_; }
  field::LegSymbolSfx& legSymbolSfx() { return legSymbolSfx_; }
  field::LegSecurityID& legSecurityID() { return legSecurityID_; }
  field::LegSecurityIDSource& legSecurityIDSource() { return legSecurityIDSource_; }
  LegSecurityAltIDGroup& legSecurityAltIDGroup() { return legSecurityAltIDGroup_; }
  field::LegProduct& legProduct() { return legProduct_; }
  field::LegCFICode& legCFICode() { return legCFICode_; }
  field::LegSecurityType& legSecurityType() { return legSecurityType_; }
  field::LegSecuritySubType& legSecuritySubType() { return legSecuritySubType_; }
  field::LegMaturityMonthYear& legMaturityMonthYear() { return legMaturityMonthYear_; }
  field::LegMaturityDate& legMaturityDate() { return legMaturityDate_; }
  field::LegCouponPaymentDate& legCouponPaymentDate() { return legCouponPaymentDate_; }
  field::LegIssueDate& legIssueDate() { return legIssueDate_; }
  field::LegRepoCollateralSecurityType& legRepoCollateralSecurityType() { return legRepoCollateralSecurityType_; }
  field::LegRepurchaseTerm& legRepurchaseTerm() { return legRepurchaseTerm_; }
  field::LegRepurchaseRate& legRepurchaseRate() { return legRepurchaseRate_; }
  field::LegFactor& legFactor() { return legFactor_; }
  field::LegCreditRating& legCreditRating() { return legCreditRating_; }
  field::LegInstrRegistry& legInstrRegistry() { return legInstrRegistry_; }
  field::LegCountryOfIssue& legCountryOfIssue() { return legCountryOfIssue_; }
  field::LegStateOrProvinceOfIssue& legStateOrProvinceOfIssue() { return legStateOrProvinceOfIssue_; }
  field::LegLocaleOfIssue& legLocaleOfIssue() { return legLocaleOfIssue_; }
  field::LegRedemptionDate& legRedemptionDate() { return legRedemptionDate_; }
  field::LegStrikePrice& legStrikePrice() { return legStrikePrice_; }
  field::LegStrikeCurrency& legStrikeCurrency() { return legStrikeCurrency_; }
  field::LegOptAttribute& legOptAttribute() { return legOptAttribute_; }
  field::LegContractMultiplier& legContractMultiplier() { return legContractMultiplier_; }
  field::LegCouponRate& legCouponRate() { return legCouponRate_; }
  field::LegSecurityExchange& legSecurityExchange() { return legSecurityExchange_; }
  field::LegIssuer& legIssuer() { return legIssuer_; }
  field::EncodedLegIssuerLen& encodedLegIssuerLen() { return encodedLegIssuerLen_; }
  field::EncodedLegIssuer& encodedLegIssuer() { return encodedLegIssuer_; }
  field::LegSecurityDesc& legSecurityDesc() { return legSecurityDesc_; }
  field::EncodedLegSecurityDescLen& encodedLegSecurityDescLen() { return encodedLegSecurityDescLen_; }
  field::EncodedLegSecurityDesc& encodedLegSecurityDesc() { return encodedLegSecurityDesc_; }
  field::LegRatioQty& legRatioQty() { return legRatioQty_; }
  field::LegSide& legSide() { return legSide_; }
  field::LegCurrency& legCurrency() { return legCurrency_; }
  field::LegPool& legPool() { return legPool_; }
  field::LegDatedDate& legDatedDate() { return legDatedDate_; }
  field::LegContractSettlMonth& legContractSettlMonth() { return legContractSettlMonth_; }
  field::LegInterestAccrualDate& legInterestAccrualDate() { return legInterestAccrualDate_; }
  field::LegQty& legQty() { return legQty_; }
  field::LegSwapType& legSwapType() { return legSwapType_; }
  LegStipulationsGroup& legStipulationsGroup() { return legStipulationsGroup_; }
  field::LegPositionEffect& legPositionEffect() { return legPositionEffect_; }
  field::LegCoveredOrUncovered& legCoveredOrUncovered() { return legCoveredOrUncovered_; }
  NestedPartyIDsGroup& nestedPartyIDsGroup() { return nestedPartyIDsGroup_; }
  field::LegRefID& legRefID() { return legRefID_; }
  field::LegPrice& legPrice() { return legPrice_; }
  field::LegSettlType& legSettlType() { return legSettlType_; }
  field::LegSettlDate& legSettlDate() { return legSettlDate_; }
  field::LegLastPx& legLastPx() { return legLastPx_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegSymbol legSymbol_;
  field::LegSymbolSfx legSymbolSfx_;
  field::LegSecurityID legSecurityID_;
  field::LegSecurityIDSource legSecurityIDSource_;
  LegSecurityAltIDGroup legSecurityAltIDGroup_;
  field::LegProduct legProduct_;
  field::LegCFICode legCFICode_;
  field::LegSecurityType legSecurityType_;
  field::LegSecuritySubType legSecuritySubType_;
  field::LegMaturityMonthYear legMaturityMonthYear_;
  field::LegMaturityDate legMaturityDate_;
  field::LegCouponPaymentDate legCouponPaymentDate_;
  field::LegIssueDate legIssueDate_;
  field::LegRepoCollateralSecurityType legRepoCollateralSecurityType_;
  field::LegRepurchaseTerm legRepurchaseTerm_;
  field::LegRepurchaseRate legRepurchaseRate_;
  field::LegFactor legFactor_;
  field::LegCreditRating legCreditRating_;
  field::LegInstrRegistry legInstrRegistry_;
  field::LegCountryOfIssue legCountryOfIssue_;
  field::LegStateOrProvinceOfIssue legStateOrProvinceOfIssue_;
  field::LegLocaleOfIssue legLocaleOfIssue_;
  field::LegRedemptionDate legRedemptionDate_;
  field::LegStrikePrice legStrikePrice_;
  field::LegStrikeCurrency legStrikeCurrency_;
  field::LegOptAttribute legOptAttribute_;
  field::LegContractMultiplier legContractMultiplier_;
  field::LegCouponRate legCouponRate_;
  field::LegSecurityExchange legSecurityExchange_;
  field::LegIssuer legIssuer_;
  field::EncodedLegIssuerLen encodedLegIssuerLen_;
  field::EncodedLegIssuer encodedLegIssuer_;
  field::LegSecurityDesc legSecurityDesc_;
  field::EncodedLegSecurityDescLen encodedLegSecurityDescLen_;
  field::EncodedLegSecurityDesc encodedLegSecurityDesc_;
  field::LegRatioQty legRatioQty_;
  field::LegSide legSide_;
  field::LegCurrency legCurrency_;
  field::LegPool legPool_;
  field::LegDatedDate legDatedDate_;
  field::LegContractSettlMonth legContractSettlMonth_;
  field::LegInterestAccrualDate legInterestAccrualDate_;
  field::LegQty legQty_;
  field::LegSwapType legSwapType_;
  LegStipulationsGroup legStipulationsGroup_;
  field::LegPositionEffect legPositionEffect_;
  field::LegCoveredOrUncovered legCoveredOrUncovered_;
  NestedPartyIDsGroup nestedPartyIDsGroup_;
  field::LegRefID legRefID_;
  field::LegPrice legPrice_;
  field::LegSettlType legSettlType_;
  field::LegSettlDate legSettlDate_;
  field::LegLastPx legLastPx_;
};

class LegsGroup2 : public AbstractGroup {
 public:
  explicit LegsGroup2(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegs, &tags::legSymbol, [](AbstractMessage* m) -> Component* { return new LegsGroup2Comp(m); }) {}

  LongRef& noLegs() { return countField_; }
  LegsGroup2Comp& legsGroup2Comp(int ix) { return static_cast<LegsGroup2Comp&>(*components_[ix]); }
};

class MiscFeesGroupComp : public Component {
 public:
  explicit MiscFeesGroupComp(AbstractMessage* message);

  field::MiscFeeAmt& miscFeeAmt() { return miscFeeAmt_; }
  field::MiscFeeCurr& miscFeeCurr() { return miscFeeCurr_; }
  field::MiscFeeType& miscFeeType() { return miscFeeType_; }
  field::MiscFeeBasis& miscFeeBasis() { return miscFeeBasis_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::MiscFeeAmt miscFeeAmt_;
  field::MiscFeeCurr miscFeeCurr_;
  field::MiscFeeType miscFeeType_;
  field::MiscFeeBasis miscFeeBasis_;
};

class MiscFeesGroup : public AbstractGroup {
 public:
  explicit MiscFeesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noMiscFees, &tags::miscFeeAmt, [](AbstractMessage* m) -> Component* { return new MiscFeesGroupComp(m); }) {}

  LongRef& noMiscFees() { return countField_; }
  MiscFeesGroupComp& miscFeesGroupComp(int ix) { return static_cast<MiscFeesGroupComp&>(*components_[ix]); }
};

class MsgTypesGroupComp : public Component {
 public:
  explicit MsgTypesGroupComp(AbstractMessage* message);

  field::RefMsgType& refMsgType() { return refMsgType_; }
  field::MsgDirection& msgDirection() { return msgDirection_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::RefMsgType refMsgType_;
  field::MsgDirection msgDirection_;
};

class MsgTypesGroup : public AbstractGroup {
 public:
  explicit MsgTypesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noMsgTypes, &tags::refMsgType, [](AbstractMessage* m) -> Component* { return new MsgTypesGroupComp(m); }) {}

  LongRef& noMsgTypes() { return countField_; }
  MsgTypesGroupComp& msgTypesGroupComp(int ix) { return static_cast<MsgTypesGroupComp&>(*components_[ix]); }
};

class RelatedSymGroupComp : public Component {
 public:
  explicit RelatedSymGroupComp(AbstractMessage* message);

  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
};

class RelatedSymGroup : public AbstractGroup {
 public:
  explicit RelatedSymGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noRelatedSym, &tags::symbol, [](AbstractMessage* m) -> Component* { return new RelatedSymGroupComp(m); }) {}

  LongRef& noRelatedSym() { return countField_; }
  RelatedSymGroupComp& relatedSymGroupComp(int ix) { return static_cast<RelatedSymGroupComp&>(*components_[ix]); }
};

class LinesOfTextGroupComp : public Component {
 public:
  explicit LinesOfTextGroupComp(AbstractMessage* message);

  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
};

class LinesOfTextGroup : public AbstractGroup {
 public:
  explicit LinesOfTextGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLinesOfText, &tags::text, [](AbstractMessage* m) -> Component* { return new LinesOfTextGroupComp(m); }) {}

  LongRef& noLinesOfText() { return countField_; }
  LinesOfTextGroupComp& linesOfTextGroupComp(int ix) { return static_cast<LinesOfTextGroupComp&>(*components_[ix]); }
};

class AllocsGroupComp : public Component {
 public:
  explicit AllocsGroupComp(AbstractMessage* message);

  field::AllocAccount& allocAccount() { return allocAccount_; }
  field::AllocAcctIDSource& allocAcctIDSource() { return allocAcctIDSource_; }
  field::AllocSettlCurrency& allocSettlCurrency() { return allocSettlCurrency_; }
  field::IndividualAllocID& individualAllocID() { return individualAllocID_; }
  NestedPartyIDsGroup& nestedPartyIDsGroup() { return nestedPartyIDsGroup_; }
  field::AllocQty& allocQty() { return allocQty_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::AllocAccount allocAccount_;
  field::AllocAcctIDSource allocAcctIDSource_;
  field::AllocSettlCurrency allocSettlCurrency_;
  field::IndividualAllocID individualAllocID_;
  NestedPartyIDsGroup nestedPartyIDsGroup_;
  field::AllocQty allocQty_;
};

class AllocsGroup : public AbstractGroup {
 public:
  explicit AllocsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noAllocs, &tags::allocAccount, [](AbstractMessage* m) -> Component* { return new AllocsGroupComp(m); }) {}

  LongRef& noAllocs() { return countField_; }
  AllocsGroupComp& allocsGroupComp(int ix) { return static_cast<AllocsGroupComp&>(*components_[ix]); }
};

class TradingSessionsGroupComp : public Component {
 public:
  explicit TradingSessionsGroupComp(AbstractMessage* message);

  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
};

class TradingSessionsGroup : public AbstractGroup {
 public:
  explicit TradingSessionsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noTradingSessions, &tags::tradingSessionID, [](AbstractMessage* m) -> Component* { return new TradingSessionsGroupComp(m); }) {}

  LongRef& noTradingSessions() { return countField_; }
  TradingSessionsGroupComp& tradingSessionsGroupComp(int ix) { return static_cast<TradingSessionsGroupComp&>(*components_[ix]); }
};

class OrdersGroupComp : public Component {
 public:
  explicit OrdersGroupComp(AbstractMessage* message);

  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ListSeqNo& listSeqNo() { return listSeqNo_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  field::SettlInstMode& settlInstMode() { return settlInstMode_; }
  PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::DayBookingInst& dayBookingInst() { return dayBookingInst_; }
  field::BookingUnit& bookingUnit() { return bookingUnit_; }
  field::AllocID& allocID() { return allocID_; }
  field::PreallocMethod& preallocMethod() { return preallocMethod_; }
  AllocsGroup& allocsGroup() { return allocsGroup_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::CashMargin& cashMargin() { return cashMargin_; }
  field::ClearingFeeIndicator& clearingFeeIndicator() { return clearingFeeIndicator_; }
  field::HandlInst& handlInst() { return handlInst_; }
  field::ExecInst& execInst() { return execInst_; }
  field::MinQty& minQty() { return minQty_; }
  field::MaxFloor& maxFloor() { return maxFloor_; }
  field::ExDestination& exDestination() { return exDestination_; }
  TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::ProcessCode& processCode() { return processCode_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::PrevClosePx& prevClosePx() { return prevClosePx_; }
  field::Side& side() { return side_; }
  field::SideValueInd& sideValueInd() { return sideValueInd_; }
  field::LocateReqd& locateReqd() { return locateReqd_; }
  field::TransactTime& transactTime() { return transactTime_; }
  StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::OrderQty& orderQty() { return orderQty_; }
  field::CashOrderQty& cashOrderQty() { return cashOrderQty_; }
  field::OrderPercent& orderPercent() { return orderPercent_; }
  field::RoundingDirection& roundingDirection() { return roundingDirection_; }
  field::RoundingModulus& roundingModulus() { return roundingModulus_; }
  field::OrdType& ordType() { return ordType_; }
  field::PriceType& priceType() { return priceType_; }
  field::Price& price() { return price_; }
  field::StopPx& stopPx() { return stopPx_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  field::YieldType& yieldType() { return yieldType_; }
  field::Yield& yield() { return yield_; }
  field::YieldCalcDate& yieldCalcDate() { return yieldCalcDate_; }
  field::YieldRedemptionDate& yieldRedemptionDate() { return yieldRedemptionDate_; }
  field::YieldRedemptionPrice& yieldRedemptionPrice() { return yieldRedemptionPrice_; }
  field::YieldRedemptionPriceType& yieldRedemptionPriceType() { return yieldRedemptionPriceType_; }
  field::Currency& currency() { return currency_; }
  field::ComplianceID& complianceID() { return complianceID_; }
  field::SolicitedFlag& solicitedFlag() { return solicitedFlag_; }
  field::IOIID& iOIID() { return iOIID_; }
  field::QuoteID& quoteID() { return quoteID_; }
  field::TimeInForce& timeInForce() { return timeInForce_; }
  field::EffectiveTime& effectiveTime() { return effectiveTime_; }
  field::ExpireDate& expireDate() { return expireDate_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::GTBookingInst& gTBookingInst() { return gTBookingInst_; }
  field::Commission& commission() { return commission_; }
  field::CommType& commType() { return commType_; }
  field::CommCurrency& commCurrency() { return commCurrency_; }
  field::FundRenewWaiv& fundRenewWaiv() { return fundRenewWaiv_; }
  field::OrderCapacity& orderCapacity() { return orderCapacity_; }
  field::OrderRestrictions& orderRestrictions() { return orderRestrictions_; }
  field::CustOrderCapacity& custOrderCapacity() { return custOrderCapacity_; }
  field::ForexReq& forexReq() { return forexReq_; }
  field::SettlCurrency& settlCurrency() { return settlCurrency_; }
  field::BookingType& bookingType() { return bookingType_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SettlDate2& settlDate2() { return settlDate2_; }
  field::OrderQty2& orderQty2() { return orderQty2_; }
  field::Price2& price2() { return price2_; }
  field::PositionEffect& positionEffect() { return positionEffect_; }
  field::CoveredOrUncovered& coveredOrUncovered() { return coveredOrUncovered_; }
  field::MaxShow& maxShow() { return maxShow_; }
  field::PegOffsetValue& pegOffsetValue() { return pegOffsetValue_; }
  field::PegMoveType& pegMoveType() { return pegMoveType_; }
  field::PegOffsetType& pegOffsetType() { return pegOffsetType_; }
  field::PegLimitType& pegLimitType() { return pegLimitType_; }
  field::PegRoundDirection& pegRoundDirection() { return pegRoundDirection_; }
  field::PegScope& pegScope() { return pegScope_; }
  field::DiscretionInst& discretionInst() { return discretionInst_; }
  field::DiscretionOffsetValue& discretionOffsetValue() { return discretionOffsetValue_; }
  field::DiscretionMoveType& discretionMoveType() { return discretionMoveType_; }
  field::DiscretionOffsetType& discretionOffsetType() { return discretionOffsetType_; }
  field::DiscretionLimitType& discretionLimitType() { return discretionLimitType_; }
  field::DiscretionRoundDirection& discretionRoundDirection() { return discretionRoundDirection_; }
  field::DiscretionScope& discretionScope() { return discretionScope_; }
  field::TargetStrategy& targetStrategy() { return targetStrategy_; }
  field::TargetStrategyParameters& targetStrategyParameters() { return targetStrategyParameters_; }
  field::ParticipationRate& participationRate() { return participationRate_; }
  field::Designation& designation() { return designation_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::ClOrdID clOrdID_;
  field::SecondaryClOrdID secondaryClOrdID_;
  field::ListSeqNo listSeqNo_;
  field::ClOrdLinkID clOrdLinkID_;
  field::SettlInstMode settlInstMode_;
  PartyIDsGroup partyIDsGroup_;
  field::TradeOriginationDate tradeOriginationDate_;
  field::TradeDate tradeDate_;
  field::Account account_;
  field::AcctIDSource acctIDSource_;
  field::AccountType accountType_;
  field::DayBookingInst dayBookingInst_;
  field::BookingUnit bookingUnit_;
  field::AllocID allocID_;
  field::PreallocMethod preallocMethod_;
  AllocsGroup allocsGroup_;
  field::SettlType settlType_;
  field::SettlDate settlDate_;
  field::CashMargin cashMargin_;
  field::ClearingFeeIndicator clearingFeeIndicator_;
  field::HandlInst handlInst_;
  field::ExecInst execInst_;
  field::MinQty minQty_;
  field::MaxFloor maxFloor_;
  field::ExDestination exDestination_;
  TradingSessionsGroup tradingSessionsGroup_;
  field::ProcessCode processCode_;
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  UnderlyingsGroup underlyingsGroup_;
  field::PrevClosePx prevClosePx_;
  field::Side side_;
  field::SideValueInd sideValueInd_;
  field::LocateReqd locateReqd_;
  field::TransactTime transactTime_;
  StipulationsGroup stipulationsGroup_;
  field::QtyType qtyType_;
  field::OrderQty orderQty_;
  field::CashOrderQty cashOrderQty_;
  field::OrderPercent orderPercent_;
  field::RoundingDirection roundingDirection_;
  field::RoundingModulus roundingModulus_;
  field::OrdType ordType_;
  field::PriceType priceType_;
  field::Price price_;
  field::StopPx stopPx_;
  field::Spread spread_;
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_;
  field::BenchmarkCurveName benchmarkCurveName_;
  field::BenchmarkCurvePoint benchmarkCurvePoint_;
  field::BenchmarkPrice benchmarkPrice_;
  field::BenchmarkPriceType benchmarkPriceType_;
  field::BenchmarkSecurityID benchmarkSecurityID_;
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_;
  field::YieldType yieldType_;
  field::Yield yield_;
  field::YieldCalcDate yieldCalcDate_;
  field::YieldRedemptionDate yieldRedemptionDate_;
  field::YieldRedemptionPrice yieldRedemptionPrice_;
  field::YieldRedemptionPriceType yieldRedemptionPriceType_;
  field::Currency currency_;
  field::ComplianceID complianceID_;
  field::SolicitedFlag solicitedFlag_;
  field::IOIID iOIID_;
  field::QuoteID quoteID_;
  field::TimeInForce timeInForce_;
  field::EffectiveTime effectiveTime_;
  field::ExpireDate expireDate_;
  field::ExpireTime expireTime_;
  field::GTBookingInst gTBookingInst_;
  field::Commission commission_;
  field::CommType commType_;
  field::CommCurrency commCurrency_;
  field::FundRenewWaiv fundRenewWaiv_;
  field::OrderCapacity orderCapacity_;
  field::OrderRestrictions orderRestrictions_;
  field::CustOrderCapacity custOrderCapacity_;
  field::ForexReq forexReq_;
  field::SettlCurrency settlCurrency_;
  field::BookingType bookingType_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
  field::SettlDate2 settlDate2_;
  field::OrderQty2 orderQty2_;
  field::Price2 price2_;
  field::PositionEffect positionEffect_;
  field::CoveredOrUncovered coveredOrUncovered_;
  field::MaxShow maxShow_;
  field::PegOffsetValue pegOffsetValue_;
  field::PegMoveType pegMoveType_;
  field::PegOffsetType pegOffsetType_;
  field::PegLimitType pegLimitType_;
  field::PegRoundDirection pegRoundDirection_;
  field::PegScope pegScope_;
  field::DiscretionInst discretionInst_;
  field::DiscretionOffsetValue discretionOffsetValue_;
  field::DiscretionMoveType discretionMoveType_;
  field::DiscretionOffsetType discretionOffsetType_;
  field::DiscretionLimitType discretionLimitType_;
  field::DiscretionRoundDirection discretionRoundDirection_;
  field::DiscretionScope discretionScope_;
  field::TargetStrategy targetStrategy_;
  field::TargetStrategyParameters targetStrategyParameters_;
  field::ParticipationRate participationRate_;
  field::Designation designation_;
};

class OrdersGroup : public AbstractGroup {
 public:
  explicit OrdersGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noOrders, &tags::clOrdID, [](AbstractMessage* m) -> Component* { return new OrdersGroupComp(m); }) {}

  LongRef& noOrders() { return countField_; }
  OrdersGroupComp& ordersGroupComp(int ix) { return static_cast<OrdersGroupComp&>(*components_[ix]); }
};

class Nested2PartySubIDsGroupComp : public Component {
 public:
  explicit Nested2PartySubIDsGroupComp(AbstractMessage* message);

  field::Nested2PartySubID& nested2PartySubID() { return nested2PartySubID_; }
  field::Nested2PartySubIDType& nested2PartySubIDType() { return nested2PartySubIDType_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Nested2PartySubID nested2PartySubID_;
  field::Nested2PartySubIDType nested2PartySubIDType_;
};

class Nested2PartySubIDsGroup : public AbstractGroup {
 public:
  explicit Nested2PartySubIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noNested2PartySubIDs, &tags::nested2PartySubID, [](AbstractMessage* m) -> Component* { return new Nested2PartySubIDsGroupComp(m); }) {}

  LongRef& noNested2PartySubIDs() { return countField_; }
  Nested2PartySubIDsGroupComp& nested2PartySubIDsGroupComp(int ix) { return static_cast<Nested2PartySubIDsGroupComp&>(*components_[ix]); }
};

class Nested2PartyIDsGroupComp : public Component {
 public:
  explicit Nested2PartyIDsGroupComp(AbstractMessage* message);

  field::Nested2PartyID& nested2PartyID() { return nested2PartyID_; }
  field::Nested2PartyIDSource& nested2PartyIDSource() { return nested2PartyIDSource_; }
  field::Nested2PartyRole& nested2PartyRole() { return nested2PartyRole_; }
  Nested2PartySubIDsGroup& nested2PartySubIDsGroup() { return nested2PartySubIDsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Nested2PartyID nested2PartyID_;
  field::Nested2PartyIDSource nested2PartyIDSource_;
  field::Nested2PartyRole nested2PartyRole_;
  Nested2PartySubIDsGroup nested2PartySubIDsGroup_;
};

class Nested2PartyIDsGroup : public AbstractGroup {
 public:
  explicit Nested2PartyIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noNested2PartyIDs, &tags::nested2PartyID, [](AbstractMessage* m) -> Component* { return new Nested2PartyIDsGroupComp(m); }) {}

  LongRef& noNested2PartyIDs() { return countField_; }
  Nested2PartyIDsGroupComp& nested2PartyIDsGroupComp(int ix) { return static_cast<Nested2PartyIDsGroupComp&>(*components_[ix]); }
};

class OrdersGroup1Comp : public Component {
 public:
  explicit OrdersGroup1Comp(AbstractMessage* message);

  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ListID& listID() { return listID_; }
  Nested2PartyIDsGroup& nested2PartyIDsGroup() { return nested2PartyIDsGroup_; }
  field::OrderQty& orderQty() { return orderQty_; }
  field::OrderAvgPx& orderAvgPx() { return orderAvgPx_; }
  field::OrderBookingQty& orderBookingQty() { return orderBookingQty_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::ClOrdID clOrdID_;
  field::OrderID orderID_;
  field::SecondaryOrderID secondaryOrderID_;
  field::SecondaryClOrdID secondaryClOrdID_;
  field::ListID listID_;
  Nested2PartyIDsGroup nested2PartyIDsGroup_;
  field::OrderQty orderQty_;
  field::OrderAvgPx orderAvgPx_;
  field::OrderBookingQty orderBookingQty_;
};

class OrdersGroup1 : public AbstractGroup {
 public:
  explicit OrdersGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noOrders, &tags::clOrdID, [](AbstractMessage* m) -> Component* { return new OrdersGroup1Comp(m); }) {}

  LongRef& noOrders() { return countField_; }
  OrdersGroup1Comp& ordersGroup1Comp(int ix) { return static_cast<OrdersGroup1Comp&>(*components_[ix]); }
};

class ExecsGroupComp : public Component {
 public:
  explicit ExecsGroupComp(AbstractMessage* message);

  field::LastQty& lastQty() { return lastQty_; }
  field::ExecID& execID() { return execID_; }
  field::SecondaryExecID& secondaryExecID() { return secondaryExecID_; }
  field::LastPx& lastPx() { return lastPx_; }
  field::LastParPx& lastParPx() { return lastParPx_; }
  field::LastCapacity& lastCapacity() { return lastCapacity_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LastQty lastQty_;
  field::ExecID execID_;
  field::SecondaryExecID secondaryExecID_;
  field::LastPx lastPx_;
  field::LastParPx lastParPx_;
  field::LastCapacity lastCapacity_;
};

class ExecsGroup : public AbstractGroup {
 public:
  explicit ExecsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noExecs, &tags::lastQty, [](AbstractMessage* m) -> Component* { return new ExecsGroupComp(m); }) {}

  LongRef& noExecs() { return countField_; }
  ExecsGroupComp& execsGroupComp(int ix) { return static_cast<ExecsGroupComp&>(*components_[ix]); }
};

class InstrAttribGroupComp : public Component {
 public:
  explicit InstrAttribGroupComp(AbstractMessage* message);

  field::InstrAttribType& instrAttribType() { return instrAttribType_; }
  field::InstrAttribValue& instrAttribValue() { return instrAttribValue_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::InstrAttribType instrAttribType_;
  field::InstrAttribValue instrAttribValue_;
};

class InstrAttribGroup : public AbstractGroup {
 public:
  explicit InstrAttribGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noInstrAttrib, &tags::instrAttribType, [](AbstractMessage* m) -> Component* { return new InstrAttribGroupComp(m); }) {}

  LongRef& noInstrAttrib() { return countField_; }
  InstrAttribGroupComp& instrAttribGroupComp(int ix) { return static_cast<InstrAttribGroupComp&>(*components_[ix]); }
};

class ClearingInstructionsGroupComp : public Component {
 public:
  explicit ClearingInstructionsGroupComp(AbstractMessage* message);

  field::ClearingInstruction& clearingInstruction() { return clearingInstruction_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::ClearingInstruction clearingInstruction_;
};

class ClearingInstructionsGroup : public AbstractGroup {
 public:
  explicit ClearingInstructionsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noClearingInstructions, &tags::clearingInstruction, [](AbstractMessage* m) -> Component* { return new ClearingInstructionsGroupComp(m); }) {}

  LongRef& noClearingInstructions() { return countField_; }
  ClearingInstructionsGroupComp& clearingInstructionsGroupComp(int ix) { return static_cast<ClearingInstructionsGroupComp&>(*components_[ix]); }
};

class SettlPartySubIDsGroupComp : public Component {
 public:
  explicit SettlPartySubIDsGroupComp(AbstractMessage* message);

  field::SettlPartySubID& settlPartySubID() { return settlPartySubID_; }
  field::SettlPartySubIDType& settlPartySubIDType() { return settlPartySubIDType_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::SettlPartySubID settlPartySubID_;
  field::SettlPartySubIDType settlPartySubIDType_;
};

class SettlPartySubIDsGroup : public AbstractGroup {
 public:
  explicit SettlPartySubIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noSettlPartySubIDs, &tags::settlPartySubID, [](AbstractMessage* m) -> Component* { return new SettlPartySubIDsGroupComp(m); }) {}

  LongRef& noSettlPartySubIDs() { return countField_; }
  SettlPartySubIDsGroupComp& settlPartySubIDsGroupComp(int ix) { return static_cast<SettlPartySubIDsGroupComp&>(*components_[ix]); }
};

class SettlPartyIDsGroupComp : public Component {
 public:
  explicit SettlPartyIDsGroupComp(AbstractMessage* message);

  field::SettlPartyID& settlPartyID() { return settlPartyID_; }
  field::SettlPartyIDSource& settlPartyIDSource() { return settlPartyIDSource_; }
  field::SettlPartyRole& settlPartyRole() { return settlPartyRole_; }
  SettlPartySubIDsGroup& settlPartySubIDsGroup() { return settlPartySubIDsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::SettlPartyID settlPartyID_;
  field::SettlPartyIDSource settlPartyIDSource_;
  field::SettlPartyRole settlPartyRole_;
  SettlPartySubIDsGroup settlPartySubIDsGroup_;
};

class SettlPartyIDsGroup : public AbstractGroup {
 public:
  explicit SettlPartyIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noSettlPartyIDs, &tags::settlPartyID, [](AbstractMessage* m) -> Component* { return new SettlPartyIDsGroupComp(m); }) {}

  LongRef& noSettlPartyIDs() { return countField_; }
  SettlPartyIDsGroupComp& settlPartyIDsGroupComp(int ix) { return static_cast<SettlPartyIDsGroupComp&>(*components_[ix]); }
};

class DlvyInstGroupComp : public Component {
 public:
  explicit DlvyInstGroupComp(AbstractMessage* message);

  field::SettlInstSource& settlInstSource() { return settlInstSource_; }
  field::DlvyInstType& dlvyInstType() { return dlvyInstType_; }
  SettlPartyIDsGroup& settlPartyIDsGroup() { return settlPartyIDsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::SettlInstSource settlInstSource_;
  field::DlvyInstType dlvyInstType_;
  SettlPartyIDsGroup settlPartyIDsGroup_;
};

class DlvyInstGroup : public AbstractGroup {
 public:
  explicit DlvyInstGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noDlvyInst, &tags::settlInstSource, [](AbstractMessage* m) -> Component* { return new DlvyInstGroupComp(m); }) {}

  LongRef& noDlvyInst() { return countField_; }
  DlvyInstGroupComp& dlvyInstGroupComp(int ix) { return static_cast<DlvyInstGroupComp&>(*components_[ix]); }
};

class AllocsGroup1Comp : public Component {
 public:
  explicit AllocsGroup1Comp(AbstractMessage* message);

  field::AllocAccount& allocAccount() { return allocAccount_; }
  field::AllocAcctIDSource& allocAcctIDSource() { return allocAcctIDSource_; }
  field::MatchStatus& matchStatus() { return matchStatus_; }
  field::AllocPrice& allocPrice() { return allocPrice_; }
  field::AllocQty& allocQty() { return allocQty_; }
  field::IndividualAllocID& individualAllocID() { return individualAllocID_; }
  field::ProcessCode& processCode() { return processCode_; }
  NestedPartyIDsGroup& nestedPartyIDsGroup() { return nestedPartyIDsGroup_; }
  field::NotifyBrokerOfCredit& notifyBrokerOfCredit() { return notifyBrokerOfCredit_; }
  field::AllocHandlInst& allocHandlInst() { return allocHandlInst_; }
  field::AllocText& allocText() { return allocText_; }
  field::EncodedAllocTextLen& encodedAllocTextLen() { return encodedAllocTextLen_; }
  field::EncodedAllocText& encodedAllocText() { return encodedAllocText_; }
  field::Commission& commission() { return commission_; }
  field::CommType& commType() { return commType_; }
  field::CommCurrency& commCurrency() { return commCurrency_; }
  field::FundRenewWaiv& fundRenewWaiv() { return fundRenewWaiv_; }
  field::AllocAvgPx& allocAvgPx() { return allocAvgPx_; }
  field::AllocNetMoney& allocNetMoney() { return allocNetMoney_; }
  field::SettlCurrAmt& settlCurrAmt() { return settlCurrAmt_; }
  field::AllocSettlCurrAmt& allocSettlCurrAmt() { return allocSettlCurrAmt_; }
  field::SettlCurrency& settlCurrency() { return settlCurrency_; }
  field::AllocSettlCurrency& allocSettlCurrency() { return allocSettlCurrency_; }
  field::SettlCurrFxRate& settlCurrFxRate() { return settlCurrFxRate_; }
  field::SettlCurrFxRateCalc& settlCurrFxRateCalc() { return settlCurrFxRateCalc_; }
  field::AllocAccruedInterestAmt& allocAccruedInterestAmt() { return allocAccruedInterestAmt_; }
  field::AllocInterestAtMaturity& allocInterestAtMaturity() { return allocInterestAtMaturity_; }
  MiscFeesGroup& miscFeesGroup() { return miscFeesGroup_; }
  ClearingInstructionsGroup& clearingInstructionsGroup() { return clearingInstructionsGroup_; }
  field::AllocSettlInstType& allocSettlInstType() { return allocSettlInstType_; }
  field::SettlDeliveryType& settlDeliveryType() { return settlDeliveryType_; }
  field::StandInstDbType& standInstDbType() { return standInstDbType_; }
  field::StandInstDbName& standInstDbName() { return standInstDbName_; }
  field::StandInstDbID& standInstDbID() { return standInstDbID_; }
  DlvyInstGroup& dlvyInstGroup() { return dlvyInstGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::AllocAccount allocAccount_;
  field::AllocAcctIDSource allocAcctIDSource_;
  field::MatchStatus matchStatus_;
  field::AllocPrice allocPrice_;
  field::AllocQty allocQty_;
  field::IndividualAllocID individualAllocID_;
  field::ProcessCode processCode_;
  NestedPartyIDsGroup nestedPartyIDsGroup_;
  field::NotifyBrokerOfCredit notifyBrokerOfCredit_;
  field::AllocHandlInst allocHandlInst_;
  field::AllocText allocText_;
  field::EncodedAllocTextLen encodedAllocTextLen_;
  field::EncodedAllocText encodedAllocText_;
  field::Commission commission_;
  field::CommType commType_;
  field::CommCurrency commCurrency_;
  field::FundRenewWaiv fundRenewWaiv_;
  field::AllocAvgPx allocAvgPx_;
  field::AllocNetMoney allocNetMoney_;
  field::SettlCurrAmt settlCurrAmt_;
  field::AllocSettlCurrAmt allocSettlCurrAmt_;
  field::SettlCurrency settlCurrency_;
  field::AllocSettlCurrency allocSettlCurrency_;
  field::SettlCurrFxRate settlCurrFxRate_;
  field::SettlCurrFxRateCalc settlCurrFxRateCalc_;
  field::AllocAccruedInterestAmt allocAccruedInterestAmt_;
  field::AllocInterestAtMaturity allocInterestAtMaturity_;
  MiscFeesGroup miscFeesGroup_;
  ClearingInstructionsGroup clearingInstructionsGroup_;
  field::AllocSettlInstType allocSettlInstType_;
  field::SettlDeliveryType settlDeliveryType_;
  field::StandInstDbType standInstDbType_;
  field::StandInstDbName standInstDbName_;
  field::StandInstDbID standInstDbID_;
  DlvyInstGroup dlvyInstGroup_;
};

class AllocsGroup1 : public AbstractGroup {
 public:
  explicit AllocsGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noAllocs, &tags::allocAccount, [](AbstractMessage* m) -> Component* { return new AllocsGroup1Comp(m); }) {}

  LongRef& noAllocs() { return countField_; }
  AllocsGroup1Comp& allocsGroup1Comp(int ix) { return static_cast<AllocsGroup1Comp&>(*components_[ix]); }
};

class OrdersGroup2Comp : public Component {
 public:
  explicit OrdersGroup2Comp(AbstractMessage* message);

  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::CumQty& cumQty() { return cumQty_; }
  field::OrdStatus& ordStatus() { return ordStatus_; }
  field::WorkingIndicator& workingIndicator() { return workingIndicator_; }
  field::LeavesQty& leavesQty() { return leavesQty_; }
  field::CxlQty& cxlQty() { return cxlQty_; }
  field::AvgPx& avgPx() { return avgPx_; }
  field::OrdRejReason& ordRejReason() { return ordRejReason_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::ClOrdID clOrdID_;
  field::SecondaryClOrdID secondaryClOrdID_;
  field::CumQty cumQty_;
  field::OrdStatus ordStatus_;
  field::WorkingIndicator workingIndicator_;
  field::LeavesQty leavesQty_;
  field::CxlQty cxlQty_;
  field::AvgPx avgPx_;
  field::OrdRejReason ordRejReason_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
};

class OrdersGroup2 : public AbstractGroup {
 public:
  explicit OrdersGroup2(AbstractMessage* message)
      : AbstractGroup(message, &tags::noOrders, &tags::clOrdID, [](AbstractMessage* m) -> Component* { return new OrdersGroup2Comp(m); }) {}

  LongRef& noOrders() { return countField_; }
  OrdersGroup2Comp& ordersGroup2Comp(int ix) { return static_cast<OrdersGroup2Comp&>(*components_[ix]); }
};

class AllocsGroup2Comp : public Component {
 public:
  explicit AllocsGroup2Comp(AbstractMessage* message);

  field::AllocAccount& allocAccount() { return allocAccount_; }
  field::AllocAcctIDSource& allocAcctIDSource() { return allocAcctIDSource_; }
  field::AllocPrice& allocPrice() { return allocPrice_; }
  field::IndividualAllocID& individualAllocID() { return individualAllocID_; }
  field::IndividualAllocRejCode& individualAllocRejCode() { return individualAllocRejCode_; }
  field::AllocText& allocText() { return allocText_; }
  field::EncodedAllocTextLen& encodedAllocTextLen() { return encodedAllocTextLen_; }
  field::EncodedAllocText& encodedAllocText() { return encodedAllocText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::AllocAccount allocAccount_;
  field::AllocAcctIDSource allocAcctIDSource_;
  field::AllocPrice allocPrice_;
  field::IndividualAllocID individualAllocID_;
  field::IndividualAllocRejCode individualAllocRejCode_;
  field::AllocText allocText_;
  field::EncodedAllocTextLen encodedAllocTextLen_;
  field::EncodedAllocText encodedAllocText_;
};

class AllocsGroup2 : public AbstractGroup {
 public:
  explicit AllocsGroup2(AbstractMessage* message)
      : AbstractGroup(message, &tags::noAllocs, &tags::allocAccount, [](AbstractMessage* m) -> Component* { return new AllocsGroup2Comp(m); }) {}

  LongRef& noAllocs() { return countField_; }
  AllocsGroup2Comp& allocsGroup2Comp(int ix) { return static_cast<AllocsGroup2Comp&>(*components_[ix]); }
};

class LegsGroup3Comp : public Component {
 public:
  explicit LegsGroup3Comp(AbstractMessage* message);

  field::LegSymbol& legSymbol() { return legSymbol_; }
  field::LegSymbolSfx& legSymbolSfx() { return legSymbolSfx_; }
  field::LegSecurityID& legSecurityID() { return legSecurityID_; }
  field::LegSecurityIDSource& legSecurityIDSource() { return legSecurityIDSource_; }
  LegSecurityAltIDGroup& legSecurityAltIDGroup() { return legSecurityAltIDGroup_; }
  field::LegProduct& legProduct() { return legProduct_; }
  field::LegCFICode& legCFICode() { return legCFICode_; }
  field::LegSecurityType& legSecurityType() { return legSecurityType_; }
  field::LegSecuritySubType& legSecuritySubType() { return legSecuritySubType_; }
  field::LegMaturityMonthYear& legMaturityMonthYear() { return legMaturityMonthYear_; }
  field::LegMaturityDate& legMaturityDate() { return legMaturityDate_; }
  field::LegCouponPaymentDate& legCouponPaymentDate() { return legCouponPaymentDate_; }
  field::LegIssueDate& legIssueDate() { return legIssueDate_; }
  field::LegRepoCollateralSecurityType& legRepoCollateralSecurityType() { return legRepoCollateralSecurityType_; }
  field::LegRepurchaseTerm& legRepurchaseTerm() { return legRepurchaseTerm_; }
  field::LegRepurchaseRate& legRepurchaseRate() { return legRepurchaseRate_; }
  field::LegFactor& legFactor() { return legFactor_; }
  field::LegCreditRating& legCreditRating() { return legCreditRating_; }
  field::LegInstrRegistry& legInstrRegistry() { return legInstrRegistry_; }
  field::LegCountryOfIssue& legCountryOfIssue() { return legCountryOfIssue_; }
  field::LegStateOrProvinceOfIssue& legStateOrProvinceOfIssue() { return legStateOrProvinceOfIssue_; }
  field::LegLocaleOfIssue& legLocaleOfIssue() { return legLocaleOfIssue_; }
  field::LegRedemptionDate& legRedemptionDate() { return legRedemptionDate_; }
  field::LegStrikePrice& legStrikePrice() { return legStrikePrice_; }
  field::LegStrikeCurrency& legStrikeCurrency() { return legStrikeCurrency_; }
  field::LegOptAttribute& legOptAttribute() { return legOptAttribute_; }
  field::LegContractMultiplier& legContractMultiplier() { return legContractMultiplier_; }
  field::LegCouponRate& legCouponRate() { return legCouponRate_; }
  field::LegSecurityExchange& legSecurityExchange() { return legSecurityExchange_; }
  field::LegIssuer& legIssuer() { return legIssuer_; }
  field::EncodedLegIssuerLen& encodedLegIssuerLen() { return encodedLegIssuerLen_; }
  field::EncodedLegIssuer& encodedLegIssuer() { return encodedLegIssuer_; }
  field::LegSecurityDesc& legSecurityDesc() { return legSecurityDesc_; }
  field::EncodedLegSecurityDescLen& encodedLegSecurityDescLen() { return encodedLegSecurityDescLen_; }
  field::EncodedLegSecurityDesc& encodedLegSecurityDesc() { return encodedLegSecurityDesc_; }
  field::LegRatioQty& legRatioQty() { return legRatioQty_; }
  field::LegSide& legSide() { return legSide_; }
  field::LegCurrency& legCurrency() { return legCurrency_; }
  field::LegPool& legPool() { return legPool_; }
  field::LegDatedDate& legDatedDate() { return legDatedDate_; }
  field::LegContractSettlMonth& legContractSettlMonth() { return legContractSettlMonth_; }
  field::LegInterestAccrualDate& legInterestAccrualDate() { return legInterestAccrualDate_; }
  field::LegQty& legQty() { return legQty_; }
  field::LegSwapType& legSwapType() { return legSwapType_; }
  field::LegSettlType& legSettlType() { return legSettlType_; }
  field::LegSettlDate& legSettlDate() { return legSettlDate_; }
  LegStipulationsGroup& legStipulationsGroup() { return legStipulationsGroup_; }
  NestedPartyIDsGroup& nestedPartyIDsGroup() { return nestedPartyIDsGroup_; }
  field::LegBenchmarkCurveCurrency& legBenchmarkCurveCurrency() { return legBenchmarkCurveCurrency_; }
  field::LegBenchmarkCurveName& legBenchmarkCurveName() { return legBenchmarkCurveName_; }
  field::LegBenchmarkCurvePoint& legBenchmarkCurvePoint() { return legBenchmarkCurvePoint_; }
  field::LegBenchmarkPrice& legBenchmarkPrice() { return legBenchmarkPrice_; }
  field::LegBenchmarkPriceType& legBenchmarkPriceType() { return legBenchmarkPriceType_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegSymbol legSymbol_;
  field::LegSymbolSfx legSymbolSfx_;
  field::LegSecurityID legSecurityID_;
  field::LegSecurityIDSource legSecurityIDSource_;
  LegSecurityAltIDGroup legSecurityAltIDGroup_;
  field::LegProduct legProduct_;
  field::LegCFICode legCFICode_;
  field::LegSecurityType legSecurityType_;
  field::LegSecuritySubType legSecuritySubType_;
  field::LegMaturityMonthYear legMaturityMonthYear_;
  field::LegMaturityDate legMaturityDate_;
  field::LegCouponPaymentDate legCouponPaymentDate_;
  field::LegIssueDate legIssueDate_;
  field::LegRepoCollateralSecurityType legRepoCollateralSecurityType_;
  field::LegRepurchaseTerm legRepurchaseTerm_;
  field::LegRepurchaseRate legRepurchaseRate_;
  field::LegFactor legFactor_;
  field::LegCreditRating legCreditRating_;
  field::LegInstrRegistry legInstrRegistry_;
  field::LegCountryOfIssue legCountryOfIssue_;
  field::LegStateOrProvinceOfIssue legStateOrProvinceOfIssue_;
  field::LegLocaleOfIssue legLocaleOfIssue_;
  field::LegRedemptionDate legRedemptionDate_;
  field::LegStrikePrice legStrikePrice_;
  field::LegStrikeCurrency legStrikeCurrency_;
  field::LegOptAttribute legOptAttribute_;
  field::LegContractMultiplier legContractMultiplier_;
  field::LegCouponRate legCouponRate_;
  field::LegSecurityExchange legSecurityExchange_;
  field::LegIssuer legIssuer_;
  field::EncodedLegIssuerLen encodedLegIssuerLen_;
  field::EncodedLegIssuer encodedLegIssuer_;
  field::LegSecurityDesc legSecurityDesc_;
  field::EncodedLegSecurityDescLen encodedLegSecurityDescLen_;
  field::EncodedLegSecurityDesc encodedLegSecurityDesc_;
  field::LegRatioQty legRatioQty_;
  field::LegSide legSide_;
  field::LegCurrency legCurrency_;
  field::LegPool legPool_;
  field::LegDatedDate legDatedDate_;
  field::LegContractSettlMonth legContractSettlMonth_;
  field::LegInterestAccrualDate legInterestAccrualDate_;
  field::LegQty legQty_;
  field::LegSwapType legSwapType_;
  field::LegSettlType legSettlType_;
  field::LegSettlDate legSettlDate_;
  LegStipulationsGroup legStipulationsGroup_;
  NestedPartyIDsGroup nestedPartyIDsGroup_;
  field::LegBenchmarkCurveCurrency legBenchmarkCurveCurrency_;
  field::LegBenchmarkCurveName legBenchmarkCurveName_;
  field::LegBenchmarkCurvePoint legBenchmarkCurvePoint_;
  field::LegBenchmarkPrice legBenchmarkPrice_;
  field::LegBenchmarkPriceType legBenchmarkPriceType_;
};

class LegsGroup3 : public AbstractGroup {
 public:
  explicit LegsGroup3(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegs, &tags::legSymbol, [](AbstractMessage* m) -> Component* { return new LegsGroup3Comp(m); }) {}

  LongRef& noLegs() { return countField_; }
  LegsGroup3Comp& legsGroup3Comp(int ix) { return static_cast<LegsGroup3Comp&>(*components_[ix]); }
};

class QuoteQualifiersGroupComp : public Component {
 public:
  explicit QuoteQualifiersGroupComp(AbstractMessage* message);

  field::QuoteQualifier& quoteQualifier() { return quoteQualifier_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::QuoteQualifier quoteQualifier_;
};

class QuoteQualifiersGroup : public AbstractGroup {
 public:
  explicit QuoteQualifiersGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noQuoteQualifiers, &tags::quoteQualifier, [](AbstractMessage* m) -> Component* { return new QuoteQualifiersGroupComp(m); }) {}

  LongRef& noQuoteQualifiers() { return countField_; }
  QuoteQualifiersGroupComp& quoteQualifiersGroupComp(int ix) { return static_cast<QuoteQualifiersGroupComp&>(*components_[ix]); }
};

class RelatedSymGroup1Comp : public Component {
 public:
  explicit RelatedSymGroup1Comp(AbstractMessage* message);

  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::AgreementDesc& agreementDesc() { return agreementDesc_; }
  field::AgreementID& agreementID() { return agreementID_; }
  field::AgreementDate& agreementDate() { return agreementDate_; }
  field::AgreementCurrency& agreementCurrency() { return agreementCurrency_; }
  field::TerminationType& terminationType() { return terminationType_; }
  field::StartDate& startDate() { return startDate_; }
  field::EndDate& endDate() { return endDate_; }
  field::DeliveryType& deliveryType() { return deliveryType_; }
  field::MarginRatio& marginRatio() { return marginRatio_; }
  UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::PrevClosePx& prevClosePx() { return prevClosePx_; }
  field::QuoteRequestType& quoteRequestType() { return quoteRequestType_; }
  field::QuoteType& quoteType() { return quoteType_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::Side& side() { return side_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::OrderQty& orderQty() { return orderQty_; }
  field::CashOrderQty& cashOrderQty() { return cashOrderQty_; }
  field::OrderPercent& orderPercent() { return orderPercent_; }
  field::RoundingDirection& roundingDirection() { return roundingDirection_; }
  field::RoundingModulus& roundingModulus() { return roundingModulus_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::SettlDate2& settlDate2() { return settlDate2_; }
  field::OrderQty2& orderQty2() { return orderQty2_; }
  field::Currency& currency() { return currency_; }
  StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  LegsGroup3& legsGroup3() { return legsGroup3_; }
  QuoteQualifiersGroup& quoteQualifiersGroup() { return quoteQualifiersGroup_; }
  field::QuotePriceType& quotePriceType() { return quotePriceType_; }
  field::OrdType& ordType() { return ordType_; }
  field::ValidUntilTime& validUntilTime() { return validUntilTime_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  field::PriceType& priceType() { return priceType_; }
  field::Price& price() { return price_; }
  field::Price2& price2() { return price2_; }
  field::YieldType& yieldType() { return yieldType_; }
  field::Yield& yield() { return yield_; }
  field::YieldCalcDate& yieldCalcDate() { return yieldCalcDate_; }
  field::YieldRedemptionDate& yieldRedemptionDate() { return yieldRedemptionDate_; }
  field::YieldRedemptionPrice& yieldRedemptionPrice() { return yieldRedemptionPrice_; }
  field::YieldRedemptionPriceType& yieldRedemptionPriceType() { return yieldRedemptionPriceType_; }
  PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  field::AgreementDesc agreementDesc_;
  field::AgreementID agreementID_;
  field::AgreementDate agreementDate_;
  field::AgreementCurrency agreementCurrency_;
  field::TerminationType terminationType_;
  field::StartDate startDate_;
  field::EndDate endDate_;
  field::DeliveryType deliveryType_;
  field::MarginRatio marginRatio_;
  UnderlyingsGroup underlyingsGroup_;
  field::PrevClosePx prevClosePx_;
  field::QuoteRequestType quoteRequestType_;
  field::QuoteType quoteType_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::TradeOriginationDate tradeOriginationDate_;
  field::Side side_;
  field::QtyType qtyType_;
  field::OrderQty orderQty_;
  field::CashOrderQty cashOrderQty_;
  field::OrderPercent orderPercent_;
  field::RoundingDirection roundingDirection_;
  field::RoundingModulus roundingModulus_;
  field::SettlType settlType_;
  field::SettlDate settlDate_;
  field::SettlDate2 settlDate2_;
  field::OrderQty2 orderQty2_;
  field::Currency currency_;
  StipulationsGroup stipulationsGroup_;
  field::Account account_;
  field::AcctIDSource acctIDSource_;
  field::AccountType accountType_;
  LegsGroup3 legsGroup3_;
  QuoteQualifiersGroup quoteQualifiersGroup_;
  field::QuotePriceType quotePriceType_;
  field::OrdType ordType_;
  field::ValidUntilTime validUntilTime_;
  field::ExpireTime expireTime_;
  field::TransactTime transactTime_;
  field::Spread spread_;
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_;
  field::BenchmarkCurveName benchmarkCurveName_;
  field::BenchmarkCurvePoint benchmarkCurvePoint_;
  field::BenchmarkPrice benchmarkPrice_;
  field::BenchmarkPriceType benchmarkPriceType_;
  field::BenchmarkSecurityID benchmarkSecurityID_;
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_;
  field::PriceType priceType_;
  field::Price price_;
  field::Price2 price2_;
  field::YieldType yieldType_;
  field::Yield yield_;
  field::YieldCalcDate yieldCalcDate_;
  field::YieldRedemptionDate yieldRedemptionDate_;
  field::YieldRedemptionPrice yieldRedemptionPrice_;
  field::YieldRedemptionPriceType yieldRedemptionPriceType_;
  PartyIDsGroup partyIDsGroup_;
};

class RelatedSymGroup1 : public AbstractGroup {
 public:
  explicit RelatedSymGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noRelatedSym, &tags::symbol, [](AbstractMessage* m) -> Component* { return new RelatedSymGroup1Comp(m); }) {}

  LongRef& noRelatedSym() { return countField_; }
  RelatedSymGroup1Comp& relatedSymGroup1Comp(int ix) { return static_cast<RelatedSymGroup1Comp&>(*components_[ix]); }
};

class LegsGroup4Comp : public Component {
 public:
  explicit LegsGroup4Comp(AbstractMessage* message);

  field::LegSymbol& legSymbol() { return legSymbol_; }
  field::LegSymbolSfx& legSymbolSfx() { return legSymbolSfx_; }
  field::LegSecurityID& legSecurityID() { return legSecurityID_; }
  field::LegSecurityIDSource& legSecurityIDSource() { return legSecurityIDSource_; }
  LegSecurityAltIDGroup& legSecurityAltIDGroup() { return legSecurityAltIDGroup_; }
  field::LegProduct& legProduct() { return legProduct_; }
  field::LegCFICode& legCFICode() { return legCFICode_; }
  field::LegSecurityType& legSecurityType() { return legSecurityType_; }
  field::LegSecuritySubType& legSecuritySubType() { return legSecuritySubType_; }
  field::LegMaturityMonthYear& legMaturityMonthYear() { return legMaturityMonthYear_; }
  field::LegMaturityDate& legMaturityDate() { return legMaturityDate_; }
  field::LegCouponPaymentDate& legCouponPaymentDate() { return legCouponPaymentDate_; }
  field::LegIssueDate& legIssueDate() { return legIssueDate_; }
  field::LegRepoCollateralSecurityType& legRepoCollateralSecurityType() { return legRepoCollateralSecurityType_; }
  field::LegRepurchaseTerm& legRepurchaseTerm() { return legRepurchaseTerm_; }
  field::LegRepurchaseRate& legRepurchaseRate() { return legRepurchaseRate_; }
  field::LegFactor& legFactor() { return legFactor_; }
  field::LegCreditRating& legCreditRating() { return legCreditRating_; }
  field::LegInstrRegistry& legInstrRegistry() { return legInstrRegistry_; }
  field::LegCountryOfIssue& legCountryOfIssue() { return legCountryOfIssue_; }
  field::LegStateOrProvinceOfIssue& legStateOrProvinceOfIssue() { return legStateOrProvinceOfIssue_; }
  field::LegLocaleOfIssue& legLocaleOfIssue() { return legLocaleOfIssue_; }
  field::LegRedemptionDate& legRedemptionDate() { return legRedemptionDate_; }
  field::LegStrikePrice& legStrikePrice() { return legStrikePrice_; }
  field::LegStrikeCurrency& legStrikeCurrency() { return legStrikeCurrency_; }
  field::LegOptAttribute& legOptAttribute() { return legOptAttribute_; }
  field::LegContractMultiplier& legContractMultiplier() { return legContractMultiplier_; }
  field::LegCouponRate& legCouponRate() { return legCouponRate_; }
  field::LegSecurityExchange& legSecurityExchange() { return legSecurityExchange_; }
  field::LegIssuer& legIssuer() { return legIssuer_; }
  field::EncodedLegIssuerLen& encodedLegIssuerLen() { return encodedLegIssuerLen_; }
  field::EncodedLegIssuer& encodedLegIssuer() { return encodedLegIssuer_; }
  field::LegSecurityDesc& legSecurityDesc() { return legSecurityDesc_; }
  field::EncodedLegSecurityDescLen& encodedLegSecurityDescLen() { return encodedLegSecurityDescLen_; }
  field::EncodedLegSecurityDesc& encodedLegSecurityDesc() { return encodedLegSecurityDesc_; }
  field::LegRatioQty& legRatioQty() { return legRatioQty_; }
  field::LegSide& legSide() { return legSide_; }
  field::LegCurrency& legCurrency() { return legCurrency_; }
  field::LegPool& legPool() { return legPool_; }
  field::LegDatedDate& legDatedDate() { return legDatedDate_; }
  field::LegContractSettlMonth& legContractSettlMonth() { return legContractSettlMonth_; }
  field::LegInterestAccrualDate& legInterestAccrualDate() { return legInterestAccrualDate_; }
  field::LegQty& legQty() { return legQty_; }
  field::LegSwapType& legSwapType() { return legSwapType_; }
  field::LegSettlType& legSettlType() { return legSettlType_; }
  field::LegSettlDate& legSettlDate() { return legSettlDate_; }
  LegStipulationsGroup& legStipulationsGroup() { return legStipulationsGroup_; }
  NestedPartyIDsGroup& nestedPartyIDsGroup() { return nestedPartyIDsGroup_; }
  field::LegPriceType& legPriceType() { return legPriceType_; }
  field::LegBidPx& legBidPx() { return legBidPx_; }
  field::LegOfferPx& legOfferPx() { return legOfferPx_; }
  field::LegBenchmarkCurveCurrency& legBenchmarkCurveCurrency() { return legBenchmarkCurveCurrency_; }
  field::LegBenchmarkCurveName& legBenchmarkCurveName() { return legBenchmarkCurveName_; }
  field::LegBenchmarkCurvePoint& legBenchmarkCurvePoint() { return legBenchmarkCurvePoint_; }
  field::LegBenchmarkPrice& legBenchmarkPrice() { return legBenchmarkPrice_; }
  field::LegBenchmarkPriceType& legBenchmarkPriceType() { return legBenchmarkPriceType_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegSymbol legSymbol_;
  field::LegSymbolSfx legSymbolSfx_;
  field::LegSecurityID legSecurityID_;
  field::LegSecurityIDSource legSecurityIDSource_;
  LegSecurityAltIDGroup legSecurityAltIDGroup_;
  field::LegProduct legProduct_;
  field::LegCFICode legCFICode_;
  field::LegSecurityType legSecurityType_;
  field::LegSecuritySubType legSecuritySubType_;
  field::LegMaturityMonthYear legMaturityMonthYear_;
  field::LegMaturityDate legMaturityDate_;
  field::LegCouponPaymentDate legCouponPaymentDate_;
  field::LegIssueDate legIssueDate_;
  field::LegRepoCollateralSecurityType legRepoCollateralSecurityType_;
  field::LegRepurchaseTerm legRepurchaseTerm_;
  field::LegRepurchaseRate legRepurchaseRate_;
  field::LegFactor legFactor_;
  field::LegCreditRating legCreditRating_;
  field::LegInstrRegistry legInstrRegistry_;
  field::LegCountryOfIssue legCountryOfIssue_;
  field::LegStateOrProvinceOfIssue legStateOrProvinceOfIssue_;
  field::LegLocaleOfIssue legLocaleOfIssue_;
  field::LegRedemptionDate legRedemptionDate_;
  field::LegStrikePrice legStrikePrice_;
  field::LegStrikeCurrency legStrikeCurrency_;
  field::LegOptAttribute legOptAttribute_;
  field::LegContractMultiplier legContractMultiplier_;
  field::LegCouponRate legCouponRate_;
  field::LegSecurityExchange legSecurityExchange_;
  field::LegIssuer legIssuer_;
  field::EncodedLegIssuerLen encodedLegIssuerLen_;
  field::EncodedLegIssuer encodedLegIssuer_;
  field::LegSecurityDesc legSecurityDesc_;
  field::EncodedLegSecurityDescLen encodedLegSecurityDescLen_;
  field::EncodedLegSecurityDesc encodedLegSecurityDesc_;
  field::LegRatioQty legRatioQty_;
  field::LegSide legSide_;
  field::LegCurrency legCurrency_;
  field::LegPool legPool_;
  field::LegDatedDate legDatedDate_;
  field::LegContractSettlMonth legContractSettlMonth_;
  field::LegInterestAccrualDate legInterestAccrualDate_;
  field::LegQty legQty_;
  field::LegSwapType legSwapType_;
  field::LegSettlType legSettlType_;
  field::LegSettlDate legSettlDate_;
  LegStipulationsGroup legStipulationsGroup_;
  NestedPartyIDsGroup nestedPartyIDsGroup_;
  field::LegPriceType legPriceType_;
  field::LegBidPx legBidPx_;
  field::LegOfferPx legOfferPx_;
  field::LegBenchmarkCurveCurrency legBenchmarkCurveCurrency_;
  field::LegBenchmarkCurveName legBenchmarkCurveName_;
  field::LegBenchmarkCurvePoint legBenchmarkCurvePoint_;
  field::LegBenchmarkPrice legBenchmarkPrice_;
  field::LegBenchmarkPriceType legBenchmarkPriceType_;
};

class LegsGroup4 : public AbstractGroup {
 public:
  explicit LegsGroup4(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegs, &tags::legSymbol, [](AbstractMessage* m) -> Component* { return new LegsGroup4Comp(m); }) {}

  LongRef& noLegs() { return countField_; }
  LegsGroup4Comp& legsGroup4Comp(int ix) { return static_cast<LegsGroup4Comp&>(*components_[ix]); }
};

class SettlInstGroupComp : public Component {
 public:
  explicit SettlInstGroupComp(AbstractMessage* message);

  field::SettlInstID& settlInstID() { return settlInstID_; }
  field::SettlInstTransType& settlInstTransType() { return settlInstTransType_; }
  field::SettlInstRefID& settlInstRefID() { return settlInstRefID_; }
  PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Side& side() { return side_; }
  field::Product& product() { return product_; }
  field::SecurityType& securityType() { return securityType_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::EffectiveTime& effectiveTime() { return effectiveTime_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::LastUpdateTime& lastUpdateTime() { return lastUpdateTime_; }
  field::SettlDeliveryType& settlDeliveryType() { return settlDeliveryType_; }
  field::StandInstDbType& standInstDbType() { return standInstDbType_; }
  field::StandInstDbName& standInstDbName() { return standInstDbName_; }
  field::StandInstDbID& standInstDbID() { return standInstDbID_; }
  DlvyInstGroup& dlvyInstGroup() { return dlvyInstGroup_; }
  field::PaymentMethod& paymentMethod() { return paymentMethod_; }
  field::PaymentRef& paymentRef() { return paymentRef_; }
  field::CardHolderName& cardHolderName() { return cardHolderName_; }
  field::CardNumber& cardNumber() { return cardNumber_; }
  field::CardStartDate& cardStartDate() { return cardStartDate_; }
  field::CardExpDate& cardExpDate() { return cardExpDate_; }
  field::CardIssNum& cardIssNum() { return cardIssNum_; }
  field::PaymentDate& paymentDate() { return paymentDate_; }
  field::PaymentRemitterID& paymentRemitterID() { return paymentRemitterID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::SettlInstID settlInstID_;
  field::SettlInstTransType settlInstTransType_;
  field::SettlInstRefID settlInstRefID_;
  PartyIDsGroup partyIDsGroup_;
  field::Side side_;
  field::Product product_;
  field::SecurityType securityType_;
  field::CFICode cFICode_;
  field::EffectiveTime effectiveTime_;
  field::ExpireTime expireTime_;
  field::LastUpdateTime lastUpdateTime_;
  field::SettlDeliveryType settlDeliveryType_;
  field::StandInstDbType standInstDbType_;
  field::StandInstDbName standInstDbName_;
  field::StandInstDbID standInstDbID_;
  DlvyInstGroup dlvyInstGroup_;
  field::PaymentMethod paymentMethod_;
  field::PaymentRef paymentRef_;
  field::CardHolderName cardHolderName_;
  field::CardNumber cardNumber_;
  field::CardStartDate cardStartDate_;
  field::CardExpDate cardExpDate_;
  field::CardIssNum cardIssNum_;
  field::PaymentDate paymentDate_;
  field::PaymentRemitterID paymentRemitterID_;
};

class SettlInstGroup : public AbstractGroup {
 public:
  explicit SettlInstGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noSettlInst, &tags::settlInstID, [](AbstractMessage* m) -> Component* { return new SettlInstGroupComp(m); }) {}

  LongRef& noSettlInst() { return countField_; }
  SettlInstGroupComp& settlInstGroupComp(int ix) { return static_cast<SettlInstGroupComp&>(*components_[ix]); }
};

class MDEntryTypesGroupComp : public Component {
 public:
  explicit MDEntryTypesGroupComp(AbstractMessage* message);

  field::MDEntryType& mDEntryType() { return mDEntryType_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::MDEntryType mDEntryType_;
};

class MDEntryTypesGroup : public AbstractGroup {
 public:
  explicit MDEntryTypesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noMDEntryTypes, &tags::mDEntryType, [](AbstractMessage* m) -> Component* { return new MDEntryTypesGroupComp(m); }) {}

  LongRef& noMDEntryTypes() { return countField_; }
  MDEntryTypesGroupComp& mDEntryTypesGroupComp(int ix) { return static_cast<MDEntryTypesGroupComp&>(*components_[ix]); }
};

class RelatedSymGroup2Comp : public Component {
 public:
  explicit RelatedSymGroup2Comp(AbstractMessage* message);

  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  LegsGroup1& legsGroup1() { return legsGroup1_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  UnderlyingsGroup underlyingsGroup_;
  LegsGroup1 legsGroup1_;
};

class RelatedSymGroup2 : public AbstractGroup {
 public:
  explicit RelatedSymGroup2(AbstractMessage* message)
      : AbstractGroup(message, &tags::noRelatedSym, &tags::symbol, [](AbstractMessage* m) -> Component* { return new RelatedSymGroup2Comp(m); }) {}

  LongRef& noRelatedSym() { return countField_; }
  RelatedSymGroup2Comp& relatedSymGroup2Comp(int ix) { return static_cast<RelatedSymGroup2Comp&>(*components_[ix]); }
};

class MDEntriesGroupComp : public Component {
 public:
  explicit MDEntriesGroupComp(AbstractMessage* message);

  field::MDEntryType& mDEntryType() { return mDEntryType_; }
  field::MDEntryPx& mDEntryPx() { return mDEntryPx_; }
  field::Currency& currency() { return currency_; }
  field::MDEntrySize& mDEntrySize() { return mDEntrySize_; }
  field::MDEntryDate& mDEntryDate() { return mDEntryDate_; }
  field::MDEntryTime& mDEntryTime() { return mDEntryTime_; }
  field::TickDirection& tickDirection() { return tickDirection_; }
  field::MDMkt& mDMkt() { return mDMkt_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::QuoteCondition& quoteCondition() { return quoteCondition_; }
  field::TradeCondition& tradeCondition() { return tradeCondition_; }
  field::MDEntryOriginator& mDEntryOriginator() { return mDEntryOriginator_; }
  field::LocationID& locationID() { return locationID_; }
  field::DeskID& deskID() { return deskID_; }
  field::OpenCloseSettlFlag& openCloseSettlFlag() { return openCloseSettlFlag_; }
  field::TimeInForce& timeInForce() { return timeInForce_; }
  field::ExpireDate& expireDate() { return expireDate_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::MinQty& minQty() { return minQty_; }
  field::ExecInst& execInst() { return execInst_; }
  field::SellerDays& sellerDays() { return sellerDays_; }
  field::OrderID& orderID() { return orderID_; }
  field::QuoteEntryID& quoteEntryID() { return quoteEntryID_; }
  field::MDEntryBuyer& mDEntryBuyer() { return mDEntryBuyer_; }
  field::MDEntrySeller& mDEntrySeller() { return mDEntrySeller_; }
  field::NumberOfOrders& numberOfOrders() { return numberOfOrders_; }
  field::MDEntryPositionNo& mDEntryPositionNo() { return mDEntryPositionNo_; }
  field::Scope& scope() { return scope_; }
  field::PriceDelta& priceDelta() { return priceDelta_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::MDEntryType mDEntryType_;
  field::MDEntryPx mDEntryPx_;
  field::Currency currency_;
  field::MDEntrySize mDEntrySize_;
  field::MDEntryDate mDEntryDate_;
  field::MDEntryTime mDEntryTime_;
  field::TickDirection tickDirection_;
  field::MDMkt mDMkt_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::QuoteCondition quoteCondition_;
  field::TradeCondition tradeCondition_;
  field::MDEntryOriginator mDEntryOriginator_;
  field::LocationID locationID_;
  field::DeskID deskID_;
  field::OpenCloseSettlFlag openCloseSettlFlag_;
  field::TimeInForce timeInForce_;
  field::ExpireDate expireDate_;
  field::ExpireTime expireTime_;
  field::MinQty minQty_;
  field::ExecInst execInst_;
  field::SellerDays sellerDays_;
  field::OrderID orderID_;
  field::QuoteEntryID quoteEntryID_;
  field::MDEntryBuyer mDEntryBuyer_;
  field::MDEntrySeller mDEntrySeller_;
  field::NumberOfOrders numberOfOrders_;
  field::MDEntryPositionNo mDEntryPositionNo_;
  field::Scope scope_;
  field::PriceDelta priceDelta_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
};

class MDEntriesGroup : public AbstractGroup {
 public:
  explicit MDEntriesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noMDEntries, &tags::mDEntryType, [](AbstractMessage* m) -> Component* { return new MDEntriesGroupComp(m); }) {}

  LongRef& noMDEntries() { return countField_; }
  MDEntriesGroupComp& mDEntriesGroupComp(int ix) { return static_cast<MDEntriesGroupComp&>(*components_[ix]); }
};

class MDEntriesGroup1Comp : public Component {
 public:
  explicit MDEntriesGroup1Comp(AbstractMessage* message);

  field::MDUpdateAction& mDUpdateAction() { return mDUpdateAction_; }
  field::DeleteReason& deleteReason() { return deleteReason_; }
  field::MDEntryType& mDEntryType() { return mDEntryType_; }
  field::MDEntryID& mDEntryID() { return mDEntryID_; }
  field::MDEntryRefID& mDEntryRefID() { return mDEntryRefID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::FinancialStatus& financialStatus() { return financialStatus_; }
  field::CorporateAction& corporateAction() { return corporateAction_; }
  field::MDEntryPx& mDEntryPx() { return mDEntryPx_; }
  field::Currency& currency() { return currency_; }
  field::MDEntrySize& mDEntrySize() { return mDEntrySize_; }
  field::MDEntryDate& mDEntryDate() { return mDEntryDate_; }
  field::MDEntryTime& mDEntryTime() { return mDEntryTime_; }
  field::TickDirection& tickDirection() { return tickDirection_; }
  field::MDMkt& mDMkt() { return mDMkt_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::QuoteCondition& quoteCondition() { return quoteCondition_; }
  field::TradeCondition& tradeCondition() { return tradeCondition_; }
  field::MDEntryOriginator& mDEntryOriginator() { return mDEntryOriginator_; }
  field::LocationID& locationID() { return locationID_; }
  field::DeskID& deskID() { return deskID_; }
  field::OpenCloseSettlFlag& openCloseSettlFlag() { return openCloseSettlFlag_; }
  field::TimeInForce& timeInForce() { return timeInForce_; }
  field::ExpireDate& expireDate() { return expireDate_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::MinQty& minQty() { return minQty_; }
  field::ExecInst& execInst() { return execInst_; }
  field::SellerDays& sellerDays() { return sellerDays_; }
  field::OrderID& orderID() { return orderID_; }
  field::QuoteEntryID& quoteEntryID() { return quoteEntryID_; }
  field::MDEntryBuyer& mDEntryBuyer() { return mDEntryBuyer_; }
  field::MDEntrySeller& mDEntrySeller() { return mDEntrySeller_; }
  field::NumberOfOrders& numberOfOrders() { return numberOfOrders_; }
  field::MDEntryPositionNo& mDEntryPositionNo() { return mDEntryPositionNo_; }
  field::Scope& scope() { return scope_; }
  field::PriceDelta& priceDelta() { return priceDelta_; }
  field::NetChgPrevDay& netChgPrevDay() { return netChgPrevDay_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::MDUpdateAction mDUpdateAction_;
  field::DeleteReason deleteReason_;
  field::MDEntryType mDEntryType_;
  field::MDEntryID mDEntryID_;
  field::MDEntryRefID mDEntryRefID_;
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  UnderlyingsGroup underlyingsGroup_;
  LegsGroup1 legsGroup1_;
  field::FinancialStatus financialStatus_;
  field::CorporateAction corporateAction_;
  field::MDEntryPx mDEntryPx_;
  field::Currency currency_;
  field::MDEntrySize mDEntrySize_;
  field::MDEntryDate mDEntryDate_;
  field::MDEntryTime mDEntryTime_;
  field::TickDirection tickDirection_;
  field::MDMkt mDMkt_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::QuoteCondition quoteCondition_;
  field::TradeCondition tradeCondition_;
  field::MDEntryOriginator mDEntryOriginator_;
  field::LocationID locationID_;
  field::DeskID deskID_;
  field::OpenCloseSettlFlag openCloseSettlFlag_;
  field::TimeInForce timeInForce_;
  field::ExpireDate expireDate_;
  field::ExpireTime expireTime_;
  field::MinQty minQty_;
  field::ExecInst execInst_;
  field::SellerDays sellerDays_;
  field::OrderID orderID_;
  field::QuoteEntryID quoteEntryID_;
  field::MDEntryBuyer mDEntryBuyer_;
  field::MDEntrySeller mDEntrySeller_;
  field::NumberOfOrders numberOfOrders_;
  field::MDEntryPositionNo mDEntryPositionNo_;
  field::Scope scope_;
  field::PriceDelta priceDelta_;
  field::NetChgPrevDay netChgPrevDay_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
};

class MDEntriesGroup1 : public AbstractGroup {
 public:
  explicit MDEntriesGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noMDEntries, &tags::mDUpdateAction, [](AbstractMessage* m) -> Component* { return new MDEntriesGroup1Comp(m); }) {}

  LongRef& noMDEntries() { return countField_; }
  MDEntriesGroup1Comp& mDEntriesGroup1Comp(int ix) { return static_cast<MDEntriesGroup1Comp&>(*components_[ix]); }
};

class AltMDSourceGroupComp : public Component {
 public:
  explicit AltMDSourceGroupComp(AbstractMessage* message);

  field::AltMDSourceID& altMDSourceID() { return altMDSourceID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::AltMDSourceID altMDSourceID_;
};

class AltMDSourceGroup : public AbstractGroup {
 public:
  explicit AltMDSourceGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noAltMDSource, &tags::altMDSourceID, [](AbstractMessage* m) -> Component* { return new AltMDSourceGroupComp(m); }) {}

  LongRef& noAltMDSource() { return countField_; }
  AltMDSourceGroupComp& altMDSourceGroupComp(int ix) { return static_cast<AltMDSourceGroupComp&>(*components_[ix]); }
};

class QuoteEntriesGroupComp : public Component {
 public:
  explicit QuoteEntriesGroupComp(AbstractMessage* message);

  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::AgreementDesc& agreementDesc() { return agreementDesc_; }
  field::AgreementID& agreementID() { return agreementID_; }
  field::AgreementDate& agreementDate() { return agreementDate_; }
  field::AgreementCurrency& agreementCurrency() { return agreementCurrency_; }
  field::TerminationType& terminationType() { return terminationType_; }
  field::StartDate& startDate() { return startDate_; }
  field::EndDate& endDate() { return endDate_; }
  field::DeliveryType& deliveryType() { return deliveryType_; }
  field::MarginRatio& marginRatio() { return marginRatio_; }
  UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  LegsGroup1& legsGroup1() { return legsGroup1_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  field::AgreementDesc agreementDesc_;
  field::AgreementID agreementID_;
  field::AgreementDate agreementDate_;
  field::AgreementCurrency agreementCurrency_;
  field::TerminationType terminationType_;
  field::StartDate startDate_;
  field::EndDate endDate_;
  field::DeliveryType deliveryType_;
  field::MarginRatio marginRatio_;
  UnderlyingsGroup underlyingsGroup_;
  LegsGroup1 legsGroup1_;
};

class QuoteEntriesGroup : public AbstractGroup {
 public:
  explicit QuoteEntriesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noQuoteEntries, &tags::symbol, [](AbstractMessage* m) -> Component* { return new QuoteEntriesGroupComp(m); }) {}

  LongRef& noQuoteEntries() { return countField_; }
  QuoteEntriesGroupComp& quoteEntriesGroupComp(int ix) { return static_cast<QuoteEntriesGroupComp&>(*components_[ix]); }
};

class QuoteEntriesGroup1Comp : public Component {
 public:
  explicit QuoteEntriesGroup1Comp(AbstractMessage* message);

  field::QuoteEntryID& quoteEntryID() { return quoteEntryID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::BidPx& bidPx() { return bidPx_; }
  field::OfferPx& offerPx() { return offerPx_; }
  field::BidSize& bidSize() { return bidSize_; }
  field::OfferSize& offerSize() { return offerSize_; }
  field::ValidUntilTime& validUntilTime() { return validUntilTime_; }
  field::BidSpotRate& bidSpotRate() { return bidSpotRate_; }
  field::OfferSpotRate& offerSpotRate() { return offerSpotRate_; }
  field::BidForwardPoints& bidForwardPoints() { return bidForwardPoints_; }
  field::OfferForwardPoints& offerForwardPoints() { return offerForwardPoints_; }
  field::MidPx& midPx() { return midPx_; }
  field::BidYield& bidYield() { return bidYield_; }
  field::MidYield& midYield() { return midYield_; }
  field::OfferYield& offerYield() { return offerYield_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::OrdType& ordType() { return ordType_; }
  field::SettlDate2& settlDate2() { return settlDate2_; }
  field::OrderQty2& orderQty2() { return orderQty2_; }
  field::BidForwardPoints2& bidForwardPoints2() { return bidForwardPoints2_; }
  field::OfferForwardPoints2& offerForwardPoints2() { return offerForwardPoints2_; }
  field::Currency& currency() { return currency_; }
  field::QuoteEntryRejectReason& quoteEntryRejectReason() { return quoteEntryRejectReason_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::QuoteEntryID quoteEntryID_;
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  LegsGroup1 legsGroup1_;
  field::BidPx bidPx_;
  field::OfferPx offerPx_;
  field::BidSize bidSize_;
  field::OfferSize offerSize_;
  field::ValidUntilTime validUntilTime_;
  field::BidSpotRate bidSpotRate_;
  field::OfferSpotRate offerSpotRate_;
  field::BidForwardPoints bidForwardPoints_;
  field::OfferForwardPoints offerForwardPoints_;
  field::MidPx midPx_;
  field::BidYield bidYield_;
  field::MidYield midYield_;
  field::OfferYield offerYield_;
  field::TransactTime transactTime_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::SettlDate settlDate_;
  field::OrdType ordType_;
  field::SettlDate2 settlDate2_;
  field::OrderQty2 orderQty2_;
  field::BidForwardPoints2 bidForwardPoints2_;
  field::OfferForwardPoints2 offerForwardPoints2_;
  field::Currency currency_;
  field::QuoteEntryRejectReason quoteEntryRejectReason_;
};

class QuoteEntriesGroup1 : public AbstractGroup {
 public:
  explicit QuoteEntriesGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noQuoteEntries, &tags::quoteEntryID, [](AbstractMessage* m) -> Component* { return new QuoteEntriesGroup1Comp(m); }) {}

  LongRef& noQuoteEntries() { return countField_; }
  QuoteEntriesGroup1Comp& quoteEntriesGroup1Comp(int ix) { return static_cast<QuoteEntriesGroup1Comp&>(*components_[ix]); }
};

class QuoteSetsGroupComp : public Component {
 public:
  explicit QuoteSetsGroupComp(AbstractMessage* message);

  field::QuoteSetID& quoteSetID() { return quoteSetID_; }
  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
  field::UnderlyingProduct& underlyingProduct() { return underlyingProduct_; }
  field::UnderlyingCFICode& underlyingCFICode() { return underlyingCFICode_; }
  field::UnderlyingSecurityType& underlyingSecurityType() { return underlyingSecurityType_; }
  field::UnderlyingSecuritySubType& underlyingSecuritySubType() { return underlyingSecuritySubType_; }
  field::UnderlyingMaturityMonthYear& underlyingMaturityMonthYear() { return underlyingMaturityMonthYear_; }
  field::UnderlyingMaturityDate& underlyingMaturityDate() { return underlyingMaturityDate_; }
  field::UnderlyingPutOrCall& underlyingPutOrCall() { return underlyingPutOrCall_; }
  field::UnderlyingCouponPaymentDate& underlyingCouponPaymentDate() { return underlyingCouponPaymentDate_; }
  field::UnderlyingIssueDate& underlyingIssueDate() { return underlyingIssueDate_; }
  field::UnderlyingRepoCollateralSecurityType& underlyingRepoCollateralSecurityType() { return underlyingRepoCollateralSecurityType_; }
  field::UnderlyingRepurchaseTerm& underlyingRepurchaseTerm() { return underlyingRepurchaseTerm_; }
  field::UnderlyingRepurchaseRate& underlyingRepurchaseRate() { return underlyingRepurchaseRate_; }
  field::UnderlyingFactor& underlyingFactor() { return underlyingFactor_; }
  field::UnderlyingCreditRating& underlyingCreditRating() { return underlyingCreditRating_; }
  field::UnderlyingInstrRegistry& underlyingInstrRegistry() { return underlyingInstrRegistry_; }
  field::UnderlyingCountryOfIssue& underlyingCountryOfIssue() { return underlyingCountryOfIssue_; }
  field::UnderlyingStateOrProvinceOfIssue& underlyingStateOrProvinceOfIssue() { return underlyingStateOrProvinceOfIssue_; }
  field::UnderlyingLocaleOfIssue& underlyingLocaleOfIssue() { return underlyingLocaleOfIssue_; }
  field::UnderlyingRedemptionDate& underlyingRedemptionDate() { return underlyingRedemptionDate_; }
  field::UnderlyingStrikePrice& underlyingStrikePrice() { return underlyingStrikePrice_; }
  field::UnderlyingStrikeCurrency& underlyingStrikeCurrency() { return underlyingStrikeCurrency_; }
  field::UnderlyingOptAttribute& underlyingOptAttribute() { return underlyingOptAttribute_; }
  field::UnderlyingContractMultiplier& underlyingContractMultiplier() { return underlyingContractMultiplier_; }
  field::UnderlyingCouponRate& underlyingCouponRate() { return underlyingCouponRate_; }
  field::UnderlyingSecurityExchange& underlyingSecurityExchange() { return underlyingSecurityExchange_; }
  field::UnderlyingIssuer& underlyingIssuer() { return underlyingIssuer_; }
  field::EncodedUnderlyingIssuerLen& encodedUnderlyingIssuerLen() { return encodedUnderlyingIssuerLen_; }
  field::EncodedUnderlyingIssuer& encodedUnderlyingIssuer() { return encodedUnderlyingIssuer_; }
  field::UnderlyingSecurityDesc& underlyingSecurityDesc() { return underlyingSecurityDesc_; }
  field::EncodedUnderlyingSecurityDescLen& encodedUnderlyingSecurityDescLen() { return encodedUnderlyingSecurityDescLen_; }
  field::EncodedUnderlyingSecurityDesc& encodedUnderlyingSecurityDesc() { return encodedUnderlyingSecurityDesc_; }
  field::UnderlyingCPProgram& underlyingCPProgram() { return underlyingCPProgram_; }
  field::UnderlyingCPRegType& underlyingCPRegType() { return underlyingCPRegType_; }
  field::UnderlyingCurrency& underlyingCurrency() { return underlyingCurrency_; }
  field::UnderlyingQty& underlyingQty() { return underlyingQty_; }
  field::UnderlyingPx& underlyingPx() { return underlyingPx_; }
  field::UnderlyingDirtyPrice& underlyingDirtyPrice() { return underlyingDirtyPrice_; }
  field::UnderlyingEndPrice& underlyingEndPrice() { return underlyingEndPrice_; }
  field::UnderlyingStartValue& underlyingStartValue() { return underlyingStartValue_; }
  field::UnderlyingCurrentValue& underlyingCurrentValue() { return underlyingCurrentValue_; }
  field::UnderlyingEndValue& underlyingEndValue() { return underlyingEndValue_; }
  UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }
  field::TotNoQuoteEntries& totNoQuoteEntries() { return totNoQuoteEntries_; }
  field::LastFragment& lastFragment() { return lastFragment_; }
  QuoteEntriesGroup1& quoteEntriesGroup1() { return quoteEntriesGroup1_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::QuoteSetID quoteSetID_;
  field::UnderlyingSymbol underlyingSymbol_;
  field::UnderlyingSymbolSfx underlyingSymbolSfx_;
  field::UnderlyingSecurityID underlyingSecurityID_;
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_;
  UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_;
  field::UnderlyingProduct underlyingProduct_;
  field::UnderlyingCFICode underlyingCFICode_;
  field::UnderlyingSecurityType underlyingSecurityType_;
  field::UnderlyingSecuritySubType underlyingSecuritySubType_;
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_;
  field::UnderlyingMaturityDate underlyingMaturityDate_;
  field::UnderlyingPutOrCall underlyingPutOrCall_;
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_;
  field::UnderlyingIssueDate underlyingIssueDate_;
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_;
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_;
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_;
  field::UnderlyingFactor underlyingFactor_;
  field::UnderlyingCreditRating underlyingCreditRating_;
  field::UnderlyingInstrRegistry underlyingInstrRegistry_;
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_;
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_;
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_;
  field::UnderlyingRedemptionDate underlyingRedemptionDate_;
  field::UnderlyingStrikePrice underlyingStrikePrice_;
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_;
  field::UnderlyingOptAttribute underlyingOptAttribute_;
  field::UnderlyingContractMultiplier underlyingContractMultiplier_;
  field::UnderlyingCouponRate underlyingCouponRate_;
  field::UnderlyingSecurityExchange underlyingSecurityExchange_;
  field::UnderlyingIssuer underlyingIssuer_;
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_;
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_;
  field::UnderlyingSecurityDesc underlyingSecurityDesc_;
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_;
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_;
  field::UnderlyingCPProgram underlyingCPProgram_;
  field::UnderlyingCPRegType underlyingCPRegType_;
  field::UnderlyingCurrency underlyingCurrency_;
  field::UnderlyingQty underlyingQty_;
  field::UnderlyingPx underlyingPx_;
  field::UnderlyingDirtyPrice underlyingDirtyPrice_;
  field::UnderlyingEndPrice underlyingEndPrice_;
  field::UnderlyingStartValue underlyingStartValue_;
  field::UnderlyingCurrentValue underlyingCurrentValue_;
  field::UnderlyingEndValue underlyingEndValue_;
  UnderlyingStipsGroup underlyingStipsGroup_;
  field::TotNoQuoteEntries totNoQuoteEntries_;
  field::LastFragment lastFragment_;
  QuoteEntriesGroup1 quoteEntriesGroup1_;
};

class QuoteSetsGroup : public AbstractGroup {
 public:
  explicit QuoteSetsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noQuoteSets, &tags::quoteSetID, [](AbstractMessage* m) -> Component* { return new QuoteSetsGroupComp(m); }) {}

  LongRef& noQuoteSets() { return countField_; }
  QuoteSetsGroupComp& quoteSetsGroupComp(int ix) { return static_cast<QuoteSetsGroupComp&>(*components_[ix]); }
};

class QuoteEntriesGroup2Comp : public Component {
 public:
  explicit QuoteEntriesGroup2Comp(AbstractMessage* message);

  field::QuoteEntryID& quoteEntryID() { return quoteEntryID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::BidPx& bidPx() { return bidPx_; }
  field::OfferPx& offerPx() { return offerPx_; }
  field::BidSize& bidSize() { return bidSize_; }
  field::OfferSize& offerSize() { return offerSize_; }
  field::ValidUntilTime& validUntilTime() { return validUntilTime_; }
  field::BidSpotRate& bidSpotRate() { return bidSpotRate_; }
  field::OfferSpotRate& offerSpotRate() { return offerSpotRate_; }
  field::BidForwardPoints& bidForwardPoints() { return bidForwardPoints_; }
  field::OfferForwardPoints& offerForwardPoints() { return offerForwardPoints_; }
  field::MidPx& midPx() { return midPx_; }
  field::BidYield& bidYield() { return bidYield_; }
  field::MidYield& midYield() { return midYield_; }
  field::OfferYield& offerYield() { return offerYield_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::OrdType& ordType() { return ordType_; }
  field::SettlDate2& settlDate2() { return settlDate2_; }
  field::OrderQty2& orderQty2() { return orderQty2_; }
  field::BidForwardPoints2& bidForwardPoints2() { return bidForwardPoints2_; }
  field::OfferForwardPoints2& offerForwardPoints2() { return offerForwardPoints2_; }
  field::Currency& currency() { return currency_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::QuoteEntryID quoteEntryID_;
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  LegsGroup1 legsGroup1_;
  field::BidPx bidPx_;
  field::OfferPx offerPx_;
  field::BidSize bidSize_;
  field::OfferSize offerSize_;
  field::ValidUntilTime validUntilTime_;
  field::BidSpotRate bidSpotRate_;
  field::OfferSpotRate offerSpotRate_;
  field::BidForwardPoints bidForwardPoints_;
  field::OfferForwardPoints offerForwardPoints_;
  field::MidPx midPx_;
  field::BidYield bidYield_;
  field::MidYield midYield_;
  field::OfferYield offerYield_;
  field::TransactTime transactTime_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::SettlDate settlDate_;
  field::OrdType ordType_;
  field::SettlDate2 settlDate2_;
  field::OrderQty2 orderQty2_;
  field::BidForwardPoints2 bidForwardPoints2_;
  field::OfferForwardPoints2 offerForwardPoints2_;
  field::Currency currency_;
};

class QuoteEntriesGroup2 : public AbstractGroup {
 public:
  explicit QuoteEntriesGroup2(AbstractMessage* message)
      : AbstractGroup(message, &tags::noQuoteEntries, &tags::quoteEntryID, [](AbstractMessage* m) -> Component* { return new QuoteEntriesGroup2Comp(m); }) {}

  LongRef& noQuoteEntries() { return countField_; }
  QuoteEntriesGroup2Comp& quoteEntriesGroup2Comp(int ix) { return static_cast<QuoteEntriesGroup2Comp&>(*components_[ix]); }
};

class QuoteSetsGroup1Comp : public Component {
 public:
  explicit QuoteSetsGroup1Comp(AbstractMessage* message);

  field::QuoteSetID& quoteSetID() { return quoteSetID_; }
  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
  field::UnderlyingProduct& underlyingProduct() { return underlyingProduct_; }
  field::UnderlyingCFICode& underlyingCFICode() { return underlyingCFICode_; }
  field::UnderlyingSecurityType& underlyingSecurityType() { return underlyingSecurityType_; }
  field::UnderlyingSecuritySubType& underlyingSecuritySubType() { return underlyingSecuritySubType_; }
  field::UnderlyingMaturityMonthYear& underlyingMaturityMonthYear() { return underlyingMaturityMonthYear_; }
  field::UnderlyingMaturityDate& underlyingMaturityDate() { return underlyingMaturityDate_; }
  field::UnderlyingPutOrCall& underlyingPutOrCall() { return underlyingPutOrCall_; }
  field::UnderlyingCouponPaymentDate& underlyingCouponPaymentDate() { return underlyingCouponPaymentDate_; }
  field::UnderlyingIssueDate& underlyingIssueDate() { return underlyingIssueDate_; }
  field::UnderlyingRepoCollateralSecurityType& underlyingRepoCollateralSecurityType() { return underlyingRepoCollateralSecurityType_; }
  field::UnderlyingRepurchaseTerm& underlyingRepurchaseTerm() { return underlyingRepurchaseTerm_; }
  field::UnderlyingRepurchaseRate& underlyingRepurchaseRate() { return underlyingRepurchaseRate_; }
  field::UnderlyingFactor& underlyingFactor() { return underlyingFactor_; }
  field::UnderlyingCreditRating& underlyingCreditRating() { return underlyingCreditRating_; }
  field::UnderlyingInstrRegistry& underlyingInstrRegistry() { return underlyingInstrRegistry_; }
  field::UnderlyingCountryOfIssue& underlyingCountryOfIssue() { return underlyingCountryOfIssue_; }
  field::UnderlyingStateOrProvinceOfIssue& underlyingStateOrProvinceOfIssue() { return underlyingStateOrProvinceOfIssue_; }
  field::UnderlyingLocaleOfIssue& underlyingLocaleOfIssue() { return underlyingLocaleOfIssue_; }
  field::UnderlyingRedemptionDate& underlyingRedemptionDate() { return underlyingRedemptionDate_; }
  field::UnderlyingStrikePrice& underlyingStrikePrice() { return underlyingStrikePrice_; }
  field::UnderlyingStrikeCurrency& underlyingStrikeCurrency() { return underlyingStrikeCurrency_; }
  field::UnderlyingOptAttribute& underlyingOptAttribute() { return underlyingOptAttribute_; }
  field::UnderlyingContractMultiplier& underlyingContractMultiplier() { return underlyingContractMultiplier_; }
  field::UnderlyingCouponRate& underlyingCouponRate() { return underlyingCouponRate_; }
  field::UnderlyingSecurityExchange& underlyingSecurityExchange() { return underlyingSecurityExchange_; }
  field::UnderlyingIssuer& underlyingIssuer() { return underlyingIssuer_; }
  field::EncodedUnderlyingIssuerLen& encodedUnderlyingIssuerLen() { return encodedUnderlyingIssuerLen_; }
  field::EncodedUnderlyingIssuer& encodedUnderlyingIssuer() { return encodedUnderlyingIssuer_; }
  field::UnderlyingSecurityDesc& underlyingSecurityDesc() { return underlyingSecurityDesc_; }
  field::EncodedUnderlyingSecurityDescLen& encodedUnderlyingSecurityDescLen() { return encodedUnderlyingSecurityDescLen_; }
  field::EncodedUnderlyingSecurityDesc& encodedUnderlyingSecurityDesc() { return encodedUnderlyingSecurityDesc_; }
  field::UnderlyingCPProgram& underlyingCPProgram() { return underlyingCPProgram_; }
  field::UnderlyingCPRegType& underlyingCPRegType() { return underlyingCPRegType_; }
  field::UnderlyingCurrency& underlyingCurrency() { return underlyingCurrency_; }
  field::UnderlyingQty& underlyingQty() { return underlyingQty_; }
  field::UnderlyingPx& underlyingPx() { return underlyingPx_; }
  field::UnderlyingDirtyPrice& underlyingDirtyPrice() { return underlyingDirtyPrice_; }
  field::UnderlyingEndPrice& underlyingEndPrice() { return underlyingEndPrice_; }
  field::UnderlyingStartValue& underlyingStartValue() { return underlyingStartValue_; }
  field::UnderlyingCurrentValue& underlyingCurrentValue() { return underlyingCurrentValue_; }
  field::UnderlyingEndValue& underlyingEndValue() { return underlyingEndValue_; }
  UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }
  field::QuoteSetValidUntilTime& quoteSetValidUntilTime() { return quoteSetValidUntilTime_; }
  field::TotNoQuoteEntries& totNoQuoteEntries() { return totNoQuoteEntries_; }
  field::LastFragment& lastFragment() { return lastFragment_; }
  QuoteEntriesGroup2& quoteEntriesGroup2() { return quoteEntriesGroup2_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::QuoteSetID quoteSetID_;
  field::UnderlyingSymbol underlyingSymbol_;
  field::UnderlyingSymbolSfx underlyingSymbolSfx_;
  field::UnderlyingSecurityID underlyingSecurityID_;
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_;
  UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_;
  field::UnderlyingProduct underlyingProduct_;
  field::UnderlyingCFICode underlyingCFICode_;
  field::UnderlyingSecurityType underlyingSecurityType_;
  field::UnderlyingSecuritySubType underlyingSecuritySubType_;
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_;
  field::UnderlyingMaturityDate underlyingMaturityDate_;
  field::UnderlyingPutOrCall underlyingPutOrCall_;
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_;
  field::UnderlyingIssueDate underlyingIssueDate_;
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_;
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_;
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_;
  field::UnderlyingFactor underlyingFactor_;
  field::UnderlyingCreditRating underlyingCreditRating_;
  field::UnderlyingInstrRegistry underlyingInstrRegistry_;
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_;
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_;
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_;
  field::UnderlyingRedemptionDate underlyingRedemptionDate_;
  field::UnderlyingStrikePrice underlyingStrikePrice_;
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_;
  field::UnderlyingOptAttribute underlyingOptAttribute_;
  field::UnderlyingContractMultiplier underlyingContractMultiplier_;
  field::UnderlyingCouponRate underlyingCouponRate_;
  field::UnderlyingSecurityExchange underlyingSecurityExchange_;
  field::UnderlyingIssuer underlyingIssuer_;
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_;
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_;
  field::UnderlyingSecurityDesc underlyingSecurityDesc_;
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_;
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_;
  field::UnderlyingCPProgram underlyingCPProgram_;
  field::UnderlyingCPRegType underlyingCPRegType_;
  field::UnderlyingCurrency underlyingCurrency_;
  field::UnderlyingQty underlyingQty_;
  field::UnderlyingPx underlyingPx_;
  field::UnderlyingDirtyPrice underlyingDirtyPrice_;
  field::UnderlyingEndPrice underlyingEndPrice_;
  field::UnderlyingStartValue underlyingStartValue_;
  field::UnderlyingCurrentValue underlyingCurrentValue_;
  field::UnderlyingEndValue underlyingEndValue_;
  UnderlyingStipsGroup underlyingStipsGroup_;
  field::QuoteSetValidUntilTime quoteSetValidUntilTime_;
  field::TotNoQuoteEntries totNoQuoteEntries_;
  field::LastFragment lastFragment_;
  QuoteEntriesGroup2 quoteEntriesGroup2_;
};

class QuoteSetsGroup1 : public AbstractGroup {
 public:
  explicit QuoteSetsGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noQuoteSets, &tags::quoteSetID, [](AbstractMessage* m) -> Component* { return new QuoteSetsGroup1Comp(m); }) {}

  LongRef& noQuoteSets() { return countField_; }
  QuoteSetsGroup1Comp& quoteSetsGroup1Comp(int ix) { return static_cast<QuoteSetsGroup1Comp&>(*components_[ix]); }
};

class BidDescriptorsGroupComp : public Component {
 public:
  explicit BidDescriptorsGroupComp(AbstractMessage* message);

  field::BidDescriptorType& bidDescriptorType() { return bidDescriptorType_; }
  field::BidDescriptor& bidDescriptor() { return bidDescriptor_; }
  field::SideValueInd& sideValueInd() { return sideValueInd_; }
  field::LiquidityValue& liquidityValue() { return liquidityValue_; }
  field::LiquidityNumSecurities& liquidityNumSecurities() { return liquidityNumSecurities_; }
  field::LiquidityPctLow& liquidityPctLow() { return liquidityPctLow_; }
  field::LiquidityPctHigh& liquidityPctHigh() { return liquidityPctHigh_; }
  field::EFPTrackingError& eFPTrackingError() { return eFPTrackingError_; }
  field::FairValue& fairValue() { return fairValue_; }
  field::OutsideIndexPct& outsideIndexPct() { return outsideIndexPct_; }
  field::ValueOfFutures& valueOfFutures() { return valueOfFutures_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::BidDescriptorType bidDescriptorType_;
  field::BidDescriptor bidDescriptor_;
  field::SideValueInd sideValueInd_;
  field::LiquidityValue liquidityValue_;
  field::LiquidityNumSecurities liquidityNumSecurities_;
  field::LiquidityPctLow liquidityPctLow_;
  field::LiquidityPctHigh liquidityPctHigh_;
  field::EFPTrackingError eFPTrackingError_;
  field::FairValue fairValue_;
  field::OutsideIndexPct outsideIndexPct_;
  field::ValueOfFutures valueOfFutures_;
};

class BidDescriptorsGroup : public AbstractGroup {
 public:
  explicit BidDescriptorsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noBidDescriptors, &tags::bidDescriptorType, [](AbstractMessage* m) -> Component* { return new BidDescriptorsGroupComp(m); }) {}

  LongRef& noBidDescriptors() { return countField_; }
  BidDescriptorsGroupComp& bidDescriptorsGroupComp(int ix) { return static_cast<BidDescriptorsGroupComp&>(*components_[ix]); }
};

class BidComponentsGroupComp : public Component {
 public:
  explicit BidComponentsGroupComp(AbstractMessage* message);

  field::ListID& listID() { return listID_; }
  field::Side& side() { return side_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::NetGrossInd& netGrossInd() { return netGrossInd_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::ListID listID_;
  field::Side side_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::NetGrossInd netGrossInd_;
  field::SettlType settlType_;
  field::SettlDate settlDate_;
  field::Account account_;
  field::AcctIDSource acctIDSource_;
};

class BidComponentsGroup : public AbstractGroup {
 public:
  explicit BidComponentsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noBidComponents, &tags::listID, [](AbstractMessage* m) -> Component* { return new BidComponentsGroupComp(m); }) {}

  LongRef& noBidComponents() { return countField_; }
  BidComponentsGroupComp& bidComponentsGroupComp(int ix) { return static_cast<BidComponentsGroupComp&>(*components_[ix]); }
};

class BidComponentsGroup1Comp : public Component {
 public:
  explicit BidComponentsGroup1Comp(AbstractMessage* message);

  field::Commission& commission() { return commission_; }
  field::CommType& commType() { return commType_; }
  field::CommCurrency& commCurrency() { return commCurrency_; }
  field::FundRenewWaiv& fundRenewWaiv() { return fundRenewWaiv_; }
  field::ListID& listID() { return listID_; }
  field::Country& country() { return country_; }
  field::Side& side() { return side_; }
  field::Price& price() { return price_; }
  field::PriceType& priceType() { return priceType_; }
  field::FairValue& fairValue() { return fairValue_; }
  field::NetGrossInd& netGrossInd() { return netGrossInd_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Commission commission_;
  field::CommType commType_;
  field::CommCurrency commCurrency_;
  field::FundRenewWaiv fundRenewWaiv_;
  field::ListID listID_;
  field::Country country_;
  field::Side side_;
  field::Price price_;
  field::PriceType priceType_;
  field::FairValue fairValue_;
  field::NetGrossInd netGrossInd_;
  field::SettlType settlType_;
  field::SettlDate settlDate_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
};

class BidComponentsGroup1 : public AbstractGroup {
 public:
  explicit BidComponentsGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noBidComponents, &tags::commission, [](AbstractMessage* m) -> Component* { return new BidComponentsGroup1Comp(m); }) {}

  LongRef& noBidComponents() { return countField_; }
  BidComponentsGroup1Comp& bidComponentsGroup1Comp(int ix) { return static_cast<BidComponentsGroup1Comp&>(*components_[ix]); }
};

class StrikesGroupComp : public Component {
 public:
  explicit StrikesGroupComp(AbstractMessage* message);

  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
};

class StrikesGroup : public AbstractGroup {
 public:
  explicit StrikesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noStrikes, &tags::symbol, [](AbstractMessage* m) -> Component* { return new StrikesGroupComp(m); }) {}

  LongRef& noStrikes() { return countField_; }
  StrikesGroupComp& strikesGroupComp(int ix) { return static_cast<StrikesGroupComp&>(*components_[ix]); }
};

class UnderlyingsGroup1Comp : public Component {
 public:
  explicit UnderlyingsGroup1Comp(AbstractMessage* message);

  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
  field::UnderlyingProduct& underlyingProduct() { return underlyingProduct_; }
  field::UnderlyingCFICode& underlyingCFICode() { return underlyingCFICode_; }
  field::UnderlyingSecurityType& underlyingSecurityType() { return underlyingSecurityType_; }
  field::UnderlyingSecuritySubType& underlyingSecuritySubType() { return underlyingSecuritySubType_; }
  field::UnderlyingMaturityMonthYear& underlyingMaturityMonthYear() { return underlyingMaturityMonthYear_; }
  field::UnderlyingMaturityDate& underlyingMaturityDate() { return underlyingMaturityDate_; }
  field::UnderlyingPutOrCall& underlyingPutOrCall() { return underlyingPutOrCall_; }
  field::UnderlyingCouponPaymentDate& underlyingCouponPaymentDate() { return underlyingCouponPaymentDate_; }
  field::UnderlyingIssueDate& underlyingIssueDate() { return underlyingIssueDate_; }
  field::UnderlyingRepoCollateralSecurityType& underlyingRepoCollateralSecurityType() { return underlyingRepoCollateralSecurityType_; }
  field::UnderlyingRepurchaseTerm& underlyingRepurchaseTerm() { return underlyingRepurchaseTerm_; }
  field::UnderlyingRepurchaseRate& underlyingRepurchaseRate() { return underlyingRepurchaseRate_; }
  field::UnderlyingFactor& underlyingFactor() { return underlyingFactor_; }
  field::UnderlyingCreditRating& underlyingCreditRating() { return underlyingCreditRating_; }
  field::UnderlyingInstrRegistry& underlyingInstrRegistry() { return underlyingInstrRegistry_; }
  field::UnderlyingCountryOfIssue& underlyingCountryOfIssue() { return underlyingCountryOfIssue_; }
  field::UnderlyingStateOrProvinceOfIssue& underlyingStateOrProvinceOfIssue() { return underlyingStateOrProvinceOfIssue_; }
  field::UnderlyingLocaleOfIssue& underlyingLocaleOfIssue() { return underlyingLocaleOfIssue_; }
  field::UnderlyingRedemptionDate& underlyingRedemptionDate() { return underlyingRedemptionDate_; }
  field::UnderlyingStrikePrice& underlyingStrikePrice() { return underlyingStrikePrice_; }
  field::UnderlyingStrikeCurrency& underlyingStrikeCurrency() { return underlyingStrikeCurrency_; }
  field::UnderlyingOptAttribute& underlyingOptAttribute() { return underlyingOptAttribute_; }
  field::UnderlyingContractMultiplier& underlyingContractMultiplier() { return underlyingContractMultiplier_; }
  field::UnderlyingCouponRate& underlyingCouponRate() { return underlyingCouponRate_; }
  field::UnderlyingSecurityExchange& underlyingSecurityExchange() { return underlyingSecurityExchange_; }
  field::UnderlyingIssuer& underlyingIssuer() { return underlyingIssuer_; }
  field::EncodedUnderlyingIssuerLen& encodedUnderlyingIssuerLen() { return encodedUnderlyingIssuerLen_; }
  field::EncodedUnderlyingIssuer& encodedUnderlyingIssuer() { return encodedUnderlyingIssuer_; }
  field::UnderlyingSecurityDesc& underlyingSecurityDesc() { return underlyingSecurityDesc_; }
  field::EncodedUnderlyingSecurityDescLen& encodedUnderlyingSecurityDescLen() { return encodedUnderlyingSecurityDescLen_; }
  field::EncodedUnderlyingSecurityDesc& encodedUnderlyingSecurityDesc() { return encodedUnderlyingSecurityDesc_; }
  field::UnderlyingCPProgram& underlyingCPProgram() { return underlyingCPProgram_; }
  field::UnderlyingCPRegType& underlyingCPRegType() { return underlyingCPRegType_; }
  field::UnderlyingCurrency& underlyingCurrency() { return underlyingCurrency_; }
  field::UnderlyingQty& underlyingQty() { return underlyingQty_; }
  field::UnderlyingPx& underlyingPx() { return underlyingPx_; }
  field::UnderlyingDirtyPrice& underlyingDirtyPrice() { return underlyingDirtyPrice_; }
  field::UnderlyingEndPrice& underlyingEndPrice() { return underlyingEndPrice_; }
  field::UnderlyingStartValue& underlyingStartValue() { return underlyingStartValue_; }
  field::UnderlyingCurrentValue& underlyingCurrentValue() { return underlyingCurrentValue_; }
  field::UnderlyingEndValue& underlyingEndValue() { return underlyingEndValue_; }
  UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }
  field::PrevClosePx& prevClosePx() { return prevClosePx_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::Side& side() { return side_; }
  field::Price& price() { return price_; }
  field::Currency& currency() { return currency_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::UnderlyingSymbol underlyingSymbol_;
  field::UnderlyingSymbolSfx underlyingSymbolSfx_;
  field::UnderlyingSecurityID underlyingSecurityID_;
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_;
  UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_;
  field::UnderlyingProduct underlyingProduct_;
  field::UnderlyingCFICode underlyingCFICode_;
  field::UnderlyingSecurityType underlyingSecurityType_;
  field::UnderlyingSecuritySubType underlyingSecuritySubType_;
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_;
  field::UnderlyingMaturityDate underlyingMaturityDate_;
  field::UnderlyingPutOrCall underlyingPutOrCall_;
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_;
  field::UnderlyingIssueDate underlyingIssueDate_;
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_;
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_;
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_;
  field::UnderlyingFactor underlyingFactor_;
  field::UnderlyingCreditRating underlyingCreditRating_;
  field::UnderlyingInstrRegistry underlyingInstrRegistry_;
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_;
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_;
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_;
  field::UnderlyingRedemptionDate underlyingRedemptionDate_;
  field::UnderlyingStrikePrice underlyingStrikePrice_;
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_;
  field::UnderlyingOptAttribute underlyingOptAttribute_;
  field::UnderlyingContractMultiplier underlyingContractMultiplier_;
  field::UnderlyingCouponRate underlyingCouponRate_;
  field::UnderlyingSecurityExchange underlyingSecurityExchange_;
  field::UnderlyingIssuer underlyingIssuer_;
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_;
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_;
  field::UnderlyingSecurityDesc underlyingSecurityDesc_;
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_;
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_;
  field::UnderlyingCPProgram underlyingCPProgram_;
  field::UnderlyingCPRegType underlyingCPRegType_;
  field::UnderlyingCurrency underlyingCurrency_;
  field::UnderlyingQty underlyingQty_;
  field::UnderlyingPx underlyingPx_;
  field::UnderlyingDirtyPrice underlyingDirtyPrice_;
  field::UnderlyingEndPrice underlyingEndPrice_;
  field::UnderlyingStartValue underlyingStartValue_;
  field::UnderlyingCurrentValue underlyingCurrentValue_;
  field::UnderlyingEndValue underlyingEndValue_;
  UnderlyingStipsGroup underlyingStipsGroup_;
  field::PrevClosePx prevClosePx_;
  field::ClOrdID clOrdID_;
  field::SecondaryClOrdID secondaryClOrdID_;
  field::Side side_;
  field::Price price_;
  field::Currency currency_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
};

class UnderlyingsGroup1 : public AbstractGroup {
 public:
  explicit UnderlyingsGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noUnderlyings, &tags::underlyingSymbol, [](AbstractMessage* m) -> Component* { return new UnderlyingsGroup1Comp(m); }) {}

  LongRef& noUnderlyings() { return countField_; }
  UnderlyingsGroup1Comp& underlyingsGroup1Comp(int ix) { return static_cast<UnderlyingsGroup1Comp&>(*components_[ix]); }
};

class RegistDtlsGroupComp : public Component {
 public:
  explicit RegistDtlsGroupComp(AbstractMessage* message);

  field::RegistDtls& registDtls() { return registDtls_; }
  field::RegistEmail& registEmail() { return registEmail_; }
  field::MailingDtls& mailingDtls() { return mailingDtls_; }
  field::MailingInst& mailingInst() { return mailingInst_; }
  NestedPartyIDsGroup& nestedPartyIDsGroup() { return nestedPartyIDsGroup_; }
  field::OwnerType& ownerType() { return ownerType_; }
  field::DateOfBirth& dateOfBirth() { return dateOfBirth_; }
  field::InvestorCountryOfResidence& investorCountryOfResidence() { return investorCountryOfResidence_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::RegistDtls registDtls_;
  field::RegistEmail registEmail_;
  field::MailingDtls mailingDtls_;
  field::MailingInst mailingInst_;
  NestedPartyIDsGroup nestedPartyIDsGroup_;
  field::OwnerType ownerType_;
  field::DateOfBirth dateOfBirth_;
  field::InvestorCountryOfResidence investorCountryOfResidence_;
};

class RegistDtlsGroup : public AbstractGroup {
 public:
  explicit RegistDtlsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noRegistDtls, &tags::registDtls, [](AbstractMessage* m) -> Component* { return new RegistDtlsGroupComp(m); }) {}

  LongRef& noRegistDtls() { return countField_; }
  RegistDtlsGroupComp& registDtlsGroupComp(int ix) { return static_cast<RegistDtlsGroupComp&>(*components_[ix]); }
};

class DistribInstsGroupComp : public Component {
 public:
  explicit DistribInstsGroupComp(AbstractMessage* message);

  field::DistribPaymentMethod& distribPaymentMethod() { return distribPaymentMethod_; }
  field::DistribPercentage& distribPercentage() { return distribPercentage_; }
  field::CashDistribCurr& cashDistribCurr() { return cashDistribCurr_; }
  field::CashDistribAgentName& cashDistribAgentName() { return cashDistribAgentName_; }
  field::CashDistribAgentCode& cashDistribAgentCode() { return cashDistribAgentCode_; }
  field::CashDistribAgentAcctNumber& cashDistribAgentAcctNumber() { return cashDistribAgentAcctNumber_; }
  field::CashDistribPayRef& cashDistribPayRef() { return cashDistribPayRef_; }
  field::CashDistribAgentAcctName& cashDistribAgentAcctName() { return cashDistribAgentAcctName_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::DistribPaymentMethod distribPaymentMethod_;
  field::DistribPercentage distribPercentage_;
  field::CashDistribCurr cashDistribCurr_;
  field::CashDistribAgentName cashDistribAgentName_;
  field::CashDistribAgentCode cashDistribAgentCode_;
  field::CashDistribAgentAcctNumber cashDistribAgentAcctNumber_;
  field::CashDistribPayRef cashDistribPayRef_;
  field::CashDistribAgentAcctName cashDistribAgentAcctName_;
};

class DistribInstsGroup : public AbstractGroup {
 public:
  explicit DistribInstsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noDistribInsts, &tags::distribPaymentMethod, [](AbstractMessage* m) -> Component* { return new DistribInstsGroupComp(m); }) {}

  LongRef& noDistribInsts() { return countField_; }
  DistribInstsGroupComp& distribInstsGroupComp(int ix) { return static_cast<DistribInstsGroupComp&>(*components_[ix]); }
};

class AffectedOrdersGroupComp : public Component {
 public:
  explicit AffectedOrdersGroupComp(AbstractMessage* message);

  field::OrigClOrdID& origClOrdID() { return origClOrdID_; }
  field::AffectedOrderID& affectedOrderID() { return affectedOrderID_; }
  field::AffectedSecondaryOrderID& affectedSecondaryOrderID() { return affectedSecondaryOrderID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::OrigClOrdID origClOrdID_;
  field::AffectedOrderID affectedOrderID_;
  field::AffectedSecondaryOrderID affectedSecondaryOrderID_;
};

class AffectedOrdersGroup : public AbstractGroup {
 public:
  explicit AffectedOrdersGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noAffectedOrders, &tags::origClOrdID, [](AbstractMessage* m) -> Component* { return new AffectedOrdersGroupComp(m); }) {}

  LongRef& noAffectedOrders() { return countField_; }
  AffectedOrdersGroupComp& affectedOrdersGroupComp(int ix) { return static_cast<AffectedOrdersGroupComp&>(*components_[ix]); }
};

class SidesGroupComp : public Component {
 public:
  explicit SidesGroupComp(AbstractMessage* message);

  field::Side& side() { return side_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::DayBookingInst& dayBookingInst() { return dayBookingInst_; }
  field::BookingUnit& bookingUnit() { return bookingUnit_; }
  field::PreallocMethod& preallocMethod() { return preallocMethod_; }
  field::AllocID& allocID() { return allocID_; }
  AllocsGroup& allocsGroup() { return allocsGroup_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::OrderQty& orderQty() { return orderQty_; }
  field::CashOrderQty& cashOrderQty() { return cashOrderQty_; }
  field::OrderPercent& orderPercent() { return orderPercent_; }
  field::RoundingDirection& roundingDirection() { return roundingDirection_; }
  field::RoundingModulus& roundingModulus() { return roundingModulus_; }
  field::Commission& commission() { return commission_; }
  field::CommType& commType() { return commType_; }
  field::CommCurrency& commCurrency() { return commCurrency_; }
  field::FundRenewWaiv& fundRenewWaiv() { return fundRenewWaiv_; }
  field::OrderCapacity& orderCapacity() { return orderCapacity_; }
  field::OrderRestrictions& orderRestrictions() { return orderRestrictions_; }
  field::CustOrderCapacity& custOrderCapacity() { return custOrderCapacity_; }
  field::ForexReq& forexReq() { return forexReq_; }
  field::SettlCurrency& settlCurrency() { return settlCurrency_; }
  field::BookingType& bookingType() { return bookingType_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::PositionEffect& positionEffect() { return positionEffect_; }
  field::CoveredOrUncovered& coveredOrUncovered() { return coveredOrUncovered_; }
  field::CashMargin& cashMargin() { return cashMargin_; }
  field::ClearingFeeIndicator& clearingFeeIndicator() { return clearingFeeIndicator_; }
  field::SolicitedFlag& solicitedFlag() { return solicitedFlag_; }
  field::SideComplianceID& sideComplianceID() { return sideComplianceID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Side side_;
  field::ClOrdID clOrdID_;
  field::SecondaryClOrdID secondaryClOrdID_;
  field::ClOrdLinkID clOrdLinkID_;
  PartyIDsGroup partyIDsGroup_;
  field::TradeOriginationDate tradeOriginationDate_;
  field::TradeDate tradeDate_;
  field::Account account_;
  field::AcctIDSource acctIDSource_;
  field::AccountType accountType_;
  field::DayBookingInst dayBookingInst_;
  field::BookingUnit bookingUnit_;
  field::PreallocMethod preallocMethod_;
  field::AllocID allocID_;
  AllocsGroup allocsGroup_;
  field::QtyType qtyType_;
  field::OrderQty orderQty_;
  field::CashOrderQty cashOrderQty_;
  field::OrderPercent orderPercent_;
  field::RoundingDirection roundingDirection_;
  field::RoundingModulus roundingModulus_;
  field::Commission commission_;
  field::CommType commType_;
  field::CommCurrency commCurrency_;
  field::FundRenewWaiv fundRenewWaiv_;
  field::OrderCapacity orderCapacity_;
  field::OrderRestrictions orderRestrictions_;
  field::CustOrderCapacity custOrderCapacity_;
  field::ForexReq forexReq_;
  field::SettlCurrency settlCurrency_;
  field::BookingType bookingType_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
  field::PositionEffect positionEffect_;
  field::CoveredOrUncovered coveredOrUncovered_;
  field::CashMargin cashMargin_;
  field::ClearingFeeIndicator clearingFeeIndicator_;
  field::SolicitedFlag solicitedFlag_;
  field::SideComplianceID sideComplianceID_;
};

class SidesGroup : public AbstractGroup {
 public:
  explicit SidesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noSides, &tags::side, [](AbstractMessage* m) -> Component* { return new SidesGroupComp(m); }) {}

  LongRef& noSides() { return countField_; }
  SidesGroupComp& sidesGroupComp(int ix) { return static_cast<SidesGroupComp&>(*components_[ix]); }
};

class SidesGroup1Comp : public Component {
 public:
  explicit SidesGroup1Comp(AbstractMessage* message);

  field::Side& side() { return side_; }
  field::OrigClOrdID& origClOrdID() { return origClOrdID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  field::OrigOrdModTime& origOrdModTime() { return origOrdModTime_; }
  PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::OrderQty& orderQty() { return orderQty_; }
  field::CashOrderQty& cashOrderQty() { return cashOrderQty_; }
  field::OrderPercent& orderPercent() { return orderPercent_; }
  field::RoundingDirection& roundingDirection() { return roundingDirection_; }
  field::RoundingModulus& roundingModulus() { return roundingModulus_; }
  field::ComplianceID& complianceID() { return complianceID_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Side side_;
  field::OrigClOrdID origClOrdID_;
  field::ClOrdID clOrdID_;
  field::SecondaryClOrdID secondaryClOrdID_;
  field::ClOrdLinkID clOrdLinkID_;
  field::OrigOrdModTime origOrdModTime_;
  PartyIDsGroup partyIDsGroup_;
  field::TradeOriginationDate tradeOriginationDate_;
  field::TradeDate tradeDate_;
  field::OrderQty orderQty_;
  field::CashOrderQty cashOrderQty_;
  field::OrderPercent orderPercent_;
  field::RoundingDirection roundingDirection_;
  field::RoundingModulus roundingModulus_;
  field::ComplianceID complianceID_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
};

class SidesGroup1 : public AbstractGroup {
 public:
  explicit SidesGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noSides, &tags::side, [](AbstractMessage* m) -> Component* { return new SidesGroup1Comp(m); }) {}

  LongRef& noSides() { return countField_; }
  SidesGroup1Comp& sidesGroup1Comp(int ix) { return static_cast<SidesGroup1Comp&>(*components_[ix]); }
};

class SecurityTypesGroupComp : public Component {
 public:
  explicit SecurityTypesGroupComp(AbstractMessage* message);

  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::Product product_;
  field::CFICode cFICode_;
};

class SecurityTypesGroup : public AbstractGroup {
 public:
  explicit SecurityTypesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noSecurityTypes, &tags::securityType, [](AbstractMessage* m) -> Component* { return new SecurityTypesGroupComp(m); }) {}

  LongRef& noSecurityTypes() { return countField_; }
  SecurityTypesGroupComp& securityTypesGroupComp(int ix) { return static_cast<SecurityTypesGroupComp&>(*components_[ix]); }
};

class LegsGroup5Comp : public Component {
 public:
  explicit LegsGroup5Comp(AbstractMessage* message);

  field::LegSymbol& legSymbol() { return legSymbol_; }
  field::LegSymbolSfx& legSymbolSfx() { return legSymbolSfx_; }
  field::LegSecurityID& legSecurityID() { return legSecurityID_; }
  field::LegSecurityIDSource& legSecurityIDSource() { return legSecurityIDSource_; }
  LegSecurityAltIDGroup& legSecurityAltIDGroup() { return legSecurityAltIDGroup_; }
  field::LegProduct& legProduct() { return legProduct_; }
  field::LegCFICode& legCFICode() { return legCFICode_; }
  field::LegSecurityType& legSecurityType() { return legSecurityType_; }
  field::LegSecuritySubType& legSecuritySubType() { return legSecuritySubType_; }
  field::LegMaturityMonthYear& legMaturityMonthYear() { return legMaturityMonthYear_; }
  field::LegMaturityDate& legMaturityDate() { return legMaturityDate_; }
  field::LegCouponPaymentDate& legCouponPaymentDate() { return legCouponPaymentDate_; }
  field::LegIssueDate& legIssueDate() { return legIssueDate_; }
  field::LegRepoCollateralSecurityType& legRepoCollateralSecurityType() { return legRepoCollateralSecurityType_; }
  field::LegRepurchaseTerm& legRepurchaseTerm() { return legRepurchaseTerm_; }
  field::LegRepurchaseRate& legRepurchaseRate() { return legRepurchaseRate_; }
  field::LegFactor& legFactor() { return legFactor_; }
  field::LegCreditRating& legCreditRating() { return legCreditRating_; }
  field::LegInstrRegistry& legInstrRegistry() { return legInstrRegistry_; }
  field::LegCountryOfIssue& legCountryOfIssue() { return legCountryOfIssue_; }
  field::LegStateOrProvinceOfIssue& legStateOrProvinceOfIssue() { return legStateOrProvinceOfIssue_; }
  field::LegLocaleOfIssue& legLocaleOfIssue() { return legLocaleOfIssue_; }
  field::LegRedemptionDate& legRedemptionDate() { return legRedemptionDate_; }
  field::LegStrikePrice& legStrikePrice() { return legStrikePrice_; }
  field::LegStrikeCurrency& legStrikeCurrency() { return legStrikeCurrency_; }
  field::LegOptAttribute& legOptAttribute() { return legOptAttribute_; }
  field::LegContractMultiplier& legContractMultiplier() { return legContractMultiplier_; }
  field::LegCouponRate& legCouponRate() { return legCouponRate_; }
  field::LegSecurityExchange& legSecurityExchange() { return legSecurityExchange_; }
  field::LegIssuer& legIssuer() { return legIssuer_; }
  field::EncodedLegIssuerLen& encodedLegIssuerLen() { return encodedLegIssuerLen_; }
  field::EncodedLegIssuer& encodedLegIssuer() { return encodedLegIssuer_; }
  field::LegSecurityDesc& legSecurityDesc() { return legSecurityDesc_; }
  field::EncodedLegSecurityDescLen& encodedLegSecurityDescLen() { return encodedLegSecurityDescLen_; }
  field::EncodedLegSecurityDesc& encodedLegSecurityDesc() { return encodedLegSecurityDesc_; }
  field::LegRatioQty& legRatioQty() { return legRatioQty_; }
  field::LegSide& legSide() { return legSide_; }
  field::LegCurrency& legCurrency() { return legCurrency_; }
  field::LegPool& legPool() { return legPool_; }
  field::LegDatedDate& legDatedDate() { return legDatedDate_; }
  field::LegContractSettlMonth& legContractSettlMonth() { return legContractSettlMonth_; }
  field::LegInterestAccrualDate& legInterestAccrualDate() { return legInterestAccrualDate_; }
  field::LegSwapType& legSwapType() { return legSwapType_; }
  field::LegSettlType& legSettlType() { return legSettlType_; }
  LegStipulationsGroup& legStipulationsGroup() { return legStipulationsGroup_; }
  field::LegBenchmarkCurveCurrency& legBenchmarkCurveCurrency() { return legBenchmarkCurveCurrency_; }
  field::LegBenchmarkCurveName& legBenchmarkCurveName() { return legBenchmarkCurveName_; }
  field::LegBenchmarkCurvePoint& legBenchmarkCurvePoint() { return legBenchmarkCurvePoint_; }
  field::LegBenchmarkPrice& legBenchmarkPrice() { return legBenchmarkPrice_; }
  field::LegBenchmarkPriceType& legBenchmarkPriceType() { return legBenchmarkPriceType_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegSymbol legSymbol_;
  field::LegSymbolSfx legSymbolSfx_;
  field::LegSecurityID legSecurityID_;
  field::LegSecurityIDSource legSecurityIDSource_;
  LegSecurityAltIDGroup legSecurityAltIDGroup_;
  field::LegProduct legProduct_;
  field::LegCFICode legCFICode_;
  field::LegSecurityType legSecurityType_;
  field::LegSecuritySubType legSecuritySubType_;
  field::LegMaturityMonthYear legMaturityMonthYear_;
  field::LegMaturityDate legMaturityDate_;
  field::LegCouponPaymentDate legCouponPaymentDate_;
  field::LegIssueDate legIssueDate_;
  field::LegRepoCollateralSecurityType legRepoCollateralSecurityType_;
  field::LegRepurchaseTerm legRepurchaseTerm_;
  field::LegRepurchaseRate legRepurchaseRate_;
  field::LegFactor legFactor_;
  field::LegCreditRating legCreditRating_;
  field::LegInstrRegistry legInstrRegistry_;
  field::LegCountryOfIssue legCountryOfIssue_;
  field::LegStateOrProvinceOfIssue legStateOrProvinceOfIssue_;
  field::LegLocaleOfIssue legLocaleOfIssue_;
  field::LegRedemptionDate legRedemptionDate_;
  field::LegStrikePrice legStrikePrice_;
  field::LegStrikeCurrency legStrikeCurrency_;
  field::LegOptAttribute legOptAttribute_;
  field::LegContractMultiplier legContractMultiplier_;
  field::LegCouponRate legCouponRate_;
  field::LegSecurityExchange legSecurityExchange_;
  field::LegIssuer legIssuer_;
  field::EncodedLegIssuerLen encodedLegIssuerLen_;
  field::EncodedLegIssuer encodedLegIssuer_;
  field::LegSecurityDesc legSecurityDesc_;
  field::EncodedLegSecurityDescLen encodedLegSecurityDescLen_;
  field::EncodedLegSecurityDesc encodedLegSecurityDesc_;
  field::LegRatioQty legRatioQty_;
  field::LegSide legSide_;
  field::LegCurrency legCurrency_;
  field::LegPool legPool_;
  field::LegDatedDate legDatedDate_;
  field::LegContractSettlMonth legContractSettlMonth_;
  field::LegInterestAccrualDate legInterestAccrualDate_;
  field::LegSwapType legSwapType_;
  field::LegSettlType legSettlType_;
  LegStipulationsGroup legStipulationsGroup_;
  field::LegBenchmarkCurveCurrency legBenchmarkCurveCurrency_;
  field::LegBenchmarkCurveName legBenchmarkCurveName_;
  field::LegBenchmarkCurvePoint legBenchmarkCurvePoint_;
  field::LegBenchmarkPrice legBenchmarkPrice_;
  field::LegBenchmarkPriceType legBenchmarkPriceType_;
};

class LegsGroup5 : public AbstractGroup {
 public:
  explicit LegsGroup5(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegs, &tags::legSymbol, [](AbstractMessage* m) -> Component* { return new LegsGroup5Comp(m); }) {}

  LongRef& noLegs() { return countField_; }
  LegsGroup5Comp& legsGroup5Comp(int ix) { return static_cast<LegsGroup5Comp&>(*components_[ix]); }
};

class RelatedSymGroup3Comp : public Component {
 public:
  explicit RelatedSymGroup3Comp(AbstractMessage* message);

  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  field::AgreementDesc& agreementDesc() { return agreementDesc_; }
  field::AgreementID& agreementID() { return agreementID_; }
  field::AgreementDate& agreementDate() { return agreementDate_; }
  field::AgreementCurrency& agreementCurrency() { return agreementCurrency_; }
  field::TerminationType& terminationType() { return terminationType_; }
  field::StartDate& startDate() { return startDate_; }
  field::EndDate& endDate() { return endDate_; }
  field::DeliveryType& deliveryType() { return deliveryType_; }
  field::MarginRatio& marginRatio() { return marginRatio_; }
  UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Currency& currency() { return currency_; }
  StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  LegsGroup5& legsGroup5() { return legsGroup5_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  field::YieldType& yieldType() { return yieldType_; }
  field::Yield& yield() { return yield_; }
  field::YieldCalcDate& yieldCalcDate() { return yieldCalcDate_; }
  field::YieldRedemptionDate& yieldRedemptionDate() { return yieldRedemptionDate_; }
  field::YieldRedemptionPrice& yieldRedemptionPrice() { return yieldRedemptionPrice_; }
  field::YieldRedemptionPriceType& yieldRedemptionPriceType() { return yieldRedemptionPriceType_; }
  field::RoundLot& roundLot() { return roundLot_; }
  field::MinTradeVol& minTradeVol() { return minTradeVol_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::ExpirationCycle& expirationCycle() { return expirationCycle_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  field::DeliveryForm deliveryForm_;
  field::PctAtRisk pctAtRisk_;
  InstrAttribGroup instrAttribGroup_;
  field::AgreementDesc agreementDesc_;
  field::AgreementID agreementID_;
  field::AgreementDate agreementDate_;
  field::AgreementCurrency agreementCurrency_;
  field::TerminationType terminationType_;
  field::StartDate startDate_;
  field::EndDate endDate_;
  field::DeliveryType deliveryType_;
  field::MarginRatio marginRatio_;
  UnderlyingsGroup underlyingsGroup_;
  field::Currency currency_;
  StipulationsGroup stipulationsGroup_;
  LegsGroup5 legsGroup5_;
  field::Spread spread_;
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_;
  field::BenchmarkCurveName benchmarkCurveName_;
  field::BenchmarkCurvePoint benchmarkCurvePoint_;
  field::BenchmarkPrice benchmarkPrice_;
  field::BenchmarkPriceType benchmarkPriceType_;
  field::BenchmarkSecurityID benchmarkSecurityID_;
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_;
  field::YieldType yieldType_;
  field::Yield yield_;
  field::YieldCalcDate yieldCalcDate_;
  field::YieldRedemptionDate yieldRedemptionDate_;
  field::YieldRedemptionPrice yieldRedemptionPrice_;
  field::YieldRedemptionPriceType yieldRedemptionPriceType_;
  field::RoundLot roundLot_;
  field::MinTradeVol minTradeVol_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::ExpirationCycle expirationCycle_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
};

class RelatedSymGroup3 : public AbstractGroup {
 public:
  explicit RelatedSymGroup3(AbstractMessage* message)
      : AbstractGroup(message, &tags::noRelatedSym, &tags::symbol, [](AbstractMessage* m) -> Component* { return new RelatedSymGroup3Comp(m); }) {}

  LongRef& noRelatedSym() { return countField_; }
  RelatedSymGroup3Comp& relatedSymGroup3Comp(int ix) { return static_cast<RelatedSymGroup3Comp&>(*components_[ix]); }
};

class RelatedSymGroup4Comp : public Component {
 public:
  explicit RelatedSymGroup4Comp(AbstractMessage* message);

  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::Currency& currency() { return currency_; }
  field::ExpirationCycle& expirationCycle() { return expirationCycle_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  field::Currency currency_;
  field::ExpirationCycle expirationCycle_;
  field::DeliveryForm deliveryForm_;
  field::PctAtRisk pctAtRisk_;
  InstrAttribGroup instrAttribGroup_;
  LegsGroup1 legsGroup1_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
};

class RelatedSymGroup4 : public AbstractGroup {
 public:
  explicit RelatedSymGroup4(AbstractMessage* message)
      : AbstractGroup(message, &tags::noRelatedSym, &tags::symbol, [](AbstractMessage* m) -> Component* { return new RelatedSymGroup4Comp(m); }) {}

  LongRef& noRelatedSym() { return countField_; }
  RelatedSymGroup4Comp& relatedSymGroup4Comp(int ix) { return static_cast<RelatedSymGroup4Comp&>(*components_[ix]); }
};

class Nested3PartySubIDsGroupComp : public Component {
 public:
  explicit Nested3PartySubIDsGroupComp(AbstractMessage* message);

  field::Nested3PartySubID& nested3PartySubID() { return nested3PartySubID_; }
  field::Nested3PartySubIDType& nested3PartySubIDType() { return nested3PartySubIDType_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Nested3PartySubID nested3PartySubID_;
  field::Nested3PartySubIDType nested3PartySubIDType_;
};

class Nested3PartySubIDsGroup : public AbstractGroup {
 public:
  explicit Nested3PartySubIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noNested3PartySubIDs, &tags::nested3PartySubID, [](AbstractMessage* m) -> Component* { return new Nested3PartySubIDsGroupComp(m); }) {}

  LongRef& noNested3PartySubIDs() { return countField_; }
  Nested3PartySubIDsGroupComp& nested3PartySubIDsGroupComp(int ix) { return static_cast<Nested3PartySubIDsGroupComp&>(*components_[ix]); }
};

class Nested3PartyIDsGroupComp : public Component {
 public:
  explicit Nested3PartyIDsGroupComp(AbstractMessage* message);

  field::Nested3PartyID& nested3PartyID() { return nested3PartyID_; }
  field::Nested3PartyIDSource& nested3PartyIDSource() { return nested3PartyIDSource_; }
  field::Nested3PartyRole& nested3PartyRole() { return nested3PartyRole_; }
  Nested3PartySubIDsGroup& nested3PartySubIDsGroup() { return nested3PartySubIDsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Nested3PartyID nested3PartyID_;
  field::Nested3PartyIDSource nested3PartyIDSource_;
  field::Nested3PartyRole nested3PartyRole_;
  Nested3PartySubIDsGroup nested3PartySubIDsGroup_;
};

class Nested3PartyIDsGroup : public AbstractGroup {
 public:
  explicit Nested3PartyIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noNested3PartyIDs, &tags::nested3PartyID, [](AbstractMessage* m) -> Component* { return new Nested3PartyIDsGroupComp(m); }) {}

  LongRef& noNested3PartyIDs() { return countField_; }
  Nested3PartyIDsGroupComp& nested3PartyIDsGroupComp(int ix) { return static_cast<Nested3PartyIDsGroupComp&>(*components_[ix]); }
};

class AllocsGroup3Comp : public Component {
 public:
  explicit AllocsGroup3Comp(AbstractMessage* message);

  field::AllocAccount& allocAccount() { return allocAccount_; }
  field::AllocAcctIDSource& allocAcctIDSource() { return allocAcctIDSource_; }
  field::AllocSettlCurrency& allocSettlCurrency() { return allocSettlCurrency_; }
  field::IndividualAllocID& individualAllocID() { return individualAllocID_; }
  Nested3PartyIDsGroup& nested3PartyIDsGroup() { return nested3PartyIDsGroup_; }
  field::AllocQty& allocQty() { return allocQty_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::AllocAccount allocAccount_;
  field::AllocAcctIDSource allocAcctIDSource_;
  field::AllocSettlCurrency allocSettlCurrency_;
  field::IndividualAllocID individualAllocID_;
  Nested3PartyIDsGroup nested3PartyIDsGroup_;
  field::AllocQty allocQty_;
};

class AllocsGroup3 : public AbstractGroup {
 public:
  explicit AllocsGroup3(AbstractMessage* message)
      : AbstractGroup(message, &tags::noAllocs, &tags::allocAccount, [](AbstractMessage* m) -> Component* { return new AllocsGroup3Comp(m); }) {}

  LongRef& noAllocs() { return countField_; }
  AllocsGroup3Comp& allocsGroup3Comp(int ix) { return static_cast<AllocsGroup3Comp&>(*components_[ix]); }
};

class LegAllocsGroupComp : public Component {
 public:
  explicit LegAllocsGroupComp(AbstractMessage* message);

  field::LegAllocAccount& legAllocAccount() { return legAllocAccount_; }
  field::LegIndividualAllocID& legIndividualAllocID() { return legIndividualAllocID_; }
  Nested2PartyIDsGroup& nested2PartyIDsGroup() { return nested2PartyIDsGroup_; }
  field::LegAllocQty& legAllocQty() { return legAllocQty_; }
  field::LegAllocAcctIDSource& legAllocAcctIDSource() { return legAllocAcctIDSource_; }
  field::LegSettlCurrency& legSettlCurrency() { return legSettlCurrency_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegAllocAccount legAllocAccount_;
  field::LegIndividualAllocID legIndividualAllocID_;
  Nested2PartyIDsGroup nested2PartyIDsGroup_;
  field::LegAllocQty legAllocQty_;
  field::LegAllocAcctIDSource legAllocAcctIDSource_;
  field::LegSettlCurrency legSettlCurrency_;
};

class LegAllocsGroup : public AbstractGroup {
 public:
  explicit LegAllocsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegAllocs, &tags::legAllocAccount, [](AbstractMessage* m) -> Component* { return new LegAllocsGroupComp(m); }) {}

  LongRef& noLegAllocs() { return countField_; }
  LegAllocsGroupComp& legAllocsGroupComp(int ix) { return static_cast<LegAllocsGroupComp&>(*components_[ix]); }
};

class LegsGroup6Comp : public Component {
 public:
  explicit LegsGroup6Comp(AbstractMessage* message);

  field::LegSymbol& legSymbol() { return legSymbol_; }
  field::LegSymbolSfx& legSymbolSfx() { return legSymbolSfx_; }
  field::LegSecurityID& legSecurityID() { return legSecurityID_; }
  field::LegSecurityIDSource& legSecurityIDSource() { return legSecurityIDSource_; }
  LegSecurityAltIDGroup& legSecurityAltIDGroup() { return legSecurityAltIDGroup_; }
  field::LegProduct& legProduct() { return legProduct_; }
  field::LegCFICode& legCFICode() { return legCFICode_; }
  field::LegSecurityType& legSecurityType() { return legSecurityType_; }
  field::LegSecuritySubType& legSecuritySubType() { return legSecuritySubType_; }
  field::LegMaturityMonthYear& legMaturityMonthYear() { return legMaturityMonthYear_; }
  field::LegMaturityDate& legMaturityDate() { return legMaturityDate_; }
  field::LegCouponPaymentDate& legCouponPaymentDate() { return legCouponPaymentDate_; }
  field::LegIssueDate& legIssueDate() { return legIssueDate_; }
  field::LegRepoCollateralSecurityType& legRepoCollateralSecurityType() { return legRepoCollateralSecurityType_; }
  field::LegRepurchaseTerm& legRepurchaseTerm() { return legRepurchaseTerm_; }
  field::LegRepurchaseRate& legRepurchaseRate() { return legRepurchaseRate_; }
  field::LegFactor& legFactor() { return legFactor_; }
  field::LegCreditRating& legCreditRating() { return legCreditRating_; }
  field::LegInstrRegistry& legInstrRegistry() { return legInstrRegistry_; }
  field::LegCountryOfIssue& legCountryOfIssue() { return legCountryOfIssue_; }
  field::LegStateOrProvinceOfIssue& legStateOrProvinceOfIssue() { return legStateOrProvinceOfIssue_; }
  field::LegLocaleOfIssue& legLocaleOfIssue() { return legLocaleOfIssue_; }
  field::LegRedemptionDate& legRedemptionDate() { return legRedemptionDate_; }
  field::LegStrikePrice& legStrikePrice() { return legStrikePrice_; }
  field::LegStrikeCurrency& legStrikeCurrency() { return legStrikeCurrency_; }
  field::LegOptAttribute& legOptAttribute() { return legOptAttribute_; }
  field::LegContractMultiplier& legContractMultiplier() { return legContractMultiplier_; }
  field::LegCouponRate& legCouponRate() { return legCouponRate_; }
  field::LegSecurityExchange& legSecurityExchange() { return legSecurityExchange_; }
  field::LegIssuer& legIssuer() { return legIssuer_; }
  field::EncodedLegIssuerLen& encodedLegIssuerLen() { return encodedLegIssuerLen_; }
  field::EncodedLegIssuer& encodedLegIssuer() { return encodedLegIssuer_; }
  field::LegSecurityDesc& legSecurityDesc() { return legSecurityDesc_; }
  field::EncodedLegSecurityDescLen& encodedLegSecurityDescLen() { return encodedLegSecurityDescLen_; }
  field::EncodedLegSecurityDesc& encodedLegSecurityDesc() { return encodedLegSecurityDesc_; }
  field::LegRatioQty& legRatioQty() { return legRatioQty_; }
  field::LegSide& legSide() { return legSide_; }
  field::LegCurrency& legCurrency() { return legCurrency_; }
  field::LegPool& legPool() { return legPool_; }
  field::LegDatedDate& legDatedDate() { return legDatedDate_; }
  field::LegContractSettlMonth& legContractSettlMonth() { return legContractSettlMonth_; }
  field::LegInterestAccrualDate& legInterestAccrualDate() { return legInterestAccrualDate_; }
  field::LegQty& legQty() { return legQty_; }
  field::LegSwapType& legSwapType() { return legSwapType_; }
  LegStipulationsGroup& legStipulationsGroup() { return legStipulationsGroup_; }
  LegAllocsGroup& legAllocsGroup() { return legAllocsGroup_; }
  field::LegPositionEffect& legPositionEffect() { return legPositionEffect_; }
  field::LegCoveredOrUncovered& legCoveredOrUncovered() { return legCoveredOrUncovered_; }
  NestedPartyIDsGroup& nestedPartyIDsGroup() { return nestedPartyIDsGroup_; }
  field::LegRefID& legRefID() { return legRefID_; }
  field::LegPrice& legPrice() { return legPrice_; }
  field::LegSettlType& legSettlType() { return legSettlType_; }
  field::LegSettlDate& legSettlDate() { return legSettlDate_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegSymbol legSymbol_;
  field::LegSymbolSfx legSymbolSfx_;
  field::LegSecurityID legSecurityID_;
  field::LegSecurityIDSource legSecurityIDSource_;
  LegSecurityAltIDGroup legSecurityAltIDGroup_;
  field::LegProduct legProduct_;
  field::LegCFICode legCFICode_;
  field::LegSecurityType legSecurityType_;
  field::LegSecuritySubType legSecuritySubType_;
  field::LegMaturityMonthYear legMaturityMonthYear_;
  field::LegMaturityDate legMaturityDate_;
  field::LegCouponPaymentDate legCouponPaymentDate_;
  field::LegIssueDate legIssueDate_;
  field::LegRepoCollateralSecurityType legRepoCollateralSecurityType_;
  field::LegRepurchaseTerm legRepurchaseTerm_;
  field::LegRepurchaseRate legRepurchaseRate_;
  field::LegFactor legFactor_;
  field::LegCreditRating legCreditRating_;
  field::LegInstrRegistry legInstrRegistry_;
  field::LegCountryOfIssue legCountryOfIssue_;
  field::LegStateOrProvinceOfIssue legStateOrProvinceOfIssue_;
  field::LegLocaleOfIssue legLocaleOfIssue_;
  field::LegRedemptionDate legRedemptionDate_;
  field::LegStrikePrice legStrikePrice_;
  field::LegStrikeCurrency legStrikeCurrency_;
  field::LegOptAttribute legOptAttribute_;
  field::LegContractMultiplier legContractMultiplier_;
  field::LegCouponRate legCouponRate_;
  field::LegSecurityExchange legSecurityExchange_;
  field::LegIssuer legIssuer_;
  field::EncodedLegIssuerLen encodedLegIssuerLen_;
  field::EncodedLegIssuer encodedLegIssuer_;
  field::LegSecurityDesc legSecurityDesc_;
  field::EncodedLegSecurityDescLen encodedLegSecurityDescLen_;
  field::EncodedLegSecurityDesc encodedLegSecurityDesc_;
  field::LegRatioQty legRatioQty_;
  field::LegSide legSide_;
  field::LegCurrency legCurrency_;
  field::LegPool legPool_;
  field::LegDatedDate legDatedDate_;
  field::LegContractSettlMonth legContractSettlMonth_;
  field::LegInterestAccrualDate legInterestAccrualDate_;
  field::LegQty legQty_;
  field::LegSwapType legSwapType_;
  LegStipulationsGroup legStipulationsGroup_;
  LegAllocsGroup legAllocsGroup_;
  field::LegPositionEffect legPositionEffect_;
  field::LegCoveredOrUncovered legCoveredOrUncovered_;
  NestedPartyIDsGroup nestedPartyIDsGroup_;
  field::LegRefID legRefID_;
  field::LegPrice legPrice_;
  field::LegSettlType legSettlType_;
  field::LegSettlDate legSettlDate_;
};

class LegsGroup6 : public AbstractGroup {
 public:
  explicit LegsGroup6(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegs, &tags::legSymbol, [](AbstractMessage* m) -> Component* { return new LegsGroup6Comp(m); }) {}

  LongRef& noLegs() { return countField_; }
  LegsGroup6Comp& legsGroup6Comp(int ix) { return static_cast<LegsGroup6Comp&>(*components_[ix]); }
};

class DatesGroupComp : public Component {
 public:
  explicit DatesGroupComp(AbstractMessage* message);

  field::TradeDate& tradeDate() { return tradeDate_; }
  field::TransactTime& transactTime() { return transactTime_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::TradeDate tradeDate_;
  field::TransactTime transactTime_;
};

class DatesGroup : public AbstractGroup {
 public:
  explicit DatesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noDates, &tags::tradeDate, [](AbstractMessage* m) -> Component* { return new DatesGroupComp(m); }) {}

  LongRef& noDates() { return countField_; }
  DatesGroupComp& datesGroupComp(int ix) { return static_cast<DatesGroupComp&>(*components_[ix]); }
};

class PosAmtGroupComp : public Component {
 public:
  explicit PosAmtGroupComp(AbstractMessage* message);

  field::PosAmtType& posAmtType() { return posAmtType_; }
  field::PosAmt& posAmt() { return posAmt_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::PosAmtType posAmtType_;
  field::PosAmt posAmt_;
};

class PosAmtGroup : public AbstractGroup {
 public:
  explicit PosAmtGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noPosAmt, &tags::posAmtType, [](AbstractMessage* m) -> Component* { return new PosAmtGroupComp(m); }) {}

  LongRef& noPosAmt() { return countField_; }
  PosAmtGroupComp& posAmtGroupComp(int ix) { return static_cast<PosAmtGroupComp&>(*components_[ix]); }
};

class TrdRegTimestampsGroupComp : public Component {
 public:
  explicit TrdRegTimestampsGroupComp(AbstractMessage* message);

  field::TrdRegTimestamp& trdRegTimestamp() { return trdRegTimestamp_; }
  field::TrdRegTimestampType& trdRegTimestampType() { return trdRegTimestampType_; }
  field::TrdRegTimestampOrigin& trdRegTimestampOrigin() { return trdRegTimestampOrigin_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::TrdRegTimestamp trdRegTimestamp_;
  field::TrdRegTimestampType trdRegTimestampType_;
  field::TrdRegTimestampOrigin trdRegTimestampOrigin_;
};

class TrdRegTimestampsGroup : public AbstractGroup {
 public:
  explicit TrdRegTimestampsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noTrdRegTimestamps, &tags::trdRegTimestamp, [](AbstractMessage* m) -> Component* { return new TrdRegTimestampsGroupComp(m); }) {}

  LongRef& noTrdRegTimestamps() { return countField_; }
  TrdRegTimestampsGroupComp& trdRegTimestampsGroupComp(int ix) { return static_cast<TrdRegTimestampsGroupComp&>(*components_[ix]); }
};

class AllocsGroup4Comp : public Component {
 public:
  explicit AllocsGroup4Comp(AbstractMessage* message);

  field::AllocAccount& allocAccount() { return allocAccount_; }
  field::AllocAcctIDSource& allocAcctIDSource() { return allocAcctIDSource_; }
  field::AllocSettlCurrency& allocSettlCurrency() { return allocSettlCurrency_; }
  field::IndividualAllocID& individualAllocID() { return individualAllocID_; }
  Nested2PartyIDsGroup& nested2PartyIDsGroup() { return nested2PartyIDsGroup_; }
  field::AllocQty& allocQty() { return allocQty_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::AllocAccount allocAccount_;
  field::AllocAcctIDSource allocAcctIDSource_;
  field::AllocSettlCurrency allocSettlCurrency_;
  field::IndividualAllocID individualAllocID_;
  Nested2PartyIDsGroup nested2PartyIDsGroup_;
  field::AllocQty allocQty_;
};

class AllocsGroup4 : public AbstractGroup {
 public:
  explicit AllocsGroup4(AbstractMessage* message)
      : AbstractGroup(message, &tags::noAllocs, &tags::allocAccount, [](AbstractMessage* m) -> Component* { return new AllocsGroup4Comp(m); }) {}

  LongRef& noAllocs() { return countField_; }
  AllocsGroup4Comp& allocsGroup4Comp(int ix) { return static_cast<AllocsGroup4Comp&>(*components_[ix]); }
};

class SidesGroup2Comp : public Component {
 public:
  explicit SidesGroup2Comp(AbstractMessage* message);

  field::Side& side() { return side_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ListID& listID() { return listID_; }
  PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::ProcessCode& processCode() { return processCode_; }
  field::OddLot& oddLot() { return oddLot_; }
  ClearingInstructionsGroup& clearingInstructionsGroup() { return clearingInstructionsGroup_; }
  field::TradeInputSource& tradeInputSource() { return tradeInputSource_; }
  field::TradeInputDevice& tradeInputDevice() { return tradeInputDevice_; }
  field::OrderInputDevice& orderInputDevice() { return orderInputDevice_; }
  field::Currency& currency() { return currency_; }
  field::ComplianceID& complianceID() { return complianceID_; }
  field::SolicitedFlag& solicitedFlag() { return solicitedFlag_; }
  field::OrderCapacity& orderCapacity() { return orderCapacity_; }
  field::OrderRestrictions& orderRestrictions() { return orderRestrictions_; }
  field::CustOrderCapacity& custOrderCapacity() { return custOrderCapacity_; }
  field::OrdType& ordType() { return ordType_; }
  field::ExecInst& execInst() { return execInst_; }
  field::TransBkdTime& transBkdTime() { return transBkdTime_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::TimeBracket& timeBracket() { return timeBracket_; }
  field::Commission& commission() { return commission_; }
  field::CommType& commType() { return commType_; }
  field::CommCurrency& commCurrency() { return commCurrency_; }
  field::FundRenewWaiv& fundRenewWaiv() { return fundRenewWaiv_; }
  field::GrossTradeAmt& grossTradeAmt() { return grossTradeAmt_; }
  field::NumDaysInterest& numDaysInterest() { return numDaysInterest_; }
  field::ExDate& exDate() { return exDate_; }
  field::AccruedInterestRate& accruedInterestRate() { return accruedInterestRate_; }
  field::AccruedInterestAmt& accruedInterestAmt() { return accruedInterestAmt_; }
  field::InterestAtMaturity& interestAtMaturity() { return interestAtMaturity_; }
  field::EndAccruedInterestAmt& endAccruedInterestAmt() { return endAccruedInterestAmt_; }
  field::StartCash& startCash() { return startCash_; }
  field::EndCash& endCash() { return endCash_; }
  field::Concession& concession() { return concession_; }
  field::TotalTakedown& totalTakedown() { return totalTakedown_; }
  field::NetMoney& netMoney() { return netMoney_; }
  field::SettlCurrAmt& settlCurrAmt() { return settlCurrAmt_; }
  field::SettlCurrency& settlCurrency() { return settlCurrency_; }
  field::SettlCurrFxRate& settlCurrFxRate() { return settlCurrFxRate_; }
  field::SettlCurrFxRateCalc& settlCurrFxRateCalc() { return settlCurrFxRateCalc_; }
  field::PositionEffect& positionEffect() { return positionEffect_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SideMultiLegReportingType& sideMultiLegReportingType() { return sideMultiLegReportingType_; }
  ContAmtsGroup& contAmtsGroup() { return contAmtsGroup_; }
  StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  MiscFeesGroup& miscFeesGroup() { return miscFeesGroup_; }
  field::ExchangeRule& exchangeRule() { return exchangeRule_; }
  field::TradeAllocIndicator& tradeAllocIndicator() { return tradeAllocIndicator_; }
  field::PreallocMethod& preallocMethod() { return preallocMethod_; }
  field::AllocID& allocID() { return allocID_; }
  AllocsGroup4& allocsGroup4() { return allocsGroup4_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Side side_;
  field::OrderID orderID_;
  field::SecondaryOrderID secondaryOrderID_;
  field::ClOrdID clOrdID_;
  field::SecondaryClOrdID secondaryClOrdID_;
  field::ListID listID_;
  PartyIDsGroup partyIDsGroup_;
  field::Account account_;
  field::AcctIDSource acctIDSource_;
  field::AccountType accountType_;
  field::ProcessCode processCode_;
  field::OddLot oddLot_;
  ClearingInstructionsGroup clearingInstructionsGroup_;
  field::TradeInputSource tradeInputSource_;
  field::TradeInputDevice tradeInputDevice_;
  field::OrderInputDevice orderInputDevice_;
  field::Currency currency_;
  field::ComplianceID complianceID_;
  field::SolicitedFlag solicitedFlag_;
  field::OrderCapacity orderCapacity_;
  field::OrderRestrictions orderRestrictions_;
  field::CustOrderCapacity custOrderCapacity_;
  field::OrdType ordType_;
  field::ExecInst execInst_;
  field::TransBkdTime transBkdTime_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::TimeBracket timeBracket_;
  field::Commission commission_;
  field::CommType commType_;
  field::CommCurrency commCurrency_;
  field::FundRenewWaiv fundRenewWaiv_;
  field::GrossTradeAmt grossTradeAmt_;
  field::NumDaysInterest numDaysInterest_;
  field::ExDate exDate_;
  field::AccruedInterestRate accruedInterestRate_;
  field::AccruedInterestAmt accruedInterestAmt_;
  field::InterestAtMaturity interestAtMaturity_;
  field::EndAccruedInterestAmt endAccruedInterestAmt_;
  field::StartCash startCash_;
  field::EndCash endCash_;
  field::Concession concession_;
  field::TotalTakedown totalTakedown_;
  field::NetMoney netMoney_;
  field::SettlCurrAmt settlCurrAmt_;
  field::SettlCurrency settlCurrency_;
  field::SettlCurrFxRate settlCurrFxRate_;
  field::SettlCurrFxRateCalc settlCurrFxRateCalc_;
  field::PositionEffect positionEffect_;
  field::Text text_;
  field::EncodedTextLen encodedTextLen_;
  field::EncodedText encodedText_;
  field::SideMultiLegReportingType sideMultiLegReportingType_;
  ContAmtsGroup contAmtsGroup_;
  StipulationsGroup stipulationsGroup_;
  MiscFeesGroup miscFeesGroup_;
  field::ExchangeRule exchangeRule_;
  field::TradeAllocIndicator tradeAllocIndicator_;
  field::PreallocMethod preallocMethod_;
  field::AllocID allocID_;
  AllocsGroup4 allocsGroup4_;
};

class SidesGroup2 : public AbstractGroup {
 public:
  explicit SidesGroup2(AbstractMessage* message)
      : AbstractGroup(message, &tags::noSides, &tags::side, [](AbstractMessage* m) -> Component* { return new SidesGroup2Comp(m); }) {}

  LongRef& noSides() { return countField_; }
  SidesGroup2Comp& sidesGroup2Comp(int ix) { return static_cast<SidesGroup2Comp&>(*components_[ix]); }
};

class RelatedSymGroup5Comp : public Component {
 public:
  explicit RelatedSymGroup5Comp(AbstractMessage* message);

  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::AgreementDesc& agreementDesc() { return agreementDesc_; }
  field::AgreementID& agreementID() { return agreementID_; }
  field::AgreementDate& agreementDate() { return agreementDate_; }
  field::AgreementCurrency& agreementCurrency() { return agreementCurrency_; }
  field::TerminationType& terminationType() { return terminationType_; }
  field::StartDate& startDate() { return startDate_; }
  field::EndDate& endDate() { return endDate_; }
  field::DeliveryType& deliveryType() { return deliveryType_; }
  field::MarginRatio& marginRatio() { return marginRatio_; }
  UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::PrevClosePx& prevClosePx() { return prevClosePx_; }
  field::QuoteRequestType& quoteRequestType() { return quoteRequestType_; }
  field::QuoteType& quoteType() { return quoteType_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::Side& side() { return side_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::OrderQty& orderQty() { return orderQty_; }
  field::CashOrderQty& cashOrderQty() { return cashOrderQty_; }
  field::OrderPercent& orderPercent() { return orderPercent_; }
  field::RoundingDirection& roundingDirection() { return roundingDirection_; }
  field::RoundingModulus& roundingModulus() { return roundingModulus_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::SettlDate2& settlDate2() { return settlDate2_; }
  field::OrderQty2& orderQty2() { return orderQty2_; }
  field::Currency& currency() { return currency_; }
  StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  LegsGroup3& legsGroup3() { return legsGroup3_; }
  QuoteQualifiersGroup& quoteQualifiersGroup() { return quoteQualifiersGroup_; }
  field::QuotePriceType& quotePriceType() { return quotePriceType_; }
  field::OrdType& ordType() { return ordType_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  field::PriceType& priceType() { return priceType_; }
  field::Price& price() { return price_; }
  field::Price2& price2() { return price2_; }
  field::YieldType& yieldType() { return yieldType_; }
  field::Yield& yield() { return yield_; }
  field::YieldCalcDate& yieldCalcDate() { return yieldCalcDate_; }
  field::YieldRedemptionDate& yieldRedemptionDate() { return yieldRedemptionDate_; }
  field::YieldRedemptionPrice& yieldRedemptionPrice() { return yieldRedemptionPrice_; }
  field::YieldRedemptionPriceType& yieldRedemptionPriceType() { return yieldRedemptionPriceType_; }
  PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  field::AgreementDesc agreementDesc_;
  field::AgreementID agreementID_;
  field::AgreementDate agreementDate_;
  field::AgreementCurrency agreementCurrency_;
  field::TerminationType terminationType_;
  field::StartDate startDate_;
  field::EndDate endDate_;
  field::DeliveryType deliveryType_;
  field::MarginRatio marginRatio_;
  UnderlyingsGroup underlyingsGroup_;
  field::PrevClosePx prevClosePx_;
  field::QuoteRequestType quoteRequestType_;
  field::QuoteType quoteType_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
  field::TradeOriginationDate tradeOriginationDate_;
  field::Side side_;
  field::QtyType qtyType_;
  field::OrderQty orderQty_;
  field::CashOrderQty cashOrderQty_;
  field::OrderPercent orderPercent_;
  field::RoundingDirection roundingDirection_;
  field::RoundingModulus roundingModulus_;
  field::SettlType settlType_;
  field::SettlDate settlDate_;
  field::SettlDate2 settlDate2_;
  field::OrderQty2 orderQty2_;
  field::Currency currency_;
  StipulationsGroup stipulationsGroup_;
  field::Account account_;
  field::AcctIDSource acctIDSource_;
  field::AccountType accountType_;
  LegsGroup3 legsGroup3_;
  QuoteQualifiersGroup quoteQualifiersGroup_;
  field::QuotePriceType quotePriceType_;
  field::OrdType ordType_;
  field::ExpireTime expireTime_;
  field::TransactTime transactTime_;
  field::Spread spread_;
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_;
  field::BenchmarkCurveName benchmarkCurveName_;
  field::BenchmarkCurvePoint benchmarkCurvePoint_;
  field::BenchmarkPrice benchmarkPrice_;
  field::BenchmarkPriceType benchmarkPriceType_;
  field::BenchmarkSecurityID benchmarkSecurityID_;
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_;
  field::PriceType priceType_;
  field::Price price_;
  field::Price2 price2_;
  field::YieldType yieldType_;
  field::Yield yield_;
  field::YieldCalcDate yieldCalcDate_;
  field::YieldRedemptionDate yieldRedemptionDate_;
  field::YieldRedemptionPrice yieldRedemptionPrice_;
  field::YieldRedemptionPriceType yieldRedemptionPriceType_;
  PartyIDsGroup partyIDsGroup_;
};

class RelatedSymGroup5 : public AbstractGroup {
 public:
  explicit RelatedSymGroup5(AbstractMessage* message)
      : AbstractGroup(message, &tags::noRelatedSym, &tags::symbol, [](AbstractMessage* m) -> Component* { return new RelatedSymGroup5Comp(m); }) {}

  LongRef& noRelatedSym() { return countField_; }
  RelatedSymGroup5Comp& relatedSymGroup5Comp(int ix) { return static_cast<RelatedSymGroup5Comp&>(*components_[ix]); }
};

class RelatedSymGroup6Comp : public Component {
 public:
  explicit RelatedSymGroup6Comp(AbstractMessage* message);

  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
  field::Product& product() { return product_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::MaturityMonthYear& maturityMonthYear() { return maturityMonthYear_; }
  field::MaturityDate& maturityDate() { return maturityDate_; }
  field::PutOrCall& putOrCall() { return putOrCall_; }
  field::CouponPaymentDate& couponPaymentDate() { return couponPaymentDate_; }
  field::IssueDate& issueDate() { return issueDate_; }
  field::RepoCollateralSecurityType& repoCollateralSecurityType() { return repoCollateralSecurityType_; }
  field::RepurchaseTerm& repurchaseTerm() { return repurchaseTerm_; }
  field::RepurchaseRate& repurchaseRate() { return repurchaseRate_; }
  field::Factor& factor() { return factor_; }
  field::CreditRating& creditRating() { return creditRating_; }
  field::InstrRegistry& instrRegistry() { return instrRegistry_; }
  field::CountryOfIssue& countryOfIssue() { return countryOfIssue_; }
  field::StateOrProvinceOfIssue& stateOrProvinceOfIssue() { return stateOrProvinceOfIssue_; }
  field::LocaleOfIssue& localeOfIssue() { return localeOfIssue_; }
  field::RedemptionDate& redemptionDate() { return redemptionDate_; }
  field::StrikePrice& strikePrice() { return strikePrice_; }
  field::StrikeCurrency& strikeCurrency() { return strikeCurrency_; }
  field::OptAttribute& optAttribute() { return optAttribute_; }
  field::ContractMultiplier& contractMultiplier() { return contractMultiplier_; }
  field::CouponRate& couponRate() { return couponRate_; }
  field::SecurityExchange& securityExchange() { return securityExchange_; }
  field::Issuer& issuer() { return issuer_; }
  field::EncodedIssuerLen& encodedIssuerLen() { return encodedIssuerLen_; }
  field::EncodedIssuer& encodedIssuer() { return encodedIssuer_; }
  field::SecurityDesc& securityDesc() { return securityDesc_; }
  field::EncodedSecurityDescLen& encodedSecurityDescLen() { return encodedSecurityDescLen_; }
  field::EncodedSecurityDesc& encodedSecurityDesc() { return encodedSecurityDesc_; }
  field::Pool& pool() { return pool_; }
  field::ContractSettlMonth& contractSettlMonth() { return contractSettlMonth_; }
  field::CPProgram& cPProgram() { return cPProgram_; }
  field::CPRegType& cPRegType() { return cPRegType_; }
  EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::PrevClosePx& prevClosePx() { return prevClosePx_; }
  field::QuoteRequestType& quoteRequestType() { return quoteRequestType_; }
  field::QuoteType& quoteType() { return quoteType_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::Symbol symbol_;
  field::SymbolSfx symbolSfx_;
  field::SecurityID securityID_;
  field::SecurityIDSource securityIDSource_;
  SecurityAltIDGroup securityAltIDGroup_;
  field::Product product_;
  field::CFICode cFICode_;
  field::SecurityType securityType_;
  field::SecuritySubType securitySubType_;
  field::MaturityMonthYear maturityMonthYear_;
  field::MaturityDate maturityDate_;
  field::PutOrCall putOrCall_;
  field::CouponPaymentDate couponPaymentDate_;
  field::IssueDate issueDate_;
  field::RepoCollateralSecurityType repoCollateralSecurityType_;
  field::RepurchaseTerm repurchaseTerm_;
  field::RepurchaseRate repurchaseRate_;
  field::Factor factor_;
  field::CreditRating creditRating_;
  field::InstrRegistry instrRegistry_;
  field::CountryOfIssue countryOfIssue_;
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_;
  field::LocaleOfIssue localeOfIssue_;
  field::RedemptionDate redemptionDate_;
  field::StrikePrice strikePrice_;
  field::StrikeCurrency strikeCurrency_;
  field::OptAttribute optAttribute_;
  field::ContractMultiplier contractMultiplier_;
  field::CouponRate couponRate_;
  field::SecurityExchange securityExchange_;
  field::Issuer issuer_;
  field::EncodedIssuerLen encodedIssuerLen_;
  field::EncodedIssuer encodedIssuer_;
  field::SecurityDesc securityDesc_;
  field::EncodedSecurityDescLen encodedSecurityDescLen_;
  field::EncodedSecurityDesc encodedSecurityDesc_;
  field::Pool pool_;
  field::ContractSettlMonth contractSettlMonth_;
  field::CPProgram cPProgram_;
  field::CPRegType cPRegType_;
  EventsGroup eventsGroup_;
  field::DatedDate datedDate_;
  field::InterestAccrualDate interestAccrualDate_;
  UnderlyingsGroup underlyingsGroup_;
  LegsGroup1 legsGroup1_;
  field::PrevClosePx prevClosePx_;
  field::QuoteRequestType quoteRequestType_;
  field::QuoteType quoteType_;
  field::TradingSessionID tradingSessionID_;
  field::TradingSessionSubID tradingSessionSubID_;
};

class RelatedSymGroup6 : public AbstractGroup {
 public:
  explicit RelatedSymGroup6(AbstractMessage* message)
      : AbstractGroup(message, &tags::noRelatedSym, &tags::symbol, [](AbstractMessage* m) -> Component* { return new RelatedSymGroup6Comp(m); }) {}

  LongRef& noRelatedSym() { return countField_; }
  RelatedSymGroup6Comp& relatedSymGroup6Comp(int ix) { return static_cast<RelatedSymGroup6Comp&>(*components_[ix]); }
};

class LegsGroup7Comp : public Component {
 public:
  explicit LegsGroup7Comp(AbstractMessage* message);

  field::LegSymbol& legSymbol() { return legSymbol_; }
  field::LegSymbolSfx& legSymbolSfx() { return legSymbolSfx_; }
  field::LegSecurityID& legSecurityID() { return legSecurityID_; }
  field::LegSecurityIDSource& legSecurityIDSource() { return legSecurityIDSource_; }
  LegSecurityAltIDGroup& legSecurityAltIDGroup() { return legSecurityAltIDGroup_; }
  field::LegProduct& legProduct() { return legProduct_; }
  field::LegCFICode& legCFICode() { return legCFICode_; }
  field::LegSecurityType& legSecurityType() { return legSecurityType_; }
  field::LegSecuritySubType& legSecuritySubType() { return legSecuritySubType_; }
  field::LegMaturityMonthYear& legMaturityMonthYear() { return legMaturityMonthYear_; }
  field::LegMaturityDate& legMaturityDate() { return legMaturityDate_; }
  field::LegCouponPaymentDate& legCouponPaymentDate() { return legCouponPaymentDate_; }
  field::LegIssueDate& legIssueDate() { return legIssueDate_; }
  field::LegRepoCollateralSecurityType& legRepoCollateralSecurityType() { return legRepoCollateralSecurityType_; }
  field::LegRepurchaseTerm& legRepurchaseTerm() { return legRepurchaseTerm_; }
  field::LegRepurchaseRate& legRepurchaseRate() { return legRepurchaseRate_; }
  field::LegFactor& legFactor() { return legFactor_; }
  field::LegCreditRating& legCreditRating() { return legCreditRating_; }
  field::LegInstrRegistry& legInstrRegistry() { return legInstrRegistry_; }
  field::LegCountryOfIssue& legCountryOfIssue() { return legCountryOfIssue_; }
  field::LegStateOrProvinceOfIssue& legStateOrProvinceOfIssue() { return legStateOrProvinceOfIssue_; }
  field::LegLocaleOfIssue& legLocaleOfIssue() { return legLocaleOfIssue_; }
  field::LegRedemptionDate& legRedemptionDate() { return legRedemptionDate_; }
  field::LegStrikePrice& legStrikePrice() { return legStrikePrice_; }
  field::LegStrikeCurrency& legStrikeCurrency() { return legStrikeCurrency_; }
  field::LegOptAttribute& legOptAttribute() { return legOptAttribute_; }
  field::LegContractMultiplier& legContractMultiplier() { return legContractMultiplier_; }
  field::LegCouponRate& legCouponRate() { return legCouponRate_; }
  field::LegSecurityExchange& legSecurityExchange() { return legSecurityExchange_; }
  field::LegIssuer& legIssuer() { return legIssuer_; }
  field::EncodedLegIssuerLen& encodedLegIssuerLen() { return encodedLegIssuerLen_; }
  field::EncodedLegIssuer& encodedLegIssuer() { return encodedLegIssuer_; }
  field::LegSecurityDesc& legSecurityDesc() { return legSecurityDesc_; }
  field::EncodedLegSecurityDescLen& encodedLegSecurityDescLen() { return encodedLegSecurityDescLen_; }
  field::EncodedLegSecurityDesc& encodedLegSecurityDesc() { return encodedLegSecurityDesc_; }
  field::LegRatioQty& legRatioQty() { return legRatioQty_; }
  field::LegSide& legSide() { return legSide_; }
  field::LegCurrency& legCurrency() { return legCurrency_; }
  field::LegPool& legPool() { return legPool_; }
  field::LegDatedDate& legDatedDate() { return legDatedDate_; }
  field::LegContractSettlMonth& legContractSettlMonth() { return legContractSettlMonth_; }
  field::LegInterestAccrualDate& legInterestAccrualDate() { return legInterestAccrualDate_; }
  field::LegQty& legQty() { return legQty_; }
  field::LegSwapType& legSwapType() { return legSwapType_; }
  field::LegSettlType& legSettlType() { return legSettlType_; }
  field::LegSettlDate& legSettlDate() { return legSettlDate_; }
  LegStipulationsGroup& legStipulationsGroup() { return legStipulationsGroup_; }
  NestedPartyIDsGroup& nestedPartyIDsGroup() { return nestedPartyIDsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::LegSymbol legSymbol_;
  field::LegSymbolSfx legSymbolSfx_;
  field::LegSecurityID legSecurityID_;
  field::LegSecurityIDSource legSecurityIDSource_;
  LegSecurityAltIDGroup legSecurityAltIDGroup_;
  field::LegProduct legProduct_;
  field::LegCFICode legCFICode_;
  field::LegSecurityType legSecurityType_;
  field::LegSecuritySubType legSecuritySubType_;
  field::LegMaturityMonthYear legMaturityMonthYear_;
  field::LegMaturityDate legMaturityDate_;
  field::LegCouponPaymentDate legCouponPaymentDate_;
  field::LegIssueDate legIssueDate_;
  field::LegRepoCollateralSecurityType legRepoCollateralSecurityType_;
  field::LegRepurchaseTerm legRepurchaseTerm_;
  field::LegRepurchaseRate legRepurchaseRate_;
  field::LegFactor legFactor_;
  field::LegCreditRating legCreditRating_;
  field::LegInstrRegistry legInstrRegistry_;
  field::LegCountryOfIssue legCountryOfIssue_;
  field::LegStateOrProvinceOfIssue legStateOrProvinceOfIssue_;
  field::LegLocaleOfIssue legLocaleOfIssue_;
  field::LegRedemptionDate legRedemptionDate_;
  field::LegStrikePrice legStrikePrice_;
  field::LegStrikeCurrency legStrikeCurrency_;
  field::LegOptAttribute legOptAttribute_;
  field::LegContractMultiplier legContractMultiplier_;
  field::LegCouponRate legCouponRate_;
  field::LegSecurityExchange legSecurityExchange_;
  field::LegIssuer legIssuer_;
  field::EncodedLegIssuerLen encodedLegIssuerLen_;
  field::EncodedLegIssuer encodedLegIssuer_;
  field::LegSecurityDesc legSecurityDesc_;
  field::EncodedLegSecurityDescLen encodedLegSecurityDescLen_;
  field::EncodedLegSecurityDesc encodedLegSecurityDesc_;
  field::LegRatioQty legRatioQty_;
  field::LegSide legSide_;
  field::LegCurrency legCurrency_;
  field::LegPool legPool_;
  field::LegDatedDate legDatedDate_;
  field::LegContractSettlMonth legContractSettlMonth_;
  field::LegInterestAccrualDate legInterestAccrualDate_;
  field::LegQty legQty_;
  field::LegSwapType legSwapType_;
  field::LegSettlType legSettlType_;
  field::LegSettlDate legSettlDate_;
  LegStipulationsGroup legStipulationsGroup_;
  NestedPartyIDsGroup nestedPartyIDsGroup_;
};

class LegsGroup7 : public AbstractGroup {
 public:
  explicit LegsGroup7(AbstractMessage* message)
      : AbstractGroup(message, &tags::noLegs, &tags::legSymbol, [](AbstractMessage* m) -> Component* { return new LegsGroup7Comp(m); }) {}

  LongRef& noLegs() { return countField_; }
  LegsGroup7Comp& legsGroup7Comp(int ix) { return static_cast<LegsGroup7Comp&>(*components_[ix]); }
};

class CapacitiesGroupComp : public Component {
 public:
  explicit CapacitiesGroupComp(AbstractMessage* message);

  field::OrderCapacity& orderCapacity() { return orderCapacity_; }
  field::OrderRestrictions& orderRestrictions() { return orderRestrictions_; }
  field::OrderCapacityQty& orderCapacityQty() { return orderCapacityQty_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::OrderCapacity orderCapacity_;
  field::OrderRestrictions orderRestrictions_;
  field::OrderCapacityQty orderCapacityQty_;
};

class CapacitiesGroup : public AbstractGroup {
 public:
  explicit CapacitiesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noCapacities, &tags::orderCapacity, [](AbstractMessage* m) -> Component* { return new CapacitiesGroupComp(m); }) {}

  LongRef& noCapacities() { return countField_; }
  CapacitiesGroupComp& capacitiesGroupComp(int ix) { return static_cast<CapacitiesGroupComp&>(*components_[ix]); }
};

class PositionsGroupComp : public Component {
 public:
  explicit PositionsGroupComp(AbstractMessage* message);

  field::PosType& posType() { return posType_; }
  field::LongQty& longQty() { return longQty_; }
  field::ShortQty& shortQty() { return shortQty_; }
  field::PosQtyStatus& posQtyStatus() { return posQtyStatus_; }
  NestedPartyIDsGroup& nestedPartyIDsGroup() { return nestedPartyIDsGroup_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::PosType posType_;
  field::LongQty longQty_;
  field::ShortQty shortQty_;
  field::PosQtyStatus posQtyStatus_;
  NestedPartyIDsGroup nestedPartyIDsGroup_;
};

class PositionsGroup : public AbstractGroup {
 public:
  explicit PositionsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noPositions, &tags::posType, [](AbstractMessage* m) -> Component* { return new PositionsGroupComp(m); }) {}

  LongRef& noPositions() { return countField_; }
  PositionsGroupComp& positionsGroupComp(int ix) { return static_cast<PositionsGroupComp&>(*components_[ix]); }
};

class UnderlyingsGroup2Comp : public Component {
 public:
  explicit UnderlyingsGroup2Comp(AbstractMessage* message);

  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
  field::UnderlyingProduct& underlyingProduct() { return underlyingProduct_; }
  field::UnderlyingCFICode& underlyingCFICode() { return underlyingCFICode_; }
  field::UnderlyingSecurityType& underlyingSecurityType() { return underlyingSecurityType_; }
  field::UnderlyingSecuritySubType& underlyingSecuritySubType() { return underlyingSecuritySubType_; }
  field::UnderlyingMaturityMonthYear& underlyingMaturityMonthYear() { return underlyingMaturityMonthYear_; }
  field::UnderlyingMaturityDate& underlyingMaturityDate() { return underlyingMaturityDate_; }
  field::UnderlyingPutOrCall& underlyingPutOrCall() { return underlyingPutOrCall_; }
  field::UnderlyingCouponPaymentDate& underlyingCouponPaymentDate() { return underlyingCouponPaymentDate_; }
  field::UnderlyingIssueDate& underlyingIssueDate() { return underlyingIssueDate_; }
  field::UnderlyingRepoCollateralSecurityType& underlyingRepoCollateralSecurityType() { return underlyingRepoCollateralSecurityType_; }
  field::UnderlyingRepurchaseTerm& underlyingRepurchaseTerm() { return underlyingRepurchaseTerm_; }
  field::UnderlyingRepurchaseRate& underlyingRepurchaseRate() { return underlyingRepurchaseRate_; }
  field::UnderlyingFactor& underlyingFactor() { return underlyingFactor_; }
  field::UnderlyingCreditRating& underlyingCreditRating() { return underlyingCreditRating_; }
  field::UnderlyingInstrRegistry& underlyingInstrRegistry() { return underlyingInstrRegistry_; }
  field::UnderlyingCountryOfIssue& underlyingCountryOfIssue() { return underlyingCountryOfIssue_; }
  field::UnderlyingStateOrProvinceOfIssue& underlyingStateOrProvinceOfIssue() { return underlyingStateOrProvinceOfIssue_; }
  field::UnderlyingLocaleOfIssue& underlyingLocaleOfIssue() { return underlyingLocaleOfIssue_; }
  field::UnderlyingRedemptionDate& underlyingRedemptionDate() { return underlyingRedemptionDate_; }
  field::UnderlyingStrikePrice& underlyingStrikePrice() { return underlyingStrikePrice_; }
  field::UnderlyingStrikeCurrency& underlyingStrikeCurrency() { return underlyingStrikeCurrency_; }
  field::UnderlyingOptAttribute& underlyingOptAttribute() { return underlyingOptAttribute_; }
  field::UnderlyingContractMultiplier& underlyingContractMultiplier() { return underlyingContractMultiplier_; }
  field::UnderlyingCouponRate& underlyingCouponRate() { return underlyingCouponRate_; }
  field::UnderlyingSecurityExchange& underlyingSecurityExchange() { return underlyingSecurityExchange_; }
  field::UnderlyingIssuer& underlyingIssuer() { return underlyingIssuer_; }
  field::EncodedUnderlyingIssuerLen& encodedUnderlyingIssuerLen() { return encodedUnderlyingIssuerLen_; }
  field::EncodedUnderlyingIssuer& encodedUnderlyingIssuer() { return encodedUnderlyingIssuer_; }
  field::UnderlyingSecurityDesc& underlyingSecurityDesc() { return underlyingSecurityDesc_; }
  field::EncodedUnderlyingSecurityDescLen& encodedUnderlyingSecurityDescLen() { return encodedUnderlyingSecurityDescLen_; }
  field::EncodedUnderlyingSecurityDesc& encodedUnderlyingSecurityDesc() { return encodedUnderlyingSecurityDesc_; }
  field::UnderlyingCPProgram& underlyingCPProgram() { return underlyingCPProgram_; }
  field::UnderlyingCPRegType& underlyingCPRegType() { return underlyingCPRegType_; }
  field::UnderlyingCurrency& underlyingCurrency() { return underlyingCurrency_; }
  field::UnderlyingQty& underlyingQty() { return underlyingQty_; }
  field::UnderlyingPx& underlyingPx() { return underlyingPx_; }
  field::UnderlyingDirtyPrice& underlyingDirtyPrice() { return underlyingDirtyPrice_; }
  field::UnderlyingEndPrice& underlyingEndPrice() { return underlyingEndPrice_; }
  field::UnderlyingStartValue& underlyingStartValue() { return underlyingStartValue_; }
  field::UnderlyingCurrentValue& underlyingCurrentValue() { return underlyingCurrentValue_; }
  field::UnderlyingEndValue& underlyingEndValue() { return underlyingEndValue_; }
  UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }
  field::UnderlyingSettlPrice& underlyingSettlPrice() { return underlyingSettlPrice_; }
  field::UnderlyingSettlPriceType& underlyingSettlPriceType() { return underlyingSettlPriceType_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::UnderlyingSymbol underlyingSymbol_;
  field::UnderlyingSymbolSfx underlyingSymbolSfx_;
  field::UnderlyingSecurityID underlyingSecurityID_;
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_;
  UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_;
  field::UnderlyingProduct underlyingProduct_;
  field::UnderlyingCFICode underlyingCFICode_;
  field::UnderlyingSecurityType underlyingSecurityType_;
  field::UnderlyingSecuritySubType underlyingSecuritySubType_;
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_;
  field::UnderlyingMaturityDate underlyingMaturityDate_;
  field::UnderlyingPutOrCall underlyingPutOrCall_;
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_;
  field::UnderlyingIssueDate underlyingIssueDate_;
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_;
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_;
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_;
  field::UnderlyingFactor underlyingFactor_;
  field::UnderlyingCreditRating underlyingCreditRating_;
  field::UnderlyingInstrRegistry underlyingInstrRegistry_;
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_;
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_;
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_;
  field::UnderlyingRedemptionDate underlyingRedemptionDate_;
  field::UnderlyingStrikePrice underlyingStrikePrice_;
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_;
  field::UnderlyingOptAttribute underlyingOptAttribute_;
  field::UnderlyingContractMultiplier underlyingContractMultiplier_;
  field::UnderlyingCouponRate underlyingCouponRate_;
  field::UnderlyingSecurityExchange underlyingSecurityExchange_;
  field::UnderlyingIssuer underlyingIssuer_;
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_;
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_;
  field::UnderlyingSecurityDesc underlyingSecurityDesc_;
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_;
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_;
  field::UnderlyingCPProgram underlyingCPProgram_;
  field::UnderlyingCPRegType underlyingCPRegType_;
  field::UnderlyingCurrency underlyingCurrency_;
  field::UnderlyingQty underlyingQty_;
  field::UnderlyingPx underlyingPx_;
  field::UnderlyingDirtyPrice underlyingDirtyPrice_;
  field::UnderlyingEndPrice underlyingEndPrice_;
  field::UnderlyingStartValue underlyingStartValue_;
  field::UnderlyingCurrentValue underlyingCurrentValue_;
  field::UnderlyingEndValue underlyingEndValue_;
  UnderlyingStipsGroup underlyingStipsGroup_;
  field::UnderlyingSettlPrice underlyingSettlPrice_;
  field::UnderlyingSettlPriceType underlyingSettlPriceType_;
};

class UnderlyingsGroup2 : public AbstractGroup {
 public:
  explicit UnderlyingsGroup2(AbstractMessage* message)
      : AbstractGroup(message, &tags::noUnderlyings, &tags::underlyingSymbol, [](AbstractMessage* m) -> Component* { return new UnderlyingsGroup2Comp(m); }) {}

  LongRef& noUnderlyings() { return countField_; }
  UnderlyingsGroup2Comp& underlyingsGroup2Comp(int ix) { return static_cast<UnderlyingsGroup2Comp&>(*components_[ix]); }
};

class ExecsGroup1Comp : public Component {
 public:
  explicit ExecsGroup1Comp(AbstractMessage* message);

  field::ExecID& execID() { return execID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::ExecID execID_;
};

class ExecsGroup1 : public AbstractGroup {
 public:
  explicit ExecsGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noExecs, &tags::execID, [](AbstractMessage* m) -> Component* { return new ExecsGroup1Comp(m); }) {}

  LongRef& noExecs() { return countField_; }
  ExecsGroup1Comp& execsGroup1Comp(int ix) { return static_cast<ExecsGroup1Comp&>(*components_[ix]); }
};

class TradesGroupComp : public Component {
 public:
  explicit TradesGroupComp(AbstractMessage* message);

  field::TradeReportID& tradeReportID() { return tradeReportID_; }
  field::SecondaryTradeReportID& secondaryTradeReportID() { return secondaryTradeReportID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::TradeReportID tradeReportID_;
  field::SecondaryTradeReportID secondaryTradeReportID_;
};

class TradesGroup : public AbstractGroup {
 public:
  explicit TradesGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noTrades, &tags::tradeReportID, [](AbstractMessage* m) -> Component* { return new TradesGroupComp(m); }) {}

  LongRef& noTrades() { return countField_; }
  TradesGroupComp& tradesGroupComp(int ix) { return static_cast<TradesGroupComp&>(*components_[ix]); }
};

class UnderlyingsGroup3Comp : public Component {
 public:
  explicit UnderlyingsGroup3Comp(AbstractMessage* message);

  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
  field::UnderlyingProduct& underlyingProduct() { return underlyingProduct_; }
  field::UnderlyingCFICode& underlyingCFICode() { return underlyingCFICode_; }
  field::UnderlyingSecurityType& underlyingSecurityType() { return underlyingSecurityType_; }
  field::UnderlyingSecuritySubType& underlyingSecuritySubType() { return underlyingSecuritySubType_; }
  field::UnderlyingMaturityMonthYear& underlyingMaturityMonthYear() { return underlyingMaturityMonthYear_; }
  field::UnderlyingMaturityDate& underlyingMaturityDate() { return underlyingMaturityDate_; }
  field::UnderlyingPutOrCall& underlyingPutOrCall() { return underlyingPutOrCall_; }
  field::UnderlyingCouponPaymentDate& underlyingCouponPaymentDate() { return underlyingCouponPaymentDate_; }
  field::UnderlyingIssueDate& underlyingIssueDate() { return underlyingIssueDate_; }
  field::UnderlyingRepoCollateralSecurityType& underlyingRepoCollateralSecurityType() { return underlyingRepoCollateralSecurityType_; }
  field::UnderlyingRepurchaseTerm& underlyingRepurchaseTerm() { return underlyingRepurchaseTerm_; }
  field::UnderlyingRepurchaseRate& underlyingRepurchaseRate() { return underlyingRepurchaseRate_; }
  field::UnderlyingFactor& underlyingFactor() { return underlyingFactor_; }
  field::UnderlyingCreditRating& underlyingCreditRating() { return underlyingCreditRating_; }
  field::UnderlyingInstrRegistry& underlyingInstrRegistry() { return underlyingInstrRegistry_; }
  field::UnderlyingCountryOfIssue& underlyingCountryOfIssue() { return underlyingCountryOfIssue_; }
  field::UnderlyingStateOrProvinceOfIssue& underlyingStateOrProvinceOfIssue() { return underlyingStateOrProvinceOfIssue_; }
  field::UnderlyingLocaleOfIssue& underlyingLocaleOfIssue() { return underlyingLocaleOfIssue_; }
  field::UnderlyingRedemptionDate& underlyingRedemptionDate() { return underlyingRedemptionDate_; }
  field::UnderlyingStrikePrice& underlyingStrikePrice() { return underlyingStrikePrice_; }
  field::UnderlyingStrikeCurrency& underlyingStrikeCurrency() { return underlyingStrikeCurrency_; }
  field::UnderlyingOptAttribute& underlyingOptAttribute() { return underlyingOptAttribute_; }
  field::UnderlyingContractMultiplier& underlyingContractMultiplier() { return underlyingContractMultiplier_; }
  field::UnderlyingCouponRate& underlyingCouponRate() { return underlyingCouponRate_; }
  field::UnderlyingSecurityExchange& underlyingSecurityExchange() { return underlyingSecurityExchange_; }
  field::UnderlyingIssuer& underlyingIssuer() { return underlyingIssuer_; }
  field::EncodedUnderlyingIssuerLen& encodedUnderlyingIssuerLen() { return encodedUnderlyingIssuerLen_; }
  field::EncodedUnderlyingIssuer& encodedUnderlyingIssuer() { return encodedUnderlyingIssuer_; }
  field::UnderlyingSecurityDesc& underlyingSecurityDesc() { return underlyingSecurityDesc_; }
  field::EncodedUnderlyingSecurityDescLen& encodedUnderlyingSecurityDescLen() { return encodedUnderlyingSecurityDescLen_; }
  field::EncodedUnderlyingSecurityDesc& encodedUnderlyingSecurityDesc() { return encodedUnderlyingSecurityDesc_; }
  field::UnderlyingCPProgram& underlyingCPProgram() { return underlyingCPProgram_; }
  field::UnderlyingCPRegType& underlyingCPRegType() { return underlyingCPRegType_; }
  field::UnderlyingCurrency& underlyingCurrency() { return underlyingCurrency_; }
  field::UnderlyingQty& underlyingQty() { return underlyingQty_; }
  field::UnderlyingPx& underlyingPx() { return underlyingPx_; }
  field::UnderlyingDirtyPrice& underlyingDirtyPrice() { return underlyingDirtyPrice_; }
  field::UnderlyingEndPrice& underlyingEndPrice() { return underlyingEndPrice_; }
  field::UnderlyingStartValue& underlyingStartValue() { return underlyingStartValue_; }
  field::UnderlyingCurrentValue& underlyingCurrentValue() { return underlyingCurrentValue_; }
  field::UnderlyingEndValue& underlyingEndValue() { return underlyingEndValue_; }
  UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }
  field::CollAction& collAction() { return collAction_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::UnderlyingSymbol underlyingSymbol_;
  field::UnderlyingSymbolSfx underlyingSymbolSfx_;
  field::UnderlyingSecurityID underlyingSecurityID_;
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_;
  UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_;
  field::UnderlyingProduct underlyingProduct_;
  field::UnderlyingCFICode underlyingCFICode_;
  field::UnderlyingSecurityType underlyingSecurityType_;
  field::UnderlyingSecuritySubType underlyingSecuritySubType_;
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_;
  field::UnderlyingMaturityDate underlyingMaturityDate_;
  field::UnderlyingPutOrCall underlyingPutOrCall_;
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_;
  field::UnderlyingIssueDate underlyingIssueDate_;
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_;
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_;
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_;
  field::UnderlyingFactor underlyingFactor_;
  field::UnderlyingCreditRating underlyingCreditRating_;
  field::UnderlyingInstrRegistry underlyingInstrRegistry_;
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_;
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_;
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_;
  field::UnderlyingRedemptionDate underlyingRedemptionDate_;
  field::UnderlyingStrikePrice underlyingStrikePrice_;
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_;
  field::UnderlyingOptAttribute underlyingOptAttribute_;
  field::UnderlyingContractMultiplier underlyingContractMultiplier_;
  field::UnderlyingCouponRate underlyingCouponRate_;
  field::UnderlyingSecurityExchange underlyingSecurityExchange_;
  field::UnderlyingIssuer underlyingIssuer_;
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_;
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_;
  field::UnderlyingSecurityDesc underlyingSecurityDesc_;
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_;
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_;
  field::UnderlyingCPProgram underlyingCPProgram_;
  field::UnderlyingCPRegType underlyingCPRegType_;
  field::UnderlyingCurrency underlyingCurrency_;
  field::UnderlyingQty underlyingQty_;
  field::UnderlyingPx underlyingPx_;
  field::UnderlyingDirtyPrice underlyingDirtyPrice_;
  field::UnderlyingEndPrice underlyingEndPrice_;
  field::UnderlyingStartValue underlyingStartValue_;
  field::UnderlyingCurrentValue underlyingCurrentValue_;
  field::UnderlyingEndValue underlyingEndValue_;
  UnderlyingStipsGroup underlyingStipsGroup_;
  field::CollAction collAction_;
};

class UnderlyingsGroup3 : public AbstractGroup {
 public:
  explicit UnderlyingsGroup3(AbstractMessage* message)
      : AbstractGroup(message, &tags::noUnderlyings, &tags::underlyingSymbol, [](AbstractMessage* m) -> Component* { return new UnderlyingsGroup3Comp(m); }) {}

  LongRef& noUnderlyings() { return countField_; }
  UnderlyingsGroup3Comp& underlyingsGroup3Comp(int ix) { return static_cast<UnderlyingsGroup3Comp&>(*components_[ix]); }
};

class CollInquiryQualifierGroupComp : public Component {
 public:
  explicit CollInquiryQualifierGroupComp(AbstractMessage* message);

  field::CollInquiryQualifier& collInquiryQualifier() { return collInquiryQualifier_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::CollInquiryQualifier collInquiryQualifier_;
};

class CollInquiryQualifierGroup : public AbstractGroup {
 public:
  explicit CollInquiryQualifierGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noCollInquiryQualifier, &tags::collInquiryQualifier, [](AbstractMessage* m) -> Component* { return new CollInquiryQualifierGroupComp(m); }) {}

  LongRef& noCollInquiryQualifier() { return countField_; }
  CollInquiryQualifierGroupComp& collInquiryQualifierGroupComp(int ix) { return static_cast<CollInquiryQualifierGroupComp&>(*components_[ix]); }
};

class CompIDsGroupComp : public Component {
 public:
  explicit CompIDsGroupComp(AbstractMessage* message);

  field::RefCompID& refCompID() { return refCompID_; }
  field::RefSubID& refSubID() { return refSubID_; }
  field::LocationID& locationID() { return locationID_; }
  field::DeskID& deskID() { return deskID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::RefCompID refCompID_;
  field::RefSubID refSubID_;
  field::LocationID locationID_;
  field::DeskID deskID_;
};

class CompIDsGroup : public AbstractGroup {
 public:
  explicit CompIDsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noCompIDs, &tags::refCompID, [](AbstractMessage* m) -> Component* { return new CompIDsGroupComp(m); }) {}

  LongRef& noCompIDs() { return countField_; }
  CompIDsGroupComp& compIDsGroupComp(int ix) { return static_cast<CompIDsGroupComp&>(*components_[ix]); }
};

class CompIDsGroup1Comp : public Component {
 public:
  explicit CompIDsGroup1Comp(AbstractMessage* message);

  field::RefCompID& refCompID() { return refCompID_; }
  field::RefSubID& refSubID() { return refSubID_; }
  field::LocationID& locationID() { return locationID_; }
  field::DeskID& deskID() { return deskID_; }
  field::StatusValue& statusValue() { return statusValue_; }
  field::StatusText& statusText() { return statusText_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::RefCompID refCompID_;
  field::RefSubID refSubID_;
  field::LocationID locationID_;
  field::DeskID deskID_;
  field::StatusValue statusValue_;
  field::StatusText statusText_;
};

class CompIDsGroup1 : public AbstractGroup {
 public:
  explicit CompIDsGroup1(AbstractMessage* message)
      : AbstractGroup(message, &tags::noCompIDs, &tags::refCompID, [](AbstractMessage* m) -> Component* { return new CompIDsGroup1Comp(m); }) {}

  LongRef& noCompIDs() { return countField_; }
  CompIDsGroup1Comp& compIDsGroup1Comp(int ix) { return static_cast<CompIDsGroup1Comp&>(*components_[ix]); }
};

class HopsGroupComp : public Component {
 public:
  explicit HopsGroupComp(AbstractMessage* message);

  field::HopCompID& hopCompID() { return hopCompID_; }
  field::HopSendingTime& hopSendingTime() { return hopSendingTime_; }
  field::HopRefID& hopRefID() { return hopRefID_; }

  AbstractField* map(int tag, int fldBeg) override;
  AbstractField* field(const Tag& tag) override;
  int write(int valBeg) override;

 private:
  field::HopCompID hopCompID_;
  field::HopSendingTime hopSendingTime_;
  field::HopRefID hopRefID_;
};

class HopsGroup : public AbstractGroup {
 public:
  explicit HopsGroup(AbstractMessage* message)
      : AbstractGroup(message, &tags::noHops, &tags::hopCompID, [](AbstractMessage* m) -> Component* { return new HopsGroupComp(m); }) {}

  LongRef& noHops() { return countField_; }
  HopsGroupComp& hopsGroupComp(int ix) { return static_cast<HopsGroupComp&>(*components_[ix]); }
};

}  // namespace fix::gen::group

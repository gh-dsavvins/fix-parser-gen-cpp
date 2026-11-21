#pragma once

#include <cstdint>
#include <string_view>

#include "fix/field.hpp"
#include "fix/gen/tags.hpp"

namespace fix::gen::field {

class Account : public StringRef {
 public:
  explicit Account(AbstractMessage* message) : StringRef(message, &tags::account) {}
};

class AdvId : public StringRef {
 public:
  explicit AdvId(AbstractMessage* message) : StringRef(message, &tags::advId) {}
};

class AdvRefID : public StringRef {
 public:
  explicit AdvRefID(AbstractMessage* message) : StringRef(message, &tags::advRefID) {}
};

class AdvSide : public StringRef {
 public:
  static constexpr std::string_view BUY = "B";
  static constexpr std::string_view SELL = "S";
  static constexpr std::string_view CROSS = "X";
  static constexpr std::string_view TRADE = "T";

  explicit AdvSide(AbstractMessage* message) : StringRef(message, &tags::advSide) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class AdvTransType : public StringRef {
 public:
  static constexpr std::string_view NEW = "N";
  static constexpr std::string_view CANCEL = "C";
  static constexpr std::string_view REPLACE = "R";

  explicit AdvTransType(AbstractMessage* message) : StringRef(message, &tags::advTransType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class AvgPx : public StringRef {
 public:
  explicit AvgPx(AbstractMessage* message) : StringRef(message, &tags::avgPx) {}
};

class BeginSeqNo : public StringRef {
 public:
  explicit BeginSeqNo(AbstractMessage* message) : StringRef(message, &tags::beginSeqNo) {}
};

class BeginString : public StringRef {
 public:
  explicit BeginString(AbstractMessage* message) : StringRef(message, &tags::beginString) {}
};

class BodyLength : public LongRef {
 public:
  explicit BodyLength(AbstractMessage* message) : LongRef(message, &tags::bodyLength) {}
};

class CheckSum : public StringRef {
 public:
  explicit CheckSum(AbstractMessage* message) : StringRef(message, &tags::checkSum) {}
};

class ClOrdID : public StringRef {
 public:
  explicit ClOrdID(AbstractMessage* message) : StringRef(message, &tags::clOrdID) {}
};

class Commission : public StringRef {
 public:
  explicit Commission(AbstractMessage* message) : StringRef(message, &tags::commission) {}
};

class CommType : public StringRef {
 public:
  static constexpr std::string_view PER_UNIT = "1";
  static constexpr std::string_view PERCENTAGE = "2";
  static constexpr std::string_view ABSOLUTE = "3";
  static constexpr std::string_view _4 = "4";
  static constexpr std::string_view _5 = "5";
  static constexpr std::string_view POINTS_PER_BOND_OR_CONTRACT_SUPPLY_CONTRACTMULTIPLIER = "6";

  explicit CommType(AbstractMessage* message) : StringRef(message, &tags::commType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class CumQty : public StringRef {
 public:
  explicit CumQty(AbstractMessage* message) : StringRef(message, &tags::cumQty) {}
};

class Currency : public StringRef {
 public:
  explicit Currency(AbstractMessage* message) : StringRef(message, &tags::currency) {}
};

class EndSeqNo : public StringRef {
 public:
  explicit EndSeqNo(AbstractMessage* message) : StringRef(message, &tags::endSeqNo) {}
};

class ExecID : public StringRef {
 public:
  explicit ExecID(AbstractMessage* message) : StringRef(message, &tags::execID) {}
};

class ExecInst : public StringRef {
 public:
  static constexpr std::string_view NOT_HELD = "1";
  static constexpr std::string_view WORK = "2";
  static constexpr std::string_view GO_ALONG = "3";
  static constexpr std::string_view OVER_THE_DAY = "4";
  static constexpr std::string_view HELD = "5";
  static constexpr std::string_view PARTICIPATE_DONT_INITIATE = "6";
  static constexpr std::string_view STRICT_SCALE = "7";
  static constexpr std::string_view TRY_TO_SCALE = "8";
  static constexpr std::string_view STAY_ON_BIDSIDE = "9";
  static constexpr std::string_view STAY_ON_OFFERSIDE = "0";
  static constexpr std::string_view NO_CROSS = "A";
  static constexpr std::string_view OK_TO_CROSS = "B";
  static constexpr std::string_view CALL_FIRST = "C";
  static constexpr std::string_view PERCENT_OF_VOLUME = "D";
  static constexpr std::string_view DO_NOT_INCREASE = "E";
  static constexpr std::string_view DO_NOT_REDUCE = "F";
  static constexpr std::string_view ALL_OR_NONE = "G";
  static constexpr std::string_view REINSTATE_ON_SYSTEM_FAILURE = "H";
  static constexpr std::string_view INSTITUTIONS_ONLY = "I";
  static constexpr std::string_view REINSTATE_ON_TRADING_HALT = "J";
  static constexpr std::string_view CANCEL_ON_TRADING_HALT = "K";
  static constexpr std::string_view LAST_PEG = "L";
  static constexpr std::string_view MID_PRICE_PEG = "M";
  static constexpr std::string_view NON_NEGOTIABLE = "N";
  static constexpr std::string_view OPENING_PEG = "O";
  static constexpr std::string_view MARKET_PEG = "P";
  static constexpr std::string_view CANCEL_ON_SYSTEM_FAILURE = "Q";
  static constexpr std::string_view PRIMARY_PEG = "R";
  static constexpr std::string_view SUSPEND = "S";
  static constexpr std::string_view CUSTOMER_DISPLAY_INSTRUCTION = "U";
  static constexpr std::string_view NETTING = "V";
  static constexpr std::string_view PEG_TO_VWAP = "W";
  static constexpr std::string_view TRADE_ALONG = "X";
  static constexpr std::string_view TRY_TO_STOP = "Y";
  static constexpr std::string_view CANCEL_IF_NOT_BEST = "Z";
  static constexpr std::string_view TRAILING_STOP_PEG = "a";
  static constexpr std::string_view STRICT_LIMIT = "b";
  static constexpr std::string_view IGNORE_PRICE_VALIDITY_CHECKS = "c";
  static constexpr std::string_view PEG_TO_LIMIT_PRICE = "d";
  static constexpr std::string_view WORK_TO_TARGET_STRATEGY = "e";

  explicit ExecInst(AbstractMessage* message) : StringRef(message, &tags::execInst) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class ExecRefID : public StringRef {
 public:
  explicit ExecRefID(AbstractMessage* message) : StringRef(message, &tags::execRefID) {}
};

class HandlInst : public StringRef {
 public:
  static constexpr std::string_view AUTOMATED_EXECUTION_ORDER_PRIVATE_NO_BROKER_INTERVENTION = "1";
  static constexpr std::string_view AUTOMATED_EXECUTION_ORDER_PUBLIC_BROKER_INTERVENTION_OK = "2";
  static constexpr std::string_view MANUAL_ORDER_BEST_EXECUTION = "3";

  explicit HandlInst(AbstractMessage* message) : StringRef(message, &tags::handlInst) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class SecurityIDSource : public StringRef {
 public:
  static constexpr std::string_view CUSIP = "1";
  static constexpr std::string_view SEDOL = "2";
  static constexpr std::string_view QUIK = "3";
  static constexpr std::string_view ISIN_NUMBER = "4";
  static constexpr std::string_view RIC_CODE = "5";
  static constexpr std::string_view ISO_CURRENCY_CODE = "6";
  static constexpr std::string_view ISO_COUNTRY_CODE = "7";
  static constexpr std::string_view EXCHANGE_SYMBOL = "8";
  static constexpr std::string_view CONSOLIDATED_TAPE_ASSOCIATION = "9";
  static constexpr std::string_view BLOOMBERG_SYMBOL = "A";
  static constexpr std::string_view WERTPAPIER = "B";
  static constexpr std::string_view DUTCH = "C";
  static constexpr std::string_view VALOREN = "D";
  static constexpr std::string_view SICOVAM = "E";
  static constexpr std::string_view BELGIAN = "F";
  static constexpr std::string_view COMMON = "G";
  static constexpr std::string_view CLEARING_HOUSE = "H";
  static constexpr std::string_view ISDA_FPML_PRODUCT_SPECIFICATION = "I";
  static constexpr std::string_view OPTIONS_PRICE_REPORTING_AUTHORITY = "J";

  explicit SecurityIDSource(AbstractMessage* message) : StringRef(message, &tags::securityIDSource) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class IOIID : public StringRef {
 public:
  explicit IOIID(AbstractMessage* message) : StringRef(message, &tags::iOIID) {}
};

class IOIQltyInd : public StringRef {
 public:
  static constexpr std::string_view LOW = "L";
  static constexpr std::string_view MEDIUM = "M";
  static constexpr std::string_view HIGH = "H";

  explicit IOIQltyInd(AbstractMessage* message) : StringRef(message, &tags::iOIQltyInd) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class IOIRefID : public StringRef {
 public:
  explicit IOIRefID(AbstractMessage* message) : StringRef(message, &tags::iOIRefID) {}
};

class IOIQty : public StringRef {
 public:
  static constexpr std::string_view SMALL = "S";
  static constexpr std::string_view MEDIUM = "M";
  static constexpr std::string_view LARGE = "L";

  explicit IOIQty(AbstractMessage* message) : StringRef(message, &tags::iOIQty) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class IOITransType : public StringRef {
 public:
  static constexpr std::string_view NEW = "N";
  static constexpr std::string_view CANCEL = "C";
  static constexpr std::string_view REPLACE = "R";

  explicit IOITransType(AbstractMessage* message) : StringRef(message, &tags::iOITransType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class LastCapacity : public StringRef {
 public:
  static constexpr std::string_view AGENT = "1";
  static constexpr std::string_view CROSS_AS_AGENT = "2";
  static constexpr std::string_view CROSS_AS_PRINCIPAL = "3";
  static constexpr std::string_view PRINCIPAL = "4";

  explicit LastCapacity(AbstractMessage* message) : StringRef(message, &tags::lastCapacity) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class LastMkt : public StringRef {
 public:
  explicit LastMkt(AbstractMessage* message) : StringRef(message, &tags::lastMkt) {}
};

class LastPx : public StringRef {
 public:
  explicit LastPx(AbstractMessage* message) : StringRef(message, &tags::lastPx) {}
};

class LastQty : public StringRef {
 public:
  explicit LastQty(AbstractMessage* message) : StringRef(message, &tags::lastQty) {}
};

class NoLinesOfText : public LongRef {
 public:
  explicit NoLinesOfText(AbstractMessage* message) : LongRef(message, &tags::noLinesOfText) {}
};

class MsgSeqNum : public StringRef {
 public:
  explicit MsgSeqNum(AbstractMessage* message) : StringRef(message, &tags::msgSeqNum) {}
};

class MsgType : public StringRef {
 public:
  static constexpr std::string_view HEARTBEAT = "0";
  static constexpr std::string_view TEST_REQUEST = "1";
  static constexpr std::string_view RESEND_REQUEST = "2";
  static constexpr std::string_view REJECT = "3";
  static constexpr std::string_view SEQUENCE_RESET = "4";
  static constexpr std::string_view LOGOUT = "5";
  static constexpr std::string_view INDICATION_OF_INTEREST = "6";
  static constexpr std::string_view ADVERTISEMENT = "7";
  static constexpr std::string_view EXECUTION_REPORT = "8";
  static constexpr std::string_view ORDER_CANCEL_REJECT = "9";
  static constexpr std::string_view LOGON = "A";
  static constexpr std::string_view NEWS = "B";
  static constexpr std::string_view EMAIL = "C";
  static constexpr std::string_view ORDER_SINGLE = "D";
  static constexpr std::string_view ORDER_LIST = "E";
  static constexpr std::string_view ORDER_CANCEL_REQUEST = "F";
  static constexpr std::string_view ORDER_CANCEL_REPLACE_REQUEST = "G";
  static constexpr std::string_view ORDER_STATUS_REQUEST = "H";
  static constexpr std::string_view ALLOCATION_INSTRUCTION = "J";
  static constexpr std::string_view LIST_CANCEL_REQUEST = "K";
  static constexpr std::string_view LIST_EXECUTE = "L";
  static constexpr std::string_view LIST_STATUS_REQUEST = "M";
  static constexpr std::string_view LIST_STATUS = "N";
  static constexpr std::string_view ALLOCATION_INSTRUCTION_ACK = "P";
  static constexpr std::string_view DONT_KNOW_TRADE = "Q";
  static constexpr std::string_view QUOTE_REQUEST = "R";
  static constexpr std::string_view QUOTE = "S";
  static constexpr std::string_view SETTLEMENT_INSTRUCTIONS = "T";
  static constexpr std::string_view MARKET_DATA_REQUEST = "V";
  static constexpr std::string_view MARKET_DATA_SNAPSHOT_FULL_REFRESH = "W";
  static constexpr std::string_view MARKET_DATA_INCREMENTAL_REFRESH = "X";
  static constexpr std::string_view MARKET_DATA_REQUEST_REJECT = "Y";
  static constexpr std::string_view QUOTE_CANCEL = "Z";
  static constexpr std::string_view QUOTE_STATUS_REQUEST = "a";
  static constexpr std::string_view MASS_QUOTE_ACKNOWLEDGEMENT = "b";
  static constexpr std::string_view SECURITY_DEFINITION_REQUEST = "c";
  static constexpr std::string_view SECURITY_DEFINITION = "d";
  static constexpr std::string_view SECURITY_STATUS_REQUEST = "e";
  static constexpr std::string_view SECURITY_STATUS = "f";
  static constexpr std::string_view TRADING_SESSION_STATUS_REQUEST = "g";
  static constexpr std::string_view TRADING_SESSION_STATUS = "h";
  static constexpr std::string_view MASS_QUOTE = "i";
  static constexpr std::string_view BUSINESS_MESSAGE_REJECT = "j";
  static constexpr std::string_view BID_REQUEST = "k";
  static constexpr std::string_view BID_RESPONSE = "l";
  static constexpr std::string_view LIST_STRIKE_PRICE = "m";
  static constexpr std::string_view XML_MESSAGE = "n";
  static constexpr std::string_view REGISTRATION_INSTRUCTIONS = "o";
  static constexpr std::string_view REGISTRATION_INSTRUCTIONS_RESPONSE = "p";
  static constexpr std::string_view ORDER_MASS_CANCEL_REQUEST = "q";
  static constexpr std::string_view ORDER_MASS_CANCEL_REPORT = "r";
  static constexpr std::string_view NEW_ORDER_s = "s";
  static constexpr std::string_view CROSS_ORDER_CANCEL_REPLACE_REQUEST = "t";
  static constexpr std::string_view CROSS_ORDER_CANCEL_REQUEST = "u";
  static constexpr std::string_view SECURITY_TYPE_REQUEST = "v";
  static constexpr std::string_view SECURITY_TYPES = "w";
  static constexpr std::string_view SECURITY_LIST_REQUEST = "x";
  static constexpr std::string_view SECURITY_LIST = "y";
  static constexpr std::string_view DERIVATIVE_SECURITY_LIST_REQUEST = "z";
  static constexpr std::string_view DERIVATIVE_SECURITY_LIST = "AA";
  static constexpr std::string_view NEW_ORDER_AB = "AB";
  static constexpr std::string_view MULTILEG_ORDER_CANCEL_REPLACE = "AC";
  static constexpr std::string_view TRADE_CAPTURE_REPORT_REQUEST = "AD";
  static constexpr std::string_view TRADE_CAPTURE_REPORT = "AE";
  static constexpr std::string_view ORDER_MASS_STATUS_REQUEST = "AF";
  static constexpr std::string_view QUOTE_REQUEST_REJECT = "AG";
  static constexpr std::string_view RFQ_REQUEST = "AH";
  static constexpr std::string_view QUOTE_STATUS_REPORT = "AI";
  static constexpr std::string_view QUOTE_RESPONSE = "AJ";
  static constexpr std::string_view CONFIRMATION = "AK";
  static constexpr std::string_view POSITION_MAINTENANCE_REQUEST = "AL";
  static constexpr std::string_view POSITION_MAINTENANCE_REPORT = "AM";
  static constexpr std::string_view REQUEST_FOR_POSITIONS = "AN";
  static constexpr std::string_view REQUEST_FOR_POSITIONS_ACK = "AO";
  static constexpr std::string_view POSITION_REPORT = "AP";
  static constexpr std::string_view TRADE_CAPTURE_REPORT_REQUEST_ACK = "AQ";
  static constexpr std::string_view TRADE_CAPTURE_REPORT_ACK = "AR";
  static constexpr std::string_view ALLOCATION_REPORT = "AS";
  static constexpr std::string_view ALLOCATION_REPORT_ACK = "AT";
  static constexpr std::string_view CONFIRMATION_ACK = "AU";
  static constexpr std::string_view SETTLEMENT_INSTRUCTION_REQUEST = "AV";
  static constexpr std::string_view ASSIGNMENT_REPORT = "AW";
  static constexpr std::string_view COLLATERAL_REQUEST = "AX";
  static constexpr std::string_view COLLATERAL_ASSIGNMENT = "AY";
  static constexpr std::string_view COLLATERAL_RESPONSE = "AZ";
  static constexpr std::string_view COLLATERAL_REPORT = "BA";
  static constexpr std::string_view COLLATERAL_INQUIRY = "BB";
  static constexpr std::string_view NETWORK_BC = "BC";
  static constexpr std::string_view NETWORK_BD = "BD";
  static constexpr std::string_view USER_REQUEST = "BE";
  static constexpr std::string_view USER_RESPONSE = "BF";
  static constexpr std::string_view COLLATERAL_INQUIRY_ACK = "BG";
  static constexpr std::string_view CONFIRMATION_REQUEST = "BH";

  explicit MsgType(AbstractMessage* message) : StringRef(message, &tags::msgType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NewSeqNo : public StringRef {
 public:
  explicit NewSeqNo(AbstractMessage* message) : StringRef(message, &tags::newSeqNo) {}
};

class OrderID : public StringRef {
 public:
  explicit OrderID(AbstractMessage* message) : StringRef(message, &tags::orderID) {}
};

class OrderQty : public StringRef {
 public:
  explicit OrderQty(AbstractMessage* message) : StringRef(message, &tags::orderQty) {}
};

class OrdStatus : public StringRef {
 public:
  static constexpr std::string_view NEW = "0";
  static constexpr std::string_view PARTIALLY_FILLED = "1";
  static constexpr std::string_view FILLED = "2";
  static constexpr std::string_view DONE_FOR_DAY = "3";
  static constexpr std::string_view CANCELED = "4";
  static constexpr std::string_view PENDING_CANCEL = "6";
  static constexpr std::string_view STOPPED = "7";
  static constexpr std::string_view REJECTED = "8";
  static constexpr std::string_view SUSPENDED = "9";
  static constexpr std::string_view PENDING_NEW = "A";
  static constexpr std::string_view CALCULATED = "B";
  static constexpr std::string_view EXPIRED = "C";
  static constexpr std::string_view ACCEPTED_FOR_BIDDING = "D";
  static constexpr std::string_view PENDING_REPLACE = "E";

  explicit OrdStatus(AbstractMessage* message) : StringRef(message, &tags::ordStatus) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class OrdType : public StringRef {
 public:
  static constexpr std::string_view MARKET = "1";
  static constexpr std::string_view LIMIT = "2";
  static constexpr std::string_view STOP = "3";
  static constexpr std::string_view STOP_LIMIT = "4";
  static constexpr std::string_view WITH_OR_WITHOUT = "6";
  static constexpr std::string_view LIMIT_OR_BETTER = "7";
  static constexpr std::string_view LIMIT_WITH_OR_WITHOUT = "8";
  static constexpr std::string_view ON_BASIS = "9";
  static constexpr std::string_view PREVIOUSLY_QUOTED = "D";
  static constexpr std::string_view PREVIOUSLY_INDICATED = "E";
  static constexpr std::string_view FOREX = "G";
  static constexpr std::string_view FUNARI = "I";
  static constexpr std::string_view MARKET_IF_TOUCHED = "J";
  static constexpr std::string_view MARKET_WITH_LEFTOVER_AS_LIMIT = "K";
  static constexpr std::string_view PREVIOUS_FUND_VALUATION_POINT = "L";
  static constexpr std::string_view NEXT_FUND_VALUATION_POINT = "M";
  static constexpr std::string_view PEGGED = "P";

  explicit OrdType(AbstractMessage* message) : StringRef(message, &tags::ordType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class OrigClOrdID : public StringRef {
 public:
  explicit OrigClOrdID(AbstractMessage* message) : StringRef(message, &tags::origClOrdID) {}
};

class OrigTime : public StringRef {
 public:
  explicit OrigTime(AbstractMessage* message) : StringRef(message, &tags::origTime) {}
};

class PossDupFlag : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit PossDupFlag(AbstractMessage* message) : StringRef(message, &tags::possDupFlag) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class Price : public StringRef {
 public:
  explicit Price(AbstractMessage* message) : StringRef(message, &tags::price) {}
};

class RefSeqNum : public StringRef {
 public:
  explicit RefSeqNum(AbstractMessage* message) : StringRef(message, &tags::refSeqNum) {}
};

class SecurityID : public StringRef {
 public:
  explicit SecurityID(AbstractMessage* message) : StringRef(message, &tags::securityID) {}
};

class SenderCompID : public StringRef {
 public:
  explicit SenderCompID(AbstractMessage* message) : StringRef(message, &tags::senderCompID) {}
};

class SenderSubID : public StringRef {
 public:
  explicit SenderSubID(AbstractMessage* message) : StringRef(message, &tags::senderSubID) {}
};

class SendingTime : public StringRef {
 public:
  explicit SendingTime(AbstractMessage* message) : StringRef(message, &tags::sendingTime) {}
};

class Quantity : public StringRef {
 public:
  explicit Quantity(AbstractMessage* message) : StringRef(message, &tags::quantity) {}
};

class Side : public StringRef {
 public:
  static constexpr std::string_view BUY = "1";
  static constexpr std::string_view SELL = "2";
  static constexpr std::string_view BUY_MINUS = "3";
  static constexpr std::string_view SELL_PLUS = "4";
  static constexpr std::string_view SELL_SHORT = "5";
  static constexpr std::string_view SELL_SHORT_EXEMPT = "6";
  static constexpr std::string_view UNDISCLOSED = "7";
  static constexpr std::string_view CROSS = "8";
  static constexpr std::string_view CROSS_SHORT = "9";
  static constexpr std::string_view CROSS_SHORT_EXEMPT = "A";
  static constexpr std::string_view AS_DEFINED = "B";
  static constexpr std::string_view OPPOSITE = "C";
  static constexpr std::string_view SUBSCRIBE = "D";
  static constexpr std::string_view REDEEM = "E";
  static constexpr std::string_view LEND = "F";
  static constexpr std::string_view BORROW = "G";

  explicit Side(AbstractMessage* message) : StringRef(message, &tags::side) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class Symbol : public StringRef {
 public:
  explicit Symbol(AbstractMessage* message) : StringRef(message, &tags::symbol) {}
};

class TargetCompID : public StringRef {
 public:
  explicit TargetCompID(AbstractMessage* message) : StringRef(message, &tags::targetCompID) {}
};

class TargetSubID : public StringRef {
 public:
  explicit TargetSubID(AbstractMessage* message) : StringRef(message, &tags::targetSubID) {}
};

class Text : public StringRef {
 public:
  explicit Text(AbstractMessage* message) : StringRef(message, &tags::text) {}
};

class TimeInForce : public StringRef {
 public:
  static constexpr std::string_view DAY = "0";
  static constexpr std::string_view GOOD_TILL_CANCEL = "1";
  static constexpr std::string_view AT_THE_OPENING = "2";
  static constexpr std::string_view IMMEDIATE_OR_CANCEL = "3";
  static constexpr std::string_view FILL_OR_KILL = "4";
  static constexpr std::string_view GOOD_TILL_CROSSING = "5";
  static constexpr std::string_view GOOD_TILL_DATE = "6";
  static constexpr std::string_view AT_THE_CLOSE = "7";

  explicit TimeInForce(AbstractMessage* message) : StringRef(message, &tags::timeInForce) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class TransactTime : public StringRef {
 public:
  explicit TransactTime(AbstractMessage* message) : StringRef(message, &tags::transactTime) {}
};

class Urgency : public StringRef {
 public:
  static constexpr std::string_view NORMAL = "0";
  static constexpr std::string_view FLASH = "1";
  static constexpr std::string_view BACKGROUND = "2";

  explicit Urgency(AbstractMessage* message) : StringRef(message, &tags::urgency) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class ValidUntilTime : public StringRef {
 public:
  explicit ValidUntilTime(AbstractMessage* message) : StringRef(message, &tags::validUntilTime) {}
};

class SettlType : public StringRef {
 public:
  static constexpr std::string_view REGULAR = "0";
  static constexpr std::string_view CASH = "1";
  static constexpr std::string_view NEXT_DAY = "2";
  static constexpr std::string_view T_PLUS_2 = "3";
  static constexpr std::string_view T_PLUS_3 = "4";
  static constexpr std::string_view T_PLUS_4 = "5";
  static constexpr std::string_view FUTURE = "6";
  static constexpr std::string_view WHEN_AND_IF_ISSUED = "7";
  static constexpr std::string_view SELLERS_OPTION = "8";
  static constexpr std::string_view T_PLUS_5 = "9";

  explicit SettlType(AbstractMessage* message) : StringRef(message, &tags::settlType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class SettlDate : public StringRef {
 public:
  explicit SettlDate(AbstractMessage* message) : StringRef(message, &tags::settlDate) {}
};

class SymbolSfx : public StringRef {
 public:
  explicit SymbolSfx(AbstractMessage* message) : StringRef(message, &tags::symbolSfx) {}
};

class ListID : public StringRef {
 public:
  explicit ListID(AbstractMessage* message) : StringRef(message, &tags::listID) {}
};

class ListSeqNo : public LongRef {
 public:
  explicit ListSeqNo(AbstractMessage* message) : LongRef(message, &tags::listSeqNo) {}
};

class TotNoOrders : public LongRef {
 public:
  explicit TotNoOrders(AbstractMessage* message) : LongRef(message, &tags::totNoOrders) {}
};

class ListExecInst : public StringRef {
 public:
  explicit ListExecInst(AbstractMessage* message) : StringRef(message, &tags::listExecInst) {}
};

class AllocID : public StringRef {
 public:
  explicit AllocID(AbstractMessage* message) : StringRef(message, &tags::allocID) {}
};

class AllocTransType : public StringRef {
 public:
  static constexpr std::string_view NEW = "0";
  static constexpr std::string_view REPLACE = "1";
  static constexpr std::string_view CANCEL = "2";

  explicit AllocTransType(AbstractMessage* message) : StringRef(message, &tags::allocTransType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class RefAllocID : public StringRef {
 public:
  explicit RefAllocID(AbstractMessage* message) : StringRef(message, &tags::refAllocID) {}
};

class NoOrders : public LongRef {
 public:
  explicit NoOrders(AbstractMessage* message) : LongRef(message, &tags::noOrders) {}
};

class AvgPxPrecision : public LongRef {
 public:
  explicit AvgPxPrecision(AbstractMessage* message) : LongRef(message, &tags::avgPxPrecision) {}
};

class TradeDate : public StringRef {
 public:
  explicit TradeDate(AbstractMessage* message) : StringRef(message, &tags::tradeDate) {}
};

class PositionEffect : public StringRef {
 public:
  static constexpr std::string_view OPEN = "O";
  static constexpr std::string_view CLOSE = "C";
  static constexpr std::string_view ROLLED = "R";
  static constexpr std::string_view FIFO = "F";

  explicit PositionEffect(AbstractMessage* message) : StringRef(message, &tags::positionEffect) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NoAllocs : public LongRef {
 public:
  explicit NoAllocs(AbstractMessage* message) : LongRef(message, &tags::noAllocs) {}
};

class AllocAccount : public StringRef {
 public:
  explicit AllocAccount(AbstractMessage* message) : StringRef(message, &tags::allocAccount) {}
};

class AllocQty : public StringRef {
 public:
  explicit AllocQty(AbstractMessage* message) : StringRef(message, &tags::allocQty) {}
};

class ProcessCode : public StringRef {
 public:
  static constexpr std::string_view REGULAR = "0";
  static constexpr std::string_view SOFT_DOLLAR = "1";
  static constexpr std::string_view STEP_IN = "2";
  static constexpr std::string_view STEP_OUT = "3";
  static constexpr std::string_view SOFT_DOLLAR_STEP_IN = "4";
  static constexpr std::string_view SOFT_DOLLAR_STEP_OUT = "5";
  static constexpr std::string_view PLAN_SPONSOR = "6";

  explicit ProcessCode(AbstractMessage* message) : StringRef(message, &tags::processCode) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NoRpts : public LongRef {
 public:
  explicit NoRpts(AbstractMessage* message) : LongRef(message, &tags::noRpts) {}
};

class RptSeq : public LongRef {
 public:
  explicit RptSeq(AbstractMessage* message) : LongRef(message, &tags::rptSeq) {}
};

class CxlQty : public StringRef {
 public:
  explicit CxlQty(AbstractMessage* message) : StringRef(message, &tags::cxlQty) {}
};

class NoDlvyInst : public LongRef {
 public:
  explicit NoDlvyInst(AbstractMessage* message) : LongRef(message, &tags::noDlvyInst) {}
};

class AllocStatus : public LongRef {
 public:
  static constexpr int64_t ACCEPTED = 0;
  static constexpr int64_t BLOCK_LEVEL_REJECT = 1;
  static constexpr int64_t ACCOUNT_LEVEL_REJECT = 2;
  static constexpr int64_t RECEIVED = 3;
  static constexpr int64_t INCOMPLETE = 4;
  static constexpr int64_t REJECTED_BY_INTERMEDIARY = 5;

  explicit AllocStatus(AbstractMessage* message) : LongRef(message, &tags::allocStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class AllocRejCode : public LongRef {
 public:
  static constexpr int64_t UNKNOWN_ACCOUNT = 0;
  static constexpr int64_t INCORRECT_QUANTITY = 1;
  static constexpr int64_t INCORRECT_AVERAGE_PRICE = 2;
  static constexpr int64_t UNKNOWN_EXECUTING_BROKER_MNEMONIC = 3;
  static constexpr int64_t COMMISSION_DIFFERENCE = 4;
  static constexpr int64_t UNKNOWN_ORDERID = 5;
  static constexpr int64_t UNKNOWN_LISTID = 6;
  static constexpr int64_t OTHER = 7;
  static constexpr int64_t INCORRECT_ALLOCATED_QUANTITY = 8;
  static constexpr int64_t CALCULATION_DIFFERENCE = 9;
  static constexpr int64_t UNKNOWN_OR_STALE_EXECID = 10;
  static constexpr int64_t MISMATCHED_DATA_VALUE = 11;
  static constexpr int64_t UNKNOWN_CLORDID = 12;
  static constexpr int64_t WAREHOUSE_REQUEST_REJECTED = 13;

  explicit AllocRejCode(AbstractMessage* message) : LongRef(message, &tags::allocRejCode) {}

  static int64_t value(const char* bytes, int valBeg);
};

class Signature : public StringRef {
 public:
  explicit Signature(AbstractMessage* message) : StringRef(message, &tags::signature) {}
};

class SecureDataLen : public LongRef {
 public:
  explicit SecureDataLen(AbstractMessage* message) : LongRef(message, &tags::secureDataLen) {}
};

class SecureData : public StringRef {
 public:
  explicit SecureData(AbstractMessage* message) : StringRef(message, &tags::secureData) {}
};

class SignatureLength : public LongRef {
 public:
  explicit SignatureLength(AbstractMessage* message) : LongRef(message, &tags::signatureLength) {}
};

class EmailType : public StringRef {
 public:
  static constexpr std::string_view NEW = "0";
  static constexpr std::string_view REPLY = "1";
  static constexpr std::string_view ADMIN_REPLY = "2";

  explicit EmailType(AbstractMessage* message) : StringRef(message, &tags::emailType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class RawDataLength : public LongRef {
 public:
  explicit RawDataLength(AbstractMessage* message) : LongRef(message, &tags::rawDataLength) {}
};

class RawData : public StringRef {
 public:
  explicit RawData(AbstractMessage* message) : StringRef(message, &tags::rawData) {}
};

class PossResend : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit PossResend(AbstractMessage* message) : StringRef(message, &tags::possResend) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class EncryptMethod : public LongRef {
 public:
  static constexpr int64_t NONE = 0;
  static constexpr int64_t PKCS = 1;
  static constexpr int64_t DES = 2;
  static constexpr int64_t PKCS_DES = 3;
  static constexpr int64_t PGP_DES = 4;
  static constexpr int64_t PGP_DES_MD5 = 5;
  static constexpr int64_t PEM_DES_MD5 = 6;

  explicit EncryptMethod(AbstractMessage* message) : LongRef(message, &tags::encryptMethod) {}

  static int64_t value(const char* bytes, int valBeg);
};

class StopPx : public StringRef {
 public:
  explicit StopPx(AbstractMessage* message) : StringRef(message, &tags::stopPx) {}
};

class ExDestination : public StringRef {
 public:
  explicit ExDestination(AbstractMessage* message) : StringRef(message, &tags::exDestination) {}
};

class CxlRejReason : public LongRef {
 public:
  static constexpr int64_t TOO_LATE_TO_CANCEL = 0;
  static constexpr int64_t UNKNOWN_ORDER = 1;
  static constexpr int64_t BROKER = 2;
  static constexpr int64_t ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS = 3;
  static constexpr int64_t UNABLE_TO_PROCESS_ORDER_MASS_CANCEL_REQUEST = 4;
  static constexpr int64_t ORIGORDMODTIME = 5;
  static constexpr int64_t DUPLICATE_CLORDID = 6;
  static constexpr int64_t OTHER = 99;

  explicit CxlRejReason(AbstractMessage* message) : LongRef(message, &tags::cxlRejReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class OrdRejReason : public LongRef {
 public:
  static constexpr int64_t BROKER = 0;
  static constexpr int64_t UNKNOWN_SYMBOL = 1;
  static constexpr int64_t EXCHANGE_CLOSED = 2;
  static constexpr int64_t ORDER_EXCEEDS_LIMIT = 3;
  static constexpr int64_t TOO_LATE_TO_ENTER = 4;
  static constexpr int64_t UNKNOWN_ORDER = 5;
  static constexpr int64_t DUPLICATE_ORDER = 6;
  static constexpr int64_t DUPLICATE_OF_A_VERBALLY_COMMUNICATED_ORDER = 7;
  static constexpr int64_t STALE_ORDER = 8;
  static constexpr int64_t TRADE_ALONG_REQUIRED = 9;
  static constexpr int64_t INVALID_INVESTOR_ID = 10;
  static constexpr int64_t UNSUPPORTED_ORDER_CHARACTERISTIC12_SURVEILLENCE_OPTION = 11;
  static constexpr int64_t INCORRECT_QUANTITY = 13;
  static constexpr int64_t INCORRECT_ALLOCATED_QUANTITY = 14;
  static constexpr int64_t UNKNOWN_ACCOUNT = 15;
  static constexpr int64_t OTHER = 99;

  explicit OrdRejReason(AbstractMessage* message) : LongRef(message, &tags::ordRejReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class IOIQualifier : public StringRef {
 public:
  static constexpr std::string_view ALL_OR_NONE = "A";
  static constexpr std::string_view MARKET_ON_CLOSE = "B";
  static constexpr std::string_view AT_THE_CLOSE = "C";
  static constexpr std::string_view VWAP = "D";
  static constexpr std::string_view IN_TOUCH_WITH = "I";
  static constexpr std::string_view LIMIT = "L";
  static constexpr std::string_view MORE_BEHIND = "M";
  static constexpr std::string_view AT_THE_OPEN = "O";
  static constexpr std::string_view TAKING_A_POSITION = "P";
  static constexpr std::string_view AT_THE_MARKET = "Q";
  static constexpr std::string_view READY_TO_TRADE = "R";
  static constexpr std::string_view PORTFOLIO_SHOWN = "S";
  static constexpr std::string_view THROUGH_THE_DAY = "T";
  static constexpr std::string_view VERSUS = "V";
  static constexpr std::string_view INDICATION = "W";
  static constexpr std::string_view CROSSING_OPPORTUNITY = "X";
  static constexpr std::string_view AT_THE_MIDPOINT = "Y";
  static constexpr std::string_view PRE_OPEN = "Z";

  explicit IOIQualifier(AbstractMessage* message) : StringRef(message, &tags::iOIQualifier) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class Issuer : public StringRef {
 public:
  explicit Issuer(AbstractMessage* message) : StringRef(message, &tags::issuer) {}
};

class SecurityDesc : public StringRef {
 public:
  explicit SecurityDesc(AbstractMessage* message) : StringRef(message, &tags::securityDesc) {}
};

class HeartBtInt : public LongRef {
 public:
  explicit HeartBtInt(AbstractMessage* message) : LongRef(message, &tags::heartBtInt) {}
};

class MinQty : public StringRef {
 public:
  explicit MinQty(AbstractMessage* message) : StringRef(message, &tags::minQty) {}
};

class MaxFloor : public StringRef {
 public:
  explicit MaxFloor(AbstractMessage* message) : StringRef(message, &tags::maxFloor) {}
};

class TestReqID : public StringRef {
 public:
  explicit TestReqID(AbstractMessage* message) : StringRef(message, &tags::testReqID) {}
};

class ReportToExch : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit ReportToExch(AbstractMessage* message) : StringRef(message, &tags::reportToExch) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class LocateReqd : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit LocateReqd(AbstractMessage* message) : StringRef(message, &tags::locateReqd) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class OnBehalfOfCompID : public StringRef {
 public:
  explicit OnBehalfOfCompID(AbstractMessage* message) : StringRef(message, &tags::onBehalfOfCompID) {}
};

class OnBehalfOfSubID : public StringRef {
 public:
  explicit OnBehalfOfSubID(AbstractMessage* message) : StringRef(message, &tags::onBehalfOfSubID) {}
};

class QuoteID : public StringRef {
 public:
  explicit QuoteID(AbstractMessage* message) : StringRef(message, &tags::quoteID) {}
};

class NetMoney : public StringRef {
 public:
  explicit NetMoney(AbstractMessage* message) : StringRef(message, &tags::netMoney) {}
};

class SettlCurrAmt : public StringRef {
 public:
  explicit SettlCurrAmt(AbstractMessage* message) : StringRef(message, &tags::settlCurrAmt) {}
};

class SettlCurrency : public StringRef {
 public:
  explicit SettlCurrency(AbstractMessage* message) : StringRef(message, &tags::settlCurrency) {}
};

class ForexReq : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit ForexReq(AbstractMessage* message) : StringRef(message, &tags::forexReq) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class OrigSendingTime : public StringRef {
 public:
  explicit OrigSendingTime(AbstractMessage* message) : StringRef(message, &tags::origSendingTime) {}
};

class GapFillFlag : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit GapFillFlag(AbstractMessage* message) : StringRef(message, &tags::gapFillFlag) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NoExecs : public LongRef {
 public:
  explicit NoExecs(AbstractMessage* message) : LongRef(message, &tags::noExecs) {}
};

class ExpireTime : public StringRef {
 public:
  explicit ExpireTime(AbstractMessage* message) : StringRef(message, &tags::expireTime) {}
};

class DKReason : public StringRef {
 public:
  static constexpr std::string_view UNKNOWN_SYMBOL = "A";
  static constexpr std::string_view WRONG_SIDE = "B";
  static constexpr std::string_view QUANTITY_EXCEEDS_ORDER = "C";
  static constexpr std::string_view NO_MATCHING_ORDER = "D";
  static constexpr std::string_view PRICE_EXCEEDS_LIMIT = "E";
  static constexpr std::string_view CALCULATION_DIFFERENCE = "F";
  static constexpr std::string_view OTHER = "Z";

  explicit DKReason(AbstractMessage* message) : StringRef(message, &tags::dKReason) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class DeliverToCompID : public StringRef {
 public:
  explicit DeliverToCompID(AbstractMessage* message) : StringRef(message, &tags::deliverToCompID) {}
};

class DeliverToSubID : public StringRef {
 public:
  explicit DeliverToSubID(AbstractMessage* message) : StringRef(message, &tags::deliverToSubID) {}
};

class IOINaturalFlag : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit IOINaturalFlag(AbstractMessage* message) : StringRef(message, &tags::iOINaturalFlag) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class QuoteReqID : public StringRef {
 public:
  explicit QuoteReqID(AbstractMessage* message) : StringRef(message, &tags::quoteReqID) {}
};

class BidPx : public StringRef {
 public:
  explicit BidPx(AbstractMessage* message) : StringRef(message, &tags::bidPx) {}
};

class OfferPx : public StringRef {
 public:
  explicit OfferPx(AbstractMessage* message) : StringRef(message, &tags::offerPx) {}
};

class BidSize : public StringRef {
 public:
  explicit BidSize(AbstractMessage* message) : StringRef(message, &tags::bidSize) {}
};

class OfferSize : public StringRef {
 public:
  explicit OfferSize(AbstractMessage* message) : StringRef(message, &tags::offerSize) {}
};

class NoMiscFees : public LongRef {
 public:
  explicit NoMiscFees(AbstractMessage* message) : LongRef(message, &tags::noMiscFees) {}
};

class MiscFeeAmt : public StringRef {
 public:
  explicit MiscFeeAmt(AbstractMessage* message) : StringRef(message, &tags::miscFeeAmt) {}
};

class MiscFeeCurr : public StringRef {
 public:
  explicit MiscFeeCurr(AbstractMessage* message) : StringRef(message, &tags::miscFeeCurr) {}
};

class MiscFeeType : public StringRef {
 public:
  static constexpr std::string_view REGULATORY = "1";
  static constexpr std::string_view TAX = "2";
  static constexpr std::string_view LOCAL_COMMISSION = "3";
  static constexpr std::string_view EXCHANGE_FEES = "4";
  static constexpr std::string_view STAMP = "5";
  static constexpr std::string_view LEVY = "6";
  static constexpr std::string_view OTHER = "7";
  static constexpr std::string_view MARKUP = "8";
  static constexpr std::string_view CONSUMPTION_TAX = "9";
  static constexpr std::string_view PER_TRANSACTION = "10";
  static constexpr std::string_view CONVERSION = "11";
  static constexpr std::string_view AGENT = "12";

  explicit MiscFeeType(AbstractMessage* message) : StringRef(message, &tags::miscFeeType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class PrevClosePx : public StringRef {
 public:
  explicit PrevClosePx(AbstractMessage* message) : StringRef(message, &tags::prevClosePx) {}
};

class ResetSeqNumFlag : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit ResetSeqNumFlag(AbstractMessage* message) : StringRef(message, &tags::resetSeqNumFlag) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class SenderLocationID : public StringRef {
 public:
  explicit SenderLocationID(AbstractMessage* message) : StringRef(message, &tags::senderLocationID) {}
};

class TargetLocationID : public StringRef {
 public:
  explicit TargetLocationID(AbstractMessage* message) : StringRef(message, &tags::targetLocationID) {}
};

class OnBehalfOfLocationID : public StringRef {
 public:
  explicit OnBehalfOfLocationID(AbstractMessage* message) : StringRef(message, &tags::onBehalfOfLocationID) {}
};

class DeliverToLocationID : public StringRef {
 public:
  explicit DeliverToLocationID(AbstractMessage* message) : StringRef(message, &tags::deliverToLocationID) {}
};

class NoRelatedSym : public LongRef {
 public:
  explicit NoRelatedSym(AbstractMessage* message) : LongRef(message, &tags::noRelatedSym) {}
};

class Subject : public StringRef {
 public:
  explicit Subject(AbstractMessage* message) : StringRef(message, &tags::subject) {}
};

class Headline : public StringRef {
 public:
  explicit Headline(AbstractMessage* message) : StringRef(message, &tags::headline) {}
};

class URLLink : public StringRef {
 public:
  explicit URLLink(AbstractMessage* message) : StringRef(message, &tags::uRLLink) {}
};

class ExecType : public StringRef {
 public:
  static constexpr std::string_view NEW = "0";
  static constexpr std::string_view DONE_FOR_DAY = "3";
  static constexpr std::string_view CANCELED = "4";
  static constexpr std::string_view REPLACE = "5";
  static constexpr std::string_view PENDING_CANCEL = "6";
  static constexpr std::string_view STOPPED = "7";
  static constexpr std::string_view REJECTED = "8";
  static constexpr std::string_view SUSPENDED = "9";
  static constexpr std::string_view PENDING_NEW = "A";
  static constexpr std::string_view CALCULATED = "B";
  static constexpr std::string_view EXPIRED = "C";
  static constexpr std::string_view RESTATED = "D";
  static constexpr std::string_view PENDING_REPLACE = "E";
  static constexpr std::string_view TRADE = "F";
  static constexpr std::string_view TRADE_CORRECT = "G";
  static constexpr std::string_view TRADE_CANCEL = "H";
  static constexpr std::string_view ORDER_STATUS = "I";

  explicit ExecType(AbstractMessage* message) : StringRef(message, &tags::execType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class LeavesQty : public StringRef {
 public:
  explicit LeavesQty(AbstractMessage* message) : StringRef(message, &tags::leavesQty) {}
};

class CashOrderQty : public StringRef {
 public:
  explicit CashOrderQty(AbstractMessage* message) : StringRef(message, &tags::cashOrderQty) {}
};

class AllocAvgPx : public StringRef {
 public:
  explicit AllocAvgPx(AbstractMessage* message) : StringRef(message, &tags::allocAvgPx) {}
};

class AllocNetMoney : public StringRef {
 public:
  explicit AllocNetMoney(AbstractMessage* message) : StringRef(message, &tags::allocNetMoney) {}
};

class SettlCurrFxRate : public DoubleRef {
 public:
  explicit SettlCurrFxRate(AbstractMessage* message) : DoubleRef(message, &tags::settlCurrFxRate) {}
};

class SettlCurrFxRateCalc : public StringRef {
 public:
  static constexpr std::string_view MULTIPLY = "M";
  static constexpr std::string_view DIVIDE = "D";

  explicit SettlCurrFxRateCalc(AbstractMessage* message) : StringRef(message, &tags::settlCurrFxRateCalc) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NumDaysInterest : public LongRef {
 public:
  explicit NumDaysInterest(AbstractMessage* message) : LongRef(message, &tags::numDaysInterest) {}
};

class AccruedInterestRate : public StringRef {
 public:
  explicit AccruedInterestRate(AbstractMessage* message) : StringRef(message, &tags::accruedInterestRate) {}
};

class AccruedInterestAmt : public StringRef {
 public:
  explicit AccruedInterestAmt(AbstractMessage* message) : StringRef(message, &tags::accruedInterestAmt) {}
};

class SettlInstMode : public StringRef {
 public:
  static constexpr std::string_view STANDING_INSTRUCTIONS_PROVIDED = "1";
  static constexpr std::string_view SPECIFIC_ORDER_FOR_A_SINGLE_ACCOUNT = "4";
  static constexpr std::string_view REQUEST_REJECT = "5";

  explicit SettlInstMode(AbstractMessage* message) : StringRef(message, &tags::settlInstMode) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class AllocText : public StringRef {
 public:
  explicit AllocText(AbstractMessage* message) : StringRef(message, &tags::allocText) {}
};

class SettlInstID : public StringRef {
 public:
  explicit SettlInstID(AbstractMessage* message) : StringRef(message, &tags::settlInstID) {}
};

class SettlInstTransType : public StringRef {
 public:
  static constexpr std::string_view NEW = "N";
  static constexpr std::string_view CANCEL = "C";
  static constexpr std::string_view REPLACE = "R";
  static constexpr std::string_view RESTATE = "T";

  explicit SettlInstTransType(AbstractMessage* message) : StringRef(message, &tags::settlInstTransType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class EmailThreadID : public StringRef {
 public:
  explicit EmailThreadID(AbstractMessage* message) : StringRef(message, &tags::emailThreadID) {}
};

class SettlInstSource : public StringRef {
 public:
  static constexpr std::string_view BROKERS_INSTRUCTIONS = "1";
  static constexpr std::string_view INSTITUTIONS_INSTRUCTIONS = "2";
  static constexpr std::string_view INVESTOR = "3";

  explicit SettlInstSource(AbstractMessage* message) : StringRef(message, &tags::settlInstSource) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class SecurityType : public StringRef {
 public:
  static constexpr std::string_view FUTURE = "FUT";
  static constexpr std::string_view OPTION = "OPT";
  static constexpr std::string_view EURO_SUPRANATIONAL_COUPONS = "EUSUPRA";
  static constexpr std::string_view FEDERAL_AGENCY_COUPON = "FAC";
  static constexpr std::string_view FEDERAL_AGENCY_DISCOUNT_NOTE = "FADN";
  static constexpr std::string_view PRIVATE_EXPORT_FUNDING = "PEF";
  static constexpr std::string_view USD_SUPRANATIONAL_COUPONS = "SUPRA";
  static constexpr std::string_view CORPORATE_BOND = "CORP";
  static constexpr std::string_view CORPORATE_PRIVATE_PLACEMENT = "CPP";
  static constexpr std::string_view CONVERTIBLE_BOND = "CB";
  static constexpr std::string_view DUAL_CURRENCY = "DUAL";
  static constexpr std::string_view EURO_CORPORATE_BOND = "EUCORP";
  static constexpr std::string_view INDEXED_LINKED = "XLINKD";
  static constexpr std::string_view STRUCTURED_NOTES = "STRUCT";
  static constexpr std::string_view YANKEE_CORPORATE_BOND = "YANK";
  static constexpr std::string_view FOREIGN_EXCHANGE_CONTRACT = "FOR";
  static constexpr std::string_view COMMON_STOCK = "CS";
  static constexpr std::string_view PREFERRED_STOCK = "PS";
  static constexpr std::string_view BRADY_BOND = "BRADY";
  static constexpr std::string_view EURO_SOVEREIGNS = "EUSOV";
  static constexpr std::string_view US_TREASURY_BOND = "TBOND";
  static constexpr std::string_view INTEREST_STRIP_FROM_ANY_BOND_OR_NOTE = "TINT";
  static constexpr std::string_view TREASURY_INFLATION_PROTECTED_SECURITIES = "TIPS";
  static constexpr std::string_view PRINCIPAL_STRIP_OF_A_CALLABLE_BOND_OR_NOTE = "TCAL";
  static constexpr std::string_view PRINCIPAL_STRIP_FROM_A_NON_CALLABLE_BOND_OR_NOTE = "TPRN";
  static constexpr std::string_view US_TREASURY_NOTE_UST = "UST";
  static constexpr std::string_view US_TREASURY_BILL_USTB = "USTB";
  static constexpr std::string_view US_TREASURY_NOTE_TNOTE = "TNOTE";
  static constexpr std::string_view US_TREASURY_BILL_TBILL = "TBILL";
  static constexpr std::string_view REPURCHASE = "REPO";
  static constexpr std::string_view FORWARD = "FORWARD";
  static constexpr std::string_view BUY_SELLBACK = "BUYSELL";
  static constexpr std::string_view SECURITIES_LOAN = "SECLOAN";
  static constexpr std::string_view SECURITIES_PLEDGE = "SECPLEDGE";
  static constexpr std::string_view TERM_LOAN = "TERM";
  static constexpr std::string_view REVOLVER_LOAN = "RVLV";
  static constexpr std::string_view REVOLVER_TERM_LOAN = "RVLVTRM";
  static constexpr std::string_view BRIDGE_LOAN = "BRIDGE";
  static constexpr std::string_view LETTER_OF_CREDIT = "LOFC";
  static constexpr std::string_view SWING_LINE_FACILITY = "SWING";
  static constexpr std::string_view DEBTOR_IN_POSSESSION = "DINP";
  static constexpr std::string_view DEFAULTED = "DEFLTED";
  static constexpr std::string_view WITHDRAWN = "WITHDRN";
  static constexpr std::string_view REPLACED = "REPLACD";
  static constexpr std::string_view MATURED = "MATURED";
  static constexpr std::string_view AMENDED_RESTATED = "AMENDED";
  static constexpr std::string_view RETIRED = "RETIRED";
  static constexpr std::string_view BANKERS_ACCEPTANCE = "BA";
  static constexpr std::string_view BANK_NOTES = "BN";
  static constexpr std::string_view BILL_OF_EXCHANGES = "BOX";
  static constexpr std::string_view CERTIFICATE_OF_DEPOSIT = "CD";
  static constexpr std::string_view CALL_LOANS = "CL";
  static constexpr std::string_view COMMERCIAL_PAPER = "CP";
  static constexpr std::string_view DEPOSIT_NOTES = "DN";
  static constexpr std::string_view EURO_CERTIFICATE_OF_DEPOSIT = "EUCD";
  static constexpr std::string_view EURO_COMMERCIAL_PAPER = "EUCP";
  static constexpr std::string_view LIQUIDITY_NOTE = "LQN";
  static constexpr std::string_view MEDIUM_TERM_NOTES = "MTN";
  static constexpr std::string_view OVERNIGHT = "ONITE";
  static constexpr std::string_view PROMISSORY_NOTE = "PN";
  static constexpr std::string_view PLAZOS_FIJOS = "PZFJ";
  static constexpr std::string_view SHORT_TERM_LOAN_NOTE = "STN";
  static constexpr std::string_view TIME_DEPOSIT = "TD";
  static constexpr std::string_view EXTENDED_COMM_NOTE = "XCN";
  static constexpr std::string_view YANKEE_CERTIFICATE_OF_DEPOSIT = "YCD";
  static constexpr std::string_view ASSET_BACKED_SECURITIES = "ABS";
  static constexpr std::string_view CORP_MORTGAGE_BACKED_SECURITIES = "CMBS";
  static constexpr std::string_view COLLATERALIZED_MORTGAGE_OBLIGATION = "CMO";
  static constexpr std::string_view IOETTE_MORTGAGE = "IET";
  static constexpr std::string_view MORTGAGE_BACKED_SECURITIES = "MBS";
  static constexpr std::string_view MORTGAGE_INTEREST_ONLY = "MIO";
  static constexpr std::string_view MORTGAGE_PRINCIPAL_ONLY = "MPO";
  static constexpr std::string_view MORTGAGE_PRIVATE_PLACEMENT = "MPP";
  static constexpr std::string_view MISCELLANEOUS_PASS_THROUGH = "MPT";
  static constexpr std::string_view PFANDBRIEFE = "PFAND";
  static constexpr std::string_view TO_BE_ANNOUNCED = "TBA";
  static constexpr std::string_view OTHER_ANTICIPATION_NOTES_BAN_GAN_ETC = "AN";
  static constexpr std::string_view CERTIFICATE_OF_OBLIGATION = "COFO";
  static constexpr std::string_view CERTIFICATE_OF_PARTICIPATION = "COFP";
  static constexpr std::string_view GENERAL_OBLIGATION_BONDS = "GO";
  static constexpr std::string_view MANDATORY_TENDER = "MT";
  static constexpr std::string_view REVENUE_ANTICIPATION_NOTE = "RAN";
  static constexpr std::string_view REVENUE_BONDS = "REV";
  static constexpr std::string_view SPECIAL_ASSESSMENT = "SPCLA";
  static constexpr std::string_view SPECIAL_OBLIGATION = "SPCLO";
  static constexpr std::string_view SPECIAL_TAX = "SPCLT";
  static constexpr std::string_view TAX_ANTICIPATION_NOTE = "TAN";
  static constexpr std::string_view TAX_ALLOCATION = "TAXA";
  static constexpr std::string_view TAX_EXEMPT_COMMERCIAL_PAPER = "TECP";
  static constexpr std::string_view TAX_REVENUE_ANTICIPATION_NOTE = "TRAN";
  static constexpr std::string_view VARIABLE_RATE_DEMAND_NOTE = "VRDN";
  static constexpr std::string_view WARRANT = "WAR";
  static constexpr std::string_view MUTUAL_FUND = "MF";
  static constexpr std::string_view MULTI_LEG_INSTRUMENT = "MLEG";
  static constexpr std::string_view NO_SECURITY_TYPE = "NONE";

  explicit SecurityType(AbstractMessage* message) : StringRef(message, &tags::securityType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class EffectiveTime : public StringRef {
 public:
  explicit EffectiveTime(AbstractMessage* message) : StringRef(message, &tags::effectiveTime) {}
};

class StandInstDbType : public LongRef {
 public:
  static constexpr int64_t OTHER = 0;
  static constexpr int64_t DTC_SID = 1;
  static constexpr int64_t THOMSON_ALERT = 2;
  static constexpr int64_t A_GLOBAL_CUSTODIAN = 3;
  static constexpr int64_t ACCOUNTNET = 4;

  explicit StandInstDbType(AbstractMessage* message) : LongRef(message, &tags::standInstDbType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class StandInstDbName : public StringRef {
 public:
  explicit StandInstDbName(AbstractMessage* message) : StringRef(message, &tags::standInstDbName) {}
};

class StandInstDbID : public StringRef {
 public:
  explicit StandInstDbID(AbstractMessage* message) : StringRef(message, &tags::standInstDbID) {}
};

class SettlDeliveryType : public LongRef {
 public:
  static constexpr int64_t VERSUS_PAYMENT_DELIVER = 0;
  static constexpr int64_t FREE_DELIVER = 1;
  static constexpr int64_t TRI_PARTY = 2;
  static constexpr int64_t HOLD_IN_CUSTODY = 3;

  explicit SettlDeliveryType(AbstractMessage* message) : LongRef(message, &tags::settlDeliveryType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class BidSpotRate : public StringRef {
 public:
  explicit BidSpotRate(AbstractMessage* message) : StringRef(message, &tags::bidSpotRate) {}
};

class BidForwardPoints : public StringRef {
 public:
  explicit BidForwardPoints(AbstractMessage* message) : StringRef(message, &tags::bidForwardPoints) {}
};

class OfferSpotRate : public StringRef {
 public:
  explicit OfferSpotRate(AbstractMessage* message) : StringRef(message, &tags::offerSpotRate) {}
};

class OfferForwardPoints : public StringRef {
 public:
  explicit OfferForwardPoints(AbstractMessage* message) : StringRef(message, &tags::offerForwardPoints) {}
};

class OrderQty2 : public StringRef {
 public:
  explicit OrderQty2(AbstractMessage* message) : StringRef(message, &tags::orderQty2) {}
};

class SettlDate2 : public StringRef {
 public:
  explicit SettlDate2(AbstractMessage* message) : StringRef(message, &tags::settlDate2) {}
};

class LastSpotRate : public StringRef {
 public:
  explicit LastSpotRate(AbstractMessage* message) : StringRef(message, &tags::lastSpotRate) {}
};

class LastForwardPoints : public StringRef {
 public:
  explicit LastForwardPoints(AbstractMessage* message) : StringRef(message, &tags::lastForwardPoints) {}
};

class AllocLinkID : public StringRef {
 public:
  explicit AllocLinkID(AbstractMessage* message) : StringRef(message, &tags::allocLinkID) {}
};

class AllocLinkType : public LongRef {
 public:
  static constexpr int64_t F_X_NETTING = 0;
  static constexpr int64_t F_X_SWAP = 1;

  explicit AllocLinkType(AbstractMessage* message) : LongRef(message, &tags::allocLinkType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class SecondaryOrderID : public StringRef {
 public:
  explicit SecondaryOrderID(AbstractMessage* message) : StringRef(message, &tags::secondaryOrderID) {}
};

class NoIOIQualifiers : public LongRef {
 public:
  explicit NoIOIQualifiers(AbstractMessage* message) : LongRef(message, &tags::noIOIQualifiers) {}
};

class MaturityMonthYear : public StringRef {
 public:
  explicit MaturityMonthYear(AbstractMessage* message) : StringRef(message, &tags::maturityMonthYear) {}
};

class PutOrCall : public LongRef {
 public:
  static constexpr int64_t PUT = 0;
  static constexpr int64_t CALL = 1;

  explicit PutOrCall(AbstractMessage* message) : LongRef(message, &tags::putOrCall) {}

  static int64_t value(const char* bytes, int valBeg);
};

class StrikePrice : public StringRef {
 public:
  explicit StrikePrice(AbstractMessage* message) : StringRef(message, &tags::strikePrice) {}
};

class CoveredOrUncovered : public LongRef {
 public:
  static constexpr int64_t COVERED = 0;
  static constexpr int64_t UNCOVERED = 1;

  explicit CoveredOrUncovered(AbstractMessage* message) : LongRef(message, &tags::coveredOrUncovered) {}

  static int64_t value(const char* bytes, int valBeg);
};

class OptAttribute : public StringRef {
 public:
  explicit OptAttribute(AbstractMessage* message) : StringRef(message, &tags::optAttribute) {}
};

class SecurityExchange : public StringRef {
 public:
  explicit SecurityExchange(AbstractMessage* message) : StringRef(message, &tags::securityExchange) {}
};

class NotifyBrokerOfCredit : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit NotifyBrokerOfCredit(AbstractMessage* message) : StringRef(message, &tags::notifyBrokerOfCredit) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class AllocHandlInst : public LongRef {
 public:
  static constexpr int64_t MATCH = 1;
  static constexpr int64_t FORWARD = 2;
  static constexpr int64_t FORWARD_AND_MATCH = 3;

  explicit AllocHandlInst(AbstractMessage* message) : LongRef(message, &tags::allocHandlInst) {}

  static int64_t value(const char* bytes, int valBeg);
};

class MaxShow : public StringRef {
 public:
  explicit MaxShow(AbstractMessage* message) : StringRef(message, &tags::maxShow) {}
};

class PegOffsetValue : public DoubleRef {
 public:
  explicit PegOffsetValue(AbstractMessage* message) : DoubleRef(message, &tags::pegOffsetValue) {}
};

class XmlDataLen : public LongRef {
 public:
  explicit XmlDataLen(AbstractMessage* message) : LongRef(message, &tags::xmlDataLen) {}
};

class XmlData : public StringRef {
 public:
  explicit XmlData(AbstractMessage* message) : StringRef(message, &tags::xmlData) {}
};

class SettlInstRefID : public StringRef {
 public:
  explicit SettlInstRefID(AbstractMessage* message) : StringRef(message, &tags::settlInstRefID) {}
};

class NoRoutingIDs : public LongRef {
 public:
  explicit NoRoutingIDs(AbstractMessage* message) : LongRef(message, &tags::noRoutingIDs) {}
};

class RoutingType : public LongRef {
 public:
  static constexpr int64_t TARGET_FIRM = 1;
  static constexpr int64_t TARGET_LIST = 2;
  static constexpr int64_t BLOCK_FIRM = 3;
  static constexpr int64_t BLOCK_LIST = 4;

  explicit RoutingType(AbstractMessage* message) : LongRef(message, &tags::routingType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class RoutingID : public StringRef {
 public:
  explicit RoutingID(AbstractMessage* message) : StringRef(message, &tags::routingID) {}
};

class Spread : public StringRef {
 public:
  explicit Spread(AbstractMessage* message) : StringRef(message, &tags::spread) {}
};

class BenchmarkCurveCurrency : public StringRef {
 public:
  explicit BenchmarkCurveCurrency(AbstractMessage* message) : StringRef(message, &tags::benchmarkCurveCurrency) {}
};

class BenchmarkCurveName : public StringRef {
 public:
  explicit BenchmarkCurveName(AbstractMessage* message) : StringRef(message, &tags::benchmarkCurveName) {}
};

class BenchmarkCurvePoint : public StringRef {
 public:
  explicit BenchmarkCurvePoint(AbstractMessage* message) : StringRef(message, &tags::benchmarkCurvePoint) {}
};

class CouponRate : public StringRef {
 public:
  explicit CouponRate(AbstractMessage* message) : StringRef(message, &tags::couponRate) {}
};

class CouponPaymentDate : public StringRef {
 public:
  explicit CouponPaymentDate(AbstractMessage* message) : StringRef(message, &tags::couponPaymentDate) {}
};

class IssueDate : public StringRef {
 public:
  explicit IssueDate(AbstractMessage* message) : StringRef(message, &tags::issueDate) {}
};

class RepurchaseTerm : public LongRef {
 public:
  explicit RepurchaseTerm(AbstractMessage* message) : LongRef(message, &tags::repurchaseTerm) {}
};

class RepurchaseRate : public StringRef {
 public:
  explicit RepurchaseRate(AbstractMessage* message) : StringRef(message, &tags::repurchaseRate) {}
};

class Factor : public DoubleRef {
 public:
  explicit Factor(AbstractMessage* message) : DoubleRef(message, &tags::factor) {}
};

class TradeOriginationDate : public StringRef {
 public:
  explicit TradeOriginationDate(AbstractMessage* message) : StringRef(message, &tags::tradeOriginationDate) {}
};

class ExDate : public StringRef {
 public:
  explicit ExDate(AbstractMessage* message) : StringRef(message, &tags::exDate) {}
};

class ContractMultiplier : public DoubleRef {
 public:
  explicit ContractMultiplier(AbstractMessage* message) : DoubleRef(message, &tags::contractMultiplier) {}
};

class NoStipulations : public LongRef {
 public:
  explicit NoStipulations(AbstractMessage* message) : LongRef(message, &tags::noStipulations) {}
};

class StipulationType : public StringRef {
 public:
  static constexpr std::string_view AMT = "AMT";
  static constexpr std::string_view AUTO_REINVESTMENT_AT_RATE_OR_BETTER = "AUTOREINV";
  static constexpr std::string_view BANK_QUALIFIED = "BANKQUAL";
  static constexpr std::string_view BARGAIN_CONDITIONS_SEE = "BGNCON";
  static constexpr std::string_view COUPON_RANGE = "COUPON";
  static constexpr std::string_view ISO_CURRENCY_CODE = "CURRENCY";
  static constexpr std::string_view CUSTOM_START_END_DATE = "CUSTOMDATE";
  static constexpr std::string_view GEOGRAPHICS_AND_RANGE = "GEOG";
  static constexpr std::string_view VALUATION_DISCOUNT = "HAIRCUT";
  static constexpr std::string_view INSURED = "INSURED";
  static constexpr std::string_view YEAR_OR_YEAR_MONTH_OF_ISSUE = "ISSUE";
  static constexpr std::string_view ISSUERS_TICKER = "ISSUER";
  static constexpr std::string_view ISSUE_SIZE_RANGE = "ISSUESIZE";
  static constexpr std::string_view LOOKBACK_DAYS = "LOOKBACK";
  static constexpr std::string_view EXPLICIT_LOT_IDENTIFIER = "LOT";
  static constexpr std::string_view LOT_VARIANCE = "LOTVAR";
  static constexpr std::string_view MATURITY_YEAR_AND_MONTH = "MAT";
  static constexpr std::string_view MATURITY_RANGE = "MATURITY";
  static constexpr std::string_view MAXIMUM_SUBSTITUTIONS = "MAXSUBS";
  static constexpr std::string_view MINIMUM_QUANTITY = "MINQTY";
  static constexpr std::string_view MINIMUM_INCREMENT = "MININCR";
  static constexpr std::string_view MINIMUM_DENOMINATION = "MINDNOM";
  static constexpr std::string_view PAYMENT_FREQUENCY_CALENDAR = "PAYFREQ";
  static constexpr std::string_view NUMBER_OF_PIECES = "PIECES";
  static constexpr std::string_view POOLS_MAXIMUM = "PMAX";
  static constexpr std::string_view POOLS_PER_MILLION = "PPM";
  static constexpr std::string_view POOLS_PER_LOT = "PPL";
  static constexpr std::string_view POOLS_PER_TRADE = "PPT";
  static constexpr std::string_view PRICE_RANGE = "PRICE";
  static constexpr std::string_view PRICING_FREQUENCY = "PRICEFREQ";
  static constexpr std::string_view PRODUCTION_YEAR = "PROD";
  static constexpr std::string_view CALL_PROTECTION = "PROTECT";
  static constexpr std::string_view PURPOSE = "PURPOSE";
  static constexpr std::string_view BENCHMARK_PRICE_SOURCE = "PXSOURCE";
  static constexpr std::string_view RATING_SOURCE_AND_RANGE = "RATING";
  static constexpr std::string_view TYPE_OF_REDEMPTION_VALUES_ARE_NONCALLABLE_CALLABLE_PREFUNDED_ESCROWEDTOMATURITY_PUTABLE_CONVERTIBLE = "REDEMPTION";
  static constexpr std::string_view RESTRICTED = "RESTRICTED";
  static constexpr std::string_view MARKET_SECTOR = "SECTOR";
  static constexpr std::string_view SECURITYTYPE_INCLUDED_OR_EXCLUDED = "SECTYPE";
  static constexpr std::string_view STRUCTURE = "STRUCT";
  static constexpr std::string_view SUBSTITUTIONS_FREQUENCY = "SUBSFREQ";
  static constexpr std::string_view SUBSTITUTIONS_LEFT = "SUBSLEFT";
  static constexpr std::string_view FREEFORM_TEXT = "TEXT";
  static constexpr std::string_view TRADE_VARIANCE = "TRDVAR";
  static constexpr std::string_view WEIGHTED_AVERAGE_COUPONVALUE_IN_PERCENT = "WAC";
  static constexpr std::string_view WEIGHTED_AVERAGE_LIFE_COUPON_VALUE_IN_PERCENT = "WAL";
  static constexpr std::string_view WEIGHTED_AVERAGE_LOAN_AGE_VALUE_IN_MONTHS = "WALA";
  static constexpr std::string_view WEIGHTED_AVERAGE_MATURITY_VALUE_IN_MONTHS = "WAM";
  static constexpr std::string_view WHOLE_POOL = "WHOLE";
  static constexpr std::string_view YIELD_RANGE = "YIELD";

  explicit StipulationType(AbstractMessage* message) : StringRef(message, &tags::stipulationType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class StipulationValue : public StringRef {
 public:
  explicit StipulationValue(AbstractMessage* message) : StringRef(message, &tags::stipulationValue) {}
};

class YieldType : public StringRef {
 public:
  static constexpr std::string_view AFTER_TAX_YIELD = "AFTERTAX";
  static constexpr std::string_view ANNUAL_YIELD = "ANNUAL";
  static constexpr std::string_view YIELD_AT_ISSUE = "ATISSUE";
  static constexpr std::string_view YIELD_TO_AVERAGE_MATURITY = "AVGMATURITY";
  static constexpr std::string_view BOOK_YIELD = "BOOK";
  static constexpr std::string_view YIELD_TO_NEXT_CALL = "CALL";
  static constexpr std::string_view YIELD_CHANGE_SINCE_CLOSE = "CHANGE";
  static constexpr std::string_view CLOSING_YIELD = "CLOSE";
  static constexpr std::string_view COMPOUND_YIELD = "COMPOUND";
  static constexpr std::string_view CURRENT_YIELD = "CURRENT";
  static constexpr std::string_view TRUE_GROSS_YIELD = "GROSS";
  static constexpr std::string_view GOVERNMENT_EQUIVALENT_YIELD = "GOVTEQUIV";
  static constexpr std::string_view YIELD_WITH_INFLATION_ASSUMPTION = "INFLATION";
  static constexpr std::string_view INVERSE_FLOATER_BOND_YIELD = "INVERSEFLOATER";
  static constexpr std::string_view MOST_RECENT_CLOSING_YIELD = "LASTCLOSE";
  static constexpr std::string_view CLOSING_YIELD_MOST_RECENT_MONTH = "LASTMONTH";
  static constexpr std::string_view CLOSING_YIELD_MOST_RECENT_QUARTER = "LASTQUARTER";
  static constexpr std::string_view CLOSING_YIELD_MOST_RECENT_YEAR = "LASTYEAR";
  static constexpr std::string_view YIELD_TO_LONGEST_AVERAGE_LIFE = "LONGAVGLIFE";
  static constexpr std::string_view MARK_TO_MARKET_YIELD = "MARK";
  static constexpr std::string_view YIELD_TO_MATURITY = "MATURITY";
  static constexpr std::string_view YIELD_TO_NEXT_REFUND = "NEXTREFUND";
  static constexpr std::string_view OPEN_AVERAGE_YIELD = "OPENAVG";
  static constexpr std::string_view YIELD_TO_NEXT_PUT = "PUT";
  static constexpr std::string_view PREVIOUS_CLOSE_YIELD = "PREVCLOSE";
  static constexpr std::string_view PROCEEDS_YIELD = "PROCEEDS";
  static constexpr std::string_view SEMI_ANNUAL_YIELD = "SEMIANNUAL";
  static constexpr std::string_view YIELD_TO_SHORTEST_AVERAGE_LIFE = "SHORTAVGLIFE";
  static constexpr std::string_view SIMPLE_YIELD = "SIMPLE";
  static constexpr std::string_view TAX_EQUIVALENT_YIELD = "TAXEQUIV";
  static constexpr std::string_view YIELD_TO_TENDER_DATE = "TENDER";
  static constexpr std::string_view TRUE_YIELD = "TRUE";
  static constexpr std::string_view YIELD_VALUE_OF_1_32 = "VALUE1/32";
  static constexpr std::string_view YIELD_TO_WORST = "WORST";

  explicit YieldType(AbstractMessage* message) : StringRef(message, &tags::yieldType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class Yield : public StringRef {
 public:
  explicit Yield(AbstractMessage* message) : StringRef(message, &tags::yield) {}
};

class TotalTakedown : public StringRef {
 public:
  explicit TotalTakedown(AbstractMessage* message) : StringRef(message, &tags::totalTakedown) {}
};

class Concession : public StringRef {
 public:
  explicit Concession(AbstractMessage* message) : StringRef(message, &tags::concession) {}
};

class RepoCollateralSecurityType : public StringRef {
 public:
  explicit RepoCollateralSecurityType(AbstractMessage* message) : StringRef(message, &tags::repoCollateralSecurityType) {}
};

class RedemptionDate : public StringRef {
 public:
  explicit RedemptionDate(AbstractMessage* message) : StringRef(message, &tags::redemptionDate) {}
};

class UnderlyingCouponPaymentDate : public StringRef {
 public:
  explicit UnderlyingCouponPaymentDate(AbstractMessage* message) : StringRef(message, &tags::underlyingCouponPaymentDate) {}
};

class UnderlyingIssueDate : public StringRef {
 public:
  explicit UnderlyingIssueDate(AbstractMessage* message) : StringRef(message, &tags::underlyingIssueDate) {}
};

class UnderlyingRepoCollateralSecurityType : public StringRef {
 public:
  explicit UnderlyingRepoCollateralSecurityType(AbstractMessage* message) : StringRef(message, &tags::underlyingRepoCollateralSecurityType) {}
};

class UnderlyingRepurchaseTerm : public LongRef {
 public:
  explicit UnderlyingRepurchaseTerm(AbstractMessage* message) : LongRef(message, &tags::underlyingRepurchaseTerm) {}
};

class UnderlyingRepurchaseRate : public StringRef {
 public:
  explicit UnderlyingRepurchaseRate(AbstractMessage* message) : StringRef(message, &tags::underlyingRepurchaseRate) {}
};

class UnderlyingFactor : public DoubleRef {
 public:
  explicit UnderlyingFactor(AbstractMessage* message) : DoubleRef(message, &tags::underlyingFactor) {}
};

class UnderlyingRedemptionDate : public StringRef {
 public:
  explicit UnderlyingRedemptionDate(AbstractMessage* message) : StringRef(message, &tags::underlyingRedemptionDate) {}
};

class LegCouponPaymentDate : public StringRef {
 public:
  explicit LegCouponPaymentDate(AbstractMessage* message) : StringRef(message, &tags::legCouponPaymentDate) {}
};

class LegIssueDate : public StringRef {
 public:
  explicit LegIssueDate(AbstractMessage* message) : StringRef(message, &tags::legIssueDate) {}
};

class LegRepoCollateralSecurityType : public StringRef {
 public:
  explicit LegRepoCollateralSecurityType(AbstractMessage* message) : StringRef(message, &tags::legRepoCollateralSecurityType) {}
};

class LegRepurchaseTerm : public LongRef {
 public:
  explicit LegRepurchaseTerm(AbstractMessage* message) : LongRef(message, &tags::legRepurchaseTerm) {}
};

class LegRepurchaseRate : public StringRef {
 public:
  explicit LegRepurchaseRate(AbstractMessage* message) : StringRef(message, &tags::legRepurchaseRate) {}
};

class LegFactor : public DoubleRef {
 public:
  explicit LegFactor(AbstractMessage* message) : DoubleRef(message, &tags::legFactor) {}
};

class LegRedemptionDate : public StringRef {
 public:
  explicit LegRedemptionDate(AbstractMessage* message) : StringRef(message, &tags::legRedemptionDate) {}
};

class CreditRating : public StringRef {
 public:
  explicit CreditRating(AbstractMessage* message) : StringRef(message, &tags::creditRating) {}
};

class UnderlyingCreditRating : public StringRef {
 public:
  explicit UnderlyingCreditRating(AbstractMessage* message) : StringRef(message, &tags::underlyingCreditRating) {}
};

class LegCreditRating : public StringRef {
 public:
  explicit LegCreditRating(AbstractMessage* message) : StringRef(message, &tags::legCreditRating) {}
};

class TradedFlatSwitch : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit TradedFlatSwitch(AbstractMessage* message) : StringRef(message, &tags::tradedFlatSwitch) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class BasisFeatureDate : public StringRef {
 public:
  explicit BasisFeatureDate(AbstractMessage* message) : StringRef(message, &tags::basisFeatureDate) {}
};

class BasisFeaturePrice : public StringRef {
 public:
  explicit BasisFeaturePrice(AbstractMessage* message) : StringRef(message, &tags::basisFeaturePrice) {}
};

class MDReqID : public StringRef {
 public:
  explicit MDReqID(AbstractMessage* message) : StringRef(message, &tags::mDReqID) {}
};

class SubscriptionRequestType : public StringRef {
 public:
  static constexpr std::string_view SNAPSHOT = "0";
  static constexpr std::string_view SNAPSHOT_PLUS_UPDATES = "1";
  static constexpr std::string_view DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST = "2";

  explicit SubscriptionRequestType(AbstractMessage* message) : StringRef(message, &tags::subscriptionRequestType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MarketDepth : public LongRef {
 public:
  explicit MarketDepth(AbstractMessage* message) : LongRef(message, &tags::marketDepth) {}
};

class MDUpdateType : public LongRef {
 public:
  static constexpr int64_t FULL_REFRESH = 0;
  static constexpr int64_t INCREMENTAL_REFRESH = 1;

  explicit MDUpdateType(AbstractMessage* message) : LongRef(message, &tags::mDUpdateType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class AggregatedBook : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit AggregatedBook(AbstractMessage* message) : StringRef(message, &tags::aggregatedBook) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NoMDEntryTypes : public LongRef {
 public:
  explicit NoMDEntryTypes(AbstractMessage* message) : LongRef(message, &tags::noMDEntryTypes) {}
};

class NoMDEntries : public LongRef {
 public:
  explicit NoMDEntries(AbstractMessage* message) : LongRef(message, &tags::noMDEntries) {}
};

class MDEntryType : public StringRef {
 public:
  static constexpr std::string_view BID = "0";
  static constexpr std::string_view OFFER = "1";
  static constexpr std::string_view TRADE = "2";
  static constexpr std::string_view INDEX_VALUE = "3";
  static constexpr std::string_view OPENING_PRICE = "4";
  static constexpr std::string_view CLOSING_PRICE = "5";
  static constexpr std::string_view SETTLEMENT_PRICE = "6";
  static constexpr std::string_view TRADING_SESSION_HIGH_PRICE = "7";
  static constexpr std::string_view TRADING_SESSION_LOW_PRICE = "8";
  static constexpr std::string_view TRADING_SESSION_VWAP_PRICE = "9";
  static constexpr std::string_view IMBALANCE = "A";
  static constexpr std::string_view TRADE_VOLUME = "B";
  static constexpr std::string_view OPEN_INTEREST = "C";

  explicit MDEntryType(AbstractMessage* message) : StringRef(message, &tags::mDEntryType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MDEntryPx : public StringRef {
 public:
  explicit MDEntryPx(AbstractMessage* message) : StringRef(message, &tags::mDEntryPx) {}
};

class MDEntrySize : public StringRef {
 public:
  explicit MDEntrySize(AbstractMessage* message) : StringRef(message, &tags::mDEntrySize) {}
};

class MDEntryDate : public StringRef {
 public:
  explicit MDEntryDate(AbstractMessage* message) : StringRef(message, &tags::mDEntryDate) {}
};

class MDEntryTime : public StringRef {
 public:
  explicit MDEntryTime(AbstractMessage* message) : StringRef(message, &tags::mDEntryTime) {}
};

class TickDirection : public StringRef {
 public:
  static constexpr std::string_view PLUS_TICK = "0";
  static constexpr std::string_view ZERO_PLUS_TICK = "1";
  static constexpr std::string_view MINUS_TICK = "2";
  static constexpr std::string_view ZERO_MINUS_TICK = "3";

  explicit TickDirection(AbstractMessage* message) : StringRef(message, &tags::tickDirection) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MDMkt : public StringRef {
 public:
  explicit MDMkt(AbstractMessage* message) : StringRef(message, &tags::mDMkt) {}
};

class QuoteCondition : public StringRef {
 public:
  static constexpr std::string_view OPEN = "A";
  static constexpr std::string_view CLOSED = "B";
  static constexpr std::string_view EXCHANGE_BEST = "C";
  static constexpr std::string_view CONSOLIDATED_BEST = "D";
  static constexpr std::string_view LOCKED = "E";
  static constexpr std::string_view CROSSED = "F";
  static constexpr std::string_view DEPTH = "G";
  static constexpr std::string_view FAST_TRADING = "H";
  static constexpr std::string_view NON_FIRM = "I";

  explicit QuoteCondition(AbstractMessage* message) : StringRef(message, &tags::quoteCondition) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class TradeCondition : public StringRef {
 public:
  static constexpr std::string_view CASH = "A";
  static constexpr std::string_view AVERAGE_PRICE_TRADE = "B";
  static constexpr std::string_view CASH_TRADE = "C";
  static constexpr std::string_view NEXT_DAY = "D";
  static constexpr std::string_view OPENING = "E";
  static constexpr std::string_view INTRADAY_TRADE_DETAIL = "F";
  static constexpr std::string_view RULE_127_TRADE = "G";
  static constexpr std::string_view RULE_155_TRADE = "H";
  static constexpr std::string_view SOLD_LAST = "I";
  static constexpr std::string_view NEXT_DAY_TRADE = "J";
  static constexpr std::string_view OPENED = "K";
  static constexpr std::string_view SELLER = "L";
  static constexpr std::string_view SOLD = "M";
  static constexpr std::string_view STOPPED_STOCK = "N";
  static constexpr std::string_view IMBALANCE_MORE_BUYERS = "P";
  static constexpr std::string_view IMBALANCE_MORE_SELLERS = "Q";
  static constexpr std::string_view OPENING_PRICE = "R";

  explicit TradeCondition(AbstractMessage* message) : StringRef(message, &tags::tradeCondition) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MDEntryID : public StringRef {
 public:
  explicit MDEntryID(AbstractMessage* message) : StringRef(message, &tags::mDEntryID) {}
};

class MDUpdateAction : public StringRef {
 public:
  static constexpr std::string_view NEW = "0";
  static constexpr std::string_view CHANGE = "1";
  static constexpr std::string_view DELETE = "2";

  explicit MDUpdateAction(AbstractMessage* message) : StringRef(message, &tags::mDUpdateAction) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MDEntryRefID : public StringRef {
 public:
  explicit MDEntryRefID(AbstractMessage* message) : StringRef(message, &tags::mDEntryRefID) {}
};

class MDReqRejReason : public StringRef {
 public:
  static constexpr std::string_view UNKNOWN_SYMBOL = "0";
  static constexpr std::string_view DUPLICATE_MDREQID = "1";
  static constexpr std::string_view INSUFFICIENT_BANDWIDTH = "2";
  static constexpr std::string_view INSUFFICIENT_PERMISSIONS = "3";
  static constexpr std::string_view UNSUPPORTED_SUBSCRIPTIONREQUESTTYPE = "4";
  static constexpr std::string_view UNSUPPORTED_MARKETDEPTH = "5";
  static constexpr std::string_view UNSUPPORTED_MDUPDATETYPE = "6";
  static constexpr std::string_view UNSUPPORTED_AGGREGATEDBOOK = "7";
  static constexpr std::string_view UNSUPPORTED_MDENTRYTYPE = "8";
  static constexpr std::string_view UNSUPPORTED_TRADINGSESSIONID = "9";
  static constexpr std::string_view UNSUPPORTED_SCOPE = "A";
  static constexpr std::string_view UNSUPPORTED_OPENCLOSESETTLEFLAG = "B";
  static constexpr std::string_view UNSUPPORTED_MDIMPLICITDELETE = "C";

  explicit MDReqRejReason(AbstractMessage* message) : StringRef(message, &tags::mDReqRejReason) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MDEntryOriginator : public StringRef {
 public:
  explicit MDEntryOriginator(AbstractMessage* message) : StringRef(message, &tags::mDEntryOriginator) {}
};

class LocationID : public StringRef {
 public:
  explicit LocationID(AbstractMessage* message) : StringRef(message, &tags::locationID) {}
};

class DeskID : public StringRef {
 public:
  explicit DeskID(AbstractMessage* message) : StringRef(message, &tags::deskID) {}
};

class DeleteReason : public StringRef {
 public:
  static constexpr std::string_view CANCELATION = "0";
  static constexpr std::string_view ERROR = "1";

  explicit DeleteReason(AbstractMessage* message) : StringRef(message, &tags::deleteReason) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class OpenCloseSettlFlag : public StringRef {
 public:
  static constexpr std::string_view DAILY_OPEN = "0";
  static constexpr std::string_view SESSION_OPEN = "1";
  static constexpr std::string_view DELIVERY_SETTLEMENT_ENTRY = "2";
  static constexpr std::string_view EXPECTED_ENTRY = "3";
  static constexpr std::string_view ENTRY_FROM_PREVIOUS_BUSINESS_DAY = "4";
  static constexpr std::string_view THEORETICAL_PRICE_VALUE = "5";

  explicit OpenCloseSettlFlag(AbstractMessage* message) : StringRef(message, &tags::openCloseSettlFlag) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class SellerDays : public LongRef {
 public:
  explicit SellerDays(AbstractMessage* message) : LongRef(message, &tags::sellerDays) {}
};

class MDEntryBuyer : public StringRef {
 public:
  explicit MDEntryBuyer(AbstractMessage* message) : StringRef(message, &tags::mDEntryBuyer) {}
};

class MDEntrySeller : public StringRef {
 public:
  explicit MDEntrySeller(AbstractMessage* message) : StringRef(message, &tags::mDEntrySeller) {}
};

class MDEntryPositionNo : public LongRef {
 public:
  explicit MDEntryPositionNo(AbstractMessage* message) : LongRef(message, &tags::mDEntryPositionNo) {}
};

class FinancialStatus : public StringRef {
 public:
  static constexpr std::string_view BANKRUPT = "1";
  static constexpr std::string_view PENDING_DELISTING = "2";

  explicit FinancialStatus(AbstractMessage* message) : StringRef(message, &tags::financialStatus) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class CorporateAction : public StringRef {
 public:
  static constexpr std::string_view EX_DIVIDEND = "A";
  static constexpr std::string_view EX_DISTRIBUTION = "B";
  static constexpr std::string_view EX_RIGHTS = "C";
  static constexpr std::string_view NEW = "D";
  static constexpr std::string_view EX_INTEREST = "E";

  explicit CorporateAction(AbstractMessage* message) : StringRef(message, &tags::corporateAction) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class DefBidSize : public StringRef {
 public:
  explicit DefBidSize(AbstractMessage* message) : StringRef(message, &tags::defBidSize) {}
};

class DefOfferSize : public StringRef {
 public:
  explicit DefOfferSize(AbstractMessage* message) : StringRef(message, &tags::defOfferSize) {}
};

class NoQuoteEntries : public LongRef {
 public:
  explicit NoQuoteEntries(AbstractMessage* message) : LongRef(message, &tags::noQuoteEntries) {}
};

class NoQuoteSets : public LongRef {
 public:
  explicit NoQuoteSets(AbstractMessage* message) : LongRef(message, &tags::noQuoteSets) {}
};

class QuoteStatus : public LongRef {
 public:
  static constexpr int64_t ACCEPTED = 0;
  static constexpr int64_t CANCELED_FOR_SYMBOL = 1;
  static constexpr int64_t CANCELED_FOR_SECURITY_TYPE = 2;
  static constexpr int64_t CANCELED_FOR_UNDERLYING = 3;
  static constexpr int64_t CANCELED_ALL = 4;
  static constexpr int64_t REJECTED = 5;
  static constexpr int64_t REMOVED_FROM_MARKET = 6;
  static constexpr int64_t EXPIRED = 7;
  static constexpr int64_t QUERY = 8;
  static constexpr int64_t QUOTE_NOT_FOUND = 9;
  static constexpr int64_t PENDING = 10;
  static constexpr int64_t PASS = 11;
  static constexpr int64_t LOCKED_MARKET_WARNING = 12;
  static constexpr int64_t CROSS_MARKET_WARNING = 13;
  static constexpr int64_t CANCELED_DUE_TO_LOCK_MARKET = 14;
  static constexpr int64_t CANCELED_DUE_TO_CROSS_MARKET = 15;

  explicit QuoteStatus(AbstractMessage* message) : LongRef(message, &tags::quoteStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class QuoteCancelType : public LongRef {
 public:
  static constexpr int64_t CANCEL_FOR_SYMBOL = 1;
  static constexpr int64_t CANCEL_FOR_SECURITY_TYPE = 2;
  static constexpr int64_t CANCEL_FOR_UNDERLYING_SYMBOL = 3;
  static constexpr int64_t CANCEL_ALL_QUOTES = 4;

  explicit QuoteCancelType(AbstractMessage* message) : LongRef(message, &tags::quoteCancelType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class QuoteEntryID : public StringRef {
 public:
  explicit QuoteEntryID(AbstractMessage* message) : StringRef(message, &tags::quoteEntryID) {}
};

class QuoteRejectReason : public LongRef {
 public:
  static constexpr int64_t UNKNOWN_SYMBOL = 1;
  static constexpr int64_t EXCHANGE = 2;
  static constexpr int64_t QUOTE_REQUEST_EXCEEDS_LIMIT = 3;
  static constexpr int64_t TOO_LATE_TO_ENTER = 4;
  static constexpr int64_t UNKNOWN_QUOTE = 5;
  static constexpr int64_t DUPLICATE_QUOTE = 6;
  static constexpr int64_t INVALID_BID_ASK_SPREAD = 7;
  static constexpr int64_t INVALID_PRICE = 8;
  static constexpr int64_t NOT_AUTHORIZED_TO_QUOTE_SECURITY = 9;
  static constexpr int64_t OTHER = 99;

  explicit QuoteRejectReason(AbstractMessage* message) : LongRef(message, &tags::quoteRejectReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class QuoteResponseLevel : public LongRef {
 public:
  static constexpr int64_t NO_ACKNOWLEDGEMENT = 0;
  static constexpr int64_t ACKNOWLEDGE_ONLY_NEGATIVE_OR_ERRONEOUS_QUOTES = 1;
  static constexpr int64_t ACKNOWLEDGE_EACH_QUOTE_MESSAGES = 2;

  explicit QuoteResponseLevel(AbstractMessage* message) : LongRef(message, &tags::quoteResponseLevel) {}

  static int64_t value(const char* bytes, int valBeg);
};

class QuoteSetID : public StringRef {
 public:
  explicit QuoteSetID(AbstractMessage* message) : StringRef(message, &tags::quoteSetID) {}
};

class QuoteRequestType : public LongRef {
 public:
  static constexpr int64_t MANUAL = 1;
  static constexpr int64_t AUTOMATIC = 2;

  explicit QuoteRequestType(AbstractMessage* message) : LongRef(message, &tags::quoteRequestType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TotNoQuoteEntries : public LongRef {
 public:
  explicit TotNoQuoteEntries(AbstractMessage* message) : LongRef(message, &tags::totNoQuoteEntries) {}
};

class UnderlyingSecurityIDSource : public StringRef {
 public:
  explicit UnderlyingSecurityIDSource(AbstractMessage* message) : StringRef(message, &tags::underlyingSecurityIDSource) {}
};

class UnderlyingIssuer : public StringRef {
 public:
  explicit UnderlyingIssuer(AbstractMessage* message) : StringRef(message, &tags::underlyingIssuer) {}
};

class UnderlyingSecurityDesc : public StringRef {
 public:
  explicit UnderlyingSecurityDesc(AbstractMessage* message) : StringRef(message, &tags::underlyingSecurityDesc) {}
};

class UnderlyingSecurityExchange : public StringRef {
 public:
  explicit UnderlyingSecurityExchange(AbstractMessage* message) : StringRef(message, &tags::underlyingSecurityExchange) {}
};

class UnderlyingSecurityID : public StringRef {
 public:
  explicit UnderlyingSecurityID(AbstractMessage* message) : StringRef(message, &tags::underlyingSecurityID) {}
};

class UnderlyingSecurityType : public StringRef {
 public:
  explicit UnderlyingSecurityType(AbstractMessage* message) : StringRef(message, &tags::underlyingSecurityType) {}
};

class UnderlyingSymbol : public StringRef {
 public:
  explicit UnderlyingSymbol(AbstractMessage* message) : StringRef(message, &tags::underlyingSymbol) {}
};

class UnderlyingSymbolSfx : public StringRef {
 public:
  explicit UnderlyingSymbolSfx(AbstractMessage* message) : StringRef(message, &tags::underlyingSymbolSfx) {}
};

class UnderlyingMaturityMonthYear : public StringRef {
 public:
  explicit UnderlyingMaturityMonthYear(AbstractMessage* message) : StringRef(message, &tags::underlyingMaturityMonthYear) {}
};

class UnderlyingPutOrCall : public LongRef {
 public:
  explicit UnderlyingPutOrCall(AbstractMessage* message) : LongRef(message, &tags::underlyingPutOrCall) {}
};

class UnderlyingStrikePrice : public StringRef {
 public:
  explicit UnderlyingStrikePrice(AbstractMessage* message) : StringRef(message, &tags::underlyingStrikePrice) {}
};

class UnderlyingOptAttribute : public StringRef {
 public:
  explicit UnderlyingOptAttribute(AbstractMessage* message) : StringRef(message, &tags::underlyingOptAttribute) {}
};

class UnderlyingCurrency : public StringRef {
 public:
  explicit UnderlyingCurrency(AbstractMessage* message) : StringRef(message, &tags::underlyingCurrency) {}
};

class SecurityReqID : public StringRef {
 public:
  explicit SecurityReqID(AbstractMessage* message) : StringRef(message, &tags::securityReqID) {}
};

class SecurityRequestType : public LongRef {
 public:
  static constexpr int64_t REQUEST_SECURITY_IDENTITY_AND_SPECIFICATIONS = 0;
  static constexpr int64_t REQUEST_SECURITY_IDENTITY_FOR_THE_SPECIFICATIONS_PROVIDED = 1;
  static constexpr int64_t REQUEST_LIST_SECURITY_TYPES = 2;
  static constexpr int64_t REQUEST_LIST_SECURITIES = 3;

  explicit SecurityRequestType(AbstractMessage* message) : LongRef(message, &tags::securityRequestType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class SecurityResponseID : public StringRef {
 public:
  explicit SecurityResponseID(AbstractMessage* message) : StringRef(message, &tags::securityResponseID) {}
};

class SecurityResponseType : public LongRef {
 public:
  static constexpr int64_t ACCEPT_SECURITY_PROPOSAL_AS_IS = 1;
  static constexpr int64_t ACCEPT_SECURITY_PROPOSAL_WITH_REVISIONS_AS_INDICATED_IN_THE_MESSAGE = 2;
  static constexpr int64_t REJECT_SECURITY_PROPOSAL = 5;
  static constexpr int64_t CAN_NOT_MATCH_SELECTION_CRITERIA = 6;

  explicit SecurityResponseType(AbstractMessage* message) : LongRef(message, &tags::securityResponseType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class SecurityStatusReqID : public StringRef {
 public:
  explicit SecurityStatusReqID(AbstractMessage* message) : StringRef(message, &tags::securityStatusReqID) {}
};

class UnsolicitedIndicator : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit UnsolicitedIndicator(AbstractMessage* message) : StringRef(message, &tags::unsolicitedIndicator) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class SecurityTradingStatus : public LongRef {
 public:
  static constexpr int64_t OPENING_DELAY = 1;
  static constexpr int64_t TRADING_HALT = 2;
  static constexpr int64_t RESUME = 3;
  static constexpr int64_t NO_OPEN_NO_RESUME = 4;
  static constexpr int64_t PRICE_INDICATION = 5;
  static constexpr int64_t TRADING_RANGE_INDICATION = 6;
  static constexpr int64_t MARKET_IMBALANCE_BUY = 7;
  static constexpr int64_t MARKET_IMBALANCE_SELL = 8;
  static constexpr int64_t MARKET_ON_CLOSE_IMBALANCE_BUY = 9;
  static constexpr int64_t MARKET_ON_CLOSE_IMBALANCE_SELL = 10;
  static constexpr int64_t NO_MARKET_IMBALANCE = 12;
  static constexpr int64_t NO_MARKET_ON_CLOSE_IMBALANCE = 13;
  static constexpr int64_t ITS_PRE_OPENING = 14;
  static constexpr int64_t NEW_PRICE_INDICATION = 15;
  static constexpr int64_t TRADE_DISSEMINATION_TIME = 16;
  static constexpr int64_t READY_TO_TRADE = 17;
  static constexpr int64_t NOT_AVAILABLE_FOR_TRADING = 18;
  static constexpr int64_t NOT_TRADED_ON_THIS_MARKET = 19;
  static constexpr int64_t UNKNOWN_OR_INVALID = 20;
  static constexpr int64_t PRE_OPEN = 21;
  static constexpr int64_t OPENING_ROTATION = 22;
  static constexpr int64_t FAST_MARKET = 23;

  explicit SecurityTradingStatus(AbstractMessage* message) : LongRef(message, &tags::securityTradingStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class HaltReasonChar : public StringRef {
 public:
  static constexpr std::string_view ORDER_IMBALANCE = "I";
  static constexpr std::string_view EQUIPMENT_CHANGEOVER = "X";
  static constexpr std::string_view NEWS_PENDING = "P";
  static constexpr std::string_view NEWS_DISSEMINATION = "D";
  static constexpr std::string_view ORDER_INFLUX = "E";
  static constexpr std::string_view ADDITIONAL_INFORMATION = "M";

  explicit HaltReasonChar(AbstractMessage* message) : StringRef(message, &tags::haltReasonChar) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class InViewOfCommon : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit InViewOfCommon(AbstractMessage* message) : StringRef(message, &tags::inViewOfCommon) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class DueToRelated : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit DueToRelated(AbstractMessage* message) : StringRef(message, &tags::dueToRelated) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class BuyVolume : public StringRef {
 public:
  explicit BuyVolume(AbstractMessage* message) : StringRef(message, &tags::buyVolume) {}
};

class SellVolume : public StringRef {
 public:
  explicit SellVolume(AbstractMessage* message) : StringRef(message, &tags::sellVolume) {}
};

class HighPx : public StringRef {
 public:
  explicit HighPx(AbstractMessage* message) : StringRef(message, &tags::highPx) {}
};

class LowPx : public StringRef {
 public:
  explicit LowPx(AbstractMessage* message) : StringRef(message, &tags::lowPx) {}
};

class Adjustment : public LongRef {
 public:
  static constexpr int64_t CANCEL = 1;
  static constexpr int64_t ERROR = 2;
  static constexpr int64_t CORRECTION = 3;

  explicit Adjustment(AbstractMessage* message) : LongRef(message, &tags::adjustment) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TradSesReqID : public StringRef {
 public:
  explicit TradSesReqID(AbstractMessage* message) : StringRef(message, &tags::tradSesReqID) {}
};

class TradingSessionID : public StringRef {
 public:
  explicit TradingSessionID(AbstractMessage* message) : StringRef(message, &tags::tradingSessionID) {}
};

class ContraTrader : public StringRef {
 public:
  explicit ContraTrader(AbstractMessage* message) : StringRef(message, &tags::contraTrader) {}
};

class TradSesMethod : public LongRef {
 public:
  static constexpr int64_t ELECTRONIC = 1;
  static constexpr int64_t OPEN_OUTCRY = 2;
  static constexpr int64_t TWO_PARTY = 3;

  explicit TradSesMethod(AbstractMessage* message) : LongRef(message, &tags::tradSesMethod) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TradSesMode : public LongRef {
 public:
  static constexpr int64_t TESTING = 1;
  static constexpr int64_t SIMULATED = 2;
  static constexpr int64_t PRODUCTION = 3;

  explicit TradSesMode(AbstractMessage* message) : LongRef(message, &tags::tradSesMode) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TradSesStatus : public LongRef {
 public:
  static constexpr int64_t UNKNOWN = 0;
  static constexpr int64_t HALTED = 1;
  static constexpr int64_t OPEN = 2;
  static constexpr int64_t CLOSED = 3;
  static constexpr int64_t PRE_OPEN = 4;
  static constexpr int64_t PRE_CLOSE = 5;
  static constexpr int64_t REQUEST_REJECTED = 6;

  explicit TradSesStatus(AbstractMessage* message) : LongRef(message, &tags::tradSesStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TradSesStartTime : public StringRef {
 public:
  explicit TradSesStartTime(AbstractMessage* message) : StringRef(message, &tags::tradSesStartTime) {}
};

class TradSesOpenTime : public StringRef {
 public:
  explicit TradSesOpenTime(AbstractMessage* message) : StringRef(message, &tags::tradSesOpenTime) {}
};

class TradSesPreCloseTime : public StringRef {
 public:
  explicit TradSesPreCloseTime(AbstractMessage* message) : StringRef(message, &tags::tradSesPreCloseTime) {}
};

class TradSesCloseTime : public StringRef {
 public:
  explicit TradSesCloseTime(AbstractMessage* message) : StringRef(message, &tags::tradSesCloseTime) {}
};

class TradSesEndTime : public StringRef {
 public:
  explicit TradSesEndTime(AbstractMessage* message) : StringRef(message, &tags::tradSesEndTime) {}
};

class NumberOfOrders : public LongRef {
 public:
  explicit NumberOfOrders(AbstractMessage* message) : LongRef(message, &tags::numberOfOrders) {}
};

class MessageEncoding : public StringRef {
 public:
  static constexpr std::string_view JIS = "ISO-2022-JP";
  static constexpr std::string_view EUC = "EUC-JP";
  static constexpr std::string_view FOR_USING_SJIS = "Shift_JIS";
  static constexpr std::string_view UNICODE = "UTF-8";

  explicit MessageEncoding(AbstractMessage* message) : StringRef(message, &tags::messageEncoding) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class EncodedIssuerLen : public LongRef {
 public:
  explicit EncodedIssuerLen(AbstractMessage* message) : LongRef(message, &tags::encodedIssuerLen) {}
};

class EncodedIssuer : public StringRef {
 public:
  explicit EncodedIssuer(AbstractMessage* message) : StringRef(message, &tags::encodedIssuer) {}
};

class EncodedSecurityDescLen : public LongRef {
 public:
  explicit EncodedSecurityDescLen(AbstractMessage* message) : LongRef(message, &tags::encodedSecurityDescLen) {}
};

class EncodedSecurityDesc : public StringRef {
 public:
  explicit EncodedSecurityDesc(AbstractMessage* message) : StringRef(message, &tags::encodedSecurityDesc) {}
};

class EncodedListExecInstLen : public LongRef {
 public:
  explicit EncodedListExecInstLen(AbstractMessage* message) : LongRef(message, &tags::encodedListExecInstLen) {}
};

class EncodedListExecInst : public StringRef {
 public:
  explicit EncodedListExecInst(AbstractMessage* message) : StringRef(message, &tags::encodedListExecInst) {}
};

class EncodedTextLen : public LongRef {
 public:
  explicit EncodedTextLen(AbstractMessage* message) : LongRef(message, &tags::encodedTextLen) {}
};

class EncodedText : public StringRef {
 public:
  explicit EncodedText(AbstractMessage* message) : StringRef(message, &tags::encodedText) {}
};

class EncodedSubjectLen : public LongRef {
 public:
  explicit EncodedSubjectLen(AbstractMessage* message) : LongRef(message, &tags::encodedSubjectLen) {}
};

class EncodedSubject : public StringRef {
 public:
  explicit EncodedSubject(AbstractMessage* message) : StringRef(message, &tags::encodedSubject) {}
};

class EncodedHeadlineLen : public LongRef {
 public:
  explicit EncodedHeadlineLen(AbstractMessage* message) : LongRef(message, &tags::encodedHeadlineLen) {}
};

class EncodedHeadline : public StringRef {
 public:
  explicit EncodedHeadline(AbstractMessage* message) : StringRef(message, &tags::encodedHeadline) {}
};

class EncodedAllocTextLen : public LongRef {
 public:
  explicit EncodedAllocTextLen(AbstractMessage* message) : LongRef(message, &tags::encodedAllocTextLen) {}
};

class EncodedAllocText : public StringRef {
 public:
  explicit EncodedAllocText(AbstractMessage* message) : StringRef(message, &tags::encodedAllocText) {}
};

class EncodedUnderlyingIssuerLen : public LongRef {
 public:
  explicit EncodedUnderlyingIssuerLen(AbstractMessage* message) : LongRef(message, &tags::encodedUnderlyingIssuerLen) {}
};

class EncodedUnderlyingIssuer : public StringRef {
 public:
  explicit EncodedUnderlyingIssuer(AbstractMessage* message) : StringRef(message, &tags::encodedUnderlyingIssuer) {}
};

class EncodedUnderlyingSecurityDescLen : public LongRef {
 public:
  explicit EncodedUnderlyingSecurityDescLen(AbstractMessage* message) : LongRef(message, &tags::encodedUnderlyingSecurityDescLen) {}
};

class EncodedUnderlyingSecurityDesc : public StringRef {
 public:
  explicit EncodedUnderlyingSecurityDesc(AbstractMessage* message) : StringRef(message, &tags::encodedUnderlyingSecurityDesc) {}
};

class AllocPrice : public StringRef {
 public:
  explicit AllocPrice(AbstractMessage* message) : StringRef(message, &tags::allocPrice) {}
};

class QuoteSetValidUntilTime : public StringRef {
 public:
  explicit QuoteSetValidUntilTime(AbstractMessage* message) : StringRef(message, &tags::quoteSetValidUntilTime) {}
};

class QuoteEntryRejectReason : public LongRef {
 public:
  explicit QuoteEntryRejectReason(AbstractMessage* message) : LongRef(message, &tags::quoteEntryRejectReason) {}
};

class LastMsgSeqNumProcessed : public StringRef {
 public:
  explicit LastMsgSeqNumProcessed(AbstractMessage* message) : StringRef(message, &tags::lastMsgSeqNumProcessed) {}
};

class RefTagID : public LongRef {
 public:
  explicit RefTagID(AbstractMessage* message) : LongRef(message, &tags::refTagID) {}
};

class RefMsgType : public StringRef {
 public:
  explicit RefMsgType(AbstractMessage* message) : StringRef(message, &tags::refMsgType) {}
};

class SessionRejectReason : public LongRef {
 public:
  static constexpr int64_t INVALID_TAG_NUMBER = 0;
  static constexpr int64_t REQUIRED_TAG_MISSING = 1;
  static constexpr int64_t TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE = 2;
  static constexpr int64_t UNDEFINED_TAG = 3;
  static constexpr int64_t TAG_SPECIFIED_WITHOUT_A_VALUE = 4;
  static constexpr int64_t VALUE_IS_INCORRECT = 5;
  static constexpr int64_t INCORRECT_DATA_FORMAT_FOR_VALUE = 6;
  static constexpr int64_t DECRYPTION_PROBLEM = 7;
  static constexpr int64_t SIGNATURE_PROBLEM = 8;
  static constexpr int64_t COMPID_PROBLEM = 9;
  static constexpr int64_t SENDINGTIME_ACCURACY_PROBLEM = 10;
  static constexpr int64_t INVALID_MSGTYPE = 11;
  static constexpr int64_t XML_VALIDATION_ERROR = 12;
  static constexpr int64_t TAG_APPEARS_MORE_THAN_ONCE = 13;
  static constexpr int64_t TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER = 14;
  static constexpr int64_t REPEATING_GROUP_FIELDS_OUT_OF_ORDER = 15;
  static constexpr int64_t INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP = 16;
  static constexpr int64_t NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER = 17;
  static constexpr int64_t OTHER = 99;

  explicit SessionRejectReason(AbstractMessage* message) : LongRef(message, &tags::sessionRejectReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class BidRequestTransType : public StringRef {
 public:
  static constexpr std::string_view NEW = "N";
  static constexpr std::string_view CANCEL = "C";

  explicit BidRequestTransType(AbstractMessage* message) : StringRef(message, &tags::bidRequestTransType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class ContraBroker : public StringRef {
 public:
  explicit ContraBroker(AbstractMessage* message) : StringRef(message, &tags::contraBroker) {}
};

class ComplianceID : public StringRef {
 public:
  explicit ComplianceID(AbstractMessage* message) : StringRef(message, &tags::complianceID) {}
};

class SolicitedFlag : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit SolicitedFlag(AbstractMessage* message) : StringRef(message, &tags::solicitedFlag) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class ExecRestatementReason : public LongRef {
 public:
  static constexpr int64_t GT_CORPORATE_ACTION = 0;
  static constexpr int64_t GT_RENEWAL = 1;
  static constexpr int64_t VERBAL_CHANGE = 2;
  static constexpr int64_t REPRICING_OF_ORDER = 3;
  static constexpr int64_t BROKER_OPTION = 4;
  static constexpr int64_t PARTIAL_DECLINE_OF_ORDERQTY = 5;
  static constexpr int64_t CANCEL_ON_TRADING_HALT = 6;
  static constexpr int64_t CANCEL_ON_SYSTEM_FAILURE = 7;
  static constexpr int64_t MARKET = 8;
  static constexpr int64_t CANCELED_NOT_BEST = 9;
  static constexpr int64_t WAREHOUSE_RECAP = 10;
  static constexpr int64_t OTHER = 99;

  explicit ExecRestatementReason(AbstractMessage* message) : LongRef(message, &tags::execRestatementReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class BusinessRejectRefID : public StringRef {
 public:
  explicit BusinessRejectRefID(AbstractMessage* message) : StringRef(message, &tags::businessRejectRefID) {}
};

class BusinessRejectReason : public LongRef {
 public:
  static constexpr int64_t OTHER = 0;
  static constexpr int64_t UNKOWN_ID = 1;
  static constexpr int64_t UNKNOWN_SECURITY = 2;
  static constexpr int64_t UNSUPPORTED_MESSAGE_TYPE = 3;
  static constexpr int64_t APPLICATION_NOT_AVAILABLE = 4;
  static constexpr int64_t CONDITIONALLY_REQUIRED_FIELD_MISSING = 5;
  static constexpr int64_t NOT_AUTHORIZED = 6;
  static constexpr int64_t DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME = 7;

  explicit BusinessRejectReason(AbstractMessage* message) : LongRef(message, &tags::businessRejectReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class GrossTradeAmt : public StringRef {
 public:
  explicit GrossTradeAmt(AbstractMessage* message) : StringRef(message, &tags::grossTradeAmt) {}
};

class NoContraBrokers : public LongRef {
 public:
  explicit NoContraBrokers(AbstractMessage* message) : LongRef(message, &tags::noContraBrokers) {}
};

class MaxMessageSize : public LongRef {
 public:
  explicit MaxMessageSize(AbstractMessage* message) : LongRef(message, &tags::maxMessageSize) {}
};

class NoMsgTypes : public LongRef {
 public:
  explicit NoMsgTypes(AbstractMessage* message) : LongRef(message, &tags::noMsgTypes) {}
};

class MsgDirection : public StringRef {
 public:
  static constexpr std::string_view SEND = "S";
  static constexpr std::string_view RECEIVE = "R";

  explicit MsgDirection(AbstractMessage* message) : StringRef(message, &tags::msgDirection) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NoTradingSessions : public LongRef {
 public:
  explicit NoTradingSessions(AbstractMessage* message) : LongRef(message, &tags::noTradingSessions) {}
};

class TotalVolumeTraded : public StringRef {
 public:
  explicit TotalVolumeTraded(AbstractMessage* message) : StringRef(message, &tags::totalVolumeTraded) {}
};

class DiscretionInst : public StringRef {
 public:
  static constexpr std::string_view RELATED_TO_DISPLAYED_PRICE = "0";
  static constexpr std::string_view RELATED_TO_MARKET_PRICE = "1";
  static constexpr std::string_view RELATED_TO_PRIMARY_PRICE = "2";
  static constexpr std::string_view RELATED_TO_LOCAL_PRIMARY_PRICE = "3";
  static constexpr std::string_view RELATED_TO_MIDPOINT_PRICE = "4";
  static constexpr std::string_view RELATED_TO_LAST_TRADE_PRICE = "5";
  static constexpr std::string_view RELATED_TO_VWAP = "6";

  explicit DiscretionInst(AbstractMessage* message) : StringRef(message, &tags::discretionInst) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class DiscretionOffsetValue : public DoubleRef {
 public:
  explicit DiscretionOffsetValue(AbstractMessage* message) : DoubleRef(message, &tags::discretionOffsetValue) {}
};

class BidID : public StringRef {
 public:
  explicit BidID(AbstractMessage* message) : StringRef(message, &tags::bidID) {}
};

class ClientBidID : public StringRef {
 public:
  explicit ClientBidID(AbstractMessage* message) : StringRef(message, &tags::clientBidID) {}
};

class ListName : public StringRef {
 public:
  explicit ListName(AbstractMessage* message) : StringRef(message, &tags::listName) {}
};

class TotNoRelatedSym : public LongRef {
 public:
  explicit TotNoRelatedSym(AbstractMessage* message) : LongRef(message, &tags::totNoRelatedSym) {}
};

class BidType : public LongRef {
 public:
  static constexpr int64_t NON_DISCLOSED_STYLE = 1;
  static constexpr int64_t DISCLOSED_STYLE = 2;
  static constexpr int64_t NO_BIDDING_PROCESS = 3;

  explicit BidType(AbstractMessage* message) : LongRef(message, &tags::bidType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NumTickets : public LongRef {
 public:
  explicit NumTickets(AbstractMessage* message) : LongRef(message, &tags::numTickets) {}
};

class SideValue1 : public StringRef {
 public:
  explicit SideValue1(AbstractMessage* message) : StringRef(message, &tags::sideValue1) {}
};

class SideValue2 : public StringRef {
 public:
  explicit SideValue2(AbstractMessage* message) : StringRef(message, &tags::sideValue2) {}
};

class NoBidDescriptors : public LongRef {
 public:
  explicit NoBidDescriptors(AbstractMessage* message) : LongRef(message, &tags::noBidDescriptors) {}
};

class BidDescriptorType : public LongRef {
 public:
  static constexpr int64_t SECTOR = 1;
  static constexpr int64_t COUNTRY = 2;
  static constexpr int64_t INDEX = 3;

  explicit BidDescriptorType(AbstractMessage* message) : LongRef(message, &tags::bidDescriptorType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class BidDescriptor : public StringRef {
 public:
  explicit BidDescriptor(AbstractMessage* message) : StringRef(message, &tags::bidDescriptor) {}
};

class SideValueInd : public LongRef {
 public:
  static constexpr int64_t SIDEVALUE1 = 1;
  static constexpr int64_t SIDEVALUE_2 = 2;

  explicit SideValueInd(AbstractMessage* message) : LongRef(message, &tags::sideValueInd) {}

  static int64_t value(const char* bytes, int valBeg);
};

class LiquidityPctLow : public StringRef {
 public:
  explicit LiquidityPctLow(AbstractMessage* message) : StringRef(message, &tags::liquidityPctLow) {}
};

class LiquidityPctHigh : public StringRef {
 public:
  explicit LiquidityPctHigh(AbstractMessage* message) : StringRef(message, &tags::liquidityPctHigh) {}
};

class LiquidityValue : public StringRef {
 public:
  explicit LiquidityValue(AbstractMessage* message) : StringRef(message, &tags::liquidityValue) {}
};

class EFPTrackingError : public StringRef {
 public:
  explicit EFPTrackingError(AbstractMessage* message) : StringRef(message, &tags::eFPTrackingError) {}
};

class FairValue : public StringRef {
 public:
  explicit FairValue(AbstractMessage* message) : StringRef(message, &tags::fairValue) {}
};

class OutsideIndexPct : public StringRef {
 public:
  explicit OutsideIndexPct(AbstractMessage* message) : StringRef(message, &tags::outsideIndexPct) {}
};

class ValueOfFutures : public StringRef {
 public:
  explicit ValueOfFutures(AbstractMessage* message) : StringRef(message, &tags::valueOfFutures) {}
};

class LiquidityIndType : public LongRef {
 public:
  static constexpr int64_t _5DAY_MOVING_AVERAGE = 1;
  static constexpr int64_t _20_DAY_MOVING_AVERAGE = 2;
  static constexpr int64_t NORMAL_MARKET_SIZE = 3;
  static constexpr int64_t OTHER = 4;

  explicit LiquidityIndType(AbstractMessage* message) : LongRef(message, &tags::liquidityIndType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class WtAverageLiquidity : public StringRef {
 public:
  explicit WtAverageLiquidity(AbstractMessage* message) : StringRef(message, &tags::wtAverageLiquidity) {}
};

class ExchangeForPhysical : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit ExchangeForPhysical(AbstractMessage* message) : StringRef(message, &tags::exchangeForPhysical) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class OutMainCntryUIndex : public StringRef {
 public:
  explicit OutMainCntryUIndex(AbstractMessage* message) : StringRef(message, &tags::outMainCntryUIndex) {}
};

class CrossPercent : public StringRef {
 public:
  explicit CrossPercent(AbstractMessage* message) : StringRef(message, &tags::crossPercent) {}
};

class ProgRptReqs : public LongRef {
 public:
  static constexpr int64_t BUYSIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUSREQUEST = 1;
  static constexpr int64_t SELLSIDE_PERIODICALLY_SENDS_STATUS_USING_LISTSTATUS_PERIOD_OPTIONALLY_SPECIFIED_IN_PROGRESSPERIOD = 2;
  static constexpr int64_t REAL_TIME_EXECUTION_REPORTS = 3;

  explicit ProgRptReqs(AbstractMessage* message) : LongRef(message, &tags::progRptReqs) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ProgPeriodInterval : public LongRef {
 public:
  explicit ProgPeriodInterval(AbstractMessage* message) : LongRef(message, &tags::progPeriodInterval) {}
};

class IncTaxInd : public LongRef {
 public:
  static constexpr int64_t NET = 1;
  static constexpr int64_t GROSS = 2;

  explicit IncTaxInd(AbstractMessage* message) : LongRef(message, &tags::incTaxInd) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NumBidders : public LongRef {
 public:
  explicit NumBidders(AbstractMessage* message) : LongRef(message, &tags::numBidders) {}
};

class BidTradeType : public StringRef {
 public:
  static constexpr std::string_view RISK_TRADE = "R";
  static constexpr std::string_view VWAP_GUARANTEE = "G";
  static constexpr std::string_view AGENCY = "A";
  static constexpr std::string_view GUARANTEED_CLOSE = "J";

  explicit BidTradeType(AbstractMessage* message) : StringRef(message, &tags::bidTradeType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class BasisPxType : public StringRef {
 public:
  static constexpr std::string_view CLOSING_PRICE_AT_MORNING_SESSION = "2";
  static constexpr std::string_view CLOSING_PRICE = "3";
  static constexpr std::string_view CURRENT_PRICE = "4";
  static constexpr std::string_view SQ = "5";
  static constexpr std::string_view VWAP_THROUGH_A_DAY = "6";
  static constexpr std::string_view VWAP_THROUGH_A_MORNING_SESSION = "7";
  static constexpr std::string_view VWAP_THROUGH_AN_AFTERNOON_SESSION = "8";
  static constexpr std::string_view VWAP_THROUGH_A_DAY_EXCEPT_YORI = "9";
  static constexpr std::string_view VWAP_THROUGH_A_MORNING_SESSION_EXCEPT_YORI = "A";
  static constexpr std::string_view VWAP_THROUGH_AN_AFTERNOON_SESSION_EXCEPT_YORI = "B";
  static constexpr std::string_view STRIKE = "C";
  static constexpr std::string_view OPEN = "D";
  static constexpr std::string_view OTHERS = "Z";

  explicit BasisPxType(AbstractMessage* message) : StringRef(message, &tags::basisPxType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NoBidComponents : public LongRef {
 public:
  explicit NoBidComponents(AbstractMessage* message) : LongRef(message, &tags::noBidComponents) {}
};

class Country : public StringRef {
 public:
  explicit Country(AbstractMessage* message) : StringRef(message, &tags::country) {}
};

class TotNoStrikes : public LongRef {
 public:
  explicit TotNoStrikes(AbstractMessage* message) : LongRef(message, &tags::totNoStrikes) {}
};

class PriceType : public LongRef {
 public:
  static constexpr int64_t PERCENTAGE = 1;
  static constexpr int64_t PER_UNIT = 2;
  static constexpr int64_t FIXED_AMOUNT = 3;
  static constexpr int64_t DISCOUNT_PERCENTAGE_POINTS_BELOW_PAR = 4;
  static constexpr int64_t PREMIUM_PERCENTAGE_POINTS_OVER_PAR = 5;
  static constexpr int64_t SPREAD = 6;
  static constexpr int64_t TED_PRICE = 7;
  static constexpr int64_t TED_YIELD = 8;
  static constexpr int64_t YIELD = 9;
  static constexpr int64_t FIXED_CABINET_TRADE_PRICE = 10;
  static constexpr int64_t VARIABLE_CABINET_TRADE_PRICE = 11;

  explicit PriceType(AbstractMessage* message) : LongRef(message, &tags::priceType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class DayOrderQty : public StringRef {
 public:
  explicit DayOrderQty(AbstractMessage* message) : StringRef(message, &tags::dayOrderQty) {}
};

class DayCumQty : public StringRef {
 public:
  explicit DayCumQty(AbstractMessage* message) : StringRef(message, &tags::dayCumQty) {}
};

class DayAvgPx : public StringRef {
 public:
  explicit DayAvgPx(AbstractMessage* message) : StringRef(message, &tags::dayAvgPx) {}
};

class GTBookingInst : public LongRef {
 public:
  static constexpr int64_t BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION = 0;
  static constexpr int64_t ACCUMULATE_EXECUTIONS_UNTIL_ORDER_IS_FILLED_OR_EXPIRES = 1;
  static constexpr int64_t ACCUMULATE_UNTIL_VERBALLY_NOTIFIED_OTHERWISE = 2;

  explicit GTBookingInst(AbstractMessage* message) : LongRef(message, &tags::gTBookingInst) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NoStrikes : public LongRef {
 public:
  explicit NoStrikes(AbstractMessage* message) : LongRef(message, &tags::noStrikes) {}
};

class ListStatusType : public LongRef {
 public:
  static constexpr int64_t ACK = 1;
  static constexpr int64_t RESPONSE = 2;
  static constexpr int64_t TIMED = 3;
  static constexpr int64_t EXECSTARTED = 4;
  static constexpr int64_t ALLDONE = 5;
  static constexpr int64_t ALERT = 6;

  explicit ListStatusType(AbstractMessage* message) : LongRef(message, &tags::listStatusType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NetGrossInd : public LongRef {
 public:
  static constexpr int64_t NET = 1;
  static constexpr int64_t GROSS = 2;

  explicit NetGrossInd(AbstractMessage* message) : LongRef(message, &tags::netGrossInd) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ListOrderStatus : public LongRef {
 public:
  static constexpr int64_t INBIDDINGPROCESS = 1;
  static constexpr int64_t RECEIVEDFOREXECUTION = 2;
  static constexpr int64_t EXECUTING = 3;
  static constexpr int64_t CANCELING = 4;
  static constexpr int64_t ALERT = 5;
  static constexpr int64_t ALL_DONE = 6;
  static constexpr int64_t REJECT = 7;

  explicit ListOrderStatus(AbstractMessage* message) : LongRef(message, &tags::listOrderStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ExpireDate : public StringRef {
 public:
  explicit ExpireDate(AbstractMessage* message) : StringRef(message, &tags::expireDate) {}
};

class ListExecInstType : public StringRef {
 public:
  static constexpr std::string_view IMMEDIATE = "1";
  static constexpr std::string_view WAIT_FOR_EXECUTE_INSTRUCTION = "2";
  static constexpr std::string_view EXCHANGE_SWITCH_CIV_ORDER_SELL_DRIVEN = "3";
  static constexpr std::string_view EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_TOP_UP = "4";
  static constexpr std::string_view EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_WITHDRAW = "5";

  explicit ListExecInstType(AbstractMessage* message) : StringRef(message, &tags::listExecInstType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class CxlRejResponseTo : public StringRef {
 public:
  static constexpr std::string_view ORDER_CANCEL_REQUEST = "1";
  static constexpr std::string_view ORDER_CANCEL_REPLACE_REQUEST = "2";

  explicit CxlRejResponseTo(AbstractMessage* message) : StringRef(message, &tags::cxlRejResponseTo) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class UnderlyingCouponRate : public StringRef {
 public:
  explicit UnderlyingCouponRate(AbstractMessage* message) : StringRef(message, &tags::underlyingCouponRate) {}
};

class UnderlyingContractMultiplier : public DoubleRef {
 public:
  explicit UnderlyingContractMultiplier(AbstractMessage* message) : DoubleRef(message, &tags::underlyingContractMultiplier) {}
};

class ContraTradeQty : public StringRef {
 public:
  explicit ContraTradeQty(AbstractMessage* message) : StringRef(message, &tags::contraTradeQty) {}
};

class ContraTradeTime : public StringRef {
 public:
  explicit ContraTradeTime(AbstractMessage* message) : StringRef(message, &tags::contraTradeTime) {}
};

class LiquidityNumSecurities : public LongRef {
 public:
  explicit LiquidityNumSecurities(AbstractMessage* message) : LongRef(message, &tags::liquidityNumSecurities) {}
};

class MultiLegReportingType : public StringRef {
 public:
  static constexpr std::string_view SINGLE_SECURITY = "1";
  static constexpr std::string_view INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY = "2";
  static constexpr std::string_view MULTI_LEG_SECURITY = "3";

  explicit MultiLegReportingType(AbstractMessage* message) : StringRef(message, &tags::multiLegReportingType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class StrikeTime : public StringRef {
 public:
  explicit StrikeTime(AbstractMessage* message) : StringRef(message, &tags::strikeTime) {}
};

class ListStatusText : public StringRef {
 public:
  explicit ListStatusText(AbstractMessage* message) : StringRef(message, &tags::listStatusText) {}
};

class EncodedListStatusTextLen : public LongRef {
 public:
  explicit EncodedListStatusTextLen(AbstractMessage* message) : LongRef(message, &tags::encodedListStatusTextLen) {}
};

class EncodedListStatusText : public StringRef {
 public:
  explicit EncodedListStatusText(AbstractMessage* message) : StringRef(message, &tags::encodedListStatusText) {}
};

class PartyIDSource : public StringRef {
 public:
  static constexpr std::string_view BIC = "B";
  static constexpr std::string_view GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER = "C";
  static constexpr std::string_view PROPRIETARY_CUSTOM_CODE = "D";
  static constexpr std::string_view ISO_COUNTRY_CODE = "E";
  static constexpr std::string_view SETTLEMENT_ENTITY_LOCATION = "F";
  static constexpr std::string_view MIC = "G";
  static constexpr std::string_view CSD_PARTICIPANT_MEMBER_CODE = "H";
  static constexpr std::string_view KOREAN_INVESTOR_ID = "1";
  static constexpr std::string_view TAIWANESE_QUALIFIED_FOREIGN_INVESTOR_ID_QFII = "2";
  static constexpr std::string_view TAIWANESE_TRADING_ACCOUNT = "3";
  static constexpr std::string_view MALAYSIAN_CENTRAL_DEPOSITORY = "4";
  static constexpr std::string_view CHINESE_B_SHARE = "5";
  static constexpr std::string_view UK_NATIONAL_INSURANCE_OR_PENSION_NUMBER = "6";
  static constexpr std::string_view US_SOCIAL_SECURITY_NUMBER = "7";
  static constexpr std::string_view US_EMPLOYER_IDENTIFICATION_NUMBER = "8";
  static constexpr std::string_view AUSTRALIAN_BUSINESS_NUMBER = "9";
  static constexpr std::string_view AUSTRALIAN_TAX_FILE_NUMBER = "A";
  static constexpr std::string_view DIRECTED_BROKER_THREE_CHARACTER_ACRONYM_AS_DEFINED_IN_ISITC_ETC_BEST_PRACTICE_GUIDELINES_DOCUMENT = "I";

  explicit PartyIDSource(AbstractMessage* message) : StringRef(message, &tags::partyIDSource) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class PartyID : public StringRef {
 public:
  explicit PartyID(AbstractMessage* message) : StringRef(message, &tags::partyID) {}
};

class NetChgPrevDay : public StringRef {
 public:
  explicit NetChgPrevDay(AbstractMessage* message) : StringRef(message, &tags::netChgPrevDay) {}
};

class PartyRole : public LongRef {
 public:
  static constexpr int64_t EXECUTING_FIRM = 1;
  static constexpr int64_t BROKER_OF_CREDIT = 2;
  static constexpr int64_t CLIENT_ID = 3;
  static constexpr int64_t CLEARING_FIRM = 4;
  static constexpr int64_t INVESTOR_ID = 5;
  static constexpr int64_t INTRODUCING_FIRM = 6;
  static constexpr int64_t ENTERING_FIRM = 7;
  static constexpr int64_t LOCATE_LENDING_FIRM = 8;
  static constexpr int64_t FUND_MANAGER_CLIENT_ID = 9;
  static constexpr int64_t SETTLEMENT_LOCATION = 10;
  static constexpr int64_t ORDER_ORIGINATION_TRADER = 11;
  static constexpr int64_t EXECUTING_TRADER = 12;
  static constexpr int64_t ORDER_ORIGINATION_FIRM = 13;
  static constexpr int64_t GIVEUP_CLEARING_FIRM = 14;
  static constexpr int64_t CORRESPONDANT_CLEARING_FIRM = 15;
  static constexpr int64_t EXECUTING_SYSTEM = 16;
  static constexpr int64_t CONTRA_FIRM = 17;
  static constexpr int64_t CONTRA_CLEARING_FIRM = 18;
  static constexpr int64_t SPONSORING_FIRM = 19;
  static constexpr int64_t UNDERLYING_CONTRA_FIRM = 20;
  static constexpr int64_t CLEARING_ORGANIZATION = 21;
  static constexpr int64_t EXCHANGE = 22;
  static constexpr int64_t CUSTOMER_ACCOUNT = 24;
  static constexpr int64_t CORRESPONDENT_CLEARING_ORGANIZATION = 25;
  static constexpr int64_t CORRESPONDENT_BROKER = 26;
  static constexpr int64_t BUYER_SELLER = 27;
  static constexpr int64_t CUSTODIAN = 28;
  static constexpr int64_t INTERMEDIARY = 29;
  static constexpr int64_t AGENT = 30;
  static constexpr int64_t SUB_CUSTODIAN = 31;
  static constexpr int64_t BENEFICIARY = 32;
  static constexpr int64_t INTERESTED_PARTY = 33;
  static constexpr int64_t REGULATORY_BODY = 34;
  static constexpr int64_t LIQUIDITY_PROVIDER = 35;
  static constexpr int64_t ENTERING_TRADER = 36;
  static constexpr int64_t CONTRA_TRADER = 37;
  static constexpr int64_t POSITION_ACCOUNT = 38;

  explicit PartyRole(AbstractMessage* message) : LongRef(message, &tags::partyRole) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NoPartyIDs : public LongRef {
 public:
  explicit NoPartyIDs(AbstractMessage* message) : LongRef(message, &tags::noPartyIDs) {}
};

class NoSecurityAltID : public LongRef {
 public:
  explicit NoSecurityAltID(AbstractMessage* message) : LongRef(message, &tags::noSecurityAltID) {}
};

class SecurityAltID : public StringRef {
 public:
  explicit SecurityAltID(AbstractMessage* message) : StringRef(message, &tags::securityAltID) {}
};

class SecurityAltIDSource : public StringRef {
 public:
  explicit SecurityAltIDSource(AbstractMessage* message) : StringRef(message, &tags::securityAltIDSource) {}
};

class NoUnderlyingSecurityAltID : public LongRef {
 public:
  explicit NoUnderlyingSecurityAltID(AbstractMessage* message) : LongRef(message, &tags::noUnderlyingSecurityAltID) {}
};

class UnderlyingSecurityAltID : public StringRef {
 public:
  explicit UnderlyingSecurityAltID(AbstractMessage* message) : StringRef(message, &tags::underlyingSecurityAltID) {}
};

class UnderlyingSecurityAltIDSource : public StringRef {
 public:
  explicit UnderlyingSecurityAltIDSource(AbstractMessage* message) : StringRef(message, &tags::underlyingSecurityAltIDSource) {}
};

class Product : public LongRef {
 public:
  static constexpr int64_t AGENCY = 1;
  static constexpr int64_t COMMODITY = 2;
  static constexpr int64_t CORPORATE = 3;
  static constexpr int64_t CURRENCY = 4;
  static constexpr int64_t EQUITY = 5;
  static constexpr int64_t GOVERNMENT = 6;
  static constexpr int64_t INDEX = 7;
  static constexpr int64_t LOAN = 8;
  static constexpr int64_t MONEYMARKET = 9;
  static constexpr int64_t MORTGAGE = 10;
  static constexpr int64_t MUNICIPAL = 11;
  static constexpr int64_t OTHER = 12;
  static constexpr int64_t FINANCING = 13;

  explicit Product(AbstractMessage* message) : LongRef(message, &tags::product) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CFICode : public StringRef {
 public:
  explicit CFICode(AbstractMessage* message) : StringRef(message, &tags::cFICode) {}
};

class UnderlyingProduct : public LongRef {
 public:
  explicit UnderlyingProduct(AbstractMessage* message) : LongRef(message, &tags::underlyingProduct) {}
};

class UnderlyingCFICode : public StringRef {
 public:
  explicit UnderlyingCFICode(AbstractMessage* message) : StringRef(message, &tags::underlyingCFICode) {}
};

class TestMessageIndicator : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit TestMessageIndicator(AbstractMessage* message) : StringRef(message, &tags::testMessageIndicator) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class BookingRefID : public StringRef {
 public:
  explicit BookingRefID(AbstractMessage* message) : StringRef(message, &tags::bookingRefID) {}
};

class IndividualAllocID : public StringRef {
 public:
  explicit IndividualAllocID(AbstractMessage* message) : StringRef(message, &tags::individualAllocID) {}
};

class RoundingDirection : public StringRef {
 public:
  static constexpr std::string_view ROUND_TO_NEAREST = "0";
  static constexpr std::string_view ROUND_DOWN = "1";
  static constexpr std::string_view ROUND_UP = "2";

  explicit RoundingDirection(AbstractMessage* message) : StringRef(message, &tags::roundingDirection) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class RoundingModulus : public DoubleRef {
 public:
  explicit RoundingModulus(AbstractMessage* message) : DoubleRef(message, &tags::roundingModulus) {}
};

class CountryOfIssue : public StringRef {
 public:
  explicit CountryOfIssue(AbstractMessage* message) : StringRef(message, &tags::countryOfIssue) {}
};

class StateOrProvinceOfIssue : public StringRef {
 public:
  explicit StateOrProvinceOfIssue(AbstractMessage* message) : StringRef(message, &tags::stateOrProvinceOfIssue) {}
};

class LocaleOfIssue : public StringRef {
 public:
  explicit LocaleOfIssue(AbstractMessage* message) : StringRef(message, &tags::localeOfIssue) {}
};

class NoRegistDtls : public LongRef {
 public:
  explicit NoRegistDtls(AbstractMessage* message) : LongRef(message, &tags::noRegistDtls) {}
};

class MailingDtls : public StringRef {
 public:
  explicit MailingDtls(AbstractMessage* message) : StringRef(message, &tags::mailingDtls) {}
};

class InvestorCountryOfResidence : public StringRef {
 public:
  explicit InvestorCountryOfResidence(AbstractMessage* message) : StringRef(message, &tags::investorCountryOfResidence) {}
};

class PaymentRef : public StringRef {
 public:
  explicit PaymentRef(AbstractMessage* message) : StringRef(message, &tags::paymentRef) {}
};

class DistribPaymentMethod : public LongRef {
 public:
  static constexpr int64_t CREST = 1;
  static constexpr int64_t NSCC = 2;
  static constexpr int64_t EUROCLEAR = 3;
  static constexpr int64_t CLEARSTREAM = 4;
  static constexpr int64_t CHEQUE = 5;
  static constexpr int64_t TELEGRAPHIC_TRANSFER = 6;
  static constexpr int64_t FEDWIRE = 7;
  static constexpr int64_t DIRECT_CREDIT = 8;
  static constexpr int64_t ACH_CREDIT = 9;
  static constexpr int64_t BPAY = 10;
  static constexpr int64_t HIGH_VALUE_CLEARING_SYSTEM = 11;
  static constexpr int64_t REINVEST_IN_FUND = 12;

  explicit DistribPaymentMethod(AbstractMessage* message) : LongRef(message, &tags::distribPaymentMethod) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CashDistribCurr : public StringRef {
 public:
  explicit CashDistribCurr(AbstractMessage* message) : StringRef(message, &tags::cashDistribCurr) {}
};

class CommCurrency : public StringRef {
 public:
  explicit CommCurrency(AbstractMessage* message) : StringRef(message, &tags::commCurrency) {}
};

class CancellationRights : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO_EXECUTION_ONLY = "N";
  static constexpr std::string_view NO_WAIVER_AGREEMENT = "M";
  static constexpr std::string_view NO_INSTITUTIONAL = "O";

  explicit CancellationRights(AbstractMessage* message) : StringRef(message, &tags::cancellationRights) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MoneyLaunderingStatus : public StringRef {
 public:
  static constexpr std::string_view PASSED = "Y";
  static constexpr std::string_view NOT_CHECKED = "N";
  static constexpr std::string_view EXEMPT_BELOW_THE_LIMIT = "1";
  static constexpr std::string_view EXEMPT_CLIENT_MONEY_TYPE_EXEMPTION = "2";
  static constexpr std::string_view EXEMPT_AUTHORISED_CREDIT_OR_FINANCIAL_INSTITUTION = "3";

  explicit MoneyLaunderingStatus(AbstractMessage* message) : StringRef(message, &tags::moneyLaunderingStatus) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MailingInst : public StringRef {
 public:
  explicit MailingInst(AbstractMessage* message) : StringRef(message, &tags::mailingInst) {}
};

class TransBkdTime : public StringRef {
 public:
  explicit TransBkdTime(AbstractMessage* message) : StringRef(message, &tags::transBkdTime) {}
};

class ExecPriceType : public StringRef {
 public:
  static constexpr std::string_view BID_PRICE = "B";
  static constexpr std::string_view CREATION_PRICE = "C";
  static constexpr std::string_view CREATION_PRICE_PLUS_ADJUSTMENT = "D";
  static constexpr std::string_view CREATION_PRICE_PLUS_ADJUSTMENT_AMOUNT = "E";
  static constexpr std::string_view OFFER_PRICE = "O";
  static constexpr std::string_view OFFER_PRICE_MINUS_ADJUSTMENT = "P";
  static constexpr std::string_view OFFER_PRICE_MINUS_ADJUSTMENT_AMOUNT = "Q";
  static constexpr std::string_view SINGLE_PRICE = "S";

  explicit ExecPriceType(AbstractMessage* message) : StringRef(message, &tags::execPriceType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class ExecPriceAdjustment : public DoubleRef {
 public:
  explicit ExecPriceAdjustment(AbstractMessage* message) : DoubleRef(message, &tags::execPriceAdjustment) {}
};

class DateOfBirth : public StringRef {
 public:
  explicit DateOfBirth(AbstractMessage* message) : StringRef(message, &tags::dateOfBirth) {}
};

class TradeReportTransType : public LongRef {
 public:
  explicit TradeReportTransType(AbstractMessage* message) : LongRef(message, &tags::tradeReportTransType) {}
};

class CardHolderName : public StringRef {
 public:
  explicit CardHolderName(AbstractMessage* message) : StringRef(message, &tags::cardHolderName) {}
};

class CardNumber : public StringRef {
 public:
  explicit CardNumber(AbstractMessage* message) : StringRef(message, &tags::cardNumber) {}
};

class CardExpDate : public StringRef {
 public:
  explicit CardExpDate(AbstractMessage* message) : StringRef(message, &tags::cardExpDate) {}
};

class CardIssNum : public StringRef {
 public:
  explicit CardIssNum(AbstractMessage* message) : StringRef(message, &tags::cardIssNum) {}
};

class PaymentMethod : public LongRef {
 public:
  static constexpr int64_t CREST = 1;
  static constexpr int64_t NSCC = 2;
  static constexpr int64_t EUROCLEAR = 3;
  static constexpr int64_t CLEARSTREAM = 4;
  static constexpr int64_t CHEQUE = 5;
  static constexpr int64_t TELEGRAPHIC_TRANSFER = 6;
  static constexpr int64_t FEDWIRE = 7;
  static constexpr int64_t DEBIT_CARD = 8;
  static constexpr int64_t DIRECT_DEBIT = 9;
  static constexpr int64_t DIRECT_CREDIT = 10;
  static constexpr int64_t CREDIT_CARD = 11;
  static constexpr int64_t ACH_DEBIT = 12;
  static constexpr int64_t ACH_CREDIT = 13;
  static constexpr int64_t BPAY = 14;
  static constexpr int64_t HIGH_VALUE_CLEARING_SYSTEM = 15;

  explicit PaymentMethod(AbstractMessage* message) : LongRef(message, &tags::paymentMethod) {}

  static int64_t value(const char* bytes, int valBeg);
};

class RegistAcctType : public StringRef {
 public:
  explicit RegistAcctType(AbstractMessage* message) : StringRef(message, &tags::registAcctType) {}
};

class Designation : public StringRef {
 public:
  explicit Designation(AbstractMessage* message) : StringRef(message, &tags::designation) {}
};

class TaxAdvantageType : public LongRef {
 public:
  static constexpr int64_t NONE_NOT_APPLICABLE = 0;
  static constexpr int64_t MAXI_ISA = 1;
  static constexpr int64_t TESSA = 2;
  static constexpr int64_t MINI_CASH_ISA = 3;
  static constexpr int64_t MINI_STOCKS_AND_SHARES_ISA = 4;
  static constexpr int64_t MINI_INSURANCE_ISA = 5;
  static constexpr int64_t CURRENT_YEAR_PAYMENT = 6;
  static constexpr int64_t PRIOR_YEAR_PAYMENT = 7;
  static constexpr int64_t ASSET_TRANSFER = 8;
  static constexpr int64_t EMPLOYEE = 9;
  static constexpr int64_t EMPLOYEE_CURRENT_YEAR = 10;
  static constexpr int64_t EMPLOYER = 11;
  static constexpr int64_t EMPLOYER_CURRENT_YEAR = 12;
  static constexpr int64_t NON_FUND_PROTOTYPE_IRA = 13;
  static constexpr int64_t NON_FUND_QUALIFIED_PLAN = 14;
  static constexpr int64_t DEFINED_CONTRIBUTION_PLAN = 15;
  static constexpr int64_t INDIVIDUAL_RETIREMENT_ACCOUNT = 16;
  static constexpr int64_t INDIVIDUAL_RETIREMENT_ACCOUNT_ROLLOVER = 17;
  static constexpr int64_t KEOGH = 18;
  static constexpr int64_t PROFIT_SHARING_PLAN = 19;
  static constexpr int64_t _401K = 20;
  static constexpr int64_t SELF_DIRECTED_IRA = 21;
  static constexpr int64_t _403 = 22;
  static constexpr int64_t _457 = 23;
  static constexpr int64_t ROTH_IRA_24 = 24;
  static constexpr int64_t ROTH_IRA_25 = 25;
  static constexpr int64_t ROTH_CONVERSION_IRA_26 = 26;
  static constexpr int64_t ROTH_CONVERSION_IRA_27 = 27;
  static constexpr int64_t EDUCATION_IRA_28 = 28;
  static constexpr int64_t EDUCATION_IRA_29 = 29;

  explicit TaxAdvantageType(AbstractMessage* message) : LongRef(message, &tags::taxAdvantageType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class RegistRejReasonText : public StringRef {
 public:
  explicit RegistRejReasonText(AbstractMessage* message) : StringRef(message, &tags::registRejReasonText) {}
};

class FundRenewWaiv : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit FundRenewWaiv(AbstractMessage* message) : StringRef(message, &tags::fundRenewWaiv) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class CashDistribAgentName : public StringRef {
 public:
  explicit CashDistribAgentName(AbstractMessage* message) : StringRef(message, &tags::cashDistribAgentName) {}
};

class CashDistribAgentCode : public StringRef {
 public:
  explicit CashDistribAgentCode(AbstractMessage* message) : StringRef(message, &tags::cashDistribAgentCode) {}
};

class CashDistribAgentAcctNumber : public StringRef {
 public:
  explicit CashDistribAgentAcctNumber(AbstractMessage* message) : StringRef(message, &tags::cashDistribAgentAcctNumber) {}
};

class CashDistribPayRef : public StringRef {
 public:
  explicit CashDistribPayRef(AbstractMessage* message) : StringRef(message, &tags::cashDistribPayRef) {}
};

class CashDistribAgentAcctName : public StringRef {
 public:
  explicit CashDistribAgentAcctName(AbstractMessage* message) : StringRef(message, &tags::cashDistribAgentAcctName) {}
};

class CardStartDate : public StringRef {
 public:
  explicit CardStartDate(AbstractMessage* message) : StringRef(message, &tags::cardStartDate) {}
};

class PaymentDate : public StringRef {
 public:
  explicit PaymentDate(AbstractMessage* message) : StringRef(message, &tags::paymentDate) {}
};

class PaymentRemitterID : public StringRef {
 public:
  explicit PaymentRemitterID(AbstractMessage* message) : StringRef(message, &tags::paymentRemitterID) {}
};

class RegistStatus : public StringRef {
 public:
  static constexpr std::string_view ACCEPTED = "A";
  static constexpr std::string_view REJECTED = "R";
  static constexpr std::string_view HELD = "H";
  static constexpr std::string_view REMINDER_IE_REGISTRATION_INSTRUCTIONS_ARE_STILL_OUTSTANDING = "N";

  explicit RegistStatus(AbstractMessage* message) : StringRef(message, &tags::registStatus) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class RegistRejReasonCode : public LongRef {
 public:
  static constexpr int64_t INVALID_UNACCEPTABLE_ACCOUNT_TYPE = 1;
  static constexpr int64_t INVALID_UNACCEPTABLE_TAX_EXEMPT_TYPE = 2;
  static constexpr int64_t INVALID_UNACCEPTABLE_OWNERSHIP_TYPE = 3;
  static constexpr int64_t INVALID_UNACCEPTABLE_NO_REG_DETLS = 4;
  static constexpr int64_t INVALID_UNACCEPTABLE_REG_SEQ_NO = 5;
  static constexpr int64_t INVALID_UNACCEPTABLE_REG_DTLS = 6;
  static constexpr int64_t INVALID_UNACCEPTABLE_MAILING_DTLS = 7;
  static constexpr int64_t INVALID_UNACCEPTABLE_MAILING_INST = 8;
  static constexpr int64_t INVALID_UNACCEPTABLE_INVESTOR_ID = 9;
  static constexpr int64_t INVALID_UNACCEPTABLE_INVESTOR_ID_SOURCE = 10;
  static constexpr int64_t INVALID_UNACCEPTABLE_DATE_OF_BIRTH = 11;
  static constexpr int64_t INVALID_UNACCEPTABLE_INVESTOR_COUNTRY_OF_RESIDENCE = 12;
  static constexpr int64_t INVALID_UNACCEPTABLE_NODISTRIBINSTNS = 13;
  static constexpr int64_t INVALID_UNACCEPTABLE_DISTRIB_PERCENTAGE = 14;
  static constexpr int64_t INVALID_UNACCEPTABLE_DISTRIB_PAYMENT_METHOD = 15;
  static constexpr int64_t INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NAME = 16;
  static constexpr int64_t INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_CODE = 17;
  static constexpr int64_t INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NUM = 18;
  static constexpr int64_t OTHER = 99;

  explicit RegistRejReasonCode(AbstractMessage* message) : LongRef(message, &tags::registRejReasonCode) {}

  static int64_t value(const char* bytes, int valBeg);
};

class RegistRefID : public StringRef {
 public:
  explicit RegistRefID(AbstractMessage* message) : StringRef(message, &tags::registRefID) {}
};

class RegistDtls : public StringRef {
 public:
  explicit RegistDtls(AbstractMessage* message) : StringRef(message, &tags::registDtls) {}
};

class NoDistribInsts : public LongRef {
 public:
  explicit NoDistribInsts(AbstractMessage* message) : LongRef(message, &tags::noDistribInsts) {}
};

class RegistEmail : public StringRef {
 public:
  explicit RegistEmail(AbstractMessage* message) : StringRef(message, &tags::registEmail) {}
};

class DistribPercentage : public StringRef {
 public:
  explicit DistribPercentage(AbstractMessage* message) : StringRef(message, &tags::distribPercentage) {}
};

class RegistID : public StringRef {
 public:
  explicit RegistID(AbstractMessage* message) : StringRef(message, &tags::registID) {}
};

class RegistTransType : public StringRef {
 public:
  static constexpr std::string_view NEW = "0";
  static constexpr std::string_view REPLACE = "1";
  static constexpr std::string_view CANCEL = "2";

  explicit RegistTransType(AbstractMessage* message) : StringRef(message, &tags::registTransType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class ExecValuationPoint : public StringRef {
 public:
  explicit ExecValuationPoint(AbstractMessage* message) : StringRef(message, &tags::execValuationPoint) {}
};

class OrderPercent : public StringRef {
 public:
  explicit OrderPercent(AbstractMessage* message) : StringRef(message, &tags::orderPercent) {}
};

class OwnershipType : public StringRef {
 public:
  static constexpr std::string_view JOINT_INVESTORS = "J";
  static constexpr std::string_view TENANTS_IN_COMMON = "T";
  static constexpr std::string_view JOINT_TRUSTEES = "2";

  explicit OwnershipType(AbstractMessage* message) : StringRef(message, &tags::ownershipType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NoContAmts : public LongRef {
 public:
  explicit NoContAmts(AbstractMessage* message) : LongRef(message, &tags::noContAmts) {}
};

class ContAmtType : public LongRef {
 public:
  static constexpr int64_t COMMISSION_AMOUNT = 1;
  static constexpr int64_t COMMISSION = 2;
  static constexpr int64_t INITIAL_CHARGE_AMOUNT = 3;
  static constexpr int64_t INITIAL_CHARGE = 4;
  static constexpr int64_t DISCOUNT_AMOUNT = 5;
  static constexpr int64_t DISCOUNT = 6;
  static constexpr int64_t DILUTION_LEVY_AMOUNT = 7;
  static constexpr int64_t DILUTION_LEVY = 8;
  static constexpr int64_t EXIT_CHARGE_AMOUNT = 9;
  static constexpr int64_t EXIT_CHARGE = 10;
  static constexpr int64_t FUND_BASED_RENEWAL_COMMISSION = 11;
  static constexpr int64_t PROJECTED_FUND_VALUE = 12;
  static constexpr int64_t FUND_BASED_RENEWAL_COMMISSION_AMOUNT_13 = 13;
  static constexpr int64_t FUND_BASED_RENEWAL_COMMISSION_AMOUNT_14 = 14;
  static constexpr int64_t NET_SETTLEMENT_AMOUNT = 15;

  explicit ContAmtType(AbstractMessage* message) : LongRef(message, &tags::contAmtType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ContAmtValue : public DoubleRef {
 public:
  explicit ContAmtValue(AbstractMessage* message) : DoubleRef(message, &tags::contAmtValue) {}
};

class ContAmtCurr : public StringRef {
 public:
  explicit ContAmtCurr(AbstractMessage* message) : StringRef(message, &tags::contAmtCurr) {}
};

class OwnerType : public LongRef {
 public:
  static constexpr int64_t INDIVIDUAL_INVESTOR = 1;
  static constexpr int64_t PUBLIC_COMPANY = 2;
  static constexpr int64_t PRIVATE_COMPANY = 3;
  static constexpr int64_t INDIVIDUAL_TRUSTEE = 4;
  static constexpr int64_t COMPANY_TRUSTEE = 5;
  static constexpr int64_t PENSION_PLAN = 6;
  static constexpr int64_t CUSTODIAN_UNDER_GIFTS_TO_MINORS_ACT = 7;
  static constexpr int64_t TRUSTS = 8;
  static constexpr int64_t FIDUCIARIES = 9;
  static constexpr int64_t NETWORKING_SUB_ACCOUNT = 10;
  static constexpr int64_t NON_PROFIT_ORGANIZATION = 11;
  static constexpr int64_t CORPORATE_BODY = 12;
  static constexpr int64_t NOMINEE = 13;

  explicit OwnerType(AbstractMessage* message) : LongRef(message, &tags::ownerType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PartySubID : public StringRef {
 public:
  explicit PartySubID(AbstractMessage* message) : StringRef(message, &tags::partySubID) {}
};

class NestedPartyID : public StringRef {
 public:
  explicit NestedPartyID(AbstractMessage* message) : StringRef(message, &tags::nestedPartyID) {}
};

class NestedPartyIDSource : public StringRef {
 public:
  explicit NestedPartyIDSource(AbstractMessage* message) : StringRef(message, &tags::nestedPartyIDSource) {}
};

class SecondaryClOrdID : public StringRef {
 public:
  explicit SecondaryClOrdID(AbstractMessage* message) : StringRef(message, &tags::secondaryClOrdID) {}
};

class SecondaryExecID : public StringRef {
 public:
  explicit SecondaryExecID(AbstractMessage* message) : StringRef(message, &tags::secondaryExecID) {}
};

class OrderCapacity : public StringRef {
 public:
  static constexpr std::string_view AGENCY = "A";
  static constexpr std::string_view PROPRIETARY = "G";
  static constexpr std::string_view INDIVIDUAL = "I";
  static constexpr std::string_view PRINCIPAL = "P";
  static constexpr std::string_view RISKLESS_PRINCIPAL = "R";
  static constexpr std::string_view AGENT_FOR_OTHER_MEMBER = "W";

  explicit OrderCapacity(AbstractMessage* message) : StringRef(message, &tags::orderCapacity) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class OrderRestrictions : public StringRef {
 public:
  static constexpr std::string_view PROGRAM_TRADE = "1";
  static constexpr std::string_view INDEX_ARBITRAGE = "2";
  static constexpr std::string_view NON_INDEX_ARBITRAGE = "3";
  static constexpr std::string_view COMPETING_MARKET_MAKER = "4";
  static constexpr std::string_view ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_SECURITY = "5";
  static constexpr std::string_view ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_UNDERLYING_SECURITY_OF_A_DERIVATIVE_SECURITY = "6";
  static constexpr std::string_view FOREIGN_ENTITY = "7";
  static constexpr std::string_view EXTERNAL_MARKET_PARTICIPANT = "8";
  static constexpr std::string_view EXTERNAL_INTER_CONNECTED_MARKET_LINKAGE = "9";
  static constexpr std::string_view RISKLESS_ARBITRAGE = "A";

  explicit OrderRestrictions(AbstractMessage* message) : StringRef(message, &tags::orderRestrictions) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MassCancelRequestType : public StringRef {
 public:
  static constexpr std::string_view CANCEL_ORDERS_FOR_A_SECURITY = "1";
  static constexpr std::string_view CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = "2";
  static constexpr std::string_view CANCEL_ORDERS_FOR_A_PRODUCT = "3";
  static constexpr std::string_view CANCEL_ORDERS_FOR_A_CFICODE = "4";
  static constexpr std::string_view CANCEL_ORDERS_FOR_A_SECURITYTYPE = "5";
  static constexpr std::string_view CANCEL_ORDERS_FOR_A_TRADING_SESSION = "6";
  static constexpr std::string_view CANCEL_ALL_ORDERS = "7";

  explicit MassCancelRequestType(AbstractMessage* message) : StringRef(message, &tags::massCancelRequestType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MassCancelResponse : public StringRef {
 public:
  static constexpr std::string_view CANCEL_REQUEST_REJECTED = "0";
  static constexpr std::string_view CANCEL_ORDERS_FOR_A_SECURITY = "1";
  static constexpr std::string_view CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = "2";
  static constexpr std::string_view CANCEL_ORDERS_FOR_A_PRODUCT = "3";
  static constexpr std::string_view CANCEL_ORDERS_FOR_A_CFICODE = "4";
  static constexpr std::string_view CANCEL_ORDERS_FOR_A_SECURITYTYPE = "5";
  static constexpr std::string_view CANCEL_ORDERS_FOR_A_TRADING_SESSION = "6";
  static constexpr std::string_view CANCEL_ALL_ORDERS = "7";

  explicit MassCancelResponse(AbstractMessage* message) : StringRef(message, &tags::massCancelResponse) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MassCancelRejectReason : public StringRef {
 public:
  static constexpr std::string_view MASS_CANCEL_NOT_SUPPORTED = "0";
  static constexpr std::string_view INVALID_OR_UNKNOWN_SECURITY = "1";
  static constexpr std::string_view INVALID_OR_UNKNOWN_UNDERLYING = "2";
  static constexpr std::string_view INVALID_OR_UNKNOWN_PRODUCT = "3";
  static constexpr std::string_view INVALID_OR_UNKNOWN_CFICODE = "4";
  static constexpr std::string_view INVALID_OR_UNKNOWN_SECURITY_TYPE = "5";
  static constexpr std::string_view INVALID_OR_UNKNOWN_TRADING_SESSION = "6";
  static constexpr std::string_view OTHER = "99";

  explicit MassCancelRejectReason(AbstractMessage* message) : StringRef(message, &tags::massCancelRejectReason) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class TotalAffectedOrders : public LongRef {
 public:
  explicit TotalAffectedOrders(AbstractMessage* message) : LongRef(message, &tags::totalAffectedOrders) {}
};

class NoAffectedOrders : public LongRef {
 public:
  explicit NoAffectedOrders(AbstractMessage* message) : LongRef(message, &tags::noAffectedOrders) {}
};

class AffectedOrderID : public StringRef {
 public:
  explicit AffectedOrderID(AbstractMessage* message) : StringRef(message, &tags::affectedOrderID) {}
};

class AffectedSecondaryOrderID : public StringRef {
 public:
  explicit AffectedSecondaryOrderID(AbstractMessage* message) : StringRef(message, &tags::affectedSecondaryOrderID) {}
};

class QuoteType : public LongRef {
 public:
  static constexpr int64_t INDICATIVE = 0;
  static constexpr int64_t TRADEABLE = 1;
  static constexpr int64_t RESTRICTED_TRADEABLE = 2;
  static constexpr int64_t COUNTER = 3;

  explicit QuoteType(AbstractMessage* message) : LongRef(message, &tags::quoteType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NestedPartyRole : public LongRef {
 public:
  explicit NestedPartyRole(AbstractMessage* message) : LongRef(message, &tags::nestedPartyRole) {}
};

class NoNestedPartyIDs : public LongRef {
 public:
  explicit NoNestedPartyIDs(AbstractMessage* message) : LongRef(message, &tags::noNestedPartyIDs) {}
};

class TotalAccruedInterestAmt : public StringRef {
 public:
  explicit TotalAccruedInterestAmt(AbstractMessage* message) : StringRef(message, &tags::totalAccruedInterestAmt) {}
};

class MaturityDate : public StringRef {
 public:
  explicit MaturityDate(AbstractMessage* message) : StringRef(message, &tags::maturityDate) {}
};

class UnderlyingMaturityDate : public StringRef {
 public:
  explicit UnderlyingMaturityDate(AbstractMessage* message) : StringRef(message, &tags::underlyingMaturityDate) {}
};

class InstrRegistry : public StringRef {
 public:
  explicit InstrRegistry(AbstractMessage* message) : StringRef(message, &tags::instrRegistry) {}
};

class CashMargin : public StringRef {
 public:
  static constexpr std::string_view CASH = "1";
  static constexpr std::string_view MARGIN_OPEN = "2";
  static constexpr std::string_view MARGIN_CLOSE = "3";

  explicit CashMargin(AbstractMessage* message) : StringRef(message, &tags::cashMargin) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NestedPartySubID : public StringRef {
 public:
  explicit NestedPartySubID(AbstractMessage* message) : StringRef(message, &tags::nestedPartySubID) {}
};

class Scope : public StringRef {
 public:
  static constexpr std::string_view LOCAL = "1";
  static constexpr std::string_view NATIONAL = "2";
  static constexpr std::string_view GLOBAL = "3";

  explicit Scope(AbstractMessage* message) : StringRef(message, &tags::scope) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MDImplicitDelete : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit MDImplicitDelete(AbstractMessage* message) : StringRef(message, &tags::mDImplicitDelete) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class CrossID : public StringRef {
 public:
  explicit CrossID(AbstractMessage* message) : StringRef(message, &tags::crossID) {}
};

class CrossType : public LongRef {
 public:
  static constexpr int64_t CROSS_TRADE_WHICH_IS_EXECUTED_COMPLETELY_OR_NOT_BOTH_SIDES_ARE_TREATED_IN_THE_SAME_MANNER_THIS_IS_EQUIVALENT_TO_AN_ALL_OR_NONE = 1;
  static constexpr int64_t CROSS_TRADE_WHICH_IS_EXECUTED_PARTIALLY_AND_THE_REST_IS_CANCELLED_ONE_SIDE_IS_FULLY_EXECUTED_THE_OTHER_SIDE_IS_PARTIALLY_EXECUTED_WITH_THE_REMAINDER_BEING_CANCELLED_THIS_IS_EQUIVALENT_TO_AN_IMMEDIATE_OR_CANCEL_ON_THE_OTHER_SIDE_NOTE_THE_CROSSPRIORITZATION = 2;
  static constexpr int64_t CROSS_TRADE_WHICH_IS_PARTIALLY_EXECUTED_WITH_THE_UNFILLED_PORTIONS_REMAINING_ACTIVE_ONE_SIDE_OF_THE_CROSS_IS_FULLY_EXECUTED = 3;
  static constexpr int64_t CROSS_TRADE_IS_EXECUTED_WITH_EXISTING_ORDERS_WITH_THE_SAME_PRICE_IN_THE_CASE_OTHER_ORDERS_EXIST_WITH_THE_SAME_PRICE_THE_QUANTITY_OF_THE_CROSS_IS_EXECUTED_AGAINST_THE_EXISTING_ORDERS_AND_QUOTES_THE_REMAINDER_OF_THE_CROSS_IS_EXECUTED_AGAINST_THE_OTHER_SIDE_OF_THE_CROSS_THE_TWO_SIDES_POTENTIALLY_HAVE_DIFFERENT_QUANTITIES = 4;

  explicit CrossType(AbstractMessage* message) : LongRef(message, &tags::crossType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CrossPrioritization : public LongRef {
 public:
  static constexpr int64_t NONE = 0;
  static constexpr int64_t BUY_SIDE_IS_PRIORITIZED = 1;
  static constexpr int64_t SELL_SIDE_IS_PRIORITIZED = 2;

  explicit CrossPrioritization(AbstractMessage* message) : LongRef(message, &tags::crossPrioritization) {}

  static int64_t value(const char* bytes, int valBeg);
};

class OrigCrossID : public StringRef {
 public:
  explicit OrigCrossID(AbstractMessage* message) : StringRef(message, &tags::origCrossID) {}
};

class NoSides : public LongRef {
 public:
  static constexpr int64_t ONE_SIDE = 1;
  static constexpr int64_t BOTH_SIDES = 2;

  explicit NoSides(AbstractMessage* message) : LongRef(message, &tags::noSides) {}

  static int64_t value(const char* bytes, int valBeg);
};

class Username : public StringRef {
 public:
  explicit Username(AbstractMessage* message) : StringRef(message, &tags::username) {}
};

class Password : public StringRef {
 public:
  explicit Password(AbstractMessage* message) : StringRef(message, &tags::password) {}
};

class NoLegs : public LongRef {
 public:
  explicit NoLegs(AbstractMessage* message) : LongRef(message, &tags::noLegs) {}
};

class LegCurrency : public StringRef {
 public:
  explicit LegCurrency(AbstractMessage* message) : StringRef(message, &tags::legCurrency) {}
};

class TotNoSecurityTypes : public LongRef {
 public:
  explicit TotNoSecurityTypes(AbstractMessage* message) : LongRef(message, &tags::totNoSecurityTypes) {}
};

class NoSecurityTypes : public LongRef {
 public:
  explicit NoSecurityTypes(AbstractMessage* message) : LongRef(message, &tags::noSecurityTypes) {}
};

class SecurityListRequestType : public LongRef {
 public:
  static constexpr int64_t SYMBOL = 0;
  static constexpr int64_t SECURITYTYPE_AND_OR_CFICODE = 1;
  static constexpr int64_t PRODUCT = 2;
  static constexpr int64_t TRADINGSESSIONID = 3;
  static constexpr int64_t ALL_SECURITIES = 4;

  explicit SecurityListRequestType(AbstractMessage* message) : LongRef(message, &tags::securityListRequestType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class SecurityRequestResult : public LongRef {
 public:
  static constexpr int64_t VALID_REQUEST = 0;
  static constexpr int64_t INVALID_OR_UNSUPPORTED_REQUEST = 1;
  static constexpr int64_t NO_INSTRUMENTS_FOUND_THAT_MATCH_SELECTION_CRITERIA = 2;
  static constexpr int64_t NOT_AUTHORIZED_TO_RETRIEVE_INSTRUMENT_DATA = 3;
  static constexpr int64_t INSTRUMENT_DATA_TEMPORARILY_UNAVAILABLE = 4;
  static constexpr int64_t REQUEST_FOR_INSTRUMENT_DATA_NOT_SUPPORTED = 5;

  explicit SecurityRequestResult(AbstractMessage* message) : LongRef(message, &tags::securityRequestResult) {}

  static int64_t value(const char* bytes, int valBeg);
};

class RoundLot : public StringRef {
 public:
  explicit RoundLot(AbstractMessage* message) : StringRef(message, &tags::roundLot) {}
};

class MinTradeVol : public StringRef {
 public:
  explicit MinTradeVol(AbstractMessage* message) : StringRef(message, &tags::minTradeVol) {}
};

class MultiLegRptTypeReq : public LongRef {
 public:
  static constexpr int64_t REPORT_BY_MULITLEG_SECURITY_ONLY = 0;
  static constexpr int64_t REPORT_BY_MULTILEG_SECURITY_AND_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY = 1;
  static constexpr int64_t REPORT_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY_ONLY = 2;

  explicit MultiLegRptTypeReq(AbstractMessage* message) : LongRef(message, &tags::multiLegRptTypeReq) {}

  static int64_t value(const char* bytes, int valBeg);
};

class LegPositionEffect : public StringRef {
 public:
  explicit LegPositionEffect(AbstractMessage* message) : StringRef(message, &tags::legPositionEffect) {}
};

class LegCoveredOrUncovered : public LongRef {
 public:
  explicit LegCoveredOrUncovered(AbstractMessage* message) : LongRef(message, &tags::legCoveredOrUncovered) {}
};

class LegPrice : public StringRef {
 public:
  explicit LegPrice(AbstractMessage* message) : StringRef(message, &tags::legPrice) {}
};

class TradSesStatusRejReason : public LongRef {
 public:
  static constexpr int64_t UNKNOWN_OR_INVALID_TRADINGSESSIONID = 1;
  static constexpr int64_t OTHER = 99;

  explicit TradSesStatusRejReason(AbstractMessage* message) : LongRef(message, &tags::tradSesStatusRejReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TradeRequestID : public StringRef {
 public:
  explicit TradeRequestID(AbstractMessage* message) : StringRef(message, &tags::tradeRequestID) {}
};

class TradeRequestType : public LongRef {
 public:
  static constexpr int64_t ALL_TRADES = 0;
  static constexpr int64_t MATCHED_TRADES_MATCHING_CRITERIA_PROVIDED_ON_REQUEST = 1;
  static constexpr int64_t UNMATCHED_TRADES_THAT_MATCH_CRITERIA = 2;
  static constexpr int64_t UNREPORTED_TRADES_THAT_MATCH_CRITERIA = 3;
  static constexpr int64_t ADVISORIES_THAT_MATCH_CRITERIA = 4;

  explicit TradeRequestType(AbstractMessage* message) : LongRef(message, &tags::tradeRequestType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PreviouslyReported : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit PreviouslyReported(AbstractMessage* message) : StringRef(message, &tags::previouslyReported) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class TradeReportID : public StringRef {
 public:
  explicit TradeReportID(AbstractMessage* message) : StringRef(message, &tags::tradeReportID) {}
};

class TradeReportRefID : public StringRef {
 public:
  explicit TradeReportRefID(AbstractMessage* message) : StringRef(message, &tags::tradeReportRefID) {}
};

class MatchStatus : public StringRef {
 public:
  static constexpr std::string_view COMPARED_MATCHED_OR_AFFIRMED = "0";
  static constexpr std::string_view UNCOMPARED_UNMATCHED_OR_UNAFFIRMED = "1";
  static constexpr std::string_view ADVISORY_OR_ALERT = "2";

  explicit MatchStatus(AbstractMessage* message) : StringRef(message, &tags::matchStatus) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class MatchType : public StringRef {
 public:
  static constexpr std::string_view EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES_AND_EXECUTION_TIME = "A1";
  static constexpr std::string_view EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES = "A2";
  static constexpr std::string_view EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES_AND_EXECUTION_TIME = "A3";
  static constexpr std::string_view EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES = "A4";
  static constexpr std::string_view EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_EXECUTION_TIME = "A5";
  static constexpr std::string_view COMPARED_RECORDS_RESULTING_FROM_STAMPED_ADVISORIES_OR_SPECIALIST_ACCEPTS_PAIR_OFFS = "AQ";
  static constexpr std::string_view SUMMARIZED_MATCH_USING_A1_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S1";
  static constexpr std::string_view SUMMARIZED_MATCH_USING_A2_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S2";
  static constexpr std::string_view SUMMARIZED_MATCH_USING_A3_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S3";
  static constexpr std::string_view SUMMARIZED_MATCH_USING_A4_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S4";
  static constexpr std::string_view SUMMARIZED_MATCH_USING_A5_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S5";
  static constexpr std::string_view EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_MINUS_BADGES_AND_TIMES_ACT_M1_MATCH = "M1";
  static constexpr std::string_view SUMMARIZED_MATCH_MINUS_BADGES_AND_TIMES_ACT_M2_MATCH = "M2";
  static constexpr std::string_view OCS_LOCKED_IN_NON_ACT = "MT";
  static constexpr std::string_view ACT_ACCEPTED_TRADE = "M3";
  static constexpr std::string_view ACT_DEFAULT_TRADE = "M4";
  static constexpr std::string_view ACT_DEFAULT_AFTER_M2 = "M5";
  static constexpr std::string_view ACT_M6_MATCH = "M6";

  explicit MatchType(AbstractMessage* message) : StringRef(message, &tags::matchType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class OddLot : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit OddLot(AbstractMessage* message) : StringRef(message, &tags::oddLot) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class NoClearingInstructions : public LongRef {
 public:
  explicit NoClearingInstructions(AbstractMessage* message) : LongRef(message, &tags::noClearingInstructions) {}
};

class ClearingInstruction : public LongRef {
 public:
  static constexpr int64_t PROCESS_NORMALLY = 0;
  static constexpr int64_t EXCLUDE_FROM_ALL_NETTING = 1;
  static constexpr int64_t BILATERAL_NETTING_ONLY = 2;
  static constexpr int64_t EX_CLEARING = 3;
  static constexpr int64_t SPECIAL_TRADE = 4;
  static constexpr int64_t MULTILATERAL_NETTING = 5;
  static constexpr int64_t CLEAR_AGAINST_CENTRAL_COUNTERPARTY = 6;
  static constexpr int64_t EXCLUDE_FROM_CENTRAL_COUNTERPARTY = 7;
  static constexpr int64_t MANUAL_MODE = 8;
  static constexpr int64_t AUTOMATIC_POSTING_MODE = 9;
  static constexpr int64_t AUTOMATIC_GIVE_UP_MODE = 10;
  static constexpr int64_t QUALIFIED_SERVICE_REPRESENTATIVE = 11;
  static constexpr int64_t CUSTOMER_TRADE = 12;
  static constexpr int64_t SELF_CLEARING = 13;

  explicit ClearingInstruction(AbstractMessage* message) : LongRef(message, &tags::clearingInstruction) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TradeInputSource : public StringRef {
 public:
  explicit TradeInputSource(AbstractMessage* message) : StringRef(message, &tags::tradeInputSource) {}
};

class TradeInputDevice : public StringRef {
 public:
  explicit TradeInputDevice(AbstractMessage* message) : StringRef(message, &tags::tradeInputDevice) {}
};

class NoDates : public LongRef {
 public:
  explicit NoDates(AbstractMessage* message) : LongRef(message, &tags::noDates) {}
};

class AccountType : public LongRef {
 public:
  static constexpr int64_t ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS = 1;
  static constexpr int64_t ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS = 2;
  static constexpr int64_t HOUSE_TRADER = 3;
  static constexpr int64_t FLOOR_TRADER = 4;
  static constexpr int64_t ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED = 6;
  static constexpr int64_t ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED = 7;
  static constexpr int64_t JOINT_BACKOFFICE_ACCOUNT = 8;

  explicit AccountType(AbstractMessage* message) : LongRef(message, &tags::accountType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CustOrderCapacity : public LongRef {
 public:
  static constexpr int64_t MEMBER_TRADING_FOR_THEIR_OWN_ACCOUNT = 1;
  static constexpr int64_t CLEARING_FIRM_TRADING_FOR_ITS_PROPRIETARY_ACCOUNT = 2;
  static constexpr int64_t MEMBER_TRADING_FOR_ANOTHER_MEMBER = 3;
  static constexpr int64_t ALL_OTHER = 4;

  explicit CustOrderCapacity(AbstractMessage* message) : LongRef(message, &tags::custOrderCapacity) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ClOrdLinkID : public StringRef {
 public:
  explicit ClOrdLinkID(AbstractMessage* message) : StringRef(message, &tags::clOrdLinkID) {}
};

class MassStatusReqID : public StringRef {
 public:
  explicit MassStatusReqID(AbstractMessage* message) : StringRef(message, &tags::massStatusReqID) {}
};

class MassStatusReqType : public LongRef {
 public:
  static constexpr int64_t STATUS_FOR_ORDERS_FOR_A_SECURITY = 1;
  static constexpr int64_t STATUS_FOR_ORDERS_FOR_AN_UNDERLYING_SECURITY = 2;
  static constexpr int64_t STATUS_FOR_ORDERS_FOR_A_PRODUCT = 3;
  static constexpr int64_t STATUS_FOR_ORDERS_FOR_A_CFICODE = 4;
  static constexpr int64_t STATUS_FOR_ORDERS_FOR_A_SECURITYTYPE = 5;
  static constexpr int64_t STATUS_FOR_ORDERS_FOR_A_TRADING_SESSION = 6;
  static constexpr int64_t STATUS_FOR_ALL_ORDERS = 7;
  static constexpr int64_t STATUS_FOR_ORDERS_FOR_A_PARTYID = 8;

  explicit MassStatusReqType(AbstractMessage* message) : LongRef(message, &tags::massStatusReqType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class OrigOrdModTime : public StringRef {
 public:
  explicit OrigOrdModTime(AbstractMessage* message) : StringRef(message, &tags::origOrdModTime) {}
};

class LegSettlType : public StringRef {
 public:
  explicit LegSettlType(AbstractMessage* message) : StringRef(message, &tags::legSettlType) {}
};

class LegSettlDate : public StringRef {
 public:
  explicit LegSettlDate(AbstractMessage* message) : StringRef(message, &tags::legSettlDate) {}
};

class DayBookingInst : public StringRef {
 public:
  static constexpr std::string_view CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR = "0";
  static constexpr std::string_view SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING = "1";
  static constexpr std::string_view ACCUMULATE = "2";

  explicit DayBookingInst(AbstractMessage* message) : StringRef(message, &tags::dayBookingInst) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class BookingUnit : public StringRef {
 public:
  static constexpr std::string_view EACH_PARTIAL_EXECUTION_IS_A_BOOKABLE_UNIT = "0";
  static constexpr std::string_view AGGREGATE_PARTIAL_EXECUTIONS_ON_THIS_ORDER_AND_BOOK_ONE_TRADE_PER_ORDER = "1";
  static constexpr std::string_view AGGREGATE_EXECUTIONS_FOR_THIS_SYMBOL_SIDE_AND_SETTLEMENT_DATE = "2";

  explicit BookingUnit(AbstractMessage* message) : StringRef(message, &tags::bookingUnit) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class PreallocMethod : public StringRef {
 public:
  static constexpr std::string_view PRO_RATA = "0";
  static constexpr std::string_view DO_NOT_PRO_RATA_DISCUSS_FIRST = "1";

  explicit PreallocMethod(AbstractMessage* message) : StringRef(message, &tags::preallocMethod) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class UnderlyingCountryOfIssue : public StringRef {
 public:
  explicit UnderlyingCountryOfIssue(AbstractMessage* message) : StringRef(message, &tags::underlyingCountryOfIssue) {}
};

class UnderlyingStateOrProvinceOfIssue : public StringRef {
 public:
  explicit UnderlyingStateOrProvinceOfIssue(AbstractMessage* message) : StringRef(message, &tags::underlyingStateOrProvinceOfIssue) {}
};

class UnderlyingLocaleOfIssue : public StringRef {
 public:
  explicit UnderlyingLocaleOfIssue(AbstractMessage* message) : StringRef(message, &tags::underlyingLocaleOfIssue) {}
};

class UnderlyingInstrRegistry : public StringRef {
 public:
  explicit UnderlyingInstrRegistry(AbstractMessage* message) : StringRef(message, &tags::underlyingInstrRegistry) {}
};

class LegCountryOfIssue : public StringRef {
 public:
  explicit LegCountryOfIssue(AbstractMessage* message) : StringRef(message, &tags::legCountryOfIssue) {}
};

class LegStateOrProvinceOfIssue : public StringRef {
 public:
  explicit LegStateOrProvinceOfIssue(AbstractMessage* message) : StringRef(message, &tags::legStateOrProvinceOfIssue) {}
};

class LegLocaleOfIssue : public StringRef {
 public:
  explicit LegLocaleOfIssue(AbstractMessage* message) : StringRef(message, &tags::legLocaleOfIssue) {}
};

class LegInstrRegistry : public StringRef {
 public:
  explicit LegInstrRegistry(AbstractMessage* message) : StringRef(message, &tags::legInstrRegistry) {}
};

class LegSymbol : public StringRef {
 public:
  explicit LegSymbol(AbstractMessage* message) : StringRef(message, &tags::legSymbol) {}
};

class LegSymbolSfx : public StringRef {
 public:
  explicit LegSymbolSfx(AbstractMessage* message) : StringRef(message, &tags::legSymbolSfx) {}
};

class LegSecurityID : public StringRef {
 public:
  explicit LegSecurityID(AbstractMessage* message) : StringRef(message, &tags::legSecurityID) {}
};

class LegSecurityIDSource : public StringRef {
 public:
  explicit LegSecurityIDSource(AbstractMessage* message) : StringRef(message, &tags::legSecurityIDSource) {}
};

class NoLegSecurityAltID : public LongRef {
 public:
  explicit NoLegSecurityAltID(AbstractMessage* message) : LongRef(message, &tags::noLegSecurityAltID) {}
};

class LegSecurityAltID : public StringRef {
 public:
  explicit LegSecurityAltID(AbstractMessage* message) : StringRef(message, &tags::legSecurityAltID) {}
};

class LegSecurityAltIDSource : public StringRef {
 public:
  explicit LegSecurityAltIDSource(AbstractMessage* message) : StringRef(message, &tags::legSecurityAltIDSource) {}
};

class LegProduct : public LongRef {
 public:
  explicit LegProduct(AbstractMessage* message) : LongRef(message, &tags::legProduct) {}
};

class LegCFICode : public StringRef {
 public:
  explicit LegCFICode(AbstractMessage* message) : StringRef(message, &tags::legCFICode) {}
};

class LegSecurityType : public StringRef {
 public:
  explicit LegSecurityType(AbstractMessage* message) : StringRef(message, &tags::legSecurityType) {}
};

class LegMaturityMonthYear : public StringRef {
 public:
  explicit LegMaturityMonthYear(AbstractMessage* message) : StringRef(message, &tags::legMaturityMonthYear) {}
};

class LegMaturityDate : public StringRef {
 public:
  explicit LegMaturityDate(AbstractMessage* message) : StringRef(message, &tags::legMaturityDate) {}
};

class LegStrikePrice : public StringRef {
 public:
  explicit LegStrikePrice(AbstractMessage* message) : StringRef(message, &tags::legStrikePrice) {}
};

class LegOptAttribute : public StringRef {
 public:
  explicit LegOptAttribute(AbstractMessage* message) : StringRef(message, &tags::legOptAttribute) {}
};

class LegContractMultiplier : public DoubleRef {
 public:
  explicit LegContractMultiplier(AbstractMessage* message) : DoubleRef(message, &tags::legContractMultiplier) {}
};

class LegCouponRate : public StringRef {
 public:
  explicit LegCouponRate(AbstractMessage* message) : StringRef(message, &tags::legCouponRate) {}
};

class LegSecurityExchange : public StringRef {
 public:
  explicit LegSecurityExchange(AbstractMessage* message) : StringRef(message, &tags::legSecurityExchange) {}
};

class LegIssuer : public StringRef {
 public:
  explicit LegIssuer(AbstractMessage* message) : StringRef(message, &tags::legIssuer) {}
};

class EncodedLegIssuerLen : public LongRef {
 public:
  explicit EncodedLegIssuerLen(AbstractMessage* message) : LongRef(message, &tags::encodedLegIssuerLen) {}
};

class EncodedLegIssuer : public StringRef {
 public:
  explicit EncodedLegIssuer(AbstractMessage* message) : StringRef(message, &tags::encodedLegIssuer) {}
};

class LegSecurityDesc : public StringRef {
 public:
  explicit LegSecurityDesc(AbstractMessage* message) : StringRef(message, &tags::legSecurityDesc) {}
};

class EncodedLegSecurityDescLen : public LongRef {
 public:
  explicit EncodedLegSecurityDescLen(AbstractMessage* message) : LongRef(message, &tags::encodedLegSecurityDescLen) {}
};

class EncodedLegSecurityDesc : public StringRef {
 public:
  explicit EncodedLegSecurityDesc(AbstractMessage* message) : StringRef(message, &tags::encodedLegSecurityDesc) {}
};

class LegRatioQty : public DoubleRef {
 public:
  explicit LegRatioQty(AbstractMessage* message) : DoubleRef(message, &tags::legRatioQty) {}
};

class LegSide : public StringRef {
 public:
  explicit LegSide(AbstractMessage* message) : StringRef(message, &tags::legSide) {}
};

class TradingSessionSubID : public StringRef {
 public:
  explicit TradingSessionSubID(AbstractMessage* message) : StringRef(message, &tags::tradingSessionSubID) {}
};

class AllocType : public LongRef {
 public:
  static constexpr int64_t CALCULATED = 1;
  static constexpr int64_t PRELIMINARY = 2;
  static constexpr int64_t READY_TO_BOOK = 5;
  static constexpr int64_t WAREHOUSE_INSTRUCTION = 7;
  static constexpr int64_t REQUEST_TO_INTERMEDIARY = 8;

  explicit AllocType(AbstractMessage* message) : LongRef(message, &tags::allocType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NoHops : public LongRef {
 public:
  explicit NoHops(AbstractMessage* message) : LongRef(message, &tags::noHops) {}
};

class HopCompID : public StringRef {
 public:
  explicit HopCompID(AbstractMessage* message) : StringRef(message, &tags::hopCompID) {}
};

class HopSendingTime : public StringRef {
 public:
  explicit HopSendingTime(AbstractMessage* message) : StringRef(message, &tags::hopSendingTime) {}
};

class HopRefID : public StringRef {
 public:
  explicit HopRefID(AbstractMessage* message) : StringRef(message, &tags::hopRefID) {}
};

class MidPx : public StringRef {
 public:
  explicit MidPx(AbstractMessage* message) : StringRef(message, &tags::midPx) {}
};

class BidYield : public StringRef {
 public:
  explicit BidYield(AbstractMessage* message) : StringRef(message, &tags::bidYield) {}
};

class MidYield : public StringRef {
 public:
  explicit MidYield(AbstractMessage* message) : StringRef(message, &tags::midYield) {}
};

class OfferYield : public StringRef {
 public:
  explicit OfferYield(AbstractMessage* message) : StringRef(message, &tags::offerYield) {}
};

class ClearingFeeIndicator : public StringRef {
 public:
  static constexpr std::string_view CBOE_MEMBER = "B";
  static constexpr std::string_view NON_MEMBER_AND_CUSTOMER = "C";
  static constexpr std::string_view EQUITY_MEMBER_AND_CLEARING_MEMBER = "E";
  static constexpr std::string_view FULL_AND_ASSOCIATE_MEMBER_TRADING_FOR_OWN_ACCOUNT_AND_AS_FLOOR_BROKERS = "F";
  static constexpr std::string_view _106H_AND_106J_FIRMS = "H";
  static constexpr std::string_view GIM_IDEM_AND_COM_MEMBERSHIP_INTEREST_HOLDERS = "I";
  static constexpr std::string_view LESSEE_AND_106F_EMPLOYEES = "L";
  static constexpr std::string_view ALL_OTHER_OWNERSHIP_TYPES = "M";
  static constexpr std::string_view _1ST_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "1";
  static constexpr std::string_view _2ND_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "2";
  static constexpr std::string_view _3RD_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "3";
  static constexpr std::string_view _4TH_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "4";
  static constexpr std::string_view _5TH_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "5";
  static constexpr std::string_view _6TH_YEAR_AND_BEYOND_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "9";

  explicit ClearingFeeIndicator(AbstractMessage* message) : StringRef(message, &tags::clearingFeeIndicator) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class WorkingIndicator : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit WorkingIndicator(AbstractMessage* message) : StringRef(message, &tags::workingIndicator) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class LegLastPx : public StringRef {
 public:
  explicit LegLastPx(AbstractMessage* message) : StringRef(message, &tags::legLastPx) {}
};

class PriorityIndicator : public LongRef {
 public:
  static constexpr int64_t PRIORITY_UNCHANGED = 0;
  static constexpr int64_t LOST_PRIORITY_AS_RESULT_OF_ORDER_CHANGE = 1;

  explicit PriorityIndicator(AbstractMessage* message) : LongRef(message, &tags::priorityIndicator) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PriceImprovement : public StringRef {
 public:
  explicit PriceImprovement(AbstractMessage* message) : StringRef(message, &tags::priceImprovement) {}
};

class Price2 : public StringRef {
 public:
  explicit Price2(AbstractMessage* message) : StringRef(message, &tags::price2) {}
};

class LastForwardPoints2 : public StringRef {
 public:
  explicit LastForwardPoints2(AbstractMessage* message) : StringRef(message, &tags::lastForwardPoints2) {}
};

class BidForwardPoints2 : public StringRef {
 public:
  explicit BidForwardPoints2(AbstractMessage* message) : StringRef(message, &tags::bidForwardPoints2) {}
};

class OfferForwardPoints2 : public StringRef {
 public:
  explicit OfferForwardPoints2(AbstractMessage* message) : StringRef(message, &tags::offerForwardPoints2) {}
};

class RFQReqID : public StringRef {
 public:
  explicit RFQReqID(AbstractMessage* message) : StringRef(message, &tags::rFQReqID) {}
};

class MktBidPx : public StringRef {
 public:
  explicit MktBidPx(AbstractMessage* message) : StringRef(message, &tags::mktBidPx) {}
};

class MktOfferPx : public StringRef {
 public:
  explicit MktOfferPx(AbstractMessage* message) : StringRef(message, &tags::mktOfferPx) {}
};

class MinBidSize : public StringRef {
 public:
  explicit MinBidSize(AbstractMessage* message) : StringRef(message, &tags::minBidSize) {}
};

class MinOfferSize : public StringRef {
 public:
  explicit MinOfferSize(AbstractMessage* message) : StringRef(message, &tags::minOfferSize) {}
};

class QuoteStatusReqID : public StringRef {
 public:
  explicit QuoteStatusReqID(AbstractMessage* message) : StringRef(message, &tags::quoteStatusReqID) {}
};

class LegalConfirm : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit LegalConfirm(AbstractMessage* message) : StringRef(message, &tags::legalConfirm) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class UnderlyingLastPx : public StringRef {
 public:
  explicit UnderlyingLastPx(AbstractMessage* message) : StringRef(message, &tags::underlyingLastPx) {}
};

class UnderlyingLastQty : public StringRef {
 public:
  explicit UnderlyingLastQty(AbstractMessage* message) : StringRef(message, &tags::underlyingLastQty) {}
};

class LegRefID : public StringRef {
 public:
  explicit LegRefID(AbstractMessage* message) : StringRef(message, &tags::legRefID) {}
};

class ContraLegRefID : public StringRef {
 public:
  explicit ContraLegRefID(AbstractMessage* message) : StringRef(message, &tags::contraLegRefID) {}
};

class SettlCurrBidFxRate : public DoubleRef {
 public:
  explicit SettlCurrBidFxRate(AbstractMessage* message) : DoubleRef(message, &tags::settlCurrBidFxRate) {}
};

class SettlCurrOfferFxRate : public DoubleRef {
 public:
  explicit SettlCurrOfferFxRate(AbstractMessage* message) : DoubleRef(message, &tags::settlCurrOfferFxRate) {}
};

class QuoteRequestRejectReason : public LongRef {
 public:
  static constexpr int64_t UNKNOWN_SYMBOL = 1;
  static constexpr int64_t EXCHANGE = 2;
  static constexpr int64_t QUOTE_REQUEST_EXCEEDS_LIMIT = 3;
  static constexpr int64_t TOO_LATE_TO_ENTER = 4;
  static constexpr int64_t INVALID_PRICE = 5;
  static constexpr int64_t NOT_AUTHORIZED_TO_REQUEST_QUOTE = 6;
  static constexpr int64_t NO_MATCH_FOR_INQUIRY = 7;
  static constexpr int64_t NO_MARKET_FOR_INSTRUMENT = 8;
  static constexpr int64_t NO_INVENTORY = 9;
  static constexpr int64_t PASS = 10;
  static constexpr int64_t OTHER = 99;

  explicit QuoteRequestRejectReason(AbstractMessage* message) : LongRef(message, &tags::quoteRequestRejectReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class SideComplianceID : public StringRef {
 public:
  explicit SideComplianceID(AbstractMessage* message) : StringRef(message, &tags::sideComplianceID) {}
};

class AcctIDSource : public LongRef {
 public:
  static constexpr int64_t BIC = 1;
  static constexpr int64_t SID_CODE = 2;
  static constexpr int64_t TFM = 3;
  static constexpr int64_t OMGEO = 4;
  static constexpr int64_t DTCC_CODE = 5;
  static constexpr int64_t OTHER = 99;

  explicit AcctIDSource(AbstractMessage* message) : LongRef(message, &tags::acctIDSource) {}

  static int64_t value(const char* bytes, int valBeg);
};

class AllocAcctIDSource : public LongRef {
 public:
  explicit AllocAcctIDSource(AbstractMessage* message) : LongRef(message, &tags::allocAcctIDSource) {}
};

class BenchmarkPrice : public StringRef {
 public:
  explicit BenchmarkPrice(AbstractMessage* message) : StringRef(message, &tags::benchmarkPrice) {}
};

class BenchmarkPriceType : public LongRef {
 public:
  explicit BenchmarkPriceType(AbstractMessage* message) : LongRef(message, &tags::benchmarkPriceType) {}
};

class ConfirmID : public StringRef {
 public:
  explicit ConfirmID(AbstractMessage* message) : StringRef(message, &tags::confirmID) {}
};

class ConfirmStatus : public LongRef {
 public:
  static constexpr int64_t RECEIVED = 1;
  static constexpr int64_t MISMATCHED_ACCOUNT = 2;
  static constexpr int64_t MISSING_SETTLEMENT_INSTRUCTIONS = 3;
  static constexpr int64_t CONFIRMED = 4;
  static constexpr int64_t REQUEST_REJECTED = 5;

  explicit ConfirmStatus(AbstractMessage* message) : LongRef(message, &tags::confirmStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ConfirmTransType : public LongRef {
 public:
  static constexpr int64_t NEW = 0;
  static constexpr int64_t REPLACE = 1;
  static constexpr int64_t CANCEL = 2;

  explicit ConfirmTransType(AbstractMessage* message) : LongRef(message, &tags::confirmTransType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ContractSettlMonth : public StringRef {
 public:
  explicit ContractSettlMonth(AbstractMessage* message) : StringRef(message, &tags::contractSettlMonth) {}
};

class DeliveryForm : public LongRef {
 public:
  static constexpr int64_t BOOKENTRY = 1;
  static constexpr int64_t BEARER = 2;

  explicit DeliveryForm(AbstractMessage* message) : LongRef(message, &tags::deliveryForm) {}

  static int64_t value(const char* bytes, int valBeg);
};

class LastParPx : public StringRef {
 public:
  explicit LastParPx(AbstractMessage* message) : StringRef(message, &tags::lastParPx) {}
};

class NoLegAllocs : public LongRef {
 public:
  explicit NoLegAllocs(AbstractMessage* message) : LongRef(message, &tags::noLegAllocs) {}
};

class LegAllocAccount : public StringRef {
 public:
  explicit LegAllocAccount(AbstractMessage* message) : StringRef(message, &tags::legAllocAccount) {}
};

class LegIndividualAllocID : public StringRef {
 public:
  explicit LegIndividualAllocID(AbstractMessage* message) : StringRef(message, &tags::legIndividualAllocID) {}
};

class LegAllocQty : public StringRef {
 public:
  explicit LegAllocQty(AbstractMessage* message) : StringRef(message, &tags::legAllocQty) {}
};

class LegAllocAcctIDSource : public StringRef {
 public:
  explicit LegAllocAcctIDSource(AbstractMessage* message) : StringRef(message, &tags::legAllocAcctIDSource) {}
};

class LegSettlCurrency : public StringRef {
 public:
  explicit LegSettlCurrency(AbstractMessage* message) : StringRef(message, &tags::legSettlCurrency) {}
};

class LegBenchmarkCurveCurrency : public StringRef {
 public:
  explicit LegBenchmarkCurveCurrency(AbstractMessage* message) : StringRef(message, &tags::legBenchmarkCurveCurrency) {}
};

class LegBenchmarkCurveName : public StringRef {
 public:
  explicit LegBenchmarkCurveName(AbstractMessage* message) : StringRef(message, &tags::legBenchmarkCurveName) {}
};

class LegBenchmarkCurvePoint : public StringRef {
 public:
  explicit LegBenchmarkCurvePoint(AbstractMessage* message) : StringRef(message, &tags::legBenchmarkCurvePoint) {}
};

class LegBenchmarkPrice : public StringRef {
 public:
  explicit LegBenchmarkPrice(AbstractMessage* message) : StringRef(message, &tags::legBenchmarkPrice) {}
};

class LegBenchmarkPriceType : public LongRef {
 public:
  explicit LegBenchmarkPriceType(AbstractMessage* message) : LongRef(message, &tags::legBenchmarkPriceType) {}
};

class LegBidPx : public StringRef {
 public:
  explicit LegBidPx(AbstractMessage* message) : StringRef(message, &tags::legBidPx) {}
};

class LegIOIQty : public StringRef {
 public:
  explicit LegIOIQty(AbstractMessage* message) : StringRef(message, &tags::legIOIQty) {}
};

class NoLegStipulations : public LongRef {
 public:
  explicit NoLegStipulations(AbstractMessage* message) : LongRef(message, &tags::noLegStipulations) {}
};

class LegOfferPx : public StringRef {
 public:
  explicit LegOfferPx(AbstractMessage* message) : StringRef(message, &tags::legOfferPx) {}
};

class LegPriceType : public LongRef {
 public:
  explicit LegPriceType(AbstractMessage* message) : LongRef(message, &tags::legPriceType) {}
};

class LegQty : public StringRef {
 public:
  explicit LegQty(AbstractMessage* message) : StringRef(message, &tags::legQty) {}
};

class LegStipulationType : public StringRef {
 public:
  explicit LegStipulationType(AbstractMessage* message) : StringRef(message, &tags::legStipulationType) {}
};

class LegStipulationValue : public StringRef {
 public:
  explicit LegStipulationValue(AbstractMessage* message) : StringRef(message, &tags::legStipulationValue) {}
};

class LegSwapType : public LongRef {
 public:
  static constexpr int64_t PAR_FOR_PAR = 1;
  static constexpr int64_t MODIFIED_DURATION = 2;
  static constexpr int64_t RISK = 4;
  static constexpr int64_t PROCEEDS = 5;

  explicit LegSwapType(AbstractMessage* message) : LongRef(message, &tags::legSwapType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class Pool : public StringRef {
 public:
  explicit Pool(AbstractMessage* message) : StringRef(message, &tags::pool) {}
};

class QuotePriceType : public LongRef {
 public:
  static constexpr int64_t PERCENT = 1;
  static constexpr int64_t PER_SHARE = 2;
  static constexpr int64_t FIXED_AMOUNT = 3;
  static constexpr int64_t DISCOUNT_PERCENTAGE_POINTS_BELOW_PAR = 4;
  static constexpr int64_t PREMIUM_PERCENTAGE_POINTS_OVER_PAR = 5;
  static constexpr int64_t BASIS_POINTS_RELATIVE_TO_BENCHMARK = 6;
  static constexpr int64_t TED_PRICE = 7;
  static constexpr int64_t TED_YIELD = 8;
  static constexpr int64_t YIELD_SPREAD = 9;
  static constexpr int64_t YIELD = 10;

  explicit QuotePriceType(AbstractMessage* message) : LongRef(message, &tags::quotePriceType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class QuoteRespID : public StringRef {
 public:
  explicit QuoteRespID(AbstractMessage* message) : StringRef(message, &tags::quoteRespID) {}
};

class QuoteRespType : public LongRef {
 public:
  static constexpr int64_t HIT_LIFT = 1;
  static constexpr int64_t COUNTER = 2;
  static constexpr int64_t EXPIRED = 3;
  static constexpr int64_t COVER = 4;
  static constexpr int64_t DONE_AWAY = 5;
  static constexpr int64_t PASS = 6;

  explicit QuoteRespType(AbstractMessage* message) : LongRef(message, &tags::quoteRespType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class QuoteQualifier : public StringRef {
 public:
  explicit QuoteQualifier(AbstractMessage* message) : StringRef(message, &tags::quoteQualifier) {}
};

class YieldRedemptionDate : public StringRef {
 public:
  explicit YieldRedemptionDate(AbstractMessage* message) : StringRef(message, &tags::yieldRedemptionDate) {}
};

class YieldRedemptionPrice : public StringRef {
 public:
  explicit YieldRedemptionPrice(AbstractMessage* message) : StringRef(message, &tags::yieldRedemptionPrice) {}
};

class YieldRedemptionPriceType : public LongRef {
 public:
  explicit YieldRedemptionPriceType(AbstractMessage* message) : LongRef(message, &tags::yieldRedemptionPriceType) {}
};

class BenchmarkSecurityID : public StringRef {
 public:
  explicit BenchmarkSecurityID(AbstractMessage* message) : StringRef(message, &tags::benchmarkSecurityID) {}
};

class ReversalIndicator : public StringRef {
 public:
  explicit ReversalIndicator(AbstractMessage* message) : StringRef(message, &tags::reversalIndicator) {}
};

class YieldCalcDate : public StringRef {
 public:
  explicit YieldCalcDate(AbstractMessage* message) : StringRef(message, &tags::yieldCalcDate) {}
};

class NoPositions : public LongRef {
 public:
  explicit NoPositions(AbstractMessage* message) : LongRef(message, &tags::noPositions) {}
};

class PosType : public StringRef {
 public:
  static constexpr std::string_view TRANSACTION_QUANTITY = "TQ";
  static constexpr std::string_view INTRA_SPREAD_QTY = "IAS";
  static constexpr std::string_view INTER_SPREAD_QTY = "IES";
  static constexpr std::string_view END_OF_DAY_QTY = "FIN";
  static constexpr std::string_view START_OF_DAY_QTY = "SOD";
  static constexpr std::string_view OPTION_EXERCISE_QTY = "EX";
  static constexpr std::string_view OPTION_ASSIGNMENT = "AS";
  static constexpr std::string_view TRANSACTION_FROM_EXERCISE = "TX";
  static constexpr std::string_view TRANSACTION_FROM_ASSIGNMENT = "TA";
  static constexpr std::string_view PIT_TRADE_QTY = "PIT";
  static constexpr std::string_view TRANSFER_TRADE_QTY = "TRF";
  static constexpr std::string_view ELECTRONIC_TRADE_QTY = "ETR";
  static constexpr std::string_view ALLOCATION_TRADE_QTY = "ALC";
  static constexpr std::string_view ADJUSTMENT_QTY = "PA";
  static constexpr std::string_view AS_OF_TRADE_QTY = "ASF";
  static constexpr std::string_view DELIVERY_QTY = "DLV";
  static constexpr std::string_view TOTAL_TRANSACTION_QTY = "TOT";
  static constexpr std::string_view CROSS_MARGIN_QTY = "XM";
  static constexpr std::string_view INTEGRAL_SPLIT = "SPL";

  explicit PosType(AbstractMessage* message) : StringRef(message, &tags::posType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class LongQty : public StringRef {
 public:
  explicit LongQty(AbstractMessage* message) : StringRef(message, &tags::longQty) {}
};

class ShortQty : public StringRef {
 public:
  explicit ShortQty(AbstractMessage* message) : StringRef(message, &tags::shortQty) {}
};

class PosQtyStatus : public LongRef {
 public:
  static constexpr int64_t SUBMITTED = 0;
  static constexpr int64_t ACCEPTED = 1;
  static constexpr int64_t REJECTED = 2;

  explicit PosQtyStatus(AbstractMessage* message) : LongRef(message, &tags::posQtyStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PosAmtType : public StringRef {
 public:
  static constexpr std::string_view FINAL_MARK_TO_MARKET_AMOUNT = "FMTM";
  static constexpr std::string_view INCREMENTAL_MARK_TO_MARKET_AMOUNT = "IMTM";
  static constexpr std::string_view TRADE_VARIATION_AMOUNT = "TVAR";
  static constexpr std::string_view START_OF_DAY_MARK_TO_MARKET_AMOUNT = "SMTM";
  static constexpr std::string_view PREMIUM_AMOUNT = "PREM";
  static constexpr std::string_view CASH_RESIDUAL_AMOUNT = "CRES";
  static constexpr std::string_view CASH_AMOUNT = "CASH";
  static constexpr std::string_view VALUE_ADJUSTED_AMOUNT = "VADJ";

  explicit PosAmtType(AbstractMessage* message) : StringRef(message, &tags::posAmtType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class PosAmt : public StringRef {
 public:
  explicit PosAmt(AbstractMessage* message) : StringRef(message, &tags::posAmt) {}
};

class PosTransType : public LongRef {
 public:
  static constexpr int64_t EXERCISE = 1;
  static constexpr int64_t DO_NOT_EXERCISE = 2;
  static constexpr int64_t POSITION_ADJUSTMENT = 3;
  static constexpr int64_t POSITION_CHANGE_SUBMISSION_MARGIN_DISPOSITION = 4;
  static constexpr int64_t PLEDGE = 5;

  explicit PosTransType(AbstractMessage* message) : LongRef(message, &tags::posTransType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PosReqID : public StringRef {
 public:
  explicit PosReqID(AbstractMessage* message) : StringRef(message, &tags::posReqID) {}
};

class NoUnderlyings : public LongRef {
 public:
  explicit NoUnderlyings(AbstractMessage* message) : LongRef(message, &tags::noUnderlyings) {}
};

class PosMaintAction : public LongRef {
 public:
  static constexpr int64_t NEW_USED_TO_INCREMENT_THE_OVERALL_TRANSACTION_QUANTITY = 1;
  static constexpr int64_t REPLACE_USED_TO_OVERRIDE_THE_OVERALL_TRANSACTION_QUANTITY_OR_SPECIFIC_ADD_MESSAGES_BASED_ON_THE_REFERENCE_ID = 2;
  static constexpr int64_t CANCEL_USED_TO_REMOVE_THE_OVERALL_TRANSACTION_OR_SPECIFIC_ADD_MESSAGES_BASED_ON_REFERENCE_ID = 3;

  explicit PosMaintAction(AbstractMessage* message) : LongRef(message, &tags::posMaintAction) {}

  static int64_t value(const char* bytes, int valBeg);
};

class OrigPosReqRefID : public StringRef {
 public:
  explicit OrigPosReqRefID(AbstractMessage* message) : StringRef(message, &tags::origPosReqRefID) {}
};

class PosMaintRptRefID : public StringRef {
 public:
  explicit PosMaintRptRefID(AbstractMessage* message) : StringRef(message, &tags::posMaintRptRefID) {}
};

class ClearingBusinessDate : public StringRef {
 public:
  explicit ClearingBusinessDate(AbstractMessage* message) : StringRef(message, &tags::clearingBusinessDate) {}
};

class SettlSessID : public StringRef {
 public:
  static constexpr std::string_view INTRADAY = "ITD";
  static constexpr std::string_view REGULAR_TRADING_HOURS = "RTH";
  static constexpr std::string_view ELECTRONIC_TRADING_HOURS = "ETH";

  explicit SettlSessID(AbstractMessage* message) : StringRef(message, &tags::settlSessID) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class SettlSessSubID : public StringRef {
 public:
  explicit SettlSessSubID(AbstractMessage* message) : StringRef(message, &tags::settlSessSubID) {}
};

class AdjustmentType : public LongRef {
 public:
  static constexpr int64_t PROCESS_REQUEST_AS_MARGIN_DISPOSITION = 0;
  static constexpr int64_t DELTA_PLUS = 1;
  static constexpr int64_t DELTA_MINUS = 2;
  static constexpr int64_t FINAL = 3;

  explicit AdjustmentType(AbstractMessage* message) : LongRef(message, &tags::adjustmentType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ContraryInstructionIndicator : public StringRef {
 public:
  explicit ContraryInstructionIndicator(AbstractMessage* message) : StringRef(message, &tags::contraryInstructionIndicator) {}
};

class PriorSpreadIndicator : public StringRef {
 public:
  explicit PriorSpreadIndicator(AbstractMessage* message) : StringRef(message, &tags::priorSpreadIndicator) {}
};

class PosMaintRptID : public StringRef {
 public:
  explicit PosMaintRptID(AbstractMessage* message) : StringRef(message, &tags::posMaintRptID) {}
};

class PosMaintStatus : public LongRef {
 public:
  static constexpr int64_t ACCEPTED = 0;
  static constexpr int64_t ACCEPTED_WITH_WARNINGS = 1;
  static constexpr int64_t REJECTED = 2;
  static constexpr int64_t COMPLETED = 3;
  static constexpr int64_t COMPLETED_WITH_WARNINGS = 4;

  explicit PosMaintStatus(AbstractMessage* message) : LongRef(message, &tags::posMaintStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PosMaintResult : public LongRef {
 public:
  static constexpr int64_t SUCCESSFUL_COMPLETION = 0;
  static constexpr int64_t REJECTED = 1;
  static constexpr int64_t OTHER = 99;

  explicit PosMaintResult(AbstractMessage* message) : LongRef(message, &tags::posMaintResult) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PosReqType : public LongRef {
 public:
  static constexpr int64_t POSITIONS = 0;
  static constexpr int64_t TRADES = 1;
  static constexpr int64_t EXERCISES = 2;
  static constexpr int64_t ASSIGNMENTS = 3;

  explicit PosReqType(AbstractMessage* message) : LongRef(message, &tags::posReqType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ResponseTransportType : public LongRef {
 public:
  static constexpr int64_t INBAND_TRANSPORT_THE_REQUEST_WAS_SENT_OVER = 0;
  static constexpr int64_t OUT_OF_BAND_PRE_ARRANGED_OUT_OF_BAND_DELIVERY_MECHANISM = 1;

  explicit ResponseTransportType(AbstractMessage* message) : LongRef(message, &tags::responseTransportType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ResponseDestination : public StringRef {
 public:
  explicit ResponseDestination(AbstractMessage* message) : StringRef(message, &tags::responseDestination) {}
};

class TotalNumPosReports : public LongRef {
 public:
  explicit TotalNumPosReports(AbstractMessage* message) : LongRef(message, &tags::totalNumPosReports) {}
};

class PosReqResult : public LongRef {
 public:
  static constexpr int64_t VALID_REQUEST = 0;
  static constexpr int64_t INVALID_OR_UNSUPPORTED_REQUEST = 1;
  static constexpr int64_t NO_POSITIONS_FOUND_THAT_MATCH_CRITERIA = 2;
  static constexpr int64_t NOT_AUTHORIZED_TO_REQUEST_POSITIONS = 3;
  static constexpr int64_t REQUEST_FOR_POSITION_NOT_SUPPORTED = 4;
  static constexpr int64_t OTHER = 99;

  explicit PosReqResult(AbstractMessage* message) : LongRef(message, &tags::posReqResult) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PosReqStatus : public LongRef {
 public:
  static constexpr int64_t COMPLETED = 0;
  static constexpr int64_t COMPLETED_WITH_WARNINGS = 1;
  static constexpr int64_t REJECTED = 2;

  explicit PosReqStatus(AbstractMessage* message) : LongRef(message, &tags::posReqStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class SettlPrice : public StringRef {
 public:
  explicit SettlPrice(AbstractMessage* message) : StringRef(message, &tags::settlPrice) {}
};

class SettlPriceType : public LongRef {
 public:
  static constexpr int64_t FINAL = 1;
  static constexpr int64_t THEORETICAL = 2;

  explicit SettlPriceType(AbstractMessage* message) : LongRef(message, &tags::settlPriceType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class UnderlyingSettlPrice : public StringRef {
 public:
  explicit UnderlyingSettlPrice(AbstractMessage* message) : StringRef(message, &tags::underlyingSettlPrice) {}
};

class UnderlyingSettlPriceType : public LongRef {
 public:
  explicit UnderlyingSettlPriceType(AbstractMessage* message) : LongRef(message, &tags::underlyingSettlPriceType) {}
};

class PriorSettlPrice : public StringRef {
 public:
  explicit PriorSettlPrice(AbstractMessage* message) : StringRef(message, &tags::priorSettlPrice) {}
};

class NoQuoteQualifiers : public LongRef {
 public:
  explicit NoQuoteQualifiers(AbstractMessage* message) : LongRef(message, &tags::noQuoteQualifiers) {}
};

class AllocSettlCurrency : public StringRef {
 public:
  explicit AllocSettlCurrency(AbstractMessage* message) : StringRef(message, &tags::allocSettlCurrency) {}
};

class AllocSettlCurrAmt : public StringRef {
 public:
  explicit AllocSettlCurrAmt(AbstractMessage* message) : StringRef(message, &tags::allocSettlCurrAmt) {}
};

class InterestAtMaturity : public StringRef {
 public:
  explicit InterestAtMaturity(AbstractMessage* message) : StringRef(message, &tags::interestAtMaturity) {}
};

class LegDatedDate : public StringRef {
 public:
  explicit LegDatedDate(AbstractMessage* message) : StringRef(message, &tags::legDatedDate) {}
};

class LegPool : public StringRef {
 public:
  explicit LegPool(AbstractMessage* message) : StringRef(message, &tags::legPool) {}
};

class AllocInterestAtMaturity : public StringRef {
 public:
  explicit AllocInterestAtMaturity(AbstractMessage* message) : StringRef(message, &tags::allocInterestAtMaturity) {}
};

class AllocAccruedInterestAmt : public StringRef {
 public:
  explicit AllocAccruedInterestAmt(AbstractMessage* message) : StringRef(message, &tags::allocAccruedInterestAmt) {}
};

class DeliveryDate : public StringRef {
 public:
  explicit DeliveryDate(AbstractMessage* message) : StringRef(message, &tags::deliveryDate) {}
};

class AssignmentMethod : public StringRef {
 public:
  static constexpr std::string_view RANDOM = "R";
  static constexpr std::string_view PRORATA = "P";

  explicit AssignmentMethod(AbstractMessage* message) : StringRef(message, &tags::assignmentMethod) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class AssignmentUnit : public StringRef {
 public:
  explicit AssignmentUnit(AbstractMessage* message) : StringRef(message, &tags::assignmentUnit) {}
};

class OpenInterest : public StringRef {
 public:
  explicit OpenInterest(AbstractMessage* message) : StringRef(message, &tags::openInterest) {}
};

class ExerciseMethod : public StringRef {
 public:
  static constexpr std::string_view AUTOMATIC = "A";
  static constexpr std::string_view MANUAL = "M";

  explicit ExerciseMethod(AbstractMessage* message) : StringRef(message, &tags::exerciseMethod) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class TotNumTradeReports : public LongRef {
 public:
  explicit TotNumTradeReports(AbstractMessage* message) : LongRef(message, &tags::totNumTradeReports) {}
};

class TradeRequestResult : public LongRef {
 public:
  static constexpr int64_t SUCCESSFUL = 0;
  static constexpr int64_t INVALID_OR_UNKNOWN_INSTRUMENT = 1;
  static constexpr int64_t INVALID_TYPE_OF_TRADE_REQUESTED = 2;
  static constexpr int64_t INVALID_PARTIES = 3;
  static constexpr int64_t INVALID_TRANSPORT_TYPE_REQUESTED = 4;
  static constexpr int64_t INVALID_DESTINATION_REQUESTED = 5;
  static constexpr int64_t TRADEREQUESTTYPE_NOT_SUPPORTED = 8;
  static constexpr int64_t UNAUTHORIZED_FOR_TRADE_CAPTURE_REPORT_REQUEST = 9;
  static constexpr int64_t OTHER = 99;

  explicit TradeRequestResult(AbstractMessage* message) : LongRef(message, &tags::tradeRequestResult) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TradeRequestStatus : public LongRef {
 public:
  static constexpr int64_t ACCEPTED = 0;
  static constexpr int64_t COMPLETED = 1;
  static constexpr int64_t REJECTED = 2;

  explicit TradeRequestStatus(AbstractMessage* message) : LongRef(message, &tags::tradeRequestStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TradeReportRejectReason : public LongRef {
 public:
  static constexpr int64_t SUCCESSFUL = 0;
  static constexpr int64_t INVALID_PARTY_INFORMATION = 1;
  static constexpr int64_t UNKNOWN_INSTRUMENT = 2;
  static constexpr int64_t UNAUTHORIZED_TO_REPORT_TRADES = 3;
  static constexpr int64_t INVALID_TRADE_TYPE = 4;
  static constexpr int64_t OTHER = 99;

  explicit TradeReportRejectReason(AbstractMessage* message) : LongRef(message, &tags::tradeReportRejectReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class SideMultiLegReportingType : public LongRef {
 public:
  static constexpr int64_t SINGLE_SECURITY = 1;
  static constexpr int64_t INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY = 2;
  static constexpr int64_t MULTI_LEG_SECURITY = 3;

  explicit SideMultiLegReportingType(AbstractMessage* message) : LongRef(message, &tags::sideMultiLegReportingType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NoPosAmt : public LongRef {
 public:
  explicit NoPosAmt(AbstractMessage* message) : LongRef(message, &tags::noPosAmt) {}
};

class AutoAcceptIndicator : public StringRef {
 public:
  explicit AutoAcceptIndicator(AbstractMessage* message) : StringRef(message, &tags::autoAcceptIndicator) {}
};

class AllocReportID : public StringRef {
 public:
  explicit AllocReportID(AbstractMessage* message) : StringRef(message, &tags::allocReportID) {}
};

class NoNested2PartyIDs : public LongRef {
 public:
  explicit NoNested2PartyIDs(AbstractMessage* message) : LongRef(message, &tags::noNested2PartyIDs) {}
};

class Nested2PartyID : public StringRef {
 public:
  explicit Nested2PartyID(AbstractMessage* message) : StringRef(message, &tags::nested2PartyID) {}
};

class Nested2PartyIDSource : public StringRef {
 public:
  explicit Nested2PartyIDSource(AbstractMessage* message) : StringRef(message, &tags::nested2PartyIDSource) {}
};

class Nested2PartyRole : public LongRef {
 public:
  explicit Nested2PartyRole(AbstractMessage* message) : LongRef(message, &tags::nested2PartyRole) {}
};

class Nested2PartySubID : public StringRef {
 public:
  explicit Nested2PartySubID(AbstractMessage* message) : StringRef(message, &tags::nested2PartySubID) {}
};

class BenchmarkSecurityIDSource : public StringRef {
 public:
  explicit BenchmarkSecurityIDSource(AbstractMessage* message) : StringRef(message, &tags::benchmarkSecurityIDSource) {}
};

class SecuritySubType : public StringRef {
 public:
  explicit SecuritySubType(AbstractMessage* message) : StringRef(message, &tags::securitySubType) {}
};

class UnderlyingSecuritySubType : public StringRef {
 public:
  explicit UnderlyingSecuritySubType(AbstractMessage* message) : StringRef(message, &tags::underlyingSecuritySubType) {}
};

class LegSecuritySubType : public StringRef {
 public:
  explicit LegSecuritySubType(AbstractMessage* message) : StringRef(message, &tags::legSecuritySubType) {}
};

class AllowableOneSidednessPct : public StringRef {
 public:
  explicit AllowableOneSidednessPct(AbstractMessage* message) : StringRef(message, &tags::allowableOneSidednessPct) {}
};

class AllowableOneSidednessValue : public StringRef {
 public:
  explicit AllowableOneSidednessValue(AbstractMessage* message) : StringRef(message, &tags::allowableOneSidednessValue) {}
};

class AllowableOneSidednessCurr : public StringRef {
 public:
  explicit AllowableOneSidednessCurr(AbstractMessage* message) : StringRef(message, &tags::allowableOneSidednessCurr) {}
};

class NoTrdRegTimestamps : public LongRef {
 public:
  explicit NoTrdRegTimestamps(AbstractMessage* message) : LongRef(message, &tags::noTrdRegTimestamps) {}
};

class TrdRegTimestamp : public StringRef {
 public:
  explicit TrdRegTimestamp(AbstractMessage* message) : StringRef(message, &tags::trdRegTimestamp) {}
};

class TrdRegTimestampType : public LongRef {
 public:
  static constexpr int64_t EXECUTION_TIME = 1;
  static constexpr int64_t TIME_IN = 2;
  static constexpr int64_t TIME_OUT = 3;
  static constexpr int64_t BROKER_RECEIPT = 4;
  static constexpr int64_t BROKER_EXECUTION = 5;

  explicit TrdRegTimestampType(AbstractMessage* message) : LongRef(message, &tags::trdRegTimestampType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TrdRegTimestampOrigin : public StringRef {
 public:
  explicit TrdRegTimestampOrigin(AbstractMessage* message) : StringRef(message, &tags::trdRegTimestampOrigin) {}
};

class ConfirmRefID : public StringRef {
 public:
  explicit ConfirmRefID(AbstractMessage* message) : StringRef(message, &tags::confirmRefID) {}
};

class ConfirmType : public LongRef {
 public:
  static constexpr int64_t STATUS = 1;
  static constexpr int64_t CONFIRMATION = 2;
  static constexpr int64_t CONFIRMATION_REQUEST_REJECTED = 3;

  explicit ConfirmType(AbstractMessage* message) : LongRef(message, &tags::confirmType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ConfirmRejReason : public LongRef {
 public:
  static constexpr int64_t MISMATCHED_ACCOUNT = 1;
  static constexpr int64_t MISSING_SETTLEMENT_INSTRUCTIONS = 2;
  static constexpr int64_t OTHER = 99;

  explicit ConfirmRejReason(AbstractMessage* message) : LongRef(message, &tags::confirmRejReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class BookingType : public LongRef {
 public:
  static constexpr int64_t REGULAR_BOOKING = 0;
  static constexpr int64_t CFD = 1;
  static constexpr int64_t TOTAL_RETURN_SWAP = 2;

  explicit BookingType(AbstractMessage* message) : LongRef(message, &tags::bookingType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class IndividualAllocRejCode : public LongRef {
 public:
  explicit IndividualAllocRejCode(AbstractMessage* message) : LongRef(message, &tags::individualAllocRejCode) {}
};

class SettlInstMsgID : public StringRef {
 public:
  explicit SettlInstMsgID(AbstractMessage* message) : StringRef(message, &tags::settlInstMsgID) {}
};

class NoSettlInst : public LongRef {
 public:
  explicit NoSettlInst(AbstractMessage* message) : LongRef(message, &tags::noSettlInst) {}
};

class LastUpdateTime : public StringRef {
 public:
  explicit LastUpdateTime(AbstractMessage* message) : StringRef(message, &tags::lastUpdateTime) {}
};

class AllocSettlInstType : public LongRef {
 public:
  static constexpr int64_t USE_DEFAULT_INSTRUCTIONS = 0;
  static constexpr int64_t DERIVE_FROM_PARAMETERS_PROVIDED = 1;
  static constexpr int64_t FULL_DETAILS_PROVIDED = 2;
  static constexpr int64_t SSI_DB_IDS_PROVIDED = 3;
  static constexpr int64_t PHONE_FOR_INSTRUCTIONS = 4;

  explicit AllocSettlInstType(AbstractMessage* message) : LongRef(message, &tags::allocSettlInstType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NoSettlPartyIDs : public LongRef {
 public:
  explicit NoSettlPartyIDs(AbstractMessage* message) : LongRef(message, &tags::noSettlPartyIDs) {}
};

class SettlPartyID : public StringRef {
 public:
  explicit SettlPartyID(AbstractMessage* message) : StringRef(message, &tags::settlPartyID) {}
};

class SettlPartyIDSource : public StringRef {
 public:
  explicit SettlPartyIDSource(AbstractMessage* message) : StringRef(message, &tags::settlPartyIDSource) {}
};

class SettlPartyRole : public LongRef {
 public:
  explicit SettlPartyRole(AbstractMessage* message) : LongRef(message, &tags::settlPartyRole) {}
};

class SettlPartySubID : public StringRef {
 public:
  explicit SettlPartySubID(AbstractMessage* message) : StringRef(message, &tags::settlPartySubID) {}
};

class SettlPartySubIDType : public LongRef {
 public:
  explicit SettlPartySubIDType(AbstractMessage* message) : LongRef(message, &tags::settlPartySubIDType) {}
};

class DlvyInstType : public StringRef {
 public:
  static constexpr std::string_view SECURITIES = "S";
  static constexpr std::string_view CASH = "C";

  explicit DlvyInstType(AbstractMessage* message) : StringRef(message, &tags::dlvyInstType) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class TerminationType : public LongRef {
 public:
  static constexpr int64_t OVERNIGHT = 1;
  static constexpr int64_t TERM = 2;
  static constexpr int64_t FLEXIBLE = 3;
  static constexpr int64_t OPEN = 4;

  explicit TerminationType(AbstractMessage* message) : LongRef(message, &tags::terminationType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NextExpectedMsgSeqNum : public StringRef {
 public:
  explicit NextExpectedMsgSeqNum(AbstractMessage* message) : StringRef(message, &tags::nextExpectedMsgSeqNum) {}
};

class OrdStatusReqID : public StringRef {
 public:
  explicit OrdStatusReqID(AbstractMessage* message) : StringRef(message, &tags::ordStatusReqID) {}
};

class SettlInstReqID : public StringRef {
 public:
  explicit SettlInstReqID(AbstractMessage* message) : StringRef(message, &tags::settlInstReqID) {}
};

class SettlInstReqRejCode : public LongRef {
 public:
  static constexpr int64_t UNABLE_TO_PROCESS_REQUEST = 0;
  static constexpr int64_t UNKNOWN_ACCOUNT = 1;
  static constexpr int64_t NO_MATCHING_SETTLEMENT_INSTRUCTIONS_FOUND = 2;
  static constexpr int64_t OTHER = 99;

  explicit SettlInstReqRejCode(AbstractMessage* message) : LongRef(message, &tags::settlInstReqRejCode) {}

  static int64_t value(const char* bytes, int valBeg);
};

class SecondaryAllocID : public StringRef {
 public:
  explicit SecondaryAllocID(AbstractMessage* message) : StringRef(message, &tags::secondaryAllocID) {}
};

class AllocReportType : public LongRef {
 public:
  static constexpr int64_t SELLSIDE_CALCULATED_USING_PRELIMINARY = 3;
  static constexpr int64_t SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = 4;
  static constexpr int64_t WAREHOUSE_RECAP = 5;
  static constexpr int64_t REQUEST_TO_INTERMEDIARY = 8;

  explicit AllocReportType(AbstractMessage* message) : LongRef(message, &tags::allocReportType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class AllocReportRefID : public StringRef {
 public:
  explicit AllocReportRefID(AbstractMessage* message) : StringRef(message, &tags::allocReportRefID) {}
};

class AllocCancReplaceReason : public LongRef {
 public:
  static constexpr int64_t ORIGINAL_DETAILS_INCOMPLETE_INCORRECT = 1;
  static constexpr int64_t CHANGE_IN_UNDERLYING_ORDER_DETAILS = 2;
  static constexpr int64_t OTHER = 99;

  explicit AllocCancReplaceReason(AbstractMessage* message) : LongRef(message, &tags::allocCancReplaceReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CopyMsgIndicator : public StringRef {
 public:
  explicit CopyMsgIndicator(AbstractMessage* message) : StringRef(message, &tags::copyMsgIndicator) {}
};

class AllocAccountType : public LongRef {
 public:
  static constexpr int64_t ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS = 1;
  static constexpr int64_t ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS = 2;
  static constexpr int64_t HOUSE_TRADER = 3;
  static constexpr int64_t FLOOR_TRADER = 4;
  static constexpr int64_t ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED = 6;
  static constexpr int64_t ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED = 7;
  static constexpr int64_t JOINT_BACKOFFICE_ACCOUNT = 8;

  explicit AllocAccountType(AbstractMessage* message) : LongRef(message, &tags::allocAccountType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class OrderAvgPx : public StringRef {
 public:
  explicit OrderAvgPx(AbstractMessage* message) : StringRef(message, &tags::orderAvgPx) {}
};

class OrderBookingQty : public StringRef {
 public:
  explicit OrderBookingQty(AbstractMessage* message) : StringRef(message, &tags::orderBookingQty) {}
};

class NoSettlPartySubIDs : public LongRef {
 public:
  explicit NoSettlPartySubIDs(AbstractMessage* message) : LongRef(message, &tags::noSettlPartySubIDs) {}
};

class NoPartySubIDs : public LongRef {
 public:
  explicit NoPartySubIDs(AbstractMessage* message) : LongRef(message, &tags::noPartySubIDs) {}
};

class PartySubIDType : public LongRef {
 public:
  static constexpr int64_t FIRM = 1;
  static constexpr int64_t PERSON = 2;
  static constexpr int64_t SYSTEM = 3;
  static constexpr int64_t APPLICATION = 4;
  static constexpr int64_t FULL_LEGAL_NAME_OF_FIRM = 5;
  static constexpr int64_t POSTAL_ADDRESS = 6;
  static constexpr int64_t PHONE_NUMBER = 7;
  static constexpr int64_t EMAIL_ADDRESS = 8;
  static constexpr int64_t CONTACT_NAME = 9;
  static constexpr int64_t SECURITIES_ACCOUNT_NUMBER = 10;
  static constexpr int64_t REGISTRATION_NUMBER = 11;
  static constexpr int64_t REGISTERED_ADDRESS_12 = 12;
  static constexpr int64_t REGULATORY_STATUS = 13;
  static constexpr int64_t REGISTRATION_NAME = 14;
  static constexpr int64_t CASH_ACCOUNT_NUMBER = 15;
  static constexpr int64_t BIC = 16;
  static constexpr int64_t CSD_PARTICIPANT_MEMBER_CODE = 17;
  static constexpr int64_t REGISTERED_ADDRESS_18 = 18;
  static constexpr int64_t FUND_ACCOUNT_NAME = 19;
  static constexpr int64_t TELEX_NUMBER = 20;
  static constexpr int64_t FAX_NUMBER = 21;
  static constexpr int64_t SECURITIES_ACCOUNT_NAME = 22;
  static constexpr int64_t CASH_ACCOUNT_NAME = 23;
  static constexpr int64_t DEPARTMENT = 24;
  static constexpr int64_t LOCATION = 25;
  static constexpr int64_t POSITION_ACCOUNT_TYPE = 26;

  explicit PartySubIDType(AbstractMessage* message) : LongRef(message, &tags::partySubIDType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NoNestedPartySubIDs : public LongRef {
 public:
  explicit NoNestedPartySubIDs(AbstractMessage* message) : LongRef(message, &tags::noNestedPartySubIDs) {}
};

class NestedPartySubIDType : public LongRef {
 public:
  explicit NestedPartySubIDType(AbstractMessage* message) : LongRef(message, &tags::nestedPartySubIDType) {}
};

class NoNested2PartySubIDs : public LongRef {
 public:
  explicit NoNested2PartySubIDs(AbstractMessage* message) : LongRef(message, &tags::noNested2PartySubIDs) {}
};

class Nested2PartySubIDType : public LongRef {
 public:
  explicit Nested2PartySubIDType(AbstractMessage* message) : LongRef(message, &tags::nested2PartySubIDType) {}
};

class AllocIntermedReqType : public LongRef {
 public:
  static constexpr int64_t PENDING_ACCEPT = 1;
  static constexpr int64_t PENDING_RELEASE = 2;
  static constexpr int64_t PENDING_REVERSAL = 3;
  static constexpr int64_t ACCEPT = 4;
  static constexpr int64_t BLOCK_LEVEL_REJECT = 5;
  static constexpr int64_t ACCOUNT_LEVEL_REJECT = 6;

  explicit AllocIntermedReqType(AbstractMessage* message) : LongRef(message, &tags::allocIntermedReqType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class UnderlyingPx : public StringRef {
 public:
  explicit UnderlyingPx(AbstractMessage* message) : StringRef(message, &tags::underlyingPx) {}
};

class PriceDelta : public DoubleRef {
 public:
  explicit PriceDelta(AbstractMessage* message) : DoubleRef(message, &tags::priceDelta) {}
};

class ApplQueueMax : public LongRef {
 public:
  explicit ApplQueueMax(AbstractMessage* message) : LongRef(message, &tags::applQueueMax) {}
};

class ApplQueueDepth : public LongRef {
 public:
  explicit ApplQueueDepth(AbstractMessage* message) : LongRef(message, &tags::applQueueDepth) {}
};

class ApplQueueResolution : public LongRef {
 public:
  static constexpr int64_t NO_ACTION_TAKEN = 0;
  static constexpr int64_t QUEUE_FLUSHED = 1;
  static constexpr int64_t OVERLAY_LAST = 2;
  static constexpr int64_t END_SESSION = 3;

  explicit ApplQueueResolution(AbstractMessage* message) : LongRef(message, &tags::applQueueResolution) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ApplQueueAction : public LongRef {
 public:
  static constexpr int64_t NO_ACTION_TAKEN = 0;
  static constexpr int64_t QUEUE_FLUSHED = 1;
  static constexpr int64_t OVERLAY_LAST = 2;
  static constexpr int64_t END_SESSION = 3;

  explicit ApplQueueAction(AbstractMessage* message) : LongRef(message, &tags::applQueueAction) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NoAltMDSource : public LongRef {
 public:
  explicit NoAltMDSource(AbstractMessage* message) : LongRef(message, &tags::noAltMDSource) {}
};

class AltMDSourceID : public StringRef {
 public:
  explicit AltMDSourceID(AbstractMessage* message) : StringRef(message, &tags::altMDSourceID) {}
};

class SecondaryTradeReportID : public StringRef {
 public:
  explicit SecondaryTradeReportID(AbstractMessage* message) : StringRef(message, &tags::secondaryTradeReportID) {}
};

class AvgPxIndicator : public LongRef {
 public:
  static constexpr int64_t NO_AVERAGE_PRICING = 0;
  static constexpr int64_t TRADE_IS_PART_OF_AN_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID = 1;
  static constexpr int64_t LAST_TRADE_IN_THE_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID = 2;

  explicit AvgPxIndicator(AbstractMessage* message) : LongRef(message, &tags::avgPxIndicator) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TradeLinkID : public StringRef {
 public:
  explicit TradeLinkID(AbstractMessage* message) : StringRef(message, &tags::tradeLinkID) {}
};

class OrderInputDevice : public StringRef {
 public:
  explicit OrderInputDevice(AbstractMessage* message) : StringRef(message, &tags::orderInputDevice) {}
};

class UnderlyingTradingSessionID : public StringRef {
 public:
  explicit UnderlyingTradingSessionID(AbstractMessage* message) : StringRef(message, &tags::underlyingTradingSessionID) {}
};

class UnderlyingTradingSessionSubID : public StringRef {
 public:
  explicit UnderlyingTradingSessionSubID(AbstractMessage* message) : StringRef(message, &tags::underlyingTradingSessionSubID) {}
};

class TradeLegRefID : public StringRef {
 public:
  explicit TradeLegRefID(AbstractMessage* message) : StringRef(message, &tags::tradeLegRefID) {}
};

class ExchangeRule : public StringRef {
 public:
  explicit ExchangeRule(AbstractMessage* message) : StringRef(message, &tags::exchangeRule) {}
};

class TradeAllocIndicator : public LongRef {
 public:
  static constexpr int64_t ALLOCATION_NOT_REQUIRED = 0;
  static constexpr int64_t ALLOCATION_REQUIRED = 1;
  static constexpr int64_t USE_ALLOCATION_PROVIDED_WITH_THE_TRADE = 2;

  explicit TradeAllocIndicator(AbstractMessage* message) : LongRef(message, &tags::tradeAllocIndicator) {}

  static int64_t value(const char* bytes, int valBeg);
};

class ExpirationCycle : public LongRef {
 public:
  static constexpr int64_t EXPIRE_ON_TRADING_SESSION_CLOSE = 0;
  static constexpr int64_t EXPIRE_ON_TRADING_SESSION_OPEN = 1;

  explicit ExpirationCycle(AbstractMessage* message) : LongRef(message, &tags::expirationCycle) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TrdType : public LongRef {
 public:
  static constexpr int64_t REGULAR_TRADE = 0;
  static constexpr int64_t BLOCK_TRADE = 1;
  static constexpr int64_t EFP = 2;
  static constexpr int64_t TRANSFER = 3;
  static constexpr int64_t LATE_TRADE = 4;
  static constexpr int64_t T_TRADE = 5;
  static constexpr int64_t WEIGHTED_AVERAGE_PRICE_TRADE = 6;
  static constexpr int64_t BUNCHED_TRADE = 7;
  static constexpr int64_t LATE_BUNCHED_TRADE = 8;
  static constexpr int64_t PRIOR_REFERENCE_PRICE_TRADE = 9;
  static constexpr int64_t AFTER_HOURS_TRADE = 10;

  explicit TrdType(AbstractMessage* message) : LongRef(message, &tags::trdType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TrdSubType : public LongRef {
 public:
  explicit TrdSubType(AbstractMessage* message) : LongRef(message, &tags::trdSubType) {}
};

class TransferReason : public StringRef {
 public:
  explicit TransferReason(AbstractMessage* message) : StringRef(message, &tags::transferReason) {}
};

class TotNumAssignmentReports : public LongRef {
 public:
  explicit TotNumAssignmentReports(AbstractMessage* message) : LongRef(message, &tags::totNumAssignmentReports) {}
};

class AsgnRptID : public StringRef {
 public:
  explicit AsgnRptID(AbstractMessage* message) : StringRef(message, &tags::asgnRptID) {}
};

class ThresholdAmount : public StringRef {
 public:
  explicit ThresholdAmount(AbstractMessage* message) : StringRef(message, &tags::thresholdAmount) {}
};

class PegMoveType : public LongRef {
 public:
  static constexpr int64_t FLOATING = 0;
  static constexpr int64_t FIXED = 1;

  explicit PegMoveType(AbstractMessage* message) : LongRef(message, &tags::pegMoveType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PegOffsetType : public LongRef {
 public:
  static constexpr int64_t PRICE = 0;
  static constexpr int64_t BASIS_POINTS = 1;
  static constexpr int64_t TICKS = 2;
  static constexpr int64_t PRICE_TIER = 3;

  explicit PegOffsetType(AbstractMessage* message) : LongRef(message, &tags::pegOffsetType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PegLimitType : public LongRef {
 public:
  static constexpr int64_t OR_BETTER = 0;
  static constexpr int64_t STRICT_LIMIT_IS_A_STRICT_LIMIT = 1;
  static constexpr int64_t OR_WORSE_FOR_A_BUY_THE_PEG_LIMIT_IS_A_MINIMUM_AND_FOR_A_SELL_THE_PEG_LIMIT_IS_A_MAXIMUM = 2;

  explicit PegLimitType(AbstractMessage* message) : LongRef(message, &tags::pegLimitType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PegRoundDirection : public LongRef {
 public:
  static constexpr int64_t MORE_AGGRESSIVE_ON_A_BUY_ORDER_ROUND_THE_PRICE_UP_ROUND_UP_TO_THE_NEAREST_TICK_ON_A_SELL_ROUND_DOWN_TO_THE_NEAREST_TICK = 1;
  static constexpr int64_t MORE_PASSIVE_ON_A_BUY_ORDER_ROUND_DOWN_TO_NEAREST_TICK_ON_A_SELL_ORDER_ROUND_UP_TO_NEAREST_TICK = 2;

  explicit PegRoundDirection(AbstractMessage* message) : LongRef(message, &tags::pegRoundDirection) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PeggedPrice : public StringRef {
 public:
  explicit PeggedPrice(AbstractMessage* message) : StringRef(message, &tags::peggedPrice) {}
};

class PegScope : public LongRef {
 public:
  static constexpr int64_t LOCAL = 1;
  static constexpr int64_t NATIONAL = 2;
  static constexpr int64_t GLOBAL = 3;
  static constexpr int64_t NATIONAL_EXCLUDING_LOCAL = 4;

  explicit PegScope(AbstractMessage* message) : LongRef(message, &tags::pegScope) {}

  static int64_t value(const char* bytes, int valBeg);
};

class DiscretionMoveType : public LongRef {
 public:
  static constexpr int64_t FLOATING = 0;
  static constexpr int64_t FIXED = 1;

  explicit DiscretionMoveType(AbstractMessage* message) : LongRef(message, &tags::discretionMoveType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class DiscretionOffsetType : public LongRef {
 public:
  static constexpr int64_t PRICE = 0;
  static constexpr int64_t BASIS_POINTS = 1;
  static constexpr int64_t TICKS = 2;
  static constexpr int64_t PRICE_TIER = 3;

  explicit DiscretionOffsetType(AbstractMessage* message) : LongRef(message, &tags::discretionOffsetType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class DiscretionLimitType : public LongRef {
 public:
  static constexpr int64_t OR_BETTER = 0;
  static constexpr int64_t STRICT_LIMIT_IS_A_STRICT_LIMIT = 1;
  static constexpr int64_t OR_WORSE_FOR_A_BUY_THE_DISCRETION_PRICE_IS_A_MINIMUM_AND_FOR_A_SELL_THE_DISCRETION_PRICE_IS_A_MAXIMUM = 2;

  explicit DiscretionLimitType(AbstractMessage* message) : LongRef(message, &tags::discretionLimitType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class DiscretionRoundDirection : public LongRef {
 public:
  static constexpr int64_t MORE_AGGRESSIVE_ON_A_BUY_ORDER_ROUND_THE_PRICE_UP_ROUND_UP_TO_THE_NEAREST_TICK_ON_A_SELL_ROUND_DOWN_TO_THE_NEAREST_TICK = 1;
  static constexpr int64_t MORE_PASSIVE_ON_A_BUY_ORDER_ROUND_DOWN_TO_NEAREST_TICK_ON_A_SELL_ORDER_ROUND_UP_TO_NEAREST_TICK = 2;

  explicit DiscretionRoundDirection(AbstractMessage* message) : LongRef(message, &tags::discretionRoundDirection) {}

  static int64_t value(const char* bytes, int valBeg);
};

class DiscretionPrice : public StringRef {
 public:
  explicit DiscretionPrice(AbstractMessage* message) : StringRef(message, &tags::discretionPrice) {}
};

class DiscretionScope : public LongRef {
 public:
  static constexpr int64_t LOCAL = 1;
  static constexpr int64_t NATIONAL = 2;
  static constexpr int64_t GLOBAL = 3;
  static constexpr int64_t NATIONAL_EXCLUDING_LOCAL = 4;

  explicit DiscretionScope(AbstractMessage* message) : LongRef(message, &tags::discretionScope) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TargetStrategy : public LongRef {
 public:
  static constexpr int64_t VWAP = 1;
  static constexpr int64_t PARTICIPATE = 2;
  static constexpr int64_t MININIZE_MARKET_IMPACT = 3;

  explicit TargetStrategy(AbstractMessage* message) : LongRef(message, &tags::targetStrategy) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TargetStrategyParameters : public StringRef {
 public:
  explicit TargetStrategyParameters(AbstractMessage* message) : StringRef(message, &tags::targetStrategyParameters) {}
};

class ParticipationRate : public StringRef {
 public:
  explicit ParticipationRate(AbstractMessage* message) : StringRef(message, &tags::participationRate) {}
};

class TargetStrategyPerformance : public DoubleRef {
 public:
  explicit TargetStrategyPerformance(AbstractMessage* message) : DoubleRef(message, &tags::targetStrategyPerformance) {}
};

class LastLiquidityInd : public LongRef {
 public:
  static constexpr int64_t ADDED_LIQUIDITY = 1;
  static constexpr int64_t REMOVED_LIQUIDITY = 2;
  static constexpr int64_t LIQUIDITY_ROUTED_OUT = 3;

  explicit LastLiquidityInd(AbstractMessage* message) : LongRef(message, &tags::lastLiquidityInd) {}

  static int64_t value(const char* bytes, int valBeg);
};

class PublishTrdIndicator : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit PublishTrdIndicator(AbstractMessage* message) : StringRef(message, &tags::publishTrdIndicator) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class ShortSaleReason : public LongRef {
 public:
  static constexpr int64_t DEALER_SOLD_SHORT = 0;
  static constexpr int64_t DEALER_SOLD_SHORT_EXEMPT = 1;
  static constexpr int64_t SELLING_CUSTOMER_SOLD_SHORT = 2;
  static constexpr int64_t SELLING_CUSTOMER_SOLD_SHORT_EXEMPT = 3;
  static constexpr int64_t QUALIFED_SERVICE_REPRESENTATIVE = 4;
  static constexpr int64_t QSR_OR_AGU_CONTRA_SIDE_SOLD_SHORT_EXEMPT = 5;

  explicit ShortSaleReason(AbstractMessage* message) : LongRef(message, &tags::shortSaleReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class QtyType : public LongRef {
 public:
  static constexpr int64_t UNITS = 0;
  static constexpr int64_t CONTRACTS = 1;

  explicit QtyType(AbstractMessage* message) : LongRef(message, &tags::qtyType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class SecondaryTrdType : public LongRef {
 public:
  explicit SecondaryTrdType(AbstractMessage* message) : LongRef(message, &tags::secondaryTrdType) {}
};

class TradeReportType : public LongRef {
 public:
  static constexpr int64_t SUBMIT = 0;
  static constexpr int64_t ALLEGED = 1;
  static constexpr int64_t ACCEPT = 2;
  static constexpr int64_t DECLINE = 3;
  static constexpr int64_t ADDENDUM = 4;
  static constexpr int64_t NO_WAS = 5;
  static constexpr int64_t TRADE_REPORT_CANCEL = 6;
  static constexpr int64_t LOCKED_IN_TRADE_BREAK = 7;

  explicit TradeReportType(AbstractMessage* message) : LongRef(message, &tags::tradeReportType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class AllocNoOrdersType : public LongRef {
 public:
  static constexpr int64_t NOT_SPECIFIED = 0;
  static constexpr int64_t EXPLICIT_LIST_PROVIDED = 1;

  explicit AllocNoOrdersType(AbstractMessage* message) : LongRef(message, &tags::allocNoOrdersType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class SharedCommission : public StringRef {
 public:
  explicit SharedCommission(AbstractMessage* message) : StringRef(message, &tags::sharedCommission) {}
};

class ConfirmReqID : public StringRef {
 public:
  explicit ConfirmReqID(AbstractMessage* message) : StringRef(message, &tags::confirmReqID) {}
};

class AvgParPx : public StringRef {
 public:
  explicit AvgParPx(AbstractMessage* message) : StringRef(message, &tags::avgParPx) {}
};

class ReportedPx : public StringRef {
 public:
  explicit ReportedPx(AbstractMessage* message) : StringRef(message, &tags::reportedPx) {}
};

class NoCapacities : public LongRef {
 public:
  explicit NoCapacities(AbstractMessage* message) : LongRef(message, &tags::noCapacities) {}
};

class OrderCapacityQty : public StringRef {
 public:
  explicit OrderCapacityQty(AbstractMessage* message) : StringRef(message, &tags::orderCapacityQty) {}
};

class NoEvents : public LongRef {
 public:
  explicit NoEvents(AbstractMessage* message) : LongRef(message, &tags::noEvents) {}
};

class EventType : public LongRef {
 public:
  static constexpr int64_t PUT = 1;
  static constexpr int64_t CALL = 2;
  static constexpr int64_t TENDER = 3;
  static constexpr int64_t SINKING_FUND_CALL = 4;
  static constexpr int64_t OTHER = 99;

  explicit EventType(AbstractMessage* message) : LongRef(message, &tags::eventType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class EventDate : public StringRef {
 public:
  explicit EventDate(AbstractMessage* message) : StringRef(message, &tags::eventDate) {}
};

class EventPx : public StringRef {
 public:
  explicit EventPx(AbstractMessage* message) : StringRef(message, &tags::eventPx) {}
};

class EventText : public StringRef {
 public:
  explicit EventText(AbstractMessage* message) : StringRef(message, &tags::eventText) {}
};

class PctAtRisk : public StringRef {
 public:
  explicit PctAtRisk(AbstractMessage* message) : StringRef(message, &tags::pctAtRisk) {}
};

class NoInstrAttrib : public LongRef {
 public:
  explicit NoInstrAttrib(AbstractMessage* message) : LongRef(message, &tags::noInstrAttrib) {}
};

class InstrAttribType : public LongRef {
 public:
  static constexpr int64_t FLAT = 1;
  static constexpr int64_t ZERO_COUPON = 2;
  static constexpr int64_t INTEREST_BEARING = 3;
  static constexpr int64_t NO_PERIODIC_PAYMENTS = 4;
  static constexpr int64_t VARIABLE_RATE = 5;
  static constexpr int64_t LESS_FEE_FOR_PUT = 6;
  static constexpr int64_t STEPPED_COUPON = 7;
  static constexpr int64_t COUPON_PERIOD = 8;
  static constexpr int64_t WHEN_AND_IF_ISSUED = 9;
  static constexpr int64_t ORIGINAL_ISSUE_DISCOUNT = 10;
  static constexpr int64_t CALLABLE_PUTTABLE = 11;
  static constexpr int64_t ESCROWED_TO_MATURITY = 12;
  static constexpr int64_t ESCROWED_TO_REDEMPTION_DATE_CALLABLE_SUPPLY_REDEMPTION_DATE_IN_THE_INSTRATTRIBVALUE = 13;
  static constexpr int64_t PREREFUNDED = 14;
  static constexpr int64_t IN_DEFAULT = 15;
  static constexpr int64_t UNRATED = 16;
  static constexpr int64_t TAXABLE = 17;
  static constexpr int64_t INDEXED = 18;
  static constexpr int64_t SUBJECT_TO_ALTERNATIVE_MINIMUM_TAX = 19;
  static constexpr int64_t ORIGINAL_ISSUE_DISCOUNT_PRICE_SUPPLY_PRICE_IN_THE_INSTRATTRIBVALUE = 20;
  static constexpr int64_t CALLABLE_BELOW_MATURITY_VALUE = 21;
  static constexpr int64_t CALLABLE_WITHOUT_NOTICE_BY_MAIL_TO_HOLDER_UNLESS_REGISTERED = 22;
  static constexpr int64_t TEXT_SUPPLY_THE_TEXT_OF_THE_ATTRIBUTE_OR_DISCLAIMER_IN_THE_INSTRATTRIBVALUE = 99;

  explicit InstrAttribType(AbstractMessage* message) : LongRef(message, &tags::instrAttribType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class InstrAttribValue : public StringRef {
 public:
  explicit InstrAttribValue(AbstractMessage* message) : StringRef(message, &tags::instrAttribValue) {}
};

class DatedDate : public StringRef {
 public:
  explicit DatedDate(AbstractMessage* message) : StringRef(message, &tags::datedDate) {}
};

class InterestAccrualDate : public StringRef {
 public:
  explicit InterestAccrualDate(AbstractMessage* message) : StringRef(message, &tags::interestAccrualDate) {}
};

class CPProgram : public LongRef {
 public:
  static constexpr int64_t _3 = 1;
  static constexpr int64_t _4 = 2;
  static constexpr int64_t OTHER = 99;

  explicit CPProgram(AbstractMessage* message) : LongRef(message, &tags::cPProgram) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CPRegType : public StringRef {
 public:
  explicit CPRegType(AbstractMessage* message) : StringRef(message, &tags::cPRegType) {}
};

class UnderlyingCPProgram : public StringRef {
 public:
  explicit UnderlyingCPProgram(AbstractMessage* message) : StringRef(message, &tags::underlyingCPProgram) {}
};

class UnderlyingCPRegType : public StringRef {
 public:
  explicit UnderlyingCPRegType(AbstractMessage* message) : StringRef(message, &tags::underlyingCPRegType) {}
};

class UnderlyingQty : public StringRef {
 public:
  explicit UnderlyingQty(AbstractMessage* message) : StringRef(message, &tags::underlyingQty) {}
};

class TrdMatchID : public StringRef {
 public:
  explicit TrdMatchID(AbstractMessage* message) : StringRef(message, &tags::trdMatchID) {}
};

class SecondaryTradeReportRefID : public StringRef {
 public:
  explicit SecondaryTradeReportRefID(AbstractMessage* message) : StringRef(message, &tags::secondaryTradeReportRefID) {}
};

class UnderlyingDirtyPrice : public StringRef {
 public:
  explicit UnderlyingDirtyPrice(AbstractMessage* message) : StringRef(message, &tags::underlyingDirtyPrice) {}
};

class UnderlyingEndPrice : public StringRef {
 public:
  explicit UnderlyingEndPrice(AbstractMessage* message) : StringRef(message, &tags::underlyingEndPrice) {}
};

class UnderlyingStartValue : public StringRef {
 public:
  explicit UnderlyingStartValue(AbstractMessage* message) : StringRef(message, &tags::underlyingStartValue) {}
};

class UnderlyingCurrentValue : public StringRef {
 public:
  explicit UnderlyingCurrentValue(AbstractMessage* message) : StringRef(message, &tags::underlyingCurrentValue) {}
};

class UnderlyingEndValue : public StringRef {
 public:
  explicit UnderlyingEndValue(AbstractMessage* message) : StringRef(message, &tags::underlyingEndValue) {}
};

class NoUnderlyingStips : public LongRef {
 public:
  explicit NoUnderlyingStips(AbstractMessage* message) : LongRef(message, &tags::noUnderlyingStips) {}
};

class UnderlyingStipType : public StringRef {
 public:
  explicit UnderlyingStipType(AbstractMessage* message) : StringRef(message, &tags::underlyingStipType) {}
};

class UnderlyingStipValue : public StringRef {
 public:
  explicit UnderlyingStipValue(AbstractMessage* message) : StringRef(message, &tags::underlyingStipValue) {}
};

class MaturityNetMoney : public StringRef {
 public:
  explicit MaturityNetMoney(AbstractMessage* message) : StringRef(message, &tags::maturityNetMoney) {}
};

class MiscFeeBasis : public LongRef {
 public:
  static constexpr int64_t ABSOLUTE = 0;
  static constexpr int64_t PER_UNIT = 1;
  static constexpr int64_t PERCENTAGE = 2;

  explicit MiscFeeBasis(AbstractMessage* message) : LongRef(message, &tags::miscFeeBasis) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TotNoAllocs : public LongRef {
 public:
  explicit TotNoAllocs(AbstractMessage* message) : LongRef(message, &tags::totNoAllocs) {}
};

class LastFragment : public StringRef {
 public:
  static constexpr std::string_view YES = "Y";
  static constexpr std::string_view NO = "N";

  explicit LastFragment(AbstractMessage* message) : StringRef(message, &tags::lastFragment) {}

  static std::string_view value(const char* bytes, int valBeg);
};

class CollReqID : public StringRef {
 public:
  explicit CollReqID(AbstractMessage* message) : StringRef(message, &tags::collReqID) {}
};

class CollAsgnReason : public LongRef {
 public:
  static constexpr int64_t INITIAL = 0;
  static constexpr int64_t SCHEDULED = 1;
  static constexpr int64_t TIME_WARNING = 2;
  static constexpr int64_t MARGIN_DEFICIENCY = 3;
  static constexpr int64_t MARGIN_EXCESS = 4;
  static constexpr int64_t FORWARD_COLLATERAL_DEMAND = 5;
  static constexpr int64_t EVENT_OF_DEFAULT = 6;
  static constexpr int64_t ADVERSE_TAX_EVENT = 7;

  explicit CollAsgnReason(AbstractMessage* message) : LongRef(message, &tags::collAsgnReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CollInquiryQualifier : public LongRef {
 public:
  static constexpr int64_t TRADEDATE = 0;
  static constexpr int64_t GC_INSTRUMENT = 1;
  static constexpr int64_t COLLATERALINSTRUMENT = 2;
  static constexpr int64_t SUBSTITUTION_ELIGIBLE = 3;
  static constexpr int64_t NOT_ASSIGNED = 4;
  static constexpr int64_t PARTIALLY_ASSIGNED = 5;
  static constexpr int64_t FULLY_ASSIGNED = 6;
  static constexpr int64_t OUTSTANDING_TRADES = 7;

  explicit CollInquiryQualifier(AbstractMessage* message) : LongRef(message, &tags::collInquiryQualifier) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NoTrades : public LongRef {
 public:
  explicit NoTrades(AbstractMessage* message) : LongRef(message, &tags::noTrades) {}
};

class MarginRatio : public StringRef {
 public:
  explicit MarginRatio(AbstractMessage* message) : StringRef(message, &tags::marginRatio) {}
};

class MarginExcess : public StringRef {
 public:
  explicit MarginExcess(AbstractMessage* message) : StringRef(message, &tags::marginExcess) {}
};

class TotalNetValue : public StringRef {
 public:
  explicit TotalNetValue(AbstractMessage* message) : StringRef(message, &tags::totalNetValue) {}
};

class CashOutstanding : public StringRef {
 public:
  explicit CashOutstanding(AbstractMessage* message) : StringRef(message, &tags::cashOutstanding) {}
};

class CollAsgnID : public StringRef {
 public:
  explicit CollAsgnID(AbstractMessage* message) : StringRef(message, &tags::collAsgnID) {}
};

class CollAsgnTransType : public LongRef {
 public:
  static constexpr int64_t NEW = 0;
  static constexpr int64_t REPLACE = 1;
  static constexpr int64_t CANCEL = 2;
  static constexpr int64_t RELEASE = 3;
  static constexpr int64_t REVERSE = 4;

  explicit CollAsgnTransType(AbstractMessage* message) : LongRef(message, &tags::collAsgnTransType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CollRespID : public StringRef {
 public:
  explicit CollRespID(AbstractMessage* message) : StringRef(message, &tags::collRespID) {}
};

class CollAsgnRespType : public LongRef {
 public:
  static constexpr int64_t RECEIVED = 0;
  static constexpr int64_t ACCEPTED = 1;
  static constexpr int64_t DECLINED = 2;
  static constexpr int64_t REJECTED = 3;

  explicit CollAsgnRespType(AbstractMessage* message) : LongRef(message, &tags::collAsgnRespType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CollAsgnRejectReason : public LongRef {
 public:
  static constexpr int64_t UNKNOWN_DEAL = 0;
  static constexpr int64_t UNKNOWN_OR_INVALID_INSTRUMENT = 1;
  static constexpr int64_t UNAUTHORIZED_TRANSACTION = 2;
  static constexpr int64_t INSUFFICIENT_COLLATERAL = 3;
  static constexpr int64_t INVALID_TYPE_OF_COLLATERAL = 4;
  static constexpr int64_t EXCESSIVE_SUBSTITUTION = 5;
  static constexpr int64_t OTHER = 99;

  explicit CollAsgnRejectReason(AbstractMessage* message) : LongRef(message, &tags::collAsgnRejectReason) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CollAsgnRefID : public StringRef {
 public:
  explicit CollAsgnRefID(AbstractMessage* message) : StringRef(message, &tags::collAsgnRefID) {}
};

class CollRptID : public StringRef {
 public:
  explicit CollRptID(AbstractMessage* message) : StringRef(message, &tags::collRptID) {}
};

class CollInquiryID : public StringRef {
 public:
  explicit CollInquiryID(AbstractMessage* message) : StringRef(message, &tags::collInquiryID) {}
};

class CollStatus : public LongRef {
 public:
  static constexpr int64_t UNASSIGNED = 0;
  static constexpr int64_t PARTIALLY_ASSIGNED = 1;
  static constexpr int64_t ASSIGNMENT_PROPOSED = 2;
  static constexpr int64_t ASSIGNED = 3;
  static constexpr int64_t CHALLENGED = 4;

  explicit CollStatus(AbstractMessage* message) : LongRef(message, &tags::collStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class TotNumReports : public LongRef {
 public:
  explicit TotNumReports(AbstractMessage* message) : LongRef(message, &tags::totNumReports) {}
};

class LastRptRequested : public StringRef {
 public:
  explicit LastRptRequested(AbstractMessage* message) : StringRef(message, &tags::lastRptRequested) {}
};

class AgreementDesc : public StringRef {
 public:
  explicit AgreementDesc(AbstractMessage* message) : StringRef(message, &tags::agreementDesc) {}
};

class AgreementID : public StringRef {
 public:
  explicit AgreementID(AbstractMessage* message) : StringRef(message, &tags::agreementID) {}
};

class AgreementDate : public StringRef {
 public:
  explicit AgreementDate(AbstractMessage* message) : StringRef(message, &tags::agreementDate) {}
};

class StartDate : public StringRef {
 public:
  explicit StartDate(AbstractMessage* message) : StringRef(message, &tags::startDate) {}
};

class EndDate : public StringRef {
 public:
  explicit EndDate(AbstractMessage* message) : StringRef(message, &tags::endDate) {}
};

class AgreementCurrency : public StringRef {
 public:
  explicit AgreementCurrency(AbstractMessage* message) : StringRef(message, &tags::agreementCurrency) {}
};

class DeliveryType : public LongRef {
 public:
  static constexpr int64_t VERSUS_PAYMENT_DELIVER = 0;
  static constexpr int64_t FREE_DELIVER = 1;
  static constexpr int64_t TRI_PARTY = 2;
  static constexpr int64_t HOLD_IN_CUSTODY = 3;

  explicit DeliveryType(AbstractMessage* message) : LongRef(message, &tags::deliveryType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class EndAccruedInterestAmt : public StringRef {
 public:
  explicit EndAccruedInterestAmt(AbstractMessage* message) : StringRef(message, &tags::endAccruedInterestAmt) {}
};

class StartCash : public StringRef {
 public:
  explicit StartCash(AbstractMessage* message) : StringRef(message, &tags::startCash) {}
};

class EndCash : public StringRef {
 public:
  explicit EndCash(AbstractMessage* message) : StringRef(message, &tags::endCash) {}
};

class UserRequestID : public StringRef {
 public:
  explicit UserRequestID(AbstractMessage* message) : StringRef(message, &tags::userRequestID) {}
};

class UserRequestType : public LongRef {
 public:
  static constexpr int64_t LOGONUSER = 1;
  static constexpr int64_t LOGOFFUSER = 2;
  static constexpr int64_t CHANGEPASSWORDFORUSER = 3;
  static constexpr int64_t REQUEST_INDIVIDUAL_USER_STATUS = 4;

  explicit UserRequestType(AbstractMessage* message) : LongRef(message, &tags::userRequestType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NewPassword : public StringRef {
 public:
  explicit NewPassword(AbstractMessage* message) : StringRef(message, &tags::newPassword) {}
};

class UserStatus : public LongRef {
 public:
  static constexpr int64_t LOGGED_IN = 1;
  static constexpr int64_t NOT_LOGGED_IN = 2;
  static constexpr int64_t USER_NOT_RECOGNISED = 3;
  static constexpr int64_t PASSWORD_INCORRECT = 4;
  static constexpr int64_t PASSWORD_CHANGED = 5;
  static constexpr int64_t OTHER = 6;

  explicit UserStatus(AbstractMessage* message) : LongRef(message, &tags::userStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class UserStatusText : public StringRef {
 public:
  explicit UserStatusText(AbstractMessage* message) : StringRef(message, &tags::userStatusText) {}
};

class StatusValue : public LongRef {
 public:
  static constexpr int64_t CONNECTED = 1;
  static constexpr int64_t NOT_CONNECTED_DOWN_EXPECTED_UP = 2;
  static constexpr int64_t NOT_CONNECTED_DOWN_EXPECTED_DOWN = 3;
  static constexpr int64_t IN_PROCESS = 4;

  explicit StatusValue(AbstractMessage* message) : LongRef(message, &tags::statusValue) {}

  static int64_t value(const char* bytes, int valBeg);
};

class StatusText : public StringRef {
 public:
  explicit StatusText(AbstractMessage* message) : StringRef(message, &tags::statusText) {}
};

class RefCompID : public StringRef {
 public:
  explicit RefCompID(AbstractMessage* message) : StringRef(message, &tags::refCompID) {}
};

class RefSubID : public StringRef {
 public:
  explicit RefSubID(AbstractMessage* message) : StringRef(message, &tags::refSubID) {}
};

class NetworkResponseID : public StringRef {
 public:
  explicit NetworkResponseID(AbstractMessage* message) : StringRef(message, &tags::networkResponseID) {}
};

class NetworkRequestID : public StringRef {
 public:
  explicit NetworkRequestID(AbstractMessage* message) : StringRef(message, &tags::networkRequestID) {}
};

class LastNetworkResponseID : public StringRef {
 public:
  explicit LastNetworkResponseID(AbstractMessage* message) : StringRef(message, &tags::lastNetworkResponseID) {}
};

class NetworkRequestType : public LongRef {
 public:
  static constexpr int64_t SNAPSHOT = 1;
  static constexpr int64_t SUBSCRIBE = 2;
  static constexpr int64_t STOP_SUBSCRIBING = 4;
  static constexpr int64_t LEVEL_OF_DETAIL_THEN_NOCOMPIDS_BECOMES_REQUIRED = 8;

  explicit NetworkRequestType(AbstractMessage* message) : LongRef(message, &tags::networkRequestType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NoCompIDs : public LongRef {
 public:
  explicit NoCompIDs(AbstractMessage* message) : LongRef(message, &tags::noCompIDs) {}
};

class NetworkStatusResponseType : public LongRef {
 public:
  static constexpr int64_t FULL = 1;
  static constexpr int64_t INCREMENTAL_UPDATE = 2;

  explicit NetworkStatusResponseType(AbstractMessage* message) : LongRef(message, &tags::networkStatusResponseType) {}

  static int64_t value(const char* bytes, int valBeg);
};

class NoCollInquiryQualifier : public LongRef {
 public:
  explicit NoCollInquiryQualifier(AbstractMessage* message) : LongRef(message, &tags::noCollInquiryQualifier) {}
};

class TrdRptStatus : public LongRef {
 public:
  static constexpr int64_t ACCEPTED = 0;
  static constexpr int64_t REJECTED = 1;

  explicit TrdRptStatus(AbstractMessage* message) : LongRef(message, &tags::trdRptStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class AffirmStatus : public LongRef {
 public:
  static constexpr int64_t RECEIVED = 1;
  static constexpr int64_t CONFIRM_REJECTED_IE_NOT_AFFIRMED = 2;
  static constexpr int64_t AFFIRMED = 3;

  explicit AffirmStatus(AbstractMessage* message) : LongRef(message, &tags::affirmStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class UnderlyingStrikeCurrency : public StringRef {
 public:
  explicit UnderlyingStrikeCurrency(AbstractMessage* message) : StringRef(message, &tags::underlyingStrikeCurrency) {}
};

class LegStrikeCurrency : public StringRef {
 public:
  explicit LegStrikeCurrency(AbstractMessage* message) : StringRef(message, &tags::legStrikeCurrency) {}
};

class TimeBracket : public StringRef {
 public:
  explicit TimeBracket(AbstractMessage* message) : StringRef(message, &tags::timeBracket) {}
};

class CollAction : public LongRef {
 public:
  static constexpr int64_t RETAIN = 0;
  static constexpr int64_t ADD = 1;
  static constexpr int64_t REMOVE = 2;

  explicit CollAction(AbstractMessage* message) : LongRef(message, &tags::collAction) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CollInquiryStatus : public LongRef {
 public:
  static constexpr int64_t ACCEPTED = 0;
  static constexpr int64_t ACCEPTED_WITH_WARNINGS = 1;
  static constexpr int64_t COMPLETED = 2;
  static constexpr int64_t COMPLETED_WITH_WARNINGS = 3;
  static constexpr int64_t REJECTED = 4;

  explicit CollInquiryStatus(AbstractMessage* message) : LongRef(message, &tags::collInquiryStatus) {}

  static int64_t value(const char* bytes, int valBeg);
};

class CollInquiryResult : public LongRef {
 public:
  static constexpr int64_t SUCCESSFUL = 0;
  static constexpr int64_t INVALID_OR_UNKNOWN_INSTRUMENT = 1;
  static constexpr int64_t INVALID_OR_UNKNOWN_COLLATERAL_TYPE = 2;
  static constexpr int64_t INVALID_PARTIES = 3;
  static constexpr int64_t INVALID_TRANSPORT_TYPE_REQUESTED = 4;
  static constexpr int64_t INVALID_DESTINATION_REQUESTED = 5;
  static constexpr int64_t NO_COLLATERAL_FOUND_FOR_THE_TRADE_SPECIFIED = 6;
  static constexpr int64_t NO_COLLATERAL_FOUND_FOR_THE_ORDER_SPECIFIED = 7;
  static constexpr int64_t COLLATERAL_INQUIRY_TYPE_NOT_SUPPORTED = 8;
  static constexpr int64_t UNAUTHORIZED_FOR_COLLATERAL_INQUIRY = 9;
  static constexpr int64_t OTHER = 99;

  explicit CollInquiryResult(AbstractMessage* message) : LongRef(message, &tags::collInquiryResult) {}

  static int64_t value(const char* bytes, int valBeg);
};

class StrikeCurrency : public StringRef {
 public:
  explicit StrikeCurrency(AbstractMessage* message) : StringRef(message, &tags::strikeCurrency) {}
};

class NoNested3PartyIDs : public LongRef {
 public:
  explicit NoNested3PartyIDs(AbstractMessage* message) : LongRef(message, &tags::noNested3PartyIDs) {}
};

class Nested3PartyID : public StringRef {
 public:
  explicit Nested3PartyID(AbstractMessage* message) : StringRef(message, &tags::nested3PartyID) {}
};

class Nested3PartyIDSource : public StringRef {
 public:
  explicit Nested3PartyIDSource(AbstractMessage* message) : StringRef(message, &tags::nested3PartyIDSource) {}
};

class Nested3PartyRole : public LongRef {
 public:
  explicit Nested3PartyRole(AbstractMessage* message) : LongRef(message, &tags::nested3PartyRole) {}
};

class NoNested3PartySubIDs : public LongRef {
 public:
  explicit NoNested3PartySubIDs(AbstractMessage* message) : LongRef(message, &tags::noNested3PartySubIDs) {}
};

class Nested3PartySubID : public StringRef {
 public:
  explicit Nested3PartySubID(AbstractMessage* message) : StringRef(message, &tags::nested3PartySubID) {}
};

class Nested3PartySubIDType : public LongRef {
 public:
  explicit Nested3PartySubIDType(AbstractMessage* message) : LongRef(message, &tags::nested3PartySubIDType) {}
};

class LegContractSettlMonth : public StringRef {
 public:
  explicit LegContractSettlMonth(AbstractMessage* message) : StringRef(message, &tags::legContractSettlMonth) {}
};

class LegInterestAccrualDate : public StringRef {
 public:
  explicit LegInterestAccrualDate(AbstractMessage* message) : StringRef(message, &tags::legInterestAccrualDate) {}
};

}  // namespace fix::gen::field

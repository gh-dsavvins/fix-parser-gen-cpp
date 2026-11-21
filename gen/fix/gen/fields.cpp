#include "fix/gen/fields.hpp"

#include <stdexcept>

namespace fix::gen::field {

std::string_view AdvSide::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 66: return BUY;
    case 83: return SELL;
    case 84: return TRADE;
    case 88: return CROSS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view AdvTransType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 67: return CANCEL;
    case 78: return NEW;
    case 82: return REPLACE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view CommType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return PER_UNIT;
    case 50: return PERCENTAGE;
    case 51: return ABSOLUTE;
    case 52: return _4;
    case 53: return _5;
    case 54: return POINTS_PER_BOND_OR_CONTRACT_SUPPLY_CONTRACTMULTIPLIER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ExecInst::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return STAY_ON_OFFERSIDE;
    case 49: return NOT_HELD;
    case 50: return WORK;
    case 51: return GO_ALONG;
    case 52: return OVER_THE_DAY;
    case 53: return HELD;
    case 54: return PARTICIPATE_DONT_INITIATE;
    case 55: return STRICT_SCALE;
    case 56: return TRY_TO_SCALE;
    case 57: return STAY_ON_BIDSIDE;
    case 65: return NO_CROSS;
    case 66: return OK_TO_CROSS;
    case 67: return CALL_FIRST;
    case 68: return PERCENT_OF_VOLUME;
    case 69: return DO_NOT_INCREASE;
    case 70: return DO_NOT_REDUCE;
    case 71: return ALL_OR_NONE;
    case 72: return REINSTATE_ON_SYSTEM_FAILURE;
    case 73: return INSTITUTIONS_ONLY;
    case 74: return REINSTATE_ON_TRADING_HALT;
    case 75: return CANCEL_ON_TRADING_HALT;
    case 76: return LAST_PEG;
    case 77: return MID_PRICE_PEG;
    case 78: return NON_NEGOTIABLE;
    case 79: return OPENING_PEG;
    case 80: return MARKET_PEG;
    case 81: return CANCEL_ON_SYSTEM_FAILURE;
    case 82: return PRIMARY_PEG;
    case 83: return SUSPEND;
    case 85: return CUSTOMER_DISPLAY_INSTRUCTION;
    case 86: return NETTING;
    case 87: return PEG_TO_VWAP;
    case 88: return TRADE_ALONG;
    case 89: return TRY_TO_STOP;
    case 90: return CANCEL_IF_NOT_BEST;
    case 97: return TRAILING_STOP_PEG;
    case 98: return STRICT_LIMIT;
    case 99: return IGNORE_PRICE_VALIDITY_CHECKS;
    case 100: return PEG_TO_LIMIT_PRICE;
    case 101: return WORK_TO_TARGET_STRATEGY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view HandlInst::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return AUTOMATED_EXECUTION_ORDER_PRIVATE_NO_BROKER_INTERVENTION;
    case 50: return AUTOMATED_EXECUTION_ORDER_PUBLIC_BROKER_INTERVENTION_OK;
    case 51: return MANUAL_ORDER_BEST_EXECUTION;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view SecurityIDSource::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return CUSIP;
    case 50: return SEDOL;
    case 51: return QUIK;
    case 52: return ISIN_NUMBER;
    case 53: return RIC_CODE;
    case 54: return ISO_CURRENCY_CODE;
    case 55: return ISO_COUNTRY_CODE;
    case 56: return EXCHANGE_SYMBOL;
    case 57: return CONSOLIDATED_TAPE_ASSOCIATION;
    case 65: return BLOOMBERG_SYMBOL;
    case 66: return WERTPAPIER;
    case 67: return DUTCH;
    case 68: return VALOREN;
    case 69: return SICOVAM;
    case 70: return BELGIAN;
    case 71: return COMMON;
    case 72: return CLEARING_HOUSE;
    case 73: return ISDA_FPML_PRODUCT_SPECIFICATION;
    case 74: return OPTIONS_PRICE_REPORTING_AUTHORITY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view IOIQltyInd::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 72: return HIGH;
    case 76: return LOW;
    case 77: return MEDIUM;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view IOIQty::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 76: return LARGE;
    case 77: return MEDIUM;
    case 83: return SMALL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view IOITransType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 67: return CANCEL;
    case 78: return NEW;
    case 82: return REPLACE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view LastCapacity::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return AGENT;
    case 50: return CROSS_AS_AGENT;
    case 51: return CROSS_AS_PRINCIPAL;
    case 52: return PRINCIPAL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MsgType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return HEARTBEAT;
    case 49: return TEST_REQUEST;
    case 50: return RESEND_REQUEST;
    case 51: return REJECT;
    case 52: return SEQUENCE_RESET;
    case 53: return LOGOUT;
    case 54: return INDICATION_OF_INTEREST;
    case 55: return ADVERTISEMENT;
    case 56: return EXECUTION_REPORT;
    case 57: return ORDER_CANCEL_REJECT;
    case 65:
      switch (bytes[valBeg + 1]) {
        case 1: return LOGON;
        case 65: return DERIVATIVE_SECURITY_LIST;
        case 66: return NEW_ORDER_AB;
        case 67: return MULTILEG_ORDER_CANCEL_REPLACE;
        case 68: return TRADE_CAPTURE_REPORT_REQUEST;
        case 69: return TRADE_CAPTURE_REPORT;
        case 70: return ORDER_MASS_STATUS_REQUEST;
        case 71: return QUOTE_REQUEST_REJECT;
        case 72: return RFQ_REQUEST;
        case 73: return QUOTE_STATUS_REPORT;
        case 74: return QUOTE_RESPONSE;
        case 75: return CONFIRMATION;
        case 76: return POSITION_MAINTENANCE_REQUEST;
        case 77: return POSITION_MAINTENANCE_REPORT;
        case 78: return REQUEST_FOR_POSITIONS;
        case 79: return REQUEST_FOR_POSITIONS_ACK;
        case 80: return POSITION_REPORT;
        case 81: return TRADE_CAPTURE_REPORT_REQUEST_ACK;
        case 82: return TRADE_CAPTURE_REPORT_ACK;
        case 83: return ALLOCATION_REPORT;
        case 84: return ALLOCATION_REPORT_ACK;
        case 85: return CONFIRMATION_ACK;
        case 86: return SETTLEMENT_INSTRUCTION_REQUEST;
        case 87: return ASSIGNMENT_REPORT;
        case 88: return COLLATERAL_REQUEST;
        case 89: return COLLATERAL_ASSIGNMENT;
        case 90: return COLLATERAL_RESPONSE;
        default: throw std::runtime_error("value");
      }
    case 66:
      switch (bytes[valBeg + 1]) {
        case 1: return NEWS;
        case 65: return COLLATERAL_REPORT;
        case 66: return COLLATERAL_INQUIRY;
        case 67: return NETWORK_BC;
        case 68: return NETWORK_BD;
        case 69: return USER_REQUEST;
        case 70: return USER_RESPONSE;
        case 71: return COLLATERAL_INQUIRY_ACK;
        case 72: return CONFIRMATION_REQUEST;
        default: throw std::runtime_error("value");
      }
    case 67: return EMAIL;
    case 68: return ORDER_SINGLE;
    case 69: return ORDER_LIST;
    case 70: return ORDER_CANCEL_REQUEST;
    case 71: return ORDER_CANCEL_REPLACE_REQUEST;
    case 72: return ORDER_STATUS_REQUEST;
    case 74: return ALLOCATION_INSTRUCTION;
    case 75: return LIST_CANCEL_REQUEST;
    case 76: return LIST_EXECUTE;
    case 77: return LIST_STATUS_REQUEST;
    case 78: return LIST_STATUS;
    case 80: return ALLOCATION_INSTRUCTION_ACK;
    case 81: return DONT_KNOW_TRADE;
    case 82: return QUOTE_REQUEST;
    case 83: return QUOTE;
    case 84: return SETTLEMENT_INSTRUCTIONS;
    case 86: return MARKET_DATA_REQUEST;
    case 87: return MARKET_DATA_SNAPSHOT_FULL_REFRESH;
    case 88: return MARKET_DATA_INCREMENTAL_REFRESH;
    case 89: return MARKET_DATA_REQUEST_REJECT;
    case 90: return QUOTE_CANCEL;
    case 97: return QUOTE_STATUS_REQUEST;
    case 98: return MASS_QUOTE_ACKNOWLEDGEMENT;
    case 99: return SECURITY_DEFINITION_REQUEST;
    case 100: return SECURITY_DEFINITION;
    case 101: return SECURITY_STATUS_REQUEST;
    case 102: return SECURITY_STATUS;
    case 103: return TRADING_SESSION_STATUS_REQUEST;
    case 104: return TRADING_SESSION_STATUS;
    case 105: return MASS_QUOTE;
    case 106: return BUSINESS_MESSAGE_REJECT;
    case 107: return BID_REQUEST;
    case 108: return BID_RESPONSE;
    case 109: return LIST_STRIKE_PRICE;
    case 110: return XML_MESSAGE;
    case 111: return REGISTRATION_INSTRUCTIONS;
    case 112: return REGISTRATION_INSTRUCTIONS_RESPONSE;
    case 113: return ORDER_MASS_CANCEL_REQUEST;
    case 114: return ORDER_MASS_CANCEL_REPORT;
    case 115: return NEW_ORDER_s;
    case 116: return CROSS_ORDER_CANCEL_REPLACE_REQUEST;
    case 117: return CROSS_ORDER_CANCEL_REQUEST;
    case 118: return SECURITY_TYPE_REQUEST;
    case 119: return SECURITY_TYPES;
    case 120: return SECURITY_LIST_REQUEST;
    case 121: return SECURITY_LIST;
    case 122: return DERIVATIVE_SECURITY_LIST_REQUEST;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view OrdStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NEW;
    case 49: return PARTIALLY_FILLED;
    case 50: return FILLED;
    case 51: return DONE_FOR_DAY;
    case 52: return CANCELED;
    case 54: return PENDING_CANCEL;
    case 55: return STOPPED;
    case 56: return REJECTED;
    case 57: return SUSPENDED;
    case 65: return PENDING_NEW;
    case 66: return CALCULATED;
    case 67: return EXPIRED;
    case 68: return ACCEPTED_FOR_BIDDING;
    case 69: return PENDING_REPLACE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view OrdType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return MARKET;
    case 50: return LIMIT;
    case 51: return STOP;
    case 52: return STOP_LIMIT;
    case 54: return WITH_OR_WITHOUT;
    case 55: return LIMIT_OR_BETTER;
    case 56: return LIMIT_WITH_OR_WITHOUT;
    case 57: return ON_BASIS;
    case 68: return PREVIOUSLY_QUOTED;
    case 69: return PREVIOUSLY_INDICATED;
    case 71: return FOREX;
    case 73: return FUNARI;
    case 74: return MARKET_IF_TOUCHED;
    case 75: return MARKET_WITH_LEFTOVER_AS_LIMIT;
    case 76: return PREVIOUS_FUND_VALUATION_POINT;
    case 77: return NEXT_FUND_VALUATION_POINT;
    case 80: return PEGGED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view PossDupFlag::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view Side::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return BUY;
    case 50: return SELL;
    case 51: return BUY_MINUS;
    case 52: return SELL_PLUS;
    case 53: return SELL_SHORT;
    case 54: return SELL_SHORT_EXEMPT;
    case 55: return UNDISCLOSED;
    case 56: return CROSS;
    case 57: return CROSS_SHORT;
    case 65: return CROSS_SHORT_EXEMPT;
    case 66: return AS_DEFINED;
    case 67: return OPPOSITE;
    case 68: return SUBSCRIBE;
    case 69: return REDEEM;
    case 70: return LEND;
    case 71: return BORROW;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view TimeInForce::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return DAY;
    case 49: return GOOD_TILL_CANCEL;
    case 50: return AT_THE_OPENING;
    case 51: return IMMEDIATE_OR_CANCEL;
    case 52: return FILL_OR_KILL;
    case 53: return GOOD_TILL_CROSSING;
    case 54: return GOOD_TILL_DATE;
    case 55: return AT_THE_CLOSE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view Urgency::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NORMAL;
    case 49: return FLASH;
    case 50: return BACKGROUND;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view SettlType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return REGULAR;
    case 49: return CASH;
    case 50: return NEXT_DAY;
    case 51: return T_PLUS_2;
    case 52: return T_PLUS_3;
    case 53: return T_PLUS_4;
    case 54: return FUTURE;
    case 55: return WHEN_AND_IF_ISSUED;
    case 56: return SELLERS_OPTION;
    case 57: return T_PLUS_5;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view AllocTransType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NEW;
    case 49: return REPLACE;
    case 50: return CANCEL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view PositionEffect::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 67: return CLOSE;
    case 70: return FIFO;
    case 79: return OPEN;
    case 82: return ROLLED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ProcessCode::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return REGULAR;
    case 49: return SOFT_DOLLAR;
    case 50: return STEP_IN;
    case 51: return STEP_OUT;
    case 52: return SOFT_DOLLAR_STEP_IN;
    case 53: return SOFT_DOLLAR_STEP_OUT;
    case 54: return PLAN_SPONSOR;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return ACCEPTED;
    case 49: return BLOCK_LEVEL_REJECT;
    case 50: return ACCOUNT_LEVEL_REJECT;
    case 51: return RECEIVED;
    case 52: return INCOMPLETE;
    case 53: return REJECTED_BY_INTERMEDIARY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocRejCode::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return UNKNOWN_ACCOUNT;
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return INCORRECT_QUANTITY;
        case 48: return UNKNOWN_OR_STALE_EXECID;
        case 49: return MISMATCHED_DATA_VALUE;
        case 50: return UNKNOWN_CLORDID;
        case 51: return WAREHOUSE_REQUEST_REJECTED;
        default: throw std::runtime_error("value");
      }
    case 50: return INCORRECT_AVERAGE_PRICE;
    case 51: return UNKNOWN_EXECUTING_BROKER_MNEMONIC;
    case 52: return COMMISSION_DIFFERENCE;
    case 53: return UNKNOWN_ORDERID;
    case 54: return UNKNOWN_LISTID;
    case 55: return OTHER;
    case 56: return INCORRECT_ALLOCATED_QUANTITY;
    case 57: return CALCULATION_DIFFERENCE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view EmailType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NEW;
    case 49: return REPLY;
    case 50: return ADMIN_REPLY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view PossResend::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t EncryptMethod::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NONE;
    case 49: return PKCS;
    case 50: return DES;
    case 51: return PKCS_DES;
    case 52: return PGP_DES;
    case 53: return PGP_DES_MD5;
    case 54: return PEM_DES_MD5;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CxlRejReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return TOO_LATE_TO_CANCEL;
    case 49: return UNKNOWN_ORDER;
    case 50: return BROKER;
    case 51: return ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS;
    case 52: return UNABLE_TO_PROCESS_ORDER_MASS_CANCEL_REQUEST;
    case 53: return ORIGORDMODTIME;
    case 54: return DUPLICATE_CLORDID;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t OrdRejReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return BROKER;
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return UNKNOWN_SYMBOL;
        case 48: return INVALID_INVESTOR_ID;
        case 49: return UNSUPPORTED_ORDER_CHARACTERISTIC12_SURVEILLENCE_OPTION;
        case 51: return INCORRECT_QUANTITY;
        case 52: return INCORRECT_ALLOCATED_QUANTITY;
        case 53: return UNKNOWN_ACCOUNT;
        default: throw std::runtime_error("value");
      }
    case 50: return EXCHANGE_CLOSED;
    case 51: return ORDER_EXCEEDS_LIMIT;
    case 52: return TOO_LATE_TO_ENTER;
    case 53: return UNKNOWN_ORDER;
    case 54: return DUPLICATE_ORDER;
    case 55: return DUPLICATE_OF_A_VERBALLY_COMMUNICATED_ORDER;
    case 56: return STALE_ORDER;
    case 57:
      switch (bytes[valBeg + 1]) {
        case 1: return TRADE_ALONG_REQUIRED;
        case 57: return OTHER;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view IOIQualifier::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65: return ALL_OR_NONE;
    case 66: return MARKET_ON_CLOSE;
    case 67: return AT_THE_CLOSE;
    case 68: return VWAP;
    case 73: return IN_TOUCH_WITH;
    case 76: return LIMIT;
    case 77: return MORE_BEHIND;
    case 79: return AT_THE_OPEN;
    case 80: return TAKING_A_POSITION;
    case 81: return AT_THE_MARKET;
    case 82: return READY_TO_TRADE;
    case 83: return PORTFOLIO_SHOWN;
    case 84: return THROUGH_THE_DAY;
    case 86: return VERSUS;
    case 87: return INDICATION;
    case 88: return CROSSING_OPPORTUNITY;
    case 89: return AT_THE_MIDPOINT;
    case 90: return PRE_OPEN;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ReportToExch::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view LocateReqd::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ForexReq::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view GapFillFlag::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view DKReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65: return UNKNOWN_SYMBOL;
    case 66: return WRONG_SIDE;
    case 67: return QUANTITY_EXCEEDS_ORDER;
    case 68: return NO_MATCHING_ORDER;
    case 69: return PRICE_EXCEEDS_LIMIT;
    case 70: return CALCULATION_DIFFERENCE;
    case 90: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view IOINaturalFlag::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MiscFeeType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return REGULATORY;
        case 48: return PER_TRANSACTION;
        case 49: return CONVERSION;
        case 50: return AGENT;
        default: throw std::runtime_error("value");
      }
    case 50: return TAX;
    case 51: return LOCAL_COMMISSION;
    case 52: return EXCHANGE_FEES;
    case 53: return STAMP;
    case 54: return LEVY;
    case 55: return OTHER;
    case 56: return MARKUP;
    case 57: return CONSUMPTION_TAX;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ResetSeqNumFlag::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ExecType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NEW;
    case 51: return DONE_FOR_DAY;
    case 52: return CANCELED;
    case 53: return REPLACE;
    case 54: return PENDING_CANCEL;
    case 55: return STOPPED;
    case 56: return REJECTED;
    case 57: return SUSPENDED;
    case 65: return PENDING_NEW;
    case 66: return CALCULATED;
    case 67: return EXPIRED;
    case 68: return RESTATED;
    case 69: return PENDING_REPLACE;
    case 70: return TRADE;
    case 71: return TRADE_CORRECT;
    case 72: return TRADE_CANCEL;
    case 73: return ORDER_STATUS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view SettlCurrFxRateCalc::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 68: return DIVIDE;
    case 77: return MULTIPLY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view SettlInstMode::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return STANDING_INSTRUCTIONS_PROVIDED;
    case 52: return SPECIFIC_ORDER_FOR_A_SINGLE_ACCOUNT;
    case 53: return REQUEST_REJECT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view SettlInstTransType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 67: return CANCEL;
    case 78: return NEW;
    case 82: return REPLACE;
    case 84: return RESTATE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view SettlInstSource::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return BROKERS_INSTRUCTIONS;
    case 50: return INSTITUTIONS_INSTRUCTIONS;
    case 51: return INVESTOR;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view SecurityType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65:
      switch (bytes[valBeg + 1]) {
        case 66: return ASSET_BACKED_SECURITIES;
        case 77: return AMENDED_RESTATED;
        case 78: return OTHER_ANTICIPATION_NOTES_BAN_GAN_ETC;
        default: throw std::runtime_error("value");
      }
    case 66:
      switch (bytes[valBeg + 1]) {
        case 65: return BANKERS_ACCEPTANCE;
        case 78: return BANK_NOTES;
        case 79: return BILL_OF_EXCHANGES;
        case 82:
          switch (bytes[valBeg + 2]) {
            case 65: return BRADY_BOND;
            case 73: return BRIDGE_LOAN;
            default: throw std::runtime_error("value");
          }
        case 85: return BUY_SELLBACK;
        default: throw std::runtime_error("value");
      }
    case 67:
      switch (bytes[valBeg + 1]) {
        case 66: return CONVERTIBLE_BOND;
        case 68: return CERTIFICATE_OF_DEPOSIT;
        case 76: return CALL_LOANS;
        case 77:
          switch (bytes[valBeg + 2]) {
            case 66: return CORP_MORTGAGE_BACKED_SECURITIES;
            case 79: return COLLATERALIZED_MORTGAGE_OBLIGATION;
            default: throw std::runtime_error("value");
          }
        case 79:
          switch (bytes[valBeg + 2]) {
            case 70:
              switch (bytes[valBeg + 3]) {
                case 79: return CERTIFICATE_OF_OBLIGATION;
                case 80: return CERTIFICATE_OF_PARTICIPATION;
                default: throw std::runtime_error("value");
              }
            case 82: return CORPORATE_BOND;
            default: throw std::runtime_error("value");
          }
        case 80:
          switch (bytes[valBeg + 2]) {
            case 1: return COMMERCIAL_PAPER;
            case 80: return CORPORATE_PRIVATE_PLACEMENT;
            default: throw std::runtime_error("value");
          }
        case 83: return COMMON_STOCK;
        default: throw std::runtime_error("value");
      }
    case 68:
      switch (bytes[valBeg + 1]) {
        case 69: return DEFAULTED;
        case 73: return DEBTOR_IN_POSSESSION;
        case 78: return DEPOSIT_NOTES;
        case 85: return DUAL_CURRENCY;
        default: throw std::runtime_error("value");
      }
    case 69:
      switch (bytes[valBeg + 1]) {
        case 85:
          switch (bytes[valBeg + 2]) {
            case 67:
              switch (bytes[valBeg + 3]) {
                case 68: return EURO_CERTIFICATE_OF_DEPOSIT;
                case 79: return EURO_CORPORATE_BOND;
                case 80: return EURO_COMMERCIAL_PAPER;
                default: throw std::runtime_error("value");
              }
            case 83:
              switch (bytes[valBeg + 3]) {
                case 79: return EURO_SOVEREIGNS;
                case 85: return EURO_SUPRANATIONAL_COUPONS;
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 70:
      switch (bytes[valBeg + 1]) {
        case 65:
          switch (bytes[valBeg + 2]) {
            case 67: return FEDERAL_AGENCY_COUPON;
            case 68: return FEDERAL_AGENCY_DISCOUNT_NOTE;
            default: throw std::runtime_error("value");
          }
        case 79:
          switch (bytes[valBeg + 2]) {
            case 82:
              switch (bytes[valBeg + 3]) {
                case 1: return FOREIGN_EXCHANGE_CONTRACT;
                case 87: return FORWARD;
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        case 85: return FUTURE;
        default: throw std::runtime_error("value");
      }
    case 71: return GENERAL_OBLIGATION_BONDS;
    case 73: return IOETTE_MORTGAGE;
    case 76:
      switch (bytes[valBeg + 1]) {
        case 79: return LETTER_OF_CREDIT;
        case 81: return LIQUIDITY_NOTE;
        default: throw std::runtime_error("value");
      }
    case 77:
      switch (bytes[valBeg + 1]) {
        case 65: return MATURED;
        case 66: return MORTGAGE_BACKED_SECURITIES;
        case 70: return MUTUAL_FUND;
        case 73: return MORTGAGE_INTEREST_ONLY;
        case 76: return MULTI_LEG_INSTRUMENT;
        case 80:
          switch (bytes[valBeg + 2]) {
            case 79: return MORTGAGE_PRINCIPAL_ONLY;
            case 80: return MORTGAGE_PRIVATE_PLACEMENT;
            case 84: return MISCELLANEOUS_PASS_THROUGH;
            default: throw std::runtime_error("value");
          }
        case 84:
          switch (bytes[valBeg + 2]) {
            case 1: return MANDATORY_TENDER;
            case 78: return MEDIUM_TERM_NOTES;
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 78: return NO_SECURITY_TYPE;
    case 79:
      switch (bytes[valBeg + 1]) {
        case 78: return OVERNIGHT;
        case 80: return OPTION;
        default: throw std::runtime_error("value");
      }
    case 80:
      switch (bytes[valBeg + 1]) {
        case 69: return PRIVATE_EXPORT_FUNDING;
        case 70: return PFANDBRIEFE;
        case 78: return PROMISSORY_NOTE;
        case 83: return PREFERRED_STOCK;
        case 90: return PLAZOS_FIJOS;
        default: throw std::runtime_error("value");
      }
    case 82:
      switch (bytes[valBeg + 1]) {
        case 65: return REVENUE_ANTICIPATION_NOTE;
        case 69:
          switch (bytes[valBeg + 2]) {
            case 80:
              switch (bytes[valBeg + 3]) {
                case 76: return REPLACED;
                case 79: return REPURCHASE;
                default: throw std::runtime_error("value");
              }
            case 84: return RETIRED;
            case 86: return REVENUE_BONDS;
            default: throw std::runtime_error("value");
          }
        case 86:
          switch (bytes[valBeg + 2]) {
            case 76:
              switch (bytes[valBeg + 3]) {
                case 86:
                  switch (bytes[valBeg + 4]) {
                    case 1: return REVOLVER_LOAN;
                    case 84: return REVOLVER_TERM_LOAN;
                    default: throw std::runtime_error("value");
                  }
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 83:
      switch (bytes[valBeg + 1]) {
        case 69:
          switch (bytes[valBeg + 2]) {
            case 67:
              switch (bytes[valBeg + 3]) {
                case 76: return SECURITIES_LOAN;
                case 80: return SECURITIES_PLEDGE;
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        case 80:
          switch (bytes[valBeg + 2]) {
            case 67:
              switch (bytes[valBeg + 3]) {
                case 76:
                  switch (bytes[valBeg + 4]) {
                    case 65: return SPECIAL_ASSESSMENT;
                    case 79: return SPECIAL_OBLIGATION;
                    case 84: return SPECIAL_TAX;
                    default: throw std::runtime_error("value");
                  }
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        case 84:
          switch (bytes[valBeg + 2]) {
            case 78: return SHORT_TERM_LOAN_NOTE;
            case 82: return STRUCTURED_NOTES;
            default: throw std::runtime_error("value");
          }
        case 85: return USD_SUPRANATIONAL_COUPONS;
        case 87: return SWING_LINE_FACILITY;
        default: throw std::runtime_error("value");
      }
    case 84:
      switch (bytes[valBeg + 1]) {
        case 65:
          switch (bytes[valBeg + 2]) {
            case 78: return TAX_ANTICIPATION_NOTE;
            case 88: return TAX_ALLOCATION;
            default: throw std::runtime_error("value");
          }
        case 66:
          switch (bytes[valBeg + 2]) {
            case 65: return TO_BE_ANNOUNCED;
            case 73: return US_TREASURY_BILL_TBILL;
            case 79: return US_TREASURY_BOND;
            default: throw std::runtime_error("value");
          }
        case 67: return PRINCIPAL_STRIP_OF_A_CALLABLE_BOND_OR_NOTE;
        case 68: return TIME_DEPOSIT;
        case 69:
          switch (bytes[valBeg + 2]) {
            case 67: return TAX_EXEMPT_COMMERCIAL_PAPER;
            case 82: return TERM_LOAN;
            default: throw std::runtime_error("value");
          }
        case 73:
          switch (bytes[valBeg + 2]) {
            case 78: return INTEREST_STRIP_FROM_ANY_BOND_OR_NOTE;
            case 80: return TREASURY_INFLATION_PROTECTED_SECURITIES;
            default: throw std::runtime_error("value");
          }
        case 78: return US_TREASURY_NOTE_TNOTE;
        case 80: return PRINCIPAL_STRIP_FROM_A_NON_CALLABLE_BOND_OR_NOTE;
        case 82: return TAX_REVENUE_ANTICIPATION_NOTE;
        default: throw std::runtime_error("value");
      }
    case 85:
      switch (bytes[valBeg + 1]) {
        case 83:
          switch (bytes[valBeg + 2]) {
            case 84:
              switch (bytes[valBeg + 3]) {
                case 1: return US_TREASURY_NOTE_UST;
                case 66: return US_TREASURY_BILL_USTB;
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 86: return VARIABLE_RATE_DEMAND_NOTE;
    case 87:
      switch (bytes[valBeg + 1]) {
        case 65: return WARRANT;
        case 73: return WITHDRAWN;
        default: throw std::runtime_error("value");
      }
    case 88:
      switch (bytes[valBeg + 1]) {
        case 67: return EXTENDED_COMM_NOTE;
        case 76: return INDEXED_LINKED;
        default: throw std::runtime_error("value");
      }
    case 89:
      switch (bytes[valBeg + 1]) {
        case 65: return YANKEE_CORPORATE_BOND;
        case 67: return YANKEE_CERTIFICATE_OF_DEPOSIT;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t StandInstDbType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return OTHER;
    case 49: return DTC_SID;
    case 50: return THOMSON_ALERT;
    case 51: return A_GLOBAL_CUSTODIAN;
    case 52: return ACCOUNTNET;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SettlDeliveryType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return VERSUS_PAYMENT_DELIVER;
    case 49: return FREE_DELIVER;
    case 50: return TRI_PARTY;
    case 51: return HOLD_IN_CUSTODY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocLinkType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return F_X_NETTING;
    case 49: return F_X_SWAP;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PutOrCall::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return PUT;
    case 49: return CALL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CoveredOrUncovered::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return COVERED;
    case 49: return UNCOVERED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view NotifyBrokerOfCredit::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocHandlInst::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return MATCH;
    case 50: return FORWARD;
    case 51: return FORWARD_AND_MATCH;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t RoutingType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return TARGET_FIRM;
    case 50: return TARGET_LIST;
    case 51: return BLOCK_FIRM;
    case 52: return BLOCK_LIST;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view StipulationType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65:
      switch (bytes[valBeg + 1]) {
        case 77: return AMT;
        case 85: return AUTO_REINVESTMENT_AT_RATE_OR_BETTER;
        default: throw std::runtime_error("value");
      }
    case 66:
      switch (bytes[valBeg + 1]) {
        case 65: return BANK_QUALIFIED;
        case 71: return BARGAIN_CONDITIONS_SEE;
        default: throw std::runtime_error("value");
      }
    case 67:
      switch (bytes[valBeg + 1]) {
        case 79: return COUPON_RANGE;
        case 85:
          switch (bytes[valBeg + 2]) {
            case 82: return ISO_CURRENCY_CODE;
            case 83: return CUSTOM_START_END_DATE;
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 71: return GEOGRAPHICS_AND_RANGE;
    case 72: return VALUATION_DISCOUNT;
    case 73:
      switch (bytes[valBeg + 1]) {
        case 78: return INSURED;
        case 83:
          switch (bytes[valBeg + 2]) {
            case 83:
              switch (bytes[valBeg + 3]) {
                case 85:
                  switch (bytes[valBeg + 4]) {
                    case 69:
                      switch (bytes[valBeg + 5]) {
                        case 1: return YEAR_OR_YEAR_MONTH_OF_ISSUE;
                        case 82: return ISSUERS_TICKER;
                        case 83: return ISSUE_SIZE_RANGE;
                        default: throw std::runtime_error("value");
                      }
                    default: throw std::runtime_error("value");
                  }
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 76:
      switch (bytes[valBeg + 1]) {
        case 79:
          switch (bytes[valBeg + 2]) {
            case 79: return LOOKBACK_DAYS;
            case 84:
              switch (bytes[valBeg + 3]) {
                case 1: return EXPLICIT_LOT_IDENTIFIER;
                case 86: return LOT_VARIANCE;
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 77:
      switch (bytes[valBeg + 1]) {
        case 65:
          switch (bytes[valBeg + 2]) {
            case 84:
              switch (bytes[valBeg + 3]) {
                case 1: return MATURITY_YEAR_AND_MONTH;
                case 85: return MATURITY_RANGE;
                default: throw std::runtime_error("value");
              }
            case 88: return MAXIMUM_SUBSTITUTIONS;
            default: throw std::runtime_error("value");
          }
        case 73:
          switch (bytes[valBeg + 2]) {
            case 78:
              switch (bytes[valBeg + 3]) {
                case 68: return MINIMUM_DENOMINATION;
                case 73: return MINIMUM_INCREMENT;
                case 81: return MINIMUM_QUANTITY;
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 80:
      switch (bytes[valBeg + 1]) {
        case 65: return PAYMENT_FREQUENCY_CALENDAR;
        case 73: return NUMBER_OF_PIECES;
        case 77: return POOLS_MAXIMUM;
        case 80:
          switch (bytes[valBeg + 2]) {
            case 76: return POOLS_PER_LOT;
            case 77: return POOLS_PER_MILLION;
            case 84: return POOLS_PER_TRADE;
            default: throw std::runtime_error("value");
          }
        case 82:
          switch (bytes[valBeg + 2]) {
            case 73:
              switch (bytes[valBeg + 3]) {
                case 67:
                  switch (bytes[valBeg + 4]) {
                    case 69:
                      switch (bytes[valBeg + 5]) {
                        case 1: return PRICE_RANGE;
                        case 70: return PRICING_FREQUENCY;
                        default: throw std::runtime_error("value");
                      }
                    default: throw std::runtime_error("value");
                  }
                default: throw std::runtime_error("value");
              }
            case 79:
              switch (bytes[valBeg + 3]) {
                case 68: return PRODUCTION_YEAR;
                case 84: return CALL_PROTECTION;
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        case 85: return PURPOSE;
        case 88: return BENCHMARK_PRICE_SOURCE;
        default: throw std::runtime_error("value");
      }
    case 82:
      switch (bytes[valBeg + 1]) {
        case 65: return RATING_SOURCE_AND_RANGE;
        case 69:
          switch (bytes[valBeg + 2]) {
            case 68: return TYPE_OF_REDEMPTION_VALUES_ARE_NONCALLABLE_CALLABLE_PREFUNDED_ESCROWEDTOMATURITY_PUTABLE_CONVERTIBLE;
            case 83: return RESTRICTED;
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 83:
      switch (bytes[valBeg + 1]) {
        case 69:
          switch (bytes[valBeg + 2]) {
            case 67:
              switch (bytes[valBeg + 3]) {
                case 84:
                  switch (bytes[valBeg + 4]) {
                    case 79: return MARKET_SECTOR;
                    case 89: return SECURITYTYPE_INCLUDED_OR_EXCLUDED;
                    default: throw std::runtime_error("value");
                  }
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        case 84: return STRUCTURE;
        case 85:
          switch (bytes[valBeg + 2]) {
            case 66:
              switch (bytes[valBeg + 3]) {
                case 83:
                  switch (bytes[valBeg + 4]) {
                    case 70: return SUBSTITUTIONS_FREQUENCY;
                    case 76: return SUBSTITUTIONS_LEFT;
                    default: throw std::runtime_error("value");
                  }
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 84:
      switch (bytes[valBeg + 1]) {
        case 69: return FREEFORM_TEXT;
        case 82: return TRADE_VARIANCE;
        default: throw std::runtime_error("value");
      }
    case 87:
      switch (bytes[valBeg + 1]) {
        case 65:
          switch (bytes[valBeg + 2]) {
            case 67: return WEIGHTED_AVERAGE_COUPONVALUE_IN_PERCENT;
            case 76:
              switch (bytes[valBeg + 3]) {
                case 1: return WEIGHTED_AVERAGE_LIFE_COUPON_VALUE_IN_PERCENT;
                case 65: return WEIGHTED_AVERAGE_LOAN_AGE_VALUE_IN_MONTHS;
                default: throw std::runtime_error("value");
              }
            case 77: return WEIGHTED_AVERAGE_MATURITY_VALUE_IN_MONTHS;
            default: throw std::runtime_error("value");
          }
        case 72: return WHOLE_POOL;
        default: throw std::runtime_error("value");
      }
    case 89: return YIELD_RANGE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view YieldType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65:
      switch (bytes[valBeg + 1]) {
        case 70: return AFTER_TAX_YIELD;
        case 78: return ANNUAL_YIELD;
        case 84: return YIELD_AT_ISSUE;
        case 86: return YIELD_TO_AVERAGE_MATURITY;
        default: throw std::runtime_error("value");
      }
    case 66: return BOOK_YIELD;
    case 67:
      switch (bytes[valBeg + 1]) {
        case 65: return YIELD_TO_NEXT_CALL;
        case 72: return YIELD_CHANGE_SINCE_CLOSE;
        case 76: return CLOSING_YIELD;
        case 79: return COMPOUND_YIELD;
        case 85: return CURRENT_YIELD;
        default: throw std::runtime_error("value");
      }
    case 71:
      switch (bytes[valBeg + 1]) {
        case 79: return GOVERNMENT_EQUIVALENT_YIELD;
        case 82: return TRUE_GROSS_YIELD;
        default: throw std::runtime_error("value");
      }
    case 73:
      switch (bytes[valBeg + 1]) {
        case 78:
          switch (bytes[valBeg + 2]) {
            case 70: return YIELD_WITH_INFLATION_ASSUMPTION;
            case 86: return INVERSE_FLOATER_BOND_YIELD;
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 76:
      switch (bytes[valBeg + 1]) {
        case 65:
          switch (bytes[valBeg + 2]) {
            case 83:
              switch (bytes[valBeg + 3]) {
                case 84:
                  switch (bytes[valBeg + 4]) {
                    case 67: return MOST_RECENT_CLOSING_YIELD;
                    case 77: return CLOSING_YIELD_MOST_RECENT_MONTH;
                    case 81: return CLOSING_YIELD_MOST_RECENT_QUARTER;
                    case 89: return CLOSING_YIELD_MOST_RECENT_YEAR;
                    default: throw std::runtime_error("value");
                  }
                default: throw std::runtime_error("value");
              }
            default: throw std::runtime_error("value");
          }
        case 79: return YIELD_TO_LONGEST_AVERAGE_LIFE;
        default: throw std::runtime_error("value");
      }
    case 77:
      switch (bytes[valBeg + 1]) {
        case 65:
          switch (bytes[valBeg + 2]) {
            case 82: return MARK_TO_MARKET_YIELD;
            case 84: return YIELD_TO_MATURITY;
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 78: return YIELD_TO_NEXT_REFUND;
    case 79: return OPEN_AVERAGE_YIELD;
    case 80:
      switch (bytes[valBeg + 1]) {
        case 82:
          switch (bytes[valBeg + 2]) {
            case 69: return PREVIOUS_CLOSE_YIELD;
            case 79: return PROCEEDS_YIELD;
            default: throw std::runtime_error("value");
          }
        case 85: return YIELD_TO_NEXT_PUT;
        default: throw std::runtime_error("value");
      }
    case 83:
      switch (bytes[valBeg + 1]) {
        case 69: return SEMI_ANNUAL_YIELD;
        case 72: return YIELD_TO_SHORTEST_AVERAGE_LIFE;
        case 73: return SIMPLE_YIELD;
        default: throw std::runtime_error("value");
      }
    case 84:
      switch (bytes[valBeg + 1]) {
        case 65: return TAX_EQUIVALENT_YIELD;
        case 69: return YIELD_TO_TENDER_DATE;
        case 82: return TRUE_YIELD;
        default: throw std::runtime_error("value");
      }
    case 86: return YIELD_VALUE_OF_1_32;
    case 87: return YIELD_TO_WORST;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view TradedFlatSwitch::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view SubscriptionRequestType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return SNAPSHOT;
    case 49: return SNAPSHOT_PLUS_UPDATES;
    case 50: return DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t MDUpdateType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return FULL_REFRESH;
    case 49: return INCREMENTAL_REFRESH;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view AggregatedBook::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MDEntryType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return BID;
    case 49: return OFFER;
    case 50: return TRADE;
    case 51: return INDEX_VALUE;
    case 52: return OPENING_PRICE;
    case 53: return CLOSING_PRICE;
    case 54: return SETTLEMENT_PRICE;
    case 55: return TRADING_SESSION_HIGH_PRICE;
    case 56: return TRADING_SESSION_LOW_PRICE;
    case 57: return TRADING_SESSION_VWAP_PRICE;
    case 65: return IMBALANCE;
    case 66: return TRADE_VOLUME;
    case 67: return OPEN_INTEREST;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view TickDirection::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return PLUS_TICK;
    case 49: return ZERO_PLUS_TICK;
    case 50: return MINUS_TICK;
    case 51: return ZERO_MINUS_TICK;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view QuoteCondition::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65: return OPEN;
    case 66: return CLOSED;
    case 67: return EXCHANGE_BEST;
    case 68: return CONSOLIDATED_BEST;
    case 69: return LOCKED;
    case 70: return CROSSED;
    case 71: return DEPTH;
    case 72: return FAST_TRADING;
    case 73: return NON_FIRM;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view TradeCondition::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65: return CASH;
    case 66: return AVERAGE_PRICE_TRADE;
    case 67: return CASH_TRADE;
    case 68: return NEXT_DAY;
    case 69: return OPENING;
    case 70: return INTRADAY_TRADE_DETAIL;
    case 71: return RULE_127_TRADE;
    case 72: return RULE_155_TRADE;
    case 73: return SOLD_LAST;
    case 74: return NEXT_DAY_TRADE;
    case 75: return OPENED;
    case 76: return SELLER;
    case 77: return SOLD;
    case 78: return STOPPED_STOCK;
    case 80: return IMBALANCE_MORE_BUYERS;
    case 81: return IMBALANCE_MORE_SELLERS;
    case 82: return OPENING_PRICE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MDUpdateAction::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NEW;
    case 49: return CHANGE;
    case 50: return DELETE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MDReqRejReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return UNKNOWN_SYMBOL;
    case 49: return DUPLICATE_MDREQID;
    case 50: return INSUFFICIENT_BANDWIDTH;
    case 51: return INSUFFICIENT_PERMISSIONS;
    case 52: return UNSUPPORTED_SUBSCRIPTIONREQUESTTYPE;
    case 53: return UNSUPPORTED_MARKETDEPTH;
    case 54: return UNSUPPORTED_MDUPDATETYPE;
    case 55: return UNSUPPORTED_AGGREGATEDBOOK;
    case 56: return UNSUPPORTED_MDENTRYTYPE;
    case 57: return UNSUPPORTED_TRADINGSESSIONID;
    case 65: return UNSUPPORTED_SCOPE;
    case 66: return UNSUPPORTED_OPENCLOSESETTLEFLAG;
    case 67: return UNSUPPORTED_MDIMPLICITDELETE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view DeleteReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return CANCELATION;
    case 49: return ERROR;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view OpenCloseSettlFlag::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return DAILY_OPEN;
    case 49: return SESSION_OPEN;
    case 50: return DELIVERY_SETTLEMENT_ENTRY;
    case 51: return EXPECTED_ENTRY;
    case 52: return ENTRY_FROM_PREVIOUS_BUSINESS_DAY;
    case 53: return THEORETICAL_PRICE_VALUE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view FinancialStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return BANKRUPT;
    case 50: return PENDING_DELISTING;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view CorporateAction::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65: return EX_DIVIDEND;
    case 66: return EX_DISTRIBUTION;
    case 67: return EX_RIGHTS;
    case 68: return NEW;
    case 69: return EX_INTEREST;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t QuoteStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return ACCEPTED;
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return CANCELED_FOR_SYMBOL;
        case 48: return PENDING;
        case 49: return PASS;
        case 50: return LOCKED_MARKET_WARNING;
        case 51: return CROSS_MARKET_WARNING;
        case 52: return CANCELED_DUE_TO_LOCK_MARKET;
        case 53: return CANCELED_DUE_TO_CROSS_MARKET;
        default: throw std::runtime_error("value");
      }
    case 50: return CANCELED_FOR_SECURITY_TYPE;
    case 51: return CANCELED_FOR_UNDERLYING;
    case 52: return CANCELED_ALL;
    case 53: return REJECTED;
    case 54: return REMOVED_FROM_MARKET;
    case 55: return EXPIRED;
    case 56: return QUERY;
    case 57: return QUOTE_NOT_FOUND;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t QuoteCancelType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return CANCEL_FOR_SYMBOL;
    case 50: return CANCEL_FOR_SECURITY_TYPE;
    case 51: return CANCEL_FOR_UNDERLYING_SYMBOL;
    case 52: return CANCEL_ALL_QUOTES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t QuoteRejectReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return UNKNOWN_SYMBOL;
    case 50: return EXCHANGE;
    case 51: return QUOTE_REQUEST_EXCEEDS_LIMIT;
    case 52: return TOO_LATE_TO_ENTER;
    case 53: return UNKNOWN_QUOTE;
    case 54: return DUPLICATE_QUOTE;
    case 55: return INVALID_BID_ASK_SPREAD;
    case 56: return INVALID_PRICE;
    case 57:
      switch (bytes[valBeg + 1]) {
        case 1: return NOT_AUTHORIZED_TO_QUOTE_SECURITY;
        case 57: return OTHER;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t QuoteResponseLevel::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NO_ACKNOWLEDGEMENT;
    case 49: return ACKNOWLEDGE_ONLY_NEGATIVE_OR_ERRONEOUS_QUOTES;
    case 50: return ACKNOWLEDGE_EACH_QUOTE_MESSAGES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t QuoteRequestType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return MANUAL;
    case 50: return AUTOMATIC;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SecurityRequestType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return REQUEST_SECURITY_IDENTITY_AND_SPECIFICATIONS;
    case 49: return REQUEST_SECURITY_IDENTITY_FOR_THE_SPECIFICATIONS_PROVIDED;
    case 50: return REQUEST_LIST_SECURITY_TYPES;
    case 51: return REQUEST_LIST_SECURITIES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SecurityResponseType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return ACCEPT_SECURITY_PROPOSAL_AS_IS;
    case 50: return ACCEPT_SECURITY_PROPOSAL_WITH_REVISIONS_AS_INDICATED_IN_THE_MESSAGE;
    case 53: return REJECT_SECURITY_PROPOSAL;
    case 54: return CAN_NOT_MATCH_SELECTION_CRITERIA;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view UnsolicitedIndicator::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SecurityTradingStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return OPENING_DELAY;
        case 48: return MARKET_ON_CLOSE_IMBALANCE_SELL;
        case 50: return NO_MARKET_IMBALANCE;
        case 51: return NO_MARKET_ON_CLOSE_IMBALANCE;
        case 52: return ITS_PRE_OPENING;
        case 53: return NEW_PRICE_INDICATION;
        case 54: return TRADE_DISSEMINATION_TIME;
        case 55: return READY_TO_TRADE;
        case 56: return NOT_AVAILABLE_FOR_TRADING;
        case 57: return NOT_TRADED_ON_THIS_MARKET;
        default: throw std::runtime_error("value");
      }
    case 50:
      switch (bytes[valBeg + 1]) {
        case 1: return TRADING_HALT;
        case 48: return UNKNOWN_OR_INVALID;
        case 49: return PRE_OPEN;
        case 50: return OPENING_ROTATION;
        case 51: return FAST_MARKET;
        default: throw std::runtime_error("value");
      }
    case 51: return RESUME;
    case 52: return NO_OPEN_NO_RESUME;
    case 53: return PRICE_INDICATION;
    case 54: return TRADING_RANGE_INDICATION;
    case 55: return MARKET_IMBALANCE_BUY;
    case 56: return MARKET_IMBALANCE_SELL;
    case 57: return MARKET_ON_CLOSE_IMBALANCE_BUY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view HaltReasonChar::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 68: return NEWS_DISSEMINATION;
    case 69: return ORDER_INFLUX;
    case 73: return ORDER_IMBALANCE;
    case 77: return ADDITIONAL_INFORMATION;
    case 80: return NEWS_PENDING;
    case 88: return EQUIPMENT_CHANGEOVER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view InViewOfCommon::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view DueToRelated::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t Adjustment::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return CANCEL;
    case 50: return ERROR;
    case 51: return CORRECTION;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TradSesMethod::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return ELECTRONIC;
    case 50: return OPEN_OUTCRY;
    case 51: return TWO_PARTY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TradSesMode::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return TESTING;
    case 50: return SIMULATED;
    case 51: return PRODUCTION;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TradSesStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return UNKNOWN;
    case 49: return HALTED;
    case 50: return OPEN;
    case 51: return CLOSED;
    case 52: return PRE_OPEN;
    case 53: return PRE_CLOSE;
    case 54: return REQUEST_REJECTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MessageEncoding::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 69: return EUC;
    case 73: return JIS;
    case 83: return FOR_USING_SJIS;
    case 85: return UNICODE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SessionRejectReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return INVALID_TAG_NUMBER;
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return REQUIRED_TAG_MISSING;
        case 48: return SENDINGTIME_ACCURACY_PROBLEM;
        case 49: return INVALID_MSGTYPE;
        case 50: return XML_VALIDATION_ERROR;
        case 51: return TAG_APPEARS_MORE_THAN_ONCE;
        case 52: return TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER;
        case 53: return REPEATING_GROUP_FIELDS_OUT_OF_ORDER;
        case 54: return INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP;
        case 55: return NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER;
        default: throw std::runtime_error("value");
      }
    case 50: return TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE;
    case 51: return UNDEFINED_TAG;
    case 52: return TAG_SPECIFIED_WITHOUT_A_VALUE;
    case 53: return VALUE_IS_INCORRECT;
    case 54: return INCORRECT_DATA_FORMAT_FOR_VALUE;
    case 55: return DECRYPTION_PROBLEM;
    case 56: return SIGNATURE_PROBLEM;
    case 57:
      switch (bytes[valBeg + 1]) {
        case 1: return COMPID_PROBLEM;
        case 57: return OTHER;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view BidRequestTransType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 67: return CANCEL;
    case 78: return NEW;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view SolicitedFlag::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ExecRestatementReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return GT_CORPORATE_ACTION;
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return GT_RENEWAL;
        case 48: return WAREHOUSE_RECAP;
        default: throw std::runtime_error("value");
      }
    case 50: return VERBAL_CHANGE;
    case 51: return REPRICING_OF_ORDER;
    case 52: return BROKER_OPTION;
    case 53: return PARTIAL_DECLINE_OF_ORDERQTY;
    case 54: return CANCEL_ON_TRADING_HALT;
    case 55: return CANCEL_ON_SYSTEM_FAILURE;
    case 56: return MARKET;
    case 57:
      switch (bytes[valBeg + 1]) {
        case 1: return CANCELED_NOT_BEST;
        case 57: return OTHER;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t BusinessRejectReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return OTHER;
    case 49: return UNKOWN_ID;
    case 50: return UNKNOWN_SECURITY;
    case 51: return UNSUPPORTED_MESSAGE_TYPE;
    case 52: return APPLICATION_NOT_AVAILABLE;
    case 53: return CONDITIONALLY_REQUIRED_FIELD_MISSING;
    case 54: return NOT_AUTHORIZED;
    case 55: return DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MsgDirection::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 82: return RECEIVE;
    case 83: return SEND;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view DiscretionInst::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return RELATED_TO_DISPLAYED_PRICE;
    case 49: return RELATED_TO_MARKET_PRICE;
    case 50: return RELATED_TO_PRIMARY_PRICE;
    case 51: return RELATED_TO_LOCAL_PRIMARY_PRICE;
    case 52: return RELATED_TO_MIDPOINT_PRICE;
    case 53: return RELATED_TO_LAST_TRADE_PRICE;
    case 54: return RELATED_TO_VWAP;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t BidType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return NON_DISCLOSED_STYLE;
    case 50: return DISCLOSED_STYLE;
    case 51: return NO_BIDDING_PROCESS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t BidDescriptorType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return SECTOR;
    case 50: return COUNTRY;
    case 51: return INDEX;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SideValueInd::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return SIDEVALUE1;
    case 50: return SIDEVALUE_2;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t LiquidityIndType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return _5DAY_MOVING_AVERAGE;
    case 50: return _20_DAY_MOVING_AVERAGE;
    case 51: return NORMAL_MARKET_SIZE;
    case 52: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ExchangeForPhysical::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ProgRptReqs::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return BUYSIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUSREQUEST;
    case 50: return SELLSIDE_PERIODICALLY_SENDS_STATUS_USING_LISTSTATUS_PERIOD_OPTIONALLY_SPECIFIED_IN_PROGRESSPERIOD;
    case 51: return REAL_TIME_EXECUTION_REPORTS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t IncTaxInd::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return NET;
    case 50: return GROSS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view BidTradeType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65: return AGENCY;
    case 71: return VWAP_GUARANTEE;
    case 74: return GUARANTEED_CLOSE;
    case 82: return RISK_TRADE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view BasisPxType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 50: return CLOSING_PRICE_AT_MORNING_SESSION;
    case 51: return CLOSING_PRICE;
    case 52: return CURRENT_PRICE;
    case 53: return SQ;
    case 54: return VWAP_THROUGH_A_DAY;
    case 55: return VWAP_THROUGH_A_MORNING_SESSION;
    case 56: return VWAP_THROUGH_AN_AFTERNOON_SESSION;
    case 57: return VWAP_THROUGH_A_DAY_EXCEPT_YORI;
    case 65: return VWAP_THROUGH_A_MORNING_SESSION_EXCEPT_YORI;
    case 66: return VWAP_THROUGH_AN_AFTERNOON_SESSION_EXCEPT_YORI;
    case 67: return STRIKE;
    case 68: return OPEN;
    case 90: return OTHERS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PriceType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return PERCENTAGE;
        case 48: return FIXED_CABINET_TRADE_PRICE;
        case 49: return VARIABLE_CABINET_TRADE_PRICE;
        default: throw std::runtime_error("value");
      }
    case 50: return PER_UNIT;
    case 51: return FIXED_AMOUNT;
    case 52: return DISCOUNT_PERCENTAGE_POINTS_BELOW_PAR;
    case 53: return PREMIUM_PERCENTAGE_POINTS_OVER_PAR;
    case 54: return SPREAD;
    case 55: return TED_PRICE;
    case 56: return TED_YIELD;
    case 57: return YIELD;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t GTBookingInst::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION;
    case 49: return ACCUMULATE_EXECUTIONS_UNTIL_ORDER_IS_FILLED_OR_EXPIRES;
    case 50: return ACCUMULATE_UNTIL_VERBALLY_NOTIFIED_OTHERWISE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ListStatusType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return ACK;
    case 50: return RESPONSE;
    case 51: return TIMED;
    case 52: return EXECSTARTED;
    case 53: return ALLDONE;
    case 54: return ALERT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t NetGrossInd::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return NET;
    case 50: return GROSS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ListOrderStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return INBIDDINGPROCESS;
    case 50: return RECEIVEDFOREXECUTION;
    case 51: return EXECUTING;
    case 52: return CANCELING;
    case 53: return ALERT;
    case 54: return ALL_DONE;
    case 55: return REJECT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ListExecInstType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return IMMEDIATE;
    case 50: return WAIT_FOR_EXECUTE_INSTRUCTION;
    case 51: return EXCHANGE_SWITCH_CIV_ORDER_SELL_DRIVEN;
    case 52: return EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_TOP_UP;
    case 53: return EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_WITHDRAW;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view CxlRejResponseTo::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return ORDER_CANCEL_REQUEST;
    case 50: return ORDER_CANCEL_REPLACE_REQUEST;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MultiLegReportingType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return SINGLE_SECURITY;
    case 50: return INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY;
    case 51: return MULTI_LEG_SECURITY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view PartyIDSource::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return KOREAN_INVESTOR_ID;
    case 50: return TAIWANESE_QUALIFIED_FOREIGN_INVESTOR_ID_QFII;
    case 51: return TAIWANESE_TRADING_ACCOUNT;
    case 52: return MALAYSIAN_CENTRAL_DEPOSITORY;
    case 53: return CHINESE_B_SHARE;
    case 54: return UK_NATIONAL_INSURANCE_OR_PENSION_NUMBER;
    case 55: return US_SOCIAL_SECURITY_NUMBER;
    case 56: return US_EMPLOYER_IDENTIFICATION_NUMBER;
    case 57: return AUSTRALIAN_BUSINESS_NUMBER;
    case 65: return AUSTRALIAN_TAX_FILE_NUMBER;
    case 66: return BIC;
    case 67: return GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER;
    case 68: return PROPRIETARY_CUSTOM_CODE;
    case 69: return ISO_COUNTRY_CODE;
    case 70: return SETTLEMENT_ENTITY_LOCATION;
    case 71: return MIC;
    case 72: return CSD_PARTICIPANT_MEMBER_CODE;
    case 73: return DIRECTED_BROKER_THREE_CHARACTER_ACRONYM_AS_DEFINED_IN_ISITC_ETC_BEST_PRACTICE_GUIDELINES_DOCUMENT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PartyRole::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return EXECUTING_FIRM;
        case 48: return SETTLEMENT_LOCATION;
        case 49: return ORDER_ORIGINATION_TRADER;
        case 50: return EXECUTING_TRADER;
        case 51: return ORDER_ORIGINATION_FIRM;
        case 52: return GIVEUP_CLEARING_FIRM;
        case 53: return CORRESPONDANT_CLEARING_FIRM;
        case 54: return EXECUTING_SYSTEM;
        case 55: return CONTRA_FIRM;
        case 56: return CONTRA_CLEARING_FIRM;
        case 57: return SPONSORING_FIRM;
        default: throw std::runtime_error("value");
      }
    case 50:
      switch (bytes[valBeg + 1]) {
        case 1: return BROKER_OF_CREDIT;
        case 48: return UNDERLYING_CONTRA_FIRM;
        case 49: return CLEARING_ORGANIZATION;
        case 50: return EXCHANGE;
        case 52: return CUSTOMER_ACCOUNT;
        case 53: return CORRESPONDENT_CLEARING_ORGANIZATION;
        case 54: return CORRESPONDENT_BROKER;
        case 55: return BUYER_SELLER;
        case 56: return CUSTODIAN;
        case 57: return INTERMEDIARY;
        default: throw std::runtime_error("value");
      }
    case 51:
      switch (bytes[valBeg + 1]) {
        case 1: return CLIENT_ID;
        case 48: return AGENT;
        case 49: return SUB_CUSTODIAN;
        case 50: return BENEFICIARY;
        case 51: return INTERESTED_PARTY;
        case 52: return REGULATORY_BODY;
        case 53: return LIQUIDITY_PROVIDER;
        case 54: return ENTERING_TRADER;
        case 55: return CONTRA_TRADER;
        case 56: return POSITION_ACCOUNT;
        default: throw std::runtime_error("value");
      }
    case 52: return CLEARING_FIRM;
    case 53: return INVESTOR_ID;
    case 54: return INTRODUCING_FIRM;
    case 55: return ENTERING_FIRM;
    case 56: return LOCATE_LENDING_FIRM;
    case 57: return FUND_MANAGER_CLIENT_ID;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t Product::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return AGENCY;
        case 48: return MORTGAGE;
        case 49: return MUNICIPAL;
        case 50: return OTHER;
        case 51: return FINANCING;
        default: throw std::runtime_error("value");
      }
    case 50: return COMMODITY;
    case 51: return CORPORATE;
    case 52: return CURRENCY;
    case 53: return EQUITY;
    case 54: return GOVERNMENT;
    case 55: return INDEX;
    case 56: return LOAN;
    case 57: return MONEYMARKET;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view TestMessageIndicator::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view RoundingDirection::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return ROUND_TO_NEAREST;
    case 49: return ROUND_DOWN;
    case 50: return ROUND_UP;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t DistribPaymentMethod::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return CREST;
        case 48: return BPAY;
        case 49: return HIGH_VALUE_CLEARING_SYSTEM;
        case 50: return REINVEST_IN_FUND;
        default: throw std::runtime_error("value");
      }
    case 50: return NSCC;
    case 51: return EUROCLEAR;
    case 52: return CLEARSTREAM;
    case 53: return CHEQUE;
    case 54: return TELEGRAPHIC_TRANSFER;
    case 55: return FEDWIRE;
    case 56: return DIRECT_CREDIT;
    case 57: return ACH_CREDIT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view CancellationRights::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 77: return NO_WAIVER_AGREEMENT;
    case 78: return NO_EXECUTION_ONLY;
    case 79: return NO_INSTITUTIONAL;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MoneyLaunderingStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return EXEMPT_BELOW_THE_LIMIT;
    case 50: return EXEMPT_CLIENT_MONEY_TYPE_EXEMPTION;
    case 51: return EXEMPT_AUTHORISED_CREDIT_OR_FINANCIAL_INSTITUTION;
    case 78: return NOT_CHECKED;
    case 89: return PASSED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ExecPriceType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 66: return BID_PRICE;
    case 67: return CREATION_PRICE;
    case 68: return CREATION_PRICE_PLUS_ADJUSTMENT;
    case 69: return CREATION_PRICE_PLUS_ADJUSTMENT_AMOUNT;
    case 79: return OFFER_PRICE;
    case 80: return OFFER_PRICE_MINUS_ADJUSTMENT;
    case 81: return OFFER_PRICE_MINUS_ADJUSTMENT_AMOUNT;
    case 83: return SINGLE_PRICE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PaymentMethod::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return CREST;
        case 48: return DIRECT_CREDIT;
        case 49: return CREDIT_CARD;
        case 50: return ACH_DEBIT;
        case 51: return ACH_CREDIT;
        case 52: return BPAY;
        case 53: return HIGH_VALUE_CLEARING_SYSTEM;
        default: throw std::runtime_error("value");
      }
    case 50: return NSCC;
    case 51: return EUROCLEAR;
    case 52: return CLEARSTREAM;
    case 53: return CHEQUE;
    case 54: return TELEGRAPHIC_TRANSFER;
    case 55: return FEDWIRE;
    case 56: return DEBIT_CARD;
    case 57: return DIRECT_DEBIT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TaxAdvantageType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NONE_NOT_APPLICABLE;
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return MAXI_ISA;
        case 48: return EMPLOYEE_CURRENT_YEAR;
        case 49: return EMPLOYER;
        case 50: return EMPLOYER_CURRENT_YEAR;
        case 51: return NON_FUND_PROTOTYPE_IRA;
        case 52: return NON_FUND_QUALIFIED_PLAN;
        case 53: return DEFINED_CONTRIBUTION_PLAN;
        case 54: return INDIVIDUAL_RETIREMENT_ACCOUNT;
        case 55: return INDIVIDUAL_RETIREMENT_ACCOUNT_ROLLOVER;
        case 56: return KEOGH;
        case 57: return PROFIT_SHARING_PLAN;
        default: throw std::runtime_error("value");
      }
    case 50:
      switch (bytes[valBeg + 1]) {
        case 1: return TESSA;
        case 48: return _401K;
        case 49: return SELF_DIRECTED_IRA;
        case 50: return _403;
        case 51: return _457;
        case 52: return ROTH_IRA_24;
        case 53: return ROTH_IRA_25;
        case 54: return ROTH_CONVERSION_IRA_26;
        case 55: return ROTH_CONVERSION_IRA_27;
        case 56: return EDUCATION_IRA_28;
        case 57: return EDUCATION_IRA_29;
        default: throw std::runtime_error("value");
      }
    case 51: return MINI_CASH_ISA;
    case 52: return MINI_STOCKS_AND_SHARES_ISA;
    case 53: return MINI_INSURANCE_ISA;
    case 54: return CURRENT_YEAR_PAYMENT;
    case 55: return PRIOR_YEAR_PAYMENT;
    case 56: return ASSET_TRANSFER;
    case 57: return EMPLOYEE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view FundRenewWaiv::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view RegistStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65: return ACCEPTED;
    case 72: return HELD;
    case 78: return REMINDER_IE_REGISTRATION_INSTRUCTIONS_ARE_STILL_OUTSTANDING;
    case 82: return REJECTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t RegistRejReasonCode::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return INVALID_UNACCEPTABLE_ACCOUNT_TYPE;
        case 48: return INVALID_UNACCEPTABLE_INVESTOR_ID_SOURCE;
        case 49: return INVALID_UNACCEPTABLE_DATE_OF_BIRTH;
        case 50: return INVALID_UNACCEPTABLE_INVESTOR_COUNTRY_OF_RESIDENCE;
        case 51: return INVALID_UNACCEPTABLE_NODISTRIBINSTNS;
        case 52: return INVALID_UNACCEPTABLE_DISTRIB_PERCENTAGE;
        case 53: return INVALID_UNACCEPTABLE_DISTRIB_PAYMENT_METHOD;
        case 54: return INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NAME;
        case 55: return INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_CODE;
        case 56: return INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NUM;
        default: throw std::runtime_error("value");
      }
    case 50: return INVALID_UNACCEPTABLE_TAX_EXEMPT_TYPE;
    case 51: return INVALID_UNACCEPTABLE_OWNERSHIP_TYPE;
    case 52: return INVALID_UNACCEPTABLE_NO_REG_DETLS;
    case 53: return INVALID_UNACCEPTABLE_REG_SEQ_NO;
    case 54: return INVALID_UNACCEPTABLE_REG_DTLS;
    case 55: return INVALID_UNACCEPTABLE_MAILING_DTLS;
    case 56: return INVALID_UNACCEPTABLE_MAILING_INST;
    case 57:
      switch (bytes[valBeg + 1]) {
        case 1: return INVALID_UNACCEPTABLE_INVESTOR_ID;
        case 57: return OTHER;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view RegistTransType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NEW;
    case 49: return REPLACE;
    case 50: return CANCEL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view OwnershipType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 50: return JOINT_TRUSTEES;
    case 74: return JOINT_INVESTORS;
    case 84: return TENANTS_IN_COMMON;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ContAmtType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return COMMISSION_AMOUNT;
        case 48: return EXIT_CHARGE;
        case 49: return FUND_BASED_RENEWAL_COMMISSION;
        case 50: return PROJECTED_FUND_VALUE;
        case 51: return FUND_BASED_RENEWAL_COMMISSION_AMOUNT_13;
        case 52: return FUND_BASED_RENEWAL_COMMISSION_AMOUNT_14;
        case 53: return NET_SETTLEMENT_AMOUNT;
        default: throw std::runtime_error("value");
      }
    case 50: return COMMISSION;
    case 51: return INITIAL_CHARGE_AMOUNT;
    case 52: return INITIAL_CHARGE;
    case 53: return DISCOUNT_AMOUNT;
    case 54: return DISCOUNT;
    case 55: return DILUTION_LEVY_AMOUNT;
    case 56: return DILUTION_LEVY;
    case 57: return EXIT_CHARGE_AMOUNT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t OwnerType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return INDIVIDUAL_INVESTOR;
        case 48: return NETWORKING_SUB_ACCOUNT;
        case 49: return NON_PROFIT_ORGANIZATION;
        case 50: return CORPORATE_BODY;
        case 51: return NOMINEE;
        default: throw std::runtime_error("value");
      }
    case 50: return PUBLIC_COMPANY;
    case 51: return PRIVATE_COMPANY;
    case 52: return INDIVIDUAL_TRUSTEE;
    case 53: return COMPANY_TRUSTEE;
    case 54: return PENSION_PLAN;
    case 55: return CUSTODIAN_UNDER_GIFTS_TO_MINORS_ACT;
    case 56: return TRUSTS;
    case 57: return FIDUCIARIES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view OrderCapacity::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65: return AGENCY;
    case 71: return PROPRIETARY;
    case 73: return INDIVIDUAL;
    case 80: return PRINCIPAL;
    case 82: return RISKLESS_PRINCIPAL;
    case 87: return AGENT_FOR_OTHER_MEMBER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view OrderRestrictions::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return PROGRAM_TRADE;
    case 50: return INDEX_ARBITRAGE;
    case 51: return NON_INDEX_ARBITRAGE;
    case 52: return COMPETING_MARKET_MAKER;
    case 53: return ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_SECURITY;
    case 54: return ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_UNDERLYING_SECURITY_OF_A_DERIVATIVE_SECURITY;
    case 55: return FOREIGN_ENTITY;
    case 56: return EXTERNAL_MARKET_PARTICIPANT;
    case 57: return EXTERNAL_INTER_CONNECTED_MARKET_LINKAGE;
    case 65: return RISKLESS_ARBITRAGE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MassCancelRequestType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return CANCEL_ORDERS_FOR_A_SECURITY;
    case 50: return CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY;
    case 51: return CANCEL_ORDERS_FOR_A_PRODUCT;
    case 52: return CANCEL_ORDERS_FOR_A_CFICODE;
    case 53: return CANCEL_ORDERS_FOR_A_SECURITYTYPE;
    case 54: return CANCEL_ORDERS_FOR_A_TRADING_SESSION;
    case 55: return CANCEL_ALL_ORDERS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MassCancelResponse::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return CANCEL_REQUEST_REJECTED;
    case 49: return CANCEL_ORDERS_FOR_A_SECURITY;
    case 50: return CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY;
    case 51: return CANCEL_ORDERS_FOR_A_PRODUCT;
    case 52: return CANCEL_ORDERS_FOR_A_CFICODE;
    case 53: return CANCEL_ORDERS_FOR_A_SECURITYTYPE;
    case 54: return CANCEL_ORDERS_FOR_A_TRADING_SESSION;
    case 55: return CANCEL_ALL_ORDERS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MassCancelRejectReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return MASS_CANCEL_NOT_SUPPORTED;
    case 49: return INVALID_OR_UNKNOWN_SECURITY;
    case 50: return INVALID_OR_UNKNOWN_UNDERLYING;
    case 51: return INVALID_OR_UNKNOWN_PRODUCT;
    case 52: return INVALID_OR_UNKNOWN_CFICODE;
    case 53: return INVALID_OR_UNKNOWN_SECURITY_TYPE;
    case 54: return INVALID_OR_UNKNOWN_TRADING_SESSION;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t QuoteType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return INDICATIVE;
    case 49: return TRADEABLE;
    case 50: return RESTRICTED_TRADEABLE;
    case 51: return COUNTER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view CashMargin::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return CASH;
    case 50: return MARGIN_OPEN;
    case 51: return MARGIN_CLOSE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view Scope::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return LOCAL;
    case 50: return NATIONAL;
    case 51: return GLOBAL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MDImplicitDelete::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CrossType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return CROSS_TRADE_WHICH_IS_EXECUTED_COMPLETELY_OR_NOT_BOTH_SIDES_ARE_TREATED_IN_THE_SAME_MANNER_THIS_IS_EQUIVALENT_TO_AN_ALL_OR_NONE;
    case 50: return CROSS_TRADE_WHICH_IS_EXECUTED_PARTIALLY_AND_THE_REST_IS_CANCELLED_ONE_SIDE_IS_FULLY_EXECUTED_THE_OTHER_SIDE_IS_PARTIALLY_EXECUTED_WITH_THE_REMAINDER_BEING_CANCELLED_THIS_IS_EQUIVALENT_TO_AN_IMMEDIATE_OR_CANCEL_ON_THE_OTHER_SIDE_NOTE_THE_CROSSPRIORITZATION;
    case 51: return CROSS_TRADE_WHICH_IS_PARTIALLY_EXECUTED_WITH_THE_UNFILLED_PORTIONS_REMAINING_ACTIVE_ONE_SIDE_OF_THE_CROSS_IS_FULLY_EXECUTED;
    case 52: return CROSS_TRADE_IS_EXECUTED_WITH_EXISTING_ORDERS_WITH_THE_SAME_PRICE_IN_THE_CASE_OTHER_ORDERS_EXIST_WITH_THE_SAME_PRICE_THE_QUANTITY_OF_THE_CROSS_IS_EXECUTED_AGAINST_THE_EXISTING_ORDERS_AND_QUOTES_THE_REMAINDER_OF_THE_CROSS_IS_EXECUTED_AGAINST_THE_OTHER_SIDE_OF_THE_CROSS_THE_TWO_SIDES_POTENTIALLY_HAVE_DIFFERENT_QUANTITIES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CrossPrioritization::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NONE;
    case 49: return BUY_SIDE_IS_PRIORITIZED;
    case 50: return SELL_SIDE_IS_PRIORITIZED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t NoSides::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return ONE_SIDE;
    case 50: return BOTH_SIDES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SecurityListRequestType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return SYMBOL;
    case 49: return SECURITYTYPE_AND_OR_CFICODE;
    case 50: return PRODUCT;
    case 51: return TRADINGSESSIONID;
    case 52: return ALL_SECURITIES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SecurityRequestResult::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return VALID_REQUEST;
    case 49: return INVALID_OR_UNSUPPORTED_REQUEST;
    case 50: return NO_INSTRUMENTS_FOUND_THAT_MATCH_SELECTION_CRITERIA;
    case 51: return NOT_AUTHORIZED_TO_RETRIEVE_INSTRUMENT_DATA;
    case 52: return INSTRUMENT_DATA_TEMPORARILY_UNAVAILABLE;
    case 53: return REQUEST_FOR_INSTRUMENT_DATA_NOT_SUPPORTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t MultiLegRptTypeReq::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return REPORT_BY_MULITLEG_SECURITY_ONLY;
    case 49: return REPORT_BY_MULTILEG_SECURITY_AND_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY;
    case 50: return REPORT_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY_ONLY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TradSesStatusRejReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return UNKNOWN_OR_INVALID_TRADINGSESSIONID;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TradeRequestType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return ALL_TRADES;
    case 49: return MATCHED_TRADES_MATCHING_CRITERIA_PROVIDED_ON_REQUEST;
    case 50: return UNMATCHED_TRADES_THAT_MATCH_CRITERIA;
    case 51: return UNREPORTED_TRADES_THAT_MATCH_CRITERIA;
    case 52: return ADVISORIES_THAT_MATCH_CRITERIA;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view PreviouslyReported::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MatchStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return COMPARED_MATCHED_OR_AFFIRMED;
    case 49: return UNCOMPARED_UNMATCHED_OR_UNAFFIRMED;
    case 50: return ADVISORY_OR_ALERT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view MatchType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65:
      switch (bytes[valBeg + 1]) {
        case 49: return EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES_AND_EXECUTION_TIME;
        case 50: return EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES;
        case 51: return EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES_AND_EXECUTION_TIME;
        case 52: return EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES;
        case 53: return EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_EXECUTION_TIME;
        case 81: return COMPARED_RECORDS_RESULTING_FROM_STAMPED_ADVISORIES_OR_SPECIALIST_ACCEPTS_PAIR_OFFS;
        default: throw std::runtime_error("value");
      }
    case 77:
      switch (bytes[valBeg + 1]) {
        case 49: return EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_MINUS_BADGES_AND_TIMES_ACT_M1_MATCH;
        case 50: return SUMMARIZED_MATCH_MINUS_BADGES_AND_TIMES_ACT_M2_MATCH;
        case 51: return ACT_ACCEPTED_TRADE;
        case 52: return ACT_DEFAULT_TRADE;
        case 53: return ACT_DEFAULT_AFTER_M2;
        case 54: return ACT_M6_MATCH;
        case 84: return OCS_LOCKED_IN_NON_ACT;
        default: throw std::runtime_error("value");
      }
    case 83:
      switch (bytes[valBeg + 1]) {
        case 49: return SUMMARIZED_MATCH_USING_A1_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED;
        case 50: return SUMMARIZED_MATCH_USING_A2_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED;
        case 51: return SUMMARIZED_MATCH_USING_A3_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED;
        case 52: return SUMMARIZED_MATCH_USING_A4_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED;
        case 53: return SUMMARIZED_MATCH_USING_A5_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view OddLot::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ClearingInstruction::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return PROCESS_NORMALLY;
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return EXCLUDE_FROM_ALL_NETTING;
        case 48: return AUTOMATIC_GIVE_UP_MODE;
        case 49: return QUALIFIED_SERVICE_REPRESENTATIVE;
        case 50: return CUSTOMER_TRADE;
        case 51: return SELF_CLEARING;
        default: throw std::runtime_error("value");
      }
    case 50: return BILATERAL_NETTING_ONLY;
    case 51: return EX_CLEARING;
    case 52: return SPECIAL_TRADE;
    case 53: return MULTILATERAL_NETTING;
    case 54: return CLEAR_AGAINST_CENTRAL_COUNTERPARTY;
    case 55: return EXCLUDE_FROM_CENTRAL_COUNTERPARTY;
    case 56: return MANUAL_MODE;
    case 57: return AUTOMATIC_POSTING_MODE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AccountType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS;
    case 50: return ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS;
    case 51: return HOUSE_TRADER;
    case 52: return FLOOR_TRADER;
    case 54: return ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED;
    case 55: return ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED;
    case 56: return JOINT_BACKOFFICE_ACCOUNT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CustOrderCapacity::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return MEMBER_TRADING_FOR_THEIR_OWN_ACCOUNT;
    case 50: return CLEARING_FIRM_TRADING_FOR_ITS_PROPRIETARY_ACCOUNT;
    case 51: return MEMBER_TRADING_FOR_ANOTHER_MEMBER;
    case 52: return ALL_OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t MassStatusReqType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return STATUS_FOR_ORDERS_FOR_A_SECURITY;
    case 50: return STATUS_FOR_ORDERS_FOR_AN_UNDERLYING_SECURITY;
    case 51: return STATUS_FOR_ORDERS_FOR_A_PRODUCT;
    case 52: return STATUS_FOR_ORDERS_FOR_A_CFICODE;
    case 53: return STATUS_FOR_ORDERS_FOR_A_SECURITYTYPE;
    case 54: return STATUS_FOR_ORDERS_FOR_A_TRADING_SESSION;
    case 55: return STATUS_FOR_ALL_ORDERS;
    case 56: return STATUS_FOR_ORDERS_FOR_A_PARTYID;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view DayBookingInst::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR;
    case 49: return SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING;
    case 50: return ACCUMULATE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view BookingUnit::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return EACH_PARTIAL_EXECUTION_IS_A_BOOKABLE_UNIT;
    case 49: return AGGREGATE_PARTIAL_EXECUTIONS_ON_THIS_ORDER_AND_BOOK_ONE_TRADE_PER_ORDER;
    case 50: return AGGREGATE_EXECUTIONS_FOR_THIS_SYMBOL_SIDE_AND_SETTLEMENT_DATE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view PreallocMethod::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return PRO_RATA;
    case 49: return DO_NOT_PRO_RATA_DISCUSS_FIRST;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return CALCULATED;
    case 50: return PRELIMINARY;
    case 53: return READY_TO_BOOK;
    case 55: return WAREHOUSE_INSTRUCTION;
    case 56: return REQUEST_TO_INTERMEDIARY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ClearingFeeIndicator::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return _1ST_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT;
    case 50: return _2ND_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT;
    case 51: return _3RD_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT;
    case 52: return _4TH_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT;
    case 53: return _5TH_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT;
    case 57: return _6TH_YEAR_AND_BEYOND_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT;
    case 66: return CBOE_MEMBER;
    case 67: return NON_MEMBER_AND_CUSTOMER;
    case 69: return EQUITY_MEMBER_AND_CLEARING_MEMBER;
    case 70: return FULL_AND_ASSOCIATE_MEMBER_TRADING_FOR_OWN_ACCOUNT_AND_AS_FLOOR_BROKERS;
    case 72: return _106H_AND_106J_FIRMS;
    case 73: return GIM_IDEM_AND_COM_MEMBERSHIP_INTEREST_HOLDERS;
    case 76: return LESSEE_AND_106F_EMPLOYEES;
    case 77: return ALL_OTHER_OWNERSHIP_TYPES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view WorkingIndicator::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PriorityIndicator::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return PRIORITY_UNCHANGED;
    case 49: return LOST_PRIORITY_AS_RESULT_OF_ORDER_CHANGE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view LegalConfirm::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t QuoteRequestRejectReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return UNKNOWN_SYMBOL;
        case 48: return PASS;
        default: throw std::runtime_error("value");
      }
    case 50: return EXCHANGE;
    case 51: return QUOTE_REQUEST_EXCEEDS_LIMIT;
    case 52: return TOO_LATE_TO_ENTER;
    case 53: return INVALID_PRICE;
    case 54: return NOT_AUTHORIZED_TO_REQUEST_QUOTE;
    case 55: return NO_MATCH_FOR_INQUIRY;
    case 56: return NO_MARKET_FOR_INSTRUMENT;
    case 57:
      switch (bytes[valBeg + 1]) {
        case 1: return NO_INVENTORY;
        case 57: return OTHER;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AcctIDSource::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return BIC;
    case 50: return SID_CODE;
    case 51: return TFM;
    case 52: return OMGEO;
    case 53: return DTCC_CODE;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ConfirmStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return RECEIVED;
    case 50: return MISMATCHED_ACCOUNT;
    case 51: return MISSING_SETTLEMENT_INSTRUCTIONS;
    case 52: return CONFIRMED;
    case 53: return REQUEST_REJECTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ConfirmTransType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NEW;
    case 49: return REPLACE;
    case 50: return CANCEL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t DeliveryForm::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return BOOKENTRY;
    case 50: return BEARER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t LegSwapType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return PAR_FOR_PAR;
    case 50: return MODIFIED_DURATION;
    case 52: return RISK;
    case 53: return PROCEEDS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t QuotePriceType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return PERCENT;
        case 48: return YIELD;
        default: throw std::runtime_error("value");
      }
    case 50: return PER_SHARE;
    case 51: return FIXED_AMOUNT;
    case 52: return DISCOUNT_PERCENTAGE_POINTS_BELOW_PAR;
    case 53: return PREMIUM_PERCENTAGE_POINTS_OVER_PAR;
    case 54: return BASIS_POINTS_RELATIVE_TO_BENCHMARK;
    case 55: return TED_PRICE;
    case 56: return TED_YIELD;
    case 57: return YIELD_SPREAD;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t QuoteRespType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return HIT_LIFT;
    case 50: return COUNTER;
    case 51: return EXPIRED;
    case 52: return COVER;
    case 53: return DONE_AWAY;
    case 54: return PASS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view PosType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65:
      switch (bytes[valBeg + 1]) {
        case 76: return ALLOCATION_TRADE_QTY;
        case 83:
          switch (bytes[valBeg + 2]) {
            case 1: return OPTION_ASSIGNMENT;
            case 70: return AS_OF_TRADE_QTY;
            default: throw std::runtime_error("value");
          }
        default: throw std::runtime_error("value");
      }
    case 68: return DELIVERY_QTY;
    case 69:
      switch (bytes[valBeg + 1]) {
        case 84: return ELECTRONIC_TRADE_QTY;
        case 88: return OPTION_EXERCISE_QTY;
        default: throw std::runtime_error("value");
      }
    case 70: return END_OF_DAY_QTY;
    case 73:
      switch (bytes[valBeg + 1]) {
        case 65: return INTRA_SPREAD_QTY;
        case 69: return INTER_SPREAD_QTY;
        default: throw std::runtime_error("value");
      }
    case 80:
      switch (bytes[valBeg + 1]) {
        case 65: return ADJUSTMENT_QTY;
        case 73: return PIT_TRADE_QTY;
        default: throw std::runtime_error("value");
      }
    case 83:
      switch (bytes[valBeg + 1]) {
        case 79: return START_OF_DAY_QTY;
        case 80: return INTEGRAL_SPLIT;
        default: throw std::runtime_error("value");
      }
    case 84:
      switch (bytes[valBeg + 1]) {
        case 65: return TRANSACTION_FROM_ASSIGNMENT;
        case 79: return TOTAL_TRANSACTION_QTY;
        case 81: return TRANSACTION_QUANTITY;
        case 82: return TRANSFER_TRADE_QTY;
        case 88: return TRANSACTION_FROM_EXERCISE;
        default: throw std::runtime_error("value");
      }
    case 88: return CROSS_MARGIN_QTY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PosQtyStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return SUBMITTED;
    case 49: return ACCEPTED;
    case 50: return REJECTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view PosAmtType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 67:
      switch (bytes[valBeg + 1]) {
        case 65: return CASH_AMOUNT;
        case 82: return CASH_RESIDUAL_AMOUNT;
        default: throw std::runtime_error("value");
      }
    case 70: return FINAL_MARK_TO_MARKET_AMOUNT;
    case 73: return INCREMENTAL_MARK_TO_MARKET_AMOUNT;
    case 80: return PREMIUM_AMOUNT;
    case 83: return START_OF_DAY_MARK_TO_MARKET_AMOUNT;
    case 84: return TRADE_VARIATION_AMOUNT;
    case 86: return VALUE_ADJUSTED_AMOUNT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PosTransType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return EXERCISE;
    case 50: return DO_NOT_EXERCISE;
    case 51: return POSITION_ADJUSTMENT;
    case 52: return POSITION_CHANGE_SUBMISSION_MARGIN_DISPOSITION;
    case 53: return PLEDGE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PosMaintAction::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return NEW_USED_TO_INCREMENT_THE_OVERALL_TRANSACTION_QUANTITY;
    case 50: return REPLACE_USED_TO_OVERRIDE_THE_OVERALL_TRANSACTION_QUANTITY_OR_SPECIFIC_ADD_MESSAGES_BASED_ON_THE_REFERENCE_ID;
    case 51: return CANCEL_USED_TO_REMOVE_THE_OVERALL_TRANSACTION_OR_SPECIFIC_ADD_MESSAGES_BASED_ON_REFERENCE_ID;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view SettlSessID::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 69: return ELECTRONIC_TRADING_HOURS;
    case 73: return INTRADAY;
    case 82: return REGULAR_TRADING_HOURS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AdjustmentType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return PROCESS_REQUEST_AS_MARGIN_DISPOSITION;
    case 49: return DELTA_PLUS;
    case 50: return DELTA_MINUS;
    case 51: return FINAL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PosMaintStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return ACCEPTED;
    case 49: return ACCEPTED_WITH_WARNINGS;
    case 50: return REJECTED;
    case 51: return COMPLETED;
    case 52: return COMPLETED_WITH_WARNINGS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PosMaintResult::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return SUCCESSFUL_COMPLETION;
    case 49: return REJECTED;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PosReqType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return POSITIONS;
    case 49: return TRADES;
    case 50: return EXERCISES;
    case 51: return ASSIGNMENTS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ResponseTransportType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return INBAND_TRANSPORT_THE_REQUEST_WAS_SENT_OVER;
    case 49: return OUT_OF_BAND_PRE_ARRANGED_OUT_OF_BAND_DELIVERY_MECHANISM;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PosReqResult::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return VALID_REQUEST;
    case 49: return INVALID_OR_UNSUPPORTED_REQUEST;
    case 50: return NO_POSITIONS_FOUND_THAT_MATCH_CRITERIA;
    case 51: return NOT_AUTHORIZED_TO_REQUEST_POSITIONS;
    case 52: return REQUEST_FOR_POSITION_NOT_SUPPORTED;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PosReqStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return COMPLETED;
    case 49: return COMPLETED_WITH_WARNINGS;
    case 50: return REJECTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SettlPriceType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return FINAL;
    case 50: return THEORETICAL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view AssignmentMethod::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 80: return PRORATA;
    case 82: return RANDOM;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view ExerciseMethod::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 65: return AUTOMATIC;
    case 77: return MANUAL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TradeRequestResult::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return SUCCESSFUL;
    case 49: return INVALID_OR_UNKNOWN_INSTRUMENT;
    case 50: return INVALID_TYPE_OF_TRADE_REQUESTED;
    case 51: return INVALID_PARTIES;
    case 52: return INVALID_TRANSPORT_TYPE_REQUESTED;
    case 53: return INVALID_DESTINATION_REQUESTED;
    case 56: return TRADEREQUESTTYPE_NOT_SUPPORTED;
    case 57:
      switch (bytes[valBeg + 1]) {
        case 1: return UNAUTHORIZED_FOR_TRADE_CAPTURE_REPORT_REQUEST;
        case 57: return OTHER;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TradeRequestStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return ACCEPTED;
    case 49: return COMPLETED;
    case 50: return REJECTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TradeReportRejectReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return SUCCESSFUL;
    case 49: return INVALID_PARTY_INFORMATION;
    case 50: return UNKNOWN_INSTRUMENT;
    case 51: return UNAUTHORIZED_TO_REPORT_TRADES;
    case 52: return INVALID_TRADE_TYPE;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SideMultiLegReportingType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return SINGLE_SECURITY;
    case 50: return INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY;
    case 51: return MULTI_LEG_SECURITY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TrdRegTimestampType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return EXECUTION_TIME;
    case 50: return TIME_IN;
    case 51: return TIME_OUT;
    case 52: return BROKER_RECEIPT;
    case 53: return BROKER_EXECUTION;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ConfirmType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return STATUS;
    case 50: return CONFIRMATION;
    case 51: return CONFIRMATION_REQUEST_REJECTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ConfirmRejReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return MISMATCHED_ACCOUNT;
    case 50: return MISSING_SETTLEMENT_INSTRUCTIONS;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t BookingType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return REGULAR_BOOKING;
    case 49: return CFD;
    case 50: return TOTAL_RETURN_SWAP;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocSettlInstType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return USE_DEFAULT_INSTRUCTIONS;
    case 49: return DERIVE_FROM_PARAMETERS_PROVIDED;
    case 50: return FULL_DETAILS_PROVIDED;
    case 51: return SSI_DB_IDS_PROVIDED;
    case 52: return PHONE_FOR_INSTRUCTIONS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view DlvyInstType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 67: return CASH;
    case 83: return SECURITIES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TerminationType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return OVERNIGHT;
    case 50: return TERM;
    case 51: return FLEXIBLE;
    case 52: return OPEN;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t SettlInstReqRejCode::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return UNABLE_TO_PROCESS_REQUEST;
    case 49: return UNKNOWN_ACCOUNT;
    case 50: return NO_MATCHING_SETTLEMENT_INSTRUCTIONS_FOUND;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocReportType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 51: return SELLSIDE_CALCULATED_USING_PRELIMINARY;
    case 52: return SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY;
    case 53: return WAREHOUSE_RECAP;
    case 56: return REQUEST_TO_INTERMEDIARY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocCancReplaceReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return ORIGINAL_DETAILS_INCOMPLETE_INCORRECT;
    case 50: return CHANGE_IN_UNDERLYING_ORDER_DETAILS;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocAccountType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS;
    case 50: return ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS;
    case 51: return HOUSE_TRADER;
    case 52: return FLOOR_TRADER;
    case 54: return ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED;
    case 55: return ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED;
    case 56: return JOINT_BACKOFFICE_ACCOUNT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PartySubIDType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return FIRM;
        case 48: return SECURITIES_ACCOUNT_NUMBER;
        case 49: return REGISTRATION_NUMBER;
        case 50: return REGISTERED_ADDRESS_12;
        case 51: return REGULATORY_STATUS;
        case 52: return REGISTRATION_NAME;
        case 53: return CASH_ACCOUNT_NUMBER;
        case 54: return BIC;
        case 55: return CSD_PARTICIPANT_MEMBER_CODE;
        case 56: return REGISTERED_ADDRESS_18;
        case 57: return FUND_ACCOUNT_NAME;
        default: throw std::runtime_error("value");
      }
    case 50:
      switch (bytes[valBeg + 1]) {
        case 1: return PERSON;
        case 48: return TELEX_NUMBER;
        case 49: return FAX_NUMBER;
        case 50: return SECURITIES_ACCOUNT_NAME;
        case 51: return CASH_ACCOUNT_NAME;
        case 52: return DEPARTMENT;
        case 53: return LOCATION;
        case 54: return POSITION_ACCOUNT_TYPE;
        default: throw std::runtime_error("value");
      }
    case 51: return SYSTEM;
    case 52: return APPLICATION;
    case 53: return FULL_LEGAL_NAME_OF_FIRM;
    case 54: return POSTAL_ADDRESS;
    case 55: return PHONE_NUMBER;
    case 56: return EMAIL_ADDRESS;
    case 57: return CONTACT_NAME;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocIntermedReqType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return PENDING_ACCEPT;
    case 50: return PENDING_RELEASE;
    case 51: return PENDING_REVERSAL;
    case 52: return ACCEPT;
    case 53: return BLOCK_LEVEL_REJECT;
    case 54: return ACCOUNT_LEVEL_REJECT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ApplQueueResolution::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NO_ACTION_TAKEN;
    case 49: return QUEUE_FLUSHED;
    case 50: return OVERLAY_LAST;
    case 51: return END_SESSION;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ApplQueueAction::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NO_ACTION_TAKEN;
    case 49: return QUEUE_FLUSHED;
    case 50: return OVERLAY_LAST;
    case 51: return END_SESSION;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AvgPxIndicator::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NO_AVERAGE_PRICING;
    case 49: return TRADE_IS_PART_OF_AN_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID;
    case 50: return LAST_TRADE_IN_THE_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TradeAllocIndicator::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return ALLOCATION_NOT_REQUIRED;
    case 49: return ALLOCATION_REQUIRED;
    case 50: return USE_ALLOCATION_PROVIDED_WITH_THE_TRADE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ExpirationCycle::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return EXPIRE_ON_TRADING_SESSION_CLOSE;
    case 49: return EXPIRE_ON_TRADING_SESSION_OPEN;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TrdType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return REGULAR_TRADE;
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return BLOCK_TRADE;
        case 48: return AFTER_HOURS_TRADE;
        default: throw std::runtime_error("value");
      }
    case 50: return EFP;
    case 51: return TRANSFER;
    case 52: return LATE_TRADE;
    case 53: return T_TRADE;
    case 54: return WEIGHTED_AVERAGE_PRICE_TRADE;
    case 55: return BUNCHED_TRADE;
    case 56: return LATE_BUNCHED_TRADE;
    case 57: return PRIOR_REFERENCE_PRICE_TRADE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PegMoveType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return FLOATING;
    case 49: return FIXED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PegOffsetType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return PRICE;
    case 49: return BASIS_POINTS;
    case 50: return TICKS;
    case 51: return PRICE_TIER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PegLimitType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return OR_BETTER;
    case 49: return STRICT_LIMIT_IS_A_STRICT_LIMIT;
    case 50: return OR_WORSE_FOR_A_BUY_THE_PEG_LIMIT_IS_A_MINIMUM_AND_FOR_A_SELL_THE_PEG_LIMIT_IS_A_MAXIMUM;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PegRoundDirection::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return MORE_AGGRESSIVE_ON_A_BUY_ORDER_ROUND_THE_PRICE_UP_ROUND_UP_TO_THE_NEAREST_TICK_ON_A_SELL_ROUND_DOWN_TO_THE_NEAREST_TICK;
    case 50: return MORE_PASSIVE_ON_A_BUY_ORDER_ROUND_DOWN_TO_NEAREST_TICK_ON_A_SELL_ORDER_ROUND_UP_TO_NEAREST_TICK;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t PegScope::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return LOCAL;
    case 50: return NATIONAL;
    case 51: return GLOBAL;
    case 52: return NATIONAL_EXCLUDING_LOCAL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t DiscretionMoveType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return FLOATING;
    case 49: return FIXED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t DiscretionOffsetType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return PRICE;
    case 49: return BASIS_POINTS;
    case 50: return TICKS;
    case 51: return PRICE_TIER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t DiscretionLimitType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return OR_BETTER;
    case 49: return STRICT_LIMIT_IS_A_STRICT_LIMIT;
    case 50: return OR_WORSE_FOR_A_BUY_THE_DISCRETION_PRICE_IS_A_MINIMUM_AND_FOR_A_SELL_THE_DISCRETION_PRICE_IS_A_MAXIMUM;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t DiscretionRoundDirection::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return MORE_AGGRESSIVE_ON_A_BUY_ORDER_ROUND_THE_PRICE_UP_ROUND_UP_TO_THE_NEAREST_TICK_ON_A_SELL_ROUND_DOWN_TO_THE_NEAREST_TICK;
    case 50: return MORE_PASSIVE_ON_A_BUY_ORDER_ROUND_DOWN_TO_NEAREST_TICK_ON_A_SELL_ORDER_ROUND_UP_TO_NEAREST_TICK;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t DiscretionScope::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return LOCAL;
    case 50: return NATIONAL;
    case 51: return GLOBAL;
    case 52: return NATIONAL_EXCLUDING_LOCAL;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TargetStrategy::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return VWAP;
    case 50: return PARTICIPATE;
    case 51: return MININIZE_MARKET_IMPACT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t LastLiquidityInd::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return ADDED_LIQUIDITY;
    case 50: return REMOVED_LIQUIDITY;
    case 51: return LIQUIDITY_ROUTED_OUT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view PublishTrdIndicator::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t ShortSaleReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return DEALER_SOLD_SHORT;
    case 49: return DEALER_SOLD_SHORT_EXEMPT;
    case 50: return SELLING_CUSTOMER_SOLD_SHORT;
    case 51: return SELLING_CUSTOMER_SOLD_SHORT_EXEMPT;
    case 52: return QUALIFED_SERVICE_REPRESENTATIVE;
    case 53: return QSR_OR_AGU_CONTRA_SIDE_SOLD_SHORT_EXEMPT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t QtyType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return UNITS;
    case 49: return CONTRACTS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TradeReportType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return SUBMIT;
    case 49: return ALLEGED;
    case 50: return ACCEPT;
    case 51: return DECLINE;
    case 52: return ADDENDUM;
    case 53: return NO_WAS;
    case 54: return TRADE_REPORT_CANCEL;
    case 55: return LOCKED_IN_TRADE_BREAK;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AllocNoOrdersType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NOT_SPECIFIED;
    case 49: return EXPLICIT_LIST_PROVIDED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t EventType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return PUT;
    case 50: return CALL;
    case 51: return TENDER;
    case 52: return SINKING_FUND_CALL;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t InstrAttribType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49:
      switch (bytes[valBeg + 1]) {
        case 1: return FLAT;
        case 48: return ORIGINAL_ISSUE_DISCOUNT;
        case 49: return CALLABLE_PUTTABLE;
        case 50: return ESCROWED_TO_MATURITY;
        case 51: return ESCROWED_TO_REDEMPTION_DATE_CALLABLE_SUPPLY_REDEMPTION_DATE_IN_THE_INSTRATTRIBVALUE;
        case 52: return PREREFUNDED;
        case 53: return IN_DEFAULT;
        case 54: return UNRATED;
        case 55: return TAXABLE;
        case 56: return INDEXED;
        case 57: return SUBJECT_TO_ALTERNATIVE_MINIMUM_TAX;
        default: throw std::runtime_error("value");
      }
    case 50:
      switch (bytes[valBeg + 1]) {
        case 1: return ZERO_COUPON;
        case 48: return ORIGINAL_ISSUE_DISCOUNT_PRICE_SUPPLY_PRICE_IN_THE_INSTRATTRIBVALUE;
        case 49: return CALLABLE_BELOW_MATURITY_VALUE;
        case 50: return CALLABLE_WITHOUT_NOTICE_BY_MAIL_TO_HOLDER_UNLESS_REGISTERED;
        default: throw std::runtime_error("value");
      }
    case 51: return INTEREST_BEARING;
    case 52: return NO_PERIODIC_PAYMENTS;
    case 53: return VARIABLE_RATE;
    case 54: return LESS_FEE_FOR_PUT;
    case 55: return STEPPED_COUPON;
    case 56: return COUPON_PERIOD;
    case 57:
      switch (bytes[valBeg + 1]) {
        case 1: return WHEN_AND_IF_ISSUED;
        case 57: return TEXT_SUPPLY_THE_TEXT_OF_THE_ATTRIBUTE_OR_DISCLAIMER_IN_THE_INSTRATTRIBVALUE;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CPProgram::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return _3;
    case 50: return _4;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t MiscFeeBasis::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return ABSOLUTE;
    case 49: return PER_UNIT;
    case 50: return PERCENTAGE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

std::string_view LastFragment::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 78: return NO;
    case 89: return YES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CollAsgnReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return INITIAL;
    case 49: return SCHEDULED;
    case 50: return TIME_WARNING;
    case 51: return MARGIN_DEFICIENCY;
    case 52: return MARGIN_EXCESS;
    case 53: return FORWARD_COLLATERAL_DEMAND;
    case 54: return EVENT_OF_DEFAULT;
    case 55: return ADVERSE_TAX_EVENT;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CollInquiryQualifier::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return TRADEDATE;
    case 49: return GC_INSTRUMENT;
    case 50: return COLLATERALINSTRUMENT;
    case 51: return SUBSTITUTION_ELIGIBLE;
    case 52: return NOT_ASSIGNED;
    case 53: return PARTIALLY_ASSIGNED;
    case 54: return FULLY_ASSIGNED;
    case 55: return OUTSTANDING_TRADES;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CollAsgnTransType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return NEW;
    case 49: return REPLACE;
    case 50: return CANCEL;
    case 51: return RELEASE;
    case 52: return REVERSE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CollAsgnRespType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return RECEIVED;
    case 49: return ACCEPTED;
    case 50: return DECLINED;
    case 51: return REJECTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CollAsgnRejectReason::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return UNKNOWN_DEAL;
    case 49: return UNKNOWN_OR_INVALID_INSTRUMENT;
    case 50: return UNAUTHORIZED_TRANSACTION;
    case 51: return INSUFFICIENT_COLLATERAL;
    case 52: return INVALID_TYPE_OF_COLLATERAL;
    case 53: return EXCESSIVE_SUBSTITUTION;
    case 57: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CollStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return UNASSIGNED;
    case 49: return PARTIALLY_ASSIGNED;
    case 50: return ASSIGNMENT_PROPOSED;
    case 51: return ASSIGNED;
    case 52: return CHALLENGED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t DeliveryType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return VERSUS_PAYMENT_DELIVER;
    case 49: return FREE_DELIVER;
    case 50: return TRI_PARTY;
    case 51: return HOLD_IN_CUSTODY;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t UserRequestType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return LOGONUSER;
    case 50: return LOGOFFUSER;
    case 51: return CHANGEPASSWORDFORUSER;
    case 52: return REQUEST_INDIVIDUAL_USER_STATUS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t UserStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return LOGGED_IN;
    case 50: return NOT_LOGGED_IN;
    case 51: return USER_NOT_RECOGNISED;
    case 52: return PASSWORD_INCORRECT;
    case 53: return PASSWORD_CHANGED;
    case 54: return OTHER;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t StatusValue::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return CONNECTED;
    case 50: return NOT_CONNECTED_DOWN_EXPECTED_UP;
    case 51: return NOT_CONNECTED_DOWN_EXPECTED_DOWN;
    case 52: return IN_PROCESS;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t NetworkRequestType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return SNAPSHOT;
    case 50: return SUBSCRIBE;
    case 52: return STOP_SUBSCRIBING;
    case 56: return LEVEL_OF_DETAIL_THEN_NOCOMPIDS_BECOMES_REQUIRED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t NetworkStatusResponseType::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return FULL;
    case 50: return INCREMENTAL_UPDATE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t TrdRptStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return ACCEPTED;
    case 49: return REJECTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t AffirmStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 49: return RECEIVED;
    case 50: return CONFIRM_REJECTED_IE_NOT_AFFIRMED;
    case 51: return AFFIRMED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CollAction::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return RETAIN;
    case 49: return ADD;
    case 50: return REMOVE;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CollInquiryStatus::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return ACCEPTED;
    case 49: return ACCEPTED_WITH_WARNINGS;
    case 50: return COMPLETED;
    case 51: return COMPLETED_WITH_WARNINGS;
    case 52: return REJECTED;
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

int64_t CollInquiryResult::value(const char* bytes, int valBeg) {
  switch (bytes[valBeg]) {
    case 48: return SUCCESSFUL;
    case 49: return INVALID_OR_UNKNOWN_INSTRUMENT;
    case 50: return INVALID_OR_UNKNOWN_COLLATERAL_TYPE;
    case 51: return INVALID_PARTIES;
    case 52: return INVALID_TRANSPORT_TYPE_REQUESTED;
    case 53: return INVALID_DESTINATION_REQUESTED;
    case 54: return NO_COLLATERAL_FOUND_FOR_THE_TRADE_SPECIFIED;
    case 55: return NO_COLLATERAL_FOUND_FOR_THE_ORDER_SPECIFIED;
    case 56: return COLLATERAL_INQUIRY_TYPE_NOT_SUPPORTED;
    case 57:
      switch (bytes[valBeg + 1]) {
        case 1: return UNAUTHORIZED_FOR_COLLATERAL_INQUIRY;
        case 57: return OTHER;
        default: throw std::runtime_error("value");
      }
    default: throw std::runtime_error("value");
  }
  throw std::runtime_error("value");
}

}  // namespace fix::gen::field

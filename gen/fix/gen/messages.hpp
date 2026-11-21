#pragma once

#include "fix/message.hpp"
#include "fix/gen/fields.hpp"
#include "fix/gen/groups.hpp"
#include "fix/gen/tags.hpp"

namespace fix::gen::message {

class Heartbeat : public AbstractMessage {
 public:
  Heartbeat();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::TestReqID& testReqID() { return testReqID_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::TestReqID testReqID_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[31];
  AbstractGroup* slotGroups_[1];
};

class TestRequest : public AbstractMessage {
 public:
  TestRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::TestReqID& testReqID() { return testReqID_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::TestReqID testReqID_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[31];
  AbstractGroup* slotGroups_[1];
};

class ResendRequest : public AbstractMessage {
 public:
  ResendRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::BeginSeqNo& beginSeqNo() { return beginSeqNo_; }
  field::EndSeqNo& endSeqNo() { return endSeqNo_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::BeginSeqNo beginSeqNo_{this};
  field::EndSeqNo endSeqNo_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[32];
  AbstractGroup* slotGroups_[1];
};

class Reject : public AbstractMessage {
 public:
  Reject();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::RefSeqNum& refSeqNum() { return refSeqNum_; }
  field::RefTagID& refTagID() { return refTagID_; }
  field::RefMsgType& refMsgType() { return refMsgType_; }
  field::SessionRejectReason& sessionRejectReason() { return sessionRejectReason_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::RefSeqNum refSeqNum_{this};
  field::RefTagID refTagID_{this};
  field::RefMsgType refMsgType_{this};
  field::SessionRejectReason sessionRejectReason_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[37];
  AbstractGroup* slotGroups_[1];
};

class SequenceReset : public AbstractMessage {
 public:
  SequenceReset();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::GapFillFlag& gapFillFlag() { return gapFillFlag_; }
  field::NewSeqNo& newSeqNo() { return newSeqNo_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::GapFillFlag gapFillFlag_{this};
  field::NewSeqNo newSeqNo_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[32];
  AbstractGroup* slotGroups_[1];
};

class Logout : public AbstractMessage {
 public:
  Logout();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[33];
  AbstractGroup* slotGroups_[1];
};

class IOI : public AbstractMessage {
 public:
  IOI();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::IOIID& iOIID() { return iOIID_; }
  field::IOITransType& iOITransType() { return iOITransType_; }
  field::IOIRefID& iOIRefID() { return iOIRefID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Side& side() { return side_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::OrderQty& orderQty() { return orderQty_; }
  field::CashOrderQty& cashOrderQty() { return cashOrderQty_; }
  field::OrderPercent& orderPercent() { return orderPercent_; }
  field::RoundingDirection& roundingDirection() { return roundingDirection_; }
  field::RoundingModulus& roundingModulus() { return roundingModulus_; }
  field::IOIQty& iOIQty() { return iOIQty_; }
  field::Currency& currency() { return currency_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  group::LegsGroup& legsGroup() { return legsGroup_; }
  field::PriceType& priceType() { return priceType_; }
  field::Price& price() { return price_; }
  field::ValidUntilTime& validUntilTime() { return validUntilTime_; }
  field::IOIQltyInd& iOIQltyInd() { return iOIQltyInd_; }
  field::IOINaturalFlag& iOINaturalFlag() { return iOINaturalFlag_; }
  group::IOIQualifiersGroup& iOIQualifiersGroup() { return iOIQualifiersGroup_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::URLLink& uRLLink() { return uRLLink_; }
  group::RoutingIDsGroup& routingIDsGroup() { return routingIDsGroup_; }
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
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::IOIID iOIID_{this};
  field::IOITransType iOITransType_{this};
  field::IOIRefID iOIRefID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::Side side_{this};
  field::QtyType qtyType_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::IOIQty iOIQty_{this};
  field::Currency currency_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  group::LegsGroup legsGroup_{this};
  field::PriceType priceType_{this};
  field::Price price_{this};
  field::ValidUntilTime validUntilTime_{this};
  field::IOIQltyInd iOIQltyInd_{this};
  field::IOINaturalFlag iOINaturalFlag_{this};
  group::IOIQualifiersGroup iOIQualifiersGroup_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::TransactTime transactTime_{this};
  field::URLLink uRLLink_{this};
  group::RoutingIDsGroup routingIDsGroup_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[116];
  AbstractGroup* slotGroups_[8];
};

class Advertisement : public AbstractMessage {
 public:
  Advertisement();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::AdvId& advId() { return advId_; }
  field::AdvTransType& advTransType() { return advTransType_; }
  field::AdvRefID& advRefID() { return advRefID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::AdvSide& advSide() { return advSide_; }
  field::Quantity& quantity() { return quantity_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::Price& price() { return price_; }
  field::Currency& currency() { return currency_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::URLLink& uRLLink() { return uRLLink_; }
  field::LastMkt& lastMkt() { return lastMkt_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::AdvId advId_{this};
  field::AdvTransType advTransType_{this};
  field::AdvRefID advRefID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::AdvSide advSide_{this};
  field::Quantity quantity_{this};
  field::QtyType qtyType_{this};
  field::Price price_{this};
  field::Currency currency_{this};
  field::TradeDate tradeDate_{this};
  field::TransactTime transactTime_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::URLLink uRLLink_{this};
  field::LastMkt lastMkt_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[88];
  AbstractGroup* slotGroups_[5];
};

class ExecutionReport : public AbstractMessage {
 public:
  ExecutionReport();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::SecondaryExecID& secondaryExecID() { return secondaryExecID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::OrigClOrdID& origClOrdID() { return origClOrdID_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  field::QuoteRespID& quoteRespID() { return quoteRespID_; }
  field::OrdStatusReqID& ordStatusReqID() { return ordStatusReqID_; }
  field::MassStatusReqID& massStatusReqID() { return massStatusReqID_; }
  field::TotNumReports& totNumReports() { return totNumReports_; }
  field::LastRptRequested& lastRptRequested() { return lastRptRequested_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  group::ContraBrokersGroup& contraBrokersGroup() { return contraBrokersGroup_; }
  field::ListID& listID() { return listID_; }
  field::CrossID& crossID() { return crossID_; }
  field::OrigCrossID& origCrossID() { return origCrossID_; }
  field::CrossType& crossType() { return crossType_; }
  field::ExecID& execID() { return execID_; }
  field::ExecRefID& execRefID() { return execRefID_; }
  field::ExecType& execType() { return execType_; }
  field::OrdStatus& ordStatus() { return ordStatus_; }
  field::WorkingIndicator& workingIndicator() { return workingIndicator_; }
  field::OrdRejReason& ordRejReason() { return ordRejReason_; }
  field::ExecRestatementReason& execRestatementReason() { return execRestatementReason_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::DayBookingInst& dayBookingInst() { return dayBookingInst_; }
  field::BookingUnit& bookingUnit() { return bookingUnit_; }
  field::PreallocMethod& preallocMethod() { return preallocMethod_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::CashMargin& cashMargin() { return cashMargin_; }
  field::ClearingFeeIndicator& clearingFeeIndicator() { return clearingFeeIndicator_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Side& side() { return side_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
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
  field::PeggedPrice& peggedPrice() { return peggedPrice_; }
  field::DiscretionPrice& discretionPrice() { return discretionPrice_; }
  field::TargetStrategy& targetStrategy() { return targetStrategy_; }
  field::TargetStrategyParameters& targetStrategyParameters() { return targetStrategyParameters_; }
  field::ParticipationRate& participationRate() { return participationRate_; }
  field::TargetStrategyPerformance& targetStrategyPerformance() { return targetStrategyPerformance_; }
  field::Currency& currency() { return currency_; }
  field::ComplianceID& complianceID() { return complianceID_; }
  field::SolicitedFlag& solicitedFlag() { return solicitedFlag_; }
  field::TimeInForce& timeInForce() { return timeInForce_; }
  field::EffectiveTime& effectiveTime() { return effectiveTime_; }
  field::ExpireDate& expireDate() { return expireDate_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::ExecInst& execInst() { return execInst_; }
  field::OrderCapacity& orderCapacity() { return orderCapacity_; }
  field::OrderRestrictions& orderRestrictions() { return orderRestrictions_; }
  field::CustOrderCapacity& custOrderCapacity() { return custOrderCapacity_; }
  field::LastQty& lastQty() { return lastQty_; }
  field::UnderlyingLastQty& underlyingLastQty() { return underlyingLastQty_; }
  field::LastPx& lastPx() { return lastPx_; }
  field::UnderlyingLastPx& underlyingLastPx() { return underlyingLastPx_; }
  field::LastParPx& lastParPx() { return lastParPx_; }
  field::LastSpotRate& lastSpotRate() { return lastSpotRate_; }
  field::LastForwardPoints& lastForwardPoints() { return lastForwardPoints_; }
  field::LastMkt& lastMkt() { return lastMkt_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::TimeBracket& timeBracket() { return timeBracket_; }
  field::LastCapacity& lastCapacity() { return lastCapacity_; }
  field::LeavesQty& leavesQty() { return leavesQty_; }
  field::CumQty& cumQty() { return cumQty_; }
  field::AvgPx& avgPx() { return avgPx_; }
  field::DayOrderQty& dayOrderQty() { return dayOrderQty_; }
  field::DayCumQty& dayCumQty() { return dayCumQty_; }
  field::DayAvgPx& dayAvgPx() { return dayAvgPx_; }
  field::GTBookingInst& gTBookingInst() { return gTBookingInst_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::ReportToExch& reportToExch() { return reportToExch_; }
  field::Commission& commission() { return commission_; }
  field::CommType& commType() { return commType_; }
  field::CommCurrency& commCurrency() { return commCurrency_; }
  field::FundRenewWaiv& fundRenewWaiv() { return fundRenewWaiv_; }
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
  field::GrossTradeAmt& grossTradeAmt() { return grossTradeAmt_; }
  field::NumDaysInterest& numDaysInterest() { return numDaysInterest_; }
  field::ExDate& exDate() { return exDate_; }
  field::AccruedInterestRate& accruedInterestRate() { return accruedInterestRate_; }
  field::AccruedInterestAmt& accruedInterestAmt() { return accruedInterestAmt_; }
  field::InterestAtMaturity& interestAtMaturity() { return interestAtMaturity_; }
  field::EndAccruedInterestAmt& endAccruedInterestAmt() { return endAccruedInterestAmt_; }
  field::StartCash& startCash() { return startCash_; }
  field::EndCash& endCash() { return endCash_; }
  field::TradedFlatSwitch& tradedFlatSwitch() { return tradedFlatSwitch_; }
  field::BasisFeatureDate& basisFeatureDate() { return basisFeatureDate_; }
  field::BasisFeaturePrice& basisFeaturePrice() { return basisFeaturePrice_; }
  field::Concession& concession() { return concession_; }
  field::TotalTakedown& totalTakedown() { return totalTakedown_; }
  field::NetMoney& netMoney() { return netMoney_; }
  field::SettlCurrAmt& settlCurrAmt() { return settlCurrAmt_; }
  field::SettlCurrency& settlCurrency() { return settlCurrency_; }
  field::SettlCurrFxRate& settlCurrFxRate() { return settlCurrFxRate_; }
  field::SettlCurrFxRateCalc& settlCurrFxRateCalc() { return settlCurrFxRateCalc_; }
  field::HandlInst& handlInst() { return handlInst_; }
  field::MinQty& minQty() { return minQty_; }
  field::MaxFloor& maxFloor() { return maxFloor_; }
  field::PositionEffect& positionEffect() { return positionEffect_; }
  field::MaxShow& maxShow() { return maxShow_; }
  field::BookingType& bookingType() { return bookingType_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SettlDate2& settlDate2() { return settlDate2_; }
  field::OrderQty2& orderQty2() { return orderQty2_; }
  field::LastForwardPoints2& lastForwardPoints2() { return lastForwardPoints2_; }
  field::MultiLegReportingType& multiLegReportingType() { return multiLegReportingType_; }
  field::CancellationRights& cancellationRights() { return cancellationRights_; }
  field::MoneyLaunderingStatus& moneyLaunderingStatus() { return moneyLaunderingStatus_; }
  field::RegistID& registID() { return registID_; }
  field::Designation& designation() { return designation_; }
  field::TransBkdTime& transBkdTime() { return transBkdTime_; }
  field::ExecValuationPoint& execValuationPoint() { return execValuationPoint_; }
  field::ExecPriceType& execPriceType() { return execPriceType_; }
  field::ExecPriceAdjustment& execPriceAdjustment() { return execPriceAdjustment_; }
  field::PriorityIndicator& priorityIndicator() { return priorityIndicator_; }
  field::PriceImprovement& priceImprovement() { return priceImprovement_; }
  field::LastLiquidityInd& lastLiquidityInd() { return lastLiquidityInd_; }
  group::ContAmtsGroup& contAmtsGroup() { return contAmtsGroup_; }
  group::LegsGroup2& legsGroup2() { return legsGroup2_; }
  field::CopyMsgIndicator& copyMsgIndicator() { return copyMsgIndicator_; }
  group::MiscFeesGroup& miscFeesGroup() { return miscFeesGroup_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::OrderID orderID_{this};
  field::SecondaryOrderID secondaryOrderID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  field::SecondaryExecID secondaryExecID_{this};
  field::ClOrdID clOrdID_{this};
  field::OrigClOrdID origClOrdID_{this};
  field::ClOrdLinkID clOrdLinkID_{this};
  field::QuoteRespID quoteRespID_{this};
  field::OrdStatusReqID ordStatusReqID_{this};
  field::MassStatusReqID massStatusReqID_{this};
  field::TotNumReports totNumReports_{this};
  field::LastRptRequested lastRptRequested_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::TradeOriginationDate tradeOriginationDate_{this};
  group::ContraBrokersGroup contraBrokersGroup_{this};
  field::ListID listID_{this};
  field::CrossID crossID_{this};
  field::OrigCrossID origCrossID_{this};
  field::CrossType crossType_{this};
  field::ExecID execID_{this};
  field::ExecRefID execRefID_{this};
  field::ExecType execType_{this};
  field::OrdStatus ordStatus_{this};
  field::WorkingIndicator workingIndicator_{this};
  field::OrdRejReason ordRejReason_{this};
  field::ExecRestatementReason execRestatementReason_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::DayBookingInst dayBookingInst_{this};
  field::BookingUnit bookingUnit_{this};
  field::PreallocMethod preallocMethod_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::CashMargin cashMargin_{this};
  field::ClearingFeeIndicator clearingFeeIndicator_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::Side side_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::QtyType qtyType_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::OrdType ordType_{this};
  field::PriceType priceType_{this};
  field::Price price_{this};
  field::StopPx stopPx_{this};
  field::PegOffsetValue pegOffsetValue_{this};
  field::PegMoveType pegMoveType_{this};
  field::PegOffsetType pegOffsetType_{this};
  field::PegLimitType pegLimitType_{this};
  field::PegRoundDirection pegRoundDirection_{this};
  field::PegScope pegScope_{this};
  field::DiscretionInst discretionInst_{this};
  field::DiscretionOffsetValue discretionOffsetValue_{this};
  field::DiscretionMoveType discretionMoveType_{this};
  field::DiscretionOffsetType discretionOffsetType_{this};
  field::DiscretionLimitType discretionLimitType_{this};
  field::DiscretionRoundDirection discretionRoundDirection_{this};
  field::DiscretionScope discretionScope_{this};
  field::PeggedPrice peggedPrice_{this};
  field::DiscretionPrice discretionPrice_{this};
  field::TargetStrategy targetStrategy_{this};
  field::TargetStrategyParameters targetStrategyParameters_{this};
  field::ParticipationRate participationRate_{this};
  field::TargetStrategyPerformance targetStrategyPerformance_{this};
  field::Currency currency_{this};
  field::ComplianceID complianceID_{this};
  field::SolicitedFlag solicitedFlag_{this};
  field::TimeInForce timeInForce_{this};
  field::EffectiveTime effectiveTime_{this};
  field::ExpireDate expireDate_{this};
  field::ExpireTime expireTime_{this};
  field::ExecInst execInst_{this};
  field::OrderCapacity orderCapacity_{this};
  field::OrderRestrictions orderRestrictions_{this};
  field::CustOrderCapacity custOrderCapacity_{this};
  field::LastQty lastQty_{this};
  field::UnderlyingLastQty underlyingLastQty_{this};
  field::LastPx lastPx_{this};
  field::UnderlyingLastPx underlyingLastPx_{this};
  field::LastParPx lastParPx_{this};
  field::LastSpotRate lastSpotRate_{this};
  field::LastForwardPoints lastForwardPoints_{this};
  field::LastMkt lastMkt_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::TimeBracket timeBracket_{this};
  field::LastCapacity lastCapacity_{this};
  field::LeavesQty leavesQty_{this};
  field::CumQty cumQty_{this};
  field::AvgPx avgPx_{this};
  field::DayOrderQty dayOrderQty_{this};
  field::DayCumQty dayCumQty_{this};
  field::DayAvgPx dayAvgPx_{this};
  field::GTBookingInst gTBookingInst_{this};
  field::TradeDate tradeDate_{this};
  field::TransactTime transactTime_{this};
  field::ReportToExch reportToExch_{this};
  field::Commission commission_{this};
  field::CommType commType_{this};
  field::CommCurrency commCurrency_{this};
  field::FundRenewWaiv fundRenewWaiv_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::GrossTradeAmt grossTradeAmt_{this};
  field::NumDaysInterest numDaysInterest_{this};
  field::ExDate exDate_{this};
  field::AccruedInterestRate accruedInterestRate_{this};
  field::AccruedInterestAmt accruedInterestAmt_{this};
  field::InterestAtMaturity interestAtMaturity_{this};
  field::EndAccruedInterestAmt endAccruedInterestAmt_{this};
  field::StartCash startCash_{this};
  field::EndCash endCash_{this};
  field::TradedFlatSwitch tradedFlatSwitch_{this};
  field::BasisFeatureDate basisFeatureDate_{this};
  field::BasisFeaturePrice basisFeaturePrice_{this};
  field::Concession concession_{this};
  field::TotalTakedown totalTakedown_{this};
  field::NetMoney netMoney_{this};
  field::SettlCurrAmt settlCurrAmt_{this};
  field::SettlCurrency settlCurrency_{this};
  field::SettlCurrFxRate settlCurrFxRate_{this};
  field::SettlCurrFxRateCalc settlCurrFxRateCalc_{this};
  field::HandlInst handlInst_{this};
  field::MinQty minQty_{this};
  field::MaxFloor maxFloor_{this};
  field::PositionEffect positionEffect_{this};
  field::MaxShow maxShow_{this};
  field::BookingType bookingType_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SettlDate2 settlDate2_{this};
  field::OrderQty2 orderQty2_{this};
  field::LastForwardPoints2 lastForwardPoints2_{this};
  field::MultiLegReportingType multiLegReportingType_{this};
  field::CancellationRights cancellationRights_{this};
  field::MoneyLaunderingStatus moneyLaunderingStatus_{this};
  field::RegistID registID_{this};
  field::Designation designation_{this};
  field::TransBkdTime transBkdTime_{this};
  field::ExecValuationPoint execValuationPoint_{this};
  field::ExecPriceType execPriceType_{this};
  field::ExecPriceAdjustment execPriceAdjustment_{this};
  field::PriorityIndicator priorityIndicator_{this};
  field::PriceImprovement priceImprovement_{this};
  field::LastLiquidityInd lastLiquidityInd_{this};
  group::ContAmtsGroup contAmtsGroup_{this};
  group::LegsGroup2 legsGroup2_{this};
  field::CopyMsgIndicator copyMsgIndicator_{this};
  group::MiscFeesGroup miscFeesGroup_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[239];
  AbstractGroup* slotGroups_[10];
};

class OrderCancelReject : public AbstractMessage {
 public:
  OrderCancelReject();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  field::OrigClOrdID& origClOrdID() { return origClOrdID_; }
  field::OrdStatus& ordStatus() { return ordStatus_; }
  field::WorkingIndicator& workingIndicator() { return workingIndicator_; }
  field::OrigOrdModTime& origOrdModTime() { return origOrdModTime_; }
  field::ListID& listID() { return listID_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::CxlRejResponseTo& cxlRejResponseTo() { return cxlRejResponseTo_; }
  field::CxlRejReason& cxlRejReason() { return cxlRejReason_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::OrderID orderID_{this};
  field::SecondaryOrderID secondaryOrderID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  field::ClOrdID clOrdID_{this};
  field::ClOrdLinkID clOrdLinkID_{this};
  field::OrigClOrdID origClOrdID_{this};
  field::OrdStatus ordStatus_{this};
  field::WorkingIndicator workingIndicator_{this};
  field::OrigOrdModTime origOrdModTime_{this};
  field::ListID listID_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::TradeOriginationDate tradeOriginationDate_{this};
  field::TradeDate tradeDate_{this};
  field::TransactTime transactTime_{this};
  field::CxlRejResponseTo cxlRejResponseTo_{this};
  field::CxlRejReason cxlRejReason_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[51];
  AbstractGroup* slotGroups_[1];
};

class Logon : public AbstractMessage {
 public:
  Logon();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::EncryptMethod& encryptMethod() { return encryptMethod_; }
  field::HeartBtInt& heartBtInt() { return heartBtInt_; }
  field::RawDataLength& rawDataLength() { return rawDataLength_; }
  field::RawData& rawData() { return rawData_; }
  field::ResetSeqNumFlag& resetSeqNumFlag() { return resetSeqNumFlag_; }
  field::NextExpectedMsgSeqNum& nextExpectedMsgSeqNum() { return nextExpectedMsgSeqNum_; }
  field::MaxMessageSize& maxMessageSize() { return maxMessageSize_; }
  group::MsgTypesGroup& msgTypesGroup() { return msgTypesGroup_; }
  field::TestMessageIndicator& testMessageIndicator() { return testMessageIndicator_; }
  field::Username& username() { return username_; }
  field::Password& password() { return password_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::EncryptMethod encryptMethod_{this};
  field::HeartBtInt heartBtInt_{this};
  field::RawDataLength rawDataLength_{this};
  field::RawData rawData_{this};
  field::ResetSeqNumFlag resetSeqNumFlag_{this};
  field::NextExpectedMsgSeqNum nextExpectedMsgSeqNum_{this};
  field::MaxMessageSize maxMessageSize_{this};
  group::MsgTypesGroup msgTypesGroup_{this};
  field::TestMessageIndicator testMessageIndicator_{this};
  field::Username username_{this};
  field::Password password_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[40];
  AbstractGroup* slotGroups_[2];
};

class News : public AbstractMessage {
 public:
  News();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::OrigTime& origTime() { return origTime_; }
  field::Urgency& urgency() { return urgency_; }
  field::Headline& headline() { return headline_; }
  field::EncodedHeadlineLen& encodedHeadlineLen() { return encodedHeadlineLen_; }
  field::EncodedHeadline& encodedHeadline() { return encodedHeadline_; }
  group::RoutingIDsGroup& routingIDsGroup() { return routingIDsGroup_; }
  group::RelatedSymGroup& relatedSymGroup() { return relatedSymGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LinesOfTextGroup& linesOfTextGroup() { return linesOfTextGroup_; }
  field::URLLink& uRLLink() { return uRLLink_; }
  field::RawDataLength& rawDataLength() { return rawDataLength_; }
  field::RawData& rawData() { return rawData_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::OrigTime origTime_{this};
  field::Urgency urgency_{this};
  field::Headline headline_{this};
  field::EncodedHeadlineLen encodedHeadlineLen_{this};
  field::EncodedHeadline encodedHeadline_{this};
  group::RoutingIDsGroup routingIDsGroup_{this};
  group::RelatedSymGroup relatedSymGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LinesOfTextGroup linesOfTextGroup_{this};
  field::URLLink uRLLink_{this};
  field::RawDataLength rawDataLength_{this};
  field::RawData rawData_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[38];
  AbstractGroup* slotGroups_[6];
};

class Email : public AbstractMessage {
 public:
  Email();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::EmailThreadID& emailThreadID() { return emailThreadID_; }
  field::EmailType& emailType() { return emailType_; }
  field::OrigTime& origTime() { return origTime_; }
  field::Subject& subject() { return subject_; }
  field::EncodedSubjectLen& encodedSubjectLen() { return encodedSubjectLen_; }
  field::EncodedSubject& encodedSubject() { return encodedSubject_; }
  group::RoutingIDsGroup& routingIDsGroup() { return routingIDsGroup_; }
  group::RelatedSymGroup& relatedSymGroup() { return relatedSymGroup_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::OrderID& orderID() { return orderID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  group::LinesOfTextGroup& linesOfTextGroup() { return linesOfTextGroup_; }
  field::RawDataLength& rawDataLength() { return rawDataLength_; }
  field::RawData& rawData() { return rawData_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::EmailThreadID emailThreadID_{this};
  field::EmailType emailType_{this};
  field::OrigTime origTime_{this};
  field::Subject subject_{this};
  field::EncodedSubjectLen encodedSubjectLen_{this};
  field::EncodedSubject encodedSubject_{this};
  group::RoutingIDsGroup routingIDsGroup_{this};
  group::RelatedSymGroup relatedSymGroup_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::OrderID orderID_{this};
  field::ClOrdID clOrdID_{this};
  group::LinesOfTextGroup linesOfTextGroup_{this};
  field::RawDataLength rawDataLength_{this};
  field::RawData rawData_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[40];
  AbstractGroup* slotGroups_[6];
};

class NewOrderSingle : public AbstractMessage {
 public:
  NewOrderSingle();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::DayBookingInst& dayBookingInst() { return dayBookingInst_; }
  field::BookingUnit& bookingUnit() { return bookingUnit_; }
  field::PreallocMethod& preallocMethod() { return preallocMethod_; }
  field::AllocID& allocID() { return allocID_; }
  group::AllocsGroup& allocsGroup() { return allocsGroup_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::CashMargin& cashMargin() { return cashMargin_; }
  field::ClearingFeeIndicator& clearingFeeIndicator() { return clearingFeeIndicator_; }
  field::HandlInst& handlInst() { return handlInst_; }
  field::ExecInst& execInst() { return execInst_; }
  field::MinQty& minQty() { return minQty_; }
  field::MaxFloor& maxFloor() { return maxFloor_; }
  field::ExDestination& exDestination() { return exDestination_; }
  group::TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::ProcessCode& processCode() { return processCode_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::PrevClosePx& prevClosePx() { return prevClosePx_; }
  field::Side& side() { return side_; }
  field::LocateReqd& locateReqd() { return locateReqd_; }
  field::TransactTime& transactTime() { return transactTime_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
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
  field::CancellationRights& cancellationRights() { return cancellationRights_; }
  field::MoneyLaunderingStatus& moneyLaunderingStatus() { return moneyLaunderingStatus_; }
  field::RegistID& registID() { return registID_; }
  field::Designation& designation() { return designation_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ClOrdID clOrdID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  field::ClOrdLinkID clOrdLinkID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::TradeOriginationDate tradeOriginationDate_{this};
  field::TradeDate tradeDate_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::DayBookingInst dayBookingInst_{this};
  field::BookingUnit bookingUnit_{this};
  field::PreallocMethod preallocMethod_{this};
  field::AllocID allocID_{this};
  group::AllocsGroup allocsGroup_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::CashMargin cashMargin_{this};
  field::ClearingFeeIndicator clearingFeeIndicator_{this};
  field::HandlInst handlInst_{this};
  field::ExecInst execInst_{this};
  field::MinQty minQty_{this};
  field::MaxFloor maxFloor_{this};
  field::ExDestination exDestination_{this};
  group::TradingSessionsGroup tradingSessionsGroup_{this};
  field::ProcessCode processCode_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::PrevClosePx prevClosePx_{this};
  field::Side side_{this};
  field::LocateReqd locateReqd_{this};
  field::TransactTime transactTime_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::QtyType qtyType_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::OrdType ordType_{this};
  field::PriceType priceType_{this};
  field::Price price_{this};
  field::StopPx stopPx_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::Currency currency_{this};
  field::ComplianceID complianceID_{this};
  field::SolicitedFlag solicitedFlag_{this};
  field::IOIID iOIID_{this};
  field::QuoteID quoteID_{this};
  field::TimeInForce timeInForce_{this};
  field::EffectiveTime effectiveTime_{this};
  field::ExpireDate expireDate_{this};
  field::ExpireTime expireTime_{this};
  field::GTBookingInst gTBookingInst_{this};
  field::Commission commission_{this};
  field::CommType commType_{this};
  field::CommCurrency commCurrency_{this};
  field::FundRenewWaiv fundRenewWaiv_{this};
  field::OrderCapacity orderCapacity_{this};
  field::OrderRestrictions orderRestrictions_{this};
  field::CustOrderCapacity custOrderCapacity_{this};
  field::ForexReq forexReq_{this};
  field::SettlCurrency settlCurrency_{this};
  field::BookingType bookingType_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SettlDate2 settlDate2_{this};
  field::OrderQty2 orderQty2_{this};
  field::Price2 price2_{this};
  field::PositionEffect positionEffect_{this};
  field::CoveredOrUncovered coveredOrUncovered_{this};
  field::MaxShow maxShow_{this};
  field::PegOffsetValue pegOffsetValue_{this};
  field::PegMoveType pegMoveType_{this};
  field::PegOffsetType pegOffsetType_{this};
  field::PegLimitType pegLimitType_{this};
  field::PegRoundDirection pegRoundDirection_{this};
  field::PegScope pegScope_{this};
  field::DiscretionInst discretionInst_{this};
  field::DiscretionOffsetValue discretionOffsetValue_{this};
  field::DiscretionMoveType discretionMoveType_{this};
  field::DiscretionOffsetType discretionOffsetType_{this};
  field::DiscretionLimitType discretionLimitType_{this};
  field::DiscretionRoundDirection discretionRoundDirection_{this};
  field::DiscretionScope discretionScope_{this};
  field::TargetStrategy targetStrategy_{this};
  field::TargetStrategyParameters targetStrategyParameters_{this};
  field::ParticipationRate participationRate_{this};
  field::CancellationRights cancellationRights_{this};
  field::MoneyLaunderingStatus moneyLaunderingStatus_{this};
  field::RegistID registID_{this};
  field::Designation designation_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[179];
  AbstractGroup* slotGroups_[8];
};

class NewOrderList : public AbstractMessage {
 public:
  NewOrderList();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ListID& listID() { return listID_; }
  field::BidID& bidID() { return bidID_; }
  field::ClientBidID& clientBidID() { return clientBidID_; }
  field::ProgRptReqs& progRptReqs() { return progRptReqs_; }
  field::BidType& bidType() { return bidType_; }
  field::ProgPeriodInterval& progPeriodInterval() { return progPeriodInterval_; }
  field::CancellationRights& cancellationRights() { return cancellationRights_; }
  field::MoneyLaunderingStatus& moneyLaunderingStatus() { return moneyLaunderingStatus_; }
  field::RegistID& registID() { return registID_; }
  field::ListExecInstType& listExecInstType() { return listExecInstType_; }
  field::ListExecInst& listExecInst() { return listExecInst_; }
  field::EncodedListExecInstLen& encodedListExecInstLen() { return encodedListExecInstLen_; }
  field::EncodedListExecInst& encodedListExecInst() { return encodedListExecInst_; }
  field::AllowableOneSidednessPct& allowableOneSidednessPct() { return allowableOneSidednessPct_; }
  field::AllowableOneSidednessValue& allowableOneSidednessValue() { return allowableOneSidednessValue_; }
  field::AllowableOneSidednessCurr& allowableOneSidednessCurr() { return allowableOneSidednessCurr_; }
  field::TotNoOrders& totNoOrders() { return totNoOrders_; }
  field::LastFragment& lastFragment() { return lastFragment_; }
  group::OrdersGroup& ordersGroup() { return ordersGroup_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ListID listID_{this};
  field::BidID bidID_{this};
  field::ClientBidID clientBidID_{this};
  field::ProgRptReqs progRptReqs_{this};
  field::BidType bidType_{this};
  field::ProgPeriodInterval progPeriodInterval_{this};
  field::CancellationRights cancellationRights_{this};
  field::MoneyLaunderingStatus moneyLaunderingStatus_{this};
  field::RegistID registID_{this};
  field::ListExecInstType listExecInstType_{this};
  field::ListExecInst listExecInst_{this};
  field::EncodedListExecInstLen encodedListExecInstLen_{this};
  field::EncodedListExecInst encodedListExecInst_{this};
  field::AllowableOneSidednessPct allowableOneSidednessPct_{this};
  field::AllowableOneSidednessValue allowableOneSidednessValue_{this};
  field::AllowableOneSidednessCurr allowableOneSidednessCurr_{this};
  field::TotNoOrders totNoOrders_{this};
  field::LastFragment lastFragment_{this};
  group::OrdersGroup ordersGroup_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[48];
  AbstractGroup* slotGroups_[2];
};

class OrderCancelRequest : public AbstractMessage {
 public:
  OrderCancelRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::OrigClOrdID& origClOrdID() { return origClOrdID_; }
  field::OrderID& orderID() { return orderID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  field::ListID& listID() { return listID_; }
  field::OrigOrdModTime& origOrdModTime() { return origOrdModTime_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Side& side() { return side_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::OrderQty& orderQty() { return orderQty_; }
  field::CashOrderQty& cashOrderQty() { return cashOrderQty_; }
  field::OrderPercent& orderPercent() { return orderPercent_; }
  field::RoundingDirection& roundingDirection() { return roundingDirection_; }
  field::RoundingModulus& roundingModulus() { return roundingModulus_; }
  field::ComplianceID& complianceID() { return complianceID_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::OrigClOrdID origClOrdID_{this};
  field::OrderID orderID_{this};
  field::ClOrdID clOrdID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  field::ClOrdLinkID clOrdLinkID_{this};
  field::ListID listID_{this};
  field::OrigOrdModTime origOrdModTime_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::Side side_{this};
  field::TransactTime transactTime_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::ComplianceID complianceID_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[101];
  AbstractGroup* slotGroups_[5];
};

class OrderCancelReplaceRequest : public AbstractMessage {
 public:
  OrderCancelReplaceRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::OrderID& orderID() { return orderID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::OrigClOrdID& origClOrdID() { return origClOrdID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  field::ListID& listID() { return listID_; }
  field::OrigOrdModTime& origOrdModTime() { return origOrdModTime_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::DayBookingInst& dayBookingInst() { return dayBookingInst_; }
  field::BookingUnit& bookingUnit() { return bookingUnit_; }
  field::PreallocMethod& preallocMethod() { return preallocMethod_; }
  field::AllocID& allocID() { return allocID_; }
  group::AllocsGroup& allocsGroup() { return allocsGroup_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::CashMargin& cashMargin() { return cashMargin_; }
  field::ClearingFeeIndicator& clearingFeeIndicator() { return clearingFeeIndicator_; }
  field::HandlInst& handlInst() { return handlInst_; }
  field::ExecInst& execInst() { return execInst_; }
  field::MinQty& minQty() { return minQty_; }
  field::MaxFloor& maxFloor() { return maxFloor_; }
  field::ExDestination& exDestination() { return exDestination_; }
  group::TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Side& side() { return side_; }
  field::TransactTime& transactTime() { return transactTime_; }
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
  field::ComplianceID& complianceID() { return complianceID_; }
  field::SolicitedFlag& solicitedFlag() { return solicitedFlag_; }
  field::Currency& currency() { return currency_; }
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
  field::LocateReqd& locateReqd() { return locateReqd_; }
  field::CancellationRights& cancellationRights() { return cancellationRights_; }
  field::MoneyLaunderingStatus& moneyLaunderingStatus() { return moneyLaunderingStatus_; }
  field::RegistID& registID() { return registID_; }
  field::Designation& designation() { return designation_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::OrderID orderID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::TradeOriginationDate tradeOriginationDate_{this};
  field::TradeDate tradeDate_{this};
  field::OrigClOrdID origClOrdID_{this};
  field::ClOrdID clOrdID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  field::ClOrdLinkID clOrdLinkID_{this};
  field::ListID listID_{this};
  field::OrigOrdModTime origOrdModTime_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::DayBookingInst dayBookingInst_{this};
  field::BookingUnit bookingUnit_{this};
  field::PreallocMethod preallocMethod_{this};
  field::AllocID allocID_{this};
  group::AllocsGroup allocsGroup_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::CashMargin cashMargin_{this};
  field::ClearingFeeIndicator clearingFeeIndicator_{this};
  field::HandlInst handlInst_{this};
  field::ExecInst execInst_{this};
  field::MinQty minQty_{this};
  field::MaxFloor maxFloor_{this};
  field::ExDestination exDestination_{this};
  group::TradingSessionsGroup tradingSessionsGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::Side side_{this};
  field::TransactTime transactTime_{this};
  field::QtyType qtyType_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::OrdType ordType_{this};
  field::PriceType priceType_{this};
  field::Price price_{this};
  field::StopPx stopPx_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::PegOffsetValue pegOffsetValue_{this};
  field::PegMoveType pegMoveType_{this};
  field::PegOffsetType pegOffsetType_{this};
  field::PegLimitType pegLimitType_{this};
  field::PegRoundDirection pegRoundDirection_{this};
  field::PegScope pegScope_{this};
  field::DiscretionInst discretionInst_{this};
  field::DiscretionOffsetValue discretionOffsetValue_{this};
  field::DiscretionMoveType discretionMoveType_{this};
  field::DiscretionOffsetType discretionOffsetType_{this};
  field::DiscretionLimitType discretionLimitType_{this};
  field::DiscretionRoundDirection discretionRoundDirection_{this};
  field::DiscretionScope discretionScope_{this};
  field::TargetStrategy targetStrategy_{this};
  field::TargetStrategyParameters targetStrategyParameters_{this};
  field::ParticipationRate participationRate_{this};
  field::ComplianceID complianceID_{this};
  field::SolicitedFlag solicitedFlag_{this};
  field::Currency currency_{this};
  field::TimeInForce timeInForce_{this};
  field::EffectiveTime effectiveTime_{this};
  field::ExpireDate expireDate_{this};
  field::ExpireTime expireTime_{this};
  field::GTBookingInst gTBookingInst_{this};
  field::Commission commission_{this};
  field::CommType commType_{this};
  field::CommCurrency commCurrency_{this};
  field::FundRenewWaiv fundRenewWaiv_{this};
  field::OrderCapacity orderCapacity_{this};
  field::OrderRestrictions orderRestrictions_{this};
  field::CustOrderCapacity custOrderCapacity_{this};
  field::ForexReq forexReq_{this};
  field::SettlCurrency settlCurrency_{this};
  field::BookingType bookingType_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SettlDate2 settlDate2_{this};
  field::OrderQty2 orderQty2_{this};
  field::Price2 price2_{this};
  field::PositionEffect positionEffect_{this};
  field::CoveredOrUncovered coveredOrUncovered_{this};
  field::MaxShow maxShow_{this};
  field::LocateReqd locateReqd_{this};
  field::CancellationRights cancellationRights_{this};
  field::MoneyLaunderingStatus moneyLaunderingStatus_{this};
  field::RegistID registID_{this};
  field::Designation designation_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[179];
  AbstractGroup* slotGroups_[7];
};

class OrderStatusRequest : public AbstractMessage {
 public:
  OrderStatusRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::OrderID& orderID() { return orderID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::OrdStatusReqID& ordStatusReqID() { return ordStatusReqID_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Side& side() { return side_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::OrderID orderID_{this};
  field::ClOrdID clOrdID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  field::ClOrdLinkID clOrdLinkID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::OrdStatusReqID ordStatusReqID_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::Side side_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[88];
  AbstractGroup* slotGroups_[5];
};

class AllocationInstruction : public AbstractMessage {
 public:
  AllocationInstruction();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::AllocID& allocID() { return allocID_; }
  field::AllocTransType& allocTransType() { return allocTransType_; }
  field::AllocType& allocType() { return allocType_; }
  field::SecondaryAllocID& secondaryAllocID() { return secondaryAllocID_; }
  field::RefAllocID& refAllocID() { return refAllocID_; }
  field::AllocCancReplaceReason& allocCancReplaceReason() { return allocCancReplaceReason_; }
  field::AllocIntermedReqType& allocIntermedReqType() { return allocIntermedReqType_; }
  field::AllocLinkID& allocLinkID() { return allocLinkID_; }
  field::AllocLinkType& allocLinkType() { return allocLinkType_; }
  field::BookingRefID& bookingRefID() { return bookingRefID_; }
  field::AllocNoOrdersType& allocNoOrdersType() { return allocNoOrdersType_; }
  group::OrdersGroup1& ordersGroup1() { return ordersGroup1_; }
  group::ExecsGroup& execsGroup() { return execsGroup_; }
  field::PreviouslyReported& previouslyReported() { return previouslyReported_; }
  field::ReversalIndicator& reversalIndicator() { return reversalIndicator_; }
  field::MatchType& matchType() { return matchType_; }
  field::Side& side() { return side_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  group::InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  field::AgreementDesc& agreementDesc() { return agreementDesc_; }
  field::AgreementID& agreementID() { return agreementID_; }
  field::AgreementDate& agreementDate() { return agreementDate_; }
  field::AgreementCurrency& agreementCurrency() { return agreementCurrency_; }
  field::TerminationType& terminationType() { return terminationType_; }
  field::StartDate& startDate() { return startDate_; }
  field::EndDate& endDate() { return endDate_; }
  field::DeliveryType& deliveryType() { return deliveryType_; }
  field::MarginRatio& marginRatio() { return marginRatio_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::Quantity& quantity() { return quantity_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::LastMkt& lastMkt() { return lastMkt_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::PriceType& priceType() { return priceType_; }
  field::AvgPx& avgPx() { return avgPx_; }
  field::AvgParPx& avgParPx() { return avgParPx_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  field::Currency& currency() { return currency_; }
  field::AvgPxPrecision& avgPxPrecision() { return avgPxPrecision_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::BookingType& bookingType() { return bookingType_; }
  field::GrossTradeAmt& grossTradeAmt() { return grossTradeAmt_; }
  field::Concession& concession() { return concession_; }
  field::TotalTakedown& totalTakedown() { return totalTakedown_; }
  field::NetMoney& netMoney() { return netMoney_; }
  field::PositionEffect& positionEffect() { return positionEffect_; }
  field::AutoAcceptIndicator& autoAcceptIndicator() { return autoAcceptIndicator_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::NumDaysInterest& numDaysInterest() { return numDaysInterest_; }
  field::AccruedInterestRate& accruedInterestRate() { return accruedInterestRate_; }
  field::AccruedInterestAmt& accruedInterestAmt() { return accruedInterestAmt_; }
  field::TotalAccruedInterestAmt& totalAccruedInterestAmt() { return totalAccruedInterestAmt_; }
  field::InterestAtMaturity& interestAtMaturity() { return interestAtMaturity_; }
  field::EndAccruedInterestAmt& endAccruedInterestAmt() { return endAccruedInterestAmt_; }
  field::StartCash& startCash() { return startCash_; }
  field::EndCash& endCash() { return endCash_; }
  field::LegalConfirm& legalConfirm() { return legalConfirm_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::YieldType& yieldType() { return yieldType_; }
  field::Yield& yield() { return yield_; }
  field::YieldCalcDate& yieldCalcDate() { return yieldCalcDate_; }
  field::YieldRedemptionDate& yieldRedemptionDate() { return yieldRedemptionDate_; }
  field::YieldRedemptionPrice& yieldRedemptionPrice() { return yieldRedemptionPrice_; }
  field::YieldRedemptionPriceType& yieldRedemptionPriceType() { return yieldRedemptionPriceType_; }
  field::TotNoAllocs& totNoAllocs() { return totNoAllocs_; }
  field::LastFragment& lastFragment() { return lastFragment_; }
  group::AllocsGroup1& allocsGroup1() { return allocsGroup1_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::AllocID allocID_{this};
  field::AllocTransType allocTransType_{this};
  field::AllocType allocType_{this};
  field::SecondaryAllocID secondaryAllocID_{this};
  field::RefAllocID refAllocID_{this};
  field::AllocCancReplaceReason allocCancReplaceReason_{this};
  field::AllocIntermedReqType allocIntermedReqType_{this};
  field::AllocLinkID allocLinkID_{this};
  field::AllocLinkType allocLinkType_{this};
  field::BookingRefID bookingRefID_{this};
  field::AllocNoOrdersType allocNoOrdersType_{this};
  group::OrdersGroup1 ordersGroup1_{this};
  group::ExecsGroup execsGroup_{this};
  field::PreviouslyReported previouslyReported_{this};
  field::ReversalIndicator reversalIndicator_{this};
  field::MatchType matchType_{this};
  field::Side side_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::DeliveryForm deliveryForm_{this};
  field::PctAtRisk pctAtRisk_{this};
  group::InstrAttribGroup instrAttribGroup_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::Quantity quantity_{this};
  field::QtyType qtyType_{this};
  field::LastMkt lastMkt_{this};
  field::TradeOriginationDate tradeOriginationDate_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::PriceType priceType_{this};
  field::AvgPx avgPx_{this};
  field::AvgParPx avgParPx_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::Currency currency_{this};
  field::AvgPxPrecision avgPxPrecision_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::TradeDate tradeDate_{this};
  field::TransactTime transactTime_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::BookingType bookingType_{this};
  field::GrossTradeAmt grossTradeAmt_{this};
  field::Concession concession_{this};
  field::TotalTakedown totalTakedown_{this};
  field::NetMoney netMoney_{this};
  field::PositionEffect positionEffect_{this};
  field::AutoAcceptIndicator autoAcceptIndicator_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::NumDaysInterest numDaysInterest_{this};
  field::AccruedInterestRate accruedInterestRate_{this};
  field::AccruedInterestAmt accruedInterestAmt_{this};
  field::TotalAccruedInterestAmt totalAccruedInterestAmt_{this};
  field::InterestAtMaturity interestAtMaturity_{this};
  field::EndAccruedInterestAmt endAccruedInterestAmt_{this};
  field::StartCash startCash_{this};
  field::EndCash endCash_{this};
  field::LegalConfirm legalConfirm_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::TotNoAllocs totNoAllocs_{this};
  field::LastFragment lastFragment_{this};
  group::AllocsGroup1 allocsGroup1_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[147];
  AbstractGroup* slotGroups_[11];
};

class ListCancelRequest : public AbstractMessage {
 public:
  ListCancelRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ListID& listID() { return listID_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ListID listID_{this};
  field::TransactTime transactTime_{this};
  field::TradeOriginationDate tradeOriginationDate_{this};
  field::TradeDate tradeDate_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[37];
  AbstractGroup* slotGroups_[1];
};

class ListExecute : public AbstractMessage {
 public:
  ListExecute();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ListID& listID() { return listID_; }
  field::ClientBidID& clientBidID() { return clientBidID_; }
  field::BidID& bidID() { return bidID_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ListID listID_{this};
  field::ClientBidID clientBidID_{this};
  field::BidID bidID_{this};
  field::TransactTime transactTime_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[37];
  AbstractGroup* slotGroups_[1];
};

class ListStatusRequest : public AbstractMessage {
 public:
  ListStatusRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ListID& listID() { return listID_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ListID listID_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[34];
  AbstractGroup* slotGroups_[1];
};

class ListStatus : public AbstractMessage {
 public:
  ListStatus();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ListID& listID() { return listID_; }
  field::ListStatusType& listStatusType() { return listStatusType_; }
  field::NoRpts& noRpts() { return noRpts_; }
  field::ListOrderStatus& listOrderStatus() { return listOrderStatus_; }
  field::RptSeq& rptSeq() { return rptSeq_; }
  field::ListStatusText& listStatusText() { return listStatusText_; }
  field::EncodedListStatusTextLen& encodedListStatusTextLen() { return encodedListStatusTextLen_; }
  field::EncodedListStatusText& encodedListStatusText() { return encodedListStatusText_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::TotNoOrders& totNoOrders() { return totNoOrders_; }
  field::LastFragment& lastFragment() { return lastFragment_; }
  group::OrdersGroup2& ordersGroup2() { return ordersGroup2_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ListID listID_{this};
  field::ListStatusType listStatusType_{this};
  field::NoRpts noRpts_{this};
  field::ListOrderStatus listOrderStatus_{this};
  field::RptSeq rptSeq_{this};
  field::ListStatusText listStatusText_{this};
  field::EncodedListStatusTextLen encodedListStatusTextLen_{this};
  field::EncodedListStatusText encodedListStatusText_{this};
  field::TransactTime transactTime_{this};
  field::TotNoOrders totNoOrders_{this};
  field::LastFragment lastFragment_{this};
  group::OrdersGroup2 ordersGroup2_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[41];
  AbstractGroup* slotGroups_[2];
};

class AllocationInstructionAck : public AbstractMessage {
 public:
  AllocationInstructionAck();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::AllocID& allocID() { return allocID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::SecondaryAllocID& secondaryAllocID() { return secondaryAllocID_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::AllocStatus& allocStatus() { return allocStatus_; }
  field::AllocRejCode& allocRejCode() { return allocRejCode_; }
  field::AllocType& allocType() { return allocType_; }
  field::AllocIntermedReqType& allocIntermedReqType() { return allocIntermedReqType_; }
  field::MatchStatus& matchStatus() { return matchStatus_; }
  field::Product& product() { return product_; }
  field::SecurityType& securityType() { return securityType_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  group::AllocsGroup2& allocsGroup2() { return allocsGroup2_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::AllocID allocID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::SecondaryAllocID secondaryAllocID_{this};
  field::TradeDate tradeDate_{this};
  field::TransactTime transactTime_{this};
  field::AllocStatus allocStatus_{this};
  field::AllocRejCode allocRejCode_{this};
  field::AllocType allocType_{this};
  field::AllocIntermedReqType allocIntermedReqType_{this};
  field::MatchStatus matchStatus_{this};
  field::Product product_{this};
  field::SecurityType securityType_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  group::AllocsGroup2 allocsGroup2_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[44];
  AbstractGroup* slotGroups_[3];
};

class DontKnowTrade : public AbstractMessage {
 public:
  DontKnowTrade();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::ExecID& execID() { return execID_; }
  field::DKReason& dKReason() { return dKReason_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::Side& side() { return side_; }
  field::OrderQty& orderQty() { return orderQty_; }
  field::CashOrderQty& cashOrderQty() { return cashOrderQty_; }
  field::OrderPercent& orderPercent() { return orderPercent_; }
  field::RoundingDirection& roundingDirection() { return roundingDirection_; }
  field::RoundingModulus& roundingModulus() { return roundingModulus_; }
  field::LastQty& lastQty() { return lastQty_; }
  field::LastPx& lastPx() { return lastPx_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::OrderID orderID_{this};
  field::SecondaryOrderID secondaryOrderID_{this};
  field::ExecID execID_{this};
  field::DKReason dKReason_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::Side side_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::LastQty lastQty_{this};
  field::LastPx lastPx_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[86];
  AbstractGroup* slotGroups_[5];
};

class QuoteRequest : public AbstractMessage {
 public:
  QuoteRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::QuoteReqID& quoteReqID() { return quoteReqID_; }
  field::RFQReqID& rFQReqID() { return rFQReqID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::OrderCapacity& orderCapacity() { return orderCapacity_; }
  group::RelatedSymGroup1& relatedSymGroup1() { return relatedSymGroup1_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::QuoteReqID quoteReqID_{this};
  field::RFQReqID rFQReqID_{this};
  field::ClOrdID clOrdID_{this};
  field::OrderCapacity orderCapacity_{this};
  group::RelatedSymGroup1 relatedSymGroup1_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[37];
  AbstractGroup* slotGroups_[2];
};

class Quote : public AbstractMessage {
 public:
  Quote();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::QuoteReqID& quoteReqID() { return quoteReqID_; }
  field::QuoteID& quoteID() { return quoteID_; }
  field::QuoteRespID& quoteRespID() { return quoteRespID_; }
  field::QuoteType& quoteType() { return quoteType_; }
  group::QuoteQualifiersGroup& quoteQualifiersGroup() { return quoteQualifiersGroup_; }
  field::QuoteResponseLevel& quoteResponseLevel() { return quoteResponseLevel_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Side& side() { return side_; }
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
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  group::LegsGroup4& legsGroup4() { return legsGroup4_; }
  field::BidPx& bidPx() { return bidPx_; }
  field::OfferPx& offerPx() { return offerPx_; }
  field::MktBidPx& mktBidPx() { return mktBidPx_; }
  field::MktOfferPx& mktOfferPx() { return mktOfferPx_; }
  field::MinBidSize& minBidSize() { return minBidSize_; }
  field::BidSize& bidSize() { return bidSize_; }
  field::MinOfferSize& minOfferSize() { return minOfferSize_; }
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
  field::OrdType& ordType() { return ordType_; }
  field::BidForwardPoints2& bidForwardPoints2() { return bidForwardPoints2_; }
  field::OfferForwardPoints2& offerForwardPoints2() { return offerForwardPoints2_; }
  field::SettlCurrBidFxRate& settlCurrBidFxRate() { return settlCurrBidFxRate_; }
  field::SettlCurrOfferFxRate& settlCurrOfferFxRate() { return settlCurrOfferFxRate_; }
  field::SettlCurrFxRateCalc& settlCurrFxRateCalc() { return settlCurrFxRateCalc_; }
  field::CommType& commType() { return commType_; }
  field::Commission& commission() { return commission_; }
  field::CustOrderCapacity& custOrderCapacity() { return custOrderCapacity_; }
  field::ExDestination& exDestination() { return exDestination_; }
  field::OrderCapacity& orderCapacity() { return orderCapacity_; }
  field::PriceType& priceType() { return priceType_; }
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
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::QuoteReqID quoteReqID_{this};
  field::QuoteID quoteID_{this};
  field::QuoteRespID quoteRespID_{this};
  field::QuoteType quoteType_{this};
  group::QuoteQualifiersGroup quoteQualifiersGroup_{this};
  field::QuoteResponseLevel quoteResponseLevel_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::Side side_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::SettlDate2 settlDate2_{this};
  field::OrderQty2 orderQty2_{this};
  field::Currency currency_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  group::LegsGroup4 legsGroup4_{this};
  field::BidPx bidPx_{this};
  field::OfferPx offerPx_{this};
  field::MktBidPx mktBidPx_{this};
  field::MktOfferPx mktOfferPx_{this};
  field::MinBidSize minBidSize_{this};
  field::BidSize bidSize_{this};
  field::MinOfferSize minOfferSize_{this};
  field::OfferSize offerSize_{this};
  field::ValidUntilTime validUntilTime_{this};
  field::BidSpotRate bidSpotRate_{this};
  field::OfferSpotRate offerSpotRate_{this};
  field::BidForwardPoints bidForwardPoints_{this};
  field::OfferForwardPoints offerForwardPoints_{this};
  field::MidPx midPx_{this};
  field::BidYield bidYield_{this};
  field::MidYield midYield_{this};
  field::OfferYield offerYield_{this};
  field::TransactTime transactTime_{this};
  field::OrdType ordType_{this};
  field::BidForwardPoints2 bidForwardPoints2_{this};
  field::OfferForwardPoints2 offerForwardPoints2_{this};
  field::SettlCurrBidFxRate settlCurrBidFxRate_{this};
  field::SettlCurrOfferFxRate settlCurrOfferFxRate_{this};
  field::SettlCurrFxRateCalc settlCurrFxRateCalc_{this};
  field::CommType commType_{this};
  field::Commission commission_{this};
  field::CustOrderCapacity custOrderCapacity_{this};
  field::ExDestination exDestination_{this};
  field::OrderCapacity orderCapacity_{this};
  field::PriceType priceType_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[148];
  AbstractGroup* slotGroups_[8];
};

class SettlementInstructions : public AbstractMessage {
 public:
  SettlementInstructions();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SettlInstMsgID& settlInstMsgID() { return settlInstMsgID_; }
  field::SettlInstReqID& settlInstReqID() { return settlInstReqID_; }
  field::SettlInstMode& settlInstMode() { return settlInstMode_; }
  field::SettlInstReqRejCode& settlInstReqRejCode() { return settlInstReqRejCode_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::TransactTime& transactTime() { return transactTime_; }
  group::SettlInstGroup& settlInstGroup() { return settlInstGroup_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SettlInstMsgID settlInstMsgID_{this};
  field::SettlInstReqID settlInstReqID_{this};
  field::SettlInstMode settlInstMode_{this};
  field::SettlInstReqRejCode settlInstReqRejCode_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::ClOrdID clOrdID_{this};
  field::TransactTime transactTime_{this};
  group::SettlInstGroup settlInstGroup_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[39];
  AbstractGroup* slotGroups_[2];
};

class MarketDataRequest : public AbstractMessage {
 public:
  MarketDataRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::MDReqID& mDReqID() { return mDReqID_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::MarketDepth& marketDepth() { return marketDepth_; }
  field::MDUpdateType& mDUpdateType() { return mDUpdateType_; }
  field::AggregatedBook& aggregatedBook() { return aggregatedBook_; }
  field::OpenCloseSettlFlag& openCloseSettlFlag() { return openCloseSettlFlag_; }
  field::Scope& scope() { return scope_; }
  field::MDImplicitDelete& mDImplicitDelete() { return mDImplicitDelete_; }
  group::MDEntryTypesGroup& mDEntryTypesGroup() { return mDEntryTypesGroup_; }
  group::RelatedSymGroup2& relatedSymGroup2() { return relatedSymGroup2_; }
  group::TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::ApplQueueAction& applQueueAction() { return applQueueAction_; }
  field::ApplQueueMax& applQueueMax() { return applQueueMax_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::MDReqID mDReqID_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::MarketDepth marketDepth_{this};
  field::MDUpdateType mDUpdateType_{this};
  field::AggregatedBook aggregatedBook_{this};
  field::OpenCloseSettlFlag openCloseSettlFlag_{this};
  field::Scope scope_{this};
  field::MDImplicitDelete mDImplicitDelete_{this};
  group::MDEntryTypesGroup mDEntryTypesGroup_{this};
  group::RelatedSymGroup2 relatedSymGroup2_{this};
  group::TradingSessionsGroup tradingSessionsGroup_{this};
  field::ApplQueueAction applQueueAction_{this};
  field::ApplQueueMax applQueueMax_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[40];
  AbstractGroup* slotGroups_[4];
};

class MarketDataSnapshotFullRefresh : public AbstractMessage {
 public:
  MarketDataSnapshotFullRefresh();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::MDReqID& mDReqID() { return mDReqID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::FinancialStatus& financialStatus() { return financialStatus_; }
  field::CorporateAction& corporateAction() { return corporateAction_; }
  field::NetChgPrevDay& netChgPrevDay() { return netChgPrevDay_; }
  group::MDEntriesGroup& mDEntriesGroup() { return mDEntriesGroup_; }
  field::ApplQueueDepth& applQueueDepth() { return applQueueDepth_; }
  field::ApplQueueResolution& applQueueResolution() { return applQueueResolution_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::MDReqID mDReqID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::FinancialStatus financialStatus_{this};
  field::CorporateAction corporateAction_{this};
  field::NetChgPrevDay netChgPrevDay_{this};
  group::MDEntriesGroup mDEntriesGroup_{this};
  field::ApplQueueDepth applQueueDepth_{this};
  field::ApplQueueResolution applQueueResolution_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[77];
  AbstractGroup* slotGroups_[6];
};

class MarketDataIncrementalRefresh : public AbstractMessage {
 public:
  MarketDataIncrementalRefresh();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::MDReqID& mDReqID() { return mDReqID_; }
  group::MDEntriesGroup1& mDEntriesGroup1() { return mDEntriesGroup1_; }
  field::ApplQueueDepth& applQueueDepth() { return applQueueDepth_; }
  field::ApplQueueResolution& applQueueResolution() { return applQueueResolution_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::MDReqID mDReqID_{this};
  group::MDEntriesGroup1 mDEntriesGroup1_{this};
  field::ApplQueueDepth applQueueDepth_{this};
  field::ApplQueueResolution applQueueResolution_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[33];
  AbstractGroup* slotGroups_[2];
};

class MarketDataRequestReject : public AbstractMessage {
 public:
  MarketDataRequestReject();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::MDReqID& mDReqID() { return mDReqID_; }
  field::MDReqRejReason& mDReqRejReason() { return mDReqRejReason_; }
  group::AltMDSourceGroup& altMDSourceGroup() { return altMDSourceGroup_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::MDReqID mDReqID_{this};
  field::MDReqRejReason mDReqRejReason_{this};
  group::AltMDSourceGroup altMDSourceGroup_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[35];
  AbstractGroup* slotGroups_[2];
};

class QuoteCancel : public AbstractMessage {
 public:
  QuoteCancel();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::QuoteReqID& quoteReqID() { return quoteReqID_; }
  field::QuoteID& quoteID() { return quoteID_; }
  field::QuoteCancelType& quoteCancelType() { return quoteCancelType_; }
  field::QuoteResponseLevel& quoteResponseLevel() { return quoteResponseLevel_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  group::QuoteEntriesGroup& quoteEntriesGroup() { return quoteEntriesGroup_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::QuoteReqID quoteReqID_{this};
  field::QuoteID quoteID_{this};
  field::QuoteCancelType quoteCancelType_{this};
  field::QuoteResponseLevel quoteResponseLevel_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  group::QuoteEntriesGroup quoteEntriesGroup_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[39];
  AbstractGroup* slotGroups_[3];
};

class QuoteStatusRequest : public AbstractMessage {
 public:
  QuoteStatusRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::QuoteStatusReqID& quoteStatusReqID() { return quoteStatusReqID_; }
  field::QuoteID& quoteID() { return quoteID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::QuoteStatusReqID quoteStatusReqID_{this};
  field::QuoteID quoteID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[88];
  AbstractGroup* slotGroups_[6];
};

class MassQuoteAcknowledgement : public AbstractMessage {
 public:
  MassQuoteAcknowledgement();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::QuoteReqID& quoteReqID() { return quoteReqID_; }
  field::QuoteID& quoteID() { return quoteID_; }
  field::QuoteStatus& quoteStatus() { return quoteStatus_; }
  field::QuoteRejectReason& quoteRejectReason() { return quoteRejectReason_; }
  field::QuoteResponseLevel& quoteResponseLevel() { return quoteResponseLevel_; }
  field::QuoteType& quoteType() { return quoteType_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  group::QuoteSetsGroup& quoteSetsGroup() { return quoteSetsGroup_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::QuoteReqID quoteReqID_{this};
  field::QuoteID quoteID_{this};
  field::QuoteStatus quoteStatus_{this};
  field::QuoteRejectReason quoteRejectReason_{this};
  field::QuoteResponseLevel quoteResponseLevel_{this};
  field::QuoteType quoteType_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  group::QuoteSetsGroup quoteSetsGroup_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[42];
  AbstractGroup* slotGroups_[3];
};

class SecurityDefinitionRequest : public AbstractMessage {
 public:
  SecurityDefinitionRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SecurityReqID& securityReqID() { return securityReqID_; }
  field::SecurityRequestType& securityRequestType() { return securityRequestType_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  group::InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Currency& currency() { return currency_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::ExpirationCycle& expirationCycle() { return expirationCycle_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SecurityReqID securityReqID_{this};
  field::SecurityRequestType securityRequestType_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::DeliveryForm deliveryForm_{this};
  field::PctAtRisk pctAtRisk_{this};
  group::InstrAttribGroup instrAttribGroup_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::Currency currency_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::ExpirationCycle expirationCycle_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[83];
  AbstractGroup* slotGroups_[6];
};

class SecurityDefinition : public AbstractMessage {
 public:
  SecurityDefinition();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SecurityReqID& securityReqID() { return securityReqID_; }
  field::SecurityResponseID& securityResponseID() { return securityResponseID_; }
  field::SecurityResponseType& securityResponseType() { return securityResponseType_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  group::InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Currency& currency() { return currency_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::ExpirationCycle& expirationCycle() { return expirationCycle_; }
  field::RoundLot& roundLot() { return roundLot_; }
  field::MinTradeVol& minTradeVol() { return minTradeVol_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SecurityReqID securityReqID_{this};
  field::SecurityResponseID securityResponseID_{this};
  field::SecurityResponseType securityResponseType_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::DeliveryForm deliveryForm_{this};
  field::PctAtRisk pctAtRisk_{this};
  group::InstrAttribGroup instrAttribGroup_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::Currency currency_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::ExpirationCycle expirationCycle_{this};
  field::RoundLot roundLot_{this};
  field::MinTradeVol minTradeVol_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[85];
  AbstractGroup* slotGroups_[6];
};

class SecurityStatusRequest : public AbstractMessage {
 public:
  SecurityStatusRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SecurityStatusReqID& securityStatusReqID() { return securityStatusReqID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  group::InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::Currency& currency() { return currency_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SecurityStatusReqID securityStatusReqID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::DeliveryForm deliveryForm_{this};
  field::PctAtRisk pctAtRisk_{this};
  group::InstrAttribGroup instrAttribGroup_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::Currency currency_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[78];
  AbstractGroup* slotGroups_[6];
};

class SecurityStatus : public AbstractMessage {
 public:
  SecurityStatus();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SecurityStatusReqID& securityStatusReqID() { return securityStatusReqID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  group::InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::Currency& currency() { return currency_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::UnsolicitedIndicator& unsolicitedIndicator() { return unsolicitedIndicator_; }
  field::SecurityTradingStatus& securityTradingStatus() { return securityTradingStatus_; }
  field::FinancialStatus& financialStatus() { return financialStatus_; }
  field::CorporateAction& corporateAction() { return corporateAction_; }
  field::HaltReasonChar& haltReasonChar() { return haltReasonChar_; }
  field::InViewOfCommon& inViewOfCommon() { return inViewOfCommon_; }
  field::DueToRelated& dueToRelated() { return dueToRelated_; }
  field::BuyVolume& buyVolume() { return buyVolume_; }
  field::SellVolume& sellVolume() { return sellVolume_; }
  field::HighPx& highPx() { return highPx_; }
  field::LowPx& lowPx() { return lowPx_; }
  field::LastPx& lastPx() { return lastPx_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::Adjustment& adjustment() { return adjustment_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SecurityStatusReqID securityStatusReqID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::DeliveryForm deliveryForm_{this};
  field::PctAtRisk pctAtRisk_{this};
  group::InstrAttribGroup instrAttribGroup_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::Currency currency_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::UnsolicitedIndicator unsolicitedIndicator_{this};
  field::SecurityTradingStatus securityTradingStatus_{this};
  field::FinancialStatus financialStatus_{this};
  field::CorporateAction corporateAction_{this};
  field::HaltReasonChar haltReasonChar_{this};
  field::InViewOfCommon inViewOfCommon_{this};
  field::DueToRelated dueToRelated_{this};
  field::BuyVolume buyVolume_{this};
  field::SellVolume sellVolume_{this};
  field::HighPx highPx_{this};
  field::LowPx lowPx_{this};
  field::LastPx lastPx_{this};
  field::TransactTime transactTime_{this};
  field::Adjustment adjustment_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[94];
  AbstractGroup* slotGroups_[6];
};

class TradingSessionStatusRequest : public AbstractMessage {
 public:
  TradingSessionStatusRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::TradSesReqID& tradSesReqID() { return tradSesReqID_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::TradSesMethod& tradSesMethod() { return tradSesMethod_; }
  field::TradSesMode& tradSesMode() { return tradSesMode_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::TradSesReqID tradSesReqID_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::TradSesMethod tradSesMethod_{this};
  field::TradSesMode tradSesMode_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[36];
  AbstractGroup* slotGroups_[1];
};

class TradingSessionStatus : public AbstractMessage {
 public:
  TradingSessionStatus();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::TradSesReqID& tradSesReqID() { return tradSesReqID_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::TradSesMethod& tradSesMethod() { return tradSesMethod_; }
  field::TradSesMode& tradSesMode() { return tradSesMode_; }
  field::UnsolicitedIndicator& unsolicitedIndicator() { return unsolicitedIndicator_; }
  field::TradSesStatus& tradSesStatus() { return tradSesStatus_; }
  field::TradSesStatusRejReason& tradSesStatusRejReason() { return tradSesStatusRejReason_; }
  field::TradSesStartTime& tradSesStartTime() { return tradSesStartTime_; }
  field::TradSesOpenTime& tradSesOpenTime() { return tradSesOpenTime_; }
  field::TradSesPreCloseTime& tradSesPreCloseTime() { return tradSesPreCloseTime_; }
  field::TradSesCloseTime& tradSesCloseTime() { return tradSesCloseTime_; }
  field::TradSesEndTime& tradSesEndTime() { return tradSesEndTime_; }
  field::TotalVolumeTraded& totalVolumeTraded() { return totalVolumeTraded_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::TradSesReqID tradSesReqID_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::TradSesMethod tradSesMethod_{this};
  field::TradSesMode tradSesMode_{this};
  field::UnsolicitedIndicator unsolicitedIndicator_{this};
  field::TradSesStatus tradSesStatus_{this};
  field::TradSesStatusRejReason tradSesStatusRejReason_{this};
  field::TradSesStartTime tradSesStartTime_{this};
  field::TradSesOpenTime tradSesOpenTime_{this};
  field::TradSesPreCloseTime tradSesPreCloseTime_{this};
  field::TradSesCloseTime tradSesCloseTime_{this};
  field::TradSesEndTime tradSesEndTime_{this};
  field::TotalVolumeTraded totalVolumeTraded_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[47];
  AbstractGroup* slotGroups_[1];
};

class MassQuote : public AbstractMessage {
 public:
  MassQuote();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::QuoteReqID& quoteReqID() { return quoteReqID_; }
  field::QuoteID& quoteID() { return quoteID_; }
  field::QuoteType& quoteType() { return quoteType_; }
  field::QuoteResponseLevel& quoteResponseLevel() { return quoteResponseLevel_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::DefBidSize& defBidSize() { return defBidSize_; }
  field::DefOfferSize& defOfferSize() { return defOfferSize_; }
  group::QuoteSetsGroup1& quoteSetsGroup1() { return quoteSetsGroup1_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::QuoteReqID quoteReqID_{this};
  field::QuoteID quoteID_{this};
  field::QuoteType quoteType_{this};
  field::QuoteResponseLevel quoteResponseLevel_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::DefBidSize defBidSize_{this};
  field::DefOfferSize defOfferSize_{this};
  group::QuoteSetsGroup1 quoteSetsGroup1_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[39];
  AbstractGroup* slotGroups_[3];
};

class BusinessMessageReject : public AbstractMessage {
 public:
  BusinessMessageReject();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::RefSeqNum& refSeqNum() { return refSeqNum_; }
  field::RefMsgType& refMsgType() { return refMsgType_; }
  field::BusinessRejectRefID& businessRejectRefID() { return businessRejectRefID_; }
  field::BusinessRejectReason& businessRejectReason() { return businessRejectReason_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::RefSeqNum refSeqNum_{this};
  field::RefMsgType refMsgType_{this};
  field::BusinessRejectRefID businessRejectRefID_{this};
  field::BusinessRejectReason businessRejectReason_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[37];
  AbstractGroup* slotGroups_[1];
};

class BidRequest : public AbstractMessage {
 public:
  BidRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::BidID& bidID() { return bidID_; }
  field::ClientBidID& clientBidID() { return clientBidID_; }
  field::BidRequestTransType& bidRequestTransType() { return bidRequestTransType_; }
  field::ListName& listName() { return listName_; }
  field::TotNoRelatedSym& totNoRelatedSym() { return totNoRelatedSym_; }
  field::BidType& bidType() { return bidType_; }
  field::NumTickets& numTickets() { return numTickets_; }
  field::Currency& currency() { return currency_; }
  field::SideValue1& sideValue1() { return sideValue1_; }
  field::SideValue2& sideValue2() { return sideValue2_; }
  group::BidDescriptorsGroup& bidDescriptorsGroup() { return bidDescriptorsGroup_; }
  group::BidComponentsGroup& bidComponentsGroup() { return bidComponentsGroup_; }
  field::LiquidityIndType& liquidityIndType() { return liquidityIndType_; }
  field::WtAverageLiquidity& wtAverageLiquidity() { return wtAverageLiquidity_; }
  field::ExchangeForPhysical& exchangeForPhysical() { return exchangeForPhysical_; }
  field::OutMainCntryUIndex& outMainCntryUIndex() { return outMainCntryUIndex_; }
  field::CrossPercent& crossPercent() { return crossPercent_; }
  field::ProgRptReqs& progRptReqs() { return progRptReqs_; }
  field::ProgPeriodInterval& progPeriodInterval() { return progPeriodInterval_; }
  field::IncTaxInd& incTaxInd() { return incTaxInd_; }
  field::ForexReq& forexReq() { return forexReq_; }
  field::NumBidders& numBidders() { return numBidders_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::BidTradeType& bidTradeType() { return bidTradeType_; }
  field::BasisPxType& basisPxType() { return basisPxType_; }
  field::StrikeTime& strikeTime() { return strikeTime_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::BidID bidID_{this};
  field::ClientBidID clientBidID_{this};
  field::BidRequestTransType bidRequestTransType_{this};
  field::ListName listName_{this};
  field::TotNoRelatedSym totNoRelatedSym_{this};
  field::BidType bidType_{this};
  field::NumTickets numTickets_{this};
  field::Currency currency_{this};
  field::SideValue1 sideValue1_{this};
  field::SideValue2 sideValue2_{this};
  group::BidDescriptorsGroup bidDescriptorsGroup_{this};
  group::BidComponentsGroup bidComponentsGroup_{this};
  field::LiquidityIndType liquidityIndType_{this};
  field::WtAverageLiquidity wtAverageLiquidity_{this};
  field::ExchangeForPhysical exchangeForPhysical_{this};
  field::OutMainCntryUIndex outMainCntryUIndex_{this};
  field::CrossPercent crossPercent_{this};
  field::ProgRptReqs progRptReqs_{this};
  field::ProgPeriodInterval progPeriodInterval_{this};
  field::IncTaxInd incTaxInd_{this};
  field::ForexReq forexReq_{this};
  field::NumBidders numBidders_{this};
  field::TradeDate tradeDate_{this};
  field::BidTradeType bidTradeType_{this};
  field::BasisPxType basisPxType_{this};
  field::StrikeTime strikeTime_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[57];
  AbstractGroup* slotGroups_[3];
};

class BidResponse : public AbstractMessage {
 public:
  BidResponse();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::BidID& bidID() { return bidID_; }
  field::ClientBidID& clientBidID() { return clientBidID_; }
  group::BidComponentsGroup1& bidComponentsGroup1() { return bidComponentsGroup1_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::BidID bidID_{this};
  field::ClientBidID clientBidID_{this};
  group::BidComponentsGroup1 bidComponentsGroup1_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[32];
  AbstractGroup* slotGroups_[2];
};

class ListStrikePrice : public AbstractMessage {
 public:
  ListStrikePrice();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ListID& listID() { return listID_; }
  field::TotNoStrikes& totNoStrikes() { return totNoStrikes_; }
  field::LastFragment& lastFragment() { return lastFragment_; }
  group::StrikesGroup& strikesGroup() { return strikesGroup_; }
  group::UnderlyingsGroup1& underlyingsGroup1() { return underlyingsGroup1_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ListID listID_{this};
  field::TotNoStrikes totNoStrikes_{this};
  field::LastFragment lastFragment_{this};
  group::StrikesGroup strikesGroup_{this};
  group::UnderlyingsGroup1 underlyingsGroup1_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[33];
  AbstractGroup* slotGroups_[3];
};

class XMLnonFIX : public AbstractMessage {
 public:
  XMLnonFIX();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[30];
  AbstractGroup* slotGroups_[1];
};

class RegistrationInstructions : public AbstractMessage {
 public:
  RegistrationInstructions();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::RegistID& registID() { return registID_; }
  field::RegistTransType& registTransType() { return registTransType_; }
  field::RegistRefID& registRefID() { return registRefID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::RegistAcctType& registAcctType() { return registAcctType_; }
  field::TaxAdvantageType& taxAdvantageType() { return taxAdvantageType_; }
  field::OwnershipType& ownershipType() { return ownershipType_; }
  group::RegistDtlsGroup& registDtlsGroup() { return registDtlsGroup_; }
  group::DistribInstsGroup& distribInstsGroup() { return distribInstsGroup_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::RegistID registID_{this};
  field::RegistTransType registTransType_{this};
  field::RegistRefID registRefID_{this};
  field::ClOrdID clOrdID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::RegistAcctType registAcctType_{this};
  field::TaxAdvantageType taxAdvantageType_{this};
  field::OwnershipType ownershipType_{this};
  group::RegistDtlsGroup registDtlsGroup_{this};
  group::DistribInstsGroup distribInstsGroup_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[39];
  AbstractGroup* slotGroups_[4];
};

class RegistrationInstructionsResponse : public AbstractMessage {
 public:
  RegistrationInstructionsResponse();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::RegistID& registID() { return registID_; }
  field::RegistTransType& registTransType() { return registTransType_; }
  field::RegistRefID& registRefID() { return registRefID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::RegistStatus& registStatus() { return registStatus_; }
  field::RegistRejReasonCode& registRejReasonCode() { return registRejReasonCode_; }
  field::RegistRejReasonText& registRejReasonText() { return registRejReasonText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::RegistID registID_{this};
  field::RegistTransType registTransType_{this};
  field::RegistRefID registRefID_{this};
  field::ClOrdID clOrdID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::RegistStatus registStatus_{this};
  field::RegistRejReasonCode registRejReasonCode_{this};
  field::RegistRejReasonText registRejReasonText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[39];
  AbstractGroup* slotGroups_[2];
};

class OrderMassCancelRequest : public AbstractMessage {
 public:
  OrderMassCancelRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::MassCancelRequestType& massCancelRequestType() { return massCancelRequestType_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  group::UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
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
  group::UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }
  field::Side& side() { return side_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ClOrdID clOrdID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  field::MassCancelRequestType massCancelRequestType_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::UnderlyingSymbol underlyingSymbol_{this};
  field::UnderlyingSymbolSfx underlyingSymbolSfx_{this};
  field::UnderlyingSecurityID underlyingSecurityID_{this};
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_{this};
  group::UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_{this};
  field::UnderlyingProduct underlyingProduct_{this};
  field::UnderlyingCFICode underlyingCFICode_{this};
  field::UnderlyingSecurityType underlyingSecurityType_{this};
  field::UnderlyingSecuritySubType underlyingSecuritySubType_{this};
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_{this};
  field::UnderlyingMaturityDate underlyingMaturityDate_{this};
  field::UnderlyingPutOrCall underlyingPutOrCall_{this};
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_{this};
  field::UnderlyingIssueDate underlyingIssueDate_{this};
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_{this};
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_{this};
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_{this};
  field::UnderlyingFactor underlyingFactor_{this};
  field::UnderlyingCreditRating underlyingCreditRating_{this};
  field::UnderlyingInstrRegistry underlyingInstrRegistry_{this};
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_{this};
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_{this};
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_{this};
  field::UnderlyingRedemptionDate underlyingRedemptionDate_{this};
  field::UnderlyingStrikePrice underlyingStrikePrice_{this};
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_{this};
  field::UnderlyingOptAttribute underlyingOptAttribute_{this};
  field::UnderlyingContractMultiplier underlyingContractMultiplier_{this};
  field::UnderlyingCouponRate underlyingCouponRate_{this};
  field::UnderlyingSecurityExchange underlyingSecurityExchange_{this};
  field::UnderlyingIssuer underlyingIssuer_{this};
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_{this};
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_{this};
  field::UnderlyingSecurityDesc underlyingSecurityDesc_{this};
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_{this};
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_{this};
  field::UnderlyingCPProgram underlyingCPProgram_{this};
  field::UnderlyingCPRegType underlyingCPRegType_{this};
  field::UnderlyingCurrency underlyingCurrency_{this};
  field::UnderlyingQty underlyingQty_{this};
  field::UnderlyingPx underlyingPx_{this};
  field::UnderlyingDirtyPrice underlyingDirtyPrice_{this};
  field::UnderlyingEndPrice underlyingEndPrice_{this};
  field::UnderlyingStartValue underlyingStartValue_{this};
  field::UnderlyingCurrentValue underlyingCurrentValue_{this};
  field::UnderlyingEndValue underlyingEndValue_{this};
  group::UnderlyingStipsGroup underlyingStipsGroup_{this};
  field::Side side_{this};
  field::TransactTime transactTime_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[126];
  AbstractGroup* slotGroups_[5];
};

class OrderMassCancelReport : public AbstractMessage {
 public:
  OrderMassCancelReport();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::MassCancelRequestType& massCancelRequestType() { return massCancelRequestType_; }
  field::MassCancelResponse& massCancelResponse() { return massCancelResponse_; }
  field::MassCancelRejectReason& massCancelRejectReason() { return massCancelRejectReason_; }
  field::TotalAffectedOrders& totalAffectedOrders() { return totalAffectedOrders_; }
  group::AffectedOrdersGroup& affectedOrdersGroup() { return affectedOrdersGroup_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  group::UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
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
  group::UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }
  field::Side& side() { return side_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ClOrdID clOrdID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  field::OrderID orderID_{this};
  field::SecondaryOrderID secondaryOrderID_{this};
  field::MassCancelRequestType massCancelRequestType_{this};
  field::MassCancelResponse massCancelResponse_{this};
  field::MassCancelRejectReason massCancelRejectReason_{this};
  field::TotalAffectedOrders totalAffectedOrders_{this};
  group::AffectedOrdersGroup affectedOrdersGroup_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::UnderlyingSymbol underlyingSymbol_{this};
  field::UnderlyingSymbolSfx underlyingSymbolSfx_{this};
  field::UnderlyingSecurityID underlyingSecurityID_{this};
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_{this};
  group::UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_{this};
  field::UnderlyingProduct underlyingProduct_{this};
  field::UnderlyingCFICode underlyingCFICode_{this};
  field::UnderlyingSecurityType underlyingSecurityType_{this};
  field::UnderlyingSecuritySubType underlyingSecuritySubType_{this};
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_{this};
  field::UnderlyingMaturityDate underlyingMaturityDate_{this};
  field::UnderlyingPutOrCall underlyingPutOrCall_{this};
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_{this};
  field::UnderlyingIssueDate underlyingIssueDate_{this};
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_{this};
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_{this};
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_{this};
  field::UnderlyingFactor underlyingFactor_{this};
  field::UnderlyingCreditRating underlyingCreditRating_{this};
  field::UnderlyingInstrRegistry underlyingInstrRegistry_{this};
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_{this};
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_{this};
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_{this};
  field::UnderlyingRedemptionDate underlyingRedemptionDate_{this};
  field::UnderlyingStrikePrice underlyingStrikePrice_{this};
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_{this};
  field::UnderlyingOptAttribute underlyingOptAttribute_{this};
  field::UnderlyingContractMultiplier underlyingContractMultiplier_{this};
  field::UnderlyingCouponRate underlyingCouponRate_{this};
  field::UnderlyingSecurityExchange underlyingSecurityExchange_{this};
  field::UnderlyingIssuer underlyingIssuer_{this};
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_{this};
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_{this};
  field::UnderlyingSecurityDesc underlyingSecurityDesc_{this};
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_{this};
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_{this};
  field::UnderlyingCPProgram underlyingCPProgram_{this};
  field::UnderlyingCPRegType underlyingCPRegType_{this};
  field::UnderlyingCurrency underlyingCurrency_{this};
  field::UnderlyingQty underlyingQty_{this};
  field::UnderlyingPx underlyingPx_{this};
  field::UnderlyingDirtyPrice underlyingDirtyPrice_{this};
  field::UnderlyingEndPrice underlyingEndPrice_{this};
  field::UnderlyingStartValue underlyingStartValue_{this};
  field::UnderlyingCurrentValue underlyingCurrentValue_{this};
  field::UnderlyingEndValue underlyingEndValue_{this};
  group::UnderlyingStipsGroup underlyingStipsGroup_{this};
  field::Side side_{this};
  field::TransactTime transactTime_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[131];
  AbstractGroup* slotGroups_[6];
};

class NewOrderCross : public AbstractMessage {
 public:
  NewOrderCross();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::CrossID& crossID() { return crossID_; }
  field::CrossType& crossType() { return crossType_; }
  field::CrossPrioritization& crossPrioritization() { return crossPrioritization_; }
  group::SidesGroup& sidesGroup() { return sidesGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::HandlInst& handlInst() { return handlInst_; }
  field::ExecInst& execInst() { return execInst_; }
  field::MinQty& minQty() { return minQty_; }
  field::MaxFloor& maxFloor() { return maxFloor_; }
  field::ExDestination& exDestination() { return exDestination_; }
  group::TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::ProcessCode& processCode() { return processCode_; }
  field::PrevClosePx& prevClosePx() { return prevClosePx_; }
  field::LocateReqd& locateReqd() { return locateReqd_; }
  field::TransactTime& transactTime() { return transactTime_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
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
  field::IOIID& iOIID() { return iOIID_; }
  field::QuoteID& quoteID() { return quoteID_; }
  field::TimeInForce& timeInForce() { return timeInForce_; }
  field::EffectiveTime& effectiveTime() { return effectiveTime_; }
  field::ExpireDate& expireDate() { return expireDate_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::GTBookingInst& gTBookingInst() { return gTBookingInst_; }
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
  field::CancellationRights& cancellationRights() { return cancellationRights_; }
  field::MoneyLaunderingStatus& moneyLaunderingStatus() { return moneyLaunderingStatus_; }
  field::RegistID& registID() { return registID_; }
  field::Designation& designation() { return designation_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::CrossID crossID_{this};
  field::CrossType crossType_{this};
  field::CrossPrioritization crossPrioritization_{this};
  group::SidesGroup sidesGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::HandlInst handlInst_{this};
  field::ExecInst execInst_{this};
  field::MinQty minQty_{this};
  field::MaxFloor maxFloor_{this};
  field::ExDestination exDestination_{this};
  group::TradingSessionsGroup tradingSessionsGroup_{this};
  field::ProcessCode processCode_{this};
  field::PrevClosePx prevClosePx_{this};
  field::LocateReqd locateReqd_{this};
  field::TransactTime transactTime_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::OrdType ordType_{this};
  field::PriceType priceType_{this};
  field::Price price_{this};
  field::StopPx stopPx_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::Currency currency_{this};
  field::ComplianceID complianceID_{this};
  field::IOIID iOIID_{this};
  field::QuoteID quoteID_{this};
  field::TimeInForce timeInForce_{this};
  field::EffectiveTime effectiveTime_{this};
  field::ExpireDate expireDate_{this};
  field::ExpireTime expireTime_{this};
  field::GTBookingInst gTBookingInst_{this};
  field::MaxShow maxShow_{this};
  field::PegOffsetValue pegOffsetValue_{this};
  field::PegMoveType pegMoveType_{this};
  field::PegOffsetType pegOffsetType_{this};
  field::PegLimitType pegLimitType_{this};
  field::PegRoundDirection pegRoundDirection_{this};
  field::PegScope pegScope_{this};
  field::DiscretionInst discretionInst_{this};
  field::DiscretionOffsetValue discretionOffsetValue_{this};
  field::DiscretionMoveType discretionMoveType_{this};
  field::DiscretionOffsetType discretionOffsetType_{this};
  field::DiscretionLimitType discretionLimitType_{this};
  field::DiscretionRoundDirection discretionRoundDirection_{this};
  field::DiscretionScope discretionScope_{this};
  field::TargetStrategy targetStrategy_{this};
  field::TargetStrategyParameters targetStrategyParameters_{this};
  field::ParticipationRate participationRate_{this};
  field::CancellationRights cancellationRights_{this};
  field::MoneyLaunderingStatus moneyLaunderingStatus_{this};
  field::RegistID registID_{this};
  field::Designation designation_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[133];
  AbstractGroup* slotGroups_[8];
};

class CrossOrderCancelReplaceRequest : public AbstractMessage {
 public:
  CrossOrderCancelReplaceRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::OrderID& orderID() { return orderID_; }
  field::CrossID& crossID() { return crossID_; }
  field::OrigCrossID& origCrossID() { return origCrossID_; }
  field::CrossType& crossType() { return crossType_; }
  field::CrossPrioritization& crossPrioritization() { return crossPrioritization_; }
  group::SidesGroup& sidesGroup() { return sidesGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::HandlInst& handlInst() { return handlInst_; }
  field::ExecInst& execInst() { return execInst_; }
  field::MinQty& minQty() { return minQty_; }
  field::MaxFloor& maxFloor() { return maxFloor_; }
  field::ExDestination& exDestination() { return exDestination_; }
  group::TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::ProcessCode& processCode() { return processCode_; }
  field::PrevClosePx& prevClosePx() { return prevClosePx_; }
  field::LocateReqd& locateReqd() { return locateReqd_; }
  field::TransactTime& transactTime() { return transactTime_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
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
  field::IOIID& iOIID() { return iOIID_; }
  field::QuoteID& quoteID() { return quoteID_; }
  field::TimeInForce& timeInForce() { return timeInForce_; }
  field::EffectiveTime& effectiveTime() { return effectiveTime_; }
  field::ExpireDate& expireDate() { return expireDate_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::GTBookingInst& gTBookingInst() { return gTBookingInst_; }
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
  field::CancellationRights& cancellationRights() { return cancellationRights_; }
  field::MoneyLaunderingStatus& moneyLaunderingStatus() { return moneyLaunderingStatus_; }
  field::RegistID& registID() { return registID_; }
  field::Designation& designation() { return designation_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::OrderID orderID_{this};
  field::CrossID crossID_{this};
  field::OrigCrossID origCrossID_{this};
  field::CrossType crossType_{this};
  field::CrossPrioritization crossPrioritization_{this};
  group::SidesGroup sidesGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::HandlInst handlInst_{this};
  field::ExecInst execInst_{this};
  field::MinQty minQty_{this};
  field::MaxFloor maxFloor_{this};
  field::ExDestination exDestination_{this};
  group::TradingSessionsGroup tradingSessionsGroup_{this};
  field::ProcessCode processCode_{this};
  field::PrevClosePx prevClosePx_{this};
  field::LocateReqd locateReqd_{this};
  field::TransactTime transactTime_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::OrdType ordType_{this};
  field::PriceType priceType_{this};
  field::Price price_{this};
  field::StopPx stopPx_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::Currency currency_{this};
  field::ComplianceID complianceID_{this};
  field::IOIID iOIID_{this};
  field::QuoteID quoteID_{this};
  field::TimeInForce timeInForce_{this};
  field::EffectiveTime effectiveTime_{this};
  field::ExpireDate expireDate_{this};
  field::ExpireTime expireTime_{this};
  field::GTBookingInst gTBookingInst_{this};
  field::MaxShow maxShow_{this};
  field::PegOffsetValue pegOffsetValue_{this};
  field::PegMoveType pegMoveType_{this};
  field::PegOffsetType pegOffsetType_{this};
  field::PegLimitType pegLimitType_{this};
  field::PegRoundDirection pegRoundDirection_{this};
  field::PegScope pegScope_{this};
  field::DiscretionInst discretionInst_{this};
  field::DiscretionOffsetValue discretionOffsetValue_{this};
  field::DiscretionMoveType discretionMoveType_{this};
  field::DiscretionOffsetType discretionOffsetType_{this};
  field::DiscretionLimitType discretionLimitType_{this};
  field::DiscretionRoundDirection discretionRoundDirection_{this};
  field::DiscretionScope discretionScope_{this};
  field::TargetStrategy targetStrategy_{this};
  field::TargetStrategyParameters targetStrategyParameters_{this};
  field::ParticipationRate participationRate_{this};
  field::CancellationRights cancellationRights_{this};
  field::MoneyLaunderingStatus moneyLaunderingStatus_{this};
  field::RegistID registID_{this};
  field::Designation designation_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[135];
  AbstractGroup* slotGroups_[8];
};

class CrossOrderCancelRequest : public AbstractMessage {
 public:
  CrossOrderCancelRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::OrderID& orderID() { return orderID_; }
  field::CrossID& crossID() { return crossID_; }
  field::OrigCrossID& origCrossID() { return origCrossID_; }
  field::CrossType& crossType() { return crossType_; }
  field::CrossPrioritization& crossPrioritization() { return crossPrioritization_; }
  group::SidesGroup1& sidesGroup1() { return sidesGroup1_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::OrderID orderID_{this};
  field::CrossID crossID_{this};
  field::OrigCrossID origCrossID_{this};
  field::CrossType crossType_{this};
  field::CrossPrioritization crossPrioritization_{this};
  group::SidesGroup1 sidesGroup1_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::TransactTime transactTime_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[77];
  AbstractGroup* slotGroups_[6];
};

class SecurityTypeRequest : public AbstractMessage {
 public:
  SecurityTypeRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SecurityReqID& securityReqID() { return securityReqID_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::Product& product() { return product_; }
  field::SecurityType& securityType() { return securityType_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SecurityReqID securityReqID_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::Product product_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[39];
  AbstractGroup* slotGroups_[1];
};

class SecurityTypes : public AbstractMessage {
 public:
  SecurityTypes();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SecurityReqID& securityReqID() { return securityReqID_; }
  field::SecurityResponseID& securityResponseID() { return securityResponseID_; }
  field::SecurityResponseType& securityResponseType() { return securityResponseType_; }
  field::TotNoSecurityTypes& totNoSecurityTypes() { return totNoSecurityTypes_; }
  field::LastFragment& lastFragment() { return lastFragment_; }
  group::SecurityTypesGroup& securityTypesGroup() { return securityTypesGroup_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SecurityReqID securityReqID_{this};
  field::SecurityResponseID securityResponseID_{this};
  field::SecurityResponseType securityResponseType_{this};
  field::TotNoSecurityTypes totNoSecurityTypes_{this};
  field::LastFragment lastFragment_{this};
  group::SecurityTypesGroup securityTypesGroup_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[41];
  AbstractGroup* slotGroups_[2];
};

class SecurityListRequest : public AbstractMessage {
 public:
  SecurityListRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SecurityReqID& securityReqID() { return securityReqID_; }
  field::SecurityListRequestType& securityListRequestType() { return securityListRequestType_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  group::InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  field::AgreementDesc& agreementDesc() { return agreementDesc_; }
  field::AgreementID& agreementID() { return agreementID_; }
  field::AgreementDate& agreementDate() { return agreementDate_; }
  field::AgreementCurrency& agreementCurrency() { return agreementCurrency_; }
  field::TerminationType& terminationType() { return terminationType_; }
  field::StartDate& startDate() { return startDate_; }
  field::EndDate& endDate() { return endDate_; }
  field::DeliveryType& deliveryType() { return deliveryType_; }
  field::MarginRatio& marginRatio() { return marginRatio_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::Currency& currency() { return currency_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SecurityReqID securityReqID_{this};
  field::SecurityListRequestType securityListRequestType_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::DeliveryForm deliveryForm_{this};
  field::PctAtRisk pctAtRisk_{this};
  group::InstrAttribGroup instrAttribGroup_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::Currency currency_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[91];
  AbstractGroup* slotGroups_[6];
};

class SecurityList : public AbstractMessage {
 public:
  SecurityList();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SecurityReqID& securityReqID() { return securityReqID_; }
  field::SecurityResponseID& securityResponseID() { return securityResponseID_; }
  field::SecurityRequestResult& securityRequestResult() { return securityRequestResult_; }
  field::TotNoRelatedSym& totNoRelatedSym() { return totNoRelatedSym_; }
  field::LastFragment& lastFragment() { return lastFragment_; }
  group::RelatedSymGroup3& relatedSymGroup3() { return relatedSymGroup3_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SecurityReqID securityReqID_{this};
  field::SecurityResponseID securityResponseID_{this};
  field::SecurityRequestResult securityRequestResult_{this};
  field::TotNoRelatedSym totNoRelatedSym_{this};
  field::LastFragment lastFragment_{this};
  group::RelatedSymGroup3 relatedSymGroup3_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[35];
  AbstractGroup* slotGroups_[2];
};

class DerivativeSecurityListRequest : public AbstractMessage {
 public:
  DerivativeSecurityListRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SecurityReqID& securityReqID() { return securityReqID_; }
  field::SecurityListRequestType& securityListRequestType() { return securityListRequestType_; }
  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  group::UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
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
  group::UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }
  field::SecuritySubType& securitySubType() { return securitySubType_; }
  field::Currency& currency() { return currency_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SecurityReqID securityReqID_{this};
  field::SecurityListRequestType securityListRequestType_{this};
  field::UnderlyingSymbol underlyingSymbol_{this};
  field::UnderlyingSymbolSfx underlyingSymbolSfx_{this};
  field::UnderlyingSecurityID underlyingSecurityID_{this};
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_{this};
  group::UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_{this};
  field::UnderlyingProduct underlyingProduct_{this};
  field::UnderlyingCFICode underlyingCFICode_{this};
  field::UnderlyingSecurityType underlyingSecurityType_{this};
  field::UnderlyingSecuritySubType underlyingSecuritySubType_{this};
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_{this};
  field::UnderlyingMaturityDate underlyingMaturityDate_{this};
  field::UnderlyingPutOrCall underlyingPutOrCall_{this};
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_{this};
  field::UnderlyingIssueDate underlyingIssueDate_{this};
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_{this};
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_{this};
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_{this};
  field::UnderlyingFactor underlyingFactor_{this};
  field::UnderlyingCreditRating underlyingCreditRating_{this};
  field::UnderlyingInstrRegistry underlyingInstrRegistry_{this};
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_{this};
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_{this};
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_{this};
  field::UnderlyingRedemptionDate underlyingRedemptionDate_{this};
  field::UnderlyingStrikePrice underlyingStrikePrice_{this};
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_{this};
  field::UnderlyingOptAttribute underlyingOptAttribute_{this};
  field::UnderlyingContractMultiplier underlyingContractMultiplier_{this};
  field::UnderlyingCouponRate underlyingCouponRate_{this};
  field::UnderlyingSecurityExchange underlyingSecurityExchange_{this};
  field::UnderlyingIssuer underlyingIssuer_{this};
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_{this};
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_{this};
  field::UnderlyingSecurityDesc underlyingSecurityDesc_{this};
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_{this};
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_{this};
  field::UnderlyingCPProgram underlyingCPProgram_{this};
  field::UnderlyingCPRegType underlyingCPRegType_{this};
  field::UnderlyingCurrency underlyingCurrency_{this};
  field::UnderlyingQty underlyingQty_{this};
  field::UnderlyingPx underlyingPx_{this};
  field::UnderlyingDirtyPrice underlyingDirtyPrice_{this};
  field::UnderlyingEndPrice underlyingEndPrice_{this};
  field::UnderlyingStartValue underlyingStartValue_{this};
  field::UnderlyingCurrentValue underlyingCurrentValue_{this};
  field::UnderlyingEndValue underlyingEndValue_{this};
  group::UnderlyingStipsGroup underlyingStipsGroup_{this};
  field::SecuritySubType securitySubType_{this};
  field::Currency currency_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[85];
  AbstractGroup* slotGroups_[3];
};

class DerivativeSecurityList : public AbstractMessage {
 public:
  DerivativeSecurityList();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SecurityReqID& securityReqID() { return securityReqID_; }
  field::SecurityResponseID& securityResponseID() { return securityResponseID_; }
  field::SecurityRequestResult& securityRequestResult() { return securityRequestResult_; }
  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  group::UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
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
  group::UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }
  field::TotNoRelatedSym& totNoRelatedSym() { return totNoRelatedSym_; }
  field::LastFragment& lastFragment() { return lastFragment_; }
  group::RelatedSymGroup4& relatedSymGroup4() { return relatedSymGroup4_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SecurityReqID securityReqID_{this};
  field::SecurityResponseID securityResponseID_{this};
  field::SecurityRequestResult securityRequestResult_{this};
  field::UnderlyingSymbol underlyingSymbol_{this};
  field::UnderlyingSymbolSfx underlyingSymbolSfx_{this};
  field::UnderlyingSecurityID underlyingSecurityID_{this};
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_{this};
  group::UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_{this};
  field::UnderlyingProduct underlyingProduct_{this};
  field::UnderlyingCFICode underlyingCFICode_{this};
  field::UnderlyingSecurityType underlyingSecurityType_{this};
  field::UnderlyingSecuritySubType underlyingSecuritySubType_{this};
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_{this};
  field::UnderlyingMaturityDate underlyingMaturityDate_{this};
  field::UnderlyingPutOrCall underlyingPutOrCall_{this};
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_{this};
  field::UnderlyingIssueDate underlyingIssueDate_{this};
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_{this};
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_{this};
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_{this};
  field::UnderlyingFactor underlyingFactor_{this};
  field::UnderlyingCreditRating underlyingCreditRating_{this};
  field::UnderlyingInstrRegistry underlyingInstrRegistry_{this};
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_{this};
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_{this};
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_{this};
  field::UnderlyingRedemptionDate underlyingRedemptionDate_{this};
  field::UnderlyingStrikePrice underlyingStrikePrice_{this};
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_{this};
  field::UnderlyingOptAttribute underlyingOptAttribute_{this};
  field::UnderlyingContractMultiplier underlyingContractMultiplier_{this};
  field::UnderlyingCouponRate underlyingCouponRate_{this};
  field::UnderlyingSecurityExchange underlyingSecurityExchange_{this};
  field::UnderlyingIssuer underlyingIssuer_{this};
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_{this};
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_{this};
  field::UnderlyingSecurityDesc underlyingSecurityDesc_{this};
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_{this};
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_{this};
  field::UnderlyingCPProgram underlyingCPProgram_{this};
  field::UnderlyingCPRegType underlyingCPRegType_{this};
  field::UnderlyingCurrency underlyingCurrency_{this};
  field::UnderlyingQty underlyingQty_{this};
  field::UnderlyingPx underlyingPx_{this};
  field::UnderlyingDirtyPrice underlyingDirtyPrice_{this};
  field::UnderlyingEndPrice underlyingEndPrice_{this};
  field::UnderlyingStartValue underlyingStartValue_{this};
  field::UnderlyingCurrentValue underlyingCurrentValue_{this};
  field::UnderlyingEndValue underlyingEndValue_{this};
  group::UnderlyingStipsGroup underlyingStipsGroup_{this};
  field::TotNoRelatedSym totNoRelatedSym_{this};
  field::LastFragment lastFragment_{this};
  group::RelatedSymGroup4 relatedSymGroup4_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[80];
  AbstractGroup* slotGroups_[4];
};

class NewOrderMultileg : public AbstractMessage {
 public:
  NewOrderMultileg();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::DayBookingInst& dayBookingInst() { return dayBookingInst_; }
  field::BookingUnit& bookingUnit() { return bookingUnit_; }
  field::PreallocMethod& preallocMethod() { return preallocMethod_; }
  field::AllocID& allocID() { return allocID_; }
  group::AllocsGroup3& allocsGroup3() { return allocsGroup3_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::CashMargin& cashMargin() { return cashMargin_; }
  field::ClearingFeeIndicator& clearingFeeIndicator() { return clearingFeeIndicator_; }
  field::HandlInst& handlInst() { return handlInst_; }
  field::ExecInst& execInst() { return execInst_; }
  field::MinQty& minQty() { return minQty_; }
  field::MaxFloor& maxFloor() { return maxFloor_; }
  field::ExDestination& exDestination() { return exDestination_; }
  group::TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::ProcessCode& processCode() { return processCode_; }
  field::Side& side() { return side_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::PrevClosePx& prevClosePx() { return prevClosePx_; }
  group::LegsGroup6& legsGroup6() { return legsGroup6_; }
  field::LocateReqd& locateReqd() { return locateReqd_; }
  field::TransactTime& transactTime() { return transactTime_; }
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
  field::CancellationRights& cancellationRights() { return cancellationRights_; }
  field::MoneyLaunderingStatus& moneyLaunderingStatus() { return moneyLaunderingStatus_; }
  field::RegistID& registID() { return registID_; }
  field::Designation& designation() { return designation_; }
  field::MultiLegRptTypeReq& multiLegRptTypeReq() { return multiLegRptTypeReq_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ClOrdID clOrdID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  field::ClOrdLinkID clOrdLinkID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::TradeOriginationDate tradeOriginationDate_{this};
  field::TradeDate tradeDate_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::DayBookingInst dayBookingInst_{this};
  field::BookingUnit bookingUnit_{this};
  field::PreallocMethod preallocMethod_{this};
  field::AllocID allocID_{this};
  group::AllocsGroup3 allocsGroup3_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::CashMargin cashMargin_{this};
  field::ClearingFeeIndicator clearingFeeIndicator_{this};
  field::HandlInst handlInst_{this};
  field::ExecInst execInst_{this};
  field::MinQty minQty_{this};
  field::MaxFloor maxFloor_{this};
  field::ExDestination exDestination_{this};
  group::TradingSessionsGroup tradingSessionsGroup_{this};
  field::ProcessCode processCode_{this};
  field::Side side_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::PrevClosePx prevClosePx_{this};
  group::LegsGroup6 legsGroup6_{this};
  field::LocateReqd locateReqd_{this};
  field::TransactTime transactTime_{this};
  field::QtyType qtyType_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::OrdType ordType_{this};
  field::PriceType priceType_{this};
  field::Price price_{this};
  field::StopPx stopPx_{this};
  field::Currency currency_{this};
  field::ComplianceID complianceID_{this};
  field::SolicitedFlag solicitedFlag_{this};
  field::IOIID iOIID_{this};
  field::QuoteID quoteID_{this};
  field::TimeInForce timeInForce_{this};
  field::EffectiveTime effectiveTime_{this};
  field::ExpireDate expireDate_{this};
  field::ExpireTime expireTime_{this};
  field::GTBookingInst gTBookingInst_{this};
  field::Commission commission_{this};
  field::CommType commType_{this};
  field::CommCurrency commCurrency_{this};
  field::FundRenewWaiv fundRenewWaiv_{this};
  field::OrderCapacity orderCapacity_{this};
  field::OrderRestrictions orderRestrictions_{this};
  field::CustOrderCapacity custOrderCapacity_{this};
  field::ForexReq forexReq_{this};
  field::SettlCurrency settlCurrency_{this};
  field::BookingType bookingType_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::PositionEffect positionEffect_{this};
  field::CoveredOrUncovered coveredOrUncovered_{this};
  field::MaxShow maxShow_{this};
  field::PegOffsetValue pegOffsetValue_{this};
  field::PegMoveType pegMoveType_{this};
  field::PegOffsetType pegOffsetType_{this};
  field::PegLimitType pegLimitType_{this};
  field::PegRoundDirection pegRoundDirection_{this};
  field::PegScope pegScope_{this};
  field::DiscretionInst discretionInst_{this};
  field::DiscretionOffsetValue discretionOffsetValue_{this};
  field::DiscretionMoveType discretionMoveType_{this};
  field::DiscretionOffsetType discretionOffsetType_{this};
  field::DiscretionLimitType discretionLimitType_{this};
  field::DiscretionRoundDirection discretionRoundDirection_{this};
  field::DiscretionScope discretionScope_{this};
  field::TargetStrategy targetStrategy_{this};
  field::TargetStrategyParameters targetStrategyParameters_{this};
  field::ParticipationRate participationRate_{this};
  field::CancellationRights cancellationRights_{this};
  field::MoneyLaunderingStatus moneyLaunderingStatus_{this};
  field::RegistID registID_{this};
  field::Designation designation_{this};
  field::MultiLegRptTypeReq multiLegRptTypeReq_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[154];
  AbstractGroup* slotGroups_[8];
};

class MultilegOrderCancelReplace : public AbstractMessage {
 public:
  MultilegOrderCancelReplace();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::OrderID& orderID() { return orderID_; }
  field::OrigClOrdID& origClOrdID() { return origClOrdID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  field::ClOrdLinkID& clOrdLinkID() { return clOrdLinkID_; }
  field::OrigOrdModTime& origOrdModTime() { return origOrdModTime_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::DayBookingInst& dayBookingInst() { return dayBookingInst_; }
  field::BookingUnit& bookingUnit() { return bookingUnit_; }
  field::PreallocMethod& preallocMethod() { return preallocMethod_; }
  field::AllocID& allocID() { return allocID_; }
  group::AllocsGroup3& allocsGroup3() { return allocsGroup3_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::CashMargin& cashMargin() { return cashMargin_; }
  field::ClearingFeeIndicator& clearingFeeIndicator() { return clearingFeeIndicator_; }
  field::HandlInst& handlInst() { return handlInst_; }
  field::ExecInst& execInst() { return execInst_; }
  field::MinQty& minQty() { return minQty_; }
  field::MaxFloor& maxFloor() { return maxFloor_; }
  field::ExDestination& exDestination() { return exDestination_; }
  group::TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::ProcessCode& processCode() { return processCode_; }
  field::Side& side() { return side_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::PrevClosePx& prevClosePx() { return prevClosePx_; }
  group::LegsGroup6& legsGroup6() { return legsGroup6_; }
  field::LocateReqd& locateReqd() { return locateReqd_; }
  field::TransactTime& transactTime() { return transactTime_; }
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
  field::CancellationRights& cancellationRights() { return cancellationRights_; }
  field::MoneyLaunderingStatus& moneyLaunderingStatus() { return moneyLaunderingStatus_; }
  field::RegistID& registID() { return registID_; }
  field::Designation& designation() { return designation_; }
  field::MultiLegRptTypeReq& multiLegRptTypeReq() { return multiLegRptTypeReq_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::OrderID orderID_{this};
  field::OrigClOrdID origClOrdID_{this};
  field::ClOrdID clOrdID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  field::ClOrdLinkID clOrdLinkID_{this};
  field::OrigOrdModTime origOrdModTime_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::TradeOriginationDate tradeOriginationDate_{this};
  field::TradeDate tradeDate_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::DayBookingInst dayBookingInst_{this};
  field::BookingUnit bookingUnit_{this};
  field::PreallocMethod preallocMethod_{this};
  field::AllocID allocID_{this};
  group::AllocsGroup3 allocsGroup3_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::CashMargin cashMargin_{this};
  field::ClearingFeeIndicator clearingFeeIndicator_{this};
  field::HandlInst handlInst_{this};
  field::ExecInst execInst_{this};
  field::MinQty minQty_{this};
  field::MaxFloor maxFloor_{this};
  field::ExDestination exDestination_{this};
  group::TradingSessionsGroup tradingSessionsGroup_{this};
  field::ProcessCode processCode_{this};
  field::Side side_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::PrevClosePx prevClosePx_{this};
  group::LegsGroup6 legsGroup6_{this};
  field::LocateReqd locateReqd_{this};
  field::TransactTime transactTime_{this};
  field::QtyType qtyType_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::OrdType ordType_{this};
  field::PriceType priceType_{this};
  field::Price price_{this};
  field::StopPx stopPx_{this};
  field::Currency currency_{this};
  field::ComplianceID complianceID_{this};
  field::SolicitedFlag solicitedFlag_{this};
  field::IOIID iOIID_{this};
  field::QuoteID quoteID_{this};
  field::TimeInForce timeInForce_{this};
  field::EffectiveTime effectiveTime_{this};
  field::ExpireDate expireDate_{this};
  field::ExpireTime expireTime_{this};
  field::GTBookingInst gTBookingInst_{this};
  field::Commission commission_{this};
  field::CommType commType_{this};
  field::CommCurrency commCurrency_{this};
  field::FundRenewWaiv fundRenewWaiv_{this};
  field::OrderCapacity orderCapacity_{this};
  field::OrderRestrictions orderRestrictions_{this};
  field::CustOrderCapacity custOrderCapacity_{this};
  field::ForexReq forexReq_{this};
  field::SettlCurrency settlCurrency_{this};
  field::BookingType bookingType_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::PositionEffect positionEffect_{this};
  field::CoveredOrUncovered coveredOrUncovered_{this};
  field::MaxShow maxShow_{this};
  field::PegOffsetValue pegOffsetValue_{this};
  field::PegMoveType pegMoveType_{this};
  field::PegOffsetType pegOffsetType_{this};
  field::PegLimitType pegLimitType_{this};
  field::PegRoundDirection pegRoundDirection_{this};
  field::PegScope pegScope_{this};
  field::DiscretionInst discretionInst_{this};
  field::DiscretionOffsetValue discretionOffsetValue_{this};
  field::DiscretionMoveType discretionMoveType_{this};
  field::DiscretionOffsetType discretionOffsetType_{this};
  field::DiscretionLimitType discretionLimitType_{this};
  field::DiscretionRoundDirection discretionRoundDirection_{this};
  field::DiscretionScope discretionScope_{this};
  field::TargetStrategy targetStrategy_{this};
  field::TargetStrategyParameters targetStrategyParameters_{this};
  field::ParticipationRate participationRate_{this};
  field::CancellationRights cancellationRights_{this};
  field::MoneyLaunderingStatus moneyLaunderingStatus_{this};
  field::RegistID registID_{this};
  field::Designation designation_{this};
  field::MultiLegRptTypeReq multiLegRptTypeReq_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[157];
  AbstractGroup* slotGroups_[8];
};

class TradeCaptureReportRequest : public AbstractMessage {
 public:
  TradeCaptureReportRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::TradeRequestID& tradeRequestID() { return tradeRequestID_; }
  field::TradeRequestType& tradeRequestType() { return tradeRequestType_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::TradeReportID& tradeReportID() { return tradeReportID_; }
  field::SecondaryTradeReportID& secondaryTradeReportID() { return secondaryTradeReportID_; }
  field::ExecID& execID() { return execID_; }
  field::ExecType& execType() { return execType_; }
  field::OrderID& orderID() { return orderID_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::MatchStatus& matchStatus() { return matchStatus_; }
  field::TrdType& trdType() { return trdType_; }
  field::TrdSubType& trdSubType() { return trdSubType_; }
  field::TransferReason& transferReason() { return transferReason_; }
  field::SecondaryTrdType& secondaryTrdType() { return secondaryTrdType_; }
  field::TradeLinkID& tradeLinkID() { return tradeLinkID_; }
  field::TrdMatchID& trdMatchID() { return trdMatchID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  group::InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  field::AgreementDesc& agreementDesc() { return agreementDesc_; }
  field::AgreementID& agreementID() { return agreementID_; }
  field::AgreementDate& agreementDate() { return agreementDate_; }
  field::AgreementCurrency& agreementCurrency() { return agreementCurrency_; }
  field::TerminationType& terminationType() { return terminationType_; }
  field::StartDate& startDate() { return startDate_; }
  field::EndDate& endDate() { return endDate_; }
  field::DeliveryType& deliveryType() { return deliveryType_; }
  field::MarginRatio& marginRatio() { return marginRatio_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::DatesGroup& datesGroup() { return datesGroup_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::TimeBracket& timeBracket() { return timeBracket_; }
  field::Side& side() { return side_; }
  field::MultiLegReportingType& multiLegReportingType() { return multiLegReportingType_; }
  field::TradeInputSource& tradeInputSource() { return tradeInputSource_; }
  field::TradeInputDevice& tradeInputDevice() { return tradeInputDevice_; }
  field::ResponseTransportType& responseTransportType() { return responseTransportType_; }
  field::ResponseDestination& responseDestination() { return responseDestination_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::TradeRequestID tradeRequestID_{this};
  field::TradeRequestType tradeRequestType_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::TradeReportID tradeReportID_{this};
  field::SecondaryTradeReportID secondaryTradeReportID_{this};
  field::ExecID execID_{this};
  field::ExecType execType_{this};
  field::OrderID orderID_{this};
  field::ClOrdID clOrdID_{this};
  field::MatchStatus matchStatus_{this};
  field::TrdType trdType_{this};
  field::TrdSubType trdSubType_{this};
  field::TransferReason transferReason_{this};
  field::SecondaryTrdType secondaryTrdType_{this};
  field::TradeLinkID tradeLinkID_{this};
  field::TrdMatchID trdMatchID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::DeliveryForm deliveryForm_{this};
  field::PctAtRisk pctAtRisk_{this};
  group::InstrAttribGroup instrAttribGroup_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::DatesGroup datesGroup_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::TimeBracket timeBracket_{this};
  field::Side side_{this};
  field::MultiLegReportingType multiLegReportingType_{this};
  field::TradeInputSource tradeInputSource_{this};
  field::TradeInputDevice tradeInputDevice_{this};
  field::ResponseTransportType responseTransportType_{this};
  field::ResponseDestination responseDestination_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[111];
  AbstractGroup* slotGroups_[8];
};

class TradeCaptureReport : public AbstractMessage {
 public:
  TradeCaptureReport();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::TradeReportID& tradeReportID() { return tradeReportID_; }
  field::TradeReportTransType& tradeReportTransType() { return tradeReportTransType_; }
  field::TradeReportType& tradeReportType() { return tradeReportType_; }
  field::TradeRequestID& tradeRequestID() { return tradeRequestID_; }
  field::TrdType& trdType() { return trdType_; }
  field::TrdSubType& trdSubType() { return trdSubType_; }
  field::SecondaryTrdType& secondaryTrdType() { return secondaryTrdType_; }
  field::TransferReason& transferReason() { return transferReason_; }
  field::ExecType& execType() { return execType_; }
  field::TotNumTradeReports& totNumTradeReports() { return totNumTradeReports_; }
  field::LastRptRequested& lastRptRequested() { return lastRptRequested_; }
  field::UnsolicitedIndicator& unsolicitedIndicator() { return unsolicitedIndicator_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::TradeReportRefID& tradeReportRefID() { return tradeReportRefID_; }
  field::SecondaryTradeReportRefID& secondaryTradeReportRefID() { return secondaryTradeReportRefID_; }
  field::SecondaryTradeReportID& secondaryTradeReportID() { return secondaryTradeReportID_; }
  field::TradeLinkID& tradeLinkID() { return tradeLinkID_; }
  field::TrdMatchID& trdMatchID() { return trdMatchID_; }
  field::ExecID& execID() { return execID_; }
  field::OrdStatus& ordStatus() { return ordStatus_; }
  field::SecondaryExecID& secondaryExecID() { return secondaryExecID_; }
  field::ExecRestatementReason& execRestatementReason() { return execRestatementReason_; }
  field::PreviouslyReported& previouslyReported() { return previouslyReported_; }
  field::PriceType& priceType() { return priceType_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  field::OrderQty& orderQty() { return orderQty_; }
  field::CashOrderQty& cashOrderQty() { return cashOrderQty_; }
  field::OrderPercent& orderPercent() { return orderPercent_; }
  field::RoundingDirection& roundingDirection() { return roundingDirection_; }
  field::RoundingModulus& roundingModulus() { return roundingModulus_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::YieldType& yieldType() { return yieldType_; }
  field::Yield& yield() { return yield_; }
  field::YieldCalcDate& yieldCalcDate() { return yieldCalcDate_; }
  field::YieldRedemptionDate& yieldRedemptionDate() { return yieldRedemptionDate_; }
  field::YieldRedemptionPrice& yieldRedemptionPrice() { return yieldRedemptionPrice_; }
  field::YieldRedemptionPriceType& yieldRedemptionPriceType() { return yieldRedemptionPriceType_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::UnderlyingTradingSessionID& underlyingTradingSessionID() { return underlyingTradingSessionID_; }
  field::UnderlyingTradingSessionSubID& underlyingTradingSessionSubID() { return underlyingTradingSessionSubID_; }
  field::LastQty& lastQty() { return lastQty_; }
  field::LastPx& lastPx() { return lastPx_; }
  field::LastParPx& lastParPx() { return lastParPx_; }
  field::LastSpotRate& lastSpotRate() { return lastSpotRate_; }
  field::LastForwardPoints& lastForwardPoints() { return lastForwardPoints_; }
  field::LastMkt& lastMkt() { return lastMkt_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::AvgPx& avgPx() { return avgPx_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  field::AvgPxIndicator& avgPxIndicator() { return avgPxIndicator_; }
  group::PosAmtGroup& posAmtGroup() { return posAmtGroup_; }
  field::MultiLegReportingType& multiLegReportingType() { return multiLegReportingType_; }
  field::TradeLegRefID& tradeLegRefID() { return tradeLegRefID_; }
  group::LegsGroup2& legsGroup2() { return legsGroup2_; }
  field::TransactTime& transactTime() { return transactTime_; }
  group::TrdRegTimestampsGroup& trdRegTimestampsGroup() { return trdRegTimestampsGroup_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::MatchStatus& matchStatus() { return matchStatus_; }
  field::MatchType& matchType() { return matchType_; }
  group::SidesGroup2& sidesGroup2() { return sidesGroup2_; }
  field::CopyMsgIndicator& copyMsgIndicator() { return copyMsgIndicator_; }
  field::PublishTrdIndicator& publishTrdIndicator() { return publishTrdIndicator_; }
  field::ShortSaleReason& shortSaleReason() { return shortSaleReason_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::TradeReportID tradeReportID_{this};
  field::TradeReportTransType tradeReportTransType_{this};
  field::TradeReportType tradeReportType_{this};
  field::TradeRequestID tradeRequestID_{this};
  field::TrdType trdType_{this};
  field::TrdSubType trdSubType_{this};
  field::SecondaryTrdType secondaryTrdType_{this};
  field::TransferReason transferReason_{this};
  field::ExecType execType_{this};
  field::TotNumTradeReports totNumTradeReports_{this};
  field::LastRptRequested lastRptRequested_{this};
  field::UnsolicitedIndicator unsolicitedIndicator_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::TradeReportRefID tradeReportRefID_{this};
  field::SecondaryTradeReportRefID secondaryTradeReportRefID_{this};
  field::SecondaryTradeReportID secondaryTradeReportID_{this};
  field::TradeLinkID tradeLinkID_{this};
  field::TrdMatchID trdMatchID_{this};
  field::ExecID execID_{this};
  field::OrdStatus ordStatus_{this};
  field::SecondaryExecID secondaryExecID_{this};
  field::ExecRestatementReason execRestatementReason_{this};
  field::PreviouslyReported previouslyReported_{this};
  field::PriceType priceType_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::QtyType qtyType_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::UnderlyingTradingSessionID underlyingTradingSessionID_{this};
  field::UnderlyingTradingSessionSubID underlyingTradingSessionSubID_{this};
  field::LastQty lastQty_{this};
  field::LastPx lastPx_{this};
  field::LastParPx lastParPx_{this};
  field::LastSpotRate lastSpotRate_{this};
  field::LastForwardPoints lastForwardPoints_{this};
  field::LastMkt lastMkt_{this};
  field::TradeDate tradeDate_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::AvgPx avgPx_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::AvgPxIndicator avgPxIndicator_{this};
  group::PosAmtGroup posAmtGroup_{this};
  field::MultiLegReportingType multiLegReportingType_{this};
  field::TradeLegRefID tradeLegRefID_{this};
  group::LegsGroup2 legsGroup2_{this};
  field::TransactTime transactTime_{this};
  group::TrdRegTimestampsGroup trdRegTimestampsGroup_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::MatchStatus matchStatus_{this};
  field::MatchType matchType_{this};
  group::SidesGroup2 sidesGroup2_{this};
  field::CopyMsgIndicator copyMsgIndicator_{this};
  field::PublishTrdIndicator publishTrdIndicator_{this};
  field::ShortSaleReason shortSaleReason_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[146];
  AbstractGroup* slotGroups_[8];
};

class OrderMassStatusRequest : public AbstractMessage {
 public:
  OrderMassStatusRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::MassStatusReqID& massStatusReqID() { return massStatusReqID_; }
  field::MassStatusReqType& massStatusReqType() { return massStatusReqType_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::UnderlyingSymbol& underlyingSymbol() { return underlyingSymbol_; }
  field::UnderlyingSymbolSfx& underlyingSymbolSfx() { return underlyingSymbolSfx_; }
  field::UnderlyingSecurityID& underlyingSecurityID() { return underlyingSecurityID_; }
  field::UnderlyingSecurityIDSource& underlyingSecurityIDSource() { return underlyingSecurityIDSource_; }
  group::UnderlyingSecurityAltIDGroup& underlyingSecurityAltIDGroup() { return underlyingSecurityAltIDGroup_; }
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
  group::UnderlyingStipsGroup& underlyingStipsGroup() { return underlyingStipsGroup_; }
  field::Side& side() { return side_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::MassStatusReqID massStatusReqID_{this};
  field::MassStatusReqType massStatusReqType_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::UnderlyingSymbol underlyingSymbol_{this};
  field::UnderlyingSymbolSfx underlyingSymbolSfx_{this};
  field::UnderlyingSecurityID underlyingSecurityID_{this};
  field::UnderlyingSecurityIDSource underlyingSecurityIDSource_{this};
  group::UnderlyingSecurityAltIDGroup underlyingSecurityAltIDGroup_{this};
  field::UnderlyingProduct underlyingProduct_{this};
  field::UnderlyingCFICode underlyingCFICode_{this};
  field::UnderlyingSecurityType underlyingSecurityType_{this};
  field::UnderlyingSecuritySubType underlyingSecuritySubType_{this};
  field::UnderlyingMaturityMonthYear underlyingMaturityMonthYear_{this};
  field::UnderlyingMaturityDate underlyingMaturityDate_{this};
  field::UnderlyingPutOrCall underlyingPutOrCall_{this};
  field::UnderlyingCouponPaymentDate underlyingCouponPaymentDate_{this};
  field::UnderlyingIssueDate underlyingIssueDate_{this};
  field::UnderlyingRepoCollateralSecurityType underlyingRepoCollateralSecurityType_{this};
  field::UnderlyingRepurchaseTerm underlyingRepurchaseTerm_{this};
  field::UnderlyingRepurchaseRate underlyingRepurchaseRate_{this};
  field::UnderlyingFactor underlyingFactor_{this};
  field::UnderlyingCreditRating underlyingCreditRating_{this};
  field::UnderlyingInstrRegistry underlyingInstrRegistry_{this};
  field::UnderlyingCountryOfIssue underlyingCountryOfIssue_{this};
  field::UnderlyingStateOrProvinceOfIssue underlyingStateOrProvinceOfIssue_{this};
  field::UnderlyingLocaleOfIssue underlyingLocaleOfIssue_{this};
  field::UnderlyingRedemptionDate underlyingRedemptionDate_{this};
  field::UnderlyingStrikePrice underlyingStrikePrice_{this};
  field::UnderlyingStrikeCurrency underlyingStrikeCurrency_{this};
  field::UnderlyingOptAttribute underlyingOptAttribute_{this};
  field::UnderlyingContractMultiplier underlyingContractMultiplier_{this};
  field::UnderlyingCouponRate underlyingCouponRate_{this};
  field::UnderlyingSecurityExchange underlyingSecurityExchange_{this};
  field::UnderlyingIssuer underlyingIssuer_{this};
  field::EncodedUnderlyingIssuerLen encodedUnderlyingIssuerLen_{this};
  field::EncodedUnderlyingIssuer encodedUnderlyingIssuer_{this};
  field::UnderlyingSecurityDesc underlyingSecurityDesc_{this};
  field::EncodedUnderlyingSecurityDescLen encodedUnderlyingSecurityDescLen_{this};
  field::EncodedUnderlyingSecurityDesc encodedUnderlyingSecurityDesc_{this};
  field::UnderlyingCPProgram underlyingCPProgram_{this};
  field::UnderlyingCPRegType underlyingCPRegType_{this};
  field::UnderlyingCurrency underlyingCurrency_{this};
  field::UnderlyingQty underlyingQty_{this};
  field::UnderlyingPx underlyingPx_{this};
  field::UnderlyingDirtyPrice underlyingDirtyPrice_{this};
  field::UnderlyingEndPrice underlyingEndPrice_{this};
  field::UnderlyingStartValue underlyingStartValue_{this};
  field::UnderlyingCurrentValue underlyingCurrentValue_{this};
  field::UnderlyingEndValue underlyingEndValue_{this};
  group::UnderlyingStipsGroup underlyingStipsGroup_{this};
  field::Side side_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[123];
  AbstractGroup* slotGroups_[6];
};

class QuoteRequestReject : public AbstractMessage {
 public:
  QuoteRequestReject();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::QuoteReqID& quoteReqID() { return quoteReqID_; }
  field::RFQReqID& rFQReqID() { return rFQReqID_; }
  field::QuoteRequestRejectReason& quoteRequestRejectReason() { return quoteRequestRejectReason_; }
  group::RelatedSymGroup5& relatedSymGroup5() { return relatedSymGroup5_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::QuoteReqID quoteReqID_{this};
  field::RFQReqID rFQReqID_{this};
  field::QuoteRequestRejectReason quoteRequestRejectReason_{this};
  group::RelatedSymGroup5 relatedSymGroup5_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[36];
  AbstractGroup* slotGroups_[2];
};

class RFQRequest : public AbstractMessage {
 public:
  RFQRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::RFQReqID& rFQReqID() { return rFQReqID_; }
  group::RelatedSymGroup6& relatedSymGroup6() { return relatedSymGroup6_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::RFQReqID rFQReqID_{this};
  group::RelatedSymGroup6 relatedSymGroup6_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[32];
  AbstractGroup* slotGroups_[2];
};

class QuoteStatusReport : public AbstractMessage {
 public:
  QuoteStatusReport();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::QuoteStatusReqID& quoteStatusReqID() { return quoteStatusReqID_; }
  field::QuoteReqID& quoteReqID() { return quoteReqID_; }
  field::QuoteID& quoteID() { return quoteID_; }
  field::QuoteRespID& quoteRespID() { return quoteRespID_; }
  field::QuoteType& quoteType() { return quoteType_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Side& side() { return side_; }
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
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  group::LegsGroup7& legsGroup7() { return legsGroup7_; }
  group::QuoteQualifiersGroup& quoteQualifiersGroup() { return quoteQualifiersGroup_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::Price& price() { return price_; }
  field::PriceType& priceType() { return priceType_; }
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
  field::BidPx& bidPx() { return bidPx_; }
  field::OfferPx& offerPx() { return offerPx_; }
  field::MktBidPx& mktBidPx() { return mktBidPx_; }
  field::MktOfferPx& mktOfferPx() { return mktOfferPx_; }
  field::MinBidSize& minBidSize() { return minBidSize_; }
  field::BidSize& bidSize() { return bidSize_; }
  field::MinOfferSize& minOfferSize() { return minOfferSize_; }
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
  field::OrdType& ordType() { return ordType_; }
  field::BidForwardPoints2& bidForwardPoints2() { return bidForwardPoints2_; }
  field::OfferForwardPoints2& offerForwardPoints2() { return offerForwardPoints2_; }
  field::SettlCurrBidFxRate& settlCurrBidFxRate() { return settlCurrBidFxRate_; }
  field::SettlCurrOfferFxRate& settlCurrOfferFxRate() { return settlCurrOfferFxRate_; }
  field::SettlCurrFxRateCalc& settlCurrFxRateCalc() { return settlCurrFxRateCalc_; }
  field::CommType& commType() { return commType_; }
  field::Commission& commission() { return commission_; }
  field::CustOrderCapacity& custOrderCapacity() { return custOrderCapacity_; }
  field::ExDestination& exDestination() { return exDestination_; }
  field::QuoteStatus& quoteStatus() { return quoteStatus_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::QuoteStatusReqID quoteStatusReqID_{this};
  field::QuoteReqID quoteReqID_{this};
  field::QuoteID quoteID_{this};
  field::QuoteRespID quoteRespID_{this};
  field::QuoteType quoteType_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::Side side_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::SettlDate2 settlDate2_{this};
  field::OrderQty2 orderQty2_{this};
  field::Currency currency_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  group::LegsGroup7 legsGroup7_{this};
  group::QuoteQualifiersGroup quoteQualifiersGroup_{this};
  field::ExpireTime expireTime_{this};
  field::Price price_{this};
  field::PriceType priceType_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::BidPx bidPx_{this};
  field::OfferPx offerPx_{this};
  field::MktBidPx mktBidPx_{this};
  field::MktOfferPx mktOfferPx_{this};
  field::MinBidSize minBidSize_{this};
  field::BidSize bidSize_{this};
  field::MinOfferSize minOfferSize_{this};
  field::OfferSize offerSize_{this};
  field::ValidUntilTime validUntilTime_{this};
  field::BidSpotRate bidSpotRate_{this};
  field::OfferSpotRate offerSpotRate_{this};
  field::BidForwardPoints bidForwardPoints_{this};
  field::OfferForwardPoints offerForwardPoints_{this};
  field::MidPx midPx_{this};
  field::BidYield bidYield_{this};
  field::MidYield midYield_{this};
  field::OfferYield offerYield_{this};
  field::TransactTime transactTime_{this};
  field::OrdType ordType_{this};
  field::BidForwardPoints2 bidForwardPoints2_{this};
  field::OfferForwardPoints2 offerForwardPoints2_{this};
  field::SettlCurrBidFxRate settlCurrBidFxRate_{this};
  field::SettlCurrOfferFxRate settlCurrOfferFxRate_{this};
  field::SettlCurrFxRateCalc settlCurrFxRateCalc_{this};
  field::CommType commType_{this};
  field::Commission commission_{this};
  field::CustOrderCapacity custOrderCapacity_{this};
  field::ExDestination exDestination_{this};
  field::QuoteStatus quoteStatus_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[150];
  AbstractGroup* slotGroups_[8];
};

class QuoteResponse : public AbstractMessage {
 public:
  QuoteResponse();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::QuoteRespID& quoteRespID() { return quoteRespID_; }
  field::QuoteID& quoteID() { return quoteID_; }
  field::QuoteRespType& quoteRespType() { return quoteRespType_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::OrderCapacity& orderCapacity() { return orderCapacity_; }
  field::IOIID& iOIID() { return iOIID_; }
  field::QuoteType& quoteType() { return quoteType_; }
  group::QuoteQualifiersGroup& quoteQualifiersGroup() { return quoteQualifiersGroup_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::Side& side() { return side_; }
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
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  group::LegsGroup4& legsGroup4() { return legsGroup4_; }
  field::BidPx& bidPx() { return bidPx_; }
  field::OfferPx& offerPx() { return offerPx_; }
  field::MktBidPx& mktBidPx() { return mktBidPx_; }
  field::MktOfferPx& mktOfferPx() { return mktOfferPx_; }
  field::MinBidSize& minBidSize() { return minBidSize_; }
  field::BidSize& bidSize() { return bidSize_; }
  field::MinOfferSize& minOfferSize() { return minOfferSize_; }
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
  field::OrdType& ordType() { return ordType_; }
  field::BidForwardPoints2& bidForwardPoints2() { return bidForwardPoints2_; }
  field::OfferForwardPoints2& offerForwardPoints2() { return offerForwardPoints2_; }
  field::SettlCurrBidFxRate& settlCurrBidFxRate() { return settlCurrBidFxRate_; }
  field::SettlCurrOfferFxRate& settlCurrOfferFxRate() { return settlCurrOfferFxRate_; }
  field::SettlCurrFxRateCalc& settlCurrFxRateCalc() { return settlCurrFxRateCalc_; }
  field::Commission& commission() { return commission_; }
  field::CommType& commType() { return commType_; }
  field::CustOrderCapacity& custOrderCapacity() { return custOrderCapacity_; }
  field::ExDestination& exDestination() { return exDestination_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::Price& price() { return price_; }
  field::PriceType& priceType() { return priceType_; }
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
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::QuoteRespID quoteRespID_{this};
  field::QuoteID quoteID_{this};
  field::QuoteRespType quoteRespType_{this};
  field::ClOrdID clOrdID_{this};
  field::OrderCapacity orderCapacity_{this};
  field::IOIID iOIID_{this};
  field::QuoteType quoteType_{this};
  group::QuoteQualifiersGroup quoteQualifiersGroup_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::Side side_{this};
  field::OrderQty orderQty_{this};
  field::CashOrderQty cashOrderQty_{this};
  field::OrderPercent orderPercent_{this};
  field::RoundingDirection roundingDirection_{this};
  field::RoundingModulus roundingModulus_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::SettlDate2 settlDate2_{this};
  field::OrderQty2 orderQty2_{this};
  field::Currency currency_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  group::LegsGroup4 legsGroup4_{this};
  field::BidPx bidPx_{this};
  field::OfferPx offerPx_{this};
  field::MktBidPx mktBidPx_{this};
  field::MktOfferPx mktOfferPx_{this};
  field::MinBidSize minBidSize_{this};
  field::BidSize bidSize_{this};
  field::MinOfferSize minOfferSize_{this};
  field::OfferSize offerSize_{this};
  field::ValidUntilTime validUntilTime_{this};
  field::BidSpotRate bidSpotRate_{this};
  field::OfferSpotRate offerSpotRate_{this};
  field::BidForwardPoints bidForwardPoints_{this};
  field::OfferForwardPoints offerForwardPoints_{this};
  field::MidPx midPx_{this};
  field::BidYield bidYield_{this};
  field::MidYield midYield_{this};
  field::OfferYield offerYield_{this};
  field::TransactTime transactTime_{this};
  field::OrdType ordType_{this};
  field::BidForwardPoints2 bidForwardPoints2_{this};
  field::OfferForwardPoints2 offerForwardPoints2_{this};
  field::SettlCurrBidFxRate settlCurrBidFxRate_{this};
  field::SettlCurrOfferFxRate settlCurrOfferFxRate_{this};
  field::SettlCurrFxRateCalc settlCurrFxRateCalc_{this};
  field::Commission commission_{this};
  field::CommType commType_{this};
  field::CustOrderCapacity custOrderCapacity_{this};
  field::ExDestination exDestination_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::Price price_{this};
  field::PriceType priceType_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[150];
  AbstractGroup* slotGroups_[8];
};

class Confirmation : public AbstractMessage {
 public:
  Confirmation();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ConfirmID& confirmID() { return confirmID_; }
  field::ConfirmRefID& confirmRefID() { return confirmRefID_; }
  field::ConfirmReqID& confirmReqID() { return confirmReqID_; }
  field::ConfirmTransType& confirmTransType() { return confirmTransType_; }
  field::ConfirmType& confirmType() { return confirmType_; }
  field::CopyMsgIndicator& copyMsgIndicator() { return copyMsgIndicator_; }
  field::LegalConfirm& legalConfirm() { return legalConfirm_; }
  field::ConfirmStatus& confirmStatus() { return confirmStatus_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  group::OrdersGroup1& ordersGroup1() { return ordersGroup1_; }
  field::AllocID& allocID() { return allocID_; }
  field::SecondaryAllocID& secondaryAllocID() { return secondaryAllocID_; }
  field::IndividualAllocID& individualAllocID() { return individualAllocID_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  group::TrdRegTimestampsGroup& trdRegTimestampsGroup() { return trdRegTimestampsGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  group::InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  field::AgreementDesc& agreementDesc() { return agreementDesc_; }
  field::AgreementID& agreementID() { return agreementID_; }
  field::AgreementDate& agreementDate() { return agreementDate_; }
  field::AgreementCurrency& agreementCurrency() { return agreementCurrency_; }
  field::TerminationType& terminationType() { return terminationType_; }
  field::StartDate& startDate() { return startDate_; }
  field::EndDate& endDate() { return endDate_; }
  field::DeliveryType& deliveryType() { return deliveryType_; }
  field::MarginRatio& marginRatio() { return marginRatio_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::YieldType& yieldType() { return yieldType_; }
  field::Yield& yield() { return yield_; }
  field::YieldCalcDate& yieldCalcDate() { return yieldCalcDate_; }
  field::YieldRedemptionDate& yieldRedemptionDate() { return yieldRedemptionDate_; }
  field::YieldRedemptionPrice& yieldRedemptionPrice() { return yieldRedemptionPrice_; }
  field::YieldRedemptionPriceType& yieldRedemptionPriceType() { return yieldRedemptionPriceType_; }
  field::AllocQty& allocQty() { return allocQty_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::Side& side() { return side_; }
  field::Currency& currency() { return currency_; }
  field::LastMkt& lastMkt() { return lastMkt_; }
  group::CapacitiesGroup& capacitiesGroup() { return capacitiesGroup_; }
  field::AllocAccount& allocAccount() { return allocAccount_; }
  field::AllocAcctIDSource& allocAcctIDSource() { return allocAcctIDSource_; }
  field::AllocAccountType& allocAccountType() { return allocAccountType_; }
  field::AvgPx& avgPx() { return avgPx_; }
  field::AvgPxPrecision& avgPxPrecision() { return avgPxPrecision_; }
  field::PriceType& priceType() { return priceType_; }
  field::AvgParPx& avgParPx() { return avgParPx_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  field::ReportedPx& reportedPx() { return reportedPx_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::ProcessCode& processCode() { return processCode_; }
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
  field::MaturityNetMoney& maturityNetMoney() { return maturityNetMoney_; }
  field::SettlCurrAmt& settlCurrAmt() { return settlCurrAmt_; }
  field::SettlCurrency& settlCurrency() { return settlCurrency_; }
  field::SettlCurrFxRate& settlCurrFxRate() { return settlCurrFxRate_; }
  field::SettlCurrFxRateCalc& settlCurrFxRateCalc() { return settlCurrFxRateCalc_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::SettlDeliveryType& settlDeliveryType() { return settlDeliveryType_; }
  field::StandInstDbType& standInstDbType() { return standInstDbType_; }
  field::StandInstDbName& standInstDbName() { return standInstDbName_; }
  field::StandInstDbID& standInstDbID() { return standInstDbID_; }
  group::DlvyInstGroup& dlvyInstGroup() { return dlvyInstGroup_; }
  field::Commission& commission() { return commission_; }
  field::CommType& commType() { return commType_; }
  field::CommCurrency& commCurrency() { return commCurrency_; }
  field::FundRenewWaiv& fundRenewWaiv() { return fundRenewWaiv_; }
  field::SharedCommission& sharedCommission() { return sharedCommission_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  group::MiscFeesGroup& miscFeesGroup() { return miscFeesGroup_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ConfirmID confirmID_{this};
  field::ConfirmRefID confirmRefID_{this};
  field::ConfirmReqID confirmReqID_{this};
  field::ConfirmTransType confirmTransType_{this};
  field::ConfirmType confirmType_{this};
  field::CopyMsgIndicator copyMsgIndicator_{this};
  field::LegalConfirm legalConfirm_{this};
  field::ConfirmStatus confirmStatus_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  group::OrdersGroup1 ordersGroup1_{this};
  field::AllocID allocID_{this};
  field::SecondaryAllocID secondaryAllocID_{this};
  field::IndividualAllocID individualAllocID_{this};
  field::TransactTime transactTime_{this};
  field::TradeDate tradeDate_{this};
  group::TrdRegTimestampsGroup trdRegTimestampsGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::DeliveryForm deliveryForm_{this};
  field::PctAtRisk pctAtRisk_{this};
  group::InstrAttribGroup instrAttribGroup_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::AllocQty allocQty_{this};
  field::QtyType qtyType_{this};
  field::Side side_{this};
  field::Currency currency_{this};
  field::LastMkt lastMkt_{this};
  group::CapacitiesGroup capacitiesGroup_{this};
  field::AllocAccount allocAccount_{this};
  field::AllocAcctIDSource allocAcctIDSource_{this};
  field::AllocAccountType allocAccountType_{this};
  field::AvgPx avgPx_{this};
  field::AvgPxPrecision avgPxPrecision_{this};
  field::PriceType priceType_{this};
  field::AvgParPx avgParPx_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::ReportedPx reportedPx_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::ProcessCode processCode_{this};
  field::GrossTradeAmt grossTradeAmt_{this};
  field::NumDaysInterest numDaysInterest_{this};
  field::ExDate exDate_{this};
  field::AccruedInterestRate accruedInterestRate_{this};
  field::AccruedInterestAmt accruedInterestAmt_{this};
  field::InterestAtMaturity interestAtMaturity_{this};
  field::EndAccruedInterestAmt endAccruedInterestAmt_{this};
  field::StartCash startCash_{this};
  field::EndCash endCash_{this};
  field::Concession concession_{this};
  field::TotalTakedown totalTakedown_{this};
  field::NetMoney netMoney_{this};
  field::MaturityNetMoney maturityNetMoney_{this};
  field::SettlCurrAmt settlCurrAmt_{this};
  field::SettlCurrency settlCurrency_{this};
  field::SettlCurrFxRate settlCurrFxRate_{this};
  field::SettlCurrFxRateCalc settlCurrFxRateCalc_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::SettlDeliveryType settlDeliveryType_{this};
  field::StandInstDbType standInstDbType_{this};
  field::StandInstDbName standInstDbName_{this};
  field::StandInstDbID standInstDbID_{this};
  group::DlvyInstGroup dlvyInstGroup_{this};
  field::Commission commission_{this};
  field::CommType commType_{this};
  field::CommCurrency commCurrency_{this};
  field::FundRenewWaiv fundRenewWaiv_{this};
  field::SharedCommission sharedCommission_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  group::MiscFeesGroup miscFeesGroup_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[154];
  AbstractGroup* slotGroups_[13];
};

class PositionMaintenanceRequest : public AbstractMessage {
 public:
  PositionMaintenanceRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::PosReqID& posReqID() { return posReqID_; }
  field::PosTransType& posTransType() { return posTransType_; }
  field::PosMaintAction& posMaintAction() { return posMaintAction_; }
  field::OrigPosReqRefID& origPosReqRefID() { return origPosReqRefID_; }
  field::PosMaintRptRefID& posMaintRptRefID() { return posMaintRptRefID_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::SettlSessID& settlSessID() { return settlSessID_; }
  field::SettlSessSubID& settlSessSubID() { return settlSessSubID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::TransactTime& transactTime() { return transactTime_; }
  group::PositionsGroup& positionsGroup() { return positionsGroup_; }
  field::AdjustmentType& adjustmentType() { return adjustmentType_; }
  field::ContraryInstructionIndicator& contraryInstructionIndicator() { return contraryInstructionIndicator_; }
  field::PriorSpreadIndicator& priorSpreadIndicator() { return priorSpreadIndicator_; }
  field::ThresholdAmount& thresholdAmount() { return thresholdAmount_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::PosReqID posReqID_{this};
  field::PosTransType posTransType_{this};
  field::PosMaintAction posMaintAction_{this};
  field::OrigPosReqRefID origPosReqRefID_{this};
  field::PosMaintRptRefID posMaintRptRefID_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::SettlSessID settlSessID_{this};
  field::SettlSessSubID settlSessSubID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::TradingSessionsGroup tradingSessionsGroup_{this};
  field::TransactTime transactTime_{this};
  group::PositionsGroup positionsGroup_{this};
  field::AdjustmentType adjustmentType_{this};
  field::ContraryInstructionIndicator contraryInstructionIndicator_{this};
  field::PriorSpreadIndicator priorSpreadIndicator_{this};
  field::ThresholdAmount thresholdAmount_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[91];
  AbstractGroup* slotGroups_[8];
};

class PositionMaintenanceReport : public AbstractMessage {
 public:
  PositionMaintenanceReport();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::PosMaintRptID& posMaintRptID() { return posMaintRptID_; }
  field::PosTransType& posTransType() { return posTransType_; }
  field::PosReqID& posReqID() { return posReqID_; }
  field::PosMaintAction& posMaintAction() { return posMaintAction_; }
  field::OrigPosReqRefID& origPosReqRefID() { return origPosReqRefID_; }
  field::PosMaintStatus& posMaintStatus() { return posMaintStatus_; }
  field::PosMaintResult& posMaintResult() { return posMaintResult_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::SettlSessID& settlSessID() { return settlSessID_; }
  field::SettlSessSubID& settlSessSubID() { return settlSessSubID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::TransactTime& transactTime() { return transactTime_; }
  group::PositionsGroup& positionsGroup() { return positionsGroup_; }
  group::PosAmtGroup& posAmtGroup() { return posAmtGroup_; }
  field::AdjustmentType& adjustmentType() { return adjustmentType_; }
  field::ThresholdAmount& thresholdAmount() { return thresholdAmount_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::PosMaintRptID posMaintRptID_{this};
  field::PosTransType posTransType_{this};
  field::PosReqID posReqID_{this};
  field::PosMaintAction posMaintAction_{this};
  field::OrigPosReqRefID origPosReqRefID_{this};
  field::PosMaintStatus posMaintStatus_{this};
  field::PosMaintResult posMaintResult_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::SettlSessID settlSessID_{this};
  field::SettlSessSubID settlSessSubID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::TradingSessionsGroup tradingSessionsGroup_{this};
  field::TransactTime transactTime_{this};
  group::PositionsGroup positionsGroup_{this};
  group::PosAmtGroup posAmtGroup_{this};
  field::AdjustmentType adjustmentType_{this};
  field::ThresholdAmount thresholdAmount_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[91];
  AbstractGroup* slotGroups_[9];
};

class RequestForPositions : public AbstractMessage {
 public:
  RequestForPositions();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::PosReqID& posReqID() { return posReqID_; }
  field::PosReqType& posReqType() { return posReqType_; }
  field::MatchStatus& matchStatus() { return matchStatus_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::SettlSessID& settlSessID() { return settlSessID_; }
  field::SettlSessSubID& settlSessSubID() { return settlSessSubID_; }
  group::TradingSessionsGroup& tradingSessionsGroup() { return tradingSessionsGroup_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::ResponseTransportType& responseTransportType() { return responseTransportType_; }
  field::ResponseDestination& responseDestination() { return responseDestination_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::PosReqID posReqID_{this};
  field::PosReqType posReqType_{this};
  field::MatchStatus matchStatus_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::SettlSessID settlSessID_{this};
  field::SettlSessSubID settlSessSubID_{this};
  group::TradingSessionsGroup tradingSessionsGroup_{this};
  field::TransactTime transactTime_{this};
  field::ResponseTransportType responseTransportType_{this};
  field::ResponseDestination responseDestination_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[88];
  AbstractGroup* slotGroups_[7];
};

class RequestForPositionsAck : public AbstractMessage {
 public:
  RequestForPositionsAck();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::PosMaintRptID& posMaintRptID() { return posMaintRptID_; }
  field::PosReqID& posReqID() { return posReqID_; }
  field::TotalNumPosReports& totalNumPosReports() { return totalNumPosReports_; }
  field::UnsolicitedIndicator& unsolicitedIndicator() { return unsolicitedIndicator_; }
  field::PosReqResult& posReqResult() { return posReqResult_; }
  field::PosReqStatus& posReqStatus() { return posReqStatus_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::ResponseTransportType& responseTransportType() { return responseTransportType_; }
  field::ResponseDestination& responseDestination() { return responseDestination_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::PosMaintRptID posMaintRptID_{this};
  field::PosReqID posReqID_{this};
  field::TotalNumPosReports totalNumPosReports_{this};
  field::UnsolicitedIndicator unsolicitedIndicator_{this};
  field::PosReqResult posReqResult_{this};
  field::PosReqStatus posReqStatus_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::ResponseTransportType responseTransportType_{this};
  field::ResponseDestination responseDestination_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[86];
  AbstractGroup* slotGroups_[6];
};

class PositionReport : public AbstractMessage {
 public:
  PositionReport();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::PosMaintRptID& posMaintRptID() { return posMaintRptID_; }
  field::PosReqID& posReqID() { return posReqID_; }
  field::PosReqType& posReqType() { return posReqType_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::TotalNumPosReports& totalNumPosReports() { return totalNumPosReports_; }
  field::UnsolicitedIndicator& unsolicitedIndicator() { return unsolicitedIndicator_; }
  field::PosReqResult& posReqResult() { return posReqResult_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::SettlSessID& settlSessID() { return settlSessID_; }
  field::SettlSessSubID& settlSessSubID() { return settlSessSubID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::Currency& currency() { return currency_; }
  field::SettlPrice& settlPrice() { return settlPrice_; }
  field::SettlPriceType& settlPriceType() { return settlPriceType_; }
  field::PriorSettlPrice& priorSettlPrice() { return priorSettlPrice_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup2& underlyingsGroup2() { return underlyingsGroup2_; }
  group::PositionsGroup& positionsGroup() { return positionsGroup_; }
  group::PosAmtGroup& posAmtGroup() { return posAmtGroup_; }
  field::RegistStatus& registStatus() { return registStatus_; }
  field::DeliveryDate& deliveryDate() { return deliveryDate_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::PosMaintRptID posMaintRptID_{this};
  field::PosReqID posReqID_{this};
  field::PosReqType posReqType_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::TotalNumPosReports totalNumPosReports_{this};
  field::UnsolicitedIndicator unsolicitedIndicator_{this};
  field::PosReqResult posReqResult_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::SettlSessID settlSessID_{this};
  field::SettlSessSubID settlSessSubID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::Currency currency_{this};
  field::SettlPrice settlPrice_{this};
  field::SettlPriceType settlPriceType_{this};
  field::PriorSettlPrice priorSettlPrice_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup2 underlyingsGroup2_{this};
  group::PositionsGroup positionsGroup_{this};
  group::PosAmtGroup posAmtGroup_{this};
  field::RegistStatus registStatus_{this};
  field::DeliveryDate deliveryDate_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[93];
  AbstractGroup* slotGroups_[8];
};

class TradeCaptureReportRequestAck : public AbstractMessage {
 public:
  TradeCaptureReportRequestAck();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::TradeRequestID& tradeRequestID() { return tradeRequestID_; }
  field::TradeRequestType& tradeRequestType() { return tradeRequestType_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::TotNumTradeReports& totNumTradeReports() { return totNumTradeReports_; }
  field::TradeRequestResult& tradeRequestResult() { return tradeRequestResult_; }
  field::TradeRequestStatus& tradeRequestStatus() { return tradeRequestStatus_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::MultiLegReportingType& multiLegReportingType() { return multiLegReportingType_; }
  field::ResponseTransportType& responseTransportType() { return responseTransportType_; }
  field::ResponseDestination& responseDestination() { return responseDestination_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::TradeRequestID tradeRequestID_{this};
  field::TradeRequestType tradeRequestType_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::TotNumTradeReports totNumTradeReports_{this};
  field::TradeRequestResult tradeRequestResult_{this};
  field::TradeRequestStatus tradeRequestStatus_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::MultiLegReportingType multiLegReportingType_{this};
  field::ResponseTransportType responseTransportType_{this};
  field::ResponseDestination responseDestination_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[83];
  AbstractGroup* slotGroups_[5];
};

class TradeCaptureReportAck : public AbstractMessage {
 public:
  TradeCaptureReportAck();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::TradeReportID& tradeReportID() { return tradeReportID_; }
  field::TradeReportTransType& tradeReportTransType() { return tradeReportTransType_; }
  field::TradeReportType& tradeReportType() { return tradeReportType_; }
  field::TrdType& trdType() { return trdType_; }
  field::TrdSubType& trdSubType() { return trdSubType_; }
  field::SecondaryTrdType& secondaryTrdType() { return secondaryTrdType_; }
  field::TransferReason& transferReason() { return transferReason_; }
  field::ExecType& execType() { return execType_; }
  field::TradeReportRefID& tradeReportRefID() { return tradeReportRefID_; }
  field::SecondaryTradeReportRefID& secondaryTradeReportRefID() { return secondaryTradeReportRefID_; }
  field::TrdRptStatus& trdRptStatus() { return trdRptStatus_; }
  field::TradeReportRejectReason& tradeReportRejectReason() { return tradeReportRejectReason_; }
  field::SecondaryTradeReportID& secondaryTradeReportID() { return secondaryTradeReportID_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::TradeLinkID& tradeLinkID() { return tradeLinkID_; }
  field::TrdMatchID& trdMatchID() { return trdMatchID_; }
  field::ExecID& execID() { return execID_; }
  field::SecondaryExecID& secondaryExecID() { return secondaryExecID_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::TransactTime& transactTime() { return transactTime_; }
  group::TrdRegTimestampsGroup& trdRegTimestampsGroup() { return trdRegTimestampsGroup_; }
  field::ResponseTransportType& responseTransportType() { return responseTransportType_; }
  field::ResponseDestination& responseDestination() { return responseDestination_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  group::LegsGroup2& legsGroup2() { return legsGroup2_; }
  field::ClearingFeeIndicator& clearingFeeIndicator() { return clearingFeeIndicator_; }
  field::OrderCapacity& orderCapacity() { return orderCapacity_; }
  field::OrderRestrictions& orderRestrictions() { return orderRestrictions_; }
  field::CustOrderCapacity& custOrderCapacity() { return custOrderCapacity_; }
  field::Account& account() { return account_; }
  field::AcctIDSource& acctIDSource() { return acctIDSource_; }
  field::AccountType& accountType() { return accountType_; }
  field::PositionEffect& positionEffect() { return positionEffect_; }
  field::PreallocMethod& preallocMethod() { return preallocMethod_; }
  group::AllocsGroup4& allocsGroup4() { return allocsGroup4_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::TradeReportID tradeReportID_{this};
  field::TradeReportTransType tradeReportTransType_{this};
  field::TradeReportType tradeReportType_{this};
  field::TrdType trdType_{this};
  field::TrdSubType trdSubType_{this};
  field::SecondaryTrdType secondaryTrdType_{this};
  field::TransferReason transferReason_{this};
  field::ExecType execType_{this};
  field::TradeReportRefID tradeReportRefID_{this};
  field::SecondaryTradeReportRefID secondaryTradeReportRefID_{this};
  field::TrdRptStatus trdRptStatus_{this};
  field::TradeReportRejectReason tradeReportRejectReason_{this};
  field::SecondaryTradeReportID secondaryTradeReportID_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::TradeLinkID tradeLinkID_{this};
  field::TrdMatchID trdMatchID_{this};
  field::ExecID execID_{this};
  field::SecondaryExecID secondaryExecID_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::TransactTime transactTime_{this};
  group::TrdRegTimestampsGroup trdRegTimestampsGroup_{this};
  field::ResponseTransportType responseTransportType_{this};
  field::ResponseDestination responseDestination_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  group::LegsGroup2 legsGroup2_{this};
  field::ClearingFeeIndicator clearingFeeIndicator_{this};
  field::OrderCapacity orderCapacity_{this};
  field::OrderRestrictions orderRestrictions_{this};
  field::CustOrderCapacity custOrderCapacity_{this};
  field::Account account_{this};
  field::AcctIDSource acctIDSource_{this};
  field::AccountType accountType_{this};
  field::PositionEffect positionEffect_{this};
  field::PreallocMethod preallocMethod_{this};
  group::AllocsGroup4 allocsGroup4_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[104];
  AbstractGroup* slotGroups_[6];
};

class AllocationReport : public AbstractMessage {
 public:
  AllocationReport();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::AllocReportID& allocReportID() { return allocReportID_; }
  field::AllocID& allocID() { return allocID_; }
  field::AllocTransType& allocTransType() { return allocTransType_; }
  field::AllocReportRefID& allocReportRefID() { return allocReportRefID_; }
  field::AllocCancReplaceReason& allocCancReplaceReason() { return allocCancReplaceReason_; }
  field::SecondaryAllocID& secondaryAllocID() { return secondaryAllocID_; }
  field::AllocReportType& allocReportType() { return allocReportType_; }
  field::AllocStatus& allocStatus() { return allocStatus_; }
  field::AllocRejCode& allocRejCode() { return allocRejCode_; }
  field::RefAllocID& refAllocID() { return refAllocID_; }
  field::AllocIntermedReqType& allocIntermedReqType() { return allocIntermedReqType_; }
  field::AllocLinkID& allocLinkID() { return allocLinkID_; }
  field::AllocLinkType& allocLinkType() { return allocLinkType_; }
  field::BookingRefID& bookingRefID() { return bookingRefID_; }
  field::AllocNoOrdersType& allocNoOrdersType() { return allocNoOrdersType_; }
  group::OrdersGroup1& ordersGroup1() { return ordersGroup1_; }
  group::ExecsGroup& execsGroup() { return execsGroup_; }
  field::PreviouslyReported& previouslyReported() { return previouslyReported_; }
  field::ReversalIndicator& reversalIndicator() { return reversalIndicator_; }
  field::MatchType& matchType() { return matchType_; }
  field::Side& side() { return side_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::DeliveryForm& deliveryForm() { return deliveryForm_; }
  field::PctAtRisk& pctAtRisk() { return pctAtRisk_; }
  group::InstrAttribGroup& instrAttribGroup() { return instrAttribGroup_; }
  field::AgreementDesc& agreementDesc() { return agreementDesc_; }
  field::AgreementID& agreementID() { return agreementID_; }
  field::AgreementDate& agreementDate() { return agreementDate_; }
  field::AgreementCurrency& agreementCurrency() { return agreementCurrency_; }
  field::TerminationType& terminationType() { return terminationType_; }
  field::StartDate& startDate() { return startDate_; }
  field::EndDate& endDate() { return endDate_; }
  field::DeliveryType& deliveryType() { return deliveryType_; }
  field::MarginRatio& marginRatio() { return marginRatio_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  field::Quantity& quantity() { return quantity_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::LastMkt& lastMkt() { return lastMkt_; }
  field::TradeOriginationDate& tradeOriginationDate() { return tradeOriginationDate_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::PriceType& priceType() { return priceType_; }
  field::AvgPx& avgPx() { return avgPx_; }
  field::AvgParPx& avgParPx() { return avgParPx_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  field::Currency& currency() { return currency_; }
  field::AvgPxPrecision& avgPxPrecision() { return avgPxPrecision_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::SettlType& settlType() { return settlType_; }
  field::SettlDate& settlDate() { return settlDate_; }
  field::BookingType& bookingType() { return bookingType_; }
  field::GrossTradeAmt& grossTradeAmt() { return grossTradeAmt_; }
  field::Concession& concession() { return concession_; }
  field::TotalTakedown& totalTakedown() { return totalTakedown_; }
  field::NetMoney& netMoney() { return netMoney_; }
  field::PositionEffect& positionEffect() { return positionEffect_; }
  field::AutoAcceptIndicator& autoAcceptIndicator() { return autoAcceptIndicator_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::NumDaysInterest& numDaysInterest() { return numDaysInterest_; }
  field::AccruedInterestRate& accruedInterestRate() { return accruedInterestRate_; }
  field::AccruedInterestAmt& accruedInterestAmt() { return accruedInterestAmt_; }
  field::TotalAccruedInterestAmt& totalAccruedInterestAmt() { return totalAccruedInterestAmt_; }
  field::InterestAtMaturity& interestAtMaturity() { return interestAtMaturity_; }
  field::EndAccruedInterestAmt& endAccruedInterestAmt() { return endAccruedInterestAmt_; }
  field::StartCash& startCash() { return startCash_; }
  field::EndCash& endCash() { return endCash_; }
  field::LegalConfirm& legalConfirm() { return legalConfirm_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::YieldType& yieldType() { return yieldType_; }
  field::Yield& yield() { return yield_; }
  field::YieldCalcDate& yieldCalcDate() { return yieldCalcDate_; }
  field::YieldRedemptionDate& yieldRedemptionDate() { return yieldRedemptionDate_; }
  field::YieldRedemptionPrice& yieldRedemptionPrice() { return yieldRedemptionPrice_; }
  field::YieldRedemptionPriceType& yieldRedemptionPriceType() { return yieldRedemptionPriceType_; }
  field::TotNoAllocs& totNoAllocs() { return totNoAllocs_; }
  field::LastFragment& lastFragment() { return lastFragment_; }
  group::AllocsGroup1& allocsGroup1() { return allocsGroup1_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::AllocReportID allocReportID_{this};
  field::AllocID allocID_{this};
  field::AllocTransType allocTransType_{this};
  field::AllocReportRefID allocReportRefID_{this};
  field::AllocCancReplaceReason allocCancReplaceReason_{this};
  field::SecondaryAllocID secondaryAllocID_{this};
  field::AllocReportType allocReportType_{this};
  field::AllocStatus allocStatus_{this};
  field::AllocRejCode allocRejCode_{this};
  field::RefAllocID refAllocID_{this};
  field::AllocIntermedReqType allocIntermedReqType_{this};
  field::AllocLinkID allocLinkID_{this};
  field::AllocLinkType allocLinkType_{this};
  field::BookingRefID bookingRefID_{this};
  field::AllocNoOrdersType allocNoOrdersType_{this};
  group::OrdersGroup1 ordersGroup1_{this};
  group::ExecsGroup execsGroup_{this};
  field::PreviouslyReported previouslyReported_{this};
  field::ReversalIndicator reversalIndicator_{this};
  field::MatchType matchType_{this};
  field::Side side_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::DeliveryForm deliveryForm_{this};
  field::PctAtRisk pctAtRisk_{this};
  group::InstrAttribGroup instrAttribGroup_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::LegsGroup1 legsGroup1_{this};
  field::Quantity quantity_{this};
  field::QtyType qtyType_{this};
  field::LastMkt lastMkt_{this};
  field::TradeOriginationDate tradeOriginationDate_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::PriceType priceType_{this};
  field::AvgPx avgPx_{this};
  field::AvgParPx avgParPx_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  field::Currency currency_{this};
  field::AvgPxPrecision avgPxPrecision_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::TradeDate tradeDate_{this};
  field::TransactTime transactTime_{this};
  field::SettlType settlType_{this};
  field::SettlDate settlDate_{this};
  field::BookingType bookingType_{this};
  field::GrossTradeAmt grossTradeAmt_{this};
  field::Concession concession_{this};
  field::TotalTakedown totalTakedown_{this};
  field::NetMoney netMoney_{this};
  field::PositionEffect positionEffect_{this};
  field::AutoAcceptIndicator autoAcceptIndicator_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::NumDaysInterest numDaysInterest_{this};
  field::AccruedInterestRate accruedInterestRate_{this};
  field::AccruedInterestAmt accruedInterestAmt_{this};
  field::TotalAccruedInterestAmt totalAccruedInterestAmt_{this};
  field::InterestAtMaturity interestAtMaturity_{this};
  field::EndAccruedInterestAmt endAccruedInterestAmt_{this};
  field::StartCash startCash_{this};
  field::EndCash endCash_{this};
  field::LegalConfirm legalConfirm_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::YieldType yieldType_{this};
  field::Yield yield_{this};
  field::YieldCalcDate yieldCalcDate_{this};
  field::YieldRedemptionDate yieldRedemptionDate_{this};
  field::YieldRedemptionPrice yieldRedemptionPrice_{this};
  field::YieldRedemptionPriceType yieldRedemptionPriceType_{this};
  field::TotNoAllocs totNoAllocs_{this};
  field::LastFragment lastFragment_{this};
  group::AllocsGroup1 allocsGroup1_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[151];
  AbstractGroup* slotGroups_[11];
};

class AllocationReportAck : public AbstractMessage {
 public:
  AllocationReportAck();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::AllocReportID& allocReportID() { return allocReportID_; }
  field::AllocID& allocID() { return allocID_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::SecondaryAllocID& secondaryAllocID() { return secondaryAllocID_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::AllocStatus& allocStatus() { return allocStatus_; }
  field::AllocRejCode& allocRejCode() { return allocRejCode_; }
  field::AllocReportType& allocReportType() { return allocReportType_; }
  field::AllocIntermedReqType& allocIntermedReqType() { return allocIntermedReqType_; }
  field::MatchStatus& matchStatus() { return matchStatus_; }
  field::Product& product() { return product_; }
  field::SecurityType& securityType() { return securityType_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  group::AllocsGroup2& allocsGroup2() { return allocsGroup2_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::AllocReportID allocReportID_{this};
  field::AllocID allocID_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::SecondaryAllocID secondaryAllocID_{this};
  field::TradeDate tradeDate_{this};
  field::TransactTime transactTime_{this};
  field::AllocStatus allocStatus_{this};
  field::AllocRejCode allocRejCode_{this};
  field::AllocReportType allocReportType_{this};
  field::AllocIntermedReqType allocIntermedReqType_{this};
  field::MatchStatus matchStatus_{this};
  field::Product product_{this};
  field::SecurityType securityType_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  group::AllocsGroup2 allocsGroup2_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[45];
  AbstractGroup* slotGroups_[3];
};

class ConfirmationAck : public AbstractMessage {
 public:
  ConfirmationAck();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ConfirmID& confirmID() { return confirmID_; }
  field::TradeDate& tradeDate() { return tradeDate_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::AffirmStatus& affirmStatus() { return affirmStatus_; }
  field::ConfirmRejReason& confirmRejReason() { return confirmRejReason_; }
  field::MatchStatus& matchStatus() { return matchStatus_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ConfirmID confirmID_{this};
  field::TradeDate tradeDate_{this};
  field::TransactTime transactTime_{this};
  field::AffirmStatus affirmStatus_{this};
  field::ConfirmRejReason confirmRejReason_{this};
  field::MatchStatus matchStatus_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[39];
  AbstractGroup* slotGroups_[1];
};

class SettlementInstructionRequest : public AbstractMessage {
 public:
  SettlementInstructionRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::SettlInstReqID& settlInstReqID() { return settlInstReqID_; }
  field::TransactTime& transactTime() { return transactTime_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::AllocAccount& allocAccount() { return allocAccount_; }
  field::AllocAcctIDSource& allocAcctIDSource() { return allocAcctIDSource_; }
  field::Side& side() { return side_; }
  field::Product& product() { return product_; }
  field::SecurityType& securityType() { return securityType_; }
  field::CFICode& cFICode() { return cFICode_; }
  field::EffectiveTime& effectiveTime() { return effectiveTime_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  field::LastUpdateTime& lastUpdateTime() { return lastUpdateTime_; }
  field::StandInstDbType& standInstDbType() { return standInstDbType_; }
  field::StandInstDbName& standInstDbName() { return standInstDbName_; }
  field::StandInstDbID& standInstDbID() { return standInstDbID_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::SettlInstReqID settlInstReqID_{this};
  field::TransactTime transactTime_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::AllocAccount allocAccount_{this};
  field::AllocAcctIDSource allocAcctIDSource_{this};
  field::Side side_{this};
  field::Product product_{this};
  field::SecurityType securityType_{this};
  field::CFICode cFICode_{this};
  field::EffectiveTime effectiveTime_{this};
  field::ExpireTime expireTime_{this};
  field::LastUpdateTime lastUpdateTime_{this};
  field::StandInstDbType standInstDbType_{this};
  field::StandInstDbName standInstDbName_{this};
  field::StandInstDbID standInstDbID_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[44];
  AbstractGroup* slotGroups_[2];
};

class AssignmentReport : public AbstractMessage {
 public:
  AssignmentReport();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::AsgnRptID& asgnRptID() { return asgnRptID_; }
  field::TotNumAssignmentReports& totNumAssignmentReports() { return totNumAssignmentReports_; }
  field::LastRptRequested& lastRptRequested() { return lastRptRequested_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AccountType& accountType() { return accountType_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
  field::DatedDate& datedDate() { return datedDate_; }
  field::InterestAccrualDate& interestAccrualDate() { return interestAccrualDate_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  group::PositionsGroup& positionsGroup() { return positionsGroup_; }
  group::PosAmtGroup& posAmtGroup() { return posAmtGroup_; }
  field::ThresholdAmount& thresholdAmount() { return thresholdAmount_; }
  field::SettlPrice& settlPrice() { return settlPrice_; }
  field::SettlPriceType& settlPriceType() { return settlPriceType_; }
  field::UnderlyingSettlPrice& underlyingSettlPrice() { return underlyingSettlPrice_; }
  field::ExpireDate& expireDate() { return expireDate_; }
  field::AssignmentMethod& assignmentMethod() { return assignmentMethod_; }
  field::AssignmentUnit& assignmentUnit() { return assignmentUnit_; }
  field::OpenInterest& openInterest() { return openInterest_; }
  field::ExerciseMethod& exerciseMethod() { return exerciseMethod_; }
  field::SettlSessID& settlSessID() { return settlSessID_; }
  field::SettlSessSubID& settlSessSubID() { return settlSessSubID_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::AsgnRptID asgnRptID_{this};
  field::TotNumAssignmentReports totNumAssignmentReports_{this};
  field::LastRptRequested lastRptRequested_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AccountType accountType_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  group::PositionsGroup positionsGroup_{this};
  group::PosAmtGroup posAmtGroup_{this};
  field::ThresholdAmount thresholdAmount_{this};
  field::SettlPrice settlPrice_{this};
  field::SettlPriceType settlPriceType_{this};
  field::UnderlyingSettlPrice underlyingSettlPrice_{this};
  field::ExpireDate expireDate_{this};
  field::AssignmentMethod assignmentMethod_{this};
  field::AssignmentUnit assignmentUnit_{this};
  field::OpenInterest openInterest_{this};
  field::ExerciseMethod exerciseMethod_{this};
  field::SettlSessID settlSessID_{this};
  field::SettlSessSubID settlSessSubID_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[92];
  AbstractGroup* slotGroups_[8];
};

class CollateralRequest : public AbstractMessage {
 public:
  CollateralRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::CollReqID& collReqID() { return collReqID_; }
  field::CollAsgnReason& collAsgnReason() { return collAsgnReason_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AccountType& accountType() { return accountType_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  group::ExecsGroup1& execsGroup1() { return execsGroup1_; }
  group::TradesGroup& tradesGroup() { return tradesGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  field::SettlDate& settlDate() { return settlDate_; }
  field::Quantity& quantity() { return quantity_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup3& underlyingsGroup3() { return underlyingsGroup3_; }
  field::MarginExcess& marginExcess() { return marginExcess_; }
  field::TotalNetValue& totalNetValue() { return totalNetValue_; }
  field::CashOutstanding& cashOutstanding() { return cashOutstanding_; }
  group::TrdRegTimestampsGroup& trdRegTimestampsGroup() { return trdRegTimestampsGroup_; }
  field::Side& side() { return side_; }
  group::MiscFeesGroup& miscFeesGroup() { return miscFeesGroup_; }
  field::Price& price() { return price_; }
  field::PriceType& priceType() { return priceType_; }
  field::AccruedInterestAmt& accruedInterestAmt() { return accruedInterestAmt_; }
  field::EndAccruedInterestAmt& endAccruedInterestAmt() { return endAccruedInterestAmt_; }
  field::StartCash& startCash() { return startCash_; }
  field::EndCash& endCash() { return endCash_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SettlSessID& settlSessID() { return settlSessID_; }
  field::SettlSessSubID& settlSessSubID() { return settlSessSubID_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::CollReqID collReqID_{this};
  field::CollAsgnReason collAsgnReason_{this};
  field::TransactTime transactTime_{this};
  field::ExpireTime expireTime_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AccountType accountType_{this};
  field::ClOrdID clOrdID_{this};
  field::OrderID orderID_{this};
  field::SecondaryOrderID secondaryOrderID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  group::ExecsGroup1 execsGroup1_{this};
  group::TradesGroup tradesGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  field::SettlDate settlDate_{this};
  field::Quantity quantity_{this};
  field::QtyType qtyType_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup3 underlyingsGroup3_{this};
  field::MarginExcess marginExcess_{this};
  field::TotalNetValue totalNetValue_{this};
  field::CashOutstanding cashOutstanding_{this};
  group::TrdRegTimestampsGroup trdRegTimestampsGroup_{this};
  field::Side side_{this};
  group::MiscFeesGroup miscFeesGroup_{this};
  field::Price price_{this};
  field::PriceType priceType_{this};
  field::AccruedInterestAmt accruedInterestAmt_{this};
  field::EndAccruedInterestAmt endAccruedInterestAmt_{this};
  field::StartCash startCash_{this};
  field::EndCash endCash_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SettlSessID settlSessID_{this};
  field::SettlSessSubID settlSessSubID_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[120];
  AbstractGroup* slotGroups_[11];
};

class CollateralAssignment : public AbstractMessage {
 public:
  CollateralAssignment();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::CollAsgnID& collAsgnID() { return collAsgnID_; }
  field::CollReqID& collReqID() { return collReqID_; }
  field::CollAsgnReason& collAsgnReason() { return collAsgnReason_; }
  field::CollAsgnTransType& collAsgnTransType() { return collAsgnTransType_; }
  field::CollAsgnRefID& collAsgnRefID() { return collAsgnRefID_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::ExpireTime& expireTime() { return expireTime_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AccountType& accountType() { return accountType_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  group::ExecsGroup1& execsGroup1() { return execsGroup1_; }
  group::TradesGroup& tradesGroup() { return tradesGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  field::SettlDate& settlDate() { return settlDate_; }
  field::Quantity& quantity() { return quantity_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup3& underlyingsGroup3() { return underlyingsGroup3_; }
  field::MarginExcess& marginExcess() { return marginExcess_; }
  field::TotalNetValue& totalNetValue() { return totalNetValue_; }
  field::CashOutstanding& cashOutstanding() { return cashOutstanding_; }
  group::TrdRegTimestampsGroup& trdRegTimestampsGroup() { return trdRegTimestampsGroup_; }
  field::Side& side() { return side_; }
  group::MiscFeesGroup& miscFeesGroup() { return miscFeesGroup_; }
  field::Price& price() { return price_; }
  field::PriceType& priceType() { return priceType_; }
  field::AccruedInterestAmt& accruedInterestAmt() { return accruedInterestAmt_; }
  field::EndAccruedInterestAmt& endAccruedInterestAmt() { return endAccruedInterestAmt_; }
  field::StartCash& startCash() { return startCash_; }
  field::EndCash& endCash() { return endCash_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::SettlDeliveryType& settlDeliveryType() { return settlDeliveryType_; }
  field::StandInstDbType& standInstDbType() { return standInstDbType_; }
  field::StandInstDbName& standInstDbName() { return standInstDbName_; }
  field::StandInstDbID& standInstDbID() { return standInstDbID_; }
  group::DlvyInstGroup& dlvyInstGroup() { return dlvyInstGroup_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SettlSessID& settlSessID() { return settlSessID_; }
  field::SettlSessSubID& settlSessSubID() { return settlSessSubID_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::CollAsgnID collAsgnID_{this};
  field::CollReqID collReqID_{this};
  field::CollAsgnReason collAsgnReason_{this};
  field::CollAsgnTransType collAsgnTransType_{this};
  field::CollAsgnRefID collAsgnRefID_{this};
  field::TransactTime transactTime_{this};
  field::ExpireTime expireTime_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AccountType accountType_{this};
  field::ClOrdID clOrdID_{this};
  field::OrderID orderID_{this};
  field::SecondaryOrderID secondaryOrderID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  group::ExecsGroup1 execsGroup1_{this};
  group::TradesGroup tradesGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  field::SettlDate settlDate_{this};
  field::Quantity quantity_{this};
  field::QtyType qtyType_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup3 underlyingsGroup3_{this};
  field::MarginExcess marginExcess_{this};
  field::TotalNetValue totalNetValue_{this};
  field::CashOutstanding cashOutstanding_{this};
  group::TrdRegTimestampsGroup trdRegTimestampsGroup_{this};
  field::Side side_{this};
  group::MiscFeesGroup miscFeesGroup_{this};
  field::Price price_{this};
  field::PriceType priceType_{this};
  field::AccruedInterestAmt accruedInterestAmt_{this};
  field::EndAccruedInterestAmt endAccruedInterestAmt_{this};
  field::StartCash startCash_{this};
  field::EndCash endCash_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::SettlDeliveryType settlDeliveryType_{this};
  field::StandInstDbType standInstDbType_{this};
  field::StandInstDbName standInstDbName_{this};
  field::StandInstDbID standInstDbID_{this};
  group::DlvyInstGroup dlvyInstGroup_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SettlSessID settlSessID_{this};
  field::SettlSessSubID settlSessSubID_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[127];
  AbstractGroup* slotGroups_[12];
};

class CollateralResponse : public AbstractMessage {
 public:
  CollateralResponse();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::CollRespID& collRespID() { return collRespID_; }
  field::CollAsgnID& collAsgnID() { return collAsgnID_; }
  field::CollReqID& collReqID() { return collReqID_; }
  field::CollAsgnReason& collAsgnReason() { return collAsgnReason_; }
  field::CollAsgnTransType& collAsgnTransType() { return collAsgnTransType_; }
  field::CollAsgnRespType& collAsgnRespType() { return collAsgnRespType_; }
  field::CollAsgnRejectReason& collAsgnRejectReason() { return collAsgnRejectReason_; }
  field::TransactTime& transactTime() { return transactTime_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AccountType& accountType() { return accountType_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  group::ExecsGroup1& execsGroup1() { return execsGroup1_; }
  group::TradesGroup& tradesGroup() { return tradesGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  field::SettlDate& settlDate() { return settlDate_; }
  field::Quantity& quantity() { return quantity_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup3& underlyingsGroup3() { return underlyingsGroup3_; }
  field::MarginExcess& marginExcess() { return marginExcess_; }
  field::TotalNetValue& totalNetValue() { return totalNetValue_; }
  field::CashOutstanding& cashOutstanding() { return cashOutstanding_; }
  group::TrdRegTimestampsGroup& trdRegTimestampsGroup() { return trdRegTimestampsGroup_; }
  field::Side& side() { return side_; }
  group::MiscFeesGroup& miscFeesGroup() { return miscFeesGroup_; }
  field::Price& price() { return price_; }
  field::PriceType& priceType() { return priceType_; }
  field::AccruedInterestAmt& accruedInterestAmt() { return accruedInterestAmt_; }
  field::EndAccruedInterestAmt& endAccruedInterestAmt() { return endAccruedInterestAmt_; }
  field::StartCash& startCash() { return startCash_; }
  field::EndCash& endCash() { return endCash_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::CollRespID collRespID_{this};
  field::CollAsgnID collAsgnID_{this};
  field::CollReqID collReqID_{this};
  field::CollAsgnReason collAsgnReason_{this};
  field::CollAsgnTransType collAsgnTransType_{this};
  field::CollAsgnRespType collAsgnRespType_{this};
  field::CollAsgnRejectReason collAsgnRejectReason_{this};
  field::TransactTime transactTime_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AccountType accountType_{this};
  field::ClOrdID clOrdID_{this};
  field::OrderID orderID_{this};
  field::SecondaryOrderID secondaryOrderID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  group::ExecsGroup1 execsGroup1_{this};
  group::TradesGroup tradesGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  field::SettlDate settlDate_{this};
  field::Quantity quantity_{this};
  field::QtyType qtyType_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup3 underlyingsGroup3_{this};
  field::MarginExcess marginExcess_{this};
  field::TotalNetValue totalNetValue_{this};
  field::CashOutstanding cashOutstanding_{this};
  group::TrdRegTimestampsGroup trdRegTimestampsGroup_{this};
  field::Side side_{this};
  group::MiscFeesGroup miscFeesGroup_{this};
  field::Price price_{this};
  field::PriceType priceType_{this};
  field::AccruedInterestAmt accruedInterestAmt_{this};
  field::EndAccruedInterestAmt endAccruedInterestAmt_{this};
  field::StartCash startCash_{this};
  field::EndCash endCash_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[119];
  AbstractGroup* slotGroups_[11];
};

class CollateralReport : public AbstractMessage {
 public:
  CollateralReport();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::CollRptID& collRptID() { return collRptID_; }
  field::CollInquiryID& collInquiryID() { return collInquiryID_; }
  field::CollStatus& collStatus() { return collStatus_; }
  field::TotNumReports& totNumReports() { return totNumReports_; }
  field::LastRptRequested& lastRptRequested() { return lastRptRequested_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AccountType& accountType() { return accountType_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  group::ExecsGroup1& execsGroup1() { return execsGroup1_; }
  group::TradesGroup& tradesGroup() { return tradesGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  field::SettlDate& settlDate() { return settlDate_; }
  field::Quantity& quantity() { return quantity_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::MarginExcess& marginExcess() { return marginExcess_; }
  field::TotalNetValue& totalNetValue() { return totalNetValue_; }
  field::CashOutstanding& cashOutstanding() { return cashOutstanding_; }
  group::TrdRegTimestampsGroup& trdRegTimestampsGroup() { return trdRegTimestampsGroup_; }
  field::Side& side() { return side_; }
  group::MiscFeesGroup& miscFeesGroup() { return miscFeesGroup_; }
  field::Price& price() { return price_; }
  field::PriceType& priceType() { return priceType_; }
  field::AccruedInterestAmt& accruedInterestAmt() { return accruedInterestAmt_; }
  field::EndAccruedInterestAmt& endAccruedInterestAmt() { return endAccruedInterestAmt_; }
  field::StartCash& startCash() { return startCash_; }
  field::EndCash& endCash() { return endCash_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::SettlDeliveryType& settlDeliveryType() { return settlDeliveryType_; }
  field::StandInstDbType& standInstDbType() { return standInstDbType_; }
  field::StandInstDbName& standInstDbName() { return standInstDbName_; }
  field::StandInstDbID& standInstDbID() { return standInstDbID_; }
  group::DlvyInstGroup& dlvyInstGroup() { return dlvyInstGroup_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SettlSessID& settlSessID() { return settlSessID_; }
  field::SettlSessSubID& settlSessSubID() { return settlSessSubID_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::CollRptID collRptID_{this};
  field::CollInquiryID collInquiryID_{this};
  field::CollStatus collStatus_{this};
  field::TotNumReports totNumReports_{this};
  field::LastRptRequested lastRptRequested_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AccountType accountType_{this};
  field::ClOrdID clOrdID_{this};
  field::OrderID orderID_{this};
  field::SecondaryOrderID secondaryOrderID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  group::ExecsGroup1 execsGroup1_{this};
  group::TradesGroup tradesGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  field::SettlDate settlDate_{this};
  field::Quantity quantity_{this};
  field::QtyType qtyType_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::MarginExcess marginExcess_{this};
  field::TotalNetValue totalNetValue_{this};
  field::CashOutstanding cashOutstanding_{this};
  group::TrdRegTimestampsGroup trdRegTimestampsGroup_{this};
  field::Side side_{this};
  group::MiscFeesGroup miscFeesGroup_{this};
  field::Price price_{this};
  field::PriceType priceType_{this};
  field::AccruedInterestAmt accruedInterestAmt_{this};
  field::EndAccruedInterestAmt endAccruedInterestAmt_{this};
  field::StartCash startCash_{this};
  field::EndCash endCash_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::SettlDeliveryType settlDeliveryType_{this};
  field::StandInstDbType standInstDbType_{this};
  field::StandInstDbName standInstDbName_{this};
  field::StandInstDbID standInstDbID_{this};
  group::DlvyInstGroup dlvyInstGroup_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SettlSessID settlSessID_{this};
  field::SettlSessSubID settlSessSubID_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[125];
  AbstractGroup* slotGroups_[12];
};

class CollateralInquiry : public AbstractMessage {
 public:
  CollateralInquiry();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::CollInquiryID& collInquiryID() { return collInquiryID_; }
  group::CollInquiryQualifierGroup& collInquiryQualifierGroup() { return collInquiryQualifierGroup_; }
  field::SubscriptionRequestType& subscriptionRequestType() { return subscriptionRequestType_; }
  field::ResponseTransportType& responseTransportType() { return responseTransportType_; }
  field::ResponseDestination& responseDestination() { return responseDestination_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AccountType& accountType() { return accountType_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  group::ExecsGroup1& execsGroup1() { return execsGroup1_; }
  group::TradesGroup& tradesGroup() { return tradesGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  field::SettlDate& settlDate() { return settlDate_; }
  field::Quantity& quantity() { return quantity_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::MarginExcess& marginExcess() { return marginExcess_; }
  field::TotalNetValue& totalNetValue() { return totalNetValue_; }
  field::CashOutstanding& cashOutstanding() { return cashOutstanding_; }
  group::TrdRegTimestampsGroup& trdRegTimestampsGroup() { return trdRegTimestampsGroup_; }
  field::Side& side() { return side_; }
  field::Price& price() { return price_; }
  field::PriceType& priceType() { return priceType_; }
  field::AccruedInterestAmt& accruedInterestAmt() { return accruedInterestAmt_; }
  field::EndAccruedInterestAmt& endAccruedInterestAmt() { return endAccruedInterestAmt_; }
  field::StartCash& startCash() { return startCash_; }
  field::EndCash& endCash() { return endCash_; }
  field::Spread& spread() { return spread_; }
  field::BenchmarkCurveCurrency& benchmarkCurveCurrency() { return benchmarkCurveCurrency_; }
  field::BenchmarkCurveName& benchmarkCurveName() { return benchmarkCurveName_; }
  field::BenchmarkCurvePoint& benchmarkCurvePoint() { return benchmarkCurvePoint_; }
  field::BenchmarkPrice& benchmarkPrice() { return benchmarkPrice_; }
  field::BenchmarkPriceType& benchmarkPriceType() { return benchmarkPriceType_; }
  field::BenchmarkSecurityID& benchmarkSecurityID() { return benchmarkSecurityID_; }
  field::BenchmarkSecurityIDSource& benchmarkSecurityIDSource() { return benchmarkSecurityIDSource_; }
  group::StipulationsGroup& stipulationsGroup() { return stipulationsGroup_; }
  field::SettlDeliveryType& settlDeliveryType() { return settlDeliveryType_; }
  field::StandInstDbType& standInstDbType() { return standInstDbType_; }
  field::StandInstDbName& standInstDbName() { return standInstDbName_; }
  field::StandInstDbID& standInstDbID() { return standInstDbID_; }
  group::DlvyInstGroup& dlvyInstGroup() { return dlvyInstGroup_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SettlSessID& settlSessID() { return settlSessID_; }
  field::SettlSessSubID& settlSessSubID() { return settlSessSubID_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::CollInquiryID collInquiryID_{this};
  group::CollInquiryQualifierGroup collInquiryQualifierGroup_{this};
  field::SubscriptionRequestType subscriptionRequestType_{this};
  field::ResponseTransportType responseTransportType_{this};
  field::ResponseDestination responseDestination_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AccountType accountType_{this};
  field::ClOrdID clOrdID_{this};
  field::OrderID orderID_{this};
  field::SecondaryOrderID secondaryOrderID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  group::ExecsGroup1 execsGroup1_{this};
  group::TradesGroup tradesGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  field::SettlDate settlDate_{this};
  field::Quantity quantity_{this};
  field::QtyType qtyType_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::MarginExcess marginExcess_{this};
  field::TotalNetValue totalNetValue_{this};
  field::CashOutstanding cashOutstanding_{this};
  group::TrdRegTimestampsGroup trdRegTimestampsGroup_{this};
  field::Side side_{this};
  field::Price price_{this};
  field::PriceType priceType_{this};
  field::AccruedInterestAmt accruedInterestAmt_{this};
  field::EndAccruedInterestAmt endAccruedInterestAmt_{this};
  field::StartCash startCash_{this};
  field::EndCash endCash_{this};
  field::Spread spread_{this};
  field::BenchmarkCurveCurrency benchmarkCurveCurrency_{this};
  field::BenchmarkCurveName benchmarkCurveName_{this};
  field::BenchmarkCurvePoint benchmarkCurvePoint_{this};
  field::BenchmarkPrice benchmarkPrice_{this};
  field::BenchmarkPriceType benchmarkPriceType_{this};
  field::BenchmarkSecurityID benchmarkSecurityID_{this};
  field::BenchmarkSecurityIDSource benchmarkSecurityIDSource_{this};
  group::StipulationsGroup stipulationsGroup_{this};
  field::SettlDeliveryType settlDeliveryType_{this};
  field::StandInstDbType standInstDbType_{this};
  field::StandInstDbName standInstDbName_{this};
  field::StandInstDbID standInstDbID_{this};
  group::DlvyInstGroup dlvyInstGroup_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SettlSessID settlSessID_{this};
  field::SettlSessSubID settlSessSubID_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[124];
  AbstractGroup* slotGroups_[12];
};

class NetworkCounterpartySystemStatusRequest : public AbstractMessage {
 public:
  NetworkCounterpartySystemStatusRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::NetworkRequestType& networkRequestType() { return networkRequestType_; }
  field::NetworkRequestID& networkRequestID() { return networkRequestID_; }
  group::CompIDsGroup& compIDsGroup() { return compIDsGroup_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::NetworkRequestType networkRequestType_{this};
  field::NetworkRequestID networkRequestID_{this};
  group::CompIDsGroup compIDsGroup_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[32];
  AbstractGroup* slotGroups_[2];
};

class NetworkCounterpartySystemStatusResponse : public AbstractMessage {
 public:
  NetworkCounterpartySystemStatusResponse();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::NetworkStatusResponseType& networkStatusResponseType() { return networkStatusResponseType_; }
  field::NetworkRequestID& networkRequestID() { return networkRequestID_; }
  field::NetworkResponseID& networkResponseID() { return networkResponseID_; }
  field::LastNetworkResponseID& lastNetworkResponseID() { return lastNetworkResponseID_; }
  group::CompIDsGroup1& compIDsGroup1() { return compIDsGroup1_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::NetworkStatusResponseType networkStatusResponseType_{this};
  field::NetworkRequestID networkRequestID_{this};
  field::NetworkResponseID networkResponseID_{this};
  field::LastNetworkResponseID lastNetworkResponseID_{this};
  group::CompIDsGroup1 compIDsGroup1_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[34];
  AbstractGroup* slotGroups_[2];
};

class UserRequest : public AbstractMessage {
 public:
  UserRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::UserRequestID& userRequestID() { return userRequestID_; }
  field::UserRequestType& userRequestType() { return userRequestType_; }
  field::Username& username() { return username_; }
  field::Password& password() { return password_; }
  field::NewPassword& newPassword() { return newPassword_; }
  field::RawDataLength& rawDataLength() { return rawDataLength_; }
  field::RawData& rawData() { return rawData_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::UserRequestID userRequestID_{this};
  field::UserRequestType userRequestType_{this};
  field::Username username_{this};
  field::Password password_{this};
  field::NewPassword newPassword_{this};
  field::RawDataLength rawDataLength_{this};
  field::RawData rawData_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[37];
  AbstractGroup* slotGroups_[1];
};

class UserResponse : public AbstractMessage {
 public:
  UserResponse();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::UserRequestID& userRequestID() { return userRequestID_; }
  field::Username& username() { return username_; }
  field::UserStatus& userStatus() { return userStatus_; }
  field::UserStatusText& userStatusText() { return userStatusText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::UserRequestID userRequestID_{this};
  field::Username username_{this};
  field::UserStatus userStatus_{this};
  field::UserStatusText userStatusText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[34];
  AbstractGroup* slotGroups_[1];
};

class CollateralInquiryAck : public AbstractMessage {
 public:
  CollateralInquiryAck();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::CollInquiryID& collInquiryID() { return collInquiryID_; }
  field::CollInquiryStatus& collInquiryStatus() { return collInquiryStatus_; }
  field::CollInquiryResult& collInquiryResult() { return collInquiryResult_; }
  group::CollInquiryQualifierGroup& collInquiryQualifierGroup() { return collInquiryQualifierGroup_; }
  field::TotNumReports& totNumReports() { return totNumReports_; }
  group::PartyIDsGroup& partyIDsGroup() { return partyIDsGroup_; }
  field::Account& account() { return account_; }
  field::AccountType& accountType() { return accountType_; }
  field::ClOrdID& clOrdID() { return clOrdID_; }
  field::OrderID& orderID() { return orderID_; }
  field::SecondaryOrderID& secondaryOrderID() { return secondaryOrderID_; }
  field::SecondaryClOrdID& secondaryClOrdID() { return secondaryClOrdID_; }
  group::ExecsGroup1& execsGroup1() { return execsGroup1_; }
  group::TradesGroup& tradesGroup() { return tradesGroup_; }
  field::Symbol& symbol() { return symbol_; }
  field::SymbolSfx& symbolSfx() { return symbolSfx_; }
  field::SecurityID& securityID() { return securityID_; }
  field::SecurityIDSource& securityIDSource() { return securityIDSource_; }
  group::SecurityAltIDGroup& securityAltIDGroup() { return securityAltIDGroup_; }
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
  group::EventsGroup& eventsGroup() { return eventsGroup_; }
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
  field::SettlDate& settlDate() { return settlDate_; }
  field::Quantity& quantity() { return quantity_; }
  field::QtyType& qtyType() { return qtyType_; }
  field::Currency& currency() { return currency_; }
  group::LegsGroup1& legsGroup1() { return legsGroup1_; }
  group::UnderlyingsGroup& underlyingsGroup() { return underlyingsGroup_; }
  field::TradingSessionID& tradingSessionID() { return tradingSessionID_; }
  field::TradingSessionSubID& tradingSessionSubID() { return tradingSessionSubID_; }
  field::SettlSessID& settlSessID() { return settlSessID_; }
  field::SettlSessSubID& settlSessSubID() { return settlSessSubID_; }
  field::ClearingBusinessDate& clearingBusinessDate() { return clearingBusinessDate_; }
  field::ResponseTransportType& responseTransportType() { return responseTransportType_; }
  field::ResponseDestination& responseDestination() { return responseDestination_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::CollInquiryID collInquiryID_{this};
  field::CollInquiryStatus collInquiryStatus_{this};
  field::CollInquiryResult collInquiryResult_{this};
  group::CollInquiryQualifierGroup collInquiryQualifierGroup_{this};
  field::TotNumReports totNumReports_{this};
  group::PartyIDsGroup partyIDsGroup_{this};
  field::Account account_{this};
  field::AccountType accountType_{this};
  field::ClOrdID clOrdID_{this};
  field::OrderID orderID_{this};
  field::SecondaryOrderID secondaryOrderID_{this};
  field::SecondaryClOrdID secondaryClOrdID_{this};
  group::ExecsGroup1 execsGroup1_{this};
  group::TradesGroup tradesGroup_{this};
  field::Symbol symbol_{this};
  field::SymbolSfx symbolSfx_{this};
  field::SecurityID securityID_{this};
  field::SecurityIDSource securityIDSource_{this};
  group::SecurityAltIDGroup securityAltIDGroup_{this};
  field::Product product_{this};
  field::CFICode cFICode_{this};
  field::SecurityType securityType_{this};
  field::SecuritySubType securitySubType_{this};
  field::MaturityMonthYear maturityMonthYear_{this};
  field::MaturityDate maturityDate_{this};
  field::PutOrCall putOrCall_{this};
  field::CouponPaymentDate couponPaymentDate_{this};
  field::IssueDate issueDate_{this};
  field::RepoCollateralSecurityType repoCollateralSecurityType_{this};
  field::RepurchaseTerm repurchaseTerm_{this};
  field::RepurchaseRate repurchaseRate_{this};
  field::Factor factor_{this};
  field::CreditRating creditRating_{this};
  field::InstrRegistry instrRegistry_{this};
  field::CountryOfIssue countryOfIssue_{this};
  field::StateOrProvinceOfIssue stateOrProvinceOfIssue_{this};
  field::LocaleOfIssue localeOfIssue_{this};
  field::RedemptionDate redemptionDate_{this};
  field::StrikePrice strikePrice_{this};
  field::StrikeCurrency strikeCurrency_{this};
  field::OptAttribute optAttribute_{this};
  field::ContractMultiplier contractMultiplier_{this};
  field::CouponRate couponRate_{this};
  field::SecurityExchange securityExchange_{this};
  field::Issuer issuer_{this};
  field::EncodedIssuerLen encodedIssuerLen_{this};
  field::EncodedIssuer encodedIssuer_{this};
  field::SecurityDesc securityDesc_{this};
  field::EncodedSecurityDescLen encodedSecurityDescLen_{this};
  field::EncodedSecurityDesc encodedSecurityDesc_{this};
  field::Pool pool_{this};
  field::ContractSettlMonth contractSettlMonth_{this};
  field::CPProgram cPProgram_{this};
  field::CPRegType cPRegType_{this};
  group::EventsGroup eventsGroup_{this};
  field::DatedDate datedDate_{this};
  field::InterestAccrualDate interestAccrualDate_{this};
  field::AgreementDesc agreementDesc_{this};
  field::AgreementID agreementID_{this};
  field::AgreementDate agreementDate_{this};
  field::AgreementCurrency agreementCurrency_{this};
  field::TerminationType terminationType_{this};
  field::StartDate startDate_{this};
  field::EndDate endDate_{this};
  field::DeliveryType deliveryType_{this};
  field::MarginRatio marginRatio_{this};
  field::SettlDate settlDate_{this};
  field::Quantity quantity_{this};
  field::QtyType qtyType_{this};
  field::Currency currency_{this};
  group::LegsGroup1 legsGroup1_{this};
  group::UnderlyingsGroup underlyingsGroup_{this};
  field::TradingSessionID tradingSessionID_{this};
  field::TradingSessionSubID tradingSessionSubID_{this};
  field::SettlSessID settlSessID_{this};
  field::SettlSessSubID settlSessSubID_{this};
  field::ClearingBusinessDate clearingBusinessDate_{this};
  field::ResponseTransportType responseTransportType_{this};
  field::ResponseDestination responseDestination_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[104];
  AbstractGroup* slotGroups_[9];
};

class ConfirmationRequest : public AbstractMessage {
 public:
  ConfirmationRequest();

  field::BeginString& beginString() { return beginString_; }
  field::BodyLength& bodyLength() { return bodyLength_; }
  field::SenderCompID& senderCompID() { return senderCompID_; }
  field::TargetCompID& targetCompID() { return targetCompID_; }
  field::OnBehalfOfCompID& onBehalfOfCompID() { return onBehalfOfCompID_; }
  field::DeliverToCompID& deliverToCompID() { return deliverToCompID_; }
  field::SecureDataLen& secureDataLen() { return secureDataLen_; }
  field::SecureData& secureData() { return secureData_; }
  field::MsgSeqNum& msgSeqNum() { return msgSeqNum_; }
  field::SenderSubID& senderSubID() { return senderSubID_; }
  field::SenderLocationID& senderLocationID() { return senderLocationID_; }
  field::TargetSubID& targetSubID() { return targetSubID_; }
  field::TargetLocationID& targetLocationID() { return targetLocationID_; }
  field::OnBehalfOfSubID& onBehalfOfSubID() { return onBehalfOfSubID_; }
  field::OnBehalfOfLocationID& onBehalfOfLocationID() { return onBehalfOfLocationID_; }
  field::DeliverToSubID& deliverToSubID() { return deliverToSubID_; }
  field::DeliverToLocationID& deliverToLocationID() { return deliverToLocationID_; }
  field::PossDupFlag& possDupFlag() { return possDupFlag_; }
  field::PossResend& possResend() { return possResend_; }
  field::SendingTime& sendingTime() { return sendingTime_; }
  field::OrigSendingTime& origSendingTime() { return origSendingTime_; }
  field::XmlDataLen& xmlDataLen() { return xmlDataLen_; }
  field::XmlData& xmlData() { return xmlData_; }
  field::MessageEncoding& messageEncoding() { return messageEncoding_; }
  field::LastMsgSeqNumProcessed& lastMsgSeqNumProcessed() { return lastMsgSeqNumProcessed_; }
  group::HopsGroup& hopsGroup() { return hopsGroup_; }
  field::ConfirmReqID& confirmReqID() { return confirmReqID_; }
  field::ConfirmType& confirmType() { return confirmType_; }
  group::OrdersGroup1& ordersGroup1() { return ordersGroup1_; }
  field::AllocID& allocID() { return allocID_; }
  field::SecondaryAllocID& secondaryAllocID() { return secondaryAllocID_; }
  field::IndividualAllocID& individualAllocID() { return individualAllocID_; }
  field::TransactTime& transactTime() { return transactTime_; }
  field::AllocAccount& allocAccount() { return allocAccount_; }
  field::AllocAcctIDSource& allocAcctIDSource() { return allocAcctIDSource_; }
  field::AllocAccountType& allocAccountType() { return allocAccountType_; }
  field::Text& text() { return text_; }
  field::EncodedTextLen& encodedTextLen() { return encodedTextLen_; }
  field::EncodedText& encodedText() { return encodedText_; }
  field::SignatureLength& signatureLength() { return signatureLength_; }
  field::Signature& signature() { return signature_; }
  field::CheckSum& checkSum() { return checkSum_; }

 protected:
  AbstractField* mapField(int fldBeg) override;
  void writeUnmapped() override;
  AbstractField* msgType() override;
  int writeMapped() override;

 private:
  field::BeginString beginString_{this};
  field::BodyLength bodyLength_{this};
  field::MsgType msgType_{this};
  field::SenderCompID senderCompID_{this};
  field::TargetCompID targetCompID_{this};
  field::OnBehalfOfCompID onBehalfOfCompID_{this};
  field::DeliverToCompID deliverToCompID_{this};
  field::SecureDataLen secureDataLen_{this};
  field::SecureData secureData_{this};
  field::MsgSeqNum msgSeqNum_{this};
  field::SenderSubID senderSubID_{this};
  field::SenderLocationID senderLocationID_{this};
  field::TargetSubID targetSubID_{this};
  field::TargetLocationID targetLocationID_{this};
  field::OnBehalfOfSubID onBehalfOfSubID_{this};
  field::OnBehalfOfLocationID onBehalfOfLocationID_{this};
  field::DeliverToSubID deliverToSubID_{this};
  field::DeliverToLocationID deliverToLocationID_{this};
  field::PossDupFlag possDupFlag_{this};
  field::PossResend possResend_{this};
  field::SendingTime sendingTime_{this};
  field::OrigSendingTime origSendingTime_{this};
  field::XmlDataLen xmlDataLen_{this};
  field::XmlData xmlData_{this};
  field::MessageEncoding messageEncoding_{this};
  field::LastMsgSeqNumProcessed lastMsgSeqNumProcessed_{this};
  group::HopsGroup hopsGroup_{this};
  field::ConfirmReqID confirmReqID_{this};
  field::ConfirmType confirmType_{this};
  group::OrdersGroup1 ordersGroup1_{this};
  field::AllocID allocID_{this};
  field::SecondaryAllocID secondaryAllocID_{this};
  field::IndividualAllocID individualAllocID_{this};
  field::TransactTime transactTime_{this};
  field::AllocAccount allocAccount_{this};
  field::AllocAcctIDSource allocAcctIDSource_{this};
  field::AllocAccountType allocAccountType_{this};
  field::Text text_{this};
  field::EncodedTextLen encodedTextLen_{this};
  field::EncodedText encodedText_{this};
  field::SignatureLength signatureLength_{this};
  field::Signature signature_{this};
  field::CheckSum checkSum_{this};
  AbstractField* slotFields_[42];
  AbstractGroup* slotGroups_[2];
};

}  // namespace fix::gen::message

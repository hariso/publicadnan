// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "quotes.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace quotes {

namespace {

const ::google::protobuf::Descriptor* Quote_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Quote_reflection_ = NULL;
const ::google::protobuf::Descriptor* QuoteList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QuoteList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_quotes_2eproto() {
  protobuf_AddDesc_quotes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "quotes.proto");
  GOOGLE_CHECK(file != NULL);
  Quote_descriptor_ = file->message_type(0);
  static const int Quote_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quote, price_),
  };
  Quote_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Quote_descriptor_,
      Quote::default_instance_,
      Quote_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quote, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quote, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Quote));
  QuoteList_descriptor_ = file->message_type(1);
  static const int QuoteList_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuoteList, price_),
  };
  QuoteList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      QuoteList_descriptor_,
      QuoteList::default_instance_,
      QuoteList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuoteList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuoteList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(QuoteList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_quotes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Quote_descriptor_, &Quote::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    QuoteList_descriptor_, &QuoteList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_quotes_2eproto() {
  delete Quote::default_instance_;
  delete Quote_reflection_;
  delete QuoteList::default_instance_;
  delete QuoteList_reflection_;
}

void protobuf_AddDesc_quotes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014quotes.proto\022\006quotes\"\026\n\005Quote\022\r\n\005price"
    "\030\001 \002(\001\")\n\tQuoteList\022\034\n\005price\030\001 \003(\0132\r.quo"
    "tes.Quote", 89);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "quotes.proto", &protobuf_RegisterTypes);
  Quote::default_instance_ = new Quote();
  QuoteList::default_instance_ = new QuoteList();
  Quote::default_instance_->InitAsDefaultInstance();
  QuoteList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_quotes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_quotes_2eproto {
  StaticDescriptorInitializer_quotes_2eproto() {
    protobuf_AddDesc_quotes_2eproto();
  }
} static_descriptor_initializer_quotes_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Quote::kPriceFieldNumber;
#endif  // !_MSC_VER

Quote::Quote()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Quote::InitAsDefaultInstance() {
}

Quote::Quote(const Quote& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Quote::SharedCtor() {
  _cached_size_ = 0;
  price_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Quote::~Quote() {
  SharedDtor();
}

void Quote::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Quote::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Quote::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Quote_descriptor_;
}

const Quote& Quote::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_quotes_2eproto();  return *default_instance_;
}

Quote* Quote::default_instance_ = NULL;

Quote* Quote::New() const {
  return new Quote;
}

void Quote::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    price_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Quote::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double price = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &price_)));
          set_has_price();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Quote::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required double price = 1;
  if (has_price()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->price(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Quote::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required double price = 1;
  if (has_price()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->price(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Quote::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required double price = 1;
    if (has_price()) {
      total_size += 1 + 8;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Quote::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Quote* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Quote*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Quote::MergeFrom(const Quote& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_price()) {
      set_price(from.price());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Quote::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Quote::CopyFrom(const Quote& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Quote::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void Quote::Swap(Quote* other) {
  if (other != this) {
    std::swap(price_, other->price_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Quote::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Quote_descriptor_;
  metadata.reflection = Quote_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int QuoteList::kPriceFieldNumber;
#endif  // !_MSC_VER

QuoteList::QuoteList()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void QuoteList::InitAsDefaultInstance() {
}

QuoteList::QuoteList(const QuoteList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void QuoteList::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QuoteList::~QuoteList() {
  SharedDtor();
}

void QuoteList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void QuoteList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QuoteList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QuoteList_descriptor_;
}

const QuoteList& QuoteList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_quotes_2eproto();  return *default_instance_;
}

QuoteList* QuoteList::default_instance_ = NULL;

QuoteList* QuoteList::New() const {
  return new QuoteList;
}

void QuoteList::Clear() {
  price_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool QuoteList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .quotes.Quote price = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_price:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_price()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_price;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void QuoteList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .quotes.Quote price = 1;
  for (int i = 0; i < this->price_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->price(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* QuoteList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .quotes.Quote price = 1;
  for (int i = 0; i < this->price_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->price(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int QuoteList::ByteSize() const {
  int total_size = 0;
  
  // repeated .quotes.Quote price = 1;
  total_size += 1 * this->price_size();
  for (int i = 0; i < this->price_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->price(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QuoteList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const QuoteList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const QuoteList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void QuoteList::MergeFrom(const QuoteList& from) {
  GOOGLE_CHECK_NE(&from, this);
  price_.MergeFrom(from.price_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void QuoteList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QuoteList::CopyFrom(const QuoteList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QuoteList::IsInitialized() const {
  
  for (int i = 0; i < price_size(); i++) {
    if (!this->price(i).IsInitialized()) return false;
  }
  return true;
}

void QuoteList::Swap(QuoteList* other) {
  if (other != this) {
    price_.Swap(&other->price_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata QuoteList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QuoteList_descriptor_;
  metadata.reflection = QuoteList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace quotes

// @@protoc_insertion_point(global_scope)

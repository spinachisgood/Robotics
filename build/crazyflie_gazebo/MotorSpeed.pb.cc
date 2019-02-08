// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MotorSpeed.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MotorSpeed.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gz_mav_msgs {

namespace {

const ::google::protobuf::Descriptor* MotorSpeed_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MotorSpeed_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MotorSpeed_2eproto() {
  protobuf_AddDesc_MotorSpeed_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MotorSpeed.proto");
  GOOGLE_CHECK(file != NULL);
  MotorSpeed_descriptor_ = file->message_type(0);
  static const int MotorSpeed_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotorSpeed, motor_speed_),
  };
  MotorSpeed_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MotorSpeed_descriptor_,
      MotorSpeed::default_instance_,
      MotorSpeed_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotorSpeed, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotorSpeed, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MotorSpeed));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MotorSpeed_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MotorSpeed_descriptor_, &MotorSpeed::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MotorSpeed_2eproto() {
  delete MotorSpeed::default_instance_;
  delete MotorSpeed_reflection_;
}

void protobuf_AddDesc_MotorSpeed_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020MotorSpeed.proto\022\013gz_mav_msgs\"%\n\nMotor"
    "Speed\022\027\n\013motor_speed\030\001 \003(\002B\002\020\001", 70);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MotorSpeed.proto", &protobuf_RegisterTypes);
  MotorSpeed::default_instance_ = new MotorSpeed();
  MotorSpeed::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MotorSpeed_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MotorSpeed_2eproto {
  StaticDescriptorInitializer_MotorSpeed_2eproto() {
    protobuf_AddDesc_MotorSpeed_2eproto();
  }
} static_descriptor_initializer_MotorSpeed_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MotorSpeed::kMotorSpeedFieldNumber;
#endif  // !_MSC_VER

MotorSpeed::MotorSpeed()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz_mav_msgs.MotorSpeed)
}

void MotorSpeed::InitAsDefaultInstance() {
}

MotorSpeed::MotorSpeed(const MotorSpeed& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gz_mav_msgs.MotorSpeed)
}

void MotorSpeed::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MotorSpeed::~MotorSpeed() {
  // @@protoc_insertion_point(destructor:gz_mav_msgs.MotorSpeed)
  SharedDtor();
}

void MotorSpeed::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MotorSpeed::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MotorSpeed::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MotorSpeed_descriptor_;
}

const MotorSpeed& MotorSpeed::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MotorSpeed_2eproto();
  return *default_instance_;
}

MotorSpeed* MotorSpeed::default_instance_ = NULL;

MotorSpeed* MotorSpeed::New() const {
  return new MotorSpeed;
}

void MotorSpeed::Clear() {
  motor_speed_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MotorSpeed::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz_mav_msgs.MotorSpeed)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated float motor_speed = 1 [packed = true];
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_motor_speed())));
        } else if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 10, input, this->mutable_motor_speed())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gz_mav_msgs.MotorSpeed)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz_mav_msgs.MotorSpeed)
  return false;
#undef DO_
}

void MotorSpeed::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz_mav_msgs.MotorSpeed)
  // repeated float motor_speed = 1 [packed = true];
  if (this->motor_speed_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_motor_speed_cached_byte_size_);
  }
  for (int i = 0; i < this->motor_speed_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->motor_speed(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gz_mav_msgs.MotorSpeed)
}

::google::protobuf::uint8* MotorSpeed::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gz_mav_msgs.MotorSpeed)
  // repeated float motor_speed = 1 [packed = true];
  if (this->motor_speed_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _motor_speed_cached_byte_size_, target);
  }
  for (int i = 0; i < this->motor_speed_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->motor_speed(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz_mav_msgs.MotorSpeed)
  return target;
}

int MotorSpeed::ByteSize() const {
  int total_size = 0;

  // repeated float motor_speed = 1 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->motor_speed_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _motor_speed_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
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

void MotorSpeed::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MotorSpeed* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MotorSpeed*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MotorSpeed::MergeFrom(const MotorSpeed& from) {
  GOOGLE_CHECK_NE(&from, this);
  motor_speed_.MergeFrom(from.motor_speed_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MotorSpeed::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MotorSpeed::CopyFrom(const MotorSpeed& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MotorSpeed::IsInitialized() const {

  return true;
}

void MotorSpeed::Swap(MotorSpeed* other) {
  if (other != this) {
    motor_speed_.Swap(&other->motor_speed_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MotorSpeed::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MotorSpeed_descriptor_;
  metadata.reflection = MotorSpeed_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_mav_msgs

// @@protoc_insertion_point(global_scope)
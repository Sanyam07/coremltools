// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Identity.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Identity.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace CoreML {
namespace Specification {
class IdentityDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Identity> {
} _Identity_default_instance_;

namespace protobuf_Identity_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};


void TableStruct::Shutdown() {
  _Identity_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Identity_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

}  // namespace protobuf_Identity_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Identity::Identity()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_Identity_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:CoreML.Specification.Identity)
}
Identity::Identity(const Identity& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:CoreML.Specification.Identity)
}

void Identity::SharedCtor() {
  _cached_size_ = 0;
}

Identity::~Identity() {
  // @@protoc_insertion_point(destructor:CoreML.Specification.Identity)
  SharedDtor();
}

void Identity::SharedDtor() {
}

void Identity::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Identity& Identity::default_instance() {
  protobuf_Identity_2eproto::InitDefaults();
  return *internal_default_instance();
}

Identity* Identity::New(::google::protobuf::Arena* arena) const {
  Identity* n = new Identity;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Identity::Clear() {
// @@protoc_insertion_point(message_clear_start:CoreML.Specification.Identity)
}

bool Identity::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CoreML.Specification.Identity)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:CoreML.Specification.Identity)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CoreML.Specification.Identity)
  return false;
#undef DO_
}

void Identity::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CoreML.Specification.Identity)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // @@protoc_insertion_point(serialize_end:CoreML.Specification.Identity)
}

size_t Identity::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CoreML.Specification.Identity)
  size_t total_size = 0;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Identity::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Identity*>(&from));
}

void Identity::MergeFrom(const Identity& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CoreML.Specification.Identity)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void Identity::CopyFrom(const Identity& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CoreML.Specification.Identity)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Identity::IsInitialized() const {
  return true;
}

void Identity::Swap(Identity* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Identity::InternalSwap(Identity* other) {
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string Identity::GetTypeName() const {
  return "CoreML.Specification.Identity";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Identity

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: image_service.proto

#include "image_service.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace image_service {
constexpr ImageRequest::ImageRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : x_(0)
  , y_(0){}
struct ImageRequestDefaultTypeInternal {
  constexpr ImageRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ImageRequestDefaultTypeInternal() {}
  union {
    ImageRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ImageRequestDefaultTypeInternal _ImageRequest_default_instance_;
constexpr ImageResponse::ImageResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : image_data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct ImageResponseDefaultTypeInternal {
  constexpr ImageResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ImageResponseDefaultTypeInternal() {}
  union {
    ImageResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ImageResponseDefaultTypeInternal _ImageResponse_default_instance_;
}  // namespace image_service
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_image_5fservice_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_image_5fservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_image_5fservice_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_image_5fservice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::image_service::ImageRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::image_service::ImageRequest, x_),
  PROTOBUF_FIELD_OFFSET(::image_service::ImageRequest, y_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::image_service::ImageResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::image_service::ImageResponse, image_data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::image_service::ImageRequest)},
  { 8, -1, -1, sizeof(::image_service::ImageResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::image_service::_ImageRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::image_service::_ImageResponse_default_instance_),
};

const char descriptor_table_protodef_image_5fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023image_service.proto\022\rimage_service\"$\n\014"
  "ImageRequest\022\t\n\001x\030\001 \001(\005\022\t\n\001y\030\002 \001(\005\"#\n\rIm"
  "ageResponse\022\022\n\nimage_data\030\001 \001(\0142U\n\014Image"
  "Service\022E\n\010GetImage\022\033.image_service.Imag"
  "eRequest\032\034.image_service.ImageResponseb\006"
  "proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_image_5fservice_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_image_5fservice_2eproto = {
  false, false, 206, descriptor_table_protodef_image_5fservice_2eproto, "image_service.proto", 
  &descriptor_table_image_5fservice_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_image_5fservice_2eproto::offsets,
  file_level_metadata_image_5fservice_2eproto, file_level_enum_descriptors_image_5fservice_2eproto, file_level_service_descriptors_image_5fservice_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_image_5fservice_2eproto_getter() {
  return &descriptor_table_image_5fservice_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_image_5fservice_2eproto(&descriptor_table_image_5fservice_2eproto);
namespace image_service {

// ===================================================================

class ImageRequest::_Internal {
 public:
};

ImageRequest::ImageRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:image_service.ImageRequest)
}
ImageRequest::ImageRequest(const ImageRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_)) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:image_service.ImageRequest)
}

void ImageRequest::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&x_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_)) + sizeof(y_));
}

ImageRequest::~ImageRequest() {
  // @@protoc_insertion_point(destructor:image_service.ImageRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ImageRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ImageRequest::ArenaDtor(void* object) {
  ImageRequest* _this = reinterpret_cast< ImageRequest* >(object);
  (void)_this;
}
void ImageRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ImageRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ImageRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:image_service.ImageRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ImageRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ImageRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:image_service.ImageRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 x = 1;
  if (this->_internal_x() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_x(), target);
  }

  // int32 y = 2;
  if (this->_internal_y() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_y(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:image_service.ImageRequest)
  return target;
}

size_t ImageRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:image_service.ImageRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 x = 1;
  if (this->_internal_x() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_x());
  }

  // int32 y = 2;
  if (this->_internal_y() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_y());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ImageRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ImageRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ImageRequest::GetClassData() const { return &_class_data_; }

void ImageRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ImageRequest *>(to)->MergeFrom(
      static_cast<const ImageRequest &>(from));
}


void ImageRequest::MergeFrom(const ImageRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:image_service.ImageRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_x() != 0) {
    _internal_set_x(from._internal_x());
  }
  if (from._internal_y() != 0) {
    _internal_set_y(from._internal_y());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ImageRequest::CopyFrom(const ImageRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:image_service.ImageRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImageRequest::IsInitialized() const {
  return true;
}

void ImageRequest::InternalSwap(ImageRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ImageRequest, y_)
      + sizeof(ImageRequest::y_)
      - PROTOBUF_FIELD_OFFSET(ImageRequest, x_)>(
          reinterpret_cast<char*>(&x_),
          reinterpret_cast<char*>(&other->x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ImageRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_image_5fservice_2eproto_getter, &descriptor_table_image_5fservice_2eproto_once,
      file_level_metadata_image_5fservice_2eproto[0]);
}

// ===================================================================

class ImageResponse::_Internal {
 public:
};

ImageResponse::ImageResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:image_service.ImageResponse)
}
ImageResponse::ImageResponse(const ImageResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  image_data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_image_data().empty()) {
    image_data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_image_data(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:image_service.ImageResponse)
}

void ImageResponse::SharedCtor() {
image_data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ImageResponse::~ImageResponse() {
  // @@protoc_insertion_point(destructor:image_service.ImageResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ImageResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  image_data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ImageResponse::ArenaDtor(void* object) {
  ImageResponse* _this = reinterpret_cast< ImageResponse* >(object);
  (void)_this;
}
void ImageResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ImageResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ImageResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:image_service.ImageResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  image_data_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ImageResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes image_data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_image_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ImageResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:image_service.ImageResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes image_data = 1;
  if (!this->_internal_image_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_image_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:image_service.ImageResponse)
  return target;
}

size_t ImageResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:image_service.ImageResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes image_data = 1;
  if (!this->_internal_image_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_image_data());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ImageResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ImageResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ImageResponse::GetClassData() const { return &_class_data_; }

void ImageResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ImageResponse *>(to)->MergeFrom(
      static_cast<const ImageResponse &>(from));
}


void ImageResponse::MergeFrom(const ImageResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:image_service.ImageResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_image_data().empty()) {
    _internal_set_image_data(from._internal_image_data());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ImageResponse::CopyFrom(const ImageResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:image_service.ImageResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImageResponse::IsInitialized() const {
  return true;
}

void ImageResponse::InternalSwap(ImageResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &image_data_, lhs_arena,
      &other->image_data_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata ImageResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_image_5fservice_2eproto_getter, &descriptor_table_image_5fservice_2eproto_once,
      file_level_metadata_image_5fservice_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace image_service
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::image_service::ImageRequest* Arena::CreateMaybeMessage< ::image_service::ImageRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::image_service::ImageRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::image_service::ImageResponse* Arena::CreateMaybeMessage< ::image_service::ImageResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::image_service::ImageResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

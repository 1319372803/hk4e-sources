// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cmd/cmd_op_activity.proto

#ifndef PROTOBUF_cmd_2fcmd_5fop_5factivity_2eproto__INCLUDED
#define PROTOBUF_cmd_2fcmd_5fop_5factivity_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace proto {
class BonusOpActivityInfo;
class BonusOpActivityInfoDefaultTypeInternal;
extern BonusOpActivityInfoDefaultTypeInternal _BonusOpActivityInfo_default_instance_;
class GetOpActivityInfoReq;
class GetOpActivityInfoReqDefaultTypeInternal;
extern GetOpActivityInfoReqDefaultTypeInternal _GetOpActivityInfoReq_default_instance_;
class GetOpActivityInfoRsp;
class GetOpActivityInfoRspDefaultTypeInternal;
extern GetOpActivityInfoRspDefaultTypeInternal _GetOpActivityInfoRsp_default_instance_;
class OpActivityDataNotify;
class OpActivityDataNotifyDefaultTypeInternal;
extern OpActivityDataNotifyDefaultTypeInternal _OpActivityDataNotify_default_instance_;
class OpActivityInfo;
class OpActivityInfoDefaultTypeInternal;
extern OpActivityInfoDefaultTypeInternal _OpActivityInfo_default_instance_;
class OpActivityUpdateNotify;
class OpActivityUpdateNotifyDefaultTypeInternal;
extern OpActivityUpdateNotifyDefaultTypeInternal _OpActivityUpdateNotify_default_instance_;
}  // namespace proto

namespace proto {

namespace protobuf_cmd_2fcmd_5fop_5factivity_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cmd_2fcmd_5fop_5factivity_2eproto

// ===================================================================

class OpActivityInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.OpActivityInfo) */ {
 public:
  OpActivityInfo();
  virtual ~OpActivityInfo();

  OpActivityInfo(const OpActivityInfo& from);

  inline OpActivityInfo& operator=(const OpActivityInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OpActivityInfo(OpActivityInfo&& from) noexcept
    : OpActivityInfo() {
    *this = ::std::move(from);
  }

  inline OpActivityInfo& operator=(OpActivityInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const OpActivityInfo& default_instance();

  enum DetailCase {
    kBonusInfo = 12,
    DETAIL_NOT_SET = 0,
  };

  static inline const OpActivityInfo* internal_default_instance() {
    return reinterpret_cast<const OpActivityInfo*>(
               &_OpActivityInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(OpActivityInfo* other);
  friend void swap(OpActivityInfo& a, OpActivityInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OpActivityInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  OpActivityInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OpActivityInfo& from);
  void MergeFrom(const OpActivityInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OpActivityInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bool is_has_change = 1;
  void clear_is_has_change();
  static const int kIsHasChangeFieldNumber = 1;
  bool is_has_change() const;
  void set_is_has_change(bool value);

  // uint32 activity_id = 2;
  void clear_activity_id();
  static const int kActivityIdFieldNumber = 2;
  ::google::protobuf::uint32 activity_id() const;
  void set_activity_id(::google::protobuf::uint32 value);

  // uint32 begin_time = 5;
  void clear_begin_time();
  static const int kBeginTimeFieldNumber = 5;
  ::google::protobuf::uint32 begin_time() const;
  void set_begin_time(::google::protobuf::uint32 value);

  // uint32 end_time = 6;
  void clear_end_time();
  static const int kEndTimeFieldNumber = 6;
  ::google::protobuf::uint32 end_time() const;
  void set_end_time(::google::protobuf::uint32 value);

  // uint32 schedule_id = 13;
  void clear_schedule_id();
  static const int kScheduleIdFieldNumber = 13;
  ::google::protobuf::uint32 schedule_id() const;
  void set_schedule_id(::google::protobuf::uint32 value);

  // .proto.BonusOpActivityInfo bonus_info = 12;
  bool has_bonus_info() const;
  void clear_bonus_info();
  static const int kBonusInfoFieldNumber = 12;
  const ::proto::BonusOpActivityInfo& bonus_info() const;
  ::proto::BonusOpActivityInfo* mutable_bonus_info();
  ::proto::BonusOpActivityInfo* release_bonus_info();
  void set_allocated_bonus_info(::proto::BonusOpActivityInfo* bonus_info);

  DetailCase detail_case() const;
  // @@protoc_insertion_point(class_scope:proto.OpActivityInfo)
 private:
  void set_has_bonus_info();

  inline bool has_detail() const;
  void clear_detail();
  inline void clear_has_detail();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool is_has_change_;
  ::google::protobuf::uint32 activity_id_;
  ::google::protobuf::uint32 begin_time_;
  ::google::protobuf::uint32 end_time_;
  ::google::protobuf::uint32 schedule_id_;
  union DetailUnion {
    DetailUnion() {}
    ::proto::BonusOpActivityInfo* bonus_info_;
  } detail_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct protobuf_cmd_2fcmd_5fop_5factivity_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BonusOpActivityInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.BonusOpActivityInfo) */ {
 public:
  BonusOpActivityInfo();
  virtual ~BonusOpActivityInfo();

  BonusOpActivityInfo(const BonusOpActivityInfo& from);

  inline BonusOpActivityInfo& operator=(const BonusOpActivityInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BonusOpActivityInfo(BonusOpActivityInfo&& from) noexcept
    : BonusOpActivityInfo() {
    *this = ::std::move(from);
  }

  inline BonusOpActivityInfo& operator=(BonusOpActivityInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BonusOpActivityInfo& default_instance();

  static inline const BonusOpActivityInfo* internal_default_instance() {
    return reinterpret_cast<const BonusOpActivityInfo*>(
               &_BonusOpActivityInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(BonusOpActivityInfo* other);
  friend void swap(BonusOpActivityInfo& a, BonusOpActivityInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BonusOpActivityInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  BonusOpActivityInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BonusOpActivityInfo& from);
  void MergeFrom(const BonusOpActivityInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(BonusOpActivityInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 left_bonus_count = 11;
  void clear_left_bonus_count();
  static const int kLeftBonusCountFieldNumber = 11;
  ::google::protobuf::uint32 left_bonus_count() const;
  void set_left_bonus_count(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proto.BonusOpActivityInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 left_bonus_count_;
  mutable int _cached_size_;
  friend struct protobuf_cmd_2fcmd_5fop_5factivity_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetOpActivityInfoReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.GetOpActivityInfoReq) */ {
 public:
  GetOpActivityInfoReq();
  virtual ~GetOpActivityInfoReq();

  GetOpActivityInfoReq(const GetOpActivityInfoReq& from);

  inline GetOpActivityInfoReq& operator=(const GetOpActivityInfoReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetOpActivityInfoReq(GetOpActivityInfoReq&& from) noexcept
    : GetOpActivityInfoReq() {
    *this = ::std::move(from);
  }

  inline GetOpActivityInfoReq& operator=(GetOpActivityInfoReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetOpActivityInfoReq& default_instance();

  static inline const GetOpActivityInfoReq* internal_default_instance() {
    return reinterpret_cast<const GetOpActivityInfoReq*>(
               &_GetOpActivityInfoReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(GetOpActivityInfoReq* other);
  friend void swap(GetOpActivityInfoReq& a, GetOpActivityInfoReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetOpActivityInfoReq* New() const PROTOBUF_FINAL { return New(NULL); }

  GetOpActivityInfoReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GetOpActivityInfoReq& from);
  void MergeFrom(const GetOpActivityInfoReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GetOpActivityInfoReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:proto.GetOpActivityInfoReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend struct protobuf_cmd_2fcmd_5fop_5factivity_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetOpActivityInfoRsp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.GetOpActivityInfoRsp) */ {
 public:
  GetOpActivityInfoRsp();
  virtual ~GetOpActivityInfoRsp();

  GetOpActivityInfoRsp(const GetOpActivityInfoRsp& from);

  inline GetOpActivityInfoRsp& operator=(const GetOpActivityInfoRsp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetOpActivityInfoRsp(GetOpActivityInfoRsp&& from) noexcept
    : GetOpActivityInfoRsp() {
    *this = ::std::move(from);
  }

  inline GetOpActivityInfoRsp& operator=(GetOpActivityInfoRsp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetOpActivityInfoRsp& default_instance();

  static inline const GetOpActivityInfoRsp* internal_default_instance() {
    return reinterpret_cast<const GetOpActivityInfoRsp*>(
               &_GetOpActivityInfoRsp_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(GetOpActivityInfoRsp* other);
  friend void swap(GetOpActivityInfoRsp& a, GetOpActivityInfoRsp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetOpActivityInfoRsp* New() const PROTOBUF_FINAL { return New(NULL); }

  GetOpActivityInfoRsp* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GetOpActivityInfoRsp& from);
  void MergeFrom(const GetOpActivityInfoRsp& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GetOpActivityInfoRsp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .proto.OpActivityInfo op_activity_info_list = 7;
  int op_activity_info_list_size() const;
  void clear_op_activity_info_list();
  static const int kOpActivityInfoListFieldNumber = 7;
  const ::proto::OpActivityInfo& op_activity_info_list(int index) const;
  ::proto::OpActivityInfo* mutable_op_activity_info_list(int index);
  ::proto::OpActivityInfo* add_op_activity_info_list();
  ::google::protobuf::RepeatedPtrField< ::proto::OpActivityInfo >*
      mutable_op_activity_info_list();
  const ::google::protobuf::RepeatedPtrField< ::proto::OpActivityInfo >&
      op_activity_info_list() const;

  // int32 retcode = 10;
  void clear_retcode();
  static const int kRetcodeFieldNumber = 10;
  ::google::protobuf::int32 retcode() const;
  void set_retcode(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto.GetOpActivityInfoRsp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::proto::OpActivityInfo > op_activity_info_list_;
  ::google::protobuf::int32 retcode_;
  mutable int _cached_size_;
  friend struct protobuf_cmd_2fcmd_5fop_5factivity_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class OpActivityDataNotify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.OpActivityDataNotify) */ {
 public:
  OpActivityDataNotify();
  virtual ~OpActivityDataNotify();

  OpActivityDataNotify(const OpActivityDataNotify& from);

  inline OpActivityDataNotify& operator=(const OpActivityDataNotify& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OpActivityDataNotify(OpActivityDataNotify&& from) noexcept
    : OpActivityDataNotify() {
    *this = ::std::move(from);
  }

  inline OpActivityDataNotify& operator=(OpActivityDataNotify&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const OpActivityDataNotify& default_instance();

  static inline const OpActivityDataNotify* internal_default_instance() {
    return reinterpret_cast<const OpActivityDataNotify*>(
               &_OpActivityDataNotify_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(OpActivityDataNotify* other);
  friend void swap(OpActivityDataNotify& a, OpActivityDataNotify& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OpActivityDataNotify* New() const PROTOBUF_FINAL { return New(NULL); }

  OpActivityDataNotify* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OpActivityDataNotify& from);
  void MergeFrom(const OpActivityDataNotify& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OpActivityDataNotify* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .proto.OpActivityInfo op_activity_info_list = 15;
  int op_activity_info_list_size() const;
  void clear_op_activity_info_list();
  static const int kOpActivityInfoListFieldNumber = 15;
  const ::proto::OpActivityInfo& op_activity_info_list(int index) const;
  ::proto::OpActivityInfo* mutable_op_activity_info_list(int index);
  ::proto::OpActivityInfo* add_op_activity_info_list();
  ::google::protobuf::RepeatedPtrField< ::proto::OpActivityInfo >*
      mutable_op_activity_info_list();
  const ::google::protobuf::RepeatedPtrField< ::proto::OpActivityInfo >&
      op_activity_info_list() const;

  // @@protoc_insertion_point(class_scope:proto.OpActivityDataNotify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::proto::OpActivityInfo > op_activity_info_list_;
  mutable int _cached_size_;
  friend struct protobuf_cmd_2fcmd_5fop_5factivity_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class OpActivityUpdateNotify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.OpActivityUpdateNotify) */ {
 public:
  OpActivityUpdateNotify();
  virtual ~OpActivityUpdateNotify();

  OpActivityUpdateNotify(const OpActivityUpdateNotify& from);

  inline OpActivityUpdateNotify& operator=(const OpActivityUpdateNotify& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OpActivityUpdateNotify(OpActivityUpdateNotify&& from) noexcept
    : OpActivityUpdateNotify() {
    *this = ::std::move(from);
  }

  inline OpActivityUpdateNotify& operator=(OpActivityUpdateNotify&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const OpActivityUpdateNotify& default_instance();

  static inline const OpActivityUpdateNotify* internal_default_instance() {
    return reinterpret_cast<const OpActivityUpdateNotify*>(
               &_OpActivityUpdateNotify_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(OpActivityUpdateNotify* other);
  friend void swap(OpActivityUpdateNotify& a, OpActivityUpdateNotify& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OpActivityUpdateNotify* New() const PROTOBUF_FINAL { return New(NULL); }

  OpActivityUpdateNotify* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OpActivityUpdateNotify& from);
  void MergeFrom(const OpActivityUpdateNotify& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OpActivityUpdateNotify* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .proto.OpActivityInfo op_activity_info = 6;
  bool has_op_activity_info() const;
  void clear_op_activity_info();
  static const int kOpActivityInfoFieldNumber = 6;
  const ::proto::OpActivityInfo& op_activity_info() const;
  ::proto::OpActivityInfo* mutable_op_activity_info();
  ::proto::OpActivityInfo* release_op_activity_info();
  void set_allocated_op_activity_info(::proto::OpActivityInfo* op_activity_info);

  // @@protoc_insertion_point(class_scope:proto.OpActivityUpdateNotify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::proto::OpActivityInfo* op_activity_info_;
  mutable int _cached_size_;
  friend struct protobuf_cmd_2fcmd_5fop_5factivity_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OpActivityInfo

// uint32 activity_id = 2;
inline void OpActivityInfo::clear_activity_id() {
  activity_id_ = 0u;
}
inline ::google::protobuf::uint32 OpActivityInfo::activity_id() const {
  // @@protoc_insertion_point(field_get:proto.OpActivityInfo.activity_id)
  return activity_id_;
}
inline void OpActivityInfo::set_activity_id(::google::protobuf::uint32 value) {
  
  activity_id_ = value;
  // @@protoc_insertion_point(field_set:proto.OpActivityInfo.activity_id)
}

// uint32 end_time = 6;
inline void OpActivityInfo::clear_end_time() {
  end_time_ = 0u;
}
inline ::google::protobuf::uint32 OpActivityInfo::end_time() const {
  // @@protoc_insertion_point(field_get:proto.OpActivityInfo.end_time)
  return end_time_;
}
inline void OpActivityInfo::set_end_time(::google::protobuf::uint32 value) {
  
  end_time_ = value;
  // @@protoc_insertion_point(field_set:proto.OpActivityInfo.end_time)
}

// uint32 begin_time = 5;
inline void OpActivityInfo::clear_begin_time() {
  begin_time_ = 0u;
}
inline ::google::protobuf::uint32 OpActivityInfo::begin_time() const {
  // @@protoc_insertion_point(field_get:proto.OpActivityInfo.begin_time)
  return begin_time_;
}
inline void OpActivityInfo::set_begin_time(::google::protobuf::uint32 value) {
  
  begin_time_ = value;
  // @@protoc_insertion_point(field_set:proto.OpActivityInfo.begin_time)
}

// bool is_has_change = 1;
inline void OpActivityInfo::clear_is_has_change() {
  is_has_change_ = false;
}
inline bool OpActivityInfo::is_has_change() const {
  // @@protoc_insertion_point(field_get:proto.OpActivityInfo.is_has_change)
  return is_has_change_;
}
inline void OpActivityInfo::set_is_has_change(bool value) {
  
  is_has_change_ = value;
  // @@protoc_insertion_point(field_set:proto.OpActivityInfo.is_has_change)
}

// uint32 schedule_id = 13;
inline void OpActivityInfo::clear_schedule_id() {
  schedule_id_ = 0u;
}
inline ::google::protobuf::uint32 OpActivityInfo::schedule_id() const {
  // @@protoc_insertion_point(field_get:proto.OpActivityInfo.schedule_id)
  return schedule_id_;
}
inline void OpActivityInfo::set_schedule_id(::google::protobuf::uint32 value) {
  
  schedule_id_ = value;
  // @@protoc_insertion_point(field_set:proto.OpActivityInfo.schedule_id)
}

// .proto.BonusOpActivityInfo bonus_info = 12;
inline bool OpActivityInfo::has_bonus_info() const {
  return detail_case() == kBonusInfo;
}
inline void OpActivityInfo::set_has_bonus_info() {
  _oneof_case_[0] = kBonusInfo;
}
inline void OpActivityInfo::clear_bonus_info() {
  if (has_bonus_info()) {
    delete detail_.bonus_info_;
    clear_has_detail();
  }
}
inline  const ::proto::BonusOpActivityInfo& OpActivityInfo::bonus_info() const {
  // @@protoc_insertion_point(field_get:proto.OpActivityInfo.bonus_info)
  return has_bonus_info()
      ? *detail_.bonus_info_
      : ::proto::BonusOpActivityInfo::default_instance();
}
inline ::proto::BonusOpActivityInfo* OpActivityInfo::mutable_bonus_info() {
  if (!has_bonus_info()) {
    clear_detail();
    set_has_bonus_info();
    detail_.bonus_info_ = new ::proto::BonusOpActivityInfo;
  }
  // @@protoc_insertion_point(field_mutable:proto.OpActivityInfo.bonus_info)
  return detail_.bonus_info_;
}
inline ::proto::BonusOpActivityInfo* OpActivityInfo::release_bonus_info() {
  // @@protoc_insertion_point(field_release:proto.OpActivityInfo.bonus_info)
  if (has_bonus_info()) {
    clear_has_detail();
    ::proto::BonusOpActivityInfo* temp = detail_.bonus_info_;
    detail_.bonus_info_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void OpActivityInfo::set_allocated_bonus_info(::proto::BonusOpActivityInfo* bonus_info) {
  clear_detail();
  if (bonus_info) {
    set_has_bonus_info();
    detail_.bonus_info_ = bonus_info;
  }
  // @@protoc_insertion_point(field_set_allocated:proto.OpActivityInfo.bonus_info)
}

inline bool OpActivityInfo::has_detail() const {
  return detail_case() != DETAIL_NOT_SET;
}
inline void OpActivityInfo::clear_has_detail() {
  _oneof_case_[0] = DETAIL_NOT_SET;
}
inline OpActivityInfo::DetailCase OpActivityInfo::detail_case() const {
  return OpActivityInfo::DetailCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// BonusOpActivityInfo

// uint32 left_bonus_count = 11;
inline void BonusOpActivityInfo::clear_left_bonus_count() {
  left_bonus_count_ = 0u;
}
inline ::google::protobuf::uint32 BonusOpActivityInfo::left_bonus_count() const {
  // @@protoc_insertion_point(field_get:proto.BonusOpActivityInfo.left_bonus_count)
  return left_bonus_count_;
}
inline void BonusOpActivityInfo::set_left_bonus_count(::google::protobuf::uint32 value) {
  
  left_bonus_count_ = value;
  // @@protoc_insertion_point(field_set:proto.BonusOpActivityInfo.left_bonus_count)
}

// -------------------------------------------------------------------

// GetOpActivityInfoReq

// -------------------------------------------------------------------

// GetOpActivityInfoRsp

// int32 retcode = 10;
inline void GetOpActivityInfoRsp::clear_retcode() {
  retcode_ = 0;
}
inline ::google::protobuf::int32 GetOpActivityInfoRsp::retcode() const {
  // @@protoc_insertion_point(field_get:proto.GetOpActivityInfoRsp.retcode)
  return retcode_;
}
inline void GetOpActivityInfoRsp::set_retcode(::google::protobuf::int32 value) {
  
  retcode_ = value;
  // @@protoc_insertion_point(field_set:proto.GetOpActivityInfoRsp.retcode)
}

// repeated .proto.OpActivityInfo op_activity_info_list = 7;
inline int GetOpActivityInfoRsp::op_activity_info_list_size() const {
  return op_activity_info_list_.size();
}
inline void GetOpActivityInfoRsp::clear_op_activity_info_list() {
  op_activity_info_list_.Clear();
}
inline const ::proto::OpActivityInfo& GetOpActivityInfoRsp::op_activity_info_list(int index) const {
  // @@protoc_insertion_point(field_get:proto.GetOpActivityInfoRsp.op_activity_info_list)
  return op_activity_info_list_.Get(index);
}
inline ::proto::OpActivityInfo* GetOpActivityInfoRsp::mutable_op_activity_info_list(int index) {
  // @@protoc_insertion_point(field_mutable:proto.GetOpActivityInfoRsp.op_activity_info_list)
  return op_activity_info_list_.Mutable(index);
}
inline ::proto::OpActivityInfo* GetOpActivityInfoRsp::add_op_activity_info_list() {
  // @@protoc_insertion_point(field_add:proto.GetOpActivityInfoRsp.op_activity_info_list)
  return op_activity_info_list_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::proto::OpActivityInfo >*
GetOpActivityInfoRsp::mutable_op_activity_info_list() {
  // @@protoc_insertion_point(field_mutable_list:proto.GetOpActivityInfoRsp.op_activity_info_list)
  return &op_activity_info_list_;
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::OpActivityInfo >&
GetOpActivityInfoRsp::op_activity_info_list() const {
  // @@protoc_insertion_point(field_list:proto.GetOpActivityInfoRsp.op_activity_info_list)
  return op_activity_info_list_;
}

// -------------------------------------------------------------------

// OpActivityDataNotify

// repeated .proto.OpActivityInfo op_activity_info_list = 15;
inline int OpActivityDataNotify::op_activity_info_list_size() const {
  return op_activity_info_list_.size();
}
inline void OpActivityDataNotify::clear_op_activity_info_list() {
  op_activity_info_list_.Clear();
}
inline const ::proto::OpActivityInfo& OpActivityDataNotify::op_activity_info_list(int index) const {
  // @@protoc_insertion_point(field_get:proto.OpActivityDataNotify.op_activity_info_list)
  return op_activity_info_list_.Get(index);
}
inline ::proto::OpActivityInfo* OpActivityDataNotify::mutable_op_activity_info_list(int index) {
  // @@protoc_insertion_point(field_mutable:proto.OpActivityDataNotify.op_activity_info_list)
  return op_activity_info_list_.Mutable(index);
}
inline ::proto::OpActivityInfo* OpActivityDataNotify::add_op_activity_info_list() {
  // @@protoc_insertion_point(field_add:proto.OpActivityDataNotify.op_activity_info_list)
  return op_activity_info_list_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::proto::OpActivityInfo >*
OpActivityDataNotify::mutable_op_activity_info_list() {
  // @@protoc_insertion_point(field_mutable_list:proto.OpActivityDataNotify.op_activity_info_list)
  return &op_activity_info_list_;
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::OpActivityInfo >&
OpActivityDataNotify::op_activity_info_list() const {
  // @@protoc_insertion_point(field_list:proto.OpActivityDataNotify.op_activity_info_list)
  return op_activity_info_list_;
}

// -------------------------------------------------------------------

// OpActivityUpdateNotify

// .proto.OpActivityInfo op_activity_info = 6;
inline bool OpActivityUpdateNotify::has_op_activity_info() const {
  return this != internal_default_instance() && op_activity_info_ != NULL;
}
inline void OpActivityUpdateNotify::clear_op_activity_info() {
  if (GetArenaNoVirtual() == NULL && op_activity_info_ != NULL) delete op_activity_info_;
  op_activity_info_ = NULL;
}
inline const ::proto::OpActivityInfo& OpActivityUpdateNotify::op_activity_info() const {
  const ::proto::OpActivityInfo* p = op_activity_info_;
  // @@protoc_insertion_point(field_get:proto.OpActivityUpdateNotify.op_activity_info)
  return p != NULL ? *p : *reinterpret_cast<const ::proto::OpActivityInfo*>(
      &::proto::_OpActivityInfo_default_instance_);
}
inline ::proto::OpActivityInfo* OpActivityUpdateNotify::mutable_op_activity_info() {
  
  if (op_activity_info_ == NULL) {
    op_activity_info_ = new ::proto::OpActivityInfo;
  }
  // @@protoc_insertion_point(field_mutable:proto.OpActivityUpdateNotify.op_activity_info)
  return op_activity_info_;
}
inline ::proto::OpActivityInfo* OpActivityUpdateNotify::release_op_activity_info() {
  // @@protoc_insertion_point(field_release:proto.OpActivityUpdateNotify.op_activity_info)
  
  ::proto::OpActivityInfo* temp = op_activity_info_;
  op_activity_info_ = NULL;
  return temp;
}
inline void OpActivityUpdateNotify::set_allocated_op_activity_info(::proto::OpActivityInfo* op_activity_info) {
  delete op_activity_info_;
  op_activity_info_ = op_activity_info;
  if (op_activity_info) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:proto.OpActivityUpdateNotify.op_activity_info)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cmd_2fcmd_5fop_5factivity_2eproto__INCLUDED

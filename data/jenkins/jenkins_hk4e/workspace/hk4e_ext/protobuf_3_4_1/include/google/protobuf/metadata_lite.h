// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/metadata_lite.h

// Line 56: range 000000001671AF8E-000000001671AFCC
void __cdecl google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::InternalMetadataWithArenaBase(
        google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *const this,
        google::protobuf::Arena *arena)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ptr_ = arena;
};

// Line 139: range 0000000016C2233E-0000000016C22377
google::protobuf::Arena *__cdecl google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::Arena>(
        const google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (google::protobuf::Arena *)((unsigned __int64)this->ptr_ & 0xFFFFFFFFFFFFFFFELL);
};

// Line 139: range 00000000169DCB04-00000000169DCB3D
google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *__cdecl google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(
        const google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)((unsigned __int64)this->ptr_ & 0xFFFFFFFFFFFFFFFELL);
};

// Line 145: range 0000000016D23C9A-0000000016D23CB4
void __cdecl google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container::Container(
        google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *const this)
{
  google::protobuf::UnknownFieldSet::UnknownFieldSet(&this->unknown_fields);
};

// Line 145: range 000000001671AF72-000000001671AF8C
void __cdecl google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container::~Container(
        google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *const this)
{
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(&this->unknown_fields);
};

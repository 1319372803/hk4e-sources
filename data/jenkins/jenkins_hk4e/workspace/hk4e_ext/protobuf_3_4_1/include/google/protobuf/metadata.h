// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/metadata.h

// Line 48: range 00000000165B75D4-00000000165B75EE
void __cdecl google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(
        google::protobuf::internal::InternalMetadataWithArena *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(this);
};

// Line 53: range 00000000165AB376-00000000165AB39B
void __cdecl google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(
        google::protobuf::internal::InternalMetadataWithArena *const this,
        google::protobuf::Arena *arena)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::InternalMetadataWithArenaBase(
    this,
    arena);
};

// Line 57: range 00000000165AB39C-00000000165AB433
void __cdecl google::protobuf::internal::InternalMetadataWithArena::DoSwap(
        google::protobuf::internal::InternalMetadataWithArena *const this,
        google::protobuf::UnknownFieldSet *other)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( ((__int64)this->ptr_ & 1) == 1 )
    v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(this);
  else
    v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(this);
  google::protobuf::UnknownFieldSet::Swap(&v2->unknown_fields, other);
};

// Line 61: range 00000000165AB434-00000000165AB4CB
void __cdecl google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(
        google::protobuf::internal::InternalMetadataWithArena *const this,
        const google::protobuf::UnknownFieldSet *other)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( ((__int64)this->ptr_ & 1) == 1 )
    v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(this);
  else
    v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(this);
  google::protobuf::UnknownFieldSet::MergeFrom(&v2->unknown_fields, other);
};

// Line 65: range 00000000165AB4CC-00000000165AB552
void __cdecl google::protobuf::internal::InternalMetadataWithArena::DoClear(
        google::protobuf::internal::InternalMetadataWithArena *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v1; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( ((__int64)this->ptr_ & 1) == 1 )
    v1 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(this);
  else
    v1 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(this);
  google::protobuf::UnknownFieldSet::Clear(&v1->unknown_fields);
};

// Line 69: range 00000000165AB553-00000000165AB55D
const google::protobuf::UnknownFieldSet *__cdecl google::protobuf::internal::InternalMetadataWithArena::default_instance()
{
  google::protobuf::UnknownFieldSet *v0; // rdi

  return (const google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::default_instance(v0);
};

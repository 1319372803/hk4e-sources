// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/unknown_field_set.h

// Line 266: range 000000000C72C058-000000000C72C06D
void __fastcall __noreturn google::protobuf::UnknownFieldSet::MergeFromCodedStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        google::protobuf::UnknownFieldSet a7)
{
  struct _Unwind_Exception *v7; // rbp

  if ( a7.fields_ )
    google::protobuf::UnknownFieldSet::ClearFallback(&a7);
  _Unwind_Resume(v7);
};

// Line 266: range 000000000C8AB300-000000000C8AB310
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(
        void *object)
{
  if ( *(_QWORD *)object )
    google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)object);
};

// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/atomicops_internals_x86_gcc.h

// Line 164: range 000000000C8B03E0-000000000C8B03E9
bool __fastcall google::protobuf::internal::MapFieldBase::IsMapValid(
        const google::protobuf::internal::MapFieldBase *const this)
{
  return this->state_ != 1;
};

// Line 164: range 000000000C8B0440-000000000C8B0450
void __fastcall google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(
        const google::protobuf::internal::MapFieldBase *const this)
{
  if ( this->state_ == 1 )
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
};

// Line 164: range 000000000C8B0420-000000000C8B0430
void __fastcall google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMap(
        const google::protobuf::internal::MapFieldBase *const this)
{
  if ( !this->state_ )
    google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMap(this);
};

// Line 204: range 000000000C8967B0-000000000C8968DC
char *__fastcall google::protobuf::internal::ArenaImpl::Init(google::protobuf::internal::ArenaImpl *this)
{
  char *result; // rax
  size_t initial_block_size; // rdx
  unsigned __int64 v3; // rcx
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+1h] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+2h] [rbp-58h] BYREF

  this->lifecycle_id_ = _InterlockedExchangeAdd64(
                          &google::protobuf::internal::ArenaImpl::lifecycle_id_generator_.word_,
                          1uLL);
  result = this->options_.initial_block;
  this->blocks_ = 0LL;
  this->hint_ = 0LL;
  this->space_allocated_ = 0LL;
  this->owns_first_block_ = 1;
  if ( result )
  {
    initial_block_size = this->options_.initial_block_size;
    if ( initial_block_size )
    {
      if ( initial_block_size <= 0x27 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v7, LOGLEVEL_FATAL_0, "google/protobuf/arena.cc", 73);
        v4 = google::protobuf::internal::LogMessage::operator<<(
               &v7,
               "CHECK failed: (options_.initial_block_size) >= (sizeof(Block)): ");
        v5 = google::protobuf::internal::LogMessage::operator<<(v4, ": Initial block size too small for header.");
        google::protobuf::internal::LogFinisher::operator=(&v6, v5);
        google::protobuf::internal::LogMessage::~LogMessage(&v7);
        initial_block_size = this->options_.initial_block_size;
        result = this->options_.initial_block;
      }
      v3 = __readfsqword(0);
      *((_QWORD *)result + 4) = initial_block_size;
      *((_QWORD *)result + 3) = 40LL;
      *((_QWORD *)result + 2) = 0LL;
      *(_QWORD *)result = v3 - 1059520;
      *((_QWORD *)result + 1) = this->blocks_;
      this->blocks_ = (google::protobuf::internal::AtomicWord)result;
      this->space_allocated_ += *((_QWORD *)result + 4);
      __writefsqword(0xFFEFD548, (unsigned __int64)result);
      __writefsqword(0xFFEFD540, this->lifecycle_id_);
      this->hint_ = (google::protobuf::internal::AtomicWord)result;
      this->owns_first_block_ = 0;
    }
  }
  return result;
};

// Line 204: range 000000000C897020-000000000C897032
google::protobuf::uint64 __fastcall google::protobuf::internal::ArenaImpl::Reset(
        google::protobuf::internal::ArenaImpl *const this)
{
  this->lifecycle_id_ = _InterlockedExchangeAdd64(
                          &google::protobuf::internal::ArenaImpl::lifecycle_id_generator_.word_,
                          1uLL);
  return google::protobuf::internal::ArenaImpl::ResetInternal(this);
};

// Line 253: range 000000000C896E30-000000000C896E55
google::protobuf::uint64 __fastcall google::protobuf::internal::ArenaImpl::SpaceUsed(
        const google::protobuf::internal::ArenaImpl *const this)
{
  google::protobuf::internal::AtomicWord blocks; // rax
  google::protobuf::uint64 i; // r8
  __int64 v3; // rdx

  blocks = this->blocks_;
  for ( i = 0LL; blocks; i = i + v3 - 40 )
  {
    v3 = *(_QWORD *)(blocks + 24);
    blocks = *(_QWORD *)(blocks + 8);
  }
  return i;
};

// Line 253: range 000000000C896A10-000000000C896A22
void __fastcall google::protobuf::internal::ArenaImpl::AddBlockInternal(
        google::protobuf::internal::ArenaImpl *const this,
        google::protobuf::internal::ArenaImpl::Block *b)
{
  b->next = (google::protobuf::internal::ArenaImpl::Block *)this->blocks_;
  this->blocks_ = (google::protobuf::internal::AtomicWord)b;
  this->space_allocated_ += b->size;
};

// Line 257: range 000000000C8F1EB0-000000000C8F1F17
const google::protobuf::Descriptor *__fastcall google::protobuf::Any::GetMetadata(google::protobuf::Any *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 257: range 000000000C8F22E0-000000000C8F2336
google::protobuf::AnyDefaultTypeInternal *__fastcall google::protobuf::Any::default_instance(
        google::protobuf::Any *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_Any_default_instance_;
};

// Line 257: range 000000000C8F2280-000000000C8F22D8
const google::protobuf::Descriptor *__fastcall google::protobuf::Any::descriptor(google::protobuf::Any *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 257: range 000000000C94F1E0-000000000C94F247
const google::protobuf::Descriptor *__fastcall google::protobuf::BoolValue::GetMetadata(
        google::protobuf::BoolValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[6].descriptor;
};

// Line 257: range 000000000C9503D0-000000000C950426
google::protobuf::BoolValueDefaultTypeInternal *__fastcall google::protobuf::BoolValue::default_instance(
        google::protobuf::BoolValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_BoolValue_default_instance_;
};

// Line 257: range 000000000C950370-000000000C9503C8
const google::protobuf::Descriptor *__fastcall google::protobuf::BoolValue::descriptor(
        google::protobuf::BoolValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[6].descriptor;
};

// Line 257: range 000000000C94F250-000000000C94F2B7
const google::protobuf::Descriptor *__fastcall google::protobuf::BytesValue::GetMetadata(
        google::protobuf::BytesValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[8].descriptor;
};

// Line 257: range 000000000C950850-000000000C9508A6
google::protobuf::BytesValueDefaultTypeInternal *__fastcall google::protobuf::BytesValue::default_instance(
        google::protobuf::BytesValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_BytesValue_default_instance_;
};

// Line 257: range 000000000C9507F0-000000000C950848
const google::protobuf::Descriptor *__fastcall google::protobuf::BytesValue::descriptor(
        google::protobuf::BytesValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[8].descriptor;
};

// Line 257: range 000000000C8F4A70-000000000C8F4AC8
google::protobuf::DescriptorPool *__fastcall google::protobuf::DescriptorPool::generated_pool(
        google::protobuf::DescriptorPool *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::`anonymous namespace'::generated_pool_init_ != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::`anonymous namespace'::InitGeneratedPool;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::`anonymous namespace'::generated_pool_init_, &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::`anonymous namespace'::generated_pool_;
};

// Line 257: range 000000000C92A3B0-000000000C92A417
const google::protobuf::Descriptor *__fastcall google::protobuf::DescriptorProto::GetMetadata(
        google::protobuf::DescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[4].descriptor;
};

// Line 257: range 000000000C92B960-000000000C92B9B6
google::protobuf::DescriptorProtoDefaultTypeInternal *__fastcall google::protobuf::DescriptorProto::default_instance(
        google::protobuf::DescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_DescriptorProto_default_instance_;
};

// Line 257: range 000000000C92B900-000000000C92B958
const google::protobuf::Descriptor *__fastcall google::protobuf::DescriptorProto::descriptor(
        google::protobuf::DescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[4].descriptor;
};

// Line 257: range 000000000C92AB90-000000000C92ABF7
const google::protobuf::Descriptor *__fastcall google::protobuf::DescriptorProto_ExtensionRange::GetMetadata(
        google::protobuf::DescriptorProto_ExtensionRange *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[2].descriptor;
};

// Line 257: range 000000000C92B730-000000000C92B786
google::protobuf::DescriptorProto_ExtensionRangeDefaultTypeInternal *__fastcall google::protobuf::DescriptorProto_ExtensionRange::default_instance(
        google::protobuf::DescriptorProto_ExtensionRange *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_DescriptorProto_ExtensionRange_default_instance_;
};

// Line 257: range 000000000C92B6D0-000000000C92B728
const google::protobuf::Descriptor *__fastcall google::protobuf::DescriptorProto_ExtensionRange::descriptor(
        google::protobuf::DescriptorProto_ExtensionRange *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[2].descriptor;
};

// Line 257: range 000000000C92AC00-000000000C92AC67
const google::protobuf::Descriptor *__fastcall google::protobuf::DescriptorProto_ReservedRange::GetMetadata(
        google::protobuf::DescriptorProto_ReservedRange *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 257: range 000000000C92B810-000000000C92B866
google::protobuf::DescriptorProto_ReservedRangeDefaultTypeInternal *__fastcall google::protobuf::DescriptorProto_ReservedRange::default_instance(
        google::protobuf::DescriptorProto_ReservedRange *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_DescriptorProto_ReservedRange_default_instance_;
};

// Line 257: range 000000000C92B7B0-000000000C92B808
const google::protobuf::Descriptor *__fastcall google::protobuf::DescriptorProto_ReservedRange::descriptor(
        google::protobuf::DescriptorProto_ReservedRange *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 257: range 000000000C94F2C0-000000000C94F327
const google::protobuf::Descriptor *__fastcall google::protobuf::DoubleValue::GetMetadata(
        google::protobuf::DoubleValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 257: range 000000000C94FE30-000000000C94FE86
google::protobuf::DoubleValueDefaultTypeInternal *__fastcall google::protobuf::DoubleValue::default_instance(
        google::protobuf::DoubleValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_DoubleValue_default_instance_;
};

// Line 257: range 000000000C94FDD0-000000000C94FE28
const google::protobuf::Descriptor *__fastcall google::protobuf::DoubleValue::descriptor(
        google::protobuf::DoubleValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 257: range 000000000C947210-000000000C947277
const google::protobuf::Descriptor *__fastcall google::protobuf::Enum::GetMetadata(google::protobuf::Enum *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata[2].descriptor;
};

// Line 257: range 000000000C947FD0-000000000C948026
google::protobuf::EnumDefaultTypeInternal *__fastcall google::protobuf::Enum::default_instance(
        google::protobuf::Enum *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_Enum_default_instance_;
};

// Line 257: range 000000000C947F70-000000000C947FC8
const google::protobuf::Descriptor *__fastcall google::protobuf::Enum::descriptor(google::protobuf::Enum *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata[2].descriptor;
};

// Line 257: range 000000000C92AA40-000000000C92AAA7
const google::protobuf::Descriptor *__fastcall google::protobuf::EnumDescriptorProto::GetMetadata(
        google::protobuf::EnumDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[8].descriptor;
};

// Line 257: range 000000000C92BF20-000000000C92BF76
google::protobuf::EnumDescriptorProtoDefaultTypeInternal *__fastcall google::protobuf::EnumDescriptorProto::default_instance(
        google::protobuf::EnumDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_EnumDescriptorProto_default_instance_;
};

// Line 257: range 000000000C92BEC0-000000000C92BF18
const google::protobuf::Descriptor *__fastcall google::protobuf::EnumDescriptorProto::descriptor(
        google::protobuf::EnumDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[8].descriptor;
};

// Line 257: range 000000000C92A880-000000000C92A8E7
const google::protobuf::Descriptor *__fastcall google::protobuf::EnumOptions::GetMetadata(
        google::protobuf::EnumOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[16].descriptor;
};

// Line 257: range 000000000C92CA10-000000000C92CA66
google::protobuf::EnumOptionsDefaultTypeInternal *__fastcall google::protobuf::EnumOptions::default_instance(
        google::protobuf::EnumOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_EnumOptions_default_instance_;
};

// Line 257: range 000000000C92C9B0-000000000C92CA08
const google::protobuf::Descriptor *__fastcall google::protobuf::EnumOptions::descriptor(
        google::protobuf::EnumOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[16].descriptor;
};

// Line 257: range 000000000C9472F0-000000000C947357
const google::protobuf::Descriptor *__fastcall google::protobuf::EnumValue::GetMetadata(
        google::protobuf::EnumValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 257: range 000000000C948120-000000000C948176
google::protobuf::EnumValueDefaultTypeInternal *__fastcall google::protobuf::EnumValue::default_instance(
        google::protobuf::EnumValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_EnumValue_default_instance_;
};

// Line 257: range 000000000C9480C0-000000000C948118
const google::protobuf::Descriptor *__fastcall google::protobuf::EnumValue::descriptor(
        google::protobuf::EnumValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 257: range 000000000C92AAB0-000000000C92AB17
const google::protobuf::Descriptor *__fastcall google::protobuf::EnumValueDescriptorProto::GetMetadata(
        google::protobuf::EnumValueDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[9].descriptor;
};

// Line 257: range 000000000C92C070-000000000C92C0C6
google::protobuf::EnumValueDescriptorProtoDefaultTypeInternal *__fastcall google::protobuf::EnumValueDescriptorProto::default_instance(
        google::protobuf::EnumValueDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_EnumValueDescriptorProto_default_instance_;
};

// Line 257: range 000000000C92C010-000000000C92C068
const google::protobuf::Descriptor *__fastcall google::protobuf::EnumValueDescriptorProto::descriptor(
        google::protobuf::EnumValueDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[9].descriptor;
};

// Line 257: range 000000000C92A420-000000000C92A487
const google::protobuf::Descriptor *__fastcall google::protobuf::EnumValueOptions::GetMetadata(
        google::protobuf::EnumValueOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[17].descriptor;
};

// Line 257: range 000000000C92CAF0-000000000C92CB46
google::protobuf::EnumValueOptionsDefaultTypeInternal *__fastcall google::protobuf::EnumValueOptions::default_instance(
        google::protobuf::EnumValueOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_EnumValueOptions_default_instance_;
};

// Line 257: range 000000000C92CA90-000000000C92CAE8
const google::protobuf::Descriptor *__fastcall google::protobuf::EnumValueOptions::descriptor(
        google::protobuf::EnumValueOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[17].descriptor;
};

// Line 257: range 000000000C92AC70-000000000C92ACD7
const google::protobuf::Descriptor *__fastcall google::protobuf::ExtensionRangeOptions::GetMetadata(
        google::protobuf::ExtensionRangeOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[5].descriptor;
};

// Line 257: range 000000000C92BA40-000000000C92BA96
google::protobuf::ExtensionRangeOptionsDefaultTypeInternal *__fastcall google::protobuf::ExtensionRangeOptions::default_instance(
        google::protobuf::ExtensionRangeOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_ExtensionRangeOptions_default_instance_;
};

// Line 257: range 000000000C92B9E0-000000000C92BA38
const google::protobuf::Descriptor *__fastcall google::protobuf::ExtensionRangeOptions::descriptor(
        google::protobuf::ExtensionRangeOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[5].descriptor;
};

// Line 257: range 000000000C947280-000000000C9472E7
const google::protobuf::Descriptor *__fastcall google::protobuf::Field::GetMetadata(google::protobuf::Field *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 257: range 000000000C947CE0-000000000C947D36
google::protobuf::FieldDefaultTypeInternal *__fastcall google::protobuf::Field::default_instance(
        google::protobuf::Field *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_Field_default_instance_;
};

// Line 257: range 000000000C947C80-000000000C947CD8
const google::protobuf::Descriptor *__fastcall google::protobuf::Field::descriptor(google::protobuf::Field *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 257: range 000000000C92A730-000000000C92A797
const google::protobuf::Descriptor *__fastcall google::protobuf::FieldDescriptorProto::GetMetadata(
        google::protobuf::FieldDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[6].descriptor;
};

// Line 257: range 000000000C92BC80-000000000C92BCD6
google::protobuf::FieldDescriptorProtoDefaultTypeInternal *__fastcall google::protobuf::FieldDescriptorProto::default_instance(
        google::protobuf::FieldDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_FieldDescriptorProto_default_instance_;
};

// Line 257: range 000000000C92BC20-000000000C92BC78
const google::protobuf::Descriptor *__fastcall google::protobuf::FieldDescriptorProto::descriptor(
        google::protobuf::FieldDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[6].descriptor;
};

// Line 257: range 000000000C92B190-000000000C92B1E8
const google::protobuf::EnumDescriptor *__fastcall google::protobuf::FieldDescriptorProto_Label_descriptor(
        google::protobuf *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_enum_descriptors[1];
};

// Line 257: range 000000000C92B120-000000000C92B178
const google::protobuf::EnumDescriptor *__fastcall google::protobuf::FieldDescriptorProto_Type_descriptor(
        google::protobuf *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_enum_descriptors[0];
};

// Line 257: range 000000000C92A8F0-000000000C92A957
const google::protobuf::Descriptor *__fastcall google::protobuf::FieldOptions::GetMetadata(
        google::protobuf::FieldOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[14].descriptor;
};

// Line 257: range 000000000C92C850-000000000C92C8A6
google::protobuf::FieldOptionsDefaultTypeInternal *__fastcall google::protobuf::FieldOptions::default_instance(
        google::protobuf::FieldOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_FieldOptions_default_instance_;
};

// Line 257: range 000000000C92C7F0-000000000C92C848
const google::protobuf::Descriptor *__fastcall google::protobuf::FieldOptions::descriptor(
        google::protobuf::FieldOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[14].descriptor;
};

// Line 257: range 000000000C92B270-000000000C92B2C8
const google::protobuf::EnumDescriptor *__fastcall google::protobuf::FieldOptions_CType_descriptor(
        google::protobuf *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_enum_descriptors[3];
};

// Line 257: range 000000000C92B2E0-000000000C92B338
const google::protobuf::EnumDescriptor *__fastcall google::protobuf::FieldOptions_JSType_descriptor(
        google::protobuf *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_enum_descriptors[4];
};

// Line 257: range 000000000C947740-000000000C947798
const google::protobuf::EnumDescriptor *__fastcall google::protobuf::Field_Cardinality_descriptor(
        google::protobuf *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors[1];
};

// Line 257: range 000000000C9476D0-000000000C947728
const google::protobuf::EnumDescriptor *__fastcall google::protobuf::Field_Kind_descriptor(google::protobuf *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors[0];
};

// Line 257: range 000000000C92AB20-000000000C92AB87
const google::protobuf::Descriptor *__fastcall google::protobuf::FileDescriptorProto::GetMetadata(
        google::protobuf::FileDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 257: range 000000000C92B630-000000000C92B686
google::protobuf::FileDescriptorProtoDefaultTypeInternal *__fastcall google::protobuf::FileDescriptorProto::default_instance(
        google::protobuf::FileDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_FileDescriptorProto_default_instance_;
};

// Line 257: range 000000000C92B5D0-000000000C92B628
const google::protobuf::Descriptor *__fastcall google::protobuf::FileDescriptorProto::descriptor(
        google::protobuf::FileDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 257: range 000000000C92ADC0-000000000C92AE27
const google::protobuf::Descriptor *__fastcall google::protobuf::FileDescriptorSet::GetMetadata(
        google::protobuf::FileDescriptorSet *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 257: range 000000000C92B440-000000000C92B496
google::protobuf::FileDescriptorSetDefaultTypeInternal *__fastcall google::protobuf::FileDescriptorSet::default_instance(
        google::protobuf::FileDescriptorSet *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_FileDescriptorSet_default_instance_;
};

// Line 257: range 000000000C92A650-000000000C92A6B7
const google::protobuf::Descriptor *__fastcall google::protobuf::FileOptions::GetMetadata(
        google::protobuf::FileOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[12].descriptor;
};

// Line 257: range 000000000C92C680-000000000C92C6D6
google::protobuf::FileOptionsDefaultTypeInternal *__fastcall google::protobuf::FileOptions::default_instance(
        google::protobuf::FileOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_FileOptions_default_instance_;
};

// Line 257: range 000000000C92C620-000000000C92C678
const google::protobuf::Descriptor *__fastcall google::protobuf::FileOptions::descriptor(
        google::protobuf::FileOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[12].descriptor;
};

// Line 257: range 000000000C92B200-000000000C92B258
const google::protobuf::EnumDescriptor *__fastcall google::protobuf::FileOptions_OptimizeMode_descriptor(
        google::protobuf *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_enum_descriptors[2];
};

// Line 257: range 000000000C94F4F0-000000000C94F557
const google::protobuf::Descriptor *__fastcall google::protobuf::FloatValue::GetMetadata(
        google::protobuf::FloatValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 257: range 000000000C94FF20-000000000C94FF76
google::protobuf::FloatValueDefaultTypeInternal *__fastcall google::protobuf::FloatValue::default_instance(
        google::protobuf::FloatValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_FloatValue_default_instance_;
};

// Line 257: range 000000000C94FEC0-000000000C94FF18
const google::protobuf::Descriptor *__fastcall google::protobuf::FloatValue::descriptor(
        google::protobuf::FloatValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 257: range 000000000C92A5E0-000000000C92A647
const google::protobuf::Descriptor *__fastcall google::protobuf::GeneratedCodeInfo::GetMetadata(
        google::protobuf::GeneratedCodeInfo *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[25].descriptor;
};

// Line 257: range 000000000C92D3F0-000000000C92D446
google::protobuf::GeneratedCodeInfoDefaultTypeInternal *__fastcall google::protobuf::GeneratedCodeInfo::default_instance(
        google::protobuf::GeneratedCodeInfo *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_GeneratedCodeInfo_default_instance_;
};

// Line 257: range 000000000C92D390-000000000C92D3E8
const google::protobuf::Descriptor *__fastcall google::protobuf::GeneratedCodeInfo::descriptor(
        google::protobuf::GeneratedCodeInfo *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[25].descriptor;
};

// Line 257: range 000000000C92A340-000000000C92A3A7
const google::protobuf::Descriptor *__fastcall google::protobuf::GeneratedCodeInfo_Annotation::GetMetadata(
        google::protobuf::GeneratedCodeInfo_Annotation *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[24].descriptor;
};

// Line 257: range 000000000C92D310-000000000C92D366
google::protobuf::GeneratedCodeInfo_AnnotationDefaultTypeInternal *__fastcall google::protobuf::GeneratedCodeInfo_Annotation::default_instance(
        google::protobuf::GeneratedCodeInfo_Annotation *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_GeneratedCodeInfo_Annotation_default_instance_;
};

// Line 257: range 000000000C92D2B0-000000000C92D308
const google::protobuf::Descriptor *__fastcall google::protobuf::GeneratedCodeInfo_Annotation::descriptor(
        google::protobuf::GeneratedCodeInfo_Annotation *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[24].descriptor;
};

// Line 257: range 000000000C94F480-000000000C94F4E7
const google::protobuf::Descriptor *__fastcall google::protobuf::Int32Value::GetMetadata(
        google::protobuf::Int32Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[4].descriptor;
};

// Line 257: range 000000000C9501F0-000000000C950246
google::protobuf::Int32ValueDefaultTypeInternal *__fastcall google::protobuf::Int32Value::default_instance(
        google::protobuf::Int32Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_Int32Value_default_instance_;
};

// Line 257: range 000000000C950190-000000000C9501E8
const google::protobuf::Descriptor *__fastcall google::protobuf::Int32Value::descriptor(
        google::protobuf::Int32Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[4].descriptor;
};

// Line 257: range 000000000C94F410-000000000C94F477
const google::protobuf::Descriptor *__fastcall google::protobuf::Int64Value::GetMetadata(
        google::protobuf::Int64Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[2].descriptor;
};

// Line 257: range 000000000C950010-000000000C950066
google::protobuf::Int64ValueDefaultTypeInternal *__fastcall google::protobuf::Int64Value::default_instance(
        google::protobuf::Int64Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_Int64Value_default_instance_;
};

// Line 257: range 000000000C94FFB0-000000000C950008
const google::protobuf::Descriptor *__fastcall google::protobuf::Int64Value::descriptor(
        google::protobuf::Int64Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[2].descriptor;
};

// Line 257: range 000000000C8BBA10-000000000C8BBA68
google::protobuf::`anonymous namespace'::GeneratedMessageFactory *__fastcall google::protobuf::MessageFactory::generated_factory(
        google::protobuf::MessageFactory *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::`anonymous namespace'::generated_message_factory_once_init_ != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::`anonymous namespace'::InitGeneratedMessageFactory;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::`anonymous namespace'::generated_message_factory_once_init_,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::`anonymous namespace'::generated_message_factory_;
};

// Line 257: range 000000000C92A500-000000000C92A567
const google::protobuf::Descriptor *__fastcall google::protobuf::MessageOptions::GetMetadata(
        google::protobuf::MessageOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[13].descriptor;
};

// Line 257: range 000000000C92C760-000000000C92C7B6
google::protobuf::MessageOptionsDefaultTypeInternal *__fastcall google::protobuf::MessageOptions::default_instance(
        google::protobuf::MessageOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_MessageOptions_default_instance_;
};

// Line 257: range 000000000C92C700-000000000C92C758
const google::protobuf::Descriptor *__fastcall google::protobuf::MessageOptions::descriptor(
        google::protobuf::MessageOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[13].descriptor;
};

// Line 257: range 000000000C92A6C0-000000000C92A727
const google::protobuf::Descriptor *__fastcall google::protobuf::MethodDescriptorProto::GetMetadata(
        google::protobuf::MethodDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[11].descriptor;
};

// Line 257: range 000000000C92C380-000000000C92C3D6
google::protobuf::MethodDescriptorProtoDefaultTypeInternal *__fastcall google::protobuf::MethodDescriptorProto::default_instance(
        google::protobuf::MethodDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_MethodDescriptorProto_default_instance_;
};

// Line 257: range 000000000C92C320-000000000C92C378
const google::protobuf::Descriptor *__fastcall google::protobuf::MethodDescriptorProto::descriptor(
        google::protobuf::MethodDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[11].descriptor;
};

// Line 257: range 000000000C92A960-000000000C92A9C7
const google::protobuf::Descriptor *__fastcall google::protobuf::MethodOptions::GetMetadata(
        google::protobuf::MethodOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[19].descriptor;
};

// Line 257: range 000000000C92CCB0-000000000C92CD06
google::protobuf::MethodOptionsDefaultTypeInternal *__fastcall google::protobuf::MethodOptions::default_instance(
        google::protobuf::MethodOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_MethodOptions_default_instance_;
};

// Line 257: range 000000000C92CC50-000000000C92CCA8
const google::protobuf::Descriptor *__fastcall google::protobuf::MethodOptions::descriptor(
        google::protobuf::MethodOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[19].descriptor;
};

// Line 257: range 000000000C92B350-000000000C92B3A8
const google::protobuf::EnumDescriptor *__fastcall google::protobuf::MethodOptions_IdempotencyLevel_descriptor(
        google::protobuf *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_enum_descriptors[5];
};

// Line 257: range 000000000C92A9D0-000000000C92AA37
const google::protobuf::Descriptor *__fastcall google::protobuf::OneofDescriptorProto::GetMetadata(
        google::protobuf::OneofDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[7].descriptor;
};

// Line 257: range 000000000C92BDD0-000000000C92BE26
google::protobuf::OneofDescriptorProtoDefaultTypeInternal *__fastcall google::protobuf::OneofDescriptorProto::default_instance(
        google::protobuf::OneofDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_OneofDescriptorProto_default_instance_;
};

// Line 257: range 000000000C92BD70-000000000C92BDC8
const google::protobuf::Descriptor *__fastcall google::protobuf::OneofDescriptorProto::descriptor(
        google::protobuf::OneofDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[7].descriptor;
};

// Line 257: range 000000000C92A570-000000000C92A5D7
const google::protobuf::Descriptor *__fastcall google::protobuf::OneofOptions::GetMetadata(
        google::protobuf::OneofOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[15].descriptor;
};

// Line 257: range 000000000C92C930-000000000C92C986
google::protobuf::OneofOptionsDefaultTypeInternal *__fastcall google::protobuf::OneofOptions::default_instance(
        google::protobuf::OneofOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_OneofOptions_default_instance_;
};

// Line 257: range 000000000C92C8D0-000000000C92C928
const google::protobuf::Descriptor *__fastcall google::protobuf::OneofOptions::descriptor(
        google::protobuf::OneofOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[15].descriptor;
};

// Line 257: range 000000000C947360-000000000C9473C7
const google::protobuf::Descriptor *__fastcall google::protobuf::Option::GetMetadata(google::protobuf::Option *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata[4].descriptor;
};

// Line 257: range 000000000C948510-000000000C948566
google::protobuf::OptionDefaultTypeInternal *__fastcall google::protobuf::Option::default_instance(
        google::protobuf::Option *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_Option_default_instance_;
};

// Line 257: range 000000000C9484B0-000000000C948508
const google::protobuf::Descriptor *__fastcall google::protobuf::Option::descriptor(google::protobuf::Option *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata[4].descriptor;
};

// Line 257: range 000000000C92AE30-000000000C92AE97
const google::protobuf::Descriptor *__fastcall google::protobuf::ServiceDescriptorProto::GetMetadata(
        google::protobuf::ServiceDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[10].descriptor;
};

// Line 257: range 000000000C92C1C0-000000000C92C216
google::protobuf::ServiceDescriptorProtoDefaultTypeInternal *__fastcall google::protobuf::ServiceDescriptorProto::default_instance(
        google::protobuf::ServiceDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_ServiceDescriptorProto_default_instance_;
};

// Line 257: range 000000000C92C160-000000000C92C1B8
const google::protobuf::Descriptor *__fastcall google::protobuf::ServiceDescriptorProto::descriptor(
        google::protobuf::ServiceDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[10].descriptor;
};

// Line 257: range 000000000C92A7A0-000000000C92A807
const google::protobuf::Descriptor *__fastcall google::protobuf::ServiceOptions::GetMetadata(
        google::protobuf::ServiceOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[18].descriptor;
};

// Line 257: range 000000000C92CBD0-000000000C92CC26
google::protobuf::ServiceOptionsDefaultTypeInternal *__fastcall google::protobuf::ServiceOptions::default_instance(
        google::protobuf::ServiceOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_ServiceOptions_default_instance_;
};

// Line 257: range 000000000C92CB70-000000000C92CBC8
const google::protobuf::Descriptor *__fastcall google::protobuf::ServiceOptions::descriptor(
        google::protobuf::ServiceOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[18].descriptor;
};

// Line 257: range 000000000C92AD50-000000000C92ADB7
const google::protobuf::Descriptor *__fastcall google::protobuf::SourceCodeInfo::GetMetadata(
        google::protobuf::SourceCodeInfo *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[23].descriptor;
};

// Line 257: range 000000000C92D1F0-000000000C92D246
google::protobuf::SourceCodeInfoDefaultTypeInternal *__fastcall google::protobuf::SourceCodeInfo::default_instance(
        google::protobuf::SourceCodeInfo *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_SourceCodeInfo_default_instance_;
};

// Line 257: range 000000000C92D190-000000000C92D1E8
const google::protobuf::Descriptor *__fastcall google::protobuf::SourceCodeInfo::descriptor(
        google::protobuf::SourceCodeInfo *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[23].descriptor;
};

// Line 257: range 000000000C92ACE0-000000000C92AD47
const google::protobuf::Descriptor *__fastcall google::protobuf::SourceCodeInfo_Location::GetMetadata(
        google::protobuf::SourceCodeInfo_Location *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[22].descriptor;
};

// Line 257: range 000000000C92D110-000000000C92D166
google::protobuf::SourceCodeInfo_LocationDefaultTypeInternal *__fastcall google::protobuf::SourceCodeInfo_Location::default_instance(
        google::protobuf::SourceCodeInfo_Location *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_SourceCodeInfo_Location_default_instance_;
};

// Line 257: range 000000000C92D0B0-000000000C92D108
const google::protobuf::Descriptor *__fastcall google::protobuf::SourceCodeInfo_Location::descriptor(
        google::protobuf::SourceCodeInfo_Location *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[22].descriptor;
};

// Line 257: range 000000000C9705A0-000000000C970607
const google::protobuf::Descriptor *__fastcall google::protobuf::SourceContext::GetMetadata(
        google::protobuf::SourceContext *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 257: range 000000000C970950-000000000C9709A6
google::protobuf::SourceContextDefaultTypeInternal *__fastcall google::protobuf::SourceContext::default_instance(
        google::protobuf::SourceContext *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_SourceContext_default_instance_;
};

// Line 257: range 000000000C9708F0-000000000C970948
const google::protobuf::Descriptor *__fastcall google::protobuf::SourceContext::descriptor(
        google::protobuf::SourceContext *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 257: range 000000000C94F170-000000000C94F1D7
const google::protobuf::Descriptor *__fastcall google::protobuf::StringValue::GetMetadata(
        google::protobuf::StringValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[7].descriptor;
};

// Line 257: range 000000000C950610-000000000C950666
google::protobuf::StringValueDefaultTypeInternal *__fastcall google::protobuf::StringValue::default_instance(
        google::protobuf::StringValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_StringValue_default_instance_;
};

// Line 257: range 000000000C9505B0-000000000C950608
const google::protobuf::Descriptor *__fastcall google::protobuf::StringValue::descriptor(
        google::protobuf::StringValue *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[7].descriptor;
};

// Line 257: range 000000000C9477B0-000000000C947808
const google::protobuf::EnumDescriptor *__fastcall google::protobuf::Syntax_descriptor(google::protobuf *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors[2];
};

// Line 257: range 0000000019FC1C80-0000000019FC1CE7
const google::protobuf::Descriptor *__fastcall google::protobuf::Timestamp::GetMetadata(
        google::protobuf::Timestamp *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 257: range 0000000019FC20A0-0000000019FC20F6
google::protobuf::TimestampDefaultTypeInternal *__fastcall google::protobuf::Timestamp::default_instance(
        google::protobuf::Timestamp *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_Timestamp_default_instance_;
};

// Line 257: range 0000000019FC2040-0000000019FC2098
const google::protobuf::Descriptor *__fastcall google::protobuf::Timestamp::descriptor(
        google::protobuf::Timestamp *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 257: range 000000000C9473D0-000000000C947437
const google::protobuf::Descriptor *__fastcall google::protobuf::Type::GetMetadata(google::protobuf::Type *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 257: range 000000000C947AB0-000000000C947B06
google::protobuf::TypeDefaultTypeInternal *__fastcall google::protobuf::Type::default_instance(
        google::protobuf::Type *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_Type_default_instance_;
};

// Line 257: range 000000000C94F3A0-000000000C94F407
const google::protobuf::Descriptor *__fastcall google::protobuf::UInt32Value::GetMetadata(
        google::protobuf::UInt32Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[5].descriptor;
};

// Line 257: range 000000000C9502E0-000000000C950336
google::protobuf::UInt32ValueDefaultTypeInternal *__fastcall google::protobuf::UInt32Value::default_instance(
        google::protobuf::UInt32Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_UInt32Value_default_instance_;
};

// Line 257: range 000000000C950280-000000000C9502D8
const google::protobuf::Descriptor *__fastcall google::protobuf::UInt32Value::descriptor(
        google::protobuf::UInt32Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[5].descriptor;
};

// Line 257: range 000000000C94F330-000000000C94F397
const google::protobuf::Descriptor *__fastcall google::protobuf::UInt64Value::GetMetadata(
        google::protobuf::UInt64Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 257: range 000000000C950100-000000000C950156
google::protobuf::UInt64ValueDefaultTypeInternal *__fastcall google::protobuf::UInt64Value::default_instance(
        google::protobuf::UInt64Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_UInt64Value_default_instance_;
};

// Line 257: range 000000000C9500A0-000000000C9500F8
const google::protobuf::Descriptor *__fastcall google::protobuf::UInt64Value::descriptor(
        google::protobuf::UInt64Value *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 257: range 000000000C92A810-000000000C92A877
const google::protobuf::Descriptor *__fastcall google::protobuf::UninterpretedOption::GetMetadata(
        google::protobuf::UninterpretedOption *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[21].descriptor;
};

// Line 257: range 000000000C92CFB0-000000000C92D006
google::protobuf::UninterpretedOptionDefaultTypeInternal *__fastcall google::protobuf::UninterpretedOption::default_instance(
        google::protobuf::UninterpretedOption *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_UninterpretedOption_default_instance_;
};

// Line 257: range 000000000C92CF50-000000000C92CFA8
const google::protobuf::Descriptor *__fastcall google::protobuf::UninterpretedOption::descriptor(
        google::protobuf::UninterpretedOption *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[21].descriptor;
};

// Line 257: range 000000000C92A490-000000000C92A4F7
const google::protobuf::Descriptor *__fastcall google::protobuf::UninterpretedOption_NamePart::GetMetadata(
        google::protobuf::UninterpretedOption_NamePart *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[20].descriptor;
};

// Line 257: range 000000000C92CDD0-000000000C92CE26
google::protobuf::UninterpretedOption_NamePartDefaultTypeInternal *__fastcall google::protobuf::UninterpretedOption_NamePart::default_instance(
        google::protobuf::UninterpretedOption_NamePart *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return &google::protobuf::_UninterpretedOption_NamePart_default_instance_;
};

// Line 257: range 000000000C92CD70-000000000C92CDC8
const google::protobuf::Descriptor *__fastcall google::protobuf::UninterpretedOption_NamePart::descriptor(
        google::protobuf::UninterpretedOption_NamePart *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata[20].descriptor;
};

// Line 257: range 000000000C8CF670-000000000C8CF6C8
google::protobuf::UnknownFieldSet *__fastcall google::protobuf::UnknownFieldSet::default_instance(
        google::protobuf::UnknownFieldSet *this)
{
  google::protobuf::internal::FunctionClosure0 v2; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::`anonymous namespace'::default_unknown_field_set_once_init_ != 2 )
  {
    v2._vptr_Closure = (int (**)(...))off_1A16E058;
    v2.function_ = google::protobuf::`anonymous namespace'::InitDefaultUnknownFieldSet;
    v2.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::`anonymous namespace'::default_unknown_field_set_once_init_,
      &v2);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v2);
  }
  return google::protobuf::`anonymous namespace'::default_unknown_field_set_instance_;
};

// Line 257: range 000000000C897140-000000000C897189
void __fastcall google::protobuf::internal::InitProtobufDefaults(google::protobuf::internal *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::internal::InitEmptyString;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::empty_string_once_init_, &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C8F2160-000000000C8F21A9
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::AddDescriptors(
        google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::AddDescriptors(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::AddDescriptors(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C8F2110-000000000C8F2159
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::InitDefaults(
        google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::InitDefaults(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::TableStruct::InitDefaultsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::InitDefaults(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C92B0D0-000000000C92B119
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::AddDescriptors(
        google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::AddDescriptors(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::AddDescriptors(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C92B080-000000000C92B0C9
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(
        google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C970850-000000000C970899
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::AddDescriptors(
        google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::AddDescriptors(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::AddDescriptors(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C970800-000000000C970849
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::InitDefaults(
        google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::InitDefaults(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::TableStruct::InitDefaultsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::InitDefaults(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 0000000019FC1FB0-0000000019FC1FF9
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors(
        google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 0000000019FC1F60-0000000019FC1FA9
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(
        google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::TableStruct::InitDefaultsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C947680-000000000C9476C9
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::AddDescriptors(
        google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::AddDescriptors(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::AddDescriptors(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C947630-000000000C947679
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(
        google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C94FD50-000000000C94FD99
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors(
        google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C94FD00-000000000C94FD49
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(
        google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
};

// Line 257: range 000000000C897040-000000000C89705E
google::protobuf::internal::ArenaImpl::Block *__fastcall google::protobuf::internal::ArenaImpl::FindBlock(
        google::protobuf::internal::ArenaImpl *const this,
        void *me)
{
  google::protobuf::internal::ArenaImpl::Block *result; // rax

  result = (google::protobuf::internal::ArenaImpl::Block *)this->blocks_;
  if ( this->blocks_ )
  {
    do
    {
      if ( result->owner == me )
        break;
      result = result->next;
    }
    while ( result );
  }
  return result;
};

// Line 257: range 000000000C945830-000000000C945843
google::protobuf::uint8 *__fastcall google::protobuf::internal::ExtensionSet::SerializeMessageSetWithCachedSizesToArray(
        const google::protobuf::internal::ExtensionSet *const this,
        google::protobuf::uint8 *target)
{
  return google::protobuf::internal::ExtensionSet::InternalSerializeMessageSetWithCachedSizesToArray(
           this,
           google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ != 0,
           target);
};

// Line 257: range 000000000C945630-000000000C945642
google::protobuf::uint8 *__fastcall google::protobuf::internal::ExtensionSet::SerializeWithCachedSizesToArray(
        const google::protobuf::internal::ExtensionSet *const this,
        int start_field_number,
        int end_field_number,
        google::protobuf::uint8 *target)
{
  return google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
           this,
           start_field_number,
           end_field_number,
           google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ != 0,
           target);
};

// Line 257: range 000000000C893A10-000000000C893A20
void __cdecl google::protobuf::internal::InitLogSilencerCountOnce()
{
  if ( google::protobuf::internal::log_silencer_count_init_ != 2 )
    google::protobuf::internal::InitLogSilencerCountOnce();
};

// Line 257: range 000000000C896120-000000000C8961AD
void __fastcall google::protobuf::GoogleOnceInitImpl(
        google::protobuf::ProtobufOnceType *once,
        google::protobuf::Closure *closure)
{
  google::protobuf::ProtobufOnceType v2; // rax
  void (__fastcall *v3)(google::protobuf::internal::FunctionClosure0 *const); // rax
  char vptr_Closure; // r12

  if ( *once != 2 )
  {
    v2 = _InterlockedCompareExchange64(once, 1LL, 0LL);
    if ( google::protobuf::internal::AtomicOps_Internalx86CPUFeatures.has_amd_lock_mb_bug )
      _mm_lfence();
    if ( v2 )
    {
      while ( v2 == 1 )
      {
        sched_yield();
        v2 = *once;
      }
    }
    else
    {
      v3 = (void (__fastcall *)(google::protobuf::internal::FunctionClosure0 *const))*((_QWORD *)closure->_vptr_Closure
                                                                                     + 2);
      if ( v3 == google::protobuf::internal::FunctionClosure0::Run )
      {
        vptr_Closure = (char)closure[2]._vptr_Closure;
        ((void (*)(void))closure[1]._vptr_Closure)();
        if ( vptr_Closure )
          (*((void (__fastcall **)(google::protobuf::Closure *))closure->_vptr_Closure + 1))(closure);
      }
      else
      {
        v3((google::protobuf::internal::FunctionClosure0 *const)closure);
      }
      *once = 2LL;
    }
  }
};

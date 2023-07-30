// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/gcg/gcg_body.pb.cc

// Line 202: range 0000000015006020-00000000150061EF
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
{
  unsigned __int64 v0; // r12
  __int64 v1; // rax
  _DWORD *v2; // r13
  int v3; // [rsp+0h] [rbp-B0h]
  int v4; // [rsp+10h] [rbp-A0h] BYREF
  google::protobuf::internal::LogMessage_0 v5[2]; // [rsp+18h] [rbp-98h]

  v0 = (unsigned __int64)&v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_1(128LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/gcg/gcg_body.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata,
    (__int64)proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_enum_descriptors,
    0LL,
    v3,
    0,
    v4,
    v5[0]);
  std::string::~string((void *)(v0 + 64));
  *(_DWORD *)(((v0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v0 + 48);
  if ( &v4 == (int *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 210: range 00000000150061F0-0000000015006209
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 216: range 000000001500620A-000000001500622E
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata,
    9);
};

// Line 222: range 0000000015006230-000000001500635F
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/gcg/gcg_body.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::GCGLogBodyDuelStart>::DefaultConstruct(&proto_log::_GCGLogBodyDuelStart_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_GCGLogBodyDuelStart_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::GCGUseTime>::DefaultConstruct(&proto_log::_GCGUseTime_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_GCGUseTime_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::GCGControllerInfo>::DefaultConstruct(&proto_log::_GCGControllerInfo_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_GCGControllerInfo_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::GCGControllerDeckInfo>::DefaultConstruct(&proto_log::_GCGControllerDeckInfo_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_GCGControllerDeckInfo_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::GCGCharacterInfo>::DefaultConstruct(&proto_log::_GCGCharacterInfo_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_GCGCharacterInfo_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::GCGControllerCharactersInfo>::DefaultConstruct(&proto_log::_GCGControllerCharactersInfo_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_GCGControllerCharactersInfo_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::GCGOperationData>::DefaultConstruct(&proto_log::_GCGOperationData_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_GCGOperationData_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::GCGLogBodyDuelEnd>::DefaultConstruct(&proto_log::_GCGLogBodyDuelEnd_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_GCGLogBodyDuelEnd_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::GCGLogBodyDuelReplay>::DefaultConstruct(&proto_log::_GCGLogBodyDuelReplay_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_GCGLogBodyDuelReplay_default_instance_,
    (const void *)0x2DD660);
};

// Line 246: range 0000000015006360-000000001500637C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 251: range 000000001500637D-00000000150063AC
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 297: range 00000000150063AD-00000000150063C6
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 303: range 00000000160E037E-00000000160E0391
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::AddDescriptors();
};

// Line 310: range 00000000150063C7-00000000150063D8
const google::protobuf::EnumDescriptor *__cdecl proto_log::GCGOperationType_descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_enum_descriptors[0];
};

// Line 314: range 00000000150063D9-00000000150063F5
bool __cdecl proto_log::GCGOperationType_IsValid(int value)
{
  return (unsigned int)value <= 9;
};

// Line 340: range 00000000150063F6-00000000150064B5
void __cdecl proto_log::GCGLogBodyDuelStart::GCGLogBodyDuelStart(proto_log::GCGLogBodyDuelStart *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::GCGLogBodyDuelStart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::GCGLogBodyDuelStart::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  proto_log::GCGLogBodyDuelStart::SharedCtor(this);
};

// Line 348: range 00000000150064B6-0000000015006760
void __cdecl proto_log::GCGLogBodyDuelStart::GCGLogBodyDuelStart(
        proto_log::GCGLogBodyDuelStart *const this,
        const proto_log::GCGLogBodyDuelStart *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  __int64 p_type; // rsi
  google::protobuf::uint32 *v5; // rcx
  google::protobuf::uint32 *v6; // rdi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::GCGLogBodyDuelStart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    p_internal_metadata = &from->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v3->unknown_fields);
  }
  p_type = (__int64)&from->type_;
  v5 = &this->type_;
  if ( (((unsigned __int8)from + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&from->type_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->type_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->level_id_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&from->level_id_ + 3) >> 3) + 0x7FFF8000) )
  {
    p_type = 8LL;
    __asan_report_load_n(&from->type_, 8LL);
  }
  v6 = *(google::protobuf::uint32 **)p_type;
  if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)v5 + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v5 + 7) >> 3) + 0x7FFF8000) )
  {
    v6 = v5;
    __asan_report_store_n(v5, 8LL);
  }
  *(_QWORD *)v5 = v6;
};

// Line 359: range 0000000015006762-00000000150067C8
void __cdecl proto_log::GCGLogBodyDuelStart::SharedCtor(proto_log::GCGLogBodyDuelStart *const this)
{
  memset(&this->type_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 366: range 00000000150067CA-0000000015006833
void __cdecl proto_log::GCGLogBodyDuelStart::~GCGLogBodyDuelStart(proto_log::GCGLogBodyDuelStart *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::GCGLogBodyDuelStart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::GCGLogBodyDuelStart::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 366: range 0000000015006834-000000001500685E
void __cdecl proto_log::GCGLogBodyDuelStart::~GCGLogBodyDuelStart(proto_log::GCGLogBodyDuelStart *const this)
{
  proto_log::GCGLogBodyDuelStart::~GCGLogBodyDuelStart(this);
  operator delete(this, 0x20uLL);
};

// Line 371: range 0000000015006860-000000001500686A
void __cdecl proto_log::GCGLogBodyDuelStart::SharedDtor(proto_log::GCGLogBodyDuelStart *const this)
{
  ;
};

// Line 374: range 000000001500686C-00000000150068BA
void __cdecl proto_log::GCGLogBodyDuelStart::SetCachedSize(const proto_log::GCGLogBodyDuelStart *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 379: range 00000000150068BC-00000000150068CD
const google::protobuf::Descriptor *__cdecl proto_log::GCGLogBodyDuelStart::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 384: range 00000000150068CE-00000000150068DD
const proto_log::GCGLogBodyDuelStart *__cdecl proto_log::GCGLogBodyDuelStart::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  return proto_log::GCGLogBodyDuelStart::internal_default_instance();
};

// Line 389: range 00000000150068DE-0000000015006952
proto_log::GCGLogBodyDuelStart *__cdecl proto_log::GCGLogBodyDuelStart::New(
        const proto_log::GCGLogBodyDuelStart *const this,
        google::protobuf::Arena *arena)
{
  proto_log::GCGLogBodyDuelStart *v2; // rbx

  v2 = (proto_log::GCGLogBodyDuelStart *)operator new(0x20uLL);
  proto_log::GCGLogBodyDuelStart::GCGLogBodyDuelStart(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::GCGLogBodyDuelStart>(arena, v2);
  return v2;
};

// Line 397: range 0000000015006954-00000000150069E1
void __cdecl proto_log::GCGLogBodyDuelStart::Clear(proto_log::GCGLogBodyDuelStart *const this)
{
  memset(&this->type_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 410: range 00000000150069E2-000000001500731B
bool __cdecl proto_log::GCGLogBodyDuelStart::MergePartialFromCodedStream(
        proto_log::GCGLogBodyDuelStart *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v6; // rdx
  const google::protobuf::uint8 *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  int v9; // ecx
  std::pair<unsigned int,bool> v10; // rax
  google::protobuf::uint32 TagFallback; // edx
  bool v12; // cl
  int TagFieldNumber; // eax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v14; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v19[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:415";
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogBodyDuelStart::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 1 )
    {
      first_byte_or_zero = 0;
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      buffer = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( buffer >= input->buffer_end_ )
        goto LABEL_22;
      v6 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      first_byte_or_zero = *v6;
      v7 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      if ( *(char *)v7 <= 0 )
      {
LABEL_22:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x7F;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 96), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 128) = v10;
      tag = *(_DWORD *)(v2 + 128);
      if ( *(_BYTE *)(v2 + 132) != 1 )
        break;
      TagFieldNumber = google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag);
      if ( TagFieldNumber == 1 )
      {
        if ( (_BYTE)tag != 8 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->type_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->level_id_) )
          goto failure;
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_49;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v14 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v14->unknown_fields) );
failure:
  result = 0;
LABEL_49:
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 468: range 000000001500731C-0000000015007493
void __cdecl proto_log::GCGLogBodyDuelStart::SerializeWithCachedSizes(
        const proto_log::GCGLogBodyDuelStart *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax

  if ( proto_log::GCGLogBodyDuelStart::type(this) )
  {
    v2 = proto_log::GCGLogBodyDuelStart::type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::GCGLogBodyDuelStart::level_id(this) )
  {
    v3 = proto_log::GCGLogBodyDuelStart::level_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_17:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v5->unknown_fields, output);
  }
};

// Line 491: range 0000000015007494-000000001500761F
google::protobuf::uint8 *__cdecl proto_log::GCGLogBodyDuelStart::InternalSerializeWithCachedSizesToArray(
        const proto_log::GCGLogBodyDuelStart *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax

  if ( proto_log::GCGLogBodyDuelStart::type(this) )
  {
    v3 = proto_log::GCGLogBodyDuelStart::type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::GCGLogBodyDuelStart::level_id(this) )
  {
    v4 = proto_log::GCGLogBodyDuelStart::level_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_17:
      v6 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v6->unknown_fields, target);
  }
  return target;
};

// Line 515: range 0000000015007620-00000000150077D4
size_t __cdecl proto_log::GCGLogBodyDuelStart::ByteSizeLong(const proto_log::GCGLogBodyDuelStart *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  int cached_size; // [rsp+1Ch] [rbp-34h]
  size_t total_size; // [rsp+20h] [rbp-30h]

  total_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    total_size = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(&v2->unknown_fields);
  }
  if ( proto_log::GCGLogBodyDuelStart::type(this) )
  {
    v3 = proto_log::GCGLogBodyDuelStart::type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::GCGLogBodyDuelStart::level_id(this) )
  {
    v4 = proto_log::GCGLogBodyDuelStart::level_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 545: range 00000000150077D6-0000000015007A5F
void __cdecl proto_log::GCGLogBodyDuelStart::MergeFrom(
        proto_log::GCGLogBodyDuelStart *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::GCGLogBodyDuelStart *source; // [rsp+28h] [rbp-D8h]
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogBodyDuelStart::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      547);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::GCGLogBodyDuelStart const>(from);
  if ( source )
    proto_log::GCGLogBodyDuelStart::MergeFrom(this, source);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 560: range 0000000015007A60-0000000015007E31
void __cdecl proto_log::GCGLogBodyDuelStart::MergeFrom(
        proto_log::GCGLogBodyDuelStart *const this,
        const proto_log::GCGLogBodyDuelStart *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::uint32 v10; // edx
  google::protobuf::uint32 v11; // edx
  char v12; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v14[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogBodyDuelStart::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v12 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      562);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v12 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v12 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  p_internal_metadata = &from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v9->unknown_fields);
  }
  if ( proto_log::GCGLogBodyDuelStart::type(from) )
  {
    v10 = proto_log::GCGLogBodyDuelStart::type(from);
    proto_log::GCGLogBodyDuelStart::set_type(this, v10);
  }
  if ( proto_log::GCGLogBodyDuelStart::level_id(from) )
  {
    v11 = proto_log::GCGLogBodyDuelStart::level_id(from);
    proto_log::GCGLogBodyDuelStart::set_level_id(this, v11);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 575: range 0000000015007E32-0000000015007E6F
void __cdecl proto_log::GCGLogBodyDuelStart::CopyFrom(
        proto_log::GCGLogBodyDuelStart *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::GCGLogBodyDuelStart::Clear(this);
    proto_log::GCGLogBodyDuelStart::MergeFrom(this, from);
  }
};

// Line 582: range 0000000015007E70-0000000015007EAD
void __cdecl proto_log::GCGLogBodyDuelStart::CopyFrom(
        proto_log::GCGLogBodyDuelStart *const this,
        const proto_log::GCGLogBodyDuelStart *from)
{
  if ( from != this )
  {
    proto_log::GCGLogBodyDuelStart::Clear(this);
    proto_log::GCGLogBodyDuelStart::MergeFrom(this, from);
  }
};

// Line 589: range 0000000015007EAE-0000000015007EBC
bool __cdecl proto_log::GCGLogBodyDuelStart::IsInitialized(const proto_log::GCGLogBodyDuelStart *const this)
{
  return 1;
};

// Line 593: range 0000000015007EBE-0000000015007EEF
void __cdecl proto_log::GCGLogBodyDuelStart::Swap(
        proto_log::GCGLogBodyDuelStart *const this,
        proto_log::GCGLogBodyDuelStart *other)
{
  if ( other != this )
    proto_log::GCGLogBodyDuelStart::InternalSwap(this, other);
};

// Line 597: range 0000000015007EF0-000000001500808F
void __cdecl proto_log::GCGLogBodyDuelStart::InternalSwap(
        proto_log::GCGLogBodyDuelStart *const this,
        proto_log::GCGLogBodyDuelStart *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->type_, &other->type_);
  std::swap<unsigned int>(&this->level_id_, &other->level_id_);
  p_internal_metadata = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_internal_metadata);
  if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
LABEL_7:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    google::protobuf::internal::InternalMetadataWithArena::DoSwap(&this->_internal_metadata_, &v3->unknown_fields);
  }
  std::swap<int>(&this->_cached_size_, &other->_cached_size_);
};

// Line 605: range 0000000015008090-00000000150080B0
google::protobuf::Metadata __cdecl proto_log::GCGLogBodyDuelStart::GetMetadata(
        const proto_log::GCGLogBodyDuelStart *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[0];
};

// Line 650: range 00000000150080B2-0000000015008171
void __cdecl proto_log::GCGUseTime::GCGUseTime(proto_log::GCGUseTime *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::GCGUseTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::GCGUseTime::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  proto_log::GCGUseTime::SharedCtor(this);
};

// Line 658: range 0000000015008172-000000001500841C
void __cdecl proto_log::GCGUseTime::GCGUseTime(proto_log::GCGUseTime *const this, const proto_log::GCGUseTime *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  __int64 p_round; // rsi
  google::protobuf::uint32 *v5; // rcx
  google::protobuf::uint32 *v6; // rdi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::GCGUseTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    p_internal_metadata = &from->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v3->unknown_fields);
  }
  p_round = (__int64)&from->round_;
  v5 = &this->round_;
  if ( (((unsigned __int8)from + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&from->round_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->round_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->use_time_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&from->use_time_ + 3) >> 3) + 0x7FFF8000) )
  {
    p_round = 8LL;
    __asan_report_load_n(&from->round_, 8LL);
  }
  v6 = *(google::protobuf::uint32 **)p_round;
  if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)v5 + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v5 + 7) >> 3) + 0x7FFF8000) )
  {
    v6 = v5;
    __asan_report_store_n(v5, 8LL);
  }
  *(_QWORD *)v5 = v6;
};

// Line 669: range 000000001500841E-0000000015008484
void __cdecl proto_log::GCGUseTime::SharedCtor(proto_log::GCGUseTime *const this)
{
  memset(&this->round_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 676: range 0000000015008486-00000000150084EF
void __cdecl proto_log::GCGUseTime::~GCGUseTime(proto_log::GCGUseTime *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::GCGUseTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::GCGUseTime::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 676: range 00000000150084F0-000000001500851A
void __cdecl proto_log::GCGUseTime::~GCGUseTime(proto_log::GCGUseTime *const this)
{
  proto_log::GCGUseTime::~GCGUseTime(this);
  operator delete(this, 0x20uLL);
};

// Line 681: range 000000001500851C-0000000015008526
void __cdecl proto_log::GCGUseTime::SharedDtor(proto_log::GCGUseTime *const this)
{
  ;
};

// Line 684: range 0000000015008528-0000000015008576
void __cdecl proto_log::GCGUseTime::SetCachedSize(const proto_log::GCGUseTime *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 689: range 0000000015008578-0000000015008589
const google::protobuf::Descriptor *__cdecl proto_log::GCGUseTime::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 694: range 000000001500858A-0000000015008599
const proto_log::GCGUseTime *__cdecl proto_log::GCGUseTime::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  return proto_log::GCGUseTime::internal_default_instance();
};

// Line 699: range 000000001500859A-000000001500860E
proto_log::GCGUseTime *__cdecl proto_log::GCGUseTime::New(
        const proto_log::GCGUseTime *const this,
        google::protobuf::Arena *arena)
{
  proto_log::GCGUseTime *v2; // rbx

  v2 = (proto_log::GCGUseTime *)operator new(0x20uLL);
  proto_log::GCGUseTime::GCGUseTime(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::GCGUseTime>(arena, v2);
  return v2;
};

// Line 707: range 0000000015008610-000000001500869D
void __cdecl proto_log::GCGUseTime::Clear(proto_log::GCGUseTime *const this)
{
  memset(&this->round_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 720: range 000000001500869E-0000000015008FD7
bool __cdecl proto_log::GCGUseTime::MergePartialFromCodedStream(
        proto_log::GCGUseTime *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v6; // rdx
  const google::protobuf::uint8 *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  int v9; // ecx
  std::pair<unsigned int,bool> v10; // rax
  google::protobuf::uint32 TagFallback; // edx
  bool v12; // cl
  int TagFieldNumber; // eax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v14; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v19[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:725";
  *(_QWORD *)(v2 + 16) = proto_log::GCGUseTime::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 1 )
    {
      first_byte_or_zero = 0;
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      buffer = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( buffer >= input->buffer_end_ )
        goto LABEL_22;
      v6 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      first_byte_or_zero = *v6;
      v7 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      if ( *(char *)v7 <= 0 )
      {
LABEL_22:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x7F;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 96), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 128) = v10;
      tag = *(_DWORD *)(v2 + 128);
      if ( *(_BYTE *)(v2 + 132) != 1 )
        break;
      TagFieldNumber = google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag);
      if ( TagFieldNumber == 1 )
      {
        if ( (_BYTE)tag != 8 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->round_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->use_time_) )
          goto failure;
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_49;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v14 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v14->unknown_fields) );
failure:
  result = 0;
LABEL_49:
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 778: range 0000000015008FD8-000000001500914F
void __cdecl proto_log::GCGUseTime::SerializeWithCachedSizes(
        const proto_log::GCGUseTime *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax

  if ( proto_log::GCGUseTime::round(this) )
  {
    v2 = proto_log::GCGUseTime::round(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::GCGUseTime::use_time(this) )
  {
    v3 = proto_log::GCGUseTime::use_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_17:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v5->unknown_fields, output);
  }
};

// Line 801: range 0000000015009150-00000000150092DB
google::protobuf::uint8 *__cdecl proto_log::GCGUseTime::InternalSerializeWithCachedSizesToArray(
        const proto_log::GCGUseTime *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax

  if ( proto_log::GCGUseTime::round(this) )
  {
    v3 = proto_log::GCGUseTime::round(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::GCGUseTime::use_time(this) )
  {
    v4 = proto_log::GCGUseTime::use_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_17:
      v6 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v6->unknown_fields, target);
  }
  return target;
};

// Line 825: range 00000000150092DC-0000000015009490
size_t __cdecl proto_log::GCGUseTime::ByteSizeLong(const proto_log::GCGUseTime *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  int cached_size; // [rsp+1Ch] [rbp-34h]
  size_t total_size; // [rsp+20h] [rbp-30h]

  total_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    total_size = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(&v2->unknown_fields);
  }
  if ( proto_log::GCGUseTime::round(this) )
  {
    v3 = proto_log::GCGUseTime::round(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::GCGUseTime::use_time(this) )
  {
    v4 = proto_log::GCGUseTime::use_time(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 855: range 0000000015009492-000000001500971B
void __cdecl proto_log::GCGUseTime::MergeFrom(proto_log::GCGUseTime *const this, const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::GCGUseTime *source; // [rsp+28h] [rbp-D8h]
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGUseTime::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      857);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::GCGUseTime const>(from);
  if ( source )
    proto_log::GCGUseTime::MergeFrom(this, source);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 870: range 000000001500971C-0000000015009AED
void __cdecl proto_log::GCGUseTime::MergeFrom(proto_log::GCGUseTime *const this, const proto_log::GCGUseTime *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::uint32 v10; // edx
  google::protobuf::uint32 v11; // edx
  char v12; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v14[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGUseTime::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v12 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      872);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v12 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v12 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  p_internal_metadata = &from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v9->unknown_fields);
  }
  if ( proto_log::GCGUseTime::round(from) )
  {
    v10 = proto_log::GCGUseTime::round(from);
    proto_log::GCGUseTime::set_round(this, v10);
  }
  if ( proto_log::GCGUseTime::use_time(from) )
  {
    v11 = proto_log::GCGUseTime::use_time(from);
    proto_log::GCGUseTime::set_use_time(this, v11);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 885: range 0000000015009AEE-0000000015009B2B
void __cdecl proto_log::GCGUseTime::CopyFrom(proto_log::GCGUseTime *const this, const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::GCGUseTime::Clear(this);
    proto_log::GCGUseTime::MergeFrom(this, from);
  }
};

// Line 892: range 0000000015009B2C-0000000015009B69
void __cdecl proto_log::GCGUseTime::CopyFrom(proto_log::GCGUseTime *const this, const proto_log::GCGUseTime *from)
{
  if ( from != this )
  {
    proto_log::GCGUseTime::Clear(this);
    proto_log::GCGUseTime::MergeFrom(this, from);
  }
};

// Line 899: range 0000000015009B6A-0000000015009B78
bool __cdecl proto_log::GCGUseTime::IsInitialized(const proto_log::GCGUseTime *const this)
{
  return 1;
};

// Line 903: range 0000000015009B7A-0000000015009BAB
void __cdecl proto_log::GCGUseTime::Swap(proto_log::GCGUseTime *const this, proto_log::GCGUseTime *other)
{
  if ( other != this )
    proto_log::GCGUseTime::InternalSwap(this, other);
};

// Line 907: range 0000000015009BAC-0000000015009D4B
void __cdecl proto_log::GCGUseTime::InternalSwap(proto_log::GCGUseTime *const this, proto_log::GCGUseTime *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->round_, &other->round_);
  std::swap<unsigned int>(&this->use_time_, &other->use_time_);
  p_internal_metadata = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_internal_metadata);
  if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
LABEL_7:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    google::protobuf::internal::InternalMetadataWithArena::DoSwap(&this->_internal_metadata_, &v3->unknown_fields);
  }
  std::swap<int>(&this->_cached_size_, &other->_cached_size_);
};

// Line 915: range 0000000015009D4C-0000000015009D6C
google::protobuf::Metadata __cdecl proto_log::GCGUseTime::GetMetadata(const proto_log::GCGUseTime *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[1];
};

// Line 962: range 0000000015009D6E-0000000015009E2D
void __cdecl proto_log::GCGControllerInfo::GCGControllerInfo(proto_log::GCGControllerInfo *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::GCGControllerInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::GCGControllerInfo::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  proto_log::GCGControllerInfo::SharedCtor(this);
};

// Line 970: range 0000000015009E2E-000000001500A0E0
void __cdecl proto_log::GCGControllerInfo::GCGControllerInfo(
        proto_log::GCGControllerInfo *const this,
        const proto_log::GCGControllerInfo *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::uint32 *p_uid; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::GCGControllerInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    p_internal_metadata = &from->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v3->unknown_fields);
  }
  p_uid = &from->uid_;
  v5 = (unsigned __int64)&this->uid_;
  if ( (((unsigned __int8)from + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&from->uid_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->uid_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->mmr_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&from->mmr_ + 3) >> 3) + 0x7FFF8000) )
  {
    v5 = 16LL;
    __asan_report_load_n(&from->uid_, 16LL);
  }
  v6 = *((_QWORD *)p_uid + 1);
  v7 = *(_QWORD *)p_uid;
  v8 = v5;
  if ( (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v5 + 15) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 15) & 7) >= *(_BYTE *)(((v5 + 15) >> 3) + 0x7FFF8000) )
  {
    v5 = 16LL;
    __asan_report_store_n(v8, 16LL);
  }
  *(_QWORD *)v5 = v7;
  *(_QWORD *)(v5 + 8) = v6;
};

// Line 981: range 000000001500A0E2-000000001500A148
void __cdecl proto_log::GCGControllerInfo::SharedCtor(proto_log::GCGControllerInfo *const this)
{
  memset(&this->uid_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 988: range 000000001500A14A-000000001500A1B3
void __cdecl proto_log::GCGControllerInfo::~GCGControllerInfo(proto_log::GCGControllerInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::GCGControllerInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::GCGControllerInfo::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 988: range 000000001500A1B4-000000001500A1DE
void __cdecl proto_log::GCGControllerInfo::~GCGControllerInfo(proto_log::GCGControllerInfo *const this)
{
  proto_log::GCGControllerInfo::~GCGControllerInfo(this);
  operator delete(this, 0x28uLL);
};

// Line 993: range 000000001500A1E0-000000001500A1EA
void __cdecl proto_log::GCGControllerInfo::SharedDtor(proto_log::GCGControllerInfo *const this)
{
  ;
};

// Line 996: range 000000001500A1EC-000000001500A23A
void __cdecl proto_log::GCGControllerInfo::SetCachedSize(const proto_log::GCGControllerInfo *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 1001: range 000000001500A23C-000000001500A24D
const google::protobuf::Descriptor *__cdecl proto_log::GCGControllerInfo::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[2].descriptor;
};

// Line 1006: range 000000001500A24E-000000001500A25D
const proto_log::GCGControllerInfo *__cdecl proto_log::GCGControllerInfo::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  return proto_log::GCGControllerInfo::internal_default_instance();
};

// Line 1011: range 000000001500A25E-000000001500A2D2
proto_log::GCGControllerInfo *__cdecl proto_log::GCGControllerInfo::New(
        const proto_log::GCGControllerInfo *const this,
        google::protobuf::Arena *arena)
{
  proto_log::GCGControllerInfo *v2; // rbx

  v2 = (proto_log::GCGControllerInfo *)operator new(0x28uLL);
  proto_log::GCGControllerInfo::GCGControllerInfo(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::GCGControllerInfo>(arena, v2);
  return v2;
};

// Line 1019: range 000000001500A2D4-000000001500A361
void __cdecl proto_log::GCGControllerInfo::Clear(proto_log::GCGControllerInfo *const this)
{
  memset(&this->uid_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 1032: range 000000001500A362-000000001500AD53
bool __cdecl proto_log::GCGControllerInfo::MergePartialFromCodedStream(
        proto_log::GCGControllerInfo *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v6; // rdx
  const google::protobuf::uint8 *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  int v9; // ecx
  std::pair<unsigned int,bool> v10; // rax
  google::protobuf::uint32 TagFallback; // edx
  bool v12; // cl
  int TagFieldNumber; // eax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v14; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v19[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:1037";
  *(_QWORD *)(v2 + 16) = proto_log::GCGControllerInfo::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 1 )
    {
      first_byte_or_zero = 0;
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      buffer = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( buffer >= input->buffer_end_ )
        goto LABEL_22;
      v6 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      first_byte_or_zero = *v6;
      v7 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      if ( *(char *)v7 <= 0 )
      {
LABEL_22:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x7F;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 96), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 128) = v10;
      tag = *(_DWORD *)(v2 + 128);
      if ( *(_BYTE *)(v2 + 132) != 1 )
        break;
      TagFieldNumber = google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag);
      if ( TagFieldNumber == 4 )
      {
        if ( (_BYTE)tag != 32 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->mmr_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber > 4 )
          break;
        if ( TagFieldNumber == 3 )
        {
          if ( (_BYTE)tag != 24 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->level_) )
            goto failure;
        }
        else if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 8 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->uid_) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->controller_id_) )
            goto failure;
        }
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_60;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v14 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v14->unknown_fields) );
failure:
  result = 0;
LABEL_60:
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1118: range 000000001500AD54-000000001500AF37
void __cdecl proto_log::GCGControllerInfo::SerializeWithCachedSizes(
        const proto_log::GCGControllerInfo *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax

  if ( proto_log::GCGControllerInfo::uid(this) )
  {
    v2 = proto_log::GCGControllerInfo::uid(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::GCGControllerInfo::controller_id(this) )
  {
    v3 = proto_log::GCGControllerInfo::controller_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::GCGControllerInfo::level(this) )
  {
    v4 = proto_log::GCGControllerInfo::level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  if ( proto_log::GCGControllerInfo::mmr(this) )
  {
    v5 = proto_log::GCGControllerInfo::mmr(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v5, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_21:
      v7 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v7->unknown_fields, output);
  }
};

// Line 1151: range 000000001500AF38-000000001500B137
google::protobuf::uint8 *__cdecl proto_log::GCGControllerInfo::InternalSerializeWithCachedSizesToArray(
        const proto_log::GCGControllerInfo *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::uint32 v6; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v8; // rax

  if ( proto_log::GCGControllerInfo::uid(this) )
  {
    v3 = proto_log::GCGControllerInfo::uid(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::GCGControllerInfo::controller_id(this) )
  {
    v4 = proto_log::GCGControllerInfo::controller_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::GCGControllerInfo::level(this) )
  {
    v5 = proto_log::GCGControllerInfo::level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  if ( proto_log::GCGControllerInfo::mmr(this) )
  {
    v6 = proto_log::GCGControllerInfo::mmr(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v6, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_21:
      v8 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v8->unknown_fields, target);
  }
  return target;
};

// Line 1185: range 000000001500B138-000000001500B34C
size_t __cdecl proto_log::GCGControllerInfo::ByteSizeLong(const proto_log::GCGControllerInfo *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  google::protobuf::uint32 v5; // eax
  google::protobuf::uint32 v6; // eax
  int cached_size; // [rsp+1Ch] [rbp-34h]
  size_t total_size; // [rsp+20h] [rbp-30h]

  total_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    total_size = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(&v2->unknown_fields);
  }
  if ( proto_log::GCGControllerInfo::uid(this) )
  {
    v3 = proto_log::GCGControllerInfo::uid(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::GCGControllerInfo::controller_id(this) )
  {
    v4 = proto_log::GCGControllerInfo::controller_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::GCGControllerInfo::level(this) )
  {
    v5 = proto_log::GCGControllerInfo::level(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v5) + 1;
  }
  if ( proto_log::GCGControllerInfo::mmr(this) )
  {
    v6 = proto_log::GCGControllerInfo::mmr(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v6) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 1229: range 000000001500B34E-000000001500B5D7
void __cdecl proto_log::GCGControllerInfo::MergeFrom(
        proto_log::GCGControllerInfo *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::GCGControllerInfo *source; // [rsp+28h] [rbp-D8h]
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGControllerInfo::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      1231);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::GCGControllerInfo const>(from);
  if ( source )
    proto_log::GCGControllerInfo::MergeFrom(this, source);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1244: range 000000001500B5D8-000000001500BA1D
void __cdecl proto_log::GCGControllerInfo::MergeFrom(
        proto_log::GCGControllerInfo *const this,
        const proto_log::GCGControllerInfo *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::uint32 v10; // edx
  google::protobuf::uint32 v11; // edx
  google::protobuf::uint32 v12; // edx
  google::protobuf::uint32 v13; // edx
  char v14; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v16[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGControllerInfo::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v14 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      1246);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v14 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v14 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  p_internal_metadata = &from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v9->unknown_fields);
  }
  if ( proto_log::GCGControllerInfo::uid(from) )
  {
    v10 = proto_log::GCGControllerInfo::uid(from);
    proto_log::GCGControllerInfo::set_uid(this, v10);
  }
  if ( proto_log::GCGControllerInfo::controller_id(from) )
  {
    v11 = proto_log::GCGControllerInfo::controller_id(from);
    proto_log::GCGControllerInfo::set_controller_id(this, v11);
  }
  if ( proto_log::GCGControllerInfo::level(from) )
  {
    v12 = proto_log::GCGControllerInfo::level(from);
    proto_log::GCGControllerInfo::set_level(this, v12);
  }
  if ( proto_log::GCGControllerInfo::mmr(from) )
  {
    v13 = proto_log::GCGControllerInfo::mmr(from);
    proto_log::GCGControllerInfo::set_mmr(this, v13);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1265: range 000000001500BA1E-000000001500BA5B
void __cdecl proto_log::GCGControllerInfo::CopyFrom(
        proto_log::GCGControllerInfo *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::GCGControllerInfo::Clear(this);
    proto_log::GCGControllerInfo::MergeFrom(this, from);
  }
};

// Line 1272: range 000000001500BA5C-000000001500BA99
void __cdecl proto_log::GCGControllerInfo::CopyFrom(
        proto_log::GCGControllerInfo *const this,
        const proto_log::GCGControllerInfo *from)
{
  if ( from != this )
  {
    proto_log::GCGControllerInfo::Clear(this);
    proto_log::GCGControllerInfo::MergeFrom(this, from);
  }
};

// Line 1279: range 000000001500BA9A-000000001500BAA8
bool __cdecl proto_log::GCGControllerInfo::IsInitialized(const proto_log::GCGControllerInfo *const this)
{
  return 1;
};

// Line 1283: range 000000001500BAAA-000000001500BADB
void __cdecl proto_log::GCGControllerInfo::Swap(
        proto_log::GCGControllerInfo *const this,
        proto_log::GCGControllerInfo *other)
{
  if ( other != this )
    proto_log::GCGControllerInfo::InternalSwap(this, other);
};

// Line 1287: range 000000001500BADC-000000001500BCB1
void __cdecl proto_log::GCGControllerInfo::InternalSwap(
        proto_log::GCGControllerInfo *const this,
        proto_log::GCGControllerInfo *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->uid_, &other->uid_);
  std::swap<unsigned int>(&this->controller_id_, &other->controller_id_);
  std::swap<unsigned int>(&this->level_, &other->level_);
  std::swap<unsigned int>(&this->mmr_, &other->mmr_);
  p_internal_metadata = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_internal_metadata);
  if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
LABEL_7:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    google::protobuf::internal::InternalMetadataWithArena::DoSwap(&this->_internal_metadata_, &v3->unknown_fields);
  }
  std::swap<int>(&this->_cached_size_, &other->_cached_size_);
};

// Line 1297: range 000000001500BCB2-000000001500BCD2
google::protobuf::Metadata __cdecl proto_log::GCGControllerInfo::GetMetadata(
        const proto_log::GCGControllerInfo *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[2];
};

// Line 1370: range 000000001500BCD4-000000001500BDB3
void __cdecl proto_log::GCGControllerDeckInfo::GCGControllerDeckInfo(proto_log::GCGControllerDeckInfo *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::GCGControllerDeckInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<unsigned int>::RepeatedField(&this->card_id_list_);
  if ( this != proto_log::GCGControllerDeckInfo::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  proto_log::GCGControllerDeckInfo::SharedCtor(this);
};

// Line 1378: range 000000001500BDB4-000000001500C01D
void __cdecl proto_log::GCGControllerDeckInfo::GCGControllerDeckInfo(
        proto_log::GCGControllerDeckInfo *const this,
        const proto_log::GCGControllerDeckInfo *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::uint32 controller_id; // ecx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::GCGControllerDeckInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<unsigned int>::RepeatedField(&this->card_id_list_, &from->card_id_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    p_internal_metadata = &from->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v3->unknown_fields);
  }
  if ( *(_BYTE *)(((unsigned __int64)&from->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)from + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&from->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&from->controller_id_);
  }
  controller_id = from->controller_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
};

// Line 1388: range 000000001500C01E-000000001500C0B0
void __cdecl proto_log::GCGControllerDeckInfo::SharedCtor(proto_log::GCGControllerDeckInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 1393: range 000000001500C0B2-000000001500C12B
void __cdecl proto_log::GCGControllerDeckInfo::~GCGControllerDeckInfo(proto_log::GCGControllerDeckInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::GCGControllerDeckInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::GCGControllerDeckInfo::SharedDtor(this);
  google::protobuf::RepeatedField<unsigned int>::~RepeatedField(&this->card_id_list_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 1393: range 000000001500C12C-000000001500C156
void __cdecl proto_log::GCGControllerDeckInfo::~GCGControllerDeckInfo(proto_log::GCGControllerDeckInfo *const this)
{
  proto_log::GCGControllerDeckInfo::~GCGControllerDeckInfo(this);
  operator delete(this, 0x30uLL);
};

// Line 1398: range 000000001500C158-000000001500C162
void __cdecl proto_log::GCGControllerDeckInfo::SharedDtor(proto_log::GCGControllerDeckInfo *const this)
{
  ;
};

// Line 1401: range 000000001500C164-000000001500C1B2
void __cdecl proto_log::GCGControllerDeckInfo::SetCachedSize(
        const proto_log::GCGControllerDeckInfo *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 1406: range 000000001500C1B4-000000001500C1C5
const google::protobuf::Descriptor *__cdecl proto_log::GCGControllerDeckInfo::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 1411: range 000000001500C1C6-000000001500C1D5
const proto_log::GCGControllerDeckInfo *__cdecl proto_log::GCGControllerDeckInfo::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  return proto_log::GCGControllerDeckInfo::internal_default_instance();
};

// Line 1416: range 000000001500C1D6-000000001500C24A
proto_log::GCGControllerDeckInfo *__cdecl proto_log::GCGControllerDeckInfo::New(
        const proto_log::GCGControllerDeckInfo *const this,
        google::protobuf::Arena *arena)
{
  proto_log::GCGControllerDeckInfo *v2; // rbx

  v2 = (proto_log::GCGControllerDeckInfo *)operator new(0x30uLL);
  proto_log::GCGControllerDeckInfo::GCGControllerDeckInfo(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::GCGControllerDeckInfo>(arena, v2);
  return v2;
};

// Line 1424: range 000000001500C24C-000000001500C315
void __cdecl proto_log::GCGControllerDeckInfo::Clear(proto_log::GCGControllerDeckInfo *const this)
{
  google::protobuf::RepeatedField<unsigned int>::Clear(&this->card_id_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 1436: range 000000001500C316-000000001500CCA8
bool __cdecl proto_log::GCGControllerDeckInfo::MergePartialFromCodedStream(
        proto_log::GCGControllerDeckInfo *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v6; // rdx
  const google::protobuf::uint8 *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  int v9; // ecx
  std::pair<unsigned int,bool> v10; // rax
  google::protobuf::uint32 TagFallback; // edx
  bool v12; // cl
  int TagFieldNumber; // eax
  google::protobuf::RepeatedField<unsigned int> *v14; // rdx
  google::protobuf::RepeatedField<unsigned int> *v15; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v16; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v21[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:1441";
  *(_QWORD *)(v2 + 16) = proto_log::GCGControllerDeckInfo::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 1 )
    {
      first_byte_or_zero = 0;
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      buffer = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( buffer >= input->buffer_end_ )
        goto LABEL_22;
      v6 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      first_byte_or_zero = *v6;
      v7 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      if ( *(char *)v7 <= 0 )
      {
LABEL_22:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x7F;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 96), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 128) = v10;
      tag = *(_DWORD *)(v2 + 128);
      if ( *(_BYTE *)(v2 + 132) != 1 )
        break;
      TagFieldNumber = google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag);
      if ( TagFieldNumber == 1 )
      {
        if ( (_BYTE)tag != 8 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->controller_id_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber != 2 )
          break;
        if ( (_BYTE)tag == 18 )
        {
          v14 = proto_log::GCGControllerDeckInfo::mutable_card_id_list(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  v14) )
            goto failure;
        }
        else
        {
          if ( (_BYTE)tag != 16 )
            break;
          v15 = proto_log::GCGControllerDeckInfo::mutable_card_id_list(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  1,
                  0x12u,
                  input,
                  v15) )
            goto failure;
        }
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_52;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v16 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v16 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v16->unknown_fields) );
failure:
  result = 0;
LABEL_52:
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1499: range 000000001500CCAA-000000001500CEA5
void __cdecl proto_log::GCGControllerDeckInfo::SerializeWithCachedSizes(
        const proto_log::GCGControllerDeckInfo *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // edx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax
  int i; // [rsp+1Ch] [rbp-34h]
  int n; // [rsp+24h] [rbp-2Ch]

  if ( proto_log::GCGControllerDeckInfo::controller_id(this) )
  {
    v2 = proto_log::GCGControllerDeckInfo::controller_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::GCGControllerDeckInfo::card_id_list_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(2, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_card_id_list_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_card_id_list_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_card_id_list_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_card_id_list_cached_byte_size_);
  }
  i = 0;
  n = proto_log::GCGControllerDeckInfo::card_id_list_size(this);
  while ( i < n )
  {
    v3 = proto_log::GCGControllerDeckInfo::card_id_list(this, i);
    google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(v3, output);
    ++i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_22;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_22:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v5->unknown_fields, output);
  }
};

// Line 1528: range 000000001500CEA6-000000001500D093
google::protobuf::uint8 *__cdecl proto_log::GCGControllerDeckInfo::InternalSerializeWithCachedSizesToArray(
        const proto_log::GCGControllerDeckInfo *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint8 *v4; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax
  google::protobuf::uint8 *targetb; // [rsp+8h] [rbp-48h]

  if ( proto_log::GCGControllerDeckInfo::controller_id(this) )
  {
    v3 = proto_log::GCGControllerDeckInfo::controller_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::GCGControllerDeckInfo::card_id_list_size(this) > 0 )
  {
    targetb = google::protobuf::internal::WireFormatLite::WriteTagToArray(2, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_card_id_list_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_card_id_list_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_card_id_list_cached_byte_size_);
    }
    v4 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(this->_card_id_list_cached_byte_size_, targetb);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32NoTagToArray(&this->card_id_list_, v4);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_19;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_19:
      v6 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v6->unknown_fields, target);
  }
  return target;
};

// Line 1560: range 000000001500D094-000000001500D29A
size_t __cdecl proto_log::GCGControllerDeckInfo::ByteSizeLong(const proto_log::GCGControllerDeckInfo *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  int cached_size_0; // [rsp+10h] [rbp-40h]
  int cached_size; // [rsp+14h] [rbp-3Ch]
  size_t total_size; // [rsp+18h] [rbp-38h]
  size_t total_sizea; // [rsp+18h] [rbp-38h]
  size_t data_size; // [rsp+20h] [rbp-30h]

  total_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    total_size = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(&v2->unknown_fields);
  }
  data_size = google::protobuf::internal::WireFormatLite::UInt32Size(&this->card_id_list_);
  if ( data_size )
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(data_size) + 1;
  cached_size_0 = google::protobuf::internal::ToCachedSize(data_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_card_id_list_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_card_id_list_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_card_id_list_cached_byte_size_);
  }
  this->_card_id_list_cached_byte_size_ = cached_size_0;
  total_sizea = data_size + total_size;
  if ( proto_log::GCGControllerDeckInfo::controller_id(this) )
  {
    v3 = proto_log::GCGControllerDeckInfo::controller_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizea);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizea;
};

// Line 1599: range 000000001500D29C-000000001500D525
void __cdecl proto_log::GCGControllerDeckInfo::MergeFrom(
        proto_log::GCGControllerDeckInfo *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::GCGControllerDeckInfo *source; // [rsp+28h] [rbp-D8h]
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGControllerDeckInfo::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      1601);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::GCGControllerDeckInfo const>(from);
  if ( source )
    proto_log::GCGControllerDeckInfo::MergeFrom(this, source);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1614: range 000000001500D526-000000001500D8DE
void __cdecl proto_log::GCGControllerDeckInfo::MergeFrom(
        proto_log::GCGControllerDeckInfo *const this,
        const proto_log::GCGControllerDeckInfo *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::uint32 v10; // edx
  char v11; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v13[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGControllerDeckInfo::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v11 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      1616);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v11 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v11 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  p_internal_metadata = &from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v9->unknown_fields);
  }
  google::protobuf::RepeatedField<unsigned int>::MergeFrom(&this->card_id_list_, &from->card_id_list_);
  if ( proto_log::GCGControllerDeckInfo::controller_id(from) )
  {
    v10 = proto_log::GCGControllerDeckInfo::controller_id(from);
    proto_log::GCGControllerDeckInfo::set_controller_id(this, v10);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1627: range 000000001500D8E0-000000001500D91D
void __cdecl proto_log::GCGControllerDeckInfo::CopyFrom(
        proto_log::GCGControllerDeckInfo *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::GCGControllerDeckInfo::Clear(this);
    proto_log::GCGControllerDeckInfo::MergeFrom(this, from);
  }
};

// Line 1634: range 000000001500D91E-000000001500D95B
void __cdecl proto_log::GCGControllerDeckInfo::CopyFrom(
        proto_log::GCGControllerDeckInfo *const this,
        const proto_log::GCGControllerDeckInfo *from)
{
  if ( from != this )
  {
    proto_log::GCGControllerDeckInfo::Clear(this);
    proto_log::GCGControllerDeckInfo::MergeFrom(this, from);
  }
};

// Line 1641: range 000000001500D95C-000000001500D96A
bool __cdecl proto_log::GCGControllerDeckInfo::IsInitialized(const proto_log::GCGControllerDeckInfo *const this)
{
  return 1;
};

// Line 1645: range 000000001500D96C-000000001500D99D
void __cdecl proto_log::GCGControllerDeckInfo::Swap(
        proto_log::GCGControllerDeckInfo *const this,
        proto_log::GCGControllerDeckInfo *other)
{
  if ( other != this )
    proto_log::GCGControllerDeckInfo::InternalSwap(this, other);
};

// Line 1649: range 000000001500D99E-000000001500DB3D
void __cdecl proto_log::GCGControllerDeckInfo::InternalSwap(
        proto_log::GCGControllerDeckInfo *const this,
        proto_log::GCGControllerDeckInfo *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::RepeatedField<unsigned int>::InternalSwap(&this->card_id_list_, &other->card_id_list_);
  std::swap<unsigned int>(&this->controller_id_, &other->controller_id_);
  p_internal_metadata = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_internal_metadata);
  if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
LABEL_7:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    google::protobuf::internal::InternalMetadataWithArena::DoSwap(&this->_internal_metadata_, &v3->unknown_fields);
  }
  std::swap<int>(&this->_cached_size_, &other->_cached_size_);
};

// Line 1657: range 000000001500DB3E-000000001500DB5E
google::protobuf::Metadata __cdecl proto_log::GCGControllerDeckInfo::GetMetadata(
        const proto_log::GCGControllerDeckInfo *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[3];
};

// Line 1718: range 000000001500DB60-000000001500DC1F
void __cdecl proto_log::GCGCharacterInfo::GCGCharacterInfo(proto_log::GCGCharacterInfo *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::GCGCharacterInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::GCGCharacterInfo::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  proto_log::GCGCharacterInfo::SharedCtor(this);
};

// Line 1726: range 000000001500DC20-000000001500DECA
void __cdecl proto_log::GCGCharacterInfo::GCGCharacterInfo(
        proto_log::GCGCharacterInfo *const this,
        const proto_log::GCGCharacterInfo *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  __int64 p_card_id; // rsi
  google::protobuf::uint32 *v5; // rcx
  google::protobuf::uint32 *v6; // rdi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::GCGCharacterInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    p_internal_metadata = &from->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v3->unknown_fields);
  }
  p_card_id = (__int64)&from->card_id_;
  v5 = &this->card_id_;
  if ( (((unsigned __int8)from + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&from->card_id_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->card_id_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->hp_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&from->hp_ + 3) >> 3) + 0x7FFF8000) )
  {
    p_card_id = 8LL;
    __asan_report_load_n(&from->card_id_, 8LL);
  }
  v6 = *(google::protobuf::uint32 **)p_card_id;
  if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)v5 + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v5 + 7) >> 3) + 0x7FFF8000) )
  {
    v6 = v5;
    __asan_report_store_n(v5, 8LL);
  }
  *(_QWORD *)v5 = v6;
};

// Line 1737: range 000000001500DECC-000000001500DF32
void __cdecl proto_log::GCGCharacterInfo::SharedCtor(proto_log::GCGCharacterInfo *const this)
{
  memset(&this->card_id_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 1744: range 000000001500DF34-000000001500DF9D
void __cdecl proto_log::GCGCharacterInfo::~GCGCharacterInfo(proto_log::GCGCharacterInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::GCGCharacterInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::GCGCharacterInfo::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 1744: range 000000001500DF9E-000000001500DFC8
void __cdecl proto_log::GCGCharacterInfo::~GCGCharacterInfo(proto_log::GCGCharacterInfo *const this)
{
  proto_log::GCGCharacterInfo::~GCGCharacterInfo(this);
  operator delete(this, 0x20uLL);
};

// Line 1749: range 000000001500DFCA-000000001500DFD4
void __cdecl proto_log::GCGCharacterInfo::SharedDtor(proto_log::GCGCharacterInfo *const this)
{
  ;
};

// Line 1752: range 000000001500DFD6-000000001500E024
void __cdecl proto_log::GCGCharacterInfo::SetCachedSize(const proto_log::GCGCharacterInfo *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 1757: range 000000001500E026-000000001500E037
const google::protobuf::Descriptor *__cdecl proto_log::GCGCharacterInfo::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[4].descriptor;
};

// Line 1762: range 000000001500E038-000000001500E047
const proto_log::GCGCharacterInfo *__cdecl proto_log::GCGCharacterInfo::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  return proto_log::GCGCharacterInfo::internal_default_instance();
};

// Line 1767: range 000000001500E048-000000001500E0BC
proto_log::GCGCharacterInfo *__cdecl proto_log::GCGCharacterInfo::New(
        const proto_log::GCGCharacterInfo *const this,
        google::protobuf::Arena *arena)
{
  proto_log::GCGCharacterInfo *v2; // rbx

  v2 = (proto_log::GCGCharacterInfo *)operator new(0x20uLL);
  proto_log::GCGCharacterInfo::GCGCharacterInfo(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::GCGCharacterInfo>(arena, v2);
  return v2;
};

// Line 1775: range 000000001500E0BE-000000001500E14B
void __cdecl proto_log::GCGCharacterInfo::Clear(proto_log::GCGCharacterInfo *const this)
{
  memset(&this->card_id_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 1788: range 000000001500E14C-000000001500EA85
bool __cdecl proto_log::GCGCharacterInfo::MergePartialFromCodedStream(
        proto_log::GCGCharacterInfo *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v6; // rdx
  const google::protobuf::uint8 *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  int v9; // ecx
  std::pair<unsigned int,bool> v10; // rax
  google::protobuf::uint32 TagFallback; // edx
  bool v12; // cl
  int TagFieldNumber; // eax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v14; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v19[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:1793";
  *(_QWORD *)(v2 + 16) = proto_log::GCGCharacterInfo::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 1 )
    {
      first_byte_or_zero = 0;
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      buffer = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( buffer >= input->buffer_end_ )
        goto LABEL_22;
      v6 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      first_byte_or_zero = *v6;
      v7 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      if ( *(char *)v7 <= 0 )
      {
LABEL_22:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x7F;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 96), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 128) = v10;
      tag = *(_DWORD *)(v2 + 128);
      if ( *(_BYTE *)(v2 + 132) != 1 )
        break;
      TagFieldNumber = google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag);
      if ( TagFieldNumber == 1 )
      {
        if ( (_BYTE)tag != 8 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->card_id_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->hp_) )
          goto failure;
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_49;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v14 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v14->unknown_fields) );
failure:
  result = 0;
LABEL_49:
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1846: range 000000001500EA86-000000001500EBFD
void __cdecl proto_log::GCGCharacterInfo::SerializeWithCachedSizes(
        const proto_log::GCGCharacterInfo *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax

  if ( proto_log::GCGCharacterInfo::card_id(this) )
  {
    v2 = proto_log::GCGCharacterInfo::card_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::GCGCharacterInfo::hp(this) )
  {
    v3 = proto_log::GCGCharacterInfo::hp(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_17:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v5->unknown_fields, output);
  }
};

// Line 1869: range 000000001500EBFE-000000001500ED89
google::protobuf::uint8 *__cdecl proto_log::GCGCharacterInfo::InternalSerializeWithCachedSizesToArray(
        const proto_log::GCGCharacterInfo *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax

  if ( proto_log::GCGCharacterInfo::card_id(this) )
  {
    v3 = proto_log::GCGCharacterInfo::card_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::GCGCharacterInfo::hp(this) )
  {
    v4 = proto_log::GCGCharacterInfo::hp(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_17:
      v6 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v6->unknown_fields, target);
  }
  return target;
};

// Line 1893: range 000000001500ED8A-000000001500EF3E
size_t __cdecl proto_log::GCGCharacterInfo::ByteSizeLong(const proto_log::GCGCharacterInfo *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  int cached_size; // [rsp+1Ch] [rbp-34h]
  size_t total_size; // [rsp+20h] [rbp-30h]

  total_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    total_size = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(&v2->unknown_fields);
  }
  if ( proto_log::GCGCharacterInfo::card_id(this) )
  {
    v3 = proto_log::GCGCharacterInfo::card_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::GCGCharacterInfo::hp(this) )
  {
    v4 = proto_log::GCGCharacterInfo::hp(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 1923: range 000000001500EF40-000000001500F1C9
void __cdecl proto_log::GCGCharacterInfo::MergeFrom(
        proto_log::GCGCharacterInfo *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::GCGCharacterInfo *source; // [rsp+28h] [rbp-D8h]
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGCharacterInfo::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      1925);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::GCGCharacterInfo const>(from);
  if ( source )
    proto_log::GCGCharacterInfo::MergeFrom(this, source);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1938: range 000000001500F1CA-000000001500F59B
void __cdecl proto_log::GCGCharacterInfo::MergeFrom(
        proto_log::GCGCharacterInfo *const this,
        const proto_log::GCGCharacterInfo *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::uint32 v10; // edx
  google::protobuf::uint32 v11; // edx
  char v12; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v14[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGCharacterInfo::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v12 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      1940);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v12 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v12 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  p_internal_metadata = &from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v9->unknown_fields);
  }
  if ( proto_log::GCGCharacterInfo::card_id(from) )
  {
    v10 = proto_log::GCGCharacterInfo::card_id(from);
    proto_log::GCGCharacterInfo::set_card_id(this, v10);
  }
  if ( proto_log::GCGCharacterInfo::hp(from) )
  {
    v11 = proto_log::GCGCharacterInfo::hp(from);
    proto_log::GCGCharacterInfo::set_hp(this, v11);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1953: range 000000001500F59C-000000001500F5D9
void __cdecl proto_log::GCGCharacterInfo::CopyFrom(
        proto_log::GCGCharacterInfo *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::GCGCharacterInfo::Clear(this);
    proto_log::GCGCharacterInfo::MergeFrom(this, from);
  }
};

// Line 1960: range 000000001500F5DA-000000001500F617
void __cdecl proto_log::GCGCharacterInfo::CopyFrom(
        proto_log::GCGCharacterInfo *const this,
        const proto_log::GCGCharacterInfo *from)
{
  if ( from != this )
  {
    proto_log::GCGCharacterInfo::Clear(this);
    proto_log::GCGCharacterInfo::MergeFrom(this, from);
  }
};

// Line 1967: range 000000001500F618-000000001500F626
bool __cdecl proto_log::GCGCharacterInfo::IsInitialized(const proto_log::GCGCharacterInfo *const this)
{
  return 1;
};

// Line 1971: range 000000001500F628-000000001500F659
void __cdecl proto_log::GCGCharacterInfo::Swap(
        proto_log::GCGCharacterInfo *const this,
        proto_log::GCGCharacterInfo *other)
{
  if ( other != this )
    proto_log::GCGCharacterInfo::InternalSwap(this, other);
};

// Line 1975: range 000000001500F65A-000000001500F7F9
void __cdecl proto_log::GCGCharacterInfo::InternalSwap(
        proto_log::GCGCharacterInfo *const this,
        proto_log::GCGCharacterInfo *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->card_id_, &other->card_id_);
  std::swap<unsigned int>(&this->hp_, &other->hp_);
  p_internal_metadata = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_internal_metadata);
  if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
LABEL_7:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    google::protobuf::internal::InternalMetadataWithArena::DoSwap(&this->_internal_metadata_, &v3->unknown_fields);
  }
  std::swap<int>(&this->_cached_size_, &other->_cached_size_);
};

// Line 1983: range 000000001500F7FA-000000001500F81A
google::protobuf::Metadata __cdecl proto_log::GCGCharacterInfo::GetMetadata(
        const proto_log::GCGCharacterInfo *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[4];
};

// Line 2028: range 000000001500F81C-000000001500F900
void __cdecl proto_log::GCGControllerCharactersInfo::GCGControllerCharactersInfo(
        proto_log::GCGControllerCharactersInfo *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::GCGControllerCharactersInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto_log::GCGCharacterInfo>::RepeatedPtrField(&this->character_info_list_);
  if ( this != proto_log::GCGControllerCharactersInfo::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  proto_log::GCGControllerCharactersInfo::SharedCtor(this);
};

// Line 2036: range 000000001500F902-000000001500FB63
void __cdecl proto_log::GCGControllerCharactersInfo::GCGControllerCharactersInfo(
        proto_log::GCGControllerCharactersInfo *const this,
        const proto_log::GCGControllerCharactersInfo *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::uint32 controller_id; // ecx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::GCGControllerCharactersInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto_log::GCGCharacterInfo>::RepeatedPtrField(
    &this->character_info_list_,
    &from->character_info_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    p_internal_metadata = &from->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v3->unknown_fields);
  }
  if ( *(_BYTE *)(((unsigned __int64)&from->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&from->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&from->controller_id_);
  }
  controller_id = from->controller_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
};

// Line 2046: range 000000001500FB64-000000001500FBF6
void __cdecl proto_log::GCGControllerCharactersInfo::SharedCtor(proto_log::GCGControllerCharactersInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 2051: range 000000001500FBF8-000000001500FC71
void __cdecl proto_log::GCGControllerCharactersInfo::~GCGControllerCharactersInfo(
        proto_log::GCGControllerCharactersInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::GCGControllerCharactersInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::GCGControllerCharactersInfo::SharedDtor(this);
  google::protobuf::RepeatedPtrField<proto_log::GCGCharacterInfo>::~RepeatedPtrField(&this->character_info_list_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 2051: range 000000001500FC72-000000001500FC9C
void __cdecl proto_log::GCGControllerCharactersInfo::~GCGControllerCharactersInfo(
        proto_log::GCGControllerCharactersInfo *const this)
{
  proto_log::GCGControllerCharactersInfo::~GCGControllerCharactersInfo(this);
  operator delete(this, 0x30uLL);
};

// Line 2056: range 000000001500FC9E-000000001500FCA8
void __cdecl proto_log::GCGControllerCharactersInfo::SharedDtor(proto_log::GCGControllerCharactersInfo *const this)
{
  ;
};

// Line 2059: range 000000001500FCAA-000000001500FD00
void __cdecl proto_log::GCGControllerCharactersInfo::SetCachedSize(
        const proto_log::GCGControllerCharactersInfo *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 2064: range 000000001500FD02-000000001500FD13
const google::protobuf::Descriptor *__cdecl proto_log::GCGControllerCharactersInfo::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[5].descriptor;
};

// Line 2069: range 000000001500FD14-000000001500FD23
const proto_log::GCGControllerCharactersInfo *__cdecl proto_log::GCGControllerCharactersInfo::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  return proto_log::GCGControllerCharactersInfo::internal_default_instance();
};

// Line 2074: range 000000001500FD24-000000001500FD98
proto_log::GCGControllerCharactersInfo *__cdecl proto_log::GCGControllerCharactersInfo::New(
        const proto_log::GCGControllerCharactersInfo *const this,
        google::protobuf::Arena *arena)
{
  proto_log::GCGControllerCharactersInfo *v2; // rbx

  v2 = (proto_log::GCGControllerCharactersInfo *)operator new(0x30uLL);
  proto_log::GCGControllerCharactersInfo::GCGControllerCharactersInfo(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::GCGControllerCharactersInfo>(arena, v2);
  return v2;
};

// Line 2082: range 000000001500FD9A-000000001500FE5B
void __cdecl proto_log::GCGControllerCharactersInfo::Clear(proto_log::GCGControllerCharactersInfo *const this)
{
  google::protobuf::RepeatedPtrField<proto_log::GCGCharacterInfo>::Clear(&this->character_info_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 2094: range 000000001500FE5C-000000001501079C
bool __cdecl proto_log::GCGControllerCharactersInfo::MergePartialFromCodedStream(
        proto_log::GCGControllerCharactersInfo *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v6; // rdx
  const google::protobuf::uint8 *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  int v9; // ecx
  std::pair<unsigned int,bool> v10; // rax
  google::protobuf::uint32 TagFallback; // edx
  bool v12; // cl
  int TagFieldNumber; // eax
  proto_log::GCGCharacterInfo *v14; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v15; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v20[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:2099";
  *(_QWORD *)(v2 + 16) = proto_log::GCGControllerCharactersInfo::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 1 )
    {
      first_byte_or_zero = 0;
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      buffer = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( buffer >= input->buffer_end_ )
        goto LABEL_22;
      v6 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      first_byte_or_zero = *v6;
      v7 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      if ( *(char *)v7 <= 0 )
      {
LABEL_22:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x7F;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 96), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 128) = v10;
      tag = *(_DWORD *)(v2 + 128);
      if ( *(_BYTE *)(v2 + 132) != 1 )
        break;
      TagFieldNumber = google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag);
      if ( TagFieldNumber == 1 )
      {
        if ( (_BYTE)tag != 8 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->controller_id_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber != 2 || (_BYTE)tag != 18 )
          break;
        v14 = proto_log::GCGControllerCharactersInfo::add_character_info_list(this);
        if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<proto_log::GCGCharacterInfo>(input, v14) )
          goto failure;
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_49;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v15 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v15->unknown_fields) );
failure:
  result = 0;
LABEL_49:
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2150: range 000000001501079E-000000001501092B
void __cdecl proto_log::GCGControllerCharactersInfo::SerializeWithCachedSizes(
        const proto_log::GCGControllerCharactersInfo *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  const proto_log::GCGCharacterInfo *v3; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax
  unsigned int i; // [rsp+1Ch] [rbp-34h]
  unsigned int n; // [rsp+24h] [rbp-2Ch]

  if ( proto_log::GCGControllerCharactersInfo::controller_id(this) )
  {
    v2 = proto_log::GCGControllerCharactersInfo::controller_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  i = 0;
  n = proto_log::GCGControllerCharactersInfo::character_info_list_size(this);
  while ( i < n )
  {
    v3 = proto_log::GCGControllerCharactersInfo::character_info_list(this, i);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(2, v3, output);
    ++i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_18;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_18:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v5->unknown_fields, output);
  }
};

// Line 2175: range 000000001501092C-0000000015010AD6
google::protobuf::uint8 *__cdecl proto_log::GCGControllerCharactersInfo::InternalSerializeWithCachedSizesToArray(
        const proto_log::GCGControllerCharactersInfo *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  const proto_log::GCGCharacterInfo *v4; // rsi
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax
  unsigned int i; // [rsp+2Ch] [rbp-44h]
  unsigned int n; // [rsp+34h] [rbp-3Ch]

  if ( proto_log::GCGControllerCharactersInfo::controller_id(this) )
  {
    v3 = proto_log::GCGControllerCharactersInfo::controller_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  i = 0;
  n = proto_log::GCGControllerCharactersInfo::character_info_list_size(this);
  while ( i < n )
  {
    v4 = proto_log::GCGControllerCharactersInfo::character_info_list(this, i);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<proto_log::GCGCharacterInfo>(
               2,
               v4,
               deterministic,
               target);
    ++i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_18;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_18:
      v6 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v6->unknown_fields, target);
  }
  return target;
};

// Line 2202: range 0000000015010AD8-0000000015010CAC
size_t __cdecl proto_log::GCGControllerCharactersInfo::ByteSizeLong(
        const proto_log::GCGControllerCharactersInfo *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const proto_log::GCGCharacterInfo *v3; // rax
  google::protobuf::uint32 v4; // eax
  unsigned int i; // [rsp+14h] [rbp-3Ch]
  unsigned int count; // [rsp+18h] [rbp-38h]
  int cached_size; // [rsp+1Ch] [rbp-34h]
  size_t total_size; // [rsp+20h] [rbp-30h]
  size_t total_sizea; // [rsp+20h] [rbp-30h]

  total_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    total_size = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(&v2->unknown_fields);
  }
  count = proto_log::GCGControllerCharactersInfo::character_info_list_size(this);
  total_sizea = count + total_size;
  for ( i = 0; i < count; ++i )
  {
    v3 = proto_log::GCGControllerCharactersInfo::character_info_list(this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<proto_log::GCGCharacterInfo>(v3);
  }
  if ( proto_log::GCGControllerCharactersInfo::controller_id(this) )
  {
    v4 = proto_log::GCGControllerCharactersInfo::controller_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizea);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizea;
};

// Line 2236: range 0000000015010CAE-0000000015010F37
void __cdecl proto_log::GCGControllerCharactersInfo::MergeFrom(
        proto_log::GCGControllerCharactersInfo *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::GCGControllerCharactersInfo *source; // [rsp+28h] [rbp-D8h]
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGControllerCharactersInfo::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      2238);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::GCGControllerCharactersInfo const>(from);
  if ( source )
    proto_log::GCGControllerCharactersInfo::MergeFrom(this, source);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2251: range 0000000015010F38-00000000150112F0
void __cdecl proto_log::GCGControllerCharactersInfo::MergeFrom(
        proto_log::GCGControllerCharactersInfo *const this,
        const proto_log::GCGControllerCharactersInfo *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::uint32 v10; // edx
  char v11; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v13[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGControllerCharactersInfo::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v11 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      2253);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v11 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v11 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  p_internal_metadata = &from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v9->unknown_fields);
  }
  google::protobuf::RepeatedPtrField<proto_log::GCGCharacterInfo>::MergeFrom(
    &this->character_info_list_,
    &from->character_info_list_);
  if ( proto_log::GCGControllerCharactersInfo::controller_id(from) )
  {
    v10 = proto_log::GCGControllerCharactersInfo::controller_id(from);
    proto_log::GCGControllerCharactersInfo::set_controller_id(this, v10);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2264: range 00000000150112F2-000000001501132F
void __cdecl proto_log::GCGControllerCharactersInfo::CopyFrom(
        proto_log::GCGControllerCharactersInfo *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::GCGControllerCharactersInfo::Clear(this);
    proto_log::GCGControllerCharactersInfo::MergeFrom(this, from);
  }
};

// Line 2271: range 0000000015011330-000000001501136D
void __cdecl proto_log::GCGControllerCharactersInfo::CopyFrom(
        proto_log::GCGControllerCharactersInfo *const this,
        const proto_log::GCGControllerCharactersInfo *from)
{
  if ( from != this )
  {
    proto_log::GCGControllerCharactersInfo::Clear(this);
    proto_log::GCGControllerCharactersInfo::MergeFrom(this, from);
  }
};

// Line 2278: range 000000001501136E-000000001501137C
bool __cdecl proto_log::GCGControllerCharactersInfo::IsInitialized(
        const proto_log::GCGControllerCharactersInfo *const this)
{
  return 1;
};

// Line 2282: range 000000001501137E-00000000150113AF
void __cdecl proto_log::GCGControllerCharactersInfo::Swap(
        proto_log::GCGControllerCharactersInfo *const this,
        proto_log::GCGControllerCharactersInfo *other)
{
  if ( other != this )
    proto_log::GCGControllerCharactersInfo::InternalSwap(this, other);
};

// Line 2286: range 00000000150113B0-000000001501154F
void __cdecl proto_log::GCGControllerCharactersInfo::InternalSwap(
        proto_log::GCGControllerCharactersInfo *const this,
        proto_log::GCGControllerCharactersInfo *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(
    &this->character_info_list_,
    &other->character_info_list_);
  std::swap<unsigned int>(&this->controller_id_, &other->controller_id_);
  p_internal_metadata = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_internal_metadata);
  if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
LABEL_7:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    google::protobuf::internal::InternalMetadataWithArena::DoSwap(&this->_internal_metadata_, &v3->unknown_fields);
  }
  std::swap<int>(&this->_cached_size_, &other->_cached_size_);
};

// Line 2294: range 0000000015011550-0000000015011570
google::protobuf::Metadata __cdecl proto_log::GCGControllerCharactersInfo::GetMetadata(
        const proto_log::GCGControllerCharactersInfo *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[5];
};

// Line 2358: range 0000000015011572-0000000015011651
void __cdecl proto_log::GCGOperationData::GCGOperationData(proto_log::GCGOperationData *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::GCGOperationData + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<unsigned int>::RepeatedField(&this->paramlist_);
  if ( this != proto_log::GCGOperationData::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  proto_log::GCGOperationData::SharedCtor(this);
};

// Line 2366: range 0000000015011652-000000001501193C
void __cdecl proto_log::GCGOperationData::GCGOperationData(
        proto_log::GCGOperationData *const this,
        const proto_log::GCGOperationData *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::uint32 *p_operation_type; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::GCGOperationData + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<unsigned int>::RepeatedField(&this->paramlist_, &from->paramlist_);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    p_internal_metadata = &from->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v3->unknown_fields);
  }
  p_operation_type = &from->operation_type_;
  v5 = (unsigned __int64)&this->operation_type_;
  if ( (((unsigned __int8)from + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&from->operation_type_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->operation_type_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->param1_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&from->param1_ + 3) >> 3) + 0x7FFF8000) )
  {
    v5 = 16LL;
    __asan_report_load_n(&from->operation_type_, 16LL);
  }
  v6 = *((_QWORD *)p_operation_type + 1);
  v7 = *(_QWORD *)p_operation_type;
  v8 = v5;
  if ( (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v5 + 15) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 15) & 7) >= *(_BYTE *)(((v5 + 15) >> 3) + 0x7FFF8000) )
  {
    v5 = 16LL;
    __asan_report_store_n(v8, 16LL);
  }
  *(_QWORD *)v5 = v7;
  *(_QWORD *)(v5 + 8) = v6;
};

// Line 2378: range 000000001501193E-00000000150119AC
void __cdecl proto_log::GCGOperationData::SharedCtor(proto_log::GCGOperationData *const this)
{
  memset(&this->operation_type_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 2385: range 00000000150119AE-0000000015011A27
void __cdecl proto_log::GCGOperationData::~GCGOperationData(proto_log::GCGOperationData *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::GCGOperationData + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::GCGOperationData::SharedDtor(this);
  google::protobuf::RepeatedField<unsigned int>::~RepeatedField(&this->paramlist_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 2385: range 0000000015011A28-0000000015011A52
void __cdecl proto_log::GCGOperationData::~GCGOperationData(proto_log::GCGOperationData *const this)
{
  proto_log::GCGOperationData::~GCGOperationData(this);
  operator delete(this, 0x38uLL);
};

// Line 2390: range 0000000015011A54-0000000015011A5E
void __cdecl proto_log::GCGOperationData::SharedDtor(proto_log::GCGOperationData *const this)
{
  ;
};

// Line 2393: range 0000000015011A60-0000000015011AB6
void __cdecl proto_log::GCGOperationData::SetCachedSize(const proto_log::GCGOperationData *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 2398: range 0000000015011AB8-0000000015011AC9
const google::protobuf::Descriptor *__cdecl proto_log::GCGOperationData::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[6].descriptor;
};

// Line 2403: range 0000000015011ACA-0000000015011AD9
const proto_log::GCGOperationData *__cdecl proto_log::GCGOperationData::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  return proto_log::GCGOperationData::internal_default_instance();
};

// Line 2408: range 0000000015011ADA-0000000015011B4E
proto_log::GCGOperationData *__cdecl proto_log::GCGOperationData::New(
        const proto_log::GCGOperationData *const this,
        google::protobuf::Arena *arena)
{
  proto_log::GCGOperationData *v2; // rbx

  v2 = (proto_log::GCGOperationData *)operator new(0x38uLL);
  proto_log::GCGOperationData::GCGOperationData(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::GCGOperationData>(arena, v2);
  return v2;
};

// Line 2416: range 0000000015011B50-0000000015011BED
void __cdecl proto_log::GCGOperationData::Clear(proto_log::GCGOperationData *const this)
{
  google::protobuf::RepeatedField<unsigned int>::Clear(&this->paramlist_);
  memset(&this->operation_type_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 2430: range 0000000015011BEE-000000001501267A
bool __cdecl proto_log::GCGOperationData::MergePartialFromCodedStream(
        proto_log::GCGOperationData *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v6; // rdx
  const google::protobuf::uint8 *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  int v9; // ecx
  std::pair<unsigned int,bool> v10; // rax
  google::protobuf::uint32 TagFallback; // edx
  bool v12; // cl
  google::protobuf::RepeatedField<unsigned int> *v13; // rdx
  google::protobuf::RepeatedField<unsigned int> *v14; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v15; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v20[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:2435";
  *(_QWORD *)(v2 + 16) = proto_log::GCGOperationData::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 1 )
    {
      first_byte_or_zero = 0;
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      buffer = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( buffer >= input->buffer_end_ )
        goto LABEL_22;
      v6 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      first_byte_or_zero = *v6;
      v7 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      if ( *(char *)v7 <= 0 )
      {
LABEL_22:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x7F;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 96), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 128) = v10;
      tag = *(_DWORD *)(v2 + 128);
      if ( *(_BYTE *)(v2 + 132) != 1 )
        break;
      switch ( google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag) )
      {
        case 1:
          if ( (_BYTE)tag != 8 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->operation_type_) )
            goto failure;
          continue;
        case 2:
          if ( (_BYTE)tag != 16 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->controller_id_) )
            goto failure;
          continue;
        case 3:
          if ( (_BYTE)tag != 24 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->round_) )
            goto failure;
          continue;
        case 4:
          if ( (_BYTE)tag != 32 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->param1_) )
            goto failure;
          continue;
        case 5:
          if ( (_BYTE)tag == 42 )
          {
            v13 = proto_log::GCGOperationData::mutable_paramlist(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    v13) )
              goto failure;
          }
          else
          {
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            v14 = proto_log::GCGOperationData::mutable_paramlist(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    1,
                    0x2Au,
                    input,
                    v14) )
              goto failure;
          }
          break;
        default:
          goto handle_unusual;
      }
    }
handle_unusual:
    if ( !tag )
    {
      result = 1;
      goto LABEL_62;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v15 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v15->unknown_fields) );
failure:
  result = 0;
LABEL_62:
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2535: range 000000001501267C-0000000015012919
void __cdecl proto_log::GCGOperationData::SerializeWithCachedSizes(
        const proto_log::GCGOperationData *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::uint32 v6; // edx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v8; // rax
  int i; // [rsp+1Ch] [rbp-34h]
  int n; // [rsp+24h] [rbp-2Ch]

  if ( proto_log::GCGOperationData::operation_type(this) )
  {
    v2 = proto_log::GCGOperationData::operation_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::GCGOperationData::controller_id(this) )
  {
    v3 = proto_log::GCGOperationData::controller_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::GCGOperationData::round(this) )
  {
    v4 = proto_log::GCGOperationData::round(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  if ( proto_log::GCGOperationData::param1(this) )
  {
    v5 = proto_log::GCGOperationData::param1(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v5, output);
  }
  if ( proto_log::GCGOperationData::paramlist_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(5, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_paramlist_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_paramlist_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_paramlist_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_paramlist_cached_byte_size_);
  }
  i = 0;
  n = proto_log::GCGOperationData::paramlist_size(this);
  while ( i < n )
  {
    v6 = proto_log::GCGOperationData::paramlist(this, i);
    google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(v6, output);
    ++i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_28;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_28:
      v8 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v8->unknown_fields, output);
  }
};

// Line 2579: range 000000001501291A-0000000015012BB5
google::protobuf::uint8 *__cdecl proto_log::GCGOperationData::InternalSerializeWithCachedSizesToArray(
        const proto_log::GCGOperationData *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::uint32 v6; // ecx
  google::protobuf::uint8 *v7; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rax
  google::protobuf::uint8 *targetb; // [rsp+8h] [rbp-48h]

  if ( proto_log::GCGOperationData::operation_type(this) )
  {
    v3 = proto_log::GCGOperationData::operation_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::GCGOperationData::controller_id(this) )
  {
    v4 = proto_log::GCGOperationData::controller_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::GCGOperationData::round(this) )
  {
    v5 = proto_log::GCGOperationData::round(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  if ( proto_log::GCGOperationData::param1(this) )
  {
    v6 = proto_log::GCGOperationData::param1(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v6, target);
  }
  if ( proto_log::GCGOperationData::paramlist_size(this) > 0 )
  {
    targetb = google::protobuf::internal::WireFormatLite::WriteTagToArray(5, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_paramlist_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_paramlist_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_paramlist_cached_byte_size_);
    }
    v7 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(this->_paramlist_cached_byte_size_, targetb);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32NoTagToArray(&this->paramlist_, v7);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_25;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_25:
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v9->unknown_fields, target);
  }
  return target;
};

// Line 2626: range 0000000015012BB6-0000000015012E54
size_t __cdecl proto_log::GCGOperationData::ByteSizeLong(const proto_log::GCGOperationData *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  google::protobuf::uint32 v5; // eax
  google::protobuf::uint32 v6; // eax
  int cached_size_0; // [rsp+10h] [rbp-40h]
  int cached_size; // [rsp+14h] [rbp-3Ch]
  size_t total_size; // [rsp+18h] [rbp-38h]
  size_t total_sizea; // [rsp+18h] [rbp-38h]
  size_t data_size; // [rsp+20h] [rbp-30h]

  total_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    total_size = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(&v2->unknown_fields);
  }
  data_size = google::protobuf::internal::WireFormatLite::UInt32Size(&this->paramlist_);
  if ( data_size )
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(data_size) + 1;
  cached_size_0 = google::protobuf::internal::ToCachedSize(data_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_paramlist_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_paramlist_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_paramlist_cached_byte_size_);
  }
  this->_paramlist_cached_byte_size_ = cached_size_0;
  total_sizea = data_size + total_size;
  if ( proto_log::GCGOperationData::operation_type(this) )
  {
    v3 = proto_log::GCGOperationData::operation_type(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::GCGOperationData::controller_id(this) )
  {
    v4 = proto_log::GCGOperationData::controller_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::GCGOperationData::round(this) )
  {
    v5 = proto_log::GCGOperationData::round(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v5) + 1;
  }
  if ( proto_log::GCGOperationData::param1(this) )
  {
    v6 = proto_log::GCGOperationData::param1(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v6) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizea);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizea;
};

// Line 2686: range 0000000015012E56-00000000150130DF
void __cdecl proto_log::GCGOperationData::MergeFrom(
        proto_log::GCGOperationData *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::GCGOperationData *source; // [rsp+28h] [rbp-D8h]
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGOperationData::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      2688);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::GCGOperationData const>(from);
  if ( source )
    proto_log::GCGOperationData::MergeFrom(this, source);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2701: range 00000000150130E0-0000000015013546
void __cdecl proto_log::GCGOperationData::MergeFrom(
        proto_log::GCGOperationData *const this,
        const proto_log::GCGOperationData *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::uint32 v10; // edx
  google::protobuf::uint32 v11; // edx
  google::protobuf::uint32 v12; // edx
  google::protobuf::uint32 v13; // edx
  char v14; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v16[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGOperationData::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v14 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      2703);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v14 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v14 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  p_internal_metadata = &from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v9->unknown_fields);
  }
  google::protobuf::RepeatedField<unsigned int>::MergeFrom(&this->paramlist_, &from->paramlist_);
  if ( proto_log::GCGOperationData::operation_type(from) )
  {
    v10 = proto_log::GCGOperationData::operation_type(from);
    proto_log::GCGOperationData::set_operation_type(this, v10);
  }
  if ( proto_log::GCGOperationData::controller_id(from) )
  {
    v11 = proto_log::GCGOperationData::controller_id(from);
    proto_log::GCGOperationData::set_controller_id(this, v11);
  }
  if ( proto_log::GCGOperationData::round(from) )
  {
    v12 = proto_log::GCGOperationData::round(from);
    proto_log::GCGOperationData::set_round(this, v12);
  }
  if ( proto_log::GCGOperationData::param1(from) )
  {
    v13 = proto_log::GCGOperationData::param1(from);
    proto_log::GCGOperationData::set_param1(this, v13);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2723: range 0000000015013548-0000000015013585
void __cdecl proto_log::GCGOperationData::CopyFrom(
        proto_log::GCGOperationData *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::GCGOperationData::Clear(this);
    proto_log::GCGOperationData::MergeFrom(this, from);
  }
};

// Line 2730: range 0000000015013586-00000000150135C3
void __cdecl proto_log::GCGOperationData::CopyFrom(
        proto_log::GCGOperationData *const this,
        const proto_log::GCGOperationData *from)
{
  if ( from != this )
  {
    proto_log::GCGOperationData::Clear(this);
    proto_log::GCGOperationData::MergeFrom(this, from);
  }
};

// Line 2737: range 00000000150135C4-00000000150135D2
bool __cdecl proto_log::GCGOperationData::IsInitialized(const proto_log::GCGOperationData *const this)
{
  return 1;
};

// Line 2741: range 00000000150135D4-0000000015013605
void __cdecl proto_log::GCGOperationData::Swap(
        proto_log::GCGOperationData *const this,
        proto_log::GCGOperationData *other)
{
  if ( other != this )
    proto_log::GCGOperationData::InternalSwap(this, other);
};

// Line 2745: range 0000000015013606-00000000150137F6
void __cdecl proto_log::GCGOperationData::InternalSwap(
        proto_log::GCGOperationData *const this,
        proto_log::GCGOperationData *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::RepeatedField<unsigned int>::InternalSwap(&this->paramlist_, &other->paramlist_);
  std::swap<unsigned int>(&this->operation_type_, &other->operation_type_);
  std::swap<unsigned int>(&this->controller_id_, &other->controller_id_);
  std::swap<unsigned int>(&this->round_, &other->round_);
  std::swap<unsigned int>(&this->param1_, &other->param1_);
  p_internal_metadata = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_internal_metadata);
  if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
LABEL_7:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    google::protobuf::internal::InternalMetadataWithArena::DoSwap(&this->_internal_metadata_, &v3->unknown_fields);
  }
  std::swap<int>(&this->_cached_size_, &other->_cached_size_);
};

// Line 2756: range 00000000150137F8-0000000015013818
google::protobuf::Metadata __cdecl proto_log::GCGOperationData::GetMetadata(
        const proto_log::GCGOperationData *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[6];
};

// Line 2867: range 000000001501381A-0000000015013995
void __cdecl proto_log::GCGLogBodyDuelEnd::GCGLogBodyDuelEnd(proto_log::GCGLogBodyDuelEnd *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::GCGLogBodyDuelEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto_log::GCGUseTime>::RepeatedPtrField(&this->use_time_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerInfo>::RepeatedPtrField(&this->controller_info_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerDeckInfo>::RepeatedPtrField(&this->controller_deck_info_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerCharactersInfo>::RepeatedPtrField(&this->controller_character_info_map_);
  google::protobuf::RepeatedPtrField<proto_log::GCGOperationData>::RepeatedPtrField(&this->operation_data_list_);
  if ( this != proto_log::GCGLogBodyDuelEnd::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  proto_log::GCGLogBodyDuelEnd::SharedCtor(this);
};

// Line 2875: range 0000000015013996-0000000015013C6F
void __cdecl proto_log::GCGLogBodyDuelEnd::GCGLogBodyDuelEnd(
        proto_log::GCGLogBodyDuelEnd *const this,
        const proto_log::GCGLogBodyDuelEnd *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::GCGLogBodyDuelEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto_log::GCGUseTime>::RepeatedPtrField(
    &this->use_time_list_,
    &from->use_time_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerInfo>::RepeatedPtrField(
    &this->controller_info_list_,
    &from->controller_info_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerDeckInfo>::RepeatedPtrField(
    &this->controller_deck_info_list_,
    &from->controller_deck_info_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerCharactersInfo>::RepeatedPtrField(
    &this->controller_character_info_map_,
    &from->controller_character_info_map_);
  google::protobuf::RepeatedPtrField<proto_log::GCGOperationData>::RepeatedPtrField(
    &this->operation_data_list_,
    &from->operation_data_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    p_internal_metadata = &from->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v3->unknown_fields);
  }
  memcpy(&this->type_, &from->type_, 0x14uLL);
};

// Line 2891: range 0000000015013C70-0000000015013CE5
void __cdecl proto_log::GCGLogBodyDuelEnd::SharedCtor(proto_log::GCGLogBodyDuelEnd *const this)
{
  memset(&this->type_, 0, 0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 2898: range 0000000015013CE6-0000000015013D9F
void __cdecl proto_log::GCGLogBodyDuelEnd::~GCGLogBodyDuelEnd(proto_log::GCGLogBodyDuelEnd *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::GCGLogBodyDuelEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::GCGLogBodyDuelEnd::SharedDtor(this);
  google::protobuf::RepeatedPtrField<proto_log::GCGOperationData>::~RepeatedPtrField(&this->operation_data_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerCharactersInfo>::~RepeatedPtrField(&this->controller_character_info_map_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerDeckInfo>::~RepeatedPtrField(&this->controller_deck_info_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerInfo>::~RepeatedPtrField(&this->controller_info_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGUseTime>::~RepeatedPtrField(&this->use_time_list_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 2898: range 0000000015013DA0-0000000015013DCA
void __cdecl proto_log::GCGLogBodyDuelEnd::~GCGLogBodyDuelEnd(proto_log::GCGLogBodyDuelEnd *const this)
{
  proto_log::GCGLogBodyDuelEnd::~GCGLogBodyDuelEnd(this);
  operator delete(this, 0xA0uLL);
};

// Line 2903: range 0000000015013DCC-0000000015013DD6
void __cdecl proto_log::GCGLogBodyDuelEnd::SharedDtor(proto_log::GCGLogBodyDuelEnd *const this)
{
  ;
};

// Line 2906: range 0000000015013DD8-0000000015013E33
void __cdecl proto_log::GCGLogBodyDuelEnd::SetCachedSize(const proto_log::GCGLogBodyDuelEnd *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 2911: range 0000000015013E34-0000000015013E45
const google::protobuf::Descriptor *__cdecl proto_log::GCGLogBodyDuelEnd::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[7].descriptor;
};

// Line 2916: range 0000000015013E46-0000000015013E55
const proto_log::GCGLogBodyDuelEnd *__cdecl proto_log::GCGLogBodyDuelEnd::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  return proto_log::GCGLogBodyDuelEnd::internal_default_instance();
};

// Line 2921: range 0000000015013E56-0000000015013ECA
proto_log::GCGLogBodyDuelEnd *__cdecl proto_log::GCGLogBodyDuelEnd::New(
        const proto_log::GCGLogBodyDuelEnd *const this,
        google::protobuf::Arena *arena)
{
  proto_log::GCGLogBodyDuelEnd *v2; // rbx

  v2 = (proto_log::GCGLogBodyDuelEnd *)operator new(0xA0uLL);
  proto_log::GCGLogBodyDuelEnd::GCGLogBodyDuelEnd(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::GCGLogBodyDuelEnd>(arena, v2);
  return v2;
};

// Line 2929: range 0000000015013ECC-0000000015013FAB
void __cdecl proto_log::GCGLogBodyDuelEnd::Clear(proto_log::GCGLogBodyDuelEnd *const this)
{
  google::protobuf::RepeatedPtrField<proto_log::GCGUseTime>::Clear(&this->use_time_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerInfo>::Clear(&this->controller_info_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerDeckInfo>::Clear(&this->controller_deck_info_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerCharactersInfo>::Clear(&this->controller_character_info_map_);
  google::protobuf::RepeatedPtrField<proto_log::GCGOperationData>::Clear(&this->operation_data_list_);
  memset(&this->type_, 0, 0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 2947: range 0000000015013FAC-0000000015014B87
bool __cdecl proto_log::GCGLogBodyDuelEnd::MergePartialFromCodedStream(
        proto_log::GCGLogBodyDuelEnd *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v6; // rdx
  const google::protobuf::uint8 *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  int v9; // ecx
  std::pair<unsigned int,bool> v10; // rax
  google::protobuf::uint32 TagFallback; // edx
  bool v12; // cl
  proto_log::GCGUseTime *v13; // rdx
  proto_log::GCGControllerInfo *v14; // rdx
  proto_log::GCGControllerDeckInfo *v15; // rdx
  proto_log::GCGControllerCharactersInfo *v16; // rdx
  proto_log::GCGOperationData *v17; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v18; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v23[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:2952";
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogBodyDuelEnd::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 2 )
    {
      first_byte_or_zero = 0;
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      buffer = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( buffer >= input->buffer_end_ )
        goto LABEL_22;
      v6 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      first_byte_or_zero = *v6;
      v7 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      if ( *(char *)v7 <= 0 )
      {
LABEL_22:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x7F;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 96), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 128) = v10;
      tag = *(_DWORD *)(v2 + 128);
      if ( *(_BYTE *)(v2 + 132) == 1 )
      {
        switch ( google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag) )
        {
          case 1:
            if ( (_BYTE)tag != 8 )
              break;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->type_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->level_id_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->total_use_time_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v13 = proto_log::GCGLogBodyDuelEnd::add_use_time_list(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<proto_log::GCGUseTime>(input, v13) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->winner_) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 48 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->reason_) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 58 )
              goto handle_unusual;
            v14 = proto_log::GCGLogBodyDuelEnd::add_controller_info_list(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<proto_log::GCGControllerInfo>(
                    input,
                    v14) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 66 )
              goto handle_unusual;
            v15 = proto_log::GCGLogBodyDuelEnd::add_controller_deck_info_list(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<proto_log::GCGControllerDeckInfo>(
                    input,
                    v15) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 74 )
              goto handle_unusual;
            v16 = proto_log::GCGLogBodyDuelEnd::add_controller_character_info_map(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<proto_log::GCGControllerCharactersInfo>(
                    input,
                    v16) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 82 )
              goto handle_unusual;
            v17 = proto_log::GCGLogBodyDuelEnd::add_operation_data_list(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<proto_log::GCGOperationData>(
                    input,
                    v17) )
              goto failure;
            continue;
          default:
            goto handle_unusual;
        }
      }
      break;
    }
handle_unusual:
    if ( !tag )
    {
      result = 1;
      goto LABEL_79;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v18 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v18 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v18->unknown_fields) );
failure:
  result = 0;
LABEL_79:
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3107: range 0000000015014B88-0000000015014F1D
void __cdecl proto_log::GCGLogBodyDuelEnd::SerializeWithCachedSizes(
        const proto_log::GCGLogBodyDuelEnd *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  const proto_log::GCGUseTime *v5; // rcx
  google::protobuf::uint32 v6; // ecx
  google::protobuf::uint32 v7; // ecx
  const proto_log::GCGControllerInfo *v8; // rcx
  const proto_log::GCGControllerDeckInfo *v9; // rcx
  const proto_log::GCGControllerCharactersInfo *v10; // rcx
  const proto_log::GCGOperationData *v11; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v13; // rax
  unsigned int i; // [rsp+1Ch] [rbp-54h]
  unsigned int i_0; // [rsp+20h] [rbp-50h]
  unsigned int i_1; // [rsp+24h] [rbp-4Ch]
  unsigned int i_2; // [rsp+28h] [rbp-48h]
  unsigned int i_3; // [rsp+2Ch] [rbp-44h]
  unsigned int n; // [rsp+34h] [rbp-3Ch]
  unsigned int n_0; // [rsp+38h] [rbp-38h]
  unsigned int n_1; // [rsp+3Ch] [rbp-34h]
  unsigned int n_2; // [rsp+40h] [rbp-30h]
  unsigned int n_3; // [rsp+44h] [rbp-2Ch]

  if ( proto_log::GCGLogBodyDuelEnd::type(this) )
  {
    v2 = proto_log::GCGLogBodyDuelEnd::type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::GCGLogBodyDuelEnd::level_id(this) )
  {
    v3 = proto_log::GCGLogBodyDuelEnd::level_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::GCGLogBodyDuelEnd::total_use_time(this) )
  {
    v4 = proto_log::GCGLogBodyDuelEnd::total_use_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  i = 0;
  n = proto_log::GCGLogBodyDuelEnd::use_time_list_size(this);
  while ( i < n )
  {
    v5 = proto_log::GCGLogBodyDuelEnd::use_time_list(this, i);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(4, v5, output);
    ++i;
  }
  if ( proto_log::GCGLogBodyDuelEnd::winner(this) )
  {
    v6 = proto_log::GCGLogBodyDuelEnd::winner(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(5, v6, output);
  }
  if ( proto_log::GCGLogBodyDuelEnd::reason(this) )
  {
    v7 = proto_log::GCGLogBodyDuelEnd::reason(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(6, v7, output);
  }
  i_0 = 0;
  n_0 = proto_log::GCGLogBodyDuelEnd::controller_info_list_size(this);
  while ( i_0 < n_0 )
  {
    v8 = proto_log::GCGLogBodyDuelEnd::controller_info_list(this, i_0);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(7, v8, output);
    ++i_0;
  }
  i_1 = 0;
  n_1 = proto_log::GCGLogBodyDuelEnd::controller_deck_info_list_size(this);
  while ( i_1 < n_1 )
  {
    v9 = proto_log::GCGLogBodyDuelEnd::controller_deck_info_list(this, i_1);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(8, v9, output);
    ++i_1;
  }
  i_2 = 0;
  n_2 = proto_log::GCGLogBodyDuelEnd::controller_character_info_map_size(this);
  while ( i_2 < n_2 )
  {
    v10 = proto_log::GCGLogBodyDuelEnd::controller_character_info_map(this, i_2);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(9, v10, output);
    ++i_2;
  }
  i_3 = 0;
  n_3 = proto_log::GCGLogBodyDuelEnd::operation_data_list_size(this);
  while ( i_3 < n_3 )
  {
    v11 = proto_log::GCGLogBodyDuelEnd::operation_data_list(this, i_3);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(10, v11, output);
    ++i_3;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_38;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v13 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_38:
      v13 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v13->unknown_fields, output);
  }
};

// Line 3180: range 0000000015014F1E-000000001501534A
google::protobuf::uint8 *__cdecl proto_log::GCGLogBodyDuelEnd::InternalSerializeWithCachedSizesToArray(
        const proto_log::GCGLogBodyDuelEnd *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  const proto_log::GCGUseTime *v6; // rsi
  google::protobuf::uint32 v7; // ecx
  google::protobuf::uint32 v8; // ecx
  const proto_log::GCGControllerInfo *v9; // rsi
  const proto_log::GCGControllerDeckInfo *v10; // rsi
  const proto_log::GCGControllerCharactersInfo *v11; // rsi
  const proto_log::GCGOperationData *v12; // rsi
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v14; // rax
  unsigned int i; // [rsp+2Ch] [rbp-64h]
  unsigned int i_0; // [rsp+30h] [rbp-60h]
  unsigned int i_1; // [rsp+34h] [rbp-5Ch]
  unsigned int i_2; // [rsp+38h] [rbp-58h]
  unsigned int i_3; // [rsp+3Ch] [rbp-54h]
  unsigned int n; // [rsp+44h] [rbp-4Ch]
  unsigned int n_0; // [rsp+48h] [rbp-48h]
  unsigned int n_1; // [rsp+4Ch] [rbp-44h]
  unsigned int n_2; // [rsp+50h] [rbp-40h]
  unsigned int n_3; // [rsp+54h] [rbp-3Ch]

  if ( proto_log::GCGLogBodyDuelEnd::type(this) )
  {
    v3 = proto_log::GCGLogBodyDuelEnd::type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::GCGLogBodyDuelEnd::level_id(this) )
  {
    v4 = proto_log::GCGLogBodyDuelEnd::level_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::GCGLogBodyDuelEnd::total_use_time(this) )
  {
    v5 = proto_log::GCGLogBodyDuelEnd::total_use_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  i = 0;
  n = proto_log::GCGLogBodyDuelEnd::use_time_list_size(this);
  while ( i < n )
  {
    v6 = proto_log::GCGLogBodyDuelEnd::use_time_list(this, i);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<proto_log::GCGUseTime>(
               4,
               v6,
               deterministic,
               target);
    ++i;
  }
  if ( proto_log::GCGLogBodyDuelEnd::winner(this) )
  {
    v7 = proto_log::GCGLogBodyDuelEnd::winner(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, v7, target);
  }
  if ( proto_log::GCGLogBodyDuelEnd::reason(this) )
  {
    v8 = proto_log::GCGLogBodyDuelEnd::reason(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, v8, target);
  }
  i_0 = 0;
  n_0 = proto_log::GCGLogBodyDuelEnd::controller_info_list_size(this);
  while ( i_0 < n_0 )
  {
    v9 = proto_log::GCGLogBodyDuelEnd::controller_info_list(this, i_0);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<proto_log::GCGControllerInfo>(
               7,
               v9,
               deterministic,
               target);
    ++i_0;
  }
  i_1 = 0;
  n_1 = proto_log::GCGLogBodyDuelEnd::controller_deck_info_list_size(this);
  while ( i_1 < n_1 )
  {
    v10 = proto_log::GCGLogBodyDuelEnd::controller_deck_info_list(this, i_1);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<proto_log::GCGControllerDeckInfo>(
               8,
               v10,
               deterministic,
               target);
    ++i_1;
  }
  i_2 = 0;
  n_2 = proto_log::GCGLogBodyDuelEnd::controller_character_info_map_size(this);
  while ( i_2 < n_2 )
  {
    v11 = proto_log::GCGLogBodyDuelEnd::controller_character_info_map(this, i_2);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<proto_log::GCGControllerCharactersInfo>(
               9,
               v11,
               deterministic,
               target);
    ++i_2;
  }
  i_3 = 0;
  n_3 = proto_log::GCGLogBodyDuelEnd::operation_data_list_size(this);
  while ( i_3 < n_3 )
  {
    v12 = proto_log::GCGLogBodyDuelEnd::operation_data_list(this, i_3);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<proto_log::GCGOperationData>(
               10,
               v12,
               deterministic,
               target);
    ++i_3;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_38;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_38:
      v14 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v14->unknown_fields, target);
  }
  return target;
};

// Line 3259: range 000000001501534C-0000000015015705
size_t __cdecl proto_log::GCGLogBodyDuelEnd::ByteSizeLong(const proto_log::GCGLogBodyDuelEnd *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const proto_log::GCGUseTime *v3; // rax
  const proto_log::GCGControllerInfo *v4; // rax
  const proto_log::GCGControllerDeckInfo *v5; // rax
  const proto_log::GCGControllerCharactersInfo *v6; // rax
  const proto_log::GCGOperationData *v7; // rax
  google::protobuf::uint32 v8; // eax
  google::protobuf::uint32 v9; // eax
  google::protobuf::uint32 v10; // eax
  google::protobuf::uint32 v11; // eax
  google::protobuf::uint32 v12; // eax
  unsigned int i; // [rsp+14h] [rbp-5Ch]
  unsigned int i_0; // [rsp+18h] [rbp-58h]
  unsigned int i_1; // [rsp+1Ch] [rbp-54h]
  unsigned int i_2; // [rsp+20h] [rbp-50h]
  unsigned int i_3; // [rsp+24h] [rbp-4Ch]
  unsigned int count; // [rsp+28h] [rbp-48h]
  unsigned int count_0; // [rsp+2Ch] [rbp-44h]
  unsigned int count_1; // [rsp+30h] [rbp-40h]
  unsigned int count_2; // [rsp+34h] [rbp-3Ch]
  unsigned int count_3; // [rsp+38h] [rbp-38h]
  int cached_size; // [rsp+3Ch] [rbp-34h]
  size_t total_size; // [rsp+40h] [rbp-30h]
  size_t total_sizea; // [rsp+40h] [rbp-30h]
  size_t total_sizeb; // [rsp+40h] [rbp-30h]
  size_t total_sizec; // [rsp+40h] [rbp-30h]
  size_t total_sized; // [rsp+40h] [rbp-30h]
  size_t total_sizee; // [rsp+40h] [rbp-30h]

  total_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    total_size = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(&v2->unknown_fields);
  }
  count = proto_log::GCGLogBodyDuelEnd::use_time_list_size(this);
  total_sizea = count + total_size;
  for ( i = 0; i < count; ++i )
  {
    v3 = proto_log::GCGLogBodyDuelEnd::use_time_list(this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<proto_log::GCGUseTime>(v3);
  }
  count_0 = proto_log::GCGLogBodyDuelEnd::controller_info_list_size(this);
  total_sizeb = count_0 + total_sizea;
  for ( i_0 = 0; i_0 < count_0; ++i_0 )
  {
    v4 = proto_log::GCGLogBodyDuelEnd::controller_info_list(this, i_0);
    total_sizeb += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<proto_log::GCGControllerInfo>(v4);
  }
  count_1 = proto_log::GCGLogBodyDuelEnd::controller_deck_info_list_size(this);
  total_sizec = count_1 + total_sizeb;
  for ( i_1 = 0; i_1 < count_1; ++i_1 )
  {
    v5 = proto_log::GCGLogBodyDuelEnd::controller_deck_info_list(this, i_1);
    total_sizec += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<proto_log::GCGControllerDeckInfo>(v5);
  }
  count_2 = proto_log::GCGLogBodyDuelEnd::controller_character_info_map_size(this);
  total_sized = count_2 + total_sizec;
  for ( i_2 = 0; i_2 < count_2; ++i_2 )
  {
    v6 = proto_log::GCGLogBodyDuelEnd::controller_character_info_map(this, i_2);
    total_sized += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<proto_log::GCGControllerCharactersInfo>(v6);
  }
  count_3 = proto_log::GCGLogBodyDuelEnd::operation_data_list_size(this);
  total_sizee = count_3 + total_sized;
  for ( i_3 = 0; i_3 < count_3; ++i_3 )
  {
    v7 = proto_log::GCGLogBodyDuelEnd::operation_data_list(this, i_3);
    total_sizee += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<proto_log::GCGOperationData>(v7);
  }
  if ( proto_log::GCGLogBodyDuelEnd::type(this) )
  {
    v8 = proto_log::GCGLogBodyDuelEnd::type(this);
    total_sizee += google::protobuf::internal::WireFormatLite::UInt32Size(v8) + 1;
  }
  if ( proto_log::GCGLogBodyDuelEnd::level_id(this) )
  {
    v9 = proto_log::GCGLogBodyDuelEnd::level_id(this);
    total_sizee += google::protobuf::internal::WireFormatLite::UInt32Size(v9) + 1;
  }
  if ( proto_log::GCGLogBodyDuelEnd::total_use_time(this) )
  {
    v10 = proto_log::GCGLogBodyDuelEnd::total_use_time(this);
    total_sizee += google::protobuf::internal::WireFormatLite::UInt32Size(v10) + 1;
  }
  if ( proto_log::GCGLogBodyDuelEnd::winner(this) )
  {
    v11 = proto_log::GCGLogBodyDuelEnd::winner(this);
    total_sizee += google::protobuf::internal::WireFormatLite::UInt32Size(v11) + 1;
  }
  if ( proto_log::GCGLogBodyDuelEnd::reason(this) )
  {
    v12 = proto_log::GCGLogBodyDuelEnd::reason(this);
    total_sizee += google::protobuf::internal::WireFormatLite::UInt32Size(v12) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizee);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizee;
};

// Line 3365: range 0000000015015706-000000001501598F
void __cdecl proto_log::GCGLogBodyDuelEnd::MergeFrom(
        proto_log::GCGLogBodyDuelEnd *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::GCGLogBodyDuelEnd *source; // [rsp+28h] [rbp-D8h]
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogBodyDuelEnd::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      3367);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::GCGLogBodyDuelEnd const>(from);
  if ( source )
    proto_log::GCGLogBodyDuelEnd::MergeFrom(this, source);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 3380: range 0000000015015990-0000000015015EB4
void __cdecl proto_log::GCGLogBodyDuelEnd::MergeFrom(
        proto_log::GCGLogBodyDuelEnd *const this,
        const proto_log::GCGLogBodyDuelEnd *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::uint32 v10; // edx
  google::protobuf::uint32 v11; // edx
  google::protobuf::uint32 v12; // edx
  google::protobuf::uint32 v13; // edx
  google::protobuf::uint32 v14; // edx
  char v15; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v17[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogBodyDuelEnd::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v15 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      3382);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v15 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v15 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  p_internal_metadata = &from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v9->unknown_fields);
  }
  google::protobuf::RepeatedPtrField<proto_log::GCGUseTime>::MergeFrom(&this->use_time_list_, &from->use_time_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerInfo>::MergeFrom(
    &this->controller_info_list_,
    &from->controller_info_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerDeckInfo>::MergeFrom(
    &this->controller_deck_info_list_,
    &from->controller_deck_info_list_);
  google::protobuf::RepeatedPtrField<proto_log::GCGControllerCharactersInfo>::MergeFrom(
    &this->controller_character_info_map_,
    &from->controller_character_info_map_);
  google::protobuf::RepeatedPtrField<proto_log::GCGOperationData>::MergeFrom(
    &this->operation_data_list_,
    &from->operation_data_list_);
  if ( proto_log::GCGLogBodyDuelEnd::type(from) )
  {
    v10 = proto_log::GCGLogBodyDuelEnd::type(from);
    proto_log::GCGLogBodyDuelEnd::set_type(this, v10);
  }
  if ( proto_log::GCGLogBodyDuelEnd::level_id(from) )
  {
    v11 = proto_log::GCGLogBodyDuelEnd::level_id(from);
    proto_log::GCGLogBodyDuelEnd::set_level_id(this, v11);
  }
  if ( proto_log::GCGLogBodyDuelEnd::total_use_time(from) )
  {
    v12 = proto_log::GCGLogBodyDuelEnd::total_use_time(from);
    proto_log::GCGLogBodyDuelEnd::set_total_use_time(this, v12);
  }
  if ( proto_log::GCGLogBodyDuelEnd::winner(from) )
  {
    v13 = proto_log::GCGLogBodyDuelEnd::winner(from);
    proto_log::GCGLogBodyDuelEnd::set_winner(this, v13);
  }
  if ( proto_log::GCGLogBodyDuelEnd::reason(from) )
  {
    v14 = proto_log::GCGLogBodyDuelEnd::reason(from);
    proto_log::GCGLogBodyDuelEnd::set_reason(this, v14);
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 3409: range 0000000015015EB6-0000000015015EF3
void __cdecl proto_log::GCGLogBodyDuelEnd::CopyFrom(
        proto_log::GCGLogBodyDuelEnd *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::GCGLogBodyDuelEnd::Clear(this);
    proto_log::GCGLogBodyDuelEnd::MergeFrom(this, from);
  }
};

// Line 3416: range 0000000015015EF4-0000000015015F31
void __cdecl proto_log::GCGLogBodyDuelEnd::CopyFrom(
        proto_log::GCGLogBodyDuelEnd *const this,
        const proto_log::GCGLogBodyDuelEnd *from)
{
  if ( from != this )
  {
    proto_log::GCGLogBodyDuelEnd::Clear(this);
    proto_log::GCGLogBodyDuelEnd::MergeFrom(this, from);
  }
};

// Line 3423: range 0000000015015F32-0000000015015F40
bool __cdecl proto_log::GCGLogBodyDuelEnd::IsInitialized(const proto_log::GCGLogBodyDuelEnd *const this)
{
  return 1;
};

// Line 3427: range 0000000015015F42-0000000015015F73
void __cdecl proto_log::GCGLogBodyDuelEnd::Swap(
        proto_log::GCGLogBodyDuelEnd *const this,
        proto_log::GCGLogBodyDuelEnd *other)
{
  if ( other != this )
    proto_log::GCGLogBodyDuelEnd::InternalSwap(this, other);
};

// Line 3431: range 0000000015015F74-0000000015016209
void __cdecl proto_log::GCGLogBodyDuelEnd::InternalSwap(
        proto_log::GCGLogBodyDuelEnd *const this,
        proto_log::GCGLogBodyDuelEnd *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(&this->use_time_list_, &other->use_time_list_);
  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(
    &this->controller_info_list_,
    &other->controller_info_list_);
  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(
    &this->controller_deck_info_list_,
    &other->controller_deck_info_list_);
  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(
    &this->controller_character_info_map_,
    &other->controller_character_info_map_);
  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(
    &this->operation_data_list_,
    &other->operation_data_list_);
  std::swap<unsigned int>(&this->type_, &other->type_);
  std::swap<unsigned int>(&this->level_id_, &other->level_id_);
  std::swap<unsigned int>(&this->total_use_time_, &other->total_use_time_);
  std::swap<unsigned int>(&this->winner_, &other->winner_);
  std::swap<unsigned int>(&this->reason_, &other->reason_);
  p_internal_metadata = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_internal_metadata);
  if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
LABEL_7:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    google::protobuf::internal::InternalMetadataWithArena::DoSwap(&this->_internal_metadata_, &v3->unknown_fields);
  }
  std::swap<int>(&this->_cached_size_, &other->_cached_size_);
};

// Line 3447: range 000000001501620A-000000001501622A
google::protobuf::Metadata __cdecl proto_log::GCGLogBodyDuelEnd::GetMetadata(
        const proto_log::GCGLogBodyDuelEnd *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[7];
};

// Line 3683: range 000000001501622C-00000000150162EB
void __cdecl proto_log::GCGLogBodyDuelReplay::GCGLogBodyDuelReplay(proto_log::GCGLogBodyDuelReplay *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::GCGLogBodyDuelReplay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::GCGLogBodyDuelReplay::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  proto_log::GCGLogBodyDuelReplay::SharedCtor(this);
};

// Line 3691: range 00000000150162EC-0000000015016522
void __cdecl proto_log::GCGLogBodyDuelReplay::GCGLogBodyDuelReplay(
        proto_log::GCGLogBodyDuelReplay *const this,
        const proto_log::GCGLogBodyDuelReplay *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rcx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::GCGLogBodyDuelReplay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    p_internal_metadata = &from->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v3->unknown_fields);
  }
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->replay_json_str_, v4);
  v5 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->replay_json_str_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->replay_json_str_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->replay_json_str_, v6, from->replay_json_str_);
  }
};

// Line 3703: range 0000000015016524-000000001501658E
void __cdecl proto_log::GCGLogBodyDuelReplay::SharedCtor(proto_log::GCGLogBodyDuelReplay *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->replay_json_str_, v1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 3708: range 0000000015016590-00000000150165F9
void __cdecl proto_log::GCGLogBodyDuelReplay::~GCGLogBodyDuelReplay(proto_log::GCGLogBodyDuelReplay *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::GCGLogBodyDuelReplay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::GCGLogBodyDuelReplay::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 3708: range 00000000150165FA-0000000015016624
void __cdecl proto_log::GCGLogBodyDuelReplay::~GCGLogBodyDuelReplay(proto_log::GCGLogBodyDuelReplay *const this)
{
  proto_log::GCGLogBodyDuelReplay::~GCGLogBodyDuelReplay(this);
  operator delete(this, 0x20uLL);
};

// Line 3713: range 0000000015016626-0000000015016652
void __cdecl proto_log::GCGLogBodyDuelReplay::SharedDtor(proto_log::GCGLogBodyDuelReplay *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->replay_json_str_, v1);
};

// Line 3717: range 0000000015016654-00000000150166A2
void __cdecl proto_log::GCGLogBodyDuelReplay::SetCachedSize(
        const proto_log::GCGLogBodyDuelReplay *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 3722: range 00000000150166A4-00000000150166B5
const google::protobuf::Descriptor *__cdecl proto_log::GCGLogBodyDuelReplay::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[8].descriptor;
};

// Line 3727: range 00000000150166B6-00000000150166C5
const proto_log::GCGLogBodyDuelReplay *__cdecl proto_log::GCGLogBodyDuelReplay::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::InitDefaults();
  return proto_log::GCGLogBodyDuelReplay::internal_default_instance();
};

// Line 3732: range 00000000150166C6-000000001501673A
proto_log::GCGLogBodyDuelReplay *__cdecl proto_log::GCGLogBodyDuelReplay::New(
        const proto_log::GCGLogBodyDuelReplay *const this,
        google::protobuf::Arena *arena)
{
  proto_log::GCGLogBodyDuelReplay *v2; // rbx

  v2 = (proto_log::GCGLogBodyDuelReplay *)operator new(0x20uLL);
  proto_log::GCGLogBodyDuelReplay::GCGLogBodyDuelReplay(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::GCGLogBodyDuelReplay>(arena, v2);
  return v2;
};

// Line 3740: range 000000001501673C-00000000150167CD
void __cdecl proto_log::GCGLogBodyDuelReplay::Clear(proto_log::GCGLogBodyDuelReplay *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->replay_json_str_, v1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 3751: range 00000000150167CE-0000000015017126
bool __cdecl proto_log::GCGLogBodyDuelReplay::MergePartialFromCodedStream(
        proto_log::GCGLogBodyDuelReplay *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v6; // rdx
  const google::protobuf::uint8 *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  int v9; // ecx
  std::pair<unsigned int,bool> v10; // rax
  google::protobuf::uint32 TagFallback; // edx
  bool v12; // cl
  std::string *v13; // rdx
  const std::string *v14; // rax
  unsigned int v15; // r14d
  const std::string *v16; // rax
  google::protobuf::internal::WireFormatLite *v17; // rax
  const char *v18; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v19; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v24[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:3756";
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogBodyDuelReplay::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
  {
    while ( 1 )
    {
      first_byte_or_zero = 0;
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      buffer = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( buffer >= input->buffer_end_ )
        goto LABEL_22;
      v6 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      first_byte_or_zero = *v6;
      v7 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      if ( *(char *)v7 <= 0 )
      {
LABEL_22:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x7F;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 96), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 128) = v10;
      tag = *(_DWORD *)(v2 + 128);
      if ( *(_BYTE *)(v2 + 132) != 1
        || google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag) != 1
        || (_BYTE)tag != 10 )
      {
        break;
      }
      v13 = proto_log::GCGLogBodyDuelReplay::mutable_replay_json_str[abi:cxx11](this);
      if ( google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
      {
        v14 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
        v15 = std::string::length(v14);
        v16 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
        v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
        if ( (unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                v17,
                                (const char *)v15,
                                0,
                                (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogBodyDuelReplay.replay_json_str",
                                v18) )
          continue;
      }
      goto failure;
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_44;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v19 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v19 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v19->unknown_fields) );
failure:
  result = 0;
LABEL_44:
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3797: range 0000000015017128-00000000150172BA
void __cdecl proto_log::GCGLogBodyDuelReplay::SerializeWithCachedSizes(
        const proto_log::GCGLogBodyDuelReplay *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const std::string *v2; // rax
  const std::string *v3; // rax
  unsigned int v4; // ebx
  const std::string *v5; // rax
  google::protobuf::internal::WireFormatLite *v6; // rax
  const char *v7; // r8
  const std::string *v8; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v10; // rax

  v2 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
  if ( std::string::size(v2) )
  {
    v3 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
    v4 = std::string::length(v3);
    v5 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
    v6 = (google::protobuf::internal::WireFormatLite *)std::string::data(v5);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v6,
      (const char *)v4,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogBodyDuelReplay.replay_json_str",
      v7);
    v8 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, v8, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_15:
      v10 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v10->unknown_fields, output);
  }
};

// Line 3820: range 00000000150172BC-000000001501745E
google::protobuf::uint8 *__cdecl proto_log::GCGLogBodyDuelReplay::InternalSerializeWithCachedSizesToArray(
        const proto_log::GCGLogBodyDuelReplay *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const std::string *v3; // rax
  const std::string *v4; // rax
  unsigned int v5; // ebx
  const std::string *v6; // rax
  google::protobuf::internal::WireFormatLite *v7; // rax
  const char *v8; // r8
  const std::string *v9; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v11; // rax

  v3 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogBodyDuelReplay.replay_json_str",
      v8);
    v9 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(1, v9, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v11 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_15:
      v11 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v11->unknown_fields, target);
  }
  return target;
};

// Line 3845: range 0000000015017460-00000000150175EE
size_t __cdecl proto_log::GCGLogBodyDuelReplay::ByteSizeLong(const proto_log::GCGLogBodyDuelReplay *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  int cached_size; // [rsp+1Ch] [rbp-34h]
  size_t total_size; // [rsp+20h] [rbp-30h]

  total_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v2 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    total_size = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(&v2->unknown_fields);
  }
  v3 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 3868: range 00000000150175F0-0000000015017879
void __cdecl proto_log::GCGLogBodyDuelReplay::MergeFrom(
        proto_log::GCGLogBodyDuelReplay *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::GCGLogBodyDuelReplay *source; // [rsp+28h] [rbp-D8h]
  char v11[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogBodyDuelReplay::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      3870);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::GCGLogBodyDuelReplay const>(from);
  if ( source )
    proto_log::GCGLogBodyDuelReplay::MergeFrom(this, source);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 3883: range 000000001501787A-0000000015017C50
void __cdecl proto_log::GCGLogBodyDuelReplay::MergeFrom(
        proto_log::GCGLogBodyDuelReplay *const this,
        const proto_log::GCGLogBodyDuelReplay *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  const std::string *v10; // rax
  const std::string *v11; // rcx
  char v12; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v14[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogBodyDuelReplay::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v12 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/gcg/gcg_body.pb.cc",
      3885);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v12 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v12 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  p_internal_metadata = &from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&from->_internal_metadata_);
  if ( ((__int64)from->_internal_metadata_.ptr_ & 1) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::InternalMetadataWithArena::DoMergeFrom(&this->_internal_metadata_, &v9->unknown_fields);
  }
  v10 = proto_log::GCGLogBodyDuelReplay::replay_json_str[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->replay_json_str_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->replay_json_str_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->replay_json_str_, v11, from->replay_json_str_);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 3896: range 0000000015017C52-0000000015017C8F
void __cdecl proto_log::GCGLogBodyDuelReplay::CopyFrom(
        proto_log::GCGLogBodyDuelReplay *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::GCGLogBodyDuelReplay::Clear(this);
    proto_log::GCGLogBodyDuelReplay::MergeFrom(this, from);
  }
};

// Line 3903: range 0000000015017C90-0000000015017CCD
void __cdecl proto_log::GCGLogBodyDuelReplay::CopyFrom(
        proto_log::GCGLogBodyDuelReplay *const this,
        const proto_log::GCGLogBodyDuelReplay *from)
{
  if ( from != this )
  {
    proto_log::GCGLogBodyDuelReplay::Clear(this);
    proto_log::GCGLogBodyDuelReplay::MergeFrom(this, from);
  }
};

// Line 3910: range 0000000015017CCE-0000000015017CDC
bool __cdecl proto_log::GCGLogBodyDuelReplay::IsInitialized(const proto_log::GCGLogBodyDuelReplay *const this)
{
  return 1;
};

// Line 3914: range 0000000015017CDE-0000000015017D0F
void __cdecl proto_log::GCGLogBodyDuelReplay::Swap(
        proto_log::GCGLogBodyDuelReplay *const this,
        proto_log::GCGLogBodyDuelReplay *other)
{
  if ( other != this )
    proto_log::GCGLogBodyDuelReplay::InternalSwap(this, other);
};

// Line 3918: range 0000000015017D10-0000000015017EA5
void __cdecl proto_log::GCGLogBodyDuelReplay::InternalSwap(
        proto_log::GCGLogBodyDuelReplay *const this,
        proto_log::GCGLogBodyDuelReplay *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-50h]

  std::swap<std::string *>(&this->replay_json_str_.ptr_, &other->replay_json_str_.ptr_);
  p_internal_metadata = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_internal_metadata);
  if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
LABEL_7:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_internal_metadata);
    if ( ((__int64)p_internal_metadata->ptr_ & 1) == 1 )
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    google::protobuf::internal::InternalMetadataWithArena::DoSwap(&this->_internal_metadata_, &v3->unknown_fields);
  }
  std::swap<int>(&this->_cached_size_, &other->_cached_size_);
};

// Line 3925: range 0000000015017EA6-0000000015017EC6
google::protobuf::Metadata __cdecl proto_log::GCGLogBodyDuelReplay::GetMetadata(
        const proto_log::GCGLogBodyDuelReplay *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fbody_2eproto::`anonymous namespace'::file_level_metadata[8];
};

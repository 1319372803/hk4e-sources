// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/log/client/client_body_common.pb.cc

// Line 95: range 000000001821382E-00000000182139F7
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "log/client/client_body_common.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::schemas,
    (int)proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::file_default_instances,
    (int)proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata,
    0LL,
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

// Line 103: range 00000000182139F8-0000000018213A11
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 109: range 0000000018213A12-0000000018213A36
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata,
    2);
};

// Line 115: range 0000000018213A38-0000000018213A95
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/log/client/client_body_common.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::ClientLogBodyLogin>::DefaultConstruct(&proto_log::_ClientLogBodyLogin_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_ClientLogBodyLogin_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::ClientLogBodyPing>::DefaultConstruct(&proto_log::_ClientLogBodyPing_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_ClientLogBodyPing_default_instance_,
    (const void *)0x2DD660);
};

// Line 125: range 0000000018213A96-0000000018213AB2
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 130: range 0000000018213AB3-0000000018213AE2
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 151: range 0000000018213AE3-0000000018213AFC
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 157: range 0000000018E4CD2A-0000000018E4CD3D
void __cdecl proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::AddDescriptors();
};

// Line 176: range 0000000018213AFE-0000000018213BBD
void __cdecl proto_log::ClientLogBodyLogin::ClientLogBodyLogin(proto_log::ClientLogBodyLogin *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::ClientLogBodyLogin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::ClientLogBodyLogin::internal_default_instance() )
    proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::ClientLogBodyLogin::SharedCtor(this);
};

// Line 184: range 0000000018213BBE-000000001821406C
void __cdecl proto_log::ClientLogBodyLogin::ClientLogBodyLogin(
        proto_log::ClientLogBodyLogin *const this,
        const proto_log::ClientLogBodyLogin *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rcx
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rcx
  const std::string *v10; // rax
  const std::string *v11; // rax
  const std::string *v12; // rcx
  const std::string *v13; // rax
  const std::string *v14; // rax
  const std::string *v15; // rcx
  __int64 p_action_time; // rsi
  google::protobuf::uint32 *v17; // rcx
  google::protobuf::uint32 *v18; // rdi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::ClientLogBodyLogin + 2);
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_type_, v4);
  v5 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_type_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_type_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_type_, v6, from->action_type_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_result_, v7);
  v8 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_result_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_result_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_result_, v9, from->action_result_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->xg_, v10);
  v11 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->xg_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->xg_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->xg_, v12, from->xg_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->dns_, v13);
  v14 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->dns_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->dns_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->dns_, v15, from->dns_);
  }
  p_action_time = (__int64)&from->action_time_;
  v17 = &this->action_time_;
  if ( (((unsigned __int8)from + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&from->action_time_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->action_time_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->signal_level_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&from->signal_level_ + 3) >> 3) + 0x7FFF8000) )
  {
    p_action_time = 8LL;
    __asan_report_load_n(&from->action_time_, 8LL);
  }
  v18 = *(google::protobuf::uint32 **)p_action_time;
  if ( ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)v17 + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v17 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v17 + 7) >> 3) + 0x7FFF8000) )
  {
    v18 = v17;
    __asan_report_store_n(v17, 8LL);
  }
  *(_QWORD *)v17 = v18;
};

// Line 211: range 000000001821406E-000000001821413A
void __cdecl proto_log::ClientLogBodyLogin::SharedCtor(proto_log::ClientLogBodyLogin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_type_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_result_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->xg_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->dns_, v4);
  memset(&this->action_time_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 222: range 000000001821413C-00000000182141A5
void __cdecl proto_log::ClientLogBodyLogin::~ClientLogBodyLogin(proto_log::ClientLogBodyLogin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::ClientLogBodyLogin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::ClientLogBodyLogin::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 222: range 00000000182141A6-00000000182141D0
void __cdecl proto_log::ClientLogBodyLogin::~ClientLogBodyLogin(proto_log::ClientLogBodyLogin *const this)
{
  proto_log::ClientLogBodyLogin::~ClientLogBodyLogin(this);
  operator delete(this, 0x40uLL);
};

// Line 227: range 00000000182141D2-0000000018214246
void __cdecl proto_log::ClientLogBodyLogin::SharedDtor(proto_log::ClientLogBodyLogin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->action_type_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->action_result_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->xg_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->dns_, v4);
};

// Line 234: range 0000000018214248-0000000018214296
void __cdecl proto_log::ClientLogBodyLogin::SetCachedSize(const proto_log::ClientLogBodyLogin *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 239: range 0000000018214298-00000000182142A9
const google::protobuf::Descriptor *__cdecl proto_log::ClientLogBodyLogin::descriptor()
{
  proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 244: range 00000000182142AA-00000000182142B9
const proto_log::ClientLogBodyLogin *__cdecl proto_log::ClientLogBodyLogin::default_instance()
{
  proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::ClientLogBodyLogin::internal_default_instance();
};

// Line 249: range 00000000182142BA-000000001821432E
proto_log::ClientLogBodyLogin *__cdecl proto_log::ClientLogBodyLogin::New(
        const proto_log::ClientLogBodyLogin *const this,
        google::protobuf::Arena *arena)
{
  proto_log::ClientLogBodyLogin *v2; // rbx

  v2 = (proto_log::ClientLogBodyLogin *)operator new(0x40uLL);
  proto_log::ClientLogBodyLogin::ClientLogBodyLogin(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::ClientLogBodyLogin>(arena, v2);
  return v2;
};

// Line 257: range 0000000018214330-0000000018214423
void __cdecl proto_log::ClientLogBodyLogin::Clear(proto_log::ClientLogBodyLogin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->action_type_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->action_result_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->xg_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->dns_, v4);
  memset(&this->action_time_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 274: range 0000000018214424-0000000018215036
bool __cdecl proto_log::ClientLogBodyLogin::MergePartialFromCodedStream(
        proto_log::ClientLogBodyLogin *const this,
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
  std::string *v19; // rdx
  const std::string *v20; // rax
  unsigned int v21; // r14d
  const std::string *v22; // rax
  google::protobuf::internal::WireFormatLite *v23; // rax
  const char *v24; // r8
  std::string *v25; // rdx
  const std::string *v26; // rax
  unsigned int v27; // r14d
  const std::string *v28; // rax
  google::protobuf::internal::WireFormatLite *v29; // rax
  const char *v30; // r8
  std::string *v31; // rdx
  const std::string *v32; // rax
  unsigned int v33; // r14d
  const std::string *v34; // rax
  google::protobuf::internal::WireFormatLite *v35; // rax
  const char *v36; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v37; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v42[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:279";
  *(_QWORD *)(v2 + 16) = proto_log::ClientLogBodyLogin::MergePartialFromCodedStream;
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
            if ( (_BYTE)tag != 10 )
              break;
            v13 = proto_log::ClientLogBodyLogin::mutable_action_type[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.action_type",
                                     v18) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 18 )
              goto handle_unusual;
            v19 = proto_log::ClientLogBodyLogin::mutable_action_result[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.action_result",
                                     v24) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->action_time_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v25 = proto_log::ClientLogBodyLogin::mutable_xg[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.xg",
                                     v30) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->signal_level_) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 50 )
              goto handle_unusual;
            v31 = proto_log::ClientLogBodyLogin::mutable_dns[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v31) )
              goto failure;
            v32 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
            v33 = std::string::length(v32);
            v34 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
            v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v35,
                                     (const char *)v33,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.dns",
                                     v36) )
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
      goto LABEL_67;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v37 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v37 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v37->unknown_fields) );
failure:
  result = 0;
LABEL_67:
  if ( v42 == (char *)v2 )
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

// Line 396: range 0000000018215038-00000000182153B9
void __cdecl proto_log::ClientLogBodyLogin::SerializeWithCachedSizes(
        const proto_log::ClientLogBodyLogin *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const std::string *v2; // rax
  const std::string *v3; // rax
  unsigned int v4; // ebx
  const std::string *v5; // rax
  google::protobuf::internal::WireFormatLite *v6; // rax
  const char *v7; // r8
  const std::string *v8; // rcx
  const std::string *v9; // rax
  const std::string *v10; // rax
  unsigned int v11; // ebx
  const std::string *v12; // rax
  google::protobuf::internal::WireFormatLite *v13; // rax
  const char *v14; // r8
  const std::string *v15; // rcx
  google::protobuf::uint32 v16; // ecx
  const std::string *v17; // rax
  const std::string *v18; // rax
  unsigned int v19; // ebx
  const std::string *v20; // rax
  google::protobuf::internal::WireFormatLite *v21; // rax
  const char *v22; // r8
  const std::string *v23; // rcx
  google::protobuf::uint32 v24; // ecx
  const std::string *v25; // rax
  const std::string *v26; // rax
  unsigned int v27; // ebx
  const std::string *v28; // rax
  google::protobuf::internal::WireFormatLite *v29; // rax
  const char *v30; // r8
  const std::string *v31; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v33; // rax

  v2 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
  if ( std::string::size(v2) )
  {
    v3 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
    v4 = std::string::length(v3);
    v5 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
    v6 = (google::protobuf::internal::WireFormatLite *)std::string::data(v5);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v6,
      (const char *)v4,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.action_type",
      v7);
    v8 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, v8, output);
  }
  v9 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
    v11 = std::string::length(v10);
    v12 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
    v13 = (google::protobuf::internal::WireFormatLite *)std::string::data(v12);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v13,
      (const char *)v11,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.action_result",
      v14);
    v15 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v15, output);
  }
  if ( proto_log::ClientLogBodyLogin::action_time(this) )
  {
    v16 = proto_log::ClientLogBodyLogin::action_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v16, output);
  }
  v17 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
    v19 = std::string::length(v18);
    v20 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
    v21 = (google::protobuf::internal::WireFormatLite *)std::string::data(v20);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v21,
      (const char *)v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.xg",
      v22);
    v23 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v23, output);
  }
  if ( proto_log::ClientLogBodyLogin::signal_level(this) )
  {
    v24 = proto_log::ClientLogBodyLogin::signal_level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(5, v24, output);
  }
  v25 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
  if ( std::string::size(v25) )
  {
    v26 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
    v27 = std::string::length(v26);
    v28 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
    v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v29,
      (const char *)v27,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.dns",
      v30);
    v31 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, v31, output);
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
      v33 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_25:
      v33 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v33->unknown_fields, output);
  }
};

// Line 459: range 00000000182153BA-000000001821575F
google::protobuf::uint8 *__cdecl proto_log::ClientLogBodyLogin::InternalSerializeWithCachedSizesToArray(
        const proto_log::ClientLogBodyLogin *const this,
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
  const std::string *v10; // rax
  const std::string *v11; // rax
  unsigned int v12; // ebx
  const std::string *v13; // rax
  google::protobuf::internal::WireFormatLite *v14; // rax
  const char *v15; // r8
  const std::string *v16; // rcx
  google::protobuf::uint32 v17; // ecx
  const std::string *v18; // rax
  const std::string *v19; // rax
  unsigned int v20; // ebx
  const std::string *v21; // rax
  google::protobuf::internal::WireFormatLite *v22; // rax
  const char *v23; // r8
  const std::string *v24; // rcx
  google::protobuf::uint32 v25; // ecx
  const std::string *v26; // rax
  const std::string *v27; // rax
  unsigned int v28; // ebx
  const std::string *v29; // rax
  google::protobuf::internal::WireFormatLite *v30; // rax
  const char *v31; // r8
  const std::string *v32; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v34; // rax

  v3 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.action_type",
      v8);
    v9 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(1, v9, target);
  }
  v10 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.action_result",
      v15);
    v16 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v16, target);
  }
  if ( proto_log::ClientLogBodyLogin::action_time(this) )
  {
    v17 = proto_log::ClientLogBodyLogin::action_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v17, target);
  }
  v18 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.xg",
      v23);
    v24 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v24, target);
  }
  if ( proto_log::ClientLogBodyLogin::signal_level(this) )
  {
    v25 = proto_log::ClientLogBodyLogin::signal_level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, v25, target);
  }
  v26 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
  if ( std::string::size(v26) )
  {
    v27 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
    v28 = std::string::length(v27);
    v29 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
    v30 = (google::protobuf::internal::WireFormatLite *)std::string::data(v29);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v30,
      (const char *)v28,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyLogin.dns",
      v31);
    v32 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(6, v32, target);
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
      v34 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_25:
      v34 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v34->unknown_fields, target);
  }
  return target;
};

// Line 527: range 0000000018215760-00000000182159FC
size_t __cdecl proto_log::ClientLogBodyLogin::ByteSizeLong(const proto_log::ClientLogBodyLogin *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  google::protobuf::uint32 v11; // eax
  google::protobuf::uint32 v12; // eax
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
  v3 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  if ( proto_log::ClientLogBodyLogin::action_time(this) )
  {
    v11 = proto_log::ClientLogBodyLogin::action_time(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v11) + 1;
  }
  if ( proto_log::ClientLogBodyLogin::signal_level(this) )
  {
    v12 = proto_log::ClientLogBodyLogin::signal_level(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v12) + 1;
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

// Line 585: range 00000000182159FE-0000000018215C87
void __cdecl proto_log::ClientLogBodyLogin::MergeFrom(
        proto_log::ClientLogBodyLogin *const this,
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
  const proto_log::ClientLogBodyLogin *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::ClientLogBodyLogin::MergeFrom;
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
      "./src/log/client/client_body_common.pb.cc",
      587);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::ClientLogBodyLogin const>(from);
  if ( source )
    proto_log::ClientLogBodyLogin::MergeFrom(this, source);
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

// Line 600: range 0000000018215C88-000000001821622D
void __cdecl proto_log::ClientLogBodyLogin::MergeFrom(
        proto_log::ClientLogBodyLogin *const this,
        const proto_log::ClientLogBodyLogin *from)
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
  const std::string *v12; // rax
  const std::string *v13; // rcx
  const std::string *v14; // rax
  const std::string *v15; // rcx
  const std::string *v16; // rax
  const std::string *v17; // rcx
  google::protobuf::uint32 v18; // edx
  google::protobuf::uint32 v19; // edx
  char v20; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v22[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::ClientLogBodyLogin::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v20 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/log/client/client_body_common.pb.cc",
      602);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v20 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v20 )
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
  v10 = proto_log::ClientLogBodyLogin::action_type[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_type_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_type_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_type_, v11, from->action_type_);
  }
  v12 = proto_log::ClientLogBodyLogin::action_result[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_result_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_result_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_result_, v13, from->action_result_);
  }
  v14 = proto_log::ClientLogBodyLogin::xg[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->xg_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->xg_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->xg_, v15, from->xg_);
  }
  v16 = proto_log::ClientLogBodyLogin::dns[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->dns_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->dns_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->dns_, v17, from->dns_);
  }
  if ( proto_log::ClientLogBodyLogin::action_time(from) )
  {
    v18 = proto_log::ClientLogBodyLogin::action_time(from);
    proto_log::ClientLogBodyLogin::set_action_time(this, v18);
  }
  if ( proto_log::ClientLogBodyLogin::signal_level(from) )
  {
    v19 = proto_log::ClientLogBodyLogin::signal_level(from);
    proto_log::ClientLogBodyLogin::set_signal_level(this, v19);
  }
  if ( v22 == (char *)v2 )
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

// Line 631: range 000000001821622E-0000000018216268
void __cdecl proto_log::ClientLogBodyLogin::CopyFrom(
        proto_log::ClientLogBodyLogin *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::ClientLogBodyLogin::Clear(this);
    proto_log::ClientLogBodyLogin::MergeFrom(this, from);
  }
};

// Line 638: range 000000001821626A-00000000182162A4
void __cdecl proto_log::ClientLogBodyLogin::CopyFrom(
        proto_log::ClientLogBodyLogin *const this,
        const proto_log::ClientLogBodyLogin *from)
{
  if ( from != this )
  {
    proto_log::ClientLogBodyLogin::Clear(this);
    proto_log::ClientLogBodyLogin::MergeFrom(this, from);
  }
};

// Line 645: range 00000000182162A6-00000000182162B4
bool __cdecl proto_log::ClientLogBodyLogin::IsInitialized(const proto_log::ClientLogBodyLogin *const this)
{
  return 1;
};

// Line 649: range 00000000182162B6-00000000182162E4
void __cdecl proto_log::ClientLogBodyLogin::Swap(
        proto_log::ClientLogBodyLogin *const this,
        proto_log::ClientLogBodyLogin *other)
{
  if ( other != this )
    proto_log::ClientLogBodyLogin::InternalSwap(this, other);
};

// Line 653: range 00000000182162E6-0000000018216577
void __cdecl proto_log::ClientLogBodyLogin::InternalSwap(
        proto_log::ClientLogBodyLogin *const this,
        proto_log::ClientLogBodyLogin *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-80h]

  std::swap<std::string *>(&this->action_type_.ptr_, &other->action_type_.ptr_);
  std::swap<std::string *>(&this->action_result_.ptr_, &other->action_result_.ptr_);
  std::swap<std::string *>(&this->xg_.ptr_, &other->xg_.ptr_);
  std::swap<std::string *>(&this->dns_.ptr_, &other->dns_.ptr_);
  std::swap<unsigned int>(&this->action_time_, &other->action_time_);
  std::swap<unsigned int>(&this->signal_level_, &other->signal_level_);
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

// Line 665: range 0000000018216578-0000000018216598
google::protobuf::Metadata __cdecl proto_log::ClientLogBodyLogin::GetMetadata(
        const proto_log::ClientLogBodyLogin *const this)
{
  proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[0];
};

// Line 929: range 000000001821659A-0000000018216659
void __cdecl proto_log::ClientLogBodyPing::ClientLogBodyPing(proto_log::ClientLogBodyPing *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::ClientLogBodyPing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::ClientLogBodyPing::internal_default_instance() )
    proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::ClientLogBodyPing::SharedCtor(this);
};

// Line 937: range 000000001821665A-0000000018216B91
void __cdecl proto_log::ClientLogBodyPing::ClientLogBodyPing(
        proto_log::ClientLogBodyPing *const this,
        const proto_log::ClientLogBodyPing *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rcx
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rcx
  const std::string *v10; // rax
  const std::string *v11; // rax
  const std::string *v12; // rcx
  const std::string *v13; // rax
  const std::string *v14; // rax
  const std::string *v15; // rcx
  const std::string *v16; // rax
  const std::string *v17; // rax
  const std::string *v18; // rcx
  google::protobuf::uint32 *p_signal_level; // rcx
  unsigned __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::ClientLogBodyPing + 2);
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->xg_, v4);
  v5 = proto_log::ClientLogBodyPing::xg[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->xg_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->xg_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->xg_, v6, from->xg_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->servertype_, v7);
  v8 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->servertype_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->servertype_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->servertype_, v9, from->servertype_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->serverip_, v10);
  v11 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->serverip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->serverip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->serverip_, v12, from->serverip_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->serverport_, v13);
  v14 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->serverport_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->serverport_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->serverport_, v15, from->serverport_);
  }
  v16 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->dns_, v16);
  v17 = proto_log::ClientLogBodyPing::dns[abi:cxx11](from);
  if ( std::string::size(v17) )
  {
    v18 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->dns_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->dns_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->dns_, v18, from->dns_);
  }
  p_signal_level = &from->signal_level_;
  v20 = (unsigned __int64)&this->signal_level_;
  if ( (((unsigned __int8)from + 56) & 7) >= *(_BYTE *)(((unsigned __int64)&from->signal_level_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->signal_level_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->plost_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&from->plost_ + 3) >> 3) + 0x7FFF8000) )
  {
    v20 = 16LL;
    __asan_report_load_n(&from->signal_level_, 16LL);
  }
  v21 = *((_QWORD *)p_signal_level + 1);
  v22 = *(_QWORD *)p_signal_level;
  v23 = v20;
  if ( (char)(v20 & 7) >= *(_BYTE *)((v20 >> 3) + 0x7FFF8000) && *(_BYTE *)((v20 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v20 + 15) >> 3) + 0x7FFF8000) != 0
    && (char)((v20 + 15) & 7) >= *(_BYTE *)(((v20 + 15) >> 3) + 0x7FFF8000) )
  {
    v20 = 16LL;
    __asan_report_store_n(v23, 16LL);
  }
  *(_QWORD *)v20 = v22;
  *(_QWORD *)(v20 + 8) = v21;
};

// Line 968: range 0000000018216B92-0000000018216C76
void __cdecl proto_log::ClientLogBodyPing::SharedCtor(proto_log::ClientLogBodyPing *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->xg_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->servertype_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->serverip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->serverport_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->dns_, v5);
  memset(&this->signal_level_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 980: range 0000000018216C78-0000000018216CE1
void __cdecl proto_log::ClientLogBodyPing::~ClientLogBodyPing(proto_log::ClientLogBodyPing *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::ClientLogBodyPing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::ClientLogBodyPing::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 980: range 0000000018216CE2-0000000018216D0C
void __cdecl proto_log::ClientLogBodyPing::~ClientLogBodyPing(proto_log::ClientLogBodyPing *const this)
{
  proto_log::ClientLogBodyPing::~ClientLogBodyPing(this);
  operator delete(this, 0x50uLL);
};

// Line 985: range 0000000018216D0E-0000000018216D9A
void __cdecl proto_log::ClientLogBodyPing::SharedDtor(proto_log::ClientLogBodyPing *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->xg_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->servertype_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->serverip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->serverport_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->dns_, v5);
};

// Line 993: range 0000000018216D9C-0000000018216DEA
void __cdecl proto_log::ClientLogBodyPing::SetCachedSize(const proto_log::ClientLogBodyPing *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 998: range 0000000018216DEC-0000000018216DFD
const google::protobuf::Descriptor *__cdecl proto_log::ClientLogBodyPing::descriptor()
{
  proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 1003: range 0000000018216DFE-0000000018216E0D
const proto_log::ClientLogBodyPing *__cdecl proto_log::ClientLogBodyPing::default_instance()
{
  proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::ClientLogBodyPing::internal_default_instance();
};

// Line 1008: range 0000000018216E0E-0000000018216E82
proto_log::ClientLogBodyPing *__cdecl proto_log::ClientLogBodyPing::New(
        const proto_log::ClientLogBodyPing *const this,
        google::protobuf::Arena *arena)
{
  proto_log::ClientLogBodyPing *v2; // rbx

  v2 = (proto_log::ClientLogBodyPing *)operator new(0x50uLL);
  proto_log::ClientLogBodyPing::ClientLogBodyPing(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::ClientLogBodyPing>(arena, v2);
  return v2;
};

// Line 1016: range 0000000018216E84-0000000018216F8F
void __cdecl proto_log::ClientLogBodyPing::Clear(proto_log::ClientLogBodyPing *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->xg_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->servertype_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->serverip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->serverport_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->dns_, v5);
  memset(&this->signal_level_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 1034: range 0000000018216F90-0000000018217CE3
bool __cdecl proto_log::ClientLogBodyPing::MergePartialFromCodedStream(
        proto_log::ClientLogBodyPing *const this,
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
  std::string *v19; // rdx
  const std::string *v20; // rax
  unsigned int v21; // r14d
  const std::string *v22; // rax
  google::protobuf::internal::WireFormatLite *v23; // rax
  const char *v24; // r8
  std::string *v25; // rdx
  const std::string *v26; // rax
  unsigned int v27; // r14d
  const std::string *v28; // rax
  google::protobuf::internal::WireFormatLite *v29; // rax
  const char *v30; // r8
  std::string *v31; // rdx
  const std::string *v32; // rax
  unsigned int v33; // r14d
  const std::string *v34; // rax
  google::protobuf::internal::WireFormatLite *v35; // rax
  const char *v36; // r8
  std::string *v37; // rdx
  const std::string *v38; // rax
  unsigned int v39; // r14d
  const std::string *v40; // rax
  google::protobuf::internal::WireFormatLite *v41; // rax
  const char *v42; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v43; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v48[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:1039";
  *(_QWORD *)(v2 + 16) = proto_log::ClientLogBodyPing::MergePartialFromCodedStream;
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
            if ( (_BYTE)tag != 10 )
              break;
            v13 = proto_log::ClientLogBodyPing::mutable_xg[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.xg",
                                     v18) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->signal_level_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->ping_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v19 = proto_log::ClientLogBodyPing::mutable_servertype[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.servertype",
                                     v24) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v25 = proto_log::ClientLogBodyPing::mutable_serverip[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.serverip",
                                     v30) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 50 )
              goto handle_unusual;
            v31 = proto_log::ClientLogBodyPing::mutable_serverport[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v31) )
              goto failure;
            v32 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
            v33 = std::string::length(v32);
            v34 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
            v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v35,
                                     (const char *)v33,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.serverport",
                                     v36) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 56 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->pcount_) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->plost_) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 74 )
              goto handle_unusual;
            v37 = proto_log::ClientLogBodyPing::mutable_dns[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v37) )
              goto failure;
            v38 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
            v39 = std::string::length(v38);
            v40 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
            v41 = (google::protobuf::internal::WireFormatLite *)std::string::data(v40);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v41,
                                     (const char *)v39,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.dns",
                                     v42) )
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
      goto LABEL_80;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v43 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v43 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v43->unknown_fields) );
failure:
  result = 0;
LABEL_80:
  if ( v48 == (char *)v2 )
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

// Line 1200: range 0000000018217CE4-0000000018218152
void __cdecl proto_log::ClientLogBodyPing::SerializeWithCachedSizes(
        const proto_log::ClientLogBodyPing *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const std::string *v2; // rax
  const std::string *v3; // rax
  unsigned int v4; // ebx
  const std::string *v5; // rax
  google::protobuf::internal::WireFormatLite *v6; // rax
  const char *v7; // r8
  const std::string *v8; // rcx
  google::protobuf::uint32 v9; // ecx
  google::protobuf::uint32 v10; // ecx
  const std::string *v11; // rax
  const std::string *v12; // rax
  unsigned int v13; // ebx
  const std::string *v14; // rax
  google::protobuf::internal::WireFormatLite *v15; // rax
  const char *v16; // r8
  const std::string *v17; // rcx
  const std::string *v18; // rax
  const std::string *v19; // rax
  unsigned int v20; // ebx
  const std::string *v21; // rax
  google::protobuf::internal::WireFormatLite *v22; // rax
  const char *v23; // r8
  const std::string *v24; // rcx
  const std::string *v25; // rax
  const std::string *v26; // rax
  unsigned int v27; // ebx
  const std::string *v28; // rax
  google::protobuf::internal::WireFormatLite *v29; // rax
  const char *v30; // r8
  const std::string *v31; // rcx
  google::protobuf::uint32 v32; // ecx
  google::protobuf::uint32 v33; // ecx
  const std::string *v34; // rax
  const std::string *v35; // rax
  unsigned int v36; // ebx
  const std::string *v37; // rax
  google::protobuf::internal::WireFormatLite *v38; // rax
  const char *v39; // r8
  const std::string *v40; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v42; // rax

  v2 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
  if ( std::string::size(v2) )
  {
    v3 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
    v4 = std::string::length(v3);
    v5 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
    v6 = (google::protobuf::internal::WireFormatLite *)std::string::data(v5);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v6,
      (const char *)v4,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.xg",
      v7);
    v8 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, v8, output);
  }
  if ( proto_log::ClientLogBodyPing::signal_level(this) )
  {
    v9 = proto_log::ClientLogBodyPing::signal_level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v9, output);
  }
  if ( proto_log::ClientLogBodyPing::ping(this) )
  {
    v10 = proto_log::ClientLogBodyPing::ping(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v10, output);
  }
  v11 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.servertype",
      v16);
    v17 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v17, output);
  }
  v18 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.serverip",
      v23);
    v24 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v24, output);
  }
  v25 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
  if ( std::string::size(v25) )
  {
    v26 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
    v27 = std::string::length(v26);
    v28 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
    v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v29,
      (const char *)v27,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.serverport",
      v30);
    v31 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, v31, output);
  }
  if ( proto_log::ClientLogBodyPing::pcount(this) )
  {
    v32 = proto_log::ClientLogBodyPing::pcount(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(7, v32, output);
  }
  if ( proto_log::ClientLogBodyPing::plost(this) )
  {
    v33 = proto_log::ClientLogBodyPing::plost(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(8, v33, output);
  }
  v34 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
  if ( std::string::size(v34) )
  {
    v35 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
    v36 = std::string::length(v35);
    v37 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
    v38 = (google::protobuf::internal::WireFormatLite *)std::string::data(v37);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v38,
      (const char *)v36,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.dns",
      v39);
    v40 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(9LL, v40, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_31;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v42 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_31:
      v42 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v42->unknown_fields, output);
  }
};

// Line 1283: range 0000000018218154-00000000182185F2
google::protobuf::uint8 *__cdecl proto_log::ClientLogBodyPing::InternalSerializeWithCachedSizesToArray(
        const proto_log::ClientLogBodyPing *const this,
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
  google::protobuf::uint32 v10; // ecx
  google::protobuf::uint32 v11; // ecx
  const std::string *v12; // rax
  const std::string *v13; // rax
  unsigned int v14; // ebx
  const std::string *v15; // rax
  google::protobuf::internal::WireFormatLite *v16; // rax
  const char *v17; // r8
  const std::string *v18; // rcx
  const std::string *v19; // rax
  const std::string *v20; // rax
  unsigned int v21; // ebx
  const std::string *v22; // rax
  google::protobuf::internal::WireFormatLite *v23; // rax
  const char *v24; // r8
  const std::string *v25; // rcx
  const std::string *v26; // rax
  const std::string *v27; // rax
  unsigned int v28; // ebx
  const std::string *v29; // rax
  google::protobuf::internal::WireFormatLite *v30; // rax
  const char *v31; // r8
  const std::string *v32; // rcx
  google::protobuf::uint32 v33; // ecx
  google::protobuf::uint32 v34; // ecx
  const std::string *v35; // rax
  const std::string *v36; // rax
  unsigned int v37; // ebx
  const std::string *v38; // rax
  google::protobuf::internal::WireFormatLite *v39; // rax
  const char *v40; // r8
  const std::string *v41; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v43; // rax

  v3 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.xg",
      v8);
    v9 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(1, v9, target);
  }
  if ( proto_log::ClientLogBodyPing::signal_level(this) )
  {
    v10 = proto_log::ClientLogBodyPing::signal_level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v10, target);
  }
  if ( proto_log::ClientLogBodyPing::ping(this) )
  {
    v11 = proto_log::ClientLogBodyPing::ping(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v11, target);
  }
  v12 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
  if ( std::string::size(v12) )
  {
    v13 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
    v14 = std::string::length(v13);
    v15 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
    v16 = (google::protobuf::internal::WireFormatLite *)std::string::data(v15);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v16,
      (const char *)v14,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.servertype",
      v17);
    v18 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v18, target);
  }
  v19 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
  if ( std::string::size(v19) )
  {
    v20 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
    v21 = std::string::length(v20);
    v22 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
    v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v23,
      (const char *)v21,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.serverip",
      v24);
    v25 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v25, target);
  }
  v26 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
  if ( std::string::size(v26) )
  {
    v27 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
    v28 = std::string::length(v27);
    v29 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
    v30 = (google::protobuf::internal::WireFormatLite *)std::string::data(v29);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v30,
      (const char *)v28,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.serverport",
      v31);
    v32 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(6, v32, target);
  }
  if ( proto_log::ClientLogBodyPing::pcount(this) )
  {
    v33 = proto_log::ClientLogBodyPing::pcount(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, v33, target);
  }
  if ( proto_log::ClientLogBodyPing::plost(this) )
  {
    v34 = proto_log::ClientLogBodyPing::plost(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, v34, target);
  }
  v35 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
  if ( std::string::size(v35) )
  {
    v36 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
    v37 = std::string::length(v36);
    v38 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
    v39 = (google::protobuf::internal::WireFormatLite *)std::string::data(v38);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v39,
      (const char *)v37,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.ClientLogBodyPing.dns",
      v40);
    v41 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(9, v41, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_31;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v43 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_31:
      v43 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v43->unknown_fields, target);
  }
  return target;
};

// Line 1372: range 00000000182185F4-000000001821892A
size_t __cdecl proto_log::ClientLogBodyPing::ByteSizeLong(const proto_log::ClientLogBodyPing *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  const std::string *v11; // rax
  const std::string *v12; // rax
  google::protobuf::uint32 v13; // eax
  google::protobuf::uint32 v14; // eax
  google::protobuf::uint32 v15; // eax
  google::protobuf::uint32 v16; // eax
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
  v3 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::ClientLogBodyPing::xg[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  v11 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::ClientLogBodyPing::dns[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v12) + 1;
  }
  if ( proto_log::ClientLogBodyPing::signal_level(this) )
  {
    v13 = proto_log::ClientLogBodyPing::signal_level(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v13) + 1;
  }
  if ( proto_log::ClientLogBodyPing::ping(this) )
  {
    v14 = proto_log::ClientLogBodyPing::ping(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v14) + 1;
  }
  if ( proto_log::ClientLogBodyPing::pcount(this) )
  {
    v15 = proto_log::ClientLogBodyPing::pcount(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v15) + 1;
  }
  if ( proto_log::ClientLogBodyPing::plost(this) )
  {
    v16 = proto_log::ClientLogBodyPing::plost(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v16) + 1;
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

// Line 1451: range 000000001821892C-0000000018218BB5
void __cdecl proto_log::ClientLogBodyPing::MergeFrom(
        proto_log::ClientLogBodyPing *const this,
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
  const proto_log::ClientLogBodyPing *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::ClientLogBodyPing::MergeFrom;
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
      "./src/log/client/client_body_common.pb.cc",
      1453);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::ClientLogBodyPing const>(from);
  if ( source )
    proto_log::ClientLogBodyPing::MergeFrom(this, source);
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

// Line 1466: range 0000000018218BB6-0000000018219244
void __cdecl proto_log::ClientLogBodyPing::MergeFrom(
        proto_log::ClientLogBodyPing *const this,
        const proto_log::ClientLogBodyPing *from)
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
  const std::string *v12; // rax
  const std::string *v13; // rcx
  const std::string *v14; // rax
  const std::string *v15; // rcx
  const std::string *v16; // rax
  const std::string *v17; // rcx
  const std::string *v18; // rax
  const std::string *v19; // rcx
  google::protobuf::uint32 v20; // edx
  google::protobuf::uint32 v21; // edx
  google::protobuf::uint32 v22; // edx
  google::protobuf::uint32 v23; // edx
  char v24; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v26[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::ClientLogBodyPing::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v24 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/log/client/client_body_common.pb.cc",
      1468);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v24 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v24 )
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
  v10 = proto_log::ClientLogBodyPing::xg[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->xg_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->xg_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->xg_, v11, from->xg_);
  }
  v12 = proto_log::ClientLogBodyPing::servertype[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->servertype_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->servertype_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->servertype_, v13, from->servertype_);
  }
  v14 = proto_log::ClientLogBodyPing::serverip[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->serverip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->serverip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->serverip_, v15, from->serverip_);
  }
  v16 = proto_log::ClientLogBodyPing::serverport[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->serverport_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->serverport_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->serverport_, v17, from->serverport_);
  }
  v18 = proto_log::ClientLogBodyPing::dns[abi:cxx11](from);
  if ( std::string::size(v18) )
  {
    v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->dns_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->dns_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->dns_, v19, from->dns_);
  }
  if ( proto_log::ClientLogBodyPing::signal_level(from) )
  {
    v20 = proto_log::ClientLogBodyPing::signal_level(from);
    proto_log::ClientLogBodyPing::set_signal_level(this, v20);
  }
  if ( proto_log::ClientLogBodyPing::ping(from) )
  {
    v21 = proto_log::ClientLogBodyPing::ping(from);
    proto_log::ClientLogBodyPing::set_ping(this, v21);
  }
  if ( proto_log::ClientLogBodyPing::pcount(from) )
  {
    v22 = proto_log::ClientLogBodyPing::pcount(from);
    proto_log::ClientLogBodyPing::set_pcount(this, v22);
  }
  if ( proto_log::ClientLogBodyPing::plost(from) )
  {
    v23 = proto_log::ClientLogBodyPing::plost(from);
    proto_log::ClientLogBodyPing::set_plost(this, v23);
  }
  if ( v26 == (char *)v2 )
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

// Line 1507: range 0000000018219246-0000000018219280
void __cdecl proto_log::ClientLogBodyPing::CopyFrom(
        proto_log::ClientLogBodyPing *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::ClientLogBodyPing::Clear(this);
    proto_log::ClientLogBodyPing::MergeFrom(this, from);
  }
};

// Line 1514: range 0000000018219282-00000000182192BC
void __cdecl proto_log::ClientLogBodyPing::CopyFrom(
        proto_log::ClientLogBodyPing *const this,
        const proto_log::ClientLogBodyPing *from)
{
  if ( from != this )
  {
    proto_log::ClientLogBodyPing::Clear(this);
    proto_log::ClientLogBodyPing::MergeFrom(this, from);
  }
};

// Line 1521: range 00000000182192BE-00000000182192CC
bool __cdecl proto_log::ClientLogBodyPing::IsInitialized(const proto_log::ClientLogBodyPing *const this)
{
  return 1;
};

// Line 1525: range 00000000182192CE-00000000182192FC
void __cdecl proto_log::ClientLogBodyPing::Swap(
        proto_log::ClientLogBodyPing *const this,
        proto_log::ClientLogBodyPing *other)
{
  if ( other != this )
    proto_log::ClientLogBodyPing::InternalSwap(this, other);
};

// Line 1529: range 00000000182192FE-0000000018219612
void __cdecl proto_log::ClientLogBodyPing::InternalSwap(
        proto_log::ClientLogBodyPing *const this,
        proto_log::ClientLogBodyPing *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-90h]

  std::swap<std::string *>(&this->xg_.ptr_, &other->xg_.ptr_);
  std::swap<std::string *>(&this->servertype_.ptr_, &other->servertype_.ptr_);
  std::swap<std::string *>(&this->serverip_.ptr_, &other->serverip_.ptr_);
  std::swap<std::string *>(&this->serverport_.ptr_, &other->serverport_.ptr_);
  std::swap<std::string *>(&this->dns_.ptr_, &other->dns_.ptr_);
  std::swap<unsigned int>(&this->signal_level_, &other->signal_level_);
  std::swap<unsigned int>(&this->ping_, &other->ping_);
  std::swap<unsigned int>(&this->pcount_, &other->pcount_);
  std::swap<unsigned int>(&this->plost_, &other->plost_);
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

// Line 1544: range 0000000018219614-0000000018219634
google::protobuf::Metadata __cdecl proto_log::ClientLogBodyPing::GetMetadata(
        const proto_log::ClientLogBodyPing *const this)
{
  proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_log_2fclient_2fclient_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[1];
};

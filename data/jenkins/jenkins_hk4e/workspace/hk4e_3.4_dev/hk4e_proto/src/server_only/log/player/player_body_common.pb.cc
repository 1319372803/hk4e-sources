// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/player/player_body_common.pb.cc

// Line 354: range 0000000017433FB9-0000000017434182
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/player/player_body_common.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata,
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

// Line 362: range 0000000017434183-000000001743419C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 368: range 000000001743419D-00000000174341C1
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata,
    15);
};

// Line 374: range 00000000174341C2-00000000174343A5
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/player/player_body_common.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyRegister>::DefaultConstruct(&proto_log::_PlayerLogBodyRegister_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyRegister_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyLogin>::DefaultConstruct(&proto_log::_PlayerLogBodyLogin_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyLogin_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyLogout>::DefaultConstruct(&proto_log::_PlayerLogBodyLogout_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyLogout_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyAddExp>::DefaultConstruct(&proto_log::_PlayerLogBodyAddExp_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyAddExp_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyLevelUp>::DefaultConstruct(&proto_log::_PlayerLogBodyLevelUp_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyLevelUp_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyAddMaterial>::DefaultConstruct(&proto_log::_PlayerLogBodyAddMaterial_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyAddMaterial_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyRecharge>::DefaultConstruct(&proto_log::_PlayerLogBodyRecharge_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyRecharge_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyBuyGoods>::DefaultConstruct(&proto_log::_PlayerLogBodyBuyGoods_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyBuyGoods_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogCurrencyCost>::DefaultConstruct(&proto_log::_PlayerLogCurrencyCost_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogCurrencyCost_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyAddCoin>::DefaultConstruct(&proto_log::_PlayerLogBodyAddCoin_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyAddCoin_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyMissionAccept>::DefaultConstruct(&proto_log::_PlayerLogBodyMissionAccept_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyMissionAccept_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyMissionStart>::DefaultConstruct(&proto_log::_PlayerLogBodyMissionStart_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyMissionStart_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyMissionFinish>::DefaultConstruct(&proto_log::_PlayerLogBodyMissionFinish_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyMissionFinish_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyMissionFail>::DefaultConstruct(&proto_log::_PlayerLogBodyMissionFail_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyMissionFail_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyAddFurniture>::DefaultConstruct(&proto_log::_PlayerLogBodyAddFurniture_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyAddFurniture_default_instance_,
    (const void *)0x2DD660);
};

// Line 410: range 00000000174343A6-00000000174343C2
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 415: range 00000000174343C3-00000000174343F2
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 491: range 00000000174343F3-000000001743440C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 497: range 00000000178C06FA-00000000178C070D
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::AddDescriptors();
};

// Line 519: range 000000001743440E-00000000174344CD
void __cdecl proto_log::PlayerLogBodyRegister::PlayerLogBodyRegister(proto_log::PlayerLogBodyRegister *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyRegister + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyRegister::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyRegister::SharedCtor(this);
};

// Line 527: range 00000000174344CE-00000000174349B0
void __cdecl proto_log::PlayerLogBodyRegister::PlayerLogBodyRegister(
        proto_log::PlayerLogBodyRegister *const this,
        const proto_log::PlayerLogBodyRegister *from)
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
  const std::string *v19; // rax
  const std::string *v20; // rax
  const std::string *v21; // rcx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyRegister + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->register_cps_, v4);
  v5 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->register_cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->register_cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->register_cps_, v6, from->register_cps_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->cps_, v7);
  v8 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->cps_, v9, from->cps_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_ip_, v10);
  v11 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_ip_, v12, from->client_ip_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_uuid_, v13);
  v14 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_uuid_, v15, from->device_uuid_);
  }
  v16 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_info_, v16);
  v17 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](from);
  if ( std::string::size(v17) )
  {
    v18 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_info_, v18, from->device_info_);
  }
  v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->system_info_, v19);
  v20 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->system_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->system_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->system_info_, v21, from->system_info_);
  }
  memcpy(&this->platform_, &from->platform_, 0xCuLL);
};

// Line 562: range 00000000174349B2-0000000017434AB6
void __cdecl proto_log::PlayerLogBodyRegister::SharedCtor(proto_log::PlayerLogBodyRegister *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->system_info_, v6);
  memset(&this->platform_, 0, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 575: range 0000000017434AB8-0000000017434B21
void __cdecl proto_log::PlayerLogBodyRegister::~PlayerLogBodyRegister(proto_log::PlayerLogBodyRegister *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyRegister + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyRegister::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 575: range 0000000017434B22-0000000017434B4C
void __cdecl proto_log::PlayerLogBodyRegister::~PlayerLogBodyRegister(proto_log::PlayerLogBodyRegister *const this)
{
  proto_log::PlayerLogBodyRegister::~PlayerLogBodyRegister(this);
  operator delete(this, 0x50uLL);
};

// Line 580: range 0000000017434B4E-0000000017434BF2
void __cdecl proto_log::PlayerLogBodyRegister::SharedDtor(proto_log::PlayerLogBodyRegister *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->system_info_, v6);
};

// Line 589: range 0000000017434BF4-0000000017434C4A
void __cdecl proto_log::PlayerLogBodyRegister::SetCachedSize(
        const proto_log::PlayerLogBodyRegister *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 594: range 0000000017434C4C-0000000017434C5D
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyRegister::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 599: range 0000000017434C5E-0000000017434C6D
const proto_log::PlayerLogBodyRegister *__cdecl proto_log::PlayerLogBodyRegister::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyRegister::internal_default_instance();
};

// Line 604: range 0000000017434C6E-0000000017434CE2
proto_log::PlayerLogBodyRegister *__cdecl proto_log::PlayerLogBodyRegister::New(
        const proto_log::PlayerLogBodyRegister *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyRegister *v2; // rbx

  v2 = (proto_log::PlayerLogBodyRegister *)operator new(0x50uLL);
  proto_log::PlayerLogBodyRegister::PlayerLogBodyRegister(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyRegister>(arena, v2);
  return v2;
};

// Line 612: range 0000000017434CE4-0000000017434E07
void __cdecl proto_log::PlayerLogBodyRegister::Clear(proto_log::PlayerLogBodyRegister *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->system_info_, v6);
  memset(&this->platform_, 0, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 631: range 0000000017434E08-0000000017435BBD
bool __cdecl proto_log::PlayerLogBodyRegister::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyRegister *const this,
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
  std::string *v43; // rdx
  const std::string *v44; // rax
  unsigned int v45; // r14d
  const std::string *v46; // rax
  google::protobuf::internal::WireFormatLite *v47; // rax
  const char *v48; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v49; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v54[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:636";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyRegister::MergePartialFromCodedStream;
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
                    &this->platform_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 18 )
              goto handle_unusual;
            v13 = proto_log::PlayerLogBodyRegister::mutable_register_cps[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegis"
                                                                                            "ter.register_cps",
                                     v18) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 26 )
              goto handle_unusual;
            v19 = proto_log::PlayerLogBodyRegister::mutable_cps[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.cps",
                                     v24) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v25 = proto_log::PlayerLogBodyRegister::mutable_client_ip[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.client_ip",
                                     v30) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v31 = proto_log::PlayerLogBodyRegister::mutable_device_uuid[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v31) )
              goto failure;
            v32 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
            v33 = std::string::length(v32);
            v34 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
            v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v35,
                                     (const char *)v33,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.device_uuid",
                                     v36) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 50 )
              goto handle_unusual;
            v37 = proto_log::PlayerLogBodyRegister::mutable_device_info[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v37) )
              goto failure;
            v38 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
            v39 = std::string::length(v38);
            v40 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
            v41 = (google::protobuf::internal::WireFormatLite *)std::string::data(v40);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v41,
                                     (const char *)v39,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.device_info",
                                     v42) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 58 )
              goto handle_unusual;
            v43 = proto_log::PlayerLogBodyRegister::mutable_system_info[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v43) )
              goto failure;
            v44 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
            v45 = std::string::length(v44);
            v46 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
            v47 = (google::protobuf::internal::WireFormatLite *)std::string::data(v46);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v47,
                                     (const char *)v45,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.system_info",
                                     v48) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->channel_id_) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 72 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->sub_channel_id_) )
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
      goto LABEL_81;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v49 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v49 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v49->unknown_fields) );
failure:
  result = 0;
LABEL_81:
  if ( v54 == (char *)v2 )
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

// Line 799: range 0000000017435BBE-0000000017436077
void __cdecl proto_log::PlayerLogBodyRegister::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyRegister *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
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
  const std::string *v17; // rax
  const std::string *v18; // rax
  unsigned int v19; // ebx
  const std::string *v20; // rax
  google::protobuf::internal::WireFormatLite *v21; // rax
  const char *v22; // r8
  const std::string *v23; // rcx
  const std::string *v24; // rax
  const std::string *v25; // rax
  unsigned int v26; // ebx
  const std::string *v27; // rax
  google::protobuf::internal::WireFormatLite *v28; // rax
  const char *v29; // r8
  const std::string *v30; // rcx
  const std::string *v31; // rax
  const std::string *v32; // rax
  unsigned int v33; // ebx
  const std::string *v34; // rax
  google::protobuf::internal::WireFormatLite *v35; // rax
  const char *v36; // r8
  const std::string *v37; // rcx
  const std::string *v38; // rax
  const std::string *v39; // rax
  unsigned int v40; // ebx
  const std::string *v41; // rax
  google::protobuf::internal::WireFormatLite *v42; // rax
  const char *v43; // r8
  const std::string *v44; // rcx
  google::protobuf::uint32 v45; // ecx
  google::protobuf::uint32 v46; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v48; // rax

  if ( proto_log::PlayerLogBodyRegister::platform(this) )
  {
    v2 = proto_log::PlayerLogBodyRegister::platform(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  v3 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.register_cps",
      v8);
    v9 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v9, output);
  }
  v10 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.cps",
      v15);
    v16 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v16, output);
  }
  v17 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
    v19 = std::string::length(v18);
    v20 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
    v21 = (google::protobuf::internal::WireFormatLite *)std::string::data(v20);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v21,
      (const char *)v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.client_ip",
      v22);
    v23 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v23, output);
  }
  v24 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
  if ( std::string::size(v24) )
  {
    v25 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
    v26 = std::string::length(v25);
    v27 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
    v28 = (google::protobuf::internal::WireFormatLite *)std::string::data(v27);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v28,
      (const char *)v26,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.device_uuid",
      v29);
    v30 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v30, output);
  }
  v31 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
  if ( std::string::size(v31) )
  {
    v32 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
    v33 = std::string::length(v32);
    v34 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
    v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v35,
      (const char *)v33,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.device_info",
      v36);
    v37 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, v37, output);
  }
  v38 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
  if ( std::string::size(v38) )
  {
    v39 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
    v40 = std::string::length(v39);
    v41 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
    v42 = (google::protobuf::internal::WireFormatLite *)std::string::data(v41);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v42,
      (const char *)v40,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.system_info",
      v43);
    v44 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(7LL, v44, output);
  }
  if ( proto_log::PlayerLogBodyRegister::channel_id(this) )
  {
    v45 = proto_log::PlayerLogBodyRegister::channel_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(8, v45, output);
  }
  if ( proto_log::PlayerLogBodyRegister::sub_channel_id(this) )
  {
    v46 = proto_log::PlayerLogBodyRegister::sub_channel_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(9, v46, output);
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
      v48 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_31:
      v48 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v48->unknown_fields, output);
  }
};

// Line 887: range 0000000017436078-0000000017436561
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyRegister::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyRegister *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  const std::string *v4; // rax
  const std::string *v5; // rax
  unsigned int v6; // ebx
  const std::string *v7; // rax
  google::protobuf::internal::WireFormatLite *v8; // rax
  const char *v9; // r8
  const std::string *v10; // rcx
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
  const std::string *v32; // rax
  const std::string *v33; // rax
  unsigned int v34; // ebx
  const std::string *v35; // rax
  google::protobuf::internal::WireFormatLite *v36; // rax
  const char *v37; // r8
  const std::string *v38; // rcx
  const std::string *v39; // rax
  const std::string *v40; // rax
  unsigned int v41; // ebx
  const std::string *v42; // rax
  google::protobuf::internal::WireFormatLite *v43; // rax
  const char *v44; // r8
  const std::string *v45; // rcx
  google::protobuf::uint32 v46; // ecx
  google::protobuf::uint32 v47; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v49; // rax

  if ( proto_log::PlayerLogBodyRegister::platform(this) )
  {
    v3 = proto_log::PlayerLogBodyRegister::platform(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  v4 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
  if ( std::string::size(v4) )
  {
    v5 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
    v6 = std::string::length(v5);
    v7 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
    v8 = (google::protobuf::internal::WireFormatLite *)std::string::data(v7);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v8,
      (const char *)v6,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.register_cps",
      v9);
    v10 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v10, target);
  }
  v11 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.cps",
      v16);
    v17 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v17, target);
  }
  v18 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.client_ip",
      v23);
    v24 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v24, target);
  }
  v25 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
  if ( std::string::size(v25) )
  {
    v26 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
    v27 = std::string::length(v26);
    v28 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
    v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v29,
      (const char *)v27,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.device_uuid",
      v30);
    v31 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v31, target);
  }
  v32 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
  if ( std::string::size(v32) )
  {
    v33 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
    v34 = std::string::length(v33);
    v35 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
    v36 = (google::protobuf::internal::WireFormatLite *)std::string::data(v35);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v36,
      (const char *)v34,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.device_info",
      v37);
    v38 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(6, v38, target);
  }
  v39 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
  if ( std::string::size(v39) )
  {
    v40 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
    v41 = std::string::length(v40);
    v42 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
    v43 = (google::protobuf::internal::WireFormatLite *)std::string::data(v42);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v43,
      (const char *)v41,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRegister.system_info",
      v44);
    v45 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(7, v45, target);
  }
  if ( proto_log::PlayerLogBodyRegister::channel_id(this) )
  {
    v46 = proto_log::PlayerLogBodyRegister::channel_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, v46, target);
  }
  if ( proto_log::PlayerLogBodyRegister::sub_channel_id(this) )
  {
    v47 = proto_log::PlayerLogBodyRegister::sub_channel_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, v47, target);
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
      v49 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_31:
      v49 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v49->unknown_fields, target);
  }
  return target;
};

// Line 982: range 0000000017436562-00000000174368AA
size_t __cdecl proto_log::PlayerLogBodyRegister::ByteSizeLong(const proto_log::PlayerLogBodyRegister *const this)
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
  const std::string *v13; // rax
  const std::string *v14; // rax
  google::protobuf::uint32 v15; // eax
  google::protobuf::uint32 v16; // eax
  google::protobuf::uint32 v17; // eax
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
  v3 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  v11 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v12) + 1;
  }
  v13 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
  if ( std::string::size(v13) )
  {
    v14 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v14) + 1;
  }
  if ( proto_log::PlayerLogBodyRegister::platform(this) )
  {
    v15 = proto_log::PlayerLogBodyRegister::platform(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v15) + 1;
  }
  if ( proto_log::PlayerLogBodyRegister::channel_id(this) )
  {
    v16 = proto_log::PlayerLogBodyRegister::channel_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v16) + 1;
  }
  if ( proto_log::PlayerLogBodyRegister::sub_channel_id(this) )
  {
    v17 = proto_log::PlayerLogBodyRegister::sub_channel_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v17) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 1061: range 00000000174368AC-0000000017436B35
void __cdecl proto_log::PlayerLogBodyRegister::MergeFrom(
        proto_log::PlayerLogBodyRegister *const this,
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
  const proto_log::PlayerLogBodyRegister *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyRegister::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      1063);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyRegister const>(from);
  if ( source )
    proto_log::PlayerLogBodyRegister::MergeFrom(this, source);
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

// Line 1076: range 0000000017436B36-00000000174371FF
void __cdecl proto_log::PlayerLogBodyRegister::MergeFrom(
        proto_log::PlayerLogBodyRegister *const this,
        const proto_log::PlayerLogBodyRegister *from)
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
  const std::string *v20; // rax
  const std::string *v21; // rcx
  google::protobuf::uint32 v22; // edx
  google::protobuf::uint32 v23; // edx
  google::protobuf::uint32 v24; // edx
  char v25; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v27[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyRegister::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v25 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_common.pb.cc",
      1078);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v25 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v25 )
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
  v10 = proto_log::PlayerLogBodyRegister::register_cps[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->register_cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->register_cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->register_cps_, v11, from->register_cps_);
  }
  v12 = proto_log::PlayerLogBodyRegister::cps[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->cps_, v13, from->cps_);
  }
  v14 = proto_log::PlayerLogBodyRegister::client_ip[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_ip_, v15, from->client_ip_);
  }
  v16 = proto_log::PlayerLogBodyRegister::device_uuid[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_uuid_, v17, from->device_uuid_);
  }
  v18 = proto_log::PlayerLogBodyRegister::device_info[abi:cxx11](from);
  if ( std::string::size(v18) )
  {
    v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_info_, v19, from->device_info_);
  }
  v20 = proto_log::PlayerLogBodyRegister::system_info[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->system_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->system_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->system_info_, v21, from->system_info_);
  }
  if ( proto_log::PlayerLogBodyRegister::platform(from) )
  {
    v22 = proto_log::PlayerLogBodyRegister::platform(from);
    proto_log::PlayerLogBodyRegister::set_platform(this, v22);
  }
  if ( proto_log::PlayerLogBodyRegister::channel_id(from) )
  {
    v23 = proto_log::PlayerLogBodyRegister::channel_id(from);
    proto_log::PlayerLogBodyRegister::set_channel_id(this, v23);
  }
  if ( proto_log::PlayerLogBodyRegister::sub_channel_id(from) )
  {
    v24 = proto_log::PlayerLogBodyRegister::sub_channel_id(from);
    proto_log::PlayerLogBodyRegister::set_sub_channel_id(this, v24);
  }
  if ( v27 == (char *)v2 )
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

// Line 1118: range 0000000017437200-000000001743723D
void __cdecl proto_log::PlayerLogBodyRegister::CopyFrom(
        proto_log::PlayerLogBodyRegister *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyRegister::Clear(this);
    proto_log::PlayerLogBodyRegister::MergeFrom(this, from);
  }
};

// Line 1125: range 000000001743723E-000000001743727B
void __cdecl proto_log::PlayerLogBodyRegister::CopyFrom(
        proto_log::PlayerLogBodyRegister *const this,
        const proto_log::PlayerLogBodyRegister *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyRegister::Clear(this);
    proto_log::PlayerLogBodyRegister::MergeFrom(this, from);
  }
};

// Line 1132: range 000000001743727C-000000001743728A
bool __cdecl proto_log::PlayerLogBodyRegister::IsInitialized(const proto_log::PlayerLogBodyRegister *const this)
{
  return 1;
};

// Line 1136: range 000000001743728C-00000000174372BD
void __cdecl proto_log::PlayerLogBodyRegister::Swap(
        proto_log::PlayerLogBodyRegister *const this,
        proto_log::PlayerLogBodyRegister *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyRegister::InternalSwap(this, other);
};

// Line 1140: range 00000000174372BE-00000000174375F2
void __cdecl proto_log::PlayerLogBodyRegister::InternalSwap(
        proto_log::PlayerLogBodyRegister *const this,
        proto_log::PlayerLogBodyRegister *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-A0h]

  std::swap<std::string *>(&this->register_cps_.ptr_, &other->register_cps_.ptr_);
  std::swap<std::string *>(&this->cps_.ptr_, &other->cps_.ptr_);
  std::swap<std::string *>(&this->client_ip_.ptr_, &other->client_ip_.ptr_);
  std::swap<std::string *>(&this->device_uuid_.ptr_, &other->device_uuid_.ptr_);
  std::swap<std::string *>(&this->device_info_.ptr_, &other->device_info_.ptr_);
  std::swap<std::string *>(&this->system_info_.ptr_, &other->system_info_.ptr_);
  std::swap<unsigned int>(&this->platform_, &other->platform_);
  std::swap<unsigned int>(&this->channel_id_, &other->channel_id_);
  std::swap<unsigned int>(&this->sub_channel_id_, &other->sub_channel_id_);
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

// Line 1155: range 00000000174375F4-0000000017437614
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyRegister::GetMetadata(
        const proto_log::PlayerLogBodyRegister *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[0];
};

// Line 1542: range 0000000017437616-00000000174376D5
void __cdecl proto_log::PlayerLogBodyLogin::PlayerLogBodyLogin(proto_log::PlayerLogBodyLogin *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyLogin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyLogin::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyLogin::SharedCtor(this);
};

// Line 1550: range 00000000174376D6-0000000017437C39
void __cdecl proto_log::PlayerLogBodyLogin::PlayerLogBodyLogin(
        proto_log::PlayerLogBodyLogin *const this,
        const proto_log::PlayerLogBodyLogin *from)
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
  const std::string *v19; // rax
  const std::string *v20; // rax
  const std::string *v21; // rcx
  const std::string *v22; // rax
  const std::string *v23; // rax
  const std::string *v24; // rcx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyLogin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->register_cps_, v4);
  v5 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->register_cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->register_cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->register_cps_, v6, from->register_cps_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->cps_, v7);
  v8 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->cps_, v9, from->cps_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_ip_, v10);
  v11 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_ip_, v12, from->client_ip_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_uuid_, v13);
  v14 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_uuid_, v15, from->device_uuid_);
  }
  v16 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_info_, v16);
  v17 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](from);
  if ( std::string::size(v17) )
  {
    v18 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_info_, v18, from->device_info_);
  }
  v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->system_info_, v19);
  v20 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->system_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->system_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->system_info_, v21, from->system_info_);
  }
  v22 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->gate_ip_, v22);
  v23 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](from);
  if ( std::string::size(v23) )
  {
    v24 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->gate_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->gate_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->gate_ip_, v24, from->gate_ip_);
  }
  memcpy(&this->platform_, &from->platform_, 0x14uLL);
};

// Line 1589: range 0000000017437C3A-0000000017437D56
void __cdecl proto_log::PlayerLogBodyLogin::SharedCtor(proto_log::PlayerLogBodyLogin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->system_info_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->gate_ip_, v7);
  memset(&this->platform_, 0, 0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 1603: range 0000000017437D58-0000000017437DC1
void __cdecl proto_log::PlayerLogBodyLogin::~PlayerLogBodyLogin(proto_log::PlayerLogBodyLogin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyLogin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyLogin::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 1603: range 0000000017437DC2-0000000017437DEC
void __cdecl proto_log::PlayerLogBodyLogin::~PlayerLogBodyLogin(proto_log::PlayerLogBodyLogin *const this)
{
  proto_log::PlayerLogBodyLogin::~PlayerLogBodyLogin(this);
  operator delete(this, 0x60uLL);
};

// Line 1608: range 0000000017437DEE-0000000017437EAA
void __cdecl proto_log::PlayerLogBodyLogin::SharedDtor(proto_log::PlayerLogBodyLogin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->system_info_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->gate_ip_, v7);
};

// Line 1618: range 0000000017437EAC-0000000017437F02
void __cdecl proto_log::PlayerLogBodyLogin::SetCachedSize(const proto_log::PlayerLogBodyLogin *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 1623: range 0000000017437F04-0000000017437F15
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyLogin::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 1628: range 0000000017437F16-0000000017437F25
const proto_log::PlayerLogBodyLogin *__cdecl proto_log::PlayerLogBodyLogin::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyLogin::internal_default_instance();
};

// Line 1633: range 0000000017437F26-0000000017437F9A
proto_log::PlayerLogBodyLogin *__cdecl proto_log::PlayerLogBodyLogin::New(
        const proto_log::PlayerLogBodyLogin *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyLogin *v2; // rbx

  v2 = (proto_log::PlayerLogBodyLogin *)operator new(0x60uLL);
  proto_log::PlayerLogBodyLogin::PlayerLogBodyLogin(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyLogin>(arena, v2);
  return v2;
};

// Line 1641: range 0000000017437F9C-00000000174380D7
void __cdecl proto_log::PlayerLogBodyLogin::Clear(proto_log::PlayerLogBodyLogin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->system_info_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->gate_ip_, v7);
  memset(&this->platform_, 0, 0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 1661: range 00000000174380D8-0000000017438FCE
bool __cdecl proto_log::PlayerLogBodyLogin::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyLogin *const this,
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
  std::string *v43; // rdx
  const std::string *v44; // rax
  unsigned int v45; // r14d
  const std::string *v46; // rax
  google::protobuf::internal::WireFormatLite *v47; // rax
  const char *v48; // r8
  std::string *v49; // rdx
  const std::string *v50; // rax
  unsigned int v51; // r14d
  const std::string *v52; // rax
  google::protobuf::internal::WireFormatLite *v53; // rax
  const char *v54; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v55; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v60[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:1666";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyLogin::MergePartialFromCodedStream;
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
                    &this->platform_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 18 )
              goto handle_unusual;
            v13 = proto_log::PlayerLogBodyLogin::mutable_register_cps[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.register_cps",
                                     v18) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 26 )
              goto handle_unusual;
            v19 = proto_log::PlayerLogBodyLogin::mutable_cps[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.cps",
                                     v24) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v25 = proto_log::PlayerLogBodyLogin::mutable_client_ip[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.client_ip",
                                     v30) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v31 = proto_log::PlayerLogBodyLogin::mutable_device_uuid[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v31) )
              goto failure;
            v32 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
            v33 = std::string::length(v32);
            v34 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
            v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v35,
                                     (const char *)v33,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.device_uuid",
                                     v36) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 50 )
              goto handle_unusual;
            v37 = proto_log::PlayerLogBodyLogin::mutable_device_info[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v37) )
              goto failure;
            v38 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
            v39 = std::string::length(v38);
            v40 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
            v41 = (google::protobuf::internal::WireFormatLite *)std::string::data(v40);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v41,
                                     (const char *)v39,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.device_info",
                                     v42) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 58 )
              goto handle_unusual;
            v43 = proto_log::PlayerLogBodyLogin::mutable_system_info[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v43) )
              goto failure;
            v44 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
            v45 = std::string::length(v44);
            v46 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
            v47 = (google::protobuf::internal::WireFormatLite *)std::string::data(v46);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v47,
                                     (const char *)v45,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.system_info",
                                     v48) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->channel_id_) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 72 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->sub_channel_id_) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 80 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->client_port_) )
              goto failure;
            continue;
          case 11:
            if ( (_BYTE)tag != 90 )
              goto handle_unusual;
            v49 = proto_log::PlayerLogBodyLogin::mutable_gate_ip[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v49) )
              goto failure;
            v50 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
            v51 = std::string::length(v50);
            v52 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
            v53 = (google::protobuf::internal::WireFormatLite *)std::string::data(v52);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v53,
                                     (const char *)v51,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.gate_ip",
                                     v54) )
              goto failure;
            continue;
          case 12:
            if ( (_BYTE)tag != 96 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->gate_port_) )
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
      goto LABEL_94;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v55 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v55 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v55->unknown_fields) );
failure:
  result = 0;
LABEL_94:
  if ( v60 == (char *)v2 )
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

// Line 1873: range 0000000017438FD0-0000000017439576
void __cdecl proto_log::PlayerLogBodyLogin::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyLogin *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
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
  const std::string *v17; // rax
  const std::string *v18; // rax
  unsigned int v19; // ebx
  const std::string *v20; // rax
  google::protobuf::internal::WireFormatLite *v21; // rax
  const char *v22; // r8
  const std::string *v23; // rcx
  const std::string *v24; // rax
  const std::string *v25; // rax
  unsigned int v26; // ebx
  const std::string *v27; // rax
  google::protobuf::internal::WireFormatLite *v28; // rax
  const char *v29; // r8
  const std::string *v30; // rcx
  const std::string *v31; // rax
  const std::string *v32; // rax
  unsigned int v33; // ebx
  const std::string *v34; // rax
  google::protobuf::internal::WireFormatLite *v35; // rax
  const char *v36; // r8
  const std::string *v37; // rcx
  const std::string *v38; // rax
  const std::string *v39; // rax
  unsigned int v40; // ebx
  const std::string *v41; // rax
  google::protobuf::internal::WireFormatLite *v42; // rax
  const char *v43; // r8
  const std::string *v44; // rcx
  google::protobuf::uint32 v45; // ecx
  google::protobuf::uint32 v46; // ecx
  google::protobuf::uint32 v47; // ecx
  const std::string *v48; // rax
  const std::string *v49; // rax
  unsigned int v50; // ebx
  const std::string *v51; // rax
  google::protobuf::internal::WireFormatLite *v52; // rax
  const char *v53; // r8
  const std::string *v54; // rcx
  google::protobuf::uint32 v55; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v57; // rax

  if ( proto_log::PlayerLogBodyLogin::platform(this) )
  {
    v2 = proto_log::PlayerLogBodyLogin::platform(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  v3 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.register_cps",
      v8);
    v9 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v9, output);
  }
  v10 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.cps",
      v15);
    v16 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v16, output);
  }
  v17 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
    v19 = std::string::length(v18);
    v20 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
    v21 = (google::protobuf::internal::WireFormatLite *)std::string::data(v20);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v21,
      (const char *)v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.client_ip",
      v22);
    v23 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v23, output);
  }
  v24 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
  if ( std::string::size(v24) )
  {
    v25 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
    v26 = std::string::length(v25);
    v27 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
    v28 = (google::protobuf::internal::WireFormatLite *)std::string::data(v27);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v28,
      (const char *)v26,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.device_uuid",
      v29);
    v30 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v30, output);
  }
  v31 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
  if ( std::string::size(v31) )
  {
    v32 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
    v33 = std::string::length(v32);
    v34 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
    v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v35,
      (const char *)v33,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.device_info",
      v36);
    v37 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, v37, output);
  }
  v38 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
  if ( std::string::size(v38) )
  {
    v39 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
    v40 = std::string::length(v39);
    v41 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
    v42 = (google::protobuf::internal::WireFormatLite *)std::string::data(v41);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v42,
      (const char *)v40,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.system_info",
      v43);
    v44 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(7LL, v44, output);
  }
  if ( proto_log::PlayerLogBodyLogin::channel_id(this) )
  {
    v45 = proto_log::PlayerLogBodyLogin::channel_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(8, v45, output);
  }
  if ( proto_log::PlayerLogBodyLogin::sub_channel_id(this) )
  {
    v46 = proto_log::PlayerLogBodyLogin::sub_channel_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(9, v46, output);
  }
  if ( proto_log::PlayerLogBodyLogin::client_port(this) )
  {
    v47 = proto_log::PlayerLogBodyLogin::client_port(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(10, v47, output);
  }
  v48 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
  if ( std::string::size(v48) )
  {
    v49 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
    v50 = std::string::length(v49);
    v51 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
    v52 = (google::protobuf::internal::WireFormatLite *)std::string::data(v51);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v52,
      (const char *)v50,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.gate_ip",
      v53);
    v54 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(11LL, v54, output);
  }
  if ( proto_log::PlayerLogBodyLogin::gate_port(this) )
  {
    v55 = proto_log::PlayerLogBodyLogin::gate_port(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(12, v55, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_37;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v57 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_37:
      v57 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v57->unknown_fields, output);
  }
};

// Line 1981: range 0000000017439578-0000000017439B5A
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyLogin::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyLogin *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  const std::string *v4; // rax
  const std::string *v5; // rax
  unsigned int v6; // ebx
  const std::string *v7; // rax
  google::protobuf::internal::WireFormatLite *v8; // rax
  const char *v9; // r8
  const std::string *v10; // rcx
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
  const std::string *v32; // rax
  const std::string *v33; // rax
  unsigned int v34; // ebx
  const std::string *v35; // rax
  google::protobuf::internal::WireFormatLite *v36; // rax
  const char *v37; // r8
  const std::string *v38; // rcx
  const std::string *v39; // rax
  const std::string *v40; // rax
  unsigned int v41; // ebx
  const std::string *v42; // rax
  google::protobuf::internal::WireFormatLite *v43; // rax
  const char *v44; // r8
  const std::string *v45; // rcx
  google::protobuf::uint32 v46; // ecx
  google::protobuf::uint32 v47; // ecx
  google::protobuf::uint32 v48; // ecx
  const std::string *v49; // rax
  const std::string *v50; // rax
  unsigned int v51; // ebx
  const std::string *v52; // rax
  google::protobuf::internal::WireFormatLite *v53; // rax
  const char *v54; // r8
  const std::string *v55; // rcx
  google::protobuf::uint32 v56; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v58; // rax

  if ( proto_log::PlayerLogBodyLogin::platform(this) )
  {
    v3 = proto_log::PlayerLogBodyLogin::platform(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  v4 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
  if ( std::string::size(v4) )
  {
    v5 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
    v6 = std::string::length(v5);
    v7 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
    v8 = (google::protobuf::internal::WireFormatLite *)std::string::data(v7);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v8,
      (const char *)v6,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.register_cps",
      v9);
    v10 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v10, target);
  }
  v11 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.cps",
      v16);
    v17 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v17, target);
  }
  v18 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.client_ip",
      v23);
    v24 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v24, target);
  }
  v25 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
  if ( std::string::size(v25) )
  {
    v26 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
    v27 = std::string::length(v26);
    v28 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
    v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v29,
      (const char *)v27,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.device_uuid",
      v30);
    v31 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v31, target);
  }
  v32 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
  if ( std::string::size(v32) )
  {
    v33 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
    v34 = std::string::length(v33);
    v35 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
    v36 = (google::protobuf::internal::WireFormatLite *)std::string::data(v35);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v36,
      (const char *)v34,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.device_info",
      v37);
    v38 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(6, v38, target);
  }
  v39 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
  if ( std::string::size(v39) )
  {
    v40 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
    v41 = std::string::length(v40);
    v42 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
    v43 = (google::protobuf::internal::WireFormatLite *)std::string::data(v42);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v43,
      (const char *)v41,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.system_info",
      v44);
    v45 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(7, v45, target);
  }
  if ( proto_log::PlayerLogBodyLogin::channel_id(this) )
  {
    v46 = proto_log::PlayerLogBodyLogin::channel_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, v46, target);
  }
  if ( proto_log::PlayerLogBodyLogin::sub_channel_id(this) )
  {
    v47 = proto_log::PlayerLogBodyLogin::sub_channel_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, v47, target);
  }
  if ( proto_log::PlayerLogBodyLogin::client_port(this) )
  {
    v48 = proto_log::PlayerLogBodyLogin::client_port(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, v48, target);
  }
  v49 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
  if ( std::string::size(v49) )
  {
    v50 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
    v51 = std::string::length(v50);
    v52 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
    v53 = (google::protobuf::internal::WireFormatLite *)std::string::data(v52);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v53,
      (const char *)v51,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogin.gate_ip",
      v54);
    v55 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(11, v55, target);
  }
  if ( proto_log::PlayerLogBodyLogin::gate_port(this) )
  {
    v56 = proto_log::PlayerLogBodyLogin::gate_port(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, v56, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_37;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v58 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_37:
      v58 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v58->unknown_fields, target);
  }
  return target;
};

// Line 2097: range 0000000017439B5C-0000000017439F3E
size_t __cdecl proto_log::PlayerLogBodyLogin::ByteSizeLong(const proto_log::PlayerLogBodyLogin *const this)
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
  const std::string *v13; // rax
  const std::string *v14; // rax
  const std::string *v15; // rax
  const std::string *v16; // rax
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // eax
  google::protobuf::uint32 v19; // eax
  google::protobuf::uint32 v20; // eax
  google::protobuf::uint32 v21; // eax
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
  v3 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  v11 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v12) + 1;
  }
  v13 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
  if ( std::string::size(v13) )
  {
    v14 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v14) + 1;
  }
  v15 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
  if ( std::string::size(v15) )
  {
    v16 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v16) + 1;
  }
  if ( proto_log::PlayerLogBodyLogin::platform(this) )
  {
    v17 = proto_log::PlayerLogBodyLogin::platform(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v17) + 1;
  }
  if ( proto_log::PlayerLogBodyLogin::channel_id(this) )
  {
    v18 = proto_log::PlayerLogBodyLogin::channel_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v18) + 1;
  }
  if ( proto_log::PlayerLogBodyLogin::sub_channel_id(this) )
  {
    v19 = proto_log::PlayerLogBodyLogin::sub_channel_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v19) + 1;
  }
  if ( proto_log::PlayerLogBodyLogin::client_port(this) )
  {
    v20 = proto_log::PlayerLogBodyLogin::client_port(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v20) + 1;
  }
  if ( proto_log::PlayerLogBodyLogin::gate_port(this) )
  {
    v21 = proto_log::PlayerLogBodyLogin::gate_port(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v21) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 2197: range 0000000017439F40-000000001743A1C9
void __cdecl proto_log::PlayerLogBodyLogin::MergeFrom(
        proto_log::PlayerLogBodyLogin *const this,
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
  const proto_log::PlayerLogBodyLogin *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyLogin::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      2199);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyLogin const>(from);
  if ( source )
    proto_log::PlayerLogBodyLogin::MergeFrom(this, source);
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

// Line 2212: range 000000001743A1CA-000000001743A97C
void __cdecl proto_log::PlayerLogBodyLogin::MergeFrom(
        proto_log::PlayerLogBodyLogin *const this,
        const proto_log::PlayerLogBodyLogin *from)
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
  const std::string *v20; // rax
  const std::string *v21; // rcx
  const std::string *v22; // rax
  const std::string *v23; // rcx
  google::protobuf::uint32 v24; // edx
  google::protobuf::uint32 v25; // edx
  google::protobuf::uint32 v26; // edx
  google::protobuf::uint32 v27; // edx
  google::protobuf::uint32 v28; // edx
  char v29; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v31[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyLogin::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v29 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_common.pb.cc",
      2214);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v29 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v29 )
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
  v10 = proto_log::PlayerLogBodyLogin::register_cps[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->register_cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->register_cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->register_cps_, v11, from->register_cps_);
  }
  v12 = proto_log::PlayerLogBodyLogin::cps[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->cps_, v13, from->cps_);
  }
  v14 = proto_log::PlayerLogBodyLogin::client_ip[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_ip_, v15, from->client_ip_);
  }
  v16 = proto_log::PlayerLogBodyLogin::device_uuid[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_uuid_, v17, from->device_uuid_);
  }
  v18 = proto_log::PlayerLogBodyLogin::device_info[abi:cxx11](from);
  if ( std::string::size(v18) )
  {
    v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_info_, v19, from->device_info_);
  }
  v20 = proto_log::PlayerLogBodyLogin::system_info[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->system_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->system_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->system_info_, v21, from->system_info_);
  }
  v22 = proto_log::PlayerLogBodyLogin::gate_ip[abi:cxx11](from);
  if ( std::string::size(v22) )
  {
    v23 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->gate_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->gate_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->gate_ip_, v23, from->gate_ip_);
  }
  if ( proto_log::PlayerLogBodyLogin::platform(from) )
  {
    v24 = proto_log::PlayerLogBodyLogin::platform(from);
    proto_log::PlayerLogBodyLogin::set_platform(this, v24);
  }
  if ( proto_log::PlayerLogBodyLogin::channel_id(from) )
  {
    v25 = proto_log::PlayerLogBodyLogin::channel_id(from);
    proto_log::PlayerLogBodyLogin::set_channel_id(this, v25);
  }
  if ( proto_log::PlayerLogBodyLogin::sub_channel_id(from) )
  {
    v26 = proto_log::PlayerLogBodyLogin::sub_channel_id(from);
    proto_log::PlayerLogBodyLogin::set_sub_channel_id(this, v26);
  }
  if ( proto_log::PlayerLogBodyLogin::client_port(from) )
  {
    v27 = proto_log::PlayerLogBodyLogin::client_port(from);
    proto_log::PlayerLogBodyLogin::set_client_port(this, v27);
  }
  if ( proto_log::PlayerLogBodyLogin::gate_port(from) )
  {
    v28 = proto_log::PlayerLogBodyLogin::gate_port(from);
    proto_log::PlayerLogBodyLogin::set_gate_port(this, v28);
  }
  if ( v31 == (char *)v2 )
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

// Line 2264: range 000000001743A97E-000000001743A9BB
void __cdecl proto_log::PlayerLogBodyLogin::CopyFrom(
        proto_log::PlayerLogBodyLogin *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyLogin::Clear(this);
    proto_log::PlayerLogBodyLogin::MergeFrom(this, from);
  }
};

// Line 2271: range 000000001743A9BC-000000001743A9F9
void __cdecl proto_log::PlayerLogBodyLogin::CopyFrom(
        proto_log::PlayerLogBodyLogin *const this,
        const proto_log::PlayerLogBodyLogin *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyLogin::Clear(this);
    proto_log::PlayerLogBodyLogin::MergeFrom(this, from);
  }
};

// Line 2278: range 000000001743A9FA-000000001743AA08
bool __cdecl proto_log::PlayerLogBodyLogin::IsInitialized(const proto_log::PlayerLogBodyLogin *const this)
{
  return 1;
};

// Line 2282: range 000000001743AA0A-000000001743AA3B
void __cdecl proto_log::PlayerLogBodyLogin::Swap(
        proto_log::PlayerLogBodyLogin *const this,
        proto_log::PlayerLogBodyLogin *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyLogin::InternalSwap(this, other);
};

// Line 2286: range 000000001743AA3C-000000001743ADF9
void __cdecl proto_log::PlayerLogBodyLogin::InternalSwap(
        proto_log::PlayerLogBodyLogin *const this,
        proto_log::PlayerLogBodyLogin *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-B0h]

  std::swap<std::string *>(&this->register_cps_.ptr_, &other->register_cps_.ptr_);
  std::swap<std::string *>(&this->cps_.ptr_, &other->cps_.ptr_);
  std::swap<std::string *>(&this->client_ip_.ptr_, &other->client_ip_.ptr_);
  std::swap<std::string *>(&this->device_uuid_.ptr_, &other->device_uuid_.ptr_);
  std::swap<std::string *>(&this->device_info_.ptr_, &other->device_info_.ptr_);
  std::swap<std::string *>(&this->system_info_.ptr_, &other->system_info_.ptr_);
  std::swap<std::string *>(&this->gate_ip_.ptr_, &other->gate_ip_.ptr_);
  std::swap<unsigned int>(&this->platform_, &other->platform_);
  std::swap<unsigned int>(&this->channel_id_, &other->channel_id_);
  std::swap<unsigned int>(&this->sub_channel_id_, &other->sub_channel_id_);
  std::swap<unsigned int>(&this->client_port_, &other->client_port_);
  std::swap<unsigned int>(&this->gate_port_, &other->gate_port_);
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

// Line 2304: range 000000001743ADFA-000000001743AE1A
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyLogin::GetMetadata(
        const proto_log::PlayerLogBodyLogin *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[1];
};

// Line 2773: range 000000001743AE1C-000000001743AEDB
void __cdecl proto_log::PlayerLogBodyLogout::PlayerLogBodyLogout(proto_log::PlayerLogBodyLogout *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyLogout + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyLogout::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyLogout::SharedCtor(this);
};

// Line 2781: range 000000001743AEDC-000000001743B437
void __cdecl proto_log::PlayerLogBodyLogout::PlayerLogBodyLogout(
        proto_log::PlayerLogBodyLogout *const this,
        const proto_log::PlayerLogBodyLogout *from)
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
  const std::string *v19; // rax
  const std::string *v20; // rax
  const std::string *v21; // rcx
  const std::string *v22; // rax
  const std::string *v23; // rax
  const std::string *v24; // rcx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyLogout + 2);
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->register_cps_, v4);
  v5 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->register_cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->register_cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->register_cps_, v6, from->register_cps_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->cps_, v7);
  v8 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->cps_, v9, from->cps_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_ip_, v10);
  v11 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_ip_, v12, from->client_ip_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_uuid_, v13);
  v14 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_uuid_, v15, from->device_uuid_);
  }
  v16 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_info_, v16);
  v17 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](from);
  if ( std::string::size(v17) )
  {
    v18 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_info_, v18, from->device_info_);
  }
  v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->system_info_, v19);
  v20 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->system_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->system_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->system_info_, v21, from->system_info_);
  }
  v22 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->gate_ip_, v22);
  v23 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](from);
  if ( std::string::size(v23) )
  {
    v24 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->gate_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->gate_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->gate_ip_, v24, from->gate_ip_);
  }
  memcpy(&this->platform_, &from->platform_, 0x18uLL);
};

// Line 2820: range 000000001743B438-000000001743B54C
void __cdecl proto_log::PlayerLogBodyLogout::SharedCtor(proto_log::PlayerLogBodyLogout *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->system_info_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->gate_ip_, v7);
  memset(&this->platform_, 0, 0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 2834: range 000000001743B54E-000000001743B5B7
void __cdecl proto_log::PlayerLogBodyLogout::~PlayerLogBodyLogout(proto_log::PlayerLogBodyLogout *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyLogout + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyLogout::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 2834: range 000000001743B5B8-000000001743B5E2
void __cdecl proto_log::PlayerLogBodyLogout::~PlayerLogBodyLogout(proto_log::PlayerLogBodyLogout *const this)
{
  proto_log::PlayerLogBodyLogout::~PlayerLogBodyLogout(this);
  operator delete(this, 0x68uLL);
};

// Line 2839: range 000000001743B5E4-000000001743B6A0
void __cdecl proto_log::PlayerLogBodyLogout::SharedDtor(proto_log::PlayerLogBodyLogout *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->system_info_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->gate_ip_, v7);
};

// Line 2849: range 000000001743B6A2-000000001743B6F0
void __cdecl proto_log::PlayerLogBodyLogout::SetCachedSize(const proto_log::PlayerLogBodyLogout *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 2854: range 000000001743B6F2-000000001743B703
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyLogout::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[2].descriptor;
};

// Line 2859: range 000000001743B704-000000001743B713
const proto_log::PlayerLogBodyLogout *__cdecl proto_log::PlayerLogBodyLogout::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyLogout::internal_default_instance();
};

// Line 2864: range 000000001743B714-000000001743B788
proto_log::PlayerLogBodyLogout *__cdecl proto_log::PlayerLogBodyLogout::New(
        const proto_log::PlayerLogBodyLogout *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyLogout *v2; // rbx

  v2 = (proto_log::PlayerLogBodyLogout *)operator new(0x68uLL);
  proto_log::PlayerLogBodyLogout::PlayerLogBodyLogout(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyLogout>(arena, v2);
  return v2;
};

// Line 2872: range 000000001743B78A-000000001743B8C5
void __cdecl proto_log::PlayerLogBodyLogout::Clear(proto_log::PlayerLogBodyLogout *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->system_info_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->gate_ip_, v7);
  memset(&this->platform_, 0, 0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 2892: range 000000001743B8C6-000000001743C806
bool __cdecl proto_log::PlayerLogBodyLogout::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyLogout *const this,
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
  std::string *v43; // rdx
  const std::string *v44; // rax
  unsigned int v45; // r14d
  const std::string *v46; // rax
  google::protobuf::internal::WireFormatLite *v47; // rax
  const char *v48; // r8
  std::string *v49; // rdx
  const std::string *v50; // rax
  unsigned int v51; // r14d
  const std::string *v52; // rax
  google::protobuf::internal::WireFormatLite *v53; // rax
  const char *v54; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v55; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v60[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:2897";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyLogout::MergePartialFromCodedStream;
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
                    &this->platform_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 18 )
              goto handle_unusual;
            v13 = proto_log::PlayerLogBodyLogout::mutable_register_cps[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.register_cps",
                                     v18) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 26 )
              goto handle_unusual;
            v19 = proto_log::PlayerLogBodyLogout::mutable_cps[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.cps",
                                     v24) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v25 = proto_log::PlayerLogBodyLogout::mutable_client_ip[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.client_ip",
                                     v30) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v31 = proto_log::PlayerLogBodyLogout::mutable_device_uuid[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v31) )
              goto failure;
            v32 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
            v33 = std::string::length(v32);
            v34 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
            v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v35,
                                     (const char *)v33,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.device_uuid",
                                     v36) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 50 )
              goto handle_unusual;
            v37 = proto_log::PlayerLogBodyLogout::mutable_device_info[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v37) )
              goto failure;
            v38 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
            v39 = std::string::length(v38);
            v40 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
            v41 = (google::protobuf::internal::WireFormatLite *)std::string::data(v40);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v41,
                                     (const char *)v39,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.device_info",
                                     v42) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 58 )
              goto handle_unusual;
            v43 = proto_log::PlayerLogBodyLogout::mutable_system_info[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v43) )
              goto failure;
            v44 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
            v45 = std::string::length(v44);
            v46 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
            v47 = (google::protobuf::internal::WireFormatLite *)std::string::data(v46);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v47,
                                     (const char *)v45,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.system_info",
                                     v48) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->game_time_) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 72 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->channel_id_) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 80 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->sub_channel_id_) )
              goto failure;
            continue;
          case 11:
            if ( (_BYTE)tag != 88 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->client_port_) )
              goto failure;
            continue;
          case 12:
            if ( (_BYTE)tag != 98 )
              goto handle_unusual;
            v49 = proto_log::PlayerLogBodyLogout::mutable_gate_ip[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v49) )
              goto failure;
            v50 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
            v51 = std::string::length(v50);
            v52 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
            v53 = (google::protobuf::internal::WireFormatLite *)std::string::data(v52);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v53,
                                     (const char *)v51,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.gate_ip",
                                     v54) )
              goto failure;
            continue;
          case 13:
            if ( (_BYTE)tag != 104 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->gate_port_) )
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
      goto LABEL_98;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v55 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v55 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v55->unknown_fields) );
failure:
  result = 0;
LABEL_98:
  if ( v60 == (char *)v2 )
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

// Line 3118: range 000000001743C808-000000001743CDE4
void __cdecl proto_log::PlayerLogBodyLogout::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyLogout *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
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
  const std::string *v17; // rax
  const std::string *v18; // rax
  unsigned int v19; // ebx
  const std::string *v20; // rax
  google::protobuf::internal::WireFormatLite *v21; // rax
  const char *v22; // r8
  const std::string *v23; // rcx
  const std::string *v24; // rax
  const std::string *v25; // rax
  unsigned int v26; // ebx
  const std::string *v27; // rax
  google::protobuf::internal::WireFormatLite *v28; // rax
  const char *v29; // r8
  const std::string *v30; // rcx
  const std::string *v31; // rax
  const std::string *v32; // rax
  unsigned int v33; // ebx
  const std::string *v34; // rax
  google::protobuf::internal::WireFormatLite *v35; // rax
  const char *v36; // r8
  const std::string *v37; // rcx
  const std::string *v38; // rax
  const std::string *v39; // rax
  unsigned int v40; // ebx
  const std::string *v41; // rax
  google::protobuf::internal::WireFormatLite *v42; // rax
  const char *v43; // r8
  const std::string *v44; // rcx
  google::protobuf::uint32 v45; // ecx
  google::protobuf::uint32 v46; // ecx
  google::protobuf::uint32 v47; // ecx
  google::protobuf::uint32 v48; // ecx
  const std::string *v49; // rax
  const std::string *v50; // rax
  unsigned int v51; // ebx
  const std::string *v52; // rax
  google::protobuf::internal::WireFormatLite *v53; // rax
  const char *v54; // r8
  const std::string *v55; // rcx
  google::protobuf::uint32 v56; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v58; // rax

  if ( proto_log::PlayerLogBodyLogout::platform(this) )
  {
    v2 = proto_log::PlayerLogBodyLogout::platform(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  v3 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.register_cps",
      v8);
    v9 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v9, output);
  }
  v10 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.cps",
      v15);
    v16 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v16, output);
  }
  v17 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
    v19 = std::string::length(v18);
    v20 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
    v21 = (google::protobuf::internal::WireFormatLite *)std::string::data(v20);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v21,
      (const char *)v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.client_ip",
      v22);
    v23 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v23, output);
  }
  v24 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
  if ( std::string::size(v24) )
  {
    v25 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
    v26 = std::string::length(v25);
    v27 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
    v28 = (google::protobuf::internal::WireFormatLite *)std::string::data(v27);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v28,
      (const char *)v26,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.device_uuid",
      v29);
    v30 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v30, output);
  }
  v31 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
  if ( std::string::size(v31) )
  {
    v32 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
    v33 = std::string::length(v32);
    v34 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
    v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v35,
      (const char *)v33,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.device_info",
      v36);
    v37 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, v37, output);
  }
  v38 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
  if ( std::string::size(v38) )
  {
    v39 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
    v40 = std::string::length(v39);
    v41 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
    v42 = (google::protobuf::internal::WireFormatLite *)std::string::data(v41);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v42,
      (const char *)v40,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.system_info",
      v43);
    v44 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(7LL, v44, output);
  }
  if ( proto_log::PlayerLogBodyLogout::game_time(this) )
  {
    v45 = proto_log::PlayerLogBodyLogout::game_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(8, v45, output);
  }
  if ( proto_log::PlayerLogBodyLogout::channel_id(this) )
  {
    v46 = proto_log::PlayerLogBodyLogout::channel_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(9, v46, output);
  }
  if ( proto_log::PlayerLogBodyLogout::sub_channel_id(this) )
  {
    v47 = proto_log::PlayerLogBodyLogout::sub_channel_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(10, v47, output);
  }
  if ( proto_log::PlayerLogBodyLogout::client_port(this) )
  {
    v48 = proto_log::PlayerLogBodyLogout::client_port(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(11, v48, output);
  }
  v49 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
  if ( std::string::size(v49) )
  {
    v50 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
    v51 = std::string::length(v50);
    v52 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
    v53 = (google::protobuf::internal::WireFormatLite *)std::string::data(v52);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v53,
      (const char *)v51,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.gate_ip",
      v54);
    v55 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(12LL, v55, output);
  }
  if ( proto_log::PlayerLogBodyLogout::gate_port(this) )
  {
    v56 = proto_log::PlayerLogBodyLogout::gate_port(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(13, v56, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_39;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v58 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_39:
      v58 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v58->unknown_fields, output);
  }
};

// Line 3231: range 000000001743CDE6-000000001743D402
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyLogout::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyLogout *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  const std::string *v4; // rax
  const std::string *v5; // rax
  unsigned int v6; // ebx
  const std::string *v7; // rax
  google::protobuf::internal::WireFormatLite *v8; // rax
  const char *v9; // r8
  const std::string *v10; // rcx
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
  const std::string *v32; // rax
  const std::string *v33; // rax
  unsigned int v34; // ebx
  const std::string *v35; // rax
  google::protobuf::internal::WireFormatLite *v36; // rax
  const char *v37; // r8
  const std::string *v38; // rcx
  const std::string *v39; // rax
  const std::string *v40; // rax
  unsigned int v41; // ebx
  const std::string *v42; // rax
  google::protobuf::internal::WireFormatLite *v43; // rax
  const char *v44; // r8
  const std::string *v45; // rcx
  google::protobuf::uint32 v46; // ecx
  google::protobuf::uint32 v47; // ecx
  google::protobuf::uint32 v48; // ecx
  google::protobuf::uint32 v49; // ecx
  const std::string *v50; // rax
  const std::string *v51; // rax
  unsigned int v52; // ebx
  const std::string *v53; // rax
  google::protobuf::internal::WireFormatLite *v54; // rax
  const char *v55; // r8
  const std::string *v56; // rcx
  google::protobuf::uint32 v57; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v59; // rax

  if ( proto_log::PlayerLogBodyLogout::platform(this) )
  {
    v3 = proto_log::PlayerLogBodyLogout::platform(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  v4 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
  if ( std::string::size(v4) )
  {
    v5 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
    v6 = std::string::length(v5);
    v7 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
    v8 = (google::protobuf::internal::WireFormatLite *)std::string::data(v7);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v8,
      (const char *)v6,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.register_cps",
      v9);
    v10 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v10, target);
  }
  v11 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.cps",
      v16);
    v17 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v17, target);
  }
  v18 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.client_ip",
      v23);
    v24 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v24, target);
  }
  v25 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
  if ( std::string::size(v25) )
  {
    v26 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
    v27 = std::string::length(v26);
    v28 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
    v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v29,
      (const char *)v27,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.device_uuid",
      v30);
    v31 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v31, target);
  }
  v32 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
  if ( std::string::size(v32) )
  {
    v33 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
    v34 = std::string::length(v33);
    v35 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
    v36 = (google::protobuf::internal::WireFormatLite *)std::string::data(v35);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v36,
      (const char *)v34,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.device_info",
      v37);
    v38 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(6, v38, target);
  }
  v39 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
  if ( std::string::size(v39) )
  {
    v40 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
    v41 = std::string::length(v40);
    v42 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
    v43 = (google::protobuf::internal::WireFormatLite *)std::string::data(v42);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v43,
      (const char *)v41,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.system_info",
      v44);
    v45 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(7, v45, target);
  }
  if ( proto_log::PlayerLogBodyLogout::game_time(this) )
  {
    v46 = proto_log::PlayerLogBodyLogout::game_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, v46, target);
  }
  if ( proto_log::PlayerLogBodyLogout::channel_id(this) )
  {
    v47 = proto_log::PlayerLogBodyLogout::channel_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, v47, target);
  }
  if ( proto_log::PlayerLogBodyLogout::sub_channel_id(this) )
  {
    v48 = proto_log::PlayerLogBodyLogout::sub_channel_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, v48, target);
  }
  if ( proto_log::PlayerLogBodyLogout::client_port(this) )
  {
    v49 = proto_log::PlayerLogBodyLogout::client_port(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, v49, target);
  }
  v50 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
  if ( std::string::size(v50) )
  {
    v51 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
    v52 = std::string::length(v51);
    v53 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
    v54 = (google::protobuf::internal::WireFormatLite *)std::string::data(v53);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v54,
      (const char *)v52,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyLogout.gate_ip",
      v55);
    v56 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(12, v56, target);
  }
  if ( proto_log::PlayerLogBodyLogout::gate_port(this) )
  {
    v57 = proto_log::PlayerLogBodyLogout::gate_port(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, v57, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_39;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v59 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_39:
      v59 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v59->unknown_fields, target);
  }
  return target;
};

// Line 3352: range 000000001743D404-000000001743D80E
size_t __cdecl proto_log::PlayerLogBodyLogout::ByteSizeLong(const proto_log::PlayerLogBodyLogout *const this)
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
  const std::string *v13; // rax
  const std::string *v14; // rax
  const std::string *v15; // rax
  const std::string *v16; // rax
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // eax
  google::protobuf::uint32 v19; // eax
  google::protobuf::uint32 v20; // eax
  google::protobuf::uint32 v21; // eax
  google::protobuf::uint32 v22; // eax
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
  v3 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  v11 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v12) + 1;
  }
  v13 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
  if ( std::string::size(v13) )
  {
    v14 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v14) + 1;
  }
  v15 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
  if ( std::string::size(v15) )
  {
    v16 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v16) + 1;
  }
  if ( proto_log::PlayerLogBodyLogout::platform(this) )
  {
    v17 = proto_log::PlayerLogBodyLogout::platform(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v17) + 1;
  }
  if ( proto_log::PlayerLogBodyLogout::game_time(this) )
  {
    v18 = proto_log::PlayerLogBodyLogout::game_time(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v18) + 1;
  }
  if ( proto_log::PlayerLogBodyLogout::channel_id(this) )
  {
    v19 = proto_log::PlayerLogBodyLogout::channel_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v19) + 1;
  }
  if ( proto_log::PlayerLogBodyLogout::sub_channel_id(this) )
  {
    v20 = proto_log::PlayerLogBodyLogout::sub_channel_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v20) + 1;
  }
  if ( proto_log::PlayerLogBodyLogout::client_port(this) )
  {
    v21 = proto_log::PlayerLogBodyLogout::client_port(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v21) + 1;
  }
  if ( proto_log::PlayerLogBodyLogout::gate_port(this) )
  {
    v22 = proto_log::PlayerLogBodyLogout::gate_port(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v22) + 1;
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

// Line 3459: range 000000001743D810-000000001743DA99
void __cdecl proto_log::PlayerLogBodyLogout::MergeFrom(
        proto_log::PlayerLogBodyLogout *const this,
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
  const proto_log::PlayerLogBodyLogout *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyLogout::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      3461);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyLogout const>(from);
  if ( source )
    proto_log::PlayerLogBodyLogout::MergeFrom(this, source);
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

// Line 3474: range 000000001743DA9A-000000001743E286
void __cdecl proto_log::PlayerLogBodyLogout::MergeFrom(
        proto_log::PlayerLogBodyLogout *const this,
        const proto_log::PlayerLogBodyLogout *from)
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
  const std::string *v20; // rax
  const std::string *v21; // rcx
  const std::string *v22; // rax
  const std::string *v23; // rcx
  google::protobuf::uint32 v24; // edx
  google::protobuf::uint32 v25; // edx
  google::protobuf::uint32 v26; // edx
  google::protobuf::uint32 v27; // edx
  google::protobuf::uint32 v28; // edx
  google::protobuf::uint32 v29; // edx
  char v30; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v32[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyLogout::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v30 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_common.pb.cc",
      3476);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v30 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v30 )
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
  v10 = proto_log::PlayerLogBodyLogout::register_cps[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->register_cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->register_cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->register_cps_, v11, from->register_cps_);
  }
  v12 = proto_log::PlayerLogBodyLogout::cps[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->cps_, v13, from->cps_);
  }
  v14 = proto_log::PlayerLogBodyLogout::client_ip[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_ip_, v15, from->client_ip_);
  }
  v16 = proto_log::PlayerLogBodyLogout::device_uuid[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_uuid_, v17, from->device_uuid_);
  }
  v18 = proto_log::PlayerLogBodyLogout::device_info[abi:cxx11](from);
  if ( std::string::size(v18) )
  {
    v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_info_, v19, from->device_info_);
  }
  v20 = proto_log::PlayerLogBodyLogout::system_info[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->system_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->system_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->system_info_, v21, from->system_info_);
  }
  v22 = proto_log::PlayerLogBodyLogout::gate_ip[abi:cxx11](from);
  if ( std::string::size(v22) )
  {
    v23 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->gate_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->gate_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->gate_ip_, v23, from->gate_ip_);
  }
  if ( proto_log::PlayerLogBodyLogout::platform(from) )
  {
    v24 = proto_log::PlayerLogBodyLogout::platform(from);
    proto_log::PlayerLogBodyLogout::set_platform(this, v24);
  }
  if ( proto_log::PlayerLogBodyLogout::game_time(from) )
  {
    v25 = proto_log::PlayerLogBodyLogout::game_time(from);
    proto_log::PlayerLogBodyLogout::set_game_time(this, v25);
  }
  if ( proto_log::PlayerLogBodyLogout::channel_id(from) )
  {
    v26 = proto_log::PlayerLogBodyLogout::channel_id(from);
    proto_log::PlayerLogBodyLogout::set_channel_id(this, v26);
  }
  if ( proto_log::PlayerLogBodyLogout::sub_channel_id(from) )
  {
    v27 = proto_log::PlayerLogBodyLogout::sub_channel_id(from);
    proto_log::PlayerLogBodyLogout::set_sub_channel_id(this, v27);
  }
  if ( proto_log::PlayerLogBodyLogout::client_port(from) )
  {
    v28 = proto_log::PlayerLogBodyLogout::client_port(from);
    proto_log::PlayerLogBodyLogout::set_client_port(this, v28);
  }
  if ( proto_log::PlayerLogBodyLogout::gate_port(from) )
  {
    v29 = proto_log::PlayerLogBodyLogout::gate_port(from);
    proto_log::PlayerLogBodyLogout::set_gate_port(this, v29);
  }
  if ( v32 == (char *)v2 )
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

// Line 3529: range 000000001743E288-000000001743E2C5
void __cdecl proto_log::PlayerLogBodyLogout::CopyFrom(
        proto_log::PlayerLogBodyLogout *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyLogout::Clear(this);
    proto_log::PlayerLogBodyLogout::MergeFrom(this, from);
  }
};

// Line 3536: range 000000001743E2C6-000000001743E303
void __cdecl proto_log::PlayerLogBodyLogout::CopyFrom(
        proto_log::PlayerLogBodyLogout *const this,
        const proto_log::PlayerLogBodyLogout *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyLogout::Clear(this);
    proto_log::PlayerLogBodyLogout::MergeFrom(this, from);
  }
};

// Line 3543: range 000000001743E304-000000001743E312
bool __cdecl proto_log::PlayerLogBodyLogout::IsInitialized(const proto_log::PlayerLogBodyLogout *const this)
{
  return 1;
};

// Line 3547: range 000000001743E314-000000001743E345
void __cdecl proto_log::PlayerLogBodyLogout::Swap(
        proto_log::PlayerLogBodyLogout *const this,
        proto_log::PlayerLogBodyLogout *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyLogout::InternalSwap(this, other);
};

// Line 3551: range 000000001743E346-000000001743E724
void __cdecl proto_log::PlayerLogBodyLogout::InternalSwap(
        proto_log::PlayerLogBodyLogout *const this,
        proto_log::PlayerLogBodyLogout *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-B0h]

  std::swap<std::string *>(&this->register_cps_.ptr_, &other->register_cps_.ptr_);
  std::swap<std::string *>(&this->cps_.ptr_, &other->cps_.ptr_);
  std::swap<std::string *>(&this->client_ip_.ptr_, &other->client_ip_.ptr_);
  std::swap<std::string *>(&this->device_uuid_.ptr_, &other->device_uuid_.ptr_);
  std::swap<std::string *>(&this->device_info_.ptr_, &other->device_info_.ptr_);
  std::swap<std::string *>(&this->system_info_.ptr_, &other->system_info_.ptr_);
  std::swap<std::string *>(&this->gate_ip_.ptr_, &other->gate_ip_.ptr_);
  std::swap<unsigned int>(&this->platform_, &other->platform_);
  std::swap<unsigned int>(&this->game_time_, &other->game_time_);
  std::swap<unsigned int>(&this->channel_id_, &other->channel_id_);
  std::swap<unsigned int>(&this->sub_channel_id_, &other->sub_channel_id_);
  std::swap<unsigned int>(&this->client_port_, &other->client_port_);
  std::swap<unsigned int>(&this->gate_port_, &other->gate_port_);
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

// Line 3570: range 000000001743E726-000000001743E746
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyLogout::GetMetadata(
        const proto_log::PlayerLogBodyLogout *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[2];
};

// Line 4043: range 000000001743E748-000000001743E807
void __cdecl proto_log::PlayerLogBodyAddExp::PlayerLogBodyAddExp(proto_log::PlayerLogBodyAddExp *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddExp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyAddExp::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyAddExp::SharedCtor(this);
};

// Line 4051: range 000000001743E808-000000001743E9E4
void __cdecl proto_log::PlayerLogBodyAddExp::PlayerLogBodyAddExp(
        proto_log::PlayerLogBodyAddExp *const this,
        const proto_log::PlayerLogBodyAddExp *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddExp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  memcpy(&this->add_exp_, &from->add_exp_, 0x14uLL);
};

// Line 4062: range 000000001743E9E6-000000001743EA54
void __cdecl proto_log::PlayerLogBodyAddExp::SharedCtor(proto_log::PlayerLogBodyAddExp *const this)
{
  memset(&this->add_exp_, 0, 0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 4069: range 000000001743EA56-000000001743EABF
void __cdecl proto_log::PlayerLogBodyAddExp::~PlayerLogBodyAddExp(proto_log::PlayerLogBodyAddExp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddExp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyAddExp::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 4069: range 000000001743EAC0-000000001743EAEA
void __cdecl proto_log::PlayerLogBodyAddExp::~PlayerLogBodyAddExp(proto_log::PlayerLogBodyAddExp *const this)
{
  proto_log::PlayerLogBodyAddExp::~PlayerLogBodyAddExp(this);
  operator delete(this, 0x28uLL);
};

// Line 4074: range 000000001743EAEC-000000001743EAF6
void __cdecl proto_log::PlayerLogBodyAddExp::SharedDtor(proto_log::PlayerLogBodyAddExp *const this)
{
  ;
};

// Line 4077: range 000000001743EAF8-000000001743EB4E
void __cdecl proto_log::PlayerLogBodyAddExp::SetCachedSize(const proto_log::PlayerLogBodyAddExp *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 4082: range 000000001743EB50-000000001743EB61
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyAddExp::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 4087: range 000000001743EB62-000000001743EB71
const proto_log::PlayerLogBodyAddExp *__cdecl proto_log::PlayerLogBodyAddExp::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyAddExp::internal_default_instance();
};

// Line 4092: range 000000001743EB72-000000001743EBE6
proto_log::PlayerLogBodyAddExp *__cdecl proto_log::PlayerLogBodyAddExp::New(
        const proto_log::PlayerLogBodyAddExp *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyAddExp *v2; // rbx

  v2 = (proto_log::PlayerLogBodyAddExp *)operator new(0x28uLL);
  proto_log::PlayerLogBodyAddExp::PlayerLogBodyAddExp(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyAddExp>(arena, v2);
  return v2;
};

// Line 4100: range 000000001743EBE8-000000001743EC75
void __cdecl proto_log::PlayerLogBodyAddExp::Clear(proto_log::PlayerLogBodyAddExp *const this)
{
  memset(&this->add_exp_, 0, 0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 4113: range 000000001743EC76-000000001743F60B
bool __cdecl proto_log::PlayerLogBodyAddExp::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyAddExp *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:4118";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddExp::MergePartialFromCodedStream;
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
      if ( TagFieldNumber == 3 )
      {
        if ( (_BYTE)tag != 24 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->reason_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber > 3 )
          break;
        if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 8 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                  input,
                  &this->add_exp_) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                  input,
                  &this->exp_after_) )
            goto failure;
        }
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_55;
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
LABEL_55:
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

// Line 4185: range 000000001743F60C-000000001743F7BF
void __cdecl proto_log::PlayerLogBodyAddExp::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyAddExp *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int64 v2; // rcx
  google::protobuf::int64 v3; // rcx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax

  if ( proto_log::PlayerLogBodyAddExp::add_exp(this) )
  {
    v2 = proto_log::PlayerLogBodyAddExp::add_exp(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyAddExp::exp_after(this) )
  {
    v3 = proto_log::PlayerLogBodyAddExp::exp_after(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(2, v3, output);
  }
  if ( proto_log::PlayerLogBodyAddExp::reason(this) )
  {
    v4 = proto_log::PlayerLogBodyAddExp::reason(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
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
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v6->unknown_fields, output);
  }
};

// Line 4213: range 000000001743F7C0-000000001743F98B
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyAddExp::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyAddExp *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::int64 v3; // rcx
  google::protobuf::int64 v4; // rcx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax

  if ( proto_log::PlayerLogBodyAddExp::add_exp(this) )
  {
    v3 = proto_log::PlayerLogBodyAddExp::add_exp(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyAddExp::exp_after(this) )
  {
    v4 = proto_log::PlayerLogBodyAddExp::exp_after(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogBodyAddExp::reason(this) )
  {
    v5 = proto_log::PlayerLogBodyAddExp::reason(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
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
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_19:
      v7 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v7->unknown_fields, target);
  }
  return target;
};

// Line 4242: range 000000001743F98C-000000001743FB7C
size_t __cdecl proto_log::PlayerLogBodyAddExp::ByteSizeLong(const proto_log::PlayerLogBodyAddExp *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::int64 v3; // rax
  google::protobuf::int64 v4; // rax
  google::protobuf::uint32 v5; // eax
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
  if ( proto_log::PlayerLogBodyAddExp::add_exp(this) )
  {
    v3 = proto_log::PlayerLogBodyAddExp::add_exp(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v3) + 1;
  }
  if ( proto_log::PlayerLogBodyAddExp::exp_after(this) )
  {
    v4 = proto_log::PlayerLogBodyAddExp::exp_after(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v4) + 1;
  }
  if ( proto_log::PlayerLogBodyAddExp::reason(this) )
  {
    v5 = proto_log::PlayerLogBodyAddExp::reason(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v5) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 4279: range 000000001743FB7E-000000001743FE07
void __cdecl proto_log::PlayerLogBodyAddExp::MergeFrom(
        proto_log::PlayerLogBodyAddExp *const this,
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
  const proto_log::PlayerLogBodyAddExp *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddExp::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      4281);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyAddExp const>(from);
  if ( source )
    proto_log::PlayerLogBodyAddExp::MergeFrom(this, source);
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

// Line 4294: range 000000001743FE08-0000000017440219
void __cdecl proto_log::PlayerLogBodyAddExp::MergeFrom(
        proto_log::PlayerLogBodyAddExp *const this,
        const proto_log::PlayerLogBodyAddExp *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::int64 v10; // rdx
  google::protobuf::int64 v11; // rdx
  google::protobuf::uint32 v12; // edx
  char v13; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v15[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddExp::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v13 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_common.pb.cc",
      4296);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v13 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v13 )
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
  if ( proto_log::PlayerLogBodyAddExp::add_exp(from) )
  {
    v10 = proto_log::PlayerLogBodyAddExp::add_exp(from);
    proto_log::PlayerLogBodyAddExp::set_add_exp(this, v10);
  }
  if ( proto_log::PlayerLogBodyAddExp::exp_after(from) )
  {
    v11 = proto_log::PlayerLogBodyAddExp::exp_after(from);
    proto_log::PlayerLogBodyAddExp::set_exp_after(this, v11);
  }
  if ( proto_log::PlayerLogBodyAddExp::reason(from) )
  {
    v12 = proto_log::PlayerLogBodyAddExp::reason(from);
    proto_log::PlayerLogBodyAddExp::set_reason(this, v12);
  }
  if ( v15 == (char *)v2 )
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

// Line 4312: range 000000001744021A-0000000017440257
void __cdecl proto_log::PlayerLogBodyAddExp::CopyFrom(
        proto_log::PlayerLogBodyAddExp *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyAddExp::Clear(this);
    proto_log::PlayerLogBodyAddExp::MergeFrom(this, from);
  }
};

// Line 4319: range 0000000017440258-0000000017440295
void __cdecl proto_log::PlayerLogBodyAddExp::CopyFrom(
        proto_log::PlayerLogBodyAddExp *const this,
        const proto_log::PlayerLogBodyAddExp *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyAddExp::Clear(this);
    proto_log::PlayerLogBodyAddExp::MergeFrom(this, from);
  }
};

// Line 4326: range 0000000017440296-00000000174402A4
bool __cdecl proto_log::PlayerLogBodyAddExp::IsInitialized(const proto_log::PlayerLogBodyAddExp *const this)
{
  return 1;
};

// Line 4330: range 00000000174402A6-00000000174402D7
void __cdecl proto_log::PlayerLogBodyAddExp::Swap(
        proto_log::PlayerLogBodyAddExp *const this,
        proto_log::PlayerLogBodyAddExp *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyAddExp::InternalSwap(this, other);
};

// Line 4334: range 00000000174402D8-0000000017440492
void __cdecl proto_log::PlayerLogBodyAddExp::InternalSwap(
        proto_log::PlayerLogBodyAddExp *const this,
        proto_log::PlayerLogBodyAddExp *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<long>(&this->add_exp_, &other->add_exp_);
  std::swap<long>(&this->exp_after_, &other->exp_after_);
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

// Line 4343: range 0000000017440494-00000000174404B4
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyAddExp::GetMetadata(
        const proto_log::PlayerLogBodyAddExp *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[3];
};

// Line 4405: range 00000000174404B6-0000000017440575
void __cdecl proto_log::PlayerLogBodyLevelUp::PlayerLogBodyLevelUp(proto_log::PlayerLogBodyLevelUp *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyLevelUp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyLevelUp::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyLevelUp::SharedCtor(this);
};

// Line 4413: range 0000000017440576-0000000017440752
void __cdecl proto_log::PlayerLogBodyLevelUp::PlayerLogBodyLevelUp(
        proto_log::PlayerLogBodyLevelUp *const this,
        const proto_log::PlayerLogBodyLevelUp *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyLevelUp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
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
  memcpy(&this->add_exp_, &from->add_exp_, 0x1CuLL);
};

// Line 4424: range 0000000017440754-00000000174407C2
void __cdecl proto_log::PlayerLogBodyLevelUp::SharedCtor(proto_log::PlayerLogBodyLevelUp *const this)
{
  memset(&this->add_exp_, 0, 0x1CuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 4431: range 00000000174407C4-000000001744082D
void __cdecl proto_log::PlayerLogBodyLevelUp::~PlayerLogBodyLevelUp(proto_log::PlayerLogBodyLevelUp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyLevelUp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyLevelUp::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 4431: range 000000001744082E-0000000017440858
void __cdecl proto_log::PlayerLogBodyLevelUp::~PlayerLogBodyLevelUp(proto_log::PlayerLogBodyLevelUp *const this)
{
  proto_log::PlayerLogBodyLevelUp::~PlayerLogBodyLevelUp(this);
  operator delete(this, 0x30uLL);
};

// Line 4436: range 000000001744085A-0000000017440864
void __cdecl proto_log::PlayerLogBodyLevelUp::SharedDtor(proto_log::PlayerLogBodyLevelUp *const this)
{
  ;
};

// Line 4439: range 0000000017440866-00000000174408BC
void __cdecl proto_log::PlayerLogBodyLevelUp::SetCachedSize(
        const proto_log::PlayerLogBodyLevelUp *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 4444: range 00000000174408BE-00000000174408CF
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyLevelUp::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[4].descriptor;
};

// Line 4449: range 00000000174408D0-00000000174408DF
const proto_log::PlayerLogBodyLevelUp *__cdecl proto_log::PlayerLogBodyLevelUp::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyLevelUp::internal_default_instance();
};

// Line 4454: range 00000000174408E0-0000000017440954
proto_log::PlayerLogBodyLevelUp *__cdecl proto_log::PlayerLogBodyLevelUp::New(
        const proto_log::PlayerLogBodyLevelUp *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyLevelUp *v2; // rbx

  v2 = (proto_log::PlayerLogBodyLevelUp *)operator new(0x30uLL);
  proto_log::PlayerLogBodyLevelUp::PlayerLogBodyLevelUp(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyLevelUp>(arena, v2);
  return v2;
};

// Line 4462: range 0000000017440956-00000000174409E3
void __cdecl proto_log::PlayerLogBodyLevelUp::Clear(proto_log::PlayerLogBodyLevelUp *const this)
{
  memset(&this->add_exp_, 0, 0x1CuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 4475: range 00000000174409E4-0000000017441417
bool __cdecl proto_log::PlayerLogBodyLevelUp::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyLevelUp *const this,
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
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v13; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v18[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:4480";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyLevelUp::MergePartialFromCodedStream;
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
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->add_exp_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->exp_after_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->level_before_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->level_after_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->level_limit_) )
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
      goto LABEL_59;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v13 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v13 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v13->unknown_fields) );
failure:
  result = 0;
LABEL_59:
  if ( v18 == (char *)v2 )
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

// Line 4575: range 0000000017441418-0000000017441637
void __cdecl proto_log::PlayerLogBodyLevelUp::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyLevelUp *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int64 v2; // rcx
  google::protobuf::int64 v3; // rcx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::uint32 v6; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v8; // rax

  if ( proto_log::PlayerLogBodyLevelUp::add_exp(this) )
  {
    v2 = proto_log::PlayerLogBodyLevelUp::add_exp(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyLevelUp::exp_after(this) )
  {
    v3 = proto_log::PlayerLogBodyLevelUp::exp_after(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(2, v3, output);
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_before(this) )
  {
    v4 = proto_log::PlayerLogBodyLevelUp::level_before(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_after(this) )
  {
    v5 = proto_log::PlayerLogBodyLevelUp::level_after(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v5, output);
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_limit(this) )
  {
    v6 = proto_log::PlayerLogBodyLevelUp::level_limit(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(5, v6, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_23:
      v8 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v8->unknown_fields, output);
  }
};

// Line 4613: range 0000000017441638-0000000017441877
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyLevelUp::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyLevelUp *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::int64 v3; // rcx
  google::protobuf::int64 v4; // rcx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::uint32 v6; // ecx
  google::protobuf::uint32 v7; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rax

  if ( proto_log::PlayerLogBodyLevelUp::add_exp(this) )
  {
    v3 = proto_log::PlayerLogBodyLevelUp::add_exp(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyLevelUp::exp_after(this) )
  {
    v4 = proto_log::PlayerLogBodyLevelUp::exp_after(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_before(this) )
  {
    v5 = proto_log::PlayerLogBodyLevelUp::level_before(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_after(this) )
  {
    v6 = proto_log::PlayerLogBodyLevelUp::level_after(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v6, target);
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_limit(this) )
  {
    v7 = proto_log::PlayerLogBodyLevelUp::level_limit(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, v7, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_23:
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v9->unknown_fields, target);
  }
  return target;
};

// Line 4652: range 0000000017441878-0000000017441AC8
size_t __cdecl proto_log::PlayerLogBodyLevelUp::ByteSizeLong(const proto_log::PlayerLogBodyLevelUp *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::int64 v3; // rax
  google::protobuf::int64 v4; // rax
  google::protobuf::uint32 v5; // eax
  google::protobuf::uint32 v6; // eax
  google::protobuf::uint32 v7; // eax
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
  if ( proto_log::PlayerLogBodyLevelUp::add_exp(this) )
  {
    v3 = proto_log::PlayerLogBodyLevelUp::add_exp(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v3) + 1;
  }
  if ( proto_log::PlayerLogBodyLevelUp::exp_after(this) )
  {
    v4 = proto_log::PlayerLogBodyLevelUp::exp_after(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v4) + 1;
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_before(this) )
  {
    v5 = proto_log::PlayerLogBodyLevelUp::level_before(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v5) + 1;
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_after(this) )
  {
    v6 = proto_log::PlayerLogBodyLevelUp::level_after(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v6) + 1;
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_limit(this) )
  {
    v7 = proto_log::PlayerLogBodyLevelUp::level_limit(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v7) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 4703: range 0000000017441ACA-0000000017441D53
void __cdecl proto_log::PlayerLogBodyLevelUp::MergeFrom(
        proto_log::PlayerLogBodyLevelUp *const this,
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
  const proto_log::PlayerLogBodyLevelUp *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyLevelUp::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      4705);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyLevelUp const>(from);
  if ( source )
    proto_log::PlayerLogBodyLevelUp::MergeFrom(this, source);
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

// Line 4718: range 0000000017441D54-00000000174421D9
void __cdecl proto_log::PlayerLogBodyLevelUp::MergeFrom(
        proto_log::PlayerLogBodyLevelUp *const this,
        const proto_log::PlayerLogBodyLevelUp *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::int64 v10; // rdx
  google::protobuf::int64 v11; // rdx
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyLevelUp::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      4720);
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
  if ( proto_log::PlayerLogBodyLevelUp::add_exp(from) )
  {
    v10 = proto_log::PlayerLogBodyLevelUp::add_exp(from);
    proto_log::PlayerLogBodyLevelUp::set_add_exp(this, v10);
  }
  if ( proto_log::PlayerLogBodyLevelUp::exp_after(from) )
  {
    v11 = proto_log::PlayerLogBodyLevelUp::exp_after(from);
    proto_log::PlayerLogBodyLevelUp::set_exp_after(this, v11);
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_before(from) )
  {
    v12 = proto_log::PlayerLogBodyLevelUp::level_before(from);
    proto_log::PlayerLogBodyLevelUp::set_level_before(this, v12);
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_after(from) )
  {
    v13 = proto_log::PlayerLogBodyLevelUp::level_after(from);
    proto_log::PlayerLogBodyLevelUp::set_level_after(this, v13);
  }
  if ( proto_log::PlayerLogBodyLevelUp::level_limit(from) )
  {
    v14 = proto_log::PlayerLogBodyLevelUp::level_limit(from);
    proto_log::PlayerLogBodyLevelUp::set_level_limit(this, v14);
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

// Line 4742: range 00000000174421DA-0000000017442217
void __cdecl proto_log::PlayerLogBodyLevelUp::CopyFrom(
        proto_log::PlayerLogBodyLevelUp *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyLevelUp::Clear(this);
    proto_log::PlayerLogBodyLevelUp::MergeFrom(this, from);
  }
};

// Line 4749: range 0000000017442218-0000000017442255
void __cdecl proto_log::PlayerLogBodyLevelUp::CopyFrom(
        proto_log::PlayerLogBodyLevelUp *const this,
        const proto_log::PlayerLogBodyLevelUp *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyLevelUp::Clear(this);
    proto_log::PlayerLogBodyLevelUp::MergeFrom(this, from);
  }
};

// Line 4756: range 0000000017442256-0000000017442264
bool __cdecl proto_log::PlayerLogBodyLevelUp::IsInitialized(const proto_log::PlayerLogBodyLevelUp *const this)
{
  return 1;
};

// Line 4760: range 0000000017442266-0000000017442297
void __cdecl proto_log::PlayerLogBodyLevelUp::Swap(
        proto_log::PlayerLogBodyLevelUp *const this,
        proto_log::PlayerLogBodyLevelUp *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyLevelUp::InternalSwap(this, other);
};

// Line 4764: range 0000000017442298-0000000017442488
void __cdecl proto_log::PlayerLogBodyLevelUp::InternalSwap(
        proto_log::PlayerLogBodyLevelUp *const this,
        proto_log::PlayerLogBodyLevelUp *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<long>(&this->add_exp_, &other->add_exp_);
  std::swap<long>(&this->exp_after_, &other->exp_after_);
  std::swap<unsigned int>(&this->level_before_, &other->level_before_);
  std::swap<unsigned int>(&this->level_after_, &other->level_after_);
  std::swap<unsigned int>(&this->level_limit_, &other->level_limit_);
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

// Line 4775: range 000000001744248A-00000000174424AA
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyLevelUp::GetMetadata(
        const proto_log::PlayerLogBodyLevelUp *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[4];
};

// Line 4868: range 00000000174424AC-000000001744256B
void __cdecl proto_log::PlayerLogBodyAddMaterial::PlayerLogBodyAddMaterial(
        proto_log::PlayerLogBodyAddMaterial *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddMaterial + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyAddMaterial::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyAddMaterial::SharedCtor(this);
};

// Line 4876: range 000000001744256C-0000000017442740
void __cdecl proto_log::PlayerLogBodyAddMaterial::PlayerLogBodyAddMaterial(
        proto_log::PlayerLogBodyAddMaterial *const this,
        const proto_log::PlayerLogBodyAddMaterial *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddMaterial + 2);
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
  memcpy(&this->material_id_, &from->material_id_, 0x28uLL);
};

// Line 4887: range 0000000017442742-00000000174427A8
void __cdecl proto_log::PlayerLogBodyAddMaterial::SharedCtor(proto_log::PlayerLogBodyAddMaterial *const this)
{
  memset(&this->material_id_, 0, 0x28uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 4894: range 00000000174427AA-0000000017442813
void __cdecl proto_log::PlayerLogBodyAddMaterial::~PlayerLogBodyAddMaterial(
        proto_log::PlayerLogBodyAddMaterial *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddMaterial + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyAddMaterial::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 4894: range 0000000017442814-000000001744283E
void __cdecl proto_log::PlayerLogBodyAddMaterial::~PlayerLogBodyAddMaterial(
        proto_log::PlayerLogBodyAddMaterial *const this)
{
  proto_log::PlayerLogBodyAddMaterial::~PlayerLogBodyAddMaterial(this);
  operator delete(this, 0x40uLL);
};

// Line 4899: range 0000000017442840-000000001744284A
void __cdecl proto_log::PlayerLogBodyAddMaterial::SharedDtor(proto_log::PlayerLogBodyAddMaterial *const this)
{
  ;
};

// Line 4902: range 000000001744284C-000000001744289A
void __cdecl proto_log::PlayerLogBodyAddMaterial::SetCachedSize(
        const proto_log::PlayerLogBodyAddMaterial *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 4907: range 000000001744289C-00000000174428AD
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyAddMaterial::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[5].descriptor;
};

// Line 4912: range 00000000174428AE-00000000174428BD
const proto_log::PlayerLogBodyAddMaterial *__cdecl proto_log::PlayerLogBodyAddMaterial::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyAddMaterial::internal_default_instance();
};

// Line 4917: range 00000000174428BE-0000000017442932
proto_log::PlayerLogBodyAddMaterial *__cdecl proto_log::PlayerLogBodyAddMaterial::New(
        const proto_log::PlayerLogBodyAddMaterial *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyAddMaterial *v2; // rbx

  v2 = (proto_log::PlayerLogBodyAddMaterial *)operator new(0x40uLL);
  proto_log::PlayerLogBodyAddMaterial::PlayerLogBodyAddMaterial(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyAddMaterial>(arena, v2);
  return v2;
};

// Line 4925: range 0000000017442934-00000000174429C1
void __cdecl proto_log::PlayerLogBodyAddMaterial::Clear(proto_log::PlayerLogBodyAddMaterial *const this)
{
  memset(&this->material_id_, 0, 0x28uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 4938: range 00000000174429C2-00000000174434D7
bool __cdecl proto_log::PlayerLogBodyAddMaterial::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyAddMaterial *const this,
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
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v13; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v18[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:4943";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddMaterial::MergePartialFromCodedStream;
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
                    &this->material_id_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->material_type_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->material_level_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->material_star_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->material_sub_star_) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 48 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->add_num_) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 56 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->left_num_) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->reason_) )
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
      goto LABEL_71;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v13 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v13 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v13->unknown_fields) );
failure:
  result = 0;
LABEL_71:
  if ( v18 == (char *)v2 )
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

// Line 5080: range 00000000174434D8-0000000017443799
void __cdecl proto_log::PlayerLogBodyAddMaterial::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyAddMaterial *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::uint32 v6; // ecx
  google::protobuf::int64 v7; // rcx
  google::protobuf::int64 v8; // rcx
  google::protobuf::uint32 v9; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v11; // rax

  if ( proto_log::PlayerLogBodyAddMaterial::material_id(this) )
  {
    v2 = proto_log::PlayerLogBodyAddMaterial::material_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_type(this) )
  {
    v3 = proto_log::PlayerLogBodyAddMaterial::material_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_level(this) )
  {
    v4 = proto_log::PlayerLogBodyAddMaterial::material_level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_star(this) )
  {
    v5 = proto_log::PlayerLogBodyAddMaterial::material_star(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v5, output);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_sub_star(this) )
  {
    v6 = proto_log::PlayerLogBodyAddMaterial::material_sub_star(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(5, v6, output);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::add_num(this) )
  {
    v7 = proto_log::PlayerLogBodyAddMaterial::add_num(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(6, v7, output);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::left_num(this) )
  {
    v8 = proto_log::PlayerLogBodyAddMaterial::left_num(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(7, v8, output);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::reason(this) )
  {
    v9 = proto_log::PlayerLogBodyAddMaterial::reason(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(8, v9, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_29;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v11 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_29:
      v11 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v11->unknown_fields, output);
  }
};

// Line 5133: range 000000001744379A-0000000017443A87
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyAddMaterial::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyAddMaterial *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::uint32 v6; // ecx
  google::protobuf::uint32 v7; // ecx
  google::protobuf::int64 v8; // rcx
  google::protobuf::int64 v9; // rcx
  google::protobuf::uint32 v10; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v12; // rax

  if ( proto_log::PlayerLogBodyAddMaterial::material_id(this) )
  {
    v3 = proto_log::PlayerLogBodyAddMaterial::material_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_type(this) )
  {
    v4 = proto_log::PlayerLogBodyAddMaterial::material_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_level(this) )
  {
    v5 = proto_log::PlayerLogBodyAddMaterial::material_level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_star(this) )
  {
    v6 = proto_log::PlayerLogBodyAddMaterial::material_star(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v6, target);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_sub_star(this) )
  {
    v7 = proto_log::PlayerLogBodyAddMaterial::material_sub_star(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, v7, target);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::add_num(this) )
  {
    v8 = proto_log::PlayerLogBodyAddMaterial::add_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, v8, target);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::left_num(this) )
  {
    v9 = proto_log::PlayerLogBodyAddMaterial::left_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(7, v9, target);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::reason(this) )
  {
    v10 = proto_log::PlayerLogBodyAddMaterial::reason(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, v10, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_29;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v12 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_29:
      v12 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v12->unknown_fields, target);
  }
  return target;
};

// Line 5187: range 0000000017443A88-0000000017443D60
size_t __cdecl proto_log::PlayerLogBodyAddMaterial::ByteSizeLong(const proto_log::PlayerLogBodyAddMaterial *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  google::protobuf::uint32 v5; // eax
  google::protobuf::uint32 v6; // eax
  google::protobuf::int64 v7; // rax
  google::protobuf::uint32 v8; // eax
  google::protobuf::uint32 v9; // eax
  google::protobuf::int64 v10; // rax
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
  if ( proto_log::PlayerLogBodyAddMaterial::material_id(this) )
  {
    v3 = proto_log::PlayerLogBodyAddMaterial::material_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_type(this) )
  {
    v4 = proto_log::PlayerLogBodyAddMaterial::material_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_level(this) )
  {
    v5 = proto_log::PlayerLogBodyAddMaterial::material_level(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v5) + 1;
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_star(this) )
  {
    v6 = proto_log::PlayerLogBodyAddMaterial::material_star(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v6) + 1;
  }
  if ( proto_log::PlayerLogBodyAddMaterial::add_num(this) )
  {
    v7 = proto_log::PlayerLogBodyAddMaterial::add_num(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v7) + 1;
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_sub_star(this) )
  {
    v8 = proto_log::PlayerLogBodyAddMaterial::material_sub_star(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v8) + 1;
  }
  if ( proto_log::PlayerLogBodyAddMaterial::reason(this) )
  {
    v9 = proto_log::PlayerLogBodyAddMaterial::reason(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v9) + 1;
  }
  if ( proto_log::PlayerLogBodyAddMaterial::left_num(this) )
  {
    v10 = proto_log::PlayerLogBodyAddMaterial::left_num(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v10) + 1;
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

// Line 5259: range 0000000017443D62-0000000017443FEB
void __cdecl proto_log::PlayerLogBodyAddMaterial::MergeFrom(
        proto_log::PlayerLogBodyAddMaterial *const this,
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
  const proto_log::PlayerLogBodyAddMaterial *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddMaterial::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      5261);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyAddMaterial const>(from);
  if ( source )
    proto_log::PlayerLogBodyAddMaterial::MergeFrom(this, source);
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

// Line 5274: range 0000000017443FEC-000000001744451F
void __cdecl proto_log::PlayerLogBodyAddMaterial::MergeFrom(
        proto_log::PlayerLogBodyAddMaterial *const this,
        const proto_log::PlayerLogBodyAddMaterial *from)
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
  google::protobuf::int64 v14; // rdx
  google::protobuf::uint32 v15; // edx
  google::protobuf::uint32 v16; // edx
  google::protobuf::int64 v17; // rdx
  char v18; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v20[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddMaterial::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v18 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_common.pb.cc",
      5276);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v18 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v18 )
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
  if ( proto_log::PlayerLogBodyAddMaterial::material_id(from) )
  {
    v10 = proto_log::PlayerLogBodyAddMaterial::material_id(from);
    proto_log::PlayerLogBodyAddMaterial::set_material_id(this, v10);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_type(from) )
  {
    v11 = proto_log::PlayerLogBodyAddMaterial::material_type(from);
    proto_log::PlayerLogBodyAddMaterial::set_material_type(this, v11);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_level(from) )
  {
    v12 = proto_log::PlayerLogBodyAddMaterial::material_level(from);
    proto_log::PlayerLogBodyAddMaterial::set_material_level(this, v12);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_star(from) )
  {
    v13 = proto_log::PlayerLogBodyAddMaterial::material_star(from);
    proto_log::PlayerLogBodyAddMaterial::set_material_star(this, v13);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::add_num(from) )
  {
    v14 = proto_log::PlayerLogBodyAddMaterial::add_num(from);
    proto_log::PlayerLogBodyAddMaterial::set_add_num(this, v14);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::material_sub_star(from) )
  {
    v15 = proto_log::PlayerLogBodyAddMaterial::material_sub_star(from);
    proto_log::PlayerLogBodyAddMaterial::set_material_sub_star(this, v15);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::reason(from) )
  {
    v16 = proto_log::PlayerLogBodyAddMaterial::reason(from);
    proto_log::PlayerLogBodyAddMaterial::set_reason(this, v16);
  }
  if ( proto_log::PlayerLogBodyAddMaterial::left_num(from) )
  {
    v17 = proto_log::PlayerLogBodyAddMaterial::left_num(from);
    proto_log::PlayerLogBodyAddMaterial::set_left_num(this, v17);
  }
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
};

// Line 5307: range 0000000017444520-000000001744455D
void __cdecl proto_log::PlayerLogBodyAddMaterial::CopyFrom(
        proto_log::PlayerLogBodyAddMaterial *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyAddMaterial::Clear(this);
    proto_log::PlayerLogBodyAddMaterial::MergeFrom(this, from);
  }
};

// Line 5314: range 000000001744455E-000000001744459B
void __cdecl proto_log::PlayerLogBodyAddMaterial::CopyFrom(
        proto_log::PlayerLogBodyAddMaterial *const this,
        const proto_log::PlayerLogBodyAddMaterial *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyAddMaterial::Clear(this);
    proto_log::PlayerLogBodyAddMaterial::MergeFrom(this, from);
  }
};

// Line 5321: range 000000001744459C-00000000174445AA
bool __cdecl proto_log::PlayerLogBodyAddMaterial::IsInitialized(const proto_log::PlayerLogBodyAddMaterial *const this)
{
  return 1;
};

// Line 5325: range 00000000174445AC-00000000174445DD
void __cdecl proto_log::PlayerLogBodyAddMaterial::Swap(
        proto_log::PlayerLogBodyAddMaterial *const this,
        proto_log::PlayerLogBodyAddMaterial *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyAddMaterial::InternalSwap(this, other);
};

// Line 5329: range 00000000174445DE-000000001744481F
void __cdecl proto_log::PlayerLogBodyAddMaterial::InternalSwap(
        proto_log::PlayerLogBodyAddMaterial *const this,
        proto_log::PlayerLogBodyAddMaterial *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->material_id_, &other->material_id_);
  std::swap<unsigned int>(&this->material_type_, &other->material_type_);
  std::swap<unsigned int>(&this->material_level_, &other->material_level_);
  std::swap<unsigned int>(&this->material_star_, &other->material_star_);
  std::swap<long>(&this->add_num_, &other->add_num_);
  std::swap<unsigned int>(&this->material_sub_star_, &other->material_sub_star_);
  std::swap<unsigned int>(&this->reason_, &other->reason_);
  std::swap<long>(&this->left_num_, &other->left_num_);
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

// Line 5343: range 0000000017444820-0000000017444840
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyAddMaterial::GetMetadata(
        const proto_log::PlayerLogBodyAddMaterial *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[5];
};

// Line 5486: range 0000000017444842-0000000017444901
void __cdecl proto_log::PlayerLogBodyRecharge::PlayerLogBodyRecharge(proto_log::PlayerLogBodyRecharge *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyRecharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyRecharge::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyRecharge::SharedCtor(this);
};

// Line 5494: range 0000000017444902-0000000017445066
void __cdecl proto_log::PlayerLogBodyRecharge::PlayerLogBodyRecharge(
        proto_log::PlayerLogBodyRecharge *const this,
        const proto_log::PlayerLogBodyRecharge *from)
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
  const std::string *v19; // rax
  const std::string *v20; // rax
  const std::string *v21; // rcx
  const std::string *v22; // rax
  const std::string *v23; // rax
  const std::string *v24; // rcx
  const std::string *v25; // rax
  const std::string *v26; // rax
  const std::string *v27; // rcx
  const std::string *v28; // rax
  const std::string *v29; // rax
  const std::string *v30; // rcx
  const std::string *v31; // rax
  const std::string *v32; // rax
  const std::string *v33; // rcx
  const std::string *v34; // rax
  const std::string *v35; // rax
  const std::string *v36; // rcx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyRecharge + 2);
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->register_cps_, v4);
  v5 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->register_cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->register_cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->register_cps_, v6, from->register_cps_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->cps_, v7);
  v8 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->cps_, v9, from->cps_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_ip_, v10);
  v11 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_ip_, v12, from->client_ip_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_uuid_, v13);
  v14 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_uuid_, v15, from->device_uuid_);
  }
  v16 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_info_, v16);
  v17 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](from);
  if ( std::string::size(v17) )
  {
    v18 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_info_, v18, from->device_info_);
  }
  v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->system_info_, v19);
  v20 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->system_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->system_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->system_info_, v21, from->system_info_);
  }
  v22 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->product_name_, v22);
  v23 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](from);
  if ( std::string::size(v23) )
  {
    v24 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->product_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->product_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->product_name_, v24, from->product_name_);
  }
  v25 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->price_tier_, v25);
  v26 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](from);
  if ( std::string::size(v26) )
  {
    v27 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->price_tier_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->price_tier_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->price_tier_, v27, from->price_tier_);
  }
  v28 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->pay_channel_, v28);
  v29 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](from);
  if ( std::string::size(v29) )
  {
    v30 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->pay_channel_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->pay_channel_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->pay_channel_, v30, from->pay_channel_);
  }
  v31 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->currency_code_, v31);
  v32 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](from);
  if ( std::string::size(v32) )
  {
    v33 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->currency_code_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->currency_code_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->currency_code_, v33, from->currency_code_);
  }
  v34 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->format_price_, v34);
  v35 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](from);
  if ( std::string::size(v35) )
  {
    v36 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->format_price_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->format_price_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->format_price_, v36, from->format_price_);
  }
  memcpy(&this->platform_, &from->platform_, 0x20uLL);
};

// Line 5549: range 0000000017445068-00000000174451E1
void __cdecl proto_log::PlayerLogBodyRecharge::SharedCtor(proto_log::PlayerLogBodyRecharge *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  const std::string *v11; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->system_info_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->product_name_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->price_tier_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->pay_channel_, v9);
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->currency_code_, v10);
  v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->format_price_, v11);
  memset(&this->platform_, 0, 0x20uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 5567: range 00000000174451E2-000000001744524B
void __cdecl proto_log::PlayerLogBodyRecharge::~PlayerLogBodyRecharge(proto_log::PlayerLogBodyRecharge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyRecharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyRecharge::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 5567: range 000000001744524C-0000000017445276
void __cdecl proto_log::PlayerLogBodyRecharge::~PlayerLogBodyRecharge(proto_log::PlayerLogBodyRecharge *const this)
{
  proto_log::PlayerLogBodyRecharge::~PlayerLogBodyRecharge(this);
  operator delete(this, 0x90uLL);
};

// Line 5572: range 0000000017445278-0000000017445394
void __cdecl proto_log::PlayerLogBodyRecharge::SharedDtor(proto_log::PlayerLogBodyRecharge *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  const std::string *v11; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->system_info_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->product_name_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->price_tier_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->pay_channel_, v9);
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->currency_code_, v10);
  v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->format_price_, v11);
};

// Line 5586: range 0000000017445396-00000000174453E9
void __cdecl proto_log::PlayerLogBodyRecharge::SetCachedSize(
        const proto_log::PlayerLogBodyRecharge *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 5591: range 00000000174453EA-00000000174453FB
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyRecharge::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[6].descriptor;
};

// Line 5596: range 00000000174453FC-000000001744540B
const proto_log::PlayerLogBodyRecharge *__cdecl proto_log::PlayerLogBodyRecharge::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyRecharge::internal_default_instance();
};

// Line 5601: range 000000001744540C-0000000017445480
proto_log::PlayerLogBodyRecharge *__cdecl proto_log::PlayerLogBodyRecharge::New(
        const proto_log::PlayerLogBodyRecharge *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyRecharge *v2; // rbx

  v2 = (proto_log::PlayerLogBodyRecharge *)operator new(0x90uLL);
  proto_log::PlayerLogBodyRecharge::PlayerLogBodyRecharge(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyRecharge>(arena, v2);
  return v2;
};

// Line 5609: range 0000000017445482-000000001744561D
void __cdecl proto_log::PlayerLogBodyRecharge::Clear(proto_log::PlayerLogBodyRecharge *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  const std::string *v11; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->register_cps_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->client_ip_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_uuid_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_info_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->system_info_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->product_name_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->price_tier_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->pay_channel_, v9);
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->currency_code_, v10);
  v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->format_price_, v11);
  memset(&this->platform_, 0, 0x20uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 5633: range 000000001744561E-00000000174467CF
bool __cdecl proto_log::PlayerLogBodyRecharge::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyRecharge *const this,
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
  const google::protobuf::uint8 *v11; // rcx
  const google::protobuf::uint8 *v12; // rdx
  int v13; // esi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  int v16; // esi
  const google::protobuf::uint8 *v17; // rdx
  int v18; // ecx
  google::protobuf::uint32 TagFallback; // edx
  bool v20; // cl
  std::string *v21; // rdx
  const std::string *v22; // rax
  unsigned int v23; // r14d
  const std::string *v24; // rax
  google::protobuf::internal::WireFormatLite *v25; // rax
  const char *v26; // r8
  std::string *v27; // rdx
  const std::string *v28; // rax
  unsigned int v29; // r14d
  const std::string *v30; // rax
  google::protobuf::internal::WireFormatLite *v31; // rax
  const char *v32; // r8
  std::string *v33; // rdx
  const std::string *v34; // rax
  unsigned int v35; // r14d
  const std::string *v36; // rax
  google::protobuf::internal::WireFormatLite *v37; // rax
  const char *v38; // r8
  std::string *v39; // rdx
  const std::string *v40; // rax
  unsigned int v41; // r14d
  const std::string *v42; // rax
  google::protobuf::internal::WireFormatLite *v43; // rax
  const char *v44; // r8
  std::string *v45; // rdx
  const std::string *v46; // rax
  unsigned int v47; // r14d
  const std::string *v48; // rax
  google::protobuf::internal::WireFormatLite *v49; // rax
  const char *v50; // r8
  std::string *v51; // rdx
  const std::string *v52; // rax
  unsigned int v53; // r14d
  const std::string *v54; // rax
  google::protobuf::internal::WireFormatLite *v55; // rax
  const char *v56; // r8
  std::string *v57; // rdx
  const std::string *v58; // rax
  unsigned int v59; // r14d
  const std::string *v60; // rax
  google::protobuf::internal::WireFormatLite *v61; // rax
  const char *v62; // r8
  std::string *v63; // rdx
  const std::string *v64; // rax
  unsigned int v65; // r14d
  const std::string *v66; // rax
  google::protobuf::internal::WireFormatLite *v67; // rax
  const char *v68; // r8
  std::string *v69; // rdx
  const std::string *v70; // rax
  unsigned int v71; // r14d
  const std::string *v72; // rax
  google::protobuf::internal::WireFormatLite *v73; // rax
  const char *v74; // r8
  std::string *v75; // rdx
  const std::string *v76; // rax
  unsigned int v77; // r14d
  const std::string *v78; // rax
  google::protobuf::internal::WireFormatLite *v79; // rax
  const char *v80; // r8
  std::string *v81; // rdx
  const std::string *v82; // rax
  unsigned int v83; // r14d
  const std::string *v84; // rax
  google::protobuf::internal::WireFormatLite *v85; // rax
  const char *v86; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v87; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v93[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v93;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:5638";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyRecharge::MergePartialFromCodedStream;
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
        goto LABEL_41;
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
      if ( *(char *)v7 > 0 )
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
        goto LABEL_46;
      }
      if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
        __asan_report_load8(input);
      v11 = input->buffer_ + 1;
      if ( *(_BYTE *)(((unsigned __int64)&input->buffer_end_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&input->buffer_end_);
      if ( v11 >= input->buffer_end_ )
        goto LABEL_41;
      v12 = input->buffer_;
      if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
        && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_);
      }
      v13 = *v12;
      v14 = (unsigned __int64)(input->buffer_ + 1);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0
        && ((LOBYTE(input->buffer_) + 1) & 7) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(input->buffer_ + 1);
      }
      if ( (v13 & ~*(unsigned __int8 *)v14) <= 127 )
      {
LABEL_41:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = TagFallback;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v20 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1) < 0x3FFF;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 48);
        *(_BYTE *)(v2 + 48) = v20;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 80), (bool *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
        v15 = (unsigned __int64)(input->buffer_ + 1);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0
          && ((LOBYTE(input->buffer_) + 1) & 7) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_ + 1);
        }
        v16 = *(unsigned __int8 *)v15 << 7;
        v17 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v18 = v16 + *v17 - 128;
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 112);
        *(_DWORD *)(v2 + 112) = v18;
        google::protobuf::io::CodedInputStream::Advance(input, 2);
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 32);
        *(_BYTE *)(v2 + 32) = 1;
        v10 = std::make_pair<unsigned int &,bool &>((unsigned int *)(v2 + 112), (bool *)(v2 + 32));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      }
LABEL_46:
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
                    &this->platform_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 18 )
              goto handle_unusual;
            v21 = proto_log::PlayerLogBodyRecharge::mutable_register_cps[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v21) )
              goto failure;
            v22 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
            v23 = std::string::length(v22);
            v24 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
            v25 = (google::protobuf::internal::WireFormatLite *)std::string::data(v24);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v25,
                                     (const char *)v23,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecha"
                                                                                            "rge.register_cps",
                                     v26) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 26 )
              goto handle_unusual;
            v27 = proto_log::PlayerLogBodyRecharge::mutable_cps[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v27) )
              goto failure;
            v28 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
            v29 = std::string::length(v28);
            v30 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
            v31 = (google::protobuf::internal::WireFormatLite *)std::string::data(v30);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v31,
                                     (const char *)v29,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.cps",
                                     v32) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v33 = proto_log::PlayerLogBodyRecharge::mutable_client_ip[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v33) )
              goto failure;
            v34 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
            v35 = std::string::length(v34);
            v36 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
            v37 = (google::protobuf::internal::WireFormatLite *)std::string::data(v36);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v37,
                                     (const char *)v35,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.client_ip",
                                     v38) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v39 = proto_log::PlayerLogBodyRecharge::mutable_device_uuid[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v39) )
              goto failure;
            v40 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
            v41 = std::string::length(v40);
            v42 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
            v43 = (google::protobuf::internal::WireFormatLite *)std::string::data(v42);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v43,
                                     (const char *)v41,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.device_uuid",
                                     v44) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 50 )
              goto handle_unusual;
            v45 = proto_log::PlayerLogBodyRecharge::mutable_device_info[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v45) )
              goto failure;
            v46 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
            v47 = std::string::length(v46);
            v48 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
            v49 = (google::protobuf::internal::WireFormatLite *)std::string::data(v48);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v49,
                                     (const char *)v47,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.device_info",
                                     v50) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 58 )
              goto handle_unusual;
            v51 = proto_log::PlayerLogBodyRecharge::mutable_system_info[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v51) )
              goto failure;
            v52 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
            v53 = std::string::length(v52);
            v54 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
            v55 = (google::protobuf::internal::WireFormatLite *)std::string::data(v54);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v55,
                                     (const char *)v53,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.system_info",
                                     v56) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->order_id_) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 74 )
              goto handle_unusual;
            v57 = proto_log::PlayerLogBodyRecharge::mutable_product_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v57) )
              goto failure;
            v58 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
            v59 = std::string::length(v58);
            v60 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
            v61 = (google::protobuf::internal::WireFormatLite *)std::string::data(v60);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v61,
                                     (const char *)v59,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecha"
                                                                                            "rge.product_name",
                                     v62) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 82 )
              goto handle_unusual;
            v63 = proto_log::PlayerLogBodyRecharge::mutable_price_tier[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v63) )
              goto failure;
            v64 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
            v65 = std::string::length(v64);
            v66 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
            v67 = (google::protobuf::internal::WireFormatLite *)std::string::data(v66);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v67,
                                     (const char *)v65,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.price_tier",
                                     v68) )
              goto failure;
            continue;
          case 11:
            if ( (_BYTE)tag != 90 )
              goto handle_unusual;
            v69 = proto_log::PlayerLogBodyRecharge::mutable_pay_channel[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v69) )
              goto failure;
            v70 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
            v71 = std::string::length(v70);
            v72 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
            v73 = (google::protobuf::internal::WireFormatLite *)std::string::data(v72);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v73,
                                     (const char *)v71,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.pay_channel",
                                     v74) )
              goto failure;
            continue;
          case 12:
            if ( (_BYTE)tag != 98 )
              goto handle_unusual;
            v75 = proto_log::PlayerLogBodyRecharge::mutable_currency_code[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v75) )
              goto failure;
            v76 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
            v77 = std::string::length(v76);
            v78 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
            v79 = (google::protobuf::internal::WireFormatLite *)std::string::data(v78);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v79,
                                     (const char *)v77,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecha"
                                                                                            "rge.currency_code",
                                     v80) )
              goto failure;
            continue;
          case 13:
            if ( (_BYTE)tag != 106 )
              goto handle_unusual;
            v81 = proto_log::PlayerLogBodyRecharge::mutable_format_price[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v81) )
              goto failure;
            v82 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
            v83 = std::string::length(v82);
            v84 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
            v85 = (google::protobuf::internal::WireFormatLite *)std::string::data(v84);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v85,
                                     (const char *)v83,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecha"
                                                                                            "rge.format_price",
                                     v86) )
              goto failure;
            continue;
          case 14:
            if ( (_BYTE)tag != 112 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                    input,
                    &this->pay_coin_add_) )
              goto failure;
            continue;
          case 15:
            if ( (_BYTE)tag != 120 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                    input,
                    &this->free_coin_add_) )
              goto failure;
            continue;
          case 16:
            if ( (_BYTE)tag != 0x80 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                    input,
                    &this->vip_point_add_) )
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
      goto LABEL_133;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v87 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v87 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v87->unknown_fields) );
failure:
  result = 0;
LABEL_133:
  if ( v93 == (char *)v2 )
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

// Line 5909: range 00000000174467D0-0000000017446F83
void __cdecl proto_log::PlayerLogBodyRecharge::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyRecharge *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
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
  const std::string *v17; // rax
  const std::string *v18; // rax
  unsigned int v19; // ebx
  const std::string *v20; // rax
  google::protobuf::internal::WireFormatLite *v21; // rax
  const char *v22; // r8
  const std::string *v23; // rcx
  const std::string *v24; // rax
  const std::string *v25; // rax
  unsigned int v26; // ebx
  const std::string *v27; // rax
  google::protobuf::internal::WireFormatLite *v28; // rax
  const char *v29; // r8
  const std::string *v30; // rcx
  const std::string *v31; // rax
  const std::string *v32; // rax
  unsigned int v33; // ebx
  const std::string *v34; // rax
  google::protobuf::internal::WireFormatLite *v35; // rax
  const char *v36; // r8
  const std::string *v37; // rcx
  const std::string *v38; // rax
  const std::string *v39; // rax
  unsigned int v40; // ebx
  const std::string *v41; // rax
  google::protobuf::internal::WireFormatLite *v42; // rax
  const char *v43; // r8
  const std::string *v44; // rcx
  google::protobuf::uint32 v45; // ecx
  const std::string *v46; // rax
  const std::string *v47; // rax
  unsigned int v48; // ebx
  const std::string *v49; // rax
  google::protobuf::internal::WireFormatLite *v50; // rax
  const char *v51; // r8
  const std::string *v52; // rcx
  const std::string *v53; // rax
  const std::string *v54; // rax
  unsigned int v55; // ebx
  const std::string *v56; // rax
  google::protobuf::internal::WireFormatLite *v57; // rax
  const char *v58; // r8
  const std::string *v59; // rcx
  const std::string *v60; // rax
  const std::string *v61; // rax
  unsigned int v62; // ebx
  const std::string *v63; // rax
  google::protobuf::internal::WireFormatLite *v64; // rax
  const char *v65; // r8
  const std::string *v66; // rcx
  const std::string *v67; // rax
  const std::string *v68; // rax
  unsigned int v69; // ebx
  const std::string *v70; // rax
  google::protobuf::internal::WireFormatLite *v71; // rax
  const char *v72; // r8
  const std::string *v73; // rcx
  const std::string *v74; // rax
  const std::string *v75; // rax
  unsigned int v76; // ebx
  const std::string *v77; // rax
  google::protobuf::internal::WireFormatLite *v78; // rax
  const char *v79; // r8
  const std::string *v80; // rcx
  google::protobuf::uint64 v81; // rcx
  google::protobuf::uint64 v82; // rcx
  google::protobuf::uint64 v83; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v85; // rax

  if ( proto_log::PlayerLogBodyRecharge::platform(this) )
  {
    v2 = proto_log::PlayerLogBodyRecharge::platform(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  v3 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.register_cps",
      v8);
    v9 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v9, output);
  }
  v10 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.cps",
      v15);
    v16 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v16, output);
  }
  v17 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
    v19 = std::string::length(v18);
    v20 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
    v21 = (google::protobuf::internal::WireFormatLite *)std::string::data(v20);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v21,
      (const char *)v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.client_ip",
      v22);
    v23 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v23, output);
  }
  v24 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
  if ( std::string::size(v24) )
  {
    v25 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
    v26 = std::string::length(v25);
    v27 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
    v28 = (google::protobuf::internal::WireFormatLite *)std::string::data(v27);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v28,
      (const char *)v26,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.device_uuid",
      v29);
    v30 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v30, output);
  }
  v31 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
  if ( std::string::size(v31) )
  {
    v32 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
    v33 = std::string::length(v32);
    v34 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
    v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v35,
      (const char *)v33,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.device_info",
      v36);
    v37 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, v37, output);
  }
  v38 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
  if ( std::string::size(v38) )
  {
    v39 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
    v40 = std::string::length(v39);
    v41 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
    v42 = (google::protobuf::internal::WireFormatLite *)std::string::data(v41);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v42,
      (const char *)v40,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.system_info",
      v43);
    v44 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(7LL, v44, output);
  }
  if ( proto_log::PlayerLogBodyRecharge::order_id(this) )
  {
    v45 = proto_log::PlayerLogBodyRecharge::order_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(8, v45, output);
  }
  v46 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
  if ( std::string::size(v46) )
  {
    v47 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
    v48 = std::string::length(v47);
    v49 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
    v50 = (google::protobuf::internal::WireFormatLite *)std::string::data(v49);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v50,
      (const char *)v48,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.product_name",
      v51);
    v52 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(9LL, v52, output);
  }
  v53 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
  if ( std::string::size(v53) )
  {
    v54 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
    v55 = std::string::length(v54);
    v56 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
    v57 = (google::protobuf::internal::WireFormatLite *)std::string::data(v56);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v57,
      (const char *)v55,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.price_tier",
      v58);
    v59 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(10LL, v59, output);
  }
  v60 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
  if ( std::string::size(v60) )
  {
    v61 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
    v62 = std::string::length(v61);
    v63 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
    v64 = (google::protobuf::internal::WireFormatLite *)std::string::data(v63);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v64,
      (const char *)v62,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.pay_channel",
      v65);
    v66 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(11LL, v66, output);
  }
  v67 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
  if ( std::string::size(v67) )
  {
    v68 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
    v69 = std::string::length(v68);
    v70 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
    v71 = (google::protobuf::internal::WireFormatLite *)std::string::data(v70);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v71,
      (const char *)v69,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.currency_code",
      v72);
    v73 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(12LL, v73, output);
  }
  v74 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
  if ( std::string::size(v74) )
  {
    v75 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
    v76 = std::string::length(v75);
    v77 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
    v78 = (google::protobuf::internal::WireFormatLite *)std::string::data(v77);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v78,
      (const char *)v76,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.format_price",
      v79);
    v80 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(13LL, v80, output);
  }
  if ( proto_log::PlayerLogBodyRecharge::pay_coin_add(this) )
  {
    v81 = proto_log::PlayerLogBodyRecharge::pay_coin_add(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(14, v81, output);
  }
  if ( proto_log::PlayerLogBodyRecharge::free_coin_add(this) )
  {
    v82 = proto_log::PlayerLogBodyRecharge::free_coin_add(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(15, v82, output);
  }
  if ( proto_log::PlayerLogBodyRecharge::vip_point_add(this) )
  {
    v83 = proto_log::PlayerLogBodyRecharge::vip_point_add(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(16, v83, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_45;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v85 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_45:
      v85 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v85->unknown_fields, output);
  }
};

// Line 6057: range 0000000017446F84-0000000017447783
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyRecharge::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyRecharge *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  const std::string *v4; // rax
  const std::string *v5; // rax
  unsigned int v6; // ebx
  const std::string *v7; // rax
  google::protobuf::internal::WireFormatLite *v8; // rax
  const char *v9; // r8
  const std::string *v10; // rcx
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
  const std::string *v32; // rax
  const std::string *v33; // rax
  unsigned int v34; // ebx
  const std::string *v35; // rax
  google::protobuf::internal::WireFormatLite *v36; // rax
  const char *v37; // r8
  const std::string *v38; // rcx
  const std::string *v39; // rax
  const std::string *v40; // rax
  unsigned int v41; // ebx
  const std::string *v42; // rax
  google::protobuf::internal::WireFormatLite *v43; // rax
  const char *v44; // r8
  const std::string *v45; // rcx
  google::protobuf::uint32 v46; // ecx
  const std::string *v47; // rax
  const std::string *v48; // rax
  unsigned int v49; // ebx
  const std::string *v50; // rax
  google::protobuf::internal::WireFormatLite *v51; // rax
  const char *v52; // r8
  const std::string *v53; // rcx
  const std::string *v54; // rax
  const std::string *v55; // rax
  unsigned int v56; // ebx
  const std::string *v57; // rax
  google::protobuf::internal::WireFormatLite *v58; // rax
  const char *v59; // r8
  const std::string *v60; // rcx
  const std::string *v61; // rax
  const std::string *v62; // rax
  unsigned int v63; // ebx
  const std::string *v64; // rax
  google::protobuf::internal::WireFormatLite *v65; // rax
  const char *v66; // r8
  const std::string *v67; // rcx
  const std::string *v68; // rax
  const std::string *v69; // rax
  unsigned int v70; // ebx
  const std::string *v71; // rax
  google::protobuf::internal::WireFormatLite *v72; // rax
  const char *v73; // r8
  const std::string *v74; // rcx
  const std::string *v75; // rax
  const std::string *v76; // rax
  unsigned int v77; // ebx
  const std::string *v78; // rax
  google::protobuf::internal::WireFormatLite *v79; // rax
  const char *v80; // r8
  const std::string *v81; // rcx
  google::protobuf::uint64 v82; // rcx
  google::protobuf::uint64 v83; // rcx
  google::protobuf::uint64 v84; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v86; // rax

  if ( proto_log::PlayerLogBodyRecharge::platform(this) )
  {
    v3 = proto_log::PlayerLogBodyRecharge::platform(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  v4 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
  if ( std::string::size(v4) )
  {
    v5 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
    v6 = std::string::length(v5);
    v7 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
    v8 = (google::protobuf::internal::WireFormatLite *)std::string::data(v7);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v8,
      (const char *)v6,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.register_cps",
      v9);
    v10 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v10, target);
  }
  v11 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.cps",
      v16);
    v17 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v17, target);
  }
  v18 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.client_ip",
      v23);
    v24 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v24, target);
  }
  v25 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
  if ( std::string::size(v25) )
  {
    v26 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
    v27 = std::string::length(v26);
    v28 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
    v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v29,
      (const char *)v27,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.device_uuid",
      v30);
    v31 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v31, target);
  }
  v32 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
  if ( std::string::size(v32) )
  {
    v33 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
    v34 = std::string::length(v33);
    v35 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
    v36 = (google::protobuf::internal::WireFormatLite *)std::string::data(v35);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v36,
      (const char *)v34,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.device_info",
      v37);
    v38 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(6, v38, target);
  }
  v39 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
  if ( std::string::size(v39) )
  {
    v40 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
    v41 = std::string::length(v40);
    v42 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
    v43 = (google::protobuf::internal::WireFormatLite *)std::string::data(v42);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v43,
      (const char *)v41,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.system_info",
      v44);
    v45 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(7, v45, target);
  }
  if ( proto_log::PlayerLogBodyRecharge::order_id(this) )
  {
    v46 = proto_log::PlayerLogBodyRecharge::order_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, v46, target);
  }
  v47 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
  if ( std::string::size(v47) )
  {
    v48 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
    v49 = std::string::length(v48);
    v50 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
    v51 = (google::protobuf::internal::WireFormatLite *)std::string::data(v50);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v51,
      (const char *)v49,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.product_name",
      v52);
    v53 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(9, v53, target);
  }
  v54 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
  if ( std::string::size(v54) )
  {
    v55 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
    v56 = std::string::length(v55);
    v57 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
    v58 = (google::protobuf::internal::WireFormatLite *)std::string::data(v57);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v58,
      (const char *)v56,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.price_tier",
      v59);
    v60 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(10, v60, target);
  }
  v61 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
  if ( std::string::size(v61) )
  {
    v62 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
    v63 = std::string::length(v62);
    v64 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
    v65 = (google::protobuf::internal::WireFormatLite *)std::string::data(v64);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v65,
      (const char *)v63,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.pay_channel",
      v66);
    v67 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(11, v67, target);
  }
  v68 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
  if ( std::string::size(v68) )
  {
    v69 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
    v70 = std::string::length(v69);
    v71 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
    v72 = (google::protobuf::internal::WireFormatLite *)std::string::data(v71);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v72,
      (const char *)v70,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.currency_code",
      v73);
    v74 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(12, v74, target);
  }
  v75 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
  if ( std::string::size(v75) )
  {
    v76 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
    v77 = std::string::length(v76);
    v78 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
    v79 = (google::protobuf::internal::WireFormatLite *)std::string::data(v78);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v79,
      (const char *)v77,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyRecharge.format_price",
      v80);
    v81 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(13, v81, target);
  }
  if ( proto_log::PlayerLogBodyRecharge::pay_coin_add(this) )
  {
    v82 = proto_log::PlayerLogBodyRecharge::pay_coin_add(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(14, v82, target);
  }
  if ( proto_log::PlayerLogBodyRecharge::free_coin_add(this) )
  {
    v83 = proto_log::PlayerLogBodyRecharge::free_coin_add(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(15, v83, target);
  }
  if ( proto_log::PlayerLogBodyRecharge::vip_point_add(this) )
  {
    v84 = proto_log::PlayerLogBodyRecharge::vip_point_add(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(16, v84, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_45;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v86 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_45:
      v86 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v86->unknown_fields, target);
  }
  return target;
};

// Line 6217: range 0000000017447784-0000000017447C51
size_t __cdecl proto_log::PlayerLogBodyRecharge::ByteSizeLong(const proto_log::PlayerLogBodyRecharge *const this)
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
  const std::string *v13; // rax
  const std::string *v14; // rax
  const std::string *v15; // rax
  const std::string *v16; // rax
  const std::string *v17; // rax
  const std::string *v18; // rax
  const std::string *v19; // rax
  const std::string *v20; // rax
  const std::string *v21; // rax
  const std::string *v22; // rax
  const std::string *v23; // rax
  const std::string *v24; // rax
  google::protobuf::uint32 v25; // eax
  google::protobuf::uint32 v26; // eax
  google::protobuf::uint64 v27; // rax
  google::protobuf::uint64 v28; // rax
  google::protobuf::uint64 v29; // rax
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
  v3 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  v11 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v12) + 1;
  }
  v13 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
  if ( std::string::size(v13) )
  {
    v14 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v14) + 1;
  }
  v15 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
  if ( std::string::size(v15) )
  {
    v16 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v16) + 1;
  }
  v17 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v18) + 1;
  }
  v19 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
  if ( std::string::size(v19) )
  {
    v20 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v20) + 1;
  }
  v21 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
  if ( std::string::size(v21) )
  {
    v22 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v22) + 1;
  }
  v23 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
  if ( std::string::size(v23) )
  {
    v24 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v24) + 1;
  }
  if ( proto_log::PlayerLogBodyRecharge::platform(this) )
  {
    v25 = proto_log::PlayerLogBodyRecharge::platform(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v25) + 1;
  }
  if ( proto_log::PlayerLogBodyRecharge::order_id(this) )
  {
    v26 = proto_log::PlayerLogBodyRecharge::order_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v26) + 1;
  }
  if ( proto_log::PlayerLogBodyRecharge::pay_coin_add(this) )
  {
    v27 = proto_log::PlayerLogBodyRecharge::pay_coin_add(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt64Size(v27) + 1;
  }
  if ( proto_log::PlayerLogBodyRecharge::free_coin_add(this) )
  {
    v28 = proto_log::PlayerLogBodyRecharge::free_coin_add(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt64Size(v28) + 1;
  }
  if ( proto_log::PlayerLogBodyRecharge::vip_point_add(this) )
  {
    v29 = proto_log::PlayerLogBodyRecharge::vip_point_add(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt64Size(v29) + 2;
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

// Line 6345: range 0000000017447C52-0000000017447EDB
void __cdecl proto_log::PlayerLogBodyRecharge::MergeFrom(
        proto_log::PlayerLogBodyRecharge *const this,
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
  const proto_log::PlayerLogBodyRecharge *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyRecharge::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      6347);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyRecharge const>(from);
  if ( source )
    proto_log::PlayerLogBodyRecharge::MergeFrom(this, source);
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

// Line 6360: range 0000000017447EDC-000000001744886B
void __cdecl proto_log::PlayerLogBodyRecharge::MergeFrom(
        proto_log::PlayerLogBodyRecharge *const this,
        const proto_log::PlayerLogBodyRecharge *from)
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
  const std::string *v20; // rax
  const std::string *v21; // rcx
  const std::string *v22; // rax
  const std::string *v23; // rcx
  const std::string *v24; // rax
  const std::string *v25; // rcx
  const std::string *v26; // rax
  const std::string *v27; // rcx
  const std::string *v28; // rax
  const std::string *v29; // rcx
  const std::string *v30; // rax
  const std::string *v31; // rcx
  google::protobuf::uint32 v32; // edx
  google::protobuf::uint32 v33; // edx
  google::protobuf::uint64 v34; // rdx
  google::protobuf::uint64 v35; // rdx
  google::protobuf::uint64 v36; // rdx
  char v37; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v39[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyRecharge::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v37 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_common.pb.cc",
      6362);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v37 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v37 )
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
  v10 = proto_log::PlayerLogBodyRecharge::register_cps[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->register_cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->register_cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->register_cps_, v11, from->register_cps_);
  }
  v12 = proto_log::PlayerLogBodyRecharge::cps[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->cps_, v13, from->cps_);
  }
  v14 = proto_log::PlayerLogBodyRecharge::client_ip[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_ip_, v15, from->client_ip_);
  }
  v16 = proto_log::PlayerLogBodyRecharge::device_uuid[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_uuid_, v17, from->device_uuid_);
  }
  v18 = proto_log::PlayerLogBodyRecharge::device_info[abi:cxx11](from);
  if ( std::string::size(v18) )
  {
    v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_info_, v19, from->device_info_);
  }
  v20 = proto_log::PlayerLogBodyRecharge::system_info[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->system_info_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->system_info_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->system_info_, v21, from->system_info_);
  }
  v22 = proto_log::PlayerLogBodyRecharge::product_name[abi:cxx11](from);
  if ( std::string::size(v22) )
  {
    v23 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->product_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->product_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->product_name_, v23, from->product_name_);
  }
  v24 = proto_log::PlayerLogBodyRecharge::price_tier[abi:cxx11](from);
  if ( std::string::size(v24) )
  {
    v25 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->price_tier_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->price_tier_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->price_tier_, v25, from->price_tier_);
  }
  v26 = proto_log::PlayerLogBodyRecharge::pay_channel[abi:cxx11](from);
  if ( std::string::size(v26) )
  {
    v27 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->pay_channel_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->pay_channel_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->pay_channel_, v27, from->pay_channel_);
  }
  v28 = proto_log::PlayerLogBodyRecharge::currency_code[abi:cxx11](from);
  if ( std::string::size(v28) )
  {
    v29 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->currency_code_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->currency_code_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->currency_code_, v29, from->currency_code_);
  }
  v30 = proto_log::PlayerLogBodyRecharge::format_price[abi:cxx11](from);
  if ( std::string::size(v30) )
  {
    v31 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->format_price_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->format_price_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->format_price_, v31, from->format_price_);
  }
  if ( proto_log::PlayerLogBodyRecharge::platform(from) )
  {
    v32 = proto_log::PlayerLogBodyRecharge::platform(from);
    proto_log::PlayerLogBodyRecharge::set_platform(this, v32);
  }
  if ( proto_log::PlayerLogBodyRecharge::order_id(from) )
  {
    v33 = proto_log::PlayerLogBodyRecharge::order_id(from);
    proto_log::PlayerLogBodyRecharge::set_order_id(this, v33);
  }
  if ( proto_log::PlayerLogBodyRecharge::pay_coin_add(from) )
  {
    v34 = proto_log::PlayerLogBodyRecharge::pay_coin_add(from);
    proto_log::PlayerLogBodyRecharge::set_pay_coin_add(this, v34);
  }
  if ( proto_log::PlayerLogBodyRecharge::free_coin_add(from) )
  {
    v35 = proto_log::PlayerLogBodyRecharge::free_coin_add(from);
    proto_log::PlayerLogBodyRecharge::set_free_coin_add(this, v35);
  }
  if ( proto_log::PlayerLogBodyRecharge::vip_point_add(from) )
  {
    v36 = proto_log::PlayerLogBodyRecharge::vip_point_add(from);
    proto_log::PlayerLogBodyRecharge::set_vip_point_add(this, v36);
  }
  if ( v39 == (char *)v2 )
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

// Line 6428: range 000000001744886C-00000000174488A9
void __cdecl proto_log::PlayerLogBodyRecharge::CopyFrom(
        proto_log::PlayerLogBodyRecharge *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyRecharge::Clear(this);
    proto_log::PlayerLogBodyRecharge::MergeFrom(this, from);
  }
};

// Line 6435: range 00000000174488AA-00000000174488E7
void __cdecl proto_log::PlayerLogBodyRecharge::CopyFrom(
        proto_log::PlayerLogBodyRecharge *const this,
        const proto_log::PlayerLogBodyRecharge *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyRecharge::Clear(this);
    proto_log::PlayerLogBodyRecharge::MergeFrom(this, from);
  }
};

// Line 6442: range 00000000174488E8-00000000174488F6
bool __cdecl proto_log::PlayerLogBodyRecharge::IsInitialized(const proto_log::PlayerLogBodyRecharge *const this)
{
  return 1;
};

// Line 6446: range 00000000174488F8-0000000017448929
void __cdecl proto_log::PlayerLogBodyRecharge::Swap(
        proto_log::PlayerLogBodyRecharge *const this,
        proto_log::PlayerLogBodyRecharge *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyRecharge::InternalSwap(this, other);
};

// Line 6450: range 000000001744892A-0000000017448DEA
void __cdecl proto_log::PlayerLogBodyRecharge::InternalSwap(
        proto_log::PlayerLogBodyRecharge *const this,
        proto_log::PlayerLogBodyRecharge *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-F0h]

  std::swap<std::string *>(&this->register_cps_.ptr_, &other->register_cps_.ptr_);
  std::swap<std::string *>(&this->cps_.ptr_, &other->cps_.ptr_);
  std::swap<std::string *>(&this->client_ip_.ptr_, &other->client_ip_.ptr_);
  std::swap<std::string *>(&this->device_uuid_.ptr_, &other->device_uuid_.ptr_);
  std::swap<std::string *>(&this->device_info_.ptr_, &other->device_info_.ptr_);
  std::swap<std::string *>(&this->system_info_.ptr_, &other->system_info_.ptr_);
  std::swap<std::string *>(&this->product_name_.ptr_, &other->product_name_.ptr_);
  std::swap<std::string *>(&this->price_tier_.ptr_, &other->price_tier_.ptr_);
  std::swap<std::string *>(&this->pay_channel_.ptr_, &other->pay_channel_.ptr_);
  std::swap<std::string *>(&this->currency_code_.ptr_, &other->currency_code_.ptr_);
  std::swap<std::string *>(&this->format_price_.ptr_, &other->format_price_.ptr_);
  std::swap<unsigned int>(&this->platform_, &other->platform_);
  std::swap<unsigned int>(&this->order_id_, &other->order_id_);
  std::swap<unsigned long>(&this->pay_coin_add_, &other->pay_coin_add_);
  std::swap<unsigned long>(&this->free_coin_add_, &other->free_coin_add_);
  std::swap<unsigned long>(&this->vip_point_add_, &other->vip_point_add_);
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

// Line 6472: range 0000000017448DEC-0000000017448E0C
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyRecharge::GetMetadata(
        const proto_log::PlayerLogBodyRecharge *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[6];
};

// Line 7148: range 0000000017448E0E-0000000017448EF2
void __cdecl proto_log::PlayerLogBodyBuyGoods::PlayerLogBodyBuyGoods(proto_log::PlayerLogBodyBuyGoods *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyBuyGoods + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto_log::PlayerLogCurrencyCost>::RepeatedPtrField(&this->currency_cost_list_);
  if ( this != proto_log::PlayerLogBodyBuyGoods::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyBuyGoods::SharedCtor(this);
};

// Line 7156: range 0000000017448EF4-0000000017449181
void __cdecl proto_log::PlayerLogBodyBuyGoods::PlayerLogBodyBuyGoods(
        proto_log::PlayerLogBodyBuyGoods *const this,
        const proto_log::PlayerLogBodyBuyGoods *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rcx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyBuyGoods + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto_log::PlayerLogCurrencyCost>::RepeatedPtrField(
    &this->currency_cost_list_,
    &from->currency_cost_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->platform_, v4);
  v5 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->platform_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->platform_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->platform_, v6, from->platform_);
  }
  memcpy(&this->shop_id_, &from->shop_id_, 0x24uLL);
};

// Line 7172: range 0000000017449182-000000001744920E
void __cdecl proto_log::PlayerLogBodyBuyGoods::SharedCtor(proto_log::PlayerLogBodyBuyGoods *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->platform_, v1);
  memset(&this->shop_id_, 0, 0x24uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 7180: range 0000000017449210-0000000017449289
void __cdecl proto_log::PlayerLogBodyBuyGoods::~PlayerLogBodyBuyGoods(proto_log::PlayerLogBodyBuyGoods *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyBuyGoods + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyBuyGoods::SharedDtor(this);
  google::protobuf::RepeatedPtrField<proto_log::PlayerLogCurrencyCost>::~RepeatedPtrField(&this->currency_cost_list_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 7180: range 000000001744928A-00000000174492B4
void __cdecl proto_log::PlayerLogBodyBuyGoods::~PlayerLogBodyBuyGoods(proto_log::PlayerLogBodyBuyGoods *const this)
{
  proto_log::PlayerLogBodyBuyGoods::~PlayerLogBodyBuyGoods(this);
  operator delete(this, 0x58uLL);
};

// Line 7185: range 00000000174492B6-00000000174492E2
void __cdecl proto_log::PlayerLogBodyBuyGoods::SharedDtor(proto_log::PlayerLogBodyBuyGoods *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->platform_, v1);
};

// Line 7189: range 00000000174492E4-000000001744933A
void __cdecl proto_log::PlayerLogBodyBuyGoods::SetCachedSize(
        const proto_log::PlayerLogBodyBuyGoods *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 7194: range 000000001744933C-000000001744934D
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyBuyGoods::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[7].descriptor;
};

// Line 7199: range 000000001744934E-000000001744935D
const proto_log::PlayerLogBodyBuyGoods *__cdecl proto_log::PlayerLogBodyBuyGoods::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyBuyGoods::internal_default_instance();
};

// Line 7204: range 000000001744935E-00000000174493D2
proto_log::PlayerLogBodyBuyGoods *__cdecl proto_log::PlayerLogBodyBuyGoods::New(
        const proto_log::PlayerLogBodyBuyGoods *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyBuyGoods *v2; // rbx

  v2 = (proto_log::PlayerLogBodyBuyGoods *)operator new(0x58uLL);
  proto_log::PlayerLogBodyBuyGoods::PlayerLogBodyBuyGoods(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyBuyGoods>(arena, v2);
  return v2;
};

// Line 7212: range 00000000174493D4-000000001744948F
void __cdecl proto_log::PlayerLogBodyBuyGoods::Clear(proto_log::PlayerLogBodyBuyGoods *const this)
{
  const std::string *v1; // rax

  google::protobuf::RepeatedPtrField<proto_log::PlayerLogCurrencyCost>::Clear(&this->currency_cost_list_);
  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->platform_, v1);
  memset(&this->shop_id_, 0, 0x24uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 7227: range 0000000017449490-000000001744A013
bool __cdecl proto_log::PlayerLogBodyBuyGoods::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyBuyGoods *const this,
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
  proto_log::PlayerLogCurrencyCost *v19; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v20; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v25[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:7232";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyBuyGoods::MergePartialFromCodedStream;
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
            v13 = proto_log::PlayerLogBodyBuyGoods::mutable_platform[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyBuyGoods.platform",
                                     v18) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->shop_id_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->goods_id_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->goods_num_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                    input,
                    &this->coin_1_cost_) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 48 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                    input,
                    &this->coin_2_cost_) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 56 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                    input,
                    &this->coin_3_cost_) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 66 )
              goto handle_unusual;
            v19 = proto_log::PlayerLogBodyBuyGoods::add_currency_cost_list(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<proto_log::PlayerLogCurrencyCost>(
                    input,
                    v19) )
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
      goto LABEL_72;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v20 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v20 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v20->unknown_fields) );
failure:
  result = 0;
LABEL_72:
  if ( v25 == (char *)v2 )
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

// Line 7369: range 000000001744A014-000000001744A33F
void __cdecl proto_log::PlayerLogBodyBuyGoods::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyBuyGoods *const this,
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
  google::protobuf::uint32 v11; // ecx
  google::protobuf::uint64 v12; // rcx
  google::protobuf::uint64 v13; // rcx
  google::protobuf::uint64 v14; // rcx
  const proto_log::PlayerLogCurrencyCost *v15; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v17; // rax
  unsigned int i; // [rsp+1Ch] [rbp-44h]
  unsigned int n; // [rsp+24h] [rbp-3Ch]

  v2 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
  if ( std::string::size(v2) )
  {
    v3 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
    v4 = std::string::length(v3);
    v5 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
    v6 = (google::protobuf::internal::WireFormatLite *)std::string::data(v5);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v6,
      (const char *)v4,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyBuyGoods.platform",
      v7);
    v8 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, v8, output);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::shop_id(this) )
  {
    v9 = proto_log::PlayerLogBodyBuyGoods::shop_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v9, output);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::goods_id(this) )
  {
    v10 = proto_log::PlayerLogBodyBuyGoods::goods_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v10, output);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::goods_num(this) )
  {
    v11 = proto_log::PlayerLogBodyBuyGoods::goods_num(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v11, output);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_1_cost(this) )
  {
    v12 = proto_log::PlayerLogBodyBuyGoods::coin_1_cost(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(5, v12, output);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_2_cost(this) )
  {
    v13 = proto_log::PlayerLogBodyBuyGoods::coin_2_cost(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(6, v13, output);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_3_cost(this) )
  {
    v14 = proto_log::PlayerLogBodyBuyGoods::coin_3_cost(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(7, v14, output);
  }
  i = 0;
  n = proto_log::PlayerLogBodyBuyGoods::currency_cost_list_size(this);
  while ( i < n )
  {
    v15 = proto_log::PlayerLogBodyBuyGoods::currency_cost_list(this, i);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(8, v15, output);
    ++i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_30;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v17 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_30:
      v17 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v17->unknown_fields, output);
  }
};

// Line 7429: range 000000001744A340-000000001744A69A
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyBuyGoods::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyBuyGoods *const this,
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
  google::protobuf::uint32 v12; // ecx
  google::protobuf::uint64 v13; // rcx
  google::protobuf::uint64 v14; // rcx
  google::protobuf::uint64 v15; // rcx
  const proto_log::PlayerLogCurrencyCost *v16; // rsi
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v18; // rax
  unsigned int i; // [rsp+2Ch] [rbp-44h]
  unsigned int n; // [rsp+34h] [rbp-3Ch]

  v3 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyBuyGoods.platform",
      v8);
    v9 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(1, v9, target);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::shop_id(this) )
  {
    v10 = proto_log::PlayerLogBodyBuyGoods::shop_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v10, target);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::goods_id(this) )
  {
    v11 = proto_log::PlayerLogBodyBuyGoods::goods_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v11, target);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::goods_num(this) )
  {
    v12 = proto_log::PlayerLogBodyBuyGoods::goods_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v12, target);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_1_cost(this) )
  {
    v13 = proto_log::PlayerLogBodyBuyGoods::coin_1_cost(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, v13, target);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_2_cost(this) )
  {
    v14 = proto_log::PlayerLogBodyBuyGoods::coin_2_cost(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, v14, target);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_3_cost(this) )
  {
    v15 = proto_log::PlayerLogBodyBuyGoods::coin_3_cost(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, v15, target);
  }
  i = 0;
  n = proto_log::PlayerLogBodyBuyGoods::currency_cost_list_size(this);
  while ( i < n )
  {
    v16 = proto_log::PlayerLogBodyBuyGoods::currency_cost_list(this, i);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<proto_log::PlayerLogCurrencyCost>(
               8,
               v16,
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
      goto LABEL_30;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v18 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_30:
      v18 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v18->unknown_fields, target);
  }
  return target;
};

// Line 7492: range 000000001744A69C-000000001744A9A0
size_t __cdecl proto_log::PlayerLogBodyBuyGoods::ByteSizeLong(const proto_log::PlayerLogBodyBuyGoods *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const proto_log::PlayerLogCurrencyCost *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  google::protobuf::uint32 v6; // eax
  google::protobuf::uint32 v7; // eax
  google::protobuf::uint64 v8; // rax
  google::protobuf::uint64 v9; // rax
  google::protobuf::uint64 v10; // rax
  google::protobuf::uint32 v11; // eax
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
  count = proto_log::PlayerLogBodyBuyGoods::currency_cost_list_size(this);
  total_sizea = count + total_size;
  for ( i = 0; i < count; ++i )
  {
    v3 = proto_log::PlayerLogBodyBuyGoods::currency_cost_list(this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<proto_log::PlayerLogCurrencyCost>(v3);
  }
  v4 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
  if ( std::string::size(v4) )
  {
    v5 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](this);
    total_sizea += google::protobuf::internal::WireFormatLite::StringSize(v5) + 1;
  }
  if ( proto_log::PlayerLogBodyBuyGoods::shop_id(this) )
  {
    v6 = proto_log::PlayerLogBodyBuyGoods::shop_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v6) + 1;
  }
  if ( proto_log::PlayerLogBodyBuyGoods::goods_id(this) )
  {
    v7 = proto_log::PlayerLogBodyBuyGoods::goods_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v7) + 1;
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_1_cost(this) )
  {
    v8 = proto_log::PlayerLogBodyBuyGoods::coin_1_cost(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt64Size(v8) + 1;
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_2_cost(this) )
  {
    v9 = proto_log::PlayerLogBodyBuyGoods::coin_2_cost(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt64Size(v9) + 1;
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_3_cost(this) )
  {
    v10 = proto_log::PlayerLogBodyBuyGoods::coin_3_cost(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt64Size(v10) + 1;
  }
  if ( proto_log::PlayerLogBodyBuyGoods::goods_num(this) )
  {
    v11 = proto_log::PlayerLogBodyBuyGoods::goods_num(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v11) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizea);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizea;
};

// Line 7568: range 000000001744A9A2-000000001744AC2B
void __cdecl proto_log::PlayerLogBodyBuyGoods::MergeFrom(
        proto_log::PlayerLogBodyBuyGoods *const this,
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
  const proto_log::PlayerLogBodyBuyGoods *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyBuyGoods::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      7570);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyBuyGoods const>(from);
  if ( source )
    proto_log::PlayerLogBodyBuyGoods::MergeFrom(this, source);
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

// Line 7583: range 000000001744AC2C-000000001744B184
void __cdecl proto_log::PlayerLogBodyBuyGoods::MergeFrom(
        proto_log::PlayerLogBodyBuyGoods *const this,
        const proto_log::PlayerLogBodyBuyGoods *from)
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
  google::protobuf::uint32 v12; // edx
  google::protobuf::uint32 v13; // edx
  google::protobuf::uint64 v14; // rdx
  google::protobuf::uint64 v15; // rdx
  google::protobuf::uint64 v16; // rdx
  google::protobuf::uint32 v17; // edx
  char v18; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v20[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyBuyGoods::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v18 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_common.pb.cc",
      7585);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v18 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v18 )
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
  google::protobuf::RepeatedPtrField<proto_log::PlayerLogCurrencyCost>::MergeFrom(
    &this->currency_cost_list_,
    &from->currency_cost_list_);
  v10 = proto_log::PlayerLogBodyBuyGoods::platform[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->platform_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->platform_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->platform_, v11, from->platform_);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::shop_id(from) )
  {
    v12 = proto_log::PlayerLogBodyBuyGoods::shop_id(from);
    proto_log::PlayerLogBodyBuyGoods::set_shop_id(this, v12);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::goods_id(from) )
  {
    v13 = proto_log::PlayerLogBodyBuyGoods::goods_id(from);
    proto_log::PlayerLogBodyBuyGoods::set_goods_id(this, v13);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_1_cost(from) )
  {
    v14 = proto_log::PlayerLogBodyBuyGoods::coin_1_cost(from);
    proto_log::PlayerLogBodyBuyGoods::set_coin_1_cost(this, v14);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_2_cost(from) )
  {
    v15 = proto_log::PlayerLogBodyBuyGoods::coin_2_cost(from);
    proto_log::PlayerLogBodyBuyGoods::set_coin_2_cost(this, v15);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::coin_3_cost(from) )
  {
    v16 = proto_log::PlayerLogBodyBuyGoods::coin_3_cost(from);
    proto_log::PlayerLogBodyBuyGoods::set_coin_3_cost(this, v16);
  }
  if ( proto_log::PlayerLogBodyBuyGoods::goods_num(from) )
  {
    v17 = proto_log::PlayerLogBodyBuyGoods::goods_num(from);
    proto_log::PlayerLogBodyBuyGoods::set_goods_num(this, v17);
  }
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
};

// Line 7615: range 000000001744B186-000000001744B1C3
void __cdecl proto_log::PlayerLogBodyBuyGoods::CopyFrom(
        proto_log::PlayerLogBodyBuyGoods *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyBuyGoods::Clear(this);
    proto_log::PlayerLogBodyBuyGoods::MergeFrom(this, from);
  }
};

// Line 7622: range 000000001744B1C4-000000001744B201
void __cdecl proto_log::PlayerLogBodyBuyGoods::CopyFrom(
        proto_log::PlayerLogBodyBuyGoods *const this,
        const proto_log::PlayerLogBodyBuyGoods *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyBuyGoods::Clear(this);
    proto_log::PlayerLogBodyBuyGoods::MergeFrom(this, from);
  }
};

// Line 7629: range 000000001744B202-000000001744B210
bool __cdecl proto_log::PlayerLogBodyBuyGoods::IsInitialized(const proto_log::PlayerLogBodyBuyGoods *const this)
{
  return 1;
};

// Line 7633: range 000000001744B212-000000001744B243
void __cdecl proto_log::PlayerLogBodyBuyGoods::Swap(
        proto_log::PlayerLogBodyBuyGoods *const this,
        proto_log::PlayerLogBodyBuyGoods *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyBuyGoods::InternalSwap(this, other);
};

// Line 7637: range 000000001744B244-000000001744B496
void __cdecl proto_log::PlayerLogBodyBuyGoods::InternalSwap(
        proto_log::PlayerLogBodyBuyGoods *const this,
        proto_log::PlayerLogBodyBuyGoods *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-50h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(
    &this->currency_cost_list_,
    &other->currency_cost_list_);
  std::swap<std::string *>(&this->platform_.ptr_, &other->platform_.ptr_);
  std::swap<unsigned int>(&this->shop_id_, &other->shop_id_);
  std::swap<unsigned int>(&this->goods_id_, &other->goods_id_);
  std::swap<unsigned long>(&this->coin_1_cost_, &other->coin_1_cost_);
  std::swap<unsigned long>(&this->coin_2_cost_, &other->coin_2_cost_);
  std::swap<unsigned long>(&this->coin_3_cost_, &other->coin_3_cost_);
  std::swap<unsigned int>(&this->goods_num_, &other->goods_num_);
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

// Line 7651: range 000000001744B498-000000001744B4B8
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyBuyGoods::GetMetadata(
        const proto_log::PlayerLogBodyBuyGoods *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[7];
};

// Line 7837: range 000000001744B4BA-000000001744B579
void __cdecl proto_log::PlayerLogCurrencyCost::PlayerLogCurrencyCost(proto_log::PlayerLogCurrencyCost *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogCurrencyCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogCurrencyCost::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogCurrencyCost::SharedCtor(this);
};

// Line 7845: range 000000001744B57A-000000001744B756
void __cdecl proto_log::PlayerLogCurrencyCost::PlayerLogCurrencyCost(
        proto_log::PlayerLogCurrencyCost *const this,
        const proto_log::PlayerLogCurrencyCost *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogCurrencyCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
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
  memcpy(&this->need_cost_num_, &from->need_cost_num_, 0x1CuLL);
};

// Line 7856: range 000000001744B758-000000001744B7C6
void __cdecl proto_log::PlayerLogCurrencyCost::SharedCtor(proto_log::PlayerLogCurrencyCost *const this)
{
  memset(&this->need_cost_num_, 0, 0x1CuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 7863: range 000000001744B7C8-000000001744B831
void __cdecl proto_log::PlayerLogCurrencyCost::~PlayerLogCurrencyCost(proto_log::PlayerLogCurrencyCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogCurrencyCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogCurrencyCost::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 7863: range 000000001744B832-000000001744B85C
void __cdecl proto_log::PlayerLogCurrencyCost::~PlayerLogCurrencyCost(proto_log::PlayerLogCurrencyCost *const this)
{
  proto_log::PlayerLogCurrencyCost::~PlayerLogCurrencyCost(this);
  operator delete(this, 0x30uLL);
};

// Line 7868: range 000000001744B85E-000000001744B868
void __cdecl proto_log::PlayerLogCurrencyCost::SharedDtor(proto_log::PlayerLogCurrencyCost *const this)
{
  ;
};

// Line 7871: range 000000001744B86A-000000001744B8C0
void __cdecl proto_log::PlayerLogCurrencyCost::SetCachedSize(
        const proto_log::PlayerLogCurrencyCost *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 7876: range 000000001744B8C2-000000001744B8D3
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogCurrencyCost::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[8].descriptor;
};

// Line 7881: range 000000001744B8D4-000000001744B8E3
const proto_log::PlayerLogCurrencyCost *__cdecl proto_log::PlayerLogCurrencyCost::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogCurrencyCost::internal_default_instance();
};

// Line 7886: range 000000001744B8E4-000000001744B958
proto_log::PlayerLogCurrencyCost *__cdecl proto_log::PlayerLogCurrencyCost::New(
        const proto_log::PlayerLogCurrencyCost *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogCurrencyCost *v2; // rbx

  v2 = (proto_log::PlayerLogCurrencyCost *)operator new(0x30uLL);
  proto_log::PlayerLogCurrencyCost::PlayerLogCurrencyCost(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogCurrencyCost>(arena, v2);
  return v2;
};

// Line 7894: range 000000001744B95A-000000001744B9E7
void __cdecl proto_log::PlayerLogCurrencyCost::Clear(proto_log::PlayerLogCurrencyCost *const this)
{
  memset(&this->need_cost_num_, 0, 0x1CuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 7907: range 000000001744B9E8-000000001744C3D9
bool __cdecl proto_log::PlayerLogCurrencyCost::MergePartialFromCodedStream(
        proto_log::PlayerLogCurrencyCost *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:7912";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogCurrencyCost::MergePartialFromCodedStream;
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
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                input,
                &this->left_num_) )
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
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                  input,
                  &this->real_cost_num_) )
            goto failure;
        }
        else if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 8 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->currency_id_) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                  input,
                  &this->need_cost_num_) )
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

// Line 7993: range 000000001744C3DA-000000001744C5C6
void __cdecl proto_log::PlayerLogCurrencyCost::SerializeWithCachedSizes(
        const proto_log::PlayerLogCurrencyCost *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint64 v3; // rcx
  google::protobuf::uint64 v4; // rcx
  google::protobuf::uint64 v5; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax

  if ( proto_log::PlayerLogCurrencyCost::currency_id(this) )
  {
    v2 = proto_log::PlayerLogCurrencyCost::currency_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogCurrencyCost::need_cost_num(this) )
  {
    v3 = proto_log::PlayerLogCurrencyCost::need_cost_num(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(2, v3, output);
  }
  if ( proto_log::PlayerLogCurrencyCost::real_cost_num(this) )
  {
    v4 = proto_log::PlayerLogCurrencyCost::real_cost_num(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(3, v4, output);
  }
  if ( proto_log::PlayerLogCurrencyCost::left_num(this) )
  {
    v5 = proto_log::PlayerLogCurrencyCost::left_num(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(4, v5, output);
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

// Line 8026: range 000000001744C5C8-000000001744C7D0
google::protobuf::uint8 *__cdecl proto_log::PlayerLogCurrencyCost::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogCurrencyCost *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint64 v4; // rcx
  google::protobuf::uint64 v5; // rcx
  google::protobuf::uint64 v6; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v8; // rax

  if ( proto_log::PlayerLogCurrencyCost::currency_id(this) )
  {
    v3 = proto_log::PlayerLogCurrencyCost::currency_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogCurrencyCost::need_cost_num(this) )
  {
    v4 = proto_log::PlayerLogCurrencyCost::need_cost_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogCurrencyCost::real_cost_num(this) )
  {
    v5 = proto_log::PlayerLogCurrencyCost::real_cost_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, v5, target);
  }
  if ( proto_log::PlayerLogCurrencyCost::left_num(this) )
  {
    v6 = proto_log::PlayerLogCurrencyCost::left_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, v6, target);
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

// Line 8060: range 000000001744C7D2-000000001744C9F4
size_t __cdecl proto_log::PlayerLogCurrencyCost::ByteSizeLong(const proto_log::PlayerLogCurrencyCost *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint64 v3; // rax
  google::protobuf::uint64 v4; // rax
  google::protobuf::uint64 v5; // rax
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
  if ( proto_log::PlayerLogCurrencyCost::need_cost_num(this) )
  {
    v3 = proto_log::PlayerLogCurrencyCost::need_cost_num(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt64Size(v3) + 1;
  }
  if ( proto_log::PlayerLogCurrencyCost::real_cost_num(this) )
  {
    v4 = proto_log::PlayerLogCurrencyCost::real_cost_num(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt64Size(v4) + 1;
  }
  if ( proto_log::PlayerLogCurrencyCost::left_num(this) )
  {
    v5 = proto_log::PlayerLogCurrencyCost::left_num(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt64Size(v5) + 1;
  }
  if ( proto_log::PlayerLogCurrencyCost::currency_id(this) )
  {
    v6 = proto_log::PlayerLogCurrencyCost::currency_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v6) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 8104: range 000000001744C9F6-000000001744CC7F
void __cdecl proto_log::PlayerLogCurrencyCost::MergeFrom(
        proto_log::PlayerLogCurrencyCost *const this,
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
  const proto_log::PlayerLogCurrencyCost *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogCurrencyCost::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      8106);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogCurrencyCost const>(from);
  if ( source )
    proto_log::PlayerLogCurrencyCost::MergeFrom(this, source);
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

// Line 8119: range 000000001744CC80-000000001744D0CE
void __cdecl proto_log::PlayerLogCurrencyCost::MergeFrom(
        proto_log::PlayerLogCurrencyCost *const this,
        const proto_log::PlayerLogCurrencyCost *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::uint64 v10; // rdx
  google::protobuf::uint64 v11; // rdx
  google::protobuf::uint64 v12; // rdx
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogCurrencyCost::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      8121);
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
  if ( proto_log::PlayerLogCurrencyCost::need_cost_num(from) )
  {
    v10 = proto_log::PlayerLogCurrencyCost::need_cost_num(from);
    proto_log::PlayerLogCurrencyCost::set_need_cost_num(this, v10);
  }
  if ( proto_log::PlayerLogCurrencyCost::real_cost_num(from) )
  {
    v11 = proto_log::PlayerLogCurrencyCost::real_cost_num(from);
    proto_log::PlayerLogCurrencyCost::set_real_cost_num(this, v11);
  }
  if ( proto_log::PlayerLogCurrencyCost::left_num(from) )
  {
    v12 = proto_log::PlayerLogCurrencyCost::left_num(from);
    proto_log::PlayerLogCurrencyCost::set_left_num(this, v12);
  }
  if ( proto_log::PlayerLogCurrencyCost::currency_id(from) )
  {
    v13 = proto_log::PlayerLogCurrencyCost::currency_id(from);
    proto_log::PlayerLogCurrencyCost::set_currency_id(this, v13);
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

// Line 8140: range 000000001744D0D0-000000001744D10D
void __cdecl proto_log::PlayerLogCurrencyCost::CopyFrom(
        proto_log::PlayerLogCurrencyCost *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogCurrencyCost::Clear(this);
    proto_log::PlayerLogCurrencyCost::MergeFrom(this, from);
  }
};

// Line 8147: range 000000001744D10E-000000001744D14B
void __cdecl proto_log::PlayerLogCurrencyCost::CopyFrom(
        proto_log::PlayerLogCurrencyCost *const this,
        const proto_log::PlayerLogCurrencyCost *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogCurrencyCost::Clear(this);
    proto_log::PlayerLogCurrencyCost::MergeFrom(this, from);
  }
};

// Line 8154: range 000000001744D14C-000000001744D15A
bool __cdecl proto_log::PlayerLogCurrencyCost::IsInitialized(const proto_log::PlayerLogCurrencyCost *const this)
{
  return 1;
};

// Line 8158: range 000000001744D15C-000000001744D18D
void __cdecl proto_log::PlayerLogCurrencyCost::Swap(
        proto_log::PlayerLogCurrencyCost *const this,
        proto_log::PlayerLogCurrencyCost *other)
{
  if ( other != this )
    proto_log::PlayerLogCurrencyCost::InternalSwap(this, other);
};

// Line 8162: range 000000001744D18E-000000001744D363
void __cdecl proto_log::PlayerLogCurrencyCost::InternalSwap(
        proto_log::PlayerLogCurrencyCost *const this,
        proto_log::PlayerLogCurrencyCost *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned long>(&this->need_cost_num_, &other->need_cost_num_);
  std::swap<unsigned long>(&this->real_cost_num_, &other->real_cost_num_);
  std::swap<unsigned long>(&this->left_num_, &other->left_num_);
  std::swap<unsigned int>(&this->currency_id_, &other->currency_id_);
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

// Line 8172: range 000000001744D364-000000001744D384
google::protobuf::Metadata __cdecl proto_log::PlayerLogCurrencyCost::GetMetadata(
        const proto_log::PlayerLogCurrencyCost *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[8];
};

// Line 8255: range 000000001744D386-000000001744D445
void __cdecl proto_log::PlayerLogBodyAddCoin::PlayerLogBodyAddCoin(proto_log::PlayerLogBodyAddCoin *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddCoin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyAddCoin::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyAddCoin::SharedCtor(this);
};

// Line 8263: range 000000001744D446-000000001744D7A5
void __cdecl proto_log::PlayerLogBodyAddCoin::PlayerLogBodyAddCoin(
        proto_log::PlayerLogBodyAddCoin *const this,
        const proto_log::PlayerLogBodyAddCoin *from)
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
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddCoin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->platform_, v4);
  v5 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->platform_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->platform_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->platform_, v6, from->platform_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->register_cps_, v7);
  v8 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->register_cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->register_cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->register_cps_, v9, from->register_cps_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->cps_, v10);
  v11 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->cps_, v12, from->cps_);
  }
  memcpy(&this->coin_id_, &from->coin_id_, 0x3CuLL);
};

// Line 8286: range 000000001744D7A6-000000001744D862
void __cdecl proto_log::PlayerLogBodyAddCoin::SharedCtor(proto_log::PlayerLogBodyAddCoin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->platform_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->register_cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->cps_, v3);
  memset(&this->coin_id_, 0, 0x3CuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 8296: range 000000001744D864-000000001744D8CD
void __cdecl proto_log::PlayerLogBodyAddCoin::~PlayerLogBodyAddCoin(proto_log::PlayerLogBodyAddCoin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddCoin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyAddCoin::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 8296: range 000000001744D8CE-000000001744D8F8
void __cdecl proto_log::PlayerLogBodyAddCoin::~PlayerLogBodyAddCoin(proto_log::PlayerLogBodyAddCoin *const this)
{
  proto_log::PlayerLogBodyAddCoin::~PlayerLogBodyAddCoin(this);
  operator delete(this, 0x68uLL);
};

// Line 8301: range 000000001744D8FA-000000001744D956
void __cdecl proto_log::PlayerLogBodyAddCoin::SharedDtor(proto_log::PlayerLogBodyAddCoin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->platform_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->register_cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->cps_, v3);
};

// Line 8307: range 000000001744D958-000000001744D9AE
void __cdecl proto_log::PlayerLogBodyAddCoin::SetCachedSize(
        const proto_log::PlayerLogBodyAddCoin *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 8312: range 000000001744D9B0-000000001744D9C1
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyAddCoin::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[9].descriptor;
};

// Line 8317: range 000000001744D9C2-000000001744D9D1
const proto_log::PlayerLogBodyAddCoin *__cdecl proto_log::PlayerLogBodyAddCoin::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyAddCoin::internal_default_instance();
};

// Line 8322: range 000000001744D9D2-000000001744DA46
proto_log::PlayerLogBodyAddCoin *__cdecl proto_log::PlayerLogBodyAddCoin::New(
        const proto_log::PlayerLogBodyAddCoin *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyAddCoin *v2; // rbx

  v2 = (proto_log::PlayerLogBodyAddCoin *)operator new(0x68uLL);
  proto_log::PlayerLogBodyAddCoin::PlayerLogBodyAddCoin(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyAddCoin>(arena, v2);
  return v2;
};

// Line 8330: range 000000001744DA48-000000001744DB23
void __cdecl proto_log::PlayerLogBodyAddCoin::Clear(proto_log::PlayerLogBodyAddCoin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->platform_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->register_cps_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->cps_, v3);
  memset(&this->coin_id_, 0, 0x3CuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 8346: range 000000001744DB24-000000001744E88E
bool __cdecl proto_log::PlayerLogBodyAddCoin::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyAddCoin *const this,
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
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v31; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v36[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:8351";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddCoin::MergePartialFromCodedStream;
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
            v13 = proto_log::PlayerLogBodyAddCoin::mutable_platform[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyAddCoin.platform",
                                     v18) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 18 )
              goto handle_unusual;
            v19 = proto_log::PlayerLogBodyAddCoin::mutable_register_cps[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyAddCoin.register_cps",
                                     v24) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 26 )
              goto handle_unusual;
            v25 = proto_log::PlayerLogBodyAddCoin::mutable_cps[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyAddCoin.cps",
                                     v30) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->coin_id_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->coin_type_) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 48 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->add_num_) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 56 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->pay_add_) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->free_add_) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 72 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->left_num_) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 80 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->pay_left_) )
              goto failure;
            continue;
          case 11:
            if ( (_BYTE)tag != 88 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->free_left_) )
              goto failure;
            continue;
          case 12:
            if ( (_BYTE)tag != 96 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->reason_) )
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
      goto LABEL_90;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v31 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v31 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v31->unknown_fields) );
failure:
  result = 0;
LABEL_90:
  if ( v36 == (char *)v2 )
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

// Line 8550: range 000000001744E890-000000001744ED1C
void __cdecl proto_log::PlayerLogBodyAddCoin::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyAddCoin *const this,
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
  const std::string *v16; // rax
  const std::string *v17; // rax
  unsigned int v18; // ebx
  const std::string *v19; // rax
  google::protobuf::internal::WireFormatLite *v20; // rax
  const char *v21; // r8
  const std::string *v22; // rcx
  google::protobuf::uint32 v23; // ecx
  google::protobuf::uint32 v24; // ecx
  google::protobuf::int64 v25; // rcx
  google::protobuf::int64 v26; // rcx
  google::protobuf::int64 v27; // rcx
  google::protobuf::int64 v28; // rcx
  google::protobuf::int64 v29; // rcx
  google::protobuf::int64 v30; // rcx
  google::protobuf::uint32 v31; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v33; // rax

  v2 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
  if ( std::string::size(v2) )
  {
    v3 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
    v4 = std::string::length(v3);
    v5 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
    v6 = (google::protobuf::internal::WireFormatLite *)std::string::data(v5);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v6,
      (const char *)v4,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyAddCoin.platform",
      v7);
    v8 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, v8, output);
  }
  v9 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
    v11 = std::string::length(v10);
    v12 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
    v13 = (google::protobuf::internal::WireFormatLite *)std::string::data(v12);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v13,
      (const char *)v11,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyAddCoin.register_cps",
      v14);
    v15 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v15, output);
  }
  v16 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
  if ( std::string::size(v16) )
  {
    v17 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
    v18 = std::string::length(v17);
    v19 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
    v20 = (google::protobuf::internal::WireFormatLite *)std::string::data(v19);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v20,
      (const char *)v18,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyAddCoin.cps",
      v21);
    v22 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v22, output);
  }
  if ( proto_log::PlayerLogBodyAddCoin::coin_id(this) )
  {
    v23 = proto_log::PlayerLogBodyAddCoin::coin_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v23, output);
  }
  if ( proto_log::PlayerLogBodyAddCoin::coin_type(this) )
  {
    v24 = proto_log::PlayerLogBodyAddCoin::coin_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(5, v24, output);
  }
  if ( proto_log::PlayerLogBodyAddCoin::add_num(this) )
  {
    v25 = proto_log::PlayerLogBodyAddCoin::add_num(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(6, v25, output);
  }
  if ( proto_log::PlayerLogBodyAddCoin::pay_add(this) )
  {
    v26 = proto_log::PlayerLogBodyAddCoin::pay_add(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(7, v26, output);
  }
  if ( proto_log::PlayerLogBodyAddCoin::free_add(this) )
  {
    v27 = proto_log::PlayerLogBodyAddCoin::free_add(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(8, v27, output);
  }
  if ( proto_log::PlayerLogBodyAddCoin::left_num(this) )
  {
    v28 = proto_log::PlayerLogBodyAddCoin::left_num(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(9, v28, output);
  }
  if ( proto_log::PlayerLogBodyAddCoin::pay_left(this) )
  {
    v29 = proto_log::PlayerLogBodyAddCoin::pay_left(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(10, v29, output);
  }
  if ( proto_log::PlayerLogBodyAddCoin::free_left(this) )
  {
    v30 = proto_log::PlayerLogBodyAddCoin::free_left(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(11, v30, output);
  }
  if ( proto_log::PlayerLogBodyAddCoin::reason(this) )
  {
    v31 = proto_log::PlayerLogBodyAddCoin::reason(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(12, v31, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_37;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v33 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_37:
      v33 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v33->unknown_fields, output);
  }
};

// Line 8638: range 000000001744ED1E-000000001744F1E6
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyAddCoin::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyAddCoin *const this,
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
  const std::string *v17; // rax
  const std::string *v18; // rax
  unsigned int v19; // ebx
  const std::string *v20; // rax
  google::protobuf::internal::WireFormatLite *v21; // rax
  const char *v22; // r8
  const std::string *v23; // rcx
  google::protobuf::uint32 v24; // ecx
  google::protobuf::uint32 v25; // ecx
  google::protobuf::int64 v26; // rcx
  google::protobuf::int64 v27; // rcx
  google::protobuf::int64 v28; // rcx
  google::protobuf::int64 v29; // rcx
  google::protobuf::int64 v30; // rcx
  google::protobuf::int64 v31; // rcx
  google::protobuf::uint32 v32; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v34; // rax

  v3 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyAddCoin.platform",
      v8);
    v9 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(1, v9, target);
  }
  v10 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyAddCoin.register_cps",
      v15);
    v16 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v16, target);
  }
  v17 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
    v19 = std::string::length(v18);
    v20 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
    v21 = (google::protobuf::internal::WireFormatLite *)std::string::data(v20);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v21,
      (const char *)v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyAddCoin.cps",
      v22);
    v23 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v23, target);
  }
  if ( proto_log::PlayerLogBodyAddCoin::coin_id(this) )
  {
    v24 = proto_log::PlayerLogBodyAddCoin::coin_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v24, target);
  }
  if ( proto_log::PlayerLogBodyAddCoin::coin_type(this) )
  {
    v25 = proto_log::PlayerLogBodyAddCoin::coin_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, v25, target);
  }
  if ( proto_log::PlayerLogBodyAddCoin::add_num(this) )
  {
    v26 = proto_log::PlayerLogBodyAddCoin::add_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, v26, target);
  }
  if ( proto_log::PlayerLogBodyAddCoin::pay_add(this) )
  {
    v27 = proto_log::PlayerLogBodyAddCoin::pay_add(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(7, v27, target);
  }
  if ( proto_log::PlayerLogBodyAddCoin::free_add(this) )
  {
    v28 = proto_log::PlayerLogBodyAddCoin::free_add(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(8, v28, target);
  }
  if ( proto_log::PlayerLogBodyAddCoin::left_num(this) )
  {
    v29 = proto_log::PlayerLogBodyAddCoin::left_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(9, v29, target);
  }
  if ( proto_log::PlayerLogBodyAddCoin::pay_left(this) )
  {
    v30 = proto_log::PlayerLogBodyAddCoin::pay_left(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(10, v30, target);
  }
  if ( proto_log::PlayerLogBodyAddCoin::free_left(this) )
  {
    v31 = proto_log::PlayerLogBodyAddCoin::free_left(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(11, v31, target);
  }
  if ( proto_log::PlayerLogBodyAddCoin::reason(this) )
  {
    v32 = proto_log::PlayerLogBodyAddCoin::reason(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, v32, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_37;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v34 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_37:
      v34 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v34->unknown_fields, target);
  }
  return target;
};

// Line 8730: range 000000001744F1E8-000000001744F5AE
size_t __cdecl proto_log::PlayerLogBodyAddCoin::ByteSizeLong(const proto_log::PlayerLogBodyAddCoin *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  google::protobuf::uint32 v9; // eax
  google::protobuf::uint32 v10; // eax
  google::protobuf::int64 v11; // rax
  google::protobuf::int64 v12; // rax
  google::protobuf::int64 v13; // rax
  google::protobuf::int64 v14; // rax
  google::protobuf::int64 v15; // rax
  google::protobuf::int64 v16; // rax
  google::protobuf::uint32 v17; // eax
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
  v3 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  if ( proto_log::PlayerLogBodyAddCoin::coin_id(this) )
  {
    v9 = proto_log::PlayerLogBodyAddCoin::coin_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v9) + 1;
  }
  if ( proto_log::PlayerLogBodyAddCoin::coin_type(this) )
  {
    v10 = proto_log::PlayerLogBodyAddCoin::coin_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v10) + 1;
  }
  if ( proto_log::PlayerLogBodyAddCoin::add_num(this) )
  {
    v11 = proto_log::PlayerLogBodyAddCoin::add_num(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v11) + 1;
  }
  if ( proto_log::PlayerLogBodyAddCoin::pay_add(this) )
  {
    v12 = proto_log::PlayerLogBodyAddCoin::pay_add(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v12) + 1;
  }
  if ( proto_log::PlayerLogBodyAddCoin::free_add(this) )
  {
    v13 = proto_log::PlayerLogBodyAddCoin::free_add(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v13) + 1;
  }
  if ( proto_log::PlayerLogBodyAddCoin::left_num(this) )
  {
    v14 = proto_log::PlayerLogBodyAddCoin::left_num(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v14) + 1;
  }
  if ( proto_log::PlayerLogBodyAddCoin::pay_left(this) )
  {
    v15 = proto_log::PlayerLogBodyAddCoin::pay_left(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v15) + 1;
  }
  if ( proto_log::PlayerLogBodyAddCoin::free_left(this) )
  {
    v16 = proto_log::PlayerLogBodyAddCoin::free_left(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v16) + 1;
  }
  if ( proto_log::PlayerLogBodyAddCoin::reason(this) )
  {
    v17 = proto_log::PlayerLogBodyAddCoin::reason(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v17) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 8830: range 000000001744F5B0-000000001744F839
void __cdecl proto_log::PlayerLogBodyAddCoin::MergeFrom(
        proto_log::PlayerLogBodyAddCoin *const this,
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
  const proto_log::PlayerLogBodyAddCoin *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddCoin::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      8832);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyAddCoin const>(from);
  if ( source )
    proto_log::PlayerLogBodyAddCoin::MergeFrom(this, source);
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

// Line 8845: range 000000001744F83A-000000001744FF12
void __cdecl proto_log::PlayerLogBodyAddCoin::MergeFrom(
        proto_log::PlayerLogBodyAddCoin *const this,
        const proto_log::PlayerLogBodyAddCoin *from)
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
  google::protobuf::uint32 v16; // edx
  google::protobuf::uint32 v17; // edx
  google::protobuf::int64 v18; // rdx
  google::protobuf::int64 v19; // rdx
  google::protobuf::int64 v20; // rdx
  google::protobuf::int64 v21; // rdx
  google::protobuf::int64 v22; // rdx
  google::protobuf::int64 v23; // rdx
  google::protobuf::uint32 v24; // edx
  char v25; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v27[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddCoin::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v25 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_common.pb.cc",
      8847);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v25 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v25 )
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
  v10 = proto_log::PlayerLogBodyAddCoin::platform[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->platform_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->platform_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->platform_, v11, from->platform_);
  }
  v12 = proto_log::PlayerLogBodyAddCoin::register_cps[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->register_cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->register_cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->register_cps_, v13, from->register_cps_);
  }
  v14 = proto_log::PlayerLogBodyAddCoin::cps[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->cps_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->cps_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->cps_, v15, from->cps_);
  }
  if ( proto_log::PlayerLogBodyAddCoin::coin_id(from) )
  {
    v16 = proto_log::PlayerLogBodyAddCoin::coin_id(from);
    proto_log::PlayerLogBodyAddCoin::set_coin_id(this, v16);
  }
  if ( proto_log::PlayerLogBodyAddCoin::coin_type(from) )
  {
    v17 = proto_log::PlayerLogBodyAddCoin::coin_type(from);
    proto_log::PlayerLogBodyAddCoin::set_coin_type(this, v17);
  }
  if ( proto_log::PlayerLogBodyAddCoin::add_num(from) )
  {
    v18 = proto_log::PlayerLogBodyAddCoin::add_num(from);
    proto_log::PlayerLogBodyAddCoin::set_add_num(this, v18);
  }
  if ( proto_log::PlayerLogBodyAddCoin::pay_add(from) )
  {
    v19 = proto_log::PlayerLogBodyAddCoin::pay_add(from);
    proto_log::PlayerLogBodyAddCoin::set_pay_add(this, v19);
  }
  if ( proto_log::PlayerLogBodyAddCoin::free_add(from) )
  {
    v20 = proto_log::PlayerLogBodyAddCoin::free_add(from);
    proto_log::PlayerLogBodyAddCoin::set_free_add(this, v20);
  }
  if ( proto_log::PlayerLogBodyAddCoin::left_num(from) )
  {
    v21 = proto_log::PlayerLogBodyAddCoin::left_num(from);
    proto_log::PlayerLogBodyAddCoin::set_left_num(this, v21);
  }
  if ( proto_log::PlayerLogBodyAddCoin::pay_left(from) )
  {
    v22 = proto_log::PlayerLogBodyAddCoin::pay_left(from);
    proto_log::PlayerLogBodyAddCoin::set_pay_left(this, v22);
  }
  if ( proto_log::PlayerLogBodyAddCoin::free_left(from) )
  {
    v23 = proto_log::PlayerLogBodyAddCoin::free_left(from);
    proto_log::PlayerLogBodyAddCoin::set_free_left(this, v23);
  }
  if ( proto_log::PlayerLogBodyAddCoin::reason(from) )
  {
    v24 = proto_log::PlayerLogBodyAddCoin::reason(from);
    proto_log::PlayerLogBodyAddCoin::set_reason(this, v24);
  }
  if ( v27 == (char *)v2 )
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

// Line 8893: range 000000001744FF14-000000001744FF51
void __cdecl proto_log::PlayerLogBodyAddCoin::CopyFrom(
        proto_log::PlayerLogBodyAddCoin *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyAddCoin::Clear(this);
    proto_log::PlayerLogBodyAddCoin::MergeFrom(this, from);
  }
};

// Line 8900: range 000000001744FF52-000000001744FF8F
void __cdecl proto_log::PlayerLogBodyAddCoin::CopyFrom(
        proto_log::PlayerLogBodyAddCoin *const this,
        const proto_log::PlayerLogBodyAddCoin *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyAddCoin::Clear(this);
    proto_log::PlayerLogBodyAddCoin::MergeFrom(this, from);
  }
};

// Line 8907: range 000000001744FF90-000000001744FF9E
bool __cdecl proto_log::PlayerLogBodyAddCoin::IsInitialized(const proto_log::PlayerLogBodyAddCoin *const this)
{
  return 1;
};

// Line 8911: range 000000001744FFA0-000000001744FFD1
void __cdecl proto_log::PlayerLogBodyAddCoin::Swap(
        proto_log::PlayerLogBodyAddCoin *const this,
        proto_log::PlayerLogBodyAddCoin *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyAddCoin::InternalSwap(this, other);
};

// Line 8915: range 000000001744FFD2-000000001745030F
void __cdecl proto_log::PlayerLogBodyAddCoin::InternalSwap(
        proto_log::PlayerLogBodyAddCoin *const this,
        proto_log::PlayerLogBodyAddCoin *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-70h]

  std::swap<std::string *>(&this->platform_.ptr_, &other->platform_.ptr_);
  std::swap<std::string *>(&this->register_cps_.ptr_, &other->register_cps_.ptr_);
  std::swap<std::string *>(&this->cps_.ptr_, &other->cps_.ptr_);
  std::swap<unsigned int>(&this->coin_id_, &other->coin_id_);
  std::swap<unsigned int>(&this->coin_type_, &other->coin_type_);
  std::swap<long>(&this->add_num_, &other->add_num_);
  std::swap<long>(&this->pay_add_, &other->pay_add_);
  std::swap<long>(&this->free_add_, &other->free_add_);
  std::swap<long>(&this->left_num_, &other->left_num_);
  std::swap<long>(&this->pay_left_, &other->pay_left_);
  std::swap<long>(&this->free_left_, &other->free_left_);
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

// Line 8933: range 0000000017450310-0000000017450330
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyAddCoin::GetMetadata(
        const proto_log::PlayerLogBodyAddCoin *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[9];
};

// Line 9235: range 0000000017450332-00000000174503F1
void __cdecl proto_log::PlayerLogBodyMissionAccept::PlayerLogBodyMissionAccept(
        proto_log::PlayerLogBodyMissionAccept *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionAccept + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyMissionAccept::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyMissionAccept::SharedCtor(this);
};

// Line 9243: range 00000000174503F2-000000001745069C
void __cdecl proto_log::PlayerLogBodyMissionAccept::PlayerLogBodyMissionAccept(
        proto_log::PlayerLogBodyMissionAccept *const this,
        const proto_log::PlayerLogBodyMissionAccept *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  __int64 p_mission_type; // rsi
  google::protobuf::uint32 *v5; // rcx
  google::protobuf::uint32 *v6; // rdi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionAccept + 2);
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
  p_mission_type = (__int64)&from->mission_type_;
  v5 = &this->mission_type_;
  if ( (((unsigned __int8)from + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&from->mission_type_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->mission_type_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->mission_id_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&from->mission_id_ + 3) >> 3) + 0x7FFF8000) )
  {
    p_mission_type = 8LL;
    __asan_report_load_n(&from->mission_type_, 8LL);
  }
  v6 = *(google::protobuf::uint32 **)p_mission_type;
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

// Line 9254: range 000000001745069E-0000000017450704
void __cdecl proto_log::PlayerLogBodyMissionAccept::SharedCtor(proto_log::PlayerLogBodyMissionAccept *const this)
{
  memset(&this->mission_type_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 9261: range 0000000017450706-000000001745076F
void __cdecl proto_log::PlayerLogBodyMissionAccept::~PlayerLogBodyMissionAccept(
        proto_log::PlayerLogBodyMissionAccept *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionAccept + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyMissionAccept::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 9261: range 0000000017450770-000000001745079A
void __cdecl proto_log::PlayerLogBodyMissionAccept::~PlayerLogBodyMissionAccept(
        proto_log::PlayerLogBodyMissionAccept *const this)
{
  proto_log::PlayerLogBodyMissionAccept::~PlayerLogBodyMissionAccept(this);
  operator delete(this, 0x20uLL);
};

// Line 9266: range 000000001745079C-00000000174507A6
void __cdecl proto_log::PlayerLogBodyMissionAccept::SharedDtor(proto_log::PlayerLogBodyMissionAccept *const this)
{
  ;
};

// Line 9269: range 00000000174507A8-00000000174507F6
void __cdecl proto_log::PlayerLogBodyMissionAccept::SetCachedSize(
        const proto_log::PlayerLogBodyMissionAccept *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 9274: range 00000000174507F8-0000000017450809
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyMissionAccept::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[10].descriptor;
};

// Line 9279: range 000000001745080A-0000000017450819
const proto_log::PlayerLogBodyMissionAccept *__cdecl proto_log::PlayerLogBodyMissionAccept::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyMissionAccept::internal_default_instance();
};

// Line 9284: range 000000001745081A-000000001745088E
proto_log::PlayerLogBodyMissionAccept *__cdecl proto_log::PlayerLogBodyMissionAccept::New(
        const proto_log::PlayerLogBodyMissionAccept *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyMissionAccept *v2; // rbx

  v2 = (proto_log::PlayerLogBodyMissionAccept *)operator new(0x20uLL);
  proto_log::PlayerLogBodyMissionAccept::PlayerLogBodyMissionAccept(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyMissionAccept>(arena, v2);
  return v2;
};

// Line 9292: range 0000000017450890-000000001745091D
void __cdecl proto_log::PlayerLogBodyMissionAccept::Clear(proto_log::PlayerLogBodyMissionAccept *const this)
{
  memset(&this->mission_type_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 9305: range 000000001745091E-0000000017451257
bool __cdecl proto_log::PlayerLogBodyMissionAccept::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyMissionAccept *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:9310";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionAccept::MergePartialFromCodedStream;
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
                &this->mission_type_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->mission_id_) )
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

// Line 9363: range 0000000017451258-00000000174513CF
void __cdecl proto_log::PlayerLogBodyMissionAccept::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyMissionAccept *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax

  if ( proto_log::PlayerLogBodyMissionAccept::mission_type(this) )
  {
    v2 = proto_log::PlayerLogBodyMissionAccept::mission_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyMissionAccept::mission_id(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionAccept::mission_id(this);
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

// Line 9386: range 00000000174513D0-000000001745155B
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyMissionAccept::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyMissionAccept *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax

  if ( proto_log::PlayerLogBodyMissionAccept::mission_type(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionAccept::mission_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyMissionAccept::mission_id(this) )
  {
    v4 = proto_log::PlayerLogBodyMissionAccept::mission_id(this);
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

// Line 9410: range 000000001745155C-0000000017451710
size_t __cdecl proto_log::PlayerLogBodyMissionAccept::ByteSizeLong(
        const proto_log::PlayerLogBodyMissionAccept *const this)
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
  if ( proto_log::PlayerLogBodyMissionAccept::mission_type(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionAccept::mission_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::PlayerLogBodyMissionAccept::mission_id(this) )
  {
    v4 = proto_log::PlayerLogBodyMissionAccept::mission_id(this);
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

// Line 9440: range 0000000017451712-000000001745199B
void __cdecl proto_log::PlayerLogBodyMissionAccept::MergeFrom(
        proto_log::PlayerLogBodyMissionAccept *const this,
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
  const proto_log::PlayerLogBodyMissionAccept *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionAccept::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      9442);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyMissionAccept const>(from);
  if ( source )
    proto_log::PlayerLogBodyMissionAccept::MergeFrom(this, source);
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

// Line 9455: range 000000001745199C-0000000017451D6D
void __cdecl proto_log::PlayerLogBodyMissionAccept::MergeFrom(
        proto_log::PlayerLogBodyMissionAccept *const this,
        const proto_log::PlayerLogBodyMissionAccept *from)
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionAccept::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      9457);
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
  if ( proto_log::PlayerLogBodyMissionAccept::mission_type(from) )
  {
    v10 = proto_log::PlayerLogBodyMissionAccept::mission_type(from);
    proto_log::PlayerLogBodyMissionAccept::set_mission_type(this, v10);
  }
  if ( proto_log::PlayerLogBodyMissionAccept::mission_id(from) )
  {
    v11 = proto_log::PlayerLogBodyMissionAccept::mission_id(from);
    proto_log::PlayerLogBodyMissionAccept::set_mission_id(this, v11);
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

// Line 9470: range 0000000017451D6E-0000000017451DAB
void __cdecl proto_log::PlayerLogBodyMissionAccept::CopyFrom(
        proto_log::PlayerLogBodyMissionAccept *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyMissionAccept::Clear(this);
    proto_log::PlayerLogBodyMissionAccept::MergeFrom(this, from);
  }
};

// Line 9477: range 0000000017451DAC-0000000017451DE9
void __cdecl proto_log::PlayerLogBodyMissionAccept::CopyFrom(
        proto_log::PlayerLogBodyMissionAccept *const this,
        const proto_log::PlayerLogBodyMissionAccept *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyMissionAccept::Clear(this);
    proto_log::PlayerLogBodyMissionAccept::MergeFrom(this, from);
  }
};

// Line 9484: range 0000000017451DEA-0000000017451DF8
bool __cdecl proto_log::PlayerLogBodyMissionAccept::IsInitialized(
        const proto_log::PlayerLogBodyMissionAccept *const this)
{
  return 1;
};

// Line 9488: range 0000000017451DFA-0000000017451E2B
void __cdecl proto_log::PlayerLogBodyMissionAccept::Swap(
        proto_log::PlayerLogBodyMissionAccept *const this,
        proto_log::PlayerLogBodyMissionAccept *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyMissionAccept::InternalSwap(this, other);
};

// Line 9492: range 0000000017451E2C-0000000017451FCB
void __cdecl proto_log::PlayerLogBodyMissionAccept::InternalSwap(
        proto_log::PlayerLogBodyMissionAccept *const this,
        proto_log::PlayerLogBodyMissionAccept *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->mission_type_, &other->mission_type_);
  std::swap<unsigned int>(&this->mission_id_, &other->mission_id_);
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

// Line 9500: range 0000000017451FCC-0000000017451FEC
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyMissionAccept::GetMetadata(
        const proto_log::PlayerLogBodyMissionAccept *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[10];
};

// Line 9545: range 0000000017451FEE-00000000174520AD
void __cdecl proto_log::PlayerLogBodyMissionStart::PlayerLogBodyMissionStart(
        proto_log::PlayerLogBodyMissionStart *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionStart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyMissionStart::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyMissionStart::SharedCtor(this);
};

// Line 9553: range 00000000174520AE-0000000017452358
void __cdecl proto_log::PlayerLogBodyMissionStart::PlayerLogBodyMissionStart(
        proto_log::PlayerLogBodyMissionStart *const this,
        const proto_log::PlayerLogBodyMissionStart *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  __int64 p_mission_type; // rsi
  google::protobuf::uint32 *v5; // rcx
  google::protobuf::uint32 *v6; // rdi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionStart + 2);
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
  p_mission_type = (__int64)&from->mission_type_;
  v5 = &this->mission_type_;
  if ( (((unsigned __int8)from + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&from->mission_type_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->mission_type_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->mission_id_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&from->mission_id_ + 3) >> 3) + 0x7FFF8000) )
  {
    p_mission_type = 8LL;
    __asan_report_load_n(&from->mission_type_, 8LL);
  }
  v6 = *(google::protobuf::uint32 **)p_mission_type;
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

// Line 9564: range 000000001745235A-00000000174523C0
void __cdecl proto_log::PlayerLogBodyMissionStart::SharedCtor(proto_log::PlayerLogBodyMissionStart *const this)
{
  memset(&this->mission_type_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 9571: range 00000000174523C2-000000001745242B
void __cdecl proto_log::PlayerLogBodyMissionStart::~PlayerLogBodyMissionStart(
        proto_log::PlayerLogBodyMissionStart *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionStart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyMissionStart::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 9571: range 000000001745242C-0000000017452456
void __cdecl proto_log::PlayerLogBodyMissionStart::~PlayerLogBodyMissionStart(
        proto_log::PlayerLogBodyMissionStart *const this)
{
  proto_log::PlayerLogBodyMissionStart::~PlayerLogBodyMissionStart(this);
  operator delete(this, 0x20uLL);
};

// Line 9576: range 0000000017452458-0000000017452462
void __cdecl proto_log::PlayerLogBodyMissionStart::SharedDtor(proto_log::PlayerLogBodyMissionStart *const this)
{
  ;
};

// Line 9579: range 0000000017452464-00000000174524B2
void __cdecl proto_log::PlayerLogBodyMissionStart::SetCachedSize(
        const proto_log::PlayerLogBodyMissionStart *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 9584: range 00000000174524B4-00000000174524C5
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyMissionStart::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[11].descriptor;
};

// Line 9589: range 00000000174524C6-00000000174524D5
const proto_log::PlayerLogBodyMissionStart *__cdecl proto_log::PlayerLogBodyMissionStart::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyMissionStart::internal_default_instance();
};

// Line 9594: range 00000000174524D6-000000001745254A
proto_log::PlayerLogBodyMissionStart *__cdecl proto_log::PlayerLogBodyMissionStart::New(
        const proto_log::PlayerLogBodyMissionStart *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyMissionStart *v2; // rbx

  v2 = (proto_log::PlayerLogBodyMissionStart *)operator new(0x20uLL);
  proto_log::PlayerLogBodyMissionStart::PlayerLogBodyMissionStart(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyMissionStart>(arena, v2);
  return v2;
};

// Line 9602: range 000000001745254C-00000000174525D9
void __cdecl proto_log::PlayerLogBodyMissionStart::Clear(proto_log::PlayerLogBodyMissionStart *const this)
{
  memset(&this->mission_type_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 9615: range 00000000174525DA-0000000017452F13
bool __cdecl proto_log::PlayerLogBodyMissionStart::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyMissionStart *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:9620";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionStart::MergePartialFromCodedStream;
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
                &this->mission_type_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->mission_id_) )
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

// Line 9673: range 0000000017452F14-000000001745308B
void __cdecl proto_log::PlayerLogBodyMissionStart::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyMissionStart *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax

  if ( proto_log::PlayerLogBodyMissionStart::mission_type(this) )
  {
    v2 = proto_log::PlayerLogBodyMissionStart::mission_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyMissionStart::mission_id(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionStart::mission_id(this);
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

// Line 9696: range 000000001745308C-0000000017453217
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyMissionStart::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyMissionStart *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax

  if ( proto_log::PlayerLogBodyMissionStart::mission_type(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionStart::mission_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyMissionStart::mission_id(this) )
  {
    v4 = proto_log::PlayerLogBodyMissionStart::mission_id(this);
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

// Line 9720: range 0000000017453218-00000000174533CC
size_t __cdecl proto_log::PlayerLogBodyMissionStart::ByteSizeLong(
        const proto_log::PlayerLogBodyMissionStart *const this)
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
  if ( proto_log::PlayerLogBodyMissionStart::mission_type(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionStart::mission_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::PlayerLogBodyMissionStart::mission_id(this) )
  {
    v4 = proto_log::PlayerLogBodyMissionStart::mission_id(this);
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

// Line 9750: range 00000000174533CE-0000000017453657
void __cdecl proto_log::PlayerLogBodyMissionStart::MergeFrom(
        proto_log::PlayerLogBodyMissionStart *const this,
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
  const proto_log::PlayerLogBodyMissionStart *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionStart::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      9752);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyMissionStart const>(from);
  if ( source )
    proto_log::PlayerLogBodyMissionStart::MergeFrom(this, source);
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

// Line 9765: range 0000000017453658-0000000017453A29
void __cdecl proto_log::PlayerLogBodyMissionStart::MergeFrom(
        proto_log::PlayerLogBodyMissionStart *const this,
        const proto_log::PlayerLogBodyMissionStart *from)
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionStart::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      9767);
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
  if ( proto_log::PlayerLogBodyMissionStart::mission_type(from) )
  {
    v10 = proto_log::PlayerLogBodyMissionStart::mission_type(from);
    proto_log::PlayerLogBodyMissionStart::set_mission_type(this, v10);
  }
  if ( proto_log::PlayerLogBodyMissionStart::mission_id(from) )
  {
    v11 = proto_log::PlayerLogBodyMissionStart::mission_id(from);
    proto_log::PlayerLogBodyMissionStart::set_mission_id(this, v11);
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

// Line 9780: range 0000000017453A2A-0000000017453A67
void __cdecl proto_log::PlayerLogBodyMissionStart::CopyFrom(
        proto_log::PlayerLogBodyMissionStart *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyMissionStart::Clear(this);
    proto_log::PlayerLogBodyMissionStart::MergeFrom(this, from);
  }
};

// Line 9787: range 0000000017453A68-0000000017453AA5
void __cdecl proto_log::PlayerLogBodyMissionStart::CopyFrom(
        proto_log::PlayerLogBodyMissionStart *const this,
        const proto_log::PlayerLogBodyMissionStart *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyMissionStart::Clear(this);
    proto_log::PlayerLogBodyMissionStart::MergeFrom(this, from);
  }
};

// Line 9794: range 0000000017453AA6-0000000017453AB4
bool __cdecl proto_log::PlayerLogBodyMissionStart::IsInitialized(
        const proto_log::PlayerLogBodyMissionStart *const this)
{
  return 1;
};

// Line 9798: range 0000000017453AB6-0000000017453AE7
void __cdecl proto_log::PlayerLogBodyMissionStart::Swap(
        proto_log::PlayerLogBodyMissionStart *const this,
        proto_log::PlayerLogBodyMissionStart *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyMissionStart::InternalSwap(this, other);
};

// Line 9802: range 0000000017453AE8-0000000017453C87
void __cdecl proto_log::PlayerLogBodyMissionStart::InternalSwap(
        proto_log::PlayerLogBodyMissionStart *const this,
        proto_log::PlayerLogBodyMissionStart *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->mission_type_, &other->mission_type_);
  std::swap<unsigned int>(&this->mission_id_, &other->mission_id_);
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

// Line 9810: range 0000000017453C88-0000000017453CA8
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyMissionStart::GetMetadata(
        const proto_log::PlayerLogBodyMissionStart *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[11];
};

// Line 9856: range 0000000017453CAA-0000000017453D69
void __cdecl proto_log::PlayerLogBodyMissionFinish::PlayerLogBodyMissionFinish(
        proto_log::PlayerLogBodyMissionFinish *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionFinish + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyMissionFinish::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyMissionFinish::SharedCtor(this);
};

// Line 9864: range 0000000017453D6A-0000000017453F46
void __cdecl proto_log::PlayerLogBodyMissionFinish::PlayerLogBodyMissionFinish(
        proto_log::PlayerLogBodyMissionFinish *const this,
        const proto_log::PlayerLogBodyMissionFinish *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionFinish + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  memcpy(&this->mission_type_, &from->mission_type_, 0xCuLL);
};

// Line 9875: range 0000000017453F48-0000000017453FB6
void __cdecl proto_log::PlayerLogBodyMissionFinish::SharedCtor(proto_log::PlayerLogBodyMissionFinish *const this)
{
  memset(&this->mission_type_, 0, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 9882: range 0000000017453FB8-0000000017454021
void __cdecl proto_log::PlayerLogBodyMissionFinish::~PlayerLogBodyMissionFinish(
        proto_log::PlayerLogBodyMissionFinish *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionFinish + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyMissionFinish::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 9882: range 0000000017454022-000000001745404C
void __cdecl proto_log::PlayerLogBodyMissionFinish::~PlayerLogBodyMissionFinish(
        proto_log::PlayerLogBodyMissionFinish *const this)
{
  proto_log::PlayerLogBodyMissionFinish::~PlayerLogBodyMissionFinish(this);
  operator delete(this, 0x20uLL);
};

// Line 9887: range 000000001745404E-0000000017454058
void __cdecl proto_log::PlayerLogBodyMissionFinish::SharedDtor(proto_log::PlayerLogBodyMissionFinish *const this)
{
  ;
};

// Line 9890: range 000000001745405A-00000000174540B0
void __cdecl proto_log::PlayerLogBodyMissionFinish::SetCachedSize(
        const proto_log::PlayerLogBodyMissionFinish *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 9895: range 00000000174540B2-00000000174540C3
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyMissionFinish::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[12].descriptor;
};

// Line 9900: range 00000000174540C4-00000000174540D3
const proto_log::PlayerLogBodyMissionFinish *__cdecl proto_log::PlayerLogBodyMissionFinish::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyMissionFinish::internal_default_instance();
};

// Line 9905: range 00000000174540D4-0000000017454148
proto_log::PlayerLogBodyMissionFinish *__cdecl proto_log::PlayerLogBodyMissionFinish::New(
        const proto_log::PlayerLogBodyMissionFinish *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyMissionFinish *v2; // rbx

  v2 = (proto_log::PlayerLogBodyMissionFinish *)operator new(0x20uLL);
  proto_log::PlayerLogBodyMissionFinish::PlayerLogBodyMissionFinish(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyMissionFinish>(arena, v2);
  return v2;
};

// Line 9913: range 000000001745414A-00000000174541D7
void __cdecl proto_log::PlayerLogBodyMissionFinish::Clear(proto_log::PlayerLogBodyMissionFinish *const this)
{
  memset(&this->mission_type_, 0, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 9926: range 00000000174541D8-0000000017454B6D
bool __cdecl proto_log::PlayerLogBodyMissionFinish::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyMissionFinish *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:9931";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionFinish::MergePartialFromCodedStream;
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
      if ( TagFieldNumber == 3 )
      {
        if ( (_BYTE)tag != 24 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->start_time_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber > 3 )
          break;
        if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 8 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->mission_type_) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->mission_id_) )
            goto failure;
        }
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_55;
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
LABEL_55:
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

// Line 9998: range 0000000017454B6E-0000000017454D1B
void __cdecl proto_log::PlayerLogBodyMissionFinish::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyMissionFinish *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 started; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax

  if ( proto_log::PlayerLogBodyMissionFinish::mission_type(this) )
  {
    v2 = proto_log::PlayerLogBodyMissionFinish::mission_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyMissionFinish::mission_id(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionFinish::mission_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::PlayerLogBodyMissionFinish::start_time(this) )
  {
    started = proto_log::PlayerLogBodyMissionFinish::start_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, started, output);
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
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v6->unknown_fields, output);
  }
};

// Line 10026: range 0000000017454D1C-0000000017454EE1
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyMissionFinish::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyMissionFinish *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 started; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax

  if ( proto_log::PlayerLogBodyMissionFinish::mission_type(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionFinish::mission_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyMissionFinish::mission_id(this) )
  {
    v4 = proto_log::PlayerLogBodyMissionFinish::mission_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogBodyMissionFinish::start_time(this) )
  {
    started = proto_log::PlayerLogBodyMissionFinish::start_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, started, target);
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
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_19:
      v7 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v7->unknown_fields, target);
  }
  return target;
};

// Line 10055: range 0000000017454EE2-00000000174550CE
size_t __cdecl proto_log::PlayerLogBodyMissionFinish::ByteSizeLong(
        const proto_log::PlayerLogBodyMissionFinish *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  google::protobuf::uint32 started; // eax
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
  if ( proto_log::PlayerLogBodyMissionFinish::mission_type(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionFinish::mission_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::PlayerLogBodyMissionFinish::mission_id(this) )
  {
    v4 = proto_log::PlayerLogBodyMissionFinish::mission_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::PlayerLogBodyMissionFinish::start_time(this) )
  {
    started = proto_log::PlayerLogBodyMissionFinish::start_time(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(started) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 10092: range 00000000174550D0-0000000017455359
void __cdecl proto_log::PlayerLogBodyMissionFinish::MergeFrom(
        proto_log::PlayerLogBodyMissionFinish *const this,
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
  const proto_log::PlayerLogBodyMissionFinish *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionFinish::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      10094);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyMissionFinish const>(from);
  if ( source )
    proto_log::PlayerLogBodyMissionFinish::MergeFrom(this, source);
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

// Line 10107: range 000000001745535A-0000000017455765
void __cdecl proto_log::PlayerLogBodyMissionFinish::MergeFrom(
        proto_log::PlayerLogBodyMissionFinish *const this,
        const proto_log::PlayerLogBodyMissionFinish *from)
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
  google::protobuf::uint32 started; // edx
  char v13; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v15[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionFinish::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v13 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_common.pb.cc",
      10109);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v13 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v13 )
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
  if ( proto_log::PlayerLogBodyMissionFinish::mission_type(from) )
  {
    v10 = proto_log::PlayerLogBodyMissionFinish::mission_type(from);
    proto_log::PlayerLogBodyMissionFinish::set_mission_type(this, v10);
  }
  if ( proto_log::PlayerLogBodyMissionFinish::mission_id(from) )
  {
    v11 = proto_log::PlayerLogBodyMissionFinish::mission_id(from);
    proto_log::PlayerLogBodyMissionFinish::set_mission_id(this, v11);
  }
  if ( proto_log::PlayerLogBodyMissionFinish::start_time(from) )
  {
    started = proto_log::PlayerLogBodyMissionFinish::start_time(from);
    proto_log::PlayerLogBodyMissionFinish::set_start_time(this, started);
  }
  if ( v15 == (char *)v2 )
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

// Line 10125: range 0000000017455766-00000000174557A3
void __cdecl proto_log::PlayerLogBodyMissionFinish::CopyFrom(
        proto_log::PlayerLogBodyMissionFinish *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyMissionFinish::Clear(this);
    proto_log::PlayerLogBodyMissionFinish::MergeFrom(this, from);
  }
};

// Line 10132: range 00000000174557A4-00000000174557E1
void __cdecl proto_log::PlayerLogBodyMissionFinish::CopyFrom(
        proto_log::PlayerLogBodyMissionFinish *const this,
        const proto_log::PlayerLogBodyMissionFinish *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyMissionFinish::Clear(this);
    proto_log::PlayerLogBodyMissionFinish::MergeFrom(this, from);
  }
};

// Line 10139: range 00000000174557E2-00000000174557F0
bool __cdecl proto_log::PlayerLogBodyMissionFinish::IsInitialized(
        const proto_log::PlayerLogBodyMissionFinish *const this)
{
  return 1;
};

// Line 10143: range 00000000174557F2-0000000017455823
void __cdecl proto_log::PlayerLogBodyMissionFinish::Swap(
        proto_log::PlayerLogBodyMissionFinish *const this,
        proto_log::PlayerLogBodyMissionFinish *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyMissionFinish::InternalSwap(this, other);
};

// Line 10147: range 0000000017455824-00000000174559DE
void __cdecl proto_log::PlayerLogBodyMissionFinish::InternalSwap(
        proto_log::PlayerLogBodyMissionFinish *const this,
        proto_log::PlayerLogBodyMissionFinish *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->mission_type_, &other->mission_type_);
  std::swap<unsigned int>(&this->mission_id_, &other->mission_id_);
  std::swap<unsigned int>(&this->start_time_, &other->start_time_);
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

// Line 10156: range 00000000174559E0-0000000017455A00
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyMissionFinish::GetMetadata(
        const proto_log::PlayerLogBodyMissionFinish *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[12];
};

// Line 10216: range 0000000017455A02-0000000017455AC1
void __cdecl proto_log::PlayerLogBodyMissionFail::PlayerLogBodyMissionFail(
        proto_log::PlayerLogBodyMissionFail *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionFail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyMissionFail::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyMissionFail::SharedCtor(this);
};

// Line 10224: range 0000000017455AC2-0000000017455C9E
void __cdecl proto_log::PlayerLogBodyMissionFail::PlayerLogBodyMissionFail(
        proto_log::PlayerLogBodyMissionFail *const this,
        const proto_log::PlayerLogBodyMissionFail *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionFail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  memcpy(&this->mission_type_, &from->mission_type_, 0xCuLL);
};

// Line 10235: range 0000000017455CA0-0000000017455D0E
void __cdecl proto_log::PlayerLogBodyMissionFail::SharedCtor(proto_log::PlayerLogBodyMissionFail *const this)
{
  memset(&this->mission_type_, 0, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 10242: range 0000000017455D10-0000000017455D79
void __cdecl proto_log::PlayerLogBodyMissionFail::~PlayerLogBodyMissionFail(
        proto_log::PlayerLogBodyMissionFail *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyMissionFail + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyMissionFail::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 10242: range 0000000017455D7A-0000000017455DA4
void __cdecl proto_log::PlayerLogBodyMissionFail::~PlayerLogBodyMissionFail(
        proto_log::PlayerLogBodyMissionFail *const this)
{
  proto_log::PlayerLogBodyMissionFail::~PlayerLogBodyMissionFail(this);
  operator delete(this, 0x20uLL);
};

// Line 10247: range 0000000017455DA6-0000000017455DB0
void __cdecl proto_log::PlayerLogBodyMissionFail::SharedDtor(proto_log::PlayerLogBodyMissionFail *const this)
{
  ;
};

// Line 10250: range 0000000017455DB2-0000000017455E08
void __cdecl proto_log::PlayerLogBodyMissionFail::SetCachedSize(
        const proto_log::PlayerLogBodyMissionFail *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 10255: range 0000000017455E0A-0000000017455E1B
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyMissionFail::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[13].descriptor;
};

// Line 10260: range 0000000017455E1C-0000000017455E2B
const proto_log::PlayerLogBodyMissionFail *__cdecl proto_log::PlayerLogBodyMissionFail::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyMissionFail::internal_default_instance();
};

// Line 10265: range 0000000017455E2C-0000000017455EA0
proto_log::PlayerLogBodyMissionFail *__cdecl proto_log::PlayerLogBodyMissionFail::New(
        const proto_log::PlayerLogBodyMissionFail *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyMissionFail *v2; // rbx

  v2 = (proto_log::PlayerLogBodyMissionFail *)operator new(0x20uLL);
  proto_log::PlayerLogBodyMissionFail::PlayerLogBodyMissionFail(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyMissionFail>(arena, v2);
  return v2;
};

// Line 10273: range 0000000017455EA2-0000000017455F2F
void __cdecl proto_log::PlayerLogBodyMissionFail::Clear(proto_log::PlayerLogBodyMissionFail *const this)
{
  memset(&this->mission_type_, 0, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 10286: range 0000000017455F30-00000000174568C5
bool __cdecl proto_log::PlayerLogBodyMissionFail::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyMissionFail *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag"
                        " 128 8 7 p:10291";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionFail::MergePartialFromCodedStream;
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
      if ( TagFieldNumber == 3 )
      {
        if ( (_BYTE)tag != 24 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                input,
                &this->start_time_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber > 3 )
          break;
        if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 8 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->mission_type_) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->mission_id_) )
            goto failure;
        }
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_55;
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
LABEL_55:
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

// Line 10358: range 00000000174568C6-0000000017456A73
void __cdecl proto_log::PlayerLogBodyMissionFail::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyMissionFail *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 started; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax

  if ( proto_log::PlayerLogBodyMissionFail::mission_type(this) )
  {
    v2 = proto_log::PlayerLogBodyMissionFail::mission_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyMissionFail::mission_id(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionFail::mission_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::PlayerLogBodyMissionFail::start_time(this) )
  {
    started = proto_log::PlayerLogBodyMissionFail::start_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, started, output);
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
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v6->unknown_fields, output);
  }
};

// Line 10386: range 0000000017456A74-0000000017456C39
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyMissionFail::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyMissionFail *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 started; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax

  if ( proto_log::PlayerLogBodyMissionFail::mission_type(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionFail::mission_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyMissionFail::mission_id(this) )
  {
    v4 = proto_log::PlayerLogBodyMissionFail::mission_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogBodyMissionFail::start_time(this) )
  {
    started = proto_log::PlayerLogBodyMissionFail::start_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, started, target);
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
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_19:
      v7 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v7->unknown_fields, target);
  }
  return target;
};

// Line 10415: range 0000000017456C3A-0000000017456E26
size_t __cdecl proto_log::PlayerLogBodyMissionFail::ByteSizeLong(const proto_log::PlayerLogBodyMissionFail *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  google::protobuf::uint32 started; // eax
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
  if ( proto_log::PlayerLogBodyMissionFail::mission_type(this) )
  {
    v3 = proto_log::PlayerLogBodyMissionFail::mission_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::PlayerLogBodyMissionFail::mission_id(this) )
  {
    v4 = proto_log::PlayerLogBodyMissionFail::mission_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::PlayerLogBodyMissionFail::start_time(this) )
  {
    started = proto_log::PlayerLogBodyMissionFail::start_time(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(started) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 10452: range 0000000017456E28-00000000174570B1
void __cdecl proto_log::PlayerLogBodyMissionFail::MergeFrom(
        proto_log::PlayerLogBodyMissionFail *const this,
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
  const proto_log::PlayerLogBodyMissionFail *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionFail::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      10454);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyMissionFail const>(from);
  if ( source )
    proto_log::PlayerLogBodyMissionFail::MergeFrom(this, source);
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

// Line 10467: range 00000000174570B2-00000000174574BD
void __cdecl proto_log::PlayerLogBodyMissionFail::MergeFrom(
        proto_log::PlayerLogBodyMissionFail *const this,
        const proto_log::PlayerLogBodyMissionFail *from)
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
  google::protobuf::uint32 started; // edx
  char v13; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v15[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyMissionFail::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v13 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_common.pb.cc",
      10469);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v13 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v13 )
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
  if ( proto_log::PlayerLogBodyMissionFail::mission_type(from) )
  {
    v10 = proto_log::PlayerLogBodyMissionFail::mission_type(from);
    proto_log::PlayerLogBodyMissionFail::set_mission_type(this, v10);
  }
  if ( proto_log::PlayerLogBodyMissionFail::mission_id(from) )
  {
    v11 = proto_log::PlayerLogBodyMissionFail::mission_id(from);
    proto_log::PlayerLogBodyMissionFail::set_mission_id(this, v11);
  }
  if ( proto_log::PlayerLogBodyMissionFail::start_time(from) )
  {
    started = proto_log::PlayerLogBodyMissionFail::start_time(from);
    proto_log::PlayerLogBodyMissionFail::set_start_time(this, started);
  }
  if ( v15 == (char *)v2 )
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

// Line 10485: range 00000000174574BE-00000000174574FB
void __cdecl proto_log::PlayerLogBodyMissionFail::CopyFrom(
        proto_log::PlayerLogBodyMissionFail *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyMissionFail::Clear(this);
    proto_log::PlayerLogBodyMissionFail::MergeFrom(this, from);
  }
};

// Line 10492: range 00000000174574FC-0000000017457539
void __cdecl proto_log::PlayerLogBodyMissionFail::CopyFrom(
        proto_log::PlayerLogBodyMissionFail *const this,
        const proto_log::PlayerLogBodyMissionFail *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyMissionFail::Clear(this);
    proto_log::PlayerLogBodyMissionFail::MergeFrom(this, from);
  }
};

// Line 10499: range 000000001745753A-0000000017457548
bool __cdecl proto_log::PlayerLogBodyMissionFail::IsInitialized(const proto_log::PlayerLogBodyMissionFail *const this)
{
  return 1;
};

// Line 10503: range 000000001745754A-000000001745757B
void __cdecl proto_log::PlayerLogBodyMissionFail::Swap(
        proto_log::PlayerLogBodyMissionFail *const this,
        proto_log::PlayerLogBodyMissionFail *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyMissionFail::InternalSwap(this, other);
};

// Line 10507: range 000000001745757C-0000000017457736
void __cdecl proto_log::PlayerLogBodyMissionFail::InternalSwap(
        proto_log::PlayerLogBodyMissionFail *const this,
        proto_log::PlayerLogBodyMissionFail *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->mission_type_, &other->mission_type_);
  std::swap<unsigned int>(&this->mission_id_, &other->mission_id_);
  std::swap<unsigned int>(&this->start_time_, &other->start_time_);
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

// Line 10516: range 0000000017457738-0000000017457758
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyMissionFail::GetMetadata(
        const proto_log::PlayerLogBodyMissionFail *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[13];
};

// Line 10578: range 000000001745775A-0000000017457819
void __cdecl proto_log::PlayerLogBodyAddFurniture::PlayerLogBodyAddFurniture(
        proto_log::PlayerLogBodyAddFurniture *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddFurniture + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyAddFurniture::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  proto_log::PlayerLogBodyAddFurniture::SharedCtor(this);
};

// Line 10586: range 000000001745781A-00000000174579F6
void __cdecl proto_log::PlayerLogBodyAddFurniture::PlayerLogBodyAddFurniture(
        proto_log::PlayerLogBodyAddFurniture *const this,
        const proto_log::PlayerLogBodyAddFurniture *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddFurniture + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
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
  memcpy(&this->furniture_id_, &from->furniture_id_, 0x1CuLL);
};

// Line 10597: range 00000000174579F8-0000000017457A66
void __cdecl proto_log::PlayerLogBodyAddFurniture::SharedCtor(proto_log::PlayerLogBodyAddFurniture *const this)
{
  memset(&this->furniture_id_, 0, 0x1CuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 10604: range 0000000017457A68-0000000017457AD1
void __cdecl proto_log::PlayerLogBodyAddFurniture::~PlayerLogBodyAddFurniture(
        proto_log::PlayerLogBodyAddFurniture *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyAddFurniture + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyAddFurniture::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 10604: range 0000000017457AD2-0000000017457AFC
void __cdecl proto_log::PlayerLogBodyAddFurniture::~PlayerLogBodyAddFurniture(
        proto_log::PlayerLogBodyAddFurniture *const this)
{
  proto_log::PlayerLogBodyAddFurniture::~PlayerLogBodyAddFurniture(this);
  operator delete(this, 0x30uLL);
};

// Line 10609: range 0000000017457AFE-0000000017457B08
void __cdecl proto_log::PlayerLogBodyAddFurniture::SharedDtor(proto_log::PlayerLogBodyAddFurniture *const this)
{
  ;
};

// Line 10612: range 0000000017457B0A-0000000017457B60
void __cdecl proto_log::PlayerLogBodyAddFurniture::SetCachedSize(
        const proto_log::PlayerLogBodyAddFurniture *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 10617: range 0000000017457B62-0000000017457B73
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyAddFurniture::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[14].descriptor;
};

// Line 10622: range 0000000017457B74-0000000017457B83
const proto_log::PlayerLogBodyAddFurniture *__cdecl proto_log::PlayerLogBodyAddFurniture::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyAddFurniture::internal_default_instance();
};

// Line 10627: range 0000000017457B84-0000000017457BF8
proto_log::PlayerLogBodyAddFurniture *__cdecl proto_log::PlayerLogBodyAddFurniture::New(
        const proto_log::PlayerLogBodyAddFurniture *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyAddFurniture *v2; // rbx

  v2 = (proto_log::PlayerLogBodyAddFurniture *)operator new(0x30uLL);
  proto_log::PlayerLogBodyAddFurniture::PlayerLogBodyAddFurniture(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyAddFurniture>(arena, v2);
  return v2;
};

// Line 10635: range 0000000017457BFA-0000000017457C87
void __cdecl proto_log::PlayerLogBodyAddFurniture::Clear(proto_log::PlayerLogBodyAddFurniture *const this)
{
  memset(&this->furniture_id_, 0, 0x1CuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 10648: range 0000000017457C88-00000000174586BB
bool __cdecl proto_log::PlayerLogBodyAddFurniture::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyAddFurniture *const this,
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
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v13; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v18[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag"
                        " 128 8 7 p:10653";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddFurniture::MergePartialFromCodedStream;
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
                    &this->furniture_id_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->reason_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->add_num_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->left_num_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->home_level_) )
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
      goto LABEL_59;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v13 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v13 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v13->unknown_fields) );
failure:
  result = 0;
LABEL_59:
  if ( v18 == (char *)v2 )
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

// Line 10748: range 00000000174586BC-00000000174588DB
void __cdecl proto_log::PlayerLogBodyAddFurniture::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyAddFurniture *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::int64 v4; // rcx
  google::protobuf::int64 v5; // rcx
  google::protobuf::uint32 v6; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v8; // rax

  if ( proto_log::PlayerLogBodyAddFurniture::furniture_id(this) )
  {
    v2 = proto_log::PlayerLogBodyAddFurniture::furniture_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::reason(this) )
  {
    v3 = proto_log::PlayerLogBodyAddFurniture::reason(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::add_num(this) )
  {
    v4 = proto_log::PlayerLogBodyAddFurniture::add_num(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(3, v4, output);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::left_num(this) )
  {
    v5 = proto_log::PlayerLogBodyAddFurniture::left_num(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(4, v5, output);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::home_level(this) )
  {
    v6 = proto_log::PlayerLogBodyAddFurniture::home_level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(5, v6, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_23:
      v8 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v8->unknown_fields, output);
  }
};

// Line 10786: range 00000000174588DC-0000000017458B1B
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyAddFurniture::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyAddFurniture *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::int64 v5; // rcx
  google::protobuf::int64 v6; // rcx
  google::protobuf::uint32 v7; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rax

  if ( proto_log::PlayerLogBodyAddFurniture::furniture_id(this) )
  {
    v3 = proto_log::PlayerLogBodyAddFurniture::furniture_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::reason(this) )
  {
    v4 = proto_log::PlayerLogBodyAddFurniture::reason(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::add_num(this) )
  {
    v5 = proto_log::PlayerLogBodyAddFurniture::add_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, v5, target);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::left_num(this) )
  {
    v6 = proto_log::PlayerLogBodyAddFurniture::left_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, v6, target);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::home_level(this) )
  {
    v7 = proto_log::PlayerLogBodyAddFurniture::home_level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, v7, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_23:
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v9->unknown_fields, target);
  }
  return target;
};

// Line 10825: range 0000000017458B1C-0000000017458D6C
size_t __cdecl proto_log::PlayerLogBodyAddFurniture::ByteSizeLong(
        const proto_log::PlayerLogBodyAddFurniture *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  google::protobuf::int64 v5; // rax
  google::protobuf::int64 v6; // rax
  google::protobuf::uint32 v7; // eax
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
  if ( proto_log::PlayerLogBodyAddFurniture::furniture_id(this) )
  {
    v3 = proto_log::PlayerLogBodyAddFurniture::furniture_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::PlayerLogBodyAddFurniture::reason(this) )
  {
    v4 = proto_log::PlayerLogBodyAddFurniture::reason(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::PlayerLogBodyAddFurniture::add_num(this) )
  {
    v5 = proto_log::PlayerLogBodyAddFurniture::add_num(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v5) + 1;
  }
  if ( proto_log::PlayerLogBodyAddFurniture::left_num(this) )
  {
    v6 = proto_log::PlayerLogBodyAddFurniture::left_num(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v6) + 1;
  }
  if ( proto_log::PlayerLogBodyAddFurniture::home_level(this) )
  {
    v7 = proto_log::PlayerLogBodyAddFurniture::home_level(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v7) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 10876: range 0000000017458D6E-0000000017458FF7
void __cdecl proto_log::PlayerLogBodyAddFurniture::MergeFrom(
        proto_log::PlayerLogBodyAddFurniture *const this,
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
  const proto_log::PlayerLogBodyAddFurniture *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddFurniture::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      10878);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyAddFurniture const>(from);
  if ( source )
    proto_log::PlayerLogBodyAddFurniture::MergeFrom(this, source);
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

// Line 10891: range 0000000017458FF8-000000001745947D
void __cdecl proto_log::PlayerLogBodyAddFurniture::MergeFrom(
        proto_log::PlayerLogBodyAddFurniture *const this,
        const proto_log::PlayerLogBodyAddFurniture *from)
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
  google::protobuf::int64 v12; // rdx
  google::protobuf::int64 v13; // rdx
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyAddFurniture::MergeFrom;
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
      "./src/server_only/log/player/player_body_common.pb.cc",
      10893);
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
  if ( proto_log::PlayerLogBodyAddFurniture::furniture_id(from) )
  {
    v10 = proto_log::PlayerLogBodyAddFurniture::furniture_id(from);
    proto_log::PlayerLogBodyAddFurniture::set_furniture_id(this, v10);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::reason(from) )
  {
    v11 = proto_log::PlayerLogBodyAddFurniture::reason(from);
    proto_log::PlayerLogBodyAddFurniture::set_reason(this, v11);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::add_num(from) )
  {
    v12 = proto_log::PlayerLogBodyAddFurniture::add_num(from);
    proto_log::PlayerLogBodyAddFurniture::set_add_num(this, v12);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::left_num(from) )
  {
    v13 = proto_log::PlayerLogBodyAddFurniture::left_num(from);
    proto_log::PlayerLogBodyAddFurniture::set_left_num(this, v13);
  }
  if ( proto_log::PlayerLogBodyAddFurniture::home_level(from) )
  {
    v14 = proto_log::PlayerLogBodyAddFurniture::home_level(from);
    proto_log::PlayerLogBodyAddFurniture::set_home_level(this, v14);
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

// Line 10915: range 000000001745947E-00000000174594BB
void __cdecl proto_log::PlayerLogBodyAddFurniture::CopyFrom(
        proto_log::PlayerLogBodyAddFurniture *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyAddFurniture::Clear(this);
    proto_log::PlayerLogBodyAddFurniture::MergeFrom(this, from);
  }
};

// Line 10922: range 00000000174594BC-00000000174594F9
void __cdecl proto_log::PlayerLogBodyAddFurniture::CopyFrom(
        proto_log::PlayerLogBodyAddFurniture *const this,
        const proto_log::PlayerLogBodyAddFurniture *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyAddFurniture::Clear(this);
    proto_log::PlayerLogBodyAddFurniture::MergeFrom(this, from);
  }
};

// Line 10929: range 00000000174594FA-0000000017459508
bool __cdecl proto_log::PlayerLogBodyAddFurniture::IsInitialized(
        const proto_log::PlayerLogBodyAddFurniture *const this)
{
  return 1;
};

// Line 10933: range 000000001745950A-000000001745953B
void __cdecl proto_log::PlayerLogBodyAddFurniture::Swap(
        proto_log::PlayerLogBodyAddFurniture *const this,
        proto_log::PlayerLogBodyAddFurniture *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyAddFurniture::InternalSwap(this, other);
};

// Line 10937: range 000000001745953C-000000001745972C
void __cdecl proto_log::PlayerLogBodyAddFurniture::InternalSwap(
        proto_log::PlayerLogBodyAddFurniture *const this,
        proto_log::PlayerLogBodyAddFurniture *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->furniture_id_, &other->furniture_id_);
  std::swap<unsigned int>(&this->reason_, &other->reason_);
  std::swap<long>(&this->add_num_, &other->add_num_);
  std::swap<long>(&this->left_num_, &other->left_num_);
  std::swap<unsigned int>(&this->home_level_, &other->home_level_);
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

// Line 10948: range 000000001745972E-000000001745974E
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyAddFurniture::GetMetadata(
        const proto_log::PlayerLogBodyAddFurniture *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::`anonymous namespace'::file_level_metadata[14];
};

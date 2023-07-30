// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/player/player_head.pb.cc

// Line 85: range 00000000178B3213-00000000178B33DC
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/player/player_head.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
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

// Line 93: range 00000000178B33DD-00000000178B33F6
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 99: range 00000000178B33F7-00000000178B341B
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
    1);
};

// Line 105: range 00000000178B341C-00000000178B345B
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/player/player_head.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogHead>::DefaultConstruct(&proto_log::_PlayerLogHead_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogHead_default_instance_,
    (const void *)0x2DD660);
};

// Line 113: range 00000000178B345C-00000000178B3478
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 118: range 00000000178B3479-00000000178B34A8
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 140: range 00000000178B34A9-00000000178B34C2
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 146: range 00000000179267CA-00000000179267DD
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::AddDescriptors();
};

// Line 177: range 00000000178B34C4-00000000178B3583
void __cdecl proto_log::PlayerLogHead::PlayerLogHead(proto_log::PlayerLogHead *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogHead::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::InitDefaults();
  proto_log::PlayerLogHead::SharedCtor(this);
};

// Line 185: range 00000000178B3584-00000000178B3AE4
void __cdecl proto_log::PlayerLogHead::PlayerLogHead(
        proto_log::PlayerLogHead *const this,
        const proto_log::PlayerLogHead *from)
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
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogHead + 2);
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->time_, v4);
  v5 = proto_log::PlayerLogHead::time[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->time_, v6, from->time_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_name_, v7);
  v8 = proto_log::PlayerLogHead::action_name[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_name_, v9, from->action_name_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->sub_action_name_, v10);
  v11 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->sub_action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->sub_action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->sub_action_name_, v12, from->sub_action_name_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->region_name_, v13);
  v14 = proto_log::PlayerLogHead::region_name[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->region_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->region_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->region_name_, v15, from->region_name_);
  }
  v16 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->game_version_, v16);
  v17 = proto_log::PlayerLogHead::game_version[abi:cxx11](from);
  if ( std::string::size(v17) )
  {
    v18 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->game_version_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->game_version_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->game_version_, v18, from->game_version_);
  }
  v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->trans_no_, v19);
  v20 = proto_log::PlayerLogHead::trans_no[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->trans_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->trans_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->trans_no_, v21, from->trans_no_);
  }
  v22 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->uuid_, v22);
  v23 = proto_log::PlayerLogHead::uuid[abi:cxx11](from);
  if ( std::string::size(v23) )
  {
    v24 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->uuid_, v24, from->uuid_);
  }
  memcpy(&this->action_id_, &from->action_id_, 0x40uLL);
};

// Line 224: range 00000000178B3AE6-00000000178B3BFF
void __cdecl proto_log::PlayerLogHead::SharedCtor(proto_log::PlayerLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->sub_action_name_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->region_name_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->game_version_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->trans_no_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->uuid_, v7);
  memset(&this->action_id_, 0, 0x40uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 238: range 00000000178B3C00-00000000178B3C69
void __cdecl proto_log::PlayerLogHead::~PlayerLogHead(proto_log::PlayerLogHead *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogHead::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 238: range 00000000178B3C6A-00000000178B3C94
void __cdecl proto_log::PlayerLogHead::~PlayerLogHead(proto_log::PlayerLogHead *const this)
{
  proto_log::PlayerLogHead::~PlayerLogHead(this);
  operator delete(this, 0x90uLL);
};

// Line 243: range 00000000178B3C96-00000000178B3D52
void __cdecl proto_log::PlayerLogHead::SharedDtor(proto_log::PlayerLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->action_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->sub_action_name_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->region_name_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->game_version_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->trans_no_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->uuid_, v7);
};

// Line 253: range 00000000178B3D54-00000000178B3DA7
void __cdecl proto_log::PlayerLogHead::SetCachedSize(const proto_log::PlayerLogHead *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 258: range 00000000178B3DA8-00000000178B3DB9
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogHead::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 263: range 00000000178B3DBA-00000000178B3DC9
const proto_log::PlayerLogHead *__cdecl proto_log::PlayerLogHead::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::InitDefaults();
  return proto_log::PlayerLogHead::internal_default_instance();
};

// Line 268: range 00000000178B3DCA-00000000178B3E3E
proto_log::PlayerLogHead *__cdecl proto_log::PlayerLogHead::New(
        const proto_log::PlayerLogHead *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogHead *v2; // rbx

  v2 = (proto_log::PlayerLogHead *)operator new(0x90uLL);
  proto_log::PlayerLogHead::PlayerLogHead(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogHead>(arena, v2);
  return v2;
};

// Line 276: range 00000000178B3E40-00000000178B3F7B
void __cdecl proto_log::PlayerLogHead::Clear(proto_log::PlayerLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->action_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->sub_action_name_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->region_name_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->game_version_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->trans_no_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->uuid_, v7);
  memset(&this->action_id_, 0, 0x40uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 296: range 00000000178B3F7C-00000000178B5039
bool __cdecl proto_log::PlayerLogHead::MergePartialFromCodedStream(
        proto_log::PlayerLogHead *const this,
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
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v63; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v69[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:301";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogHead::MergePartialFromCodedStream;
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
            if ( (_BYTE)tag != 10 )
              break;
            v21 = proto_log::PlayerLogHead::mutable_time[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v21) )
              goto failure;
            v22 = proto_log::PlayerLogHead::time[abi:cxx11](this);
            v23 = std::string::length(v22);
            v24 = proto_log::PlayerLogHead::time[abi:cxx11](this);
            v25 = (google::protobuf::internal::WireFormatLite *)std::string::data(v24);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v25,
                                     (const char *)v23,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.time",
                                     v26) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->action_id_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 26 )
              goto handle_unusual;
            v27 = proto_log::PlayerLogHead::mutable_action_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v27) )
              goto failure;
            v28 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
            v29 = std::string::length(v28);
            v30 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
            v31 = (google::protobuf::internal::WireFormatLite *)std::string::data(v30);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v31,
                                     (const char *)v29,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.action_name",
                                     v32) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->sub_action_id_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v33 = proto_log::PlayerLogHead::mutable_sub_action_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v33) )
              goto failure;
            v34 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
            v35 = std::string::length(v34);
            v36 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
            v37 = (google::protobuf::internal::WireFormatLite *)std::string::data(v36);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v37,
                                     (const char *)v35,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.sub_action_name",
                                     v38) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 50 )
              goto handle_unusual;
            v39 = proto_log::PlayerLogHead::mutable_region_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v39) )
              goto failure;
            v40 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
            v41 = std::string::length(v40);
            v42 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
            v43 = (google::protobuf::internal::WireFormatLite *)std::string::data(v42);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v43,
                                     (const char *)v41,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.region_name",
                                     v44) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 58 )
              goto handle_unusual;
            v45 = proto_log::PlayerLogHead::mutable_game_version[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v45) )
              goto failure;
            v46 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
            v47 = std::string::length(v46);
            v48 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
            v49 = (google::protobuf::internal::WireFormatLite *)std::string::data(v48);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v49,
                                     (const char *)v47,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.game_version",
                                     v50) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->uid_) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 72 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->level_) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 80 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                    input,
                    &this->vip_point_) )
              goto failure;
            continue;
          case 11:
            if ( (_BYTE)tag != 88 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->vip_level_) )
              goto failure;
            continue;
          case 12:
            if ( (_BYTE)tag != 96 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->account_type_) )
              goto failure;
            continue;
          case 13:
            if ( (_BYTE)tag != 104 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                    input,
                    &this->tag_) )
              goto failure;
            continue;
          case 14:
            if ( (_BYTE)tag != 114 )
              goto handle_unusual;
            v51 = proto_log::PlayerLogHead::mutable_trans_no[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v51) )
              goto failure;
            v52 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
            v53 = std::string::length(v52);
            v54 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
            v55 = (google::protobuf::internal::WireFormatLite *)std::string::data(v54);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v55,
                                     (const char *)v53,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.trans_no",
                                     v56) )
              goto failure;
            continue;
          case 15:
            if ( (_BYTE)tag != 120 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->coin_1_) )
              goto failure;
            continue;
          case 16:
            if ( (_BYTE)tag != 0x80 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->coin_2_) )
              goto failure;
            continue;
          case 17:
            if ( (_BYTE)tag != 0x88 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->coin_3_) )
              goto failure;
            continue;
          case 18:
            if ( (_BYTE)tag != 0x92 )
              goto handle_unusual;
            v57 = proto_log::PlayerLogHead::mutable_uuid[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v57) )
              goto failure;
            v58 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
            v59 = std::string::length(v58);
            v60 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
            v61 = (google::protobuf::internal::WireFormatLite *)std::string::data(v60);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v61,
                                     (const char *)v59,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.uuid",
                                     v62) )
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
      goto LABEL_137;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v63 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v63 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v63->unknown_fields) );
failure:
  result = 0;
LABEL_137:
  if ( v69 == (char *)v2 )
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

// Line 592: range 00000000178B503A-00000000178B5733
void __cdecl proto_log::PlayerLogHead::SerializeWithCachedSizes(
        const proto_log::PlayerLogHead *const this,
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
  google::protobuf::uint32 v39; // ecx
  google::protobuf::uint32 v40; // ecx
  google::protobuf::uint64 v41; // rcx
  google::protobuf::uint32 v42; // ecx
  google::protobuf::uint32 v43; // ecx
  google::protobuf::uint64 v44; // rcx
  const std::string *v45; // rax
  const std::string *v46; // rax
  unsigned int v47; // ebx
  const std::string *v48; // rax
  google::protobuf::internal::WireFormatLite *v49; // rax
  const char *v50; // r8
  const std::string *v51; // rcx
  google::protobuf::int64 v52; // rcx
  google::protobuf::int64 v53; // rcx
  google::protobuf::int64 v54; // rcx
  const std::string *v55; // rax
  const std::string *v56; // rax
  unsigned int v57; // ebx
  const std::string *v58; // rax
  google::protobuf::internal::WireFormatLite *v59; // rax
  const char *v60; // r8
  const std::string *v61; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v63; // rax

  v2 = proto_log::PlayerLogHead::time[abi:cxx11](this);
  if ( std::string::size(v2) )
  {
    v3 = proto_log::PlayerLogHead::time[abi:cxx11](this);
    v4 = std::string::length(v3);
    v5 = proto_log::PlayerLogHead::time[abi:cxx11](this);
    v6 = (google::protobuf::internal::WireFormatLite *)std::string::data(v5);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v6,
      (const char *)v4,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.time",
      v7);
    v8 = proto_log::PlayerLogHead::time[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, v8, output);
  }
  if ( proto_log::PlayerLogHead::action_id(this) )
  {
    v9 = proto_log::PlayerLogHead::action_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v9, output);
  }
  v10 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.action_name",
      v15);
    v16 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v16, output);
  }
  if ( proto_log::PlayerLogHead::sub_action_id(this) )
  {
    v17 = proto_log::PlayerLogHead::sub_action_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v17, output);
  }
  v18 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.sub_action_name",
      v23);
    v24 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v24, output);
  }
  v25 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
  if ( std::string::size(v25) )
  {
    v26 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
    v27 = std::string::length(v26);
    v28 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
    v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v29,
      (const char *)v27,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.region_name",
      v30);
    v31 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, v31, output);
  }
  v32 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
  if ( std::string::size(v32) )
  {
    v33 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
    v34 = std::string::length(v33);
    v35 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
    v36 = (google::protobuf::internal::WireFormatLite *)std::string::data(v35);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v36,
      (const char *)v34,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.game_version",
      v37);
    v38 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(7LL, v38, output);
  }
  if ( proto_log::PlayerLogHead::uid(this) )
  {
    v39 = proto_log::PlayerLogHead::uid(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(8, v39, output);
  }
  if ( proto_log::PlayerLogHead::level(this) )
  {
    v40 = proto_log::PlayerLogHead::level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(9, v40, output);
  }
  if ( proto_log::PlayerLogHead::vip_point(this) )
  {
    v41 = proto_log::PlayerLogHead::vip_point(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(10, v41, output);
  }
  if ( proto_log::PlayerLogHead::vip_level(this) )
  {
    v42 = proto_log::PlayerLogHead::vip_level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(11, v42, output);
  }
  if ( proto_log::PlayerLogHead::account_type(this) )
  {
    v43 = proto_log::PlayerLogHead::account_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(12, v43, output);
  }
  if ( proto_log::PlayerLogHead::tag(this) )
  {
    v44 = proto_log::PlayerLogHead::tag(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(13, v44, output);
  }
  v45 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
  if ( std::string::size(v45) )
  {
    v46 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
    v47 = std::string::length(v46);
    v48 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
    v49 = (google::protobuf::internal::WireFormatLite *)std::string::data(v48);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v49,
      (const char *)v47,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.trans_no",
      v50);
    v51 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(14LL, v51, output);
  }
  if ( proto_log::PlayerLogHead::coin_1(this) )
  {
    v52 = proto_log::PlayerLogHead::coin_1(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(15, v52, output);
  }
  if ( proto_log::PlayerLogHead::coin_2(this) )
  {
    v53 = proto_log::PlayerLogHead::coin_2(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(16, v53, output);
  }
  if ( proto_log::PlayerLogHead::coin_3(this) )
  {
    v54 = proto_log::PlayerLogHead::coin_3(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(17, v54, output);
  }
  v55 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
  if ( std::string::size(v55) )
  {
    v56 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
    v57 = std::string::length(v56);
    v58 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
    v59 = (google::protobuf::internal::WireFormatLite *)std::string::data(v58);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v59,
      (const char *)v57,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.uuid",
      v60);
    v61 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(18LL, v61, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_49;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v63 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_49:
      v63 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v63->unknown_fields, output);
  }
};

// Line 730: range 00000000178B5734-00000000178B5E81
google::protobuf::uint8 *__cdecl proto_log::PlayerLogHead::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogHead *const this,
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
  const std::string *v11; // rax
  const std::string *v12; // rax
  unsigned int v13; // ebx
  const std::string *v14; // rax
  google::protobuf::internal::WireFormatLite *v15; // rax
  const char *v16; // r8
  const std::string *v17; // rcx
  google::protobuf::uint32 v18; // ecx
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
  const std::string *v33; // rax
  const std::string *v34; // rax
  unsigned int v35; // ebx
  const std::string *v36; // rax
  google::protobuf::internal::WireFormatLite *v37; // rax
  const char *v38; // r8
  const std::string *v39; // rcx
  google::protobuf::uint32 v40; // ecx
  google::protobuf::uint32 v41; // ecx
  google::protobuf::uint64 v42; // rcx
  google::protobuf::uint32 v43; // ecx
  google::protobuf::uint32 v44; // ecx
  google::protobuf::uint64 v45; // rcx
  const std::string *v46; // rax
  const std::string *v47; // rax
  unsigned int v48; // ebx
  const std::string *v49; // rax
  google::protobuf::internal::WireFormatLite *v50; // rax
  const char *v51; // r8
  const std::string *v52; // rcx
  google::protobuf::int64 v53; // rcx
  google::protobuf::int64 v54; // rcx
  google::protobuf::int64 v55; // rcx
  const std::string *v56; // rax
  const std::string *v57; // rax
  unsigned int v58; // ebx
  const std::string *v59; // rax
  google::protobuf::internal::WireFormatLite *v60; // rax
  const char *v61; // r8
  const std::string *v62; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v64; // rax

  v3 = proto_log::PlayerLogHead::time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogHead::time[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::PlayerLogHead::time[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.time",
      v8);
    v9 = proto_log::PlayerLogHead::time[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(1, v9, target);
  }
  if ( proto_log::PlayerLogHead::action_id(this) )
  {
    v10 = proto_log::PlayerLogHead::action_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v10, target);
  }
  v11 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.action_name",
      v16);
    v17 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v17, target);
  }
  if ( proto_log::PlayerLogHead::sub_action_id(this) )
  {
    v18 = proto_log::PlayerLogHead::sub_action_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v18, target);
  }
  v19 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
  if ( std::string::size(v19) )
  {
    v20 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
    v21 = std::string::length(v20);
    v22 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
    v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v23,
      (const char *)v21,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.sub_action_name",
      v24);
    v25 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v25, target);
  }
  v26 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
  if ( std::string::size(v26) )
  {
    v27 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
    v28 = std::string::length(v27);
    v29 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
    v30 = (google::protobuf::internal::WireFormatLite *)std::string::data(v29);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v30,
      (const char *)v28,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.region_name",
      v31);
    v32 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(6, v32, target);
  }
  v33 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
  if ( std::string::size(v33) )
  {
    v34 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
    v35 = std::string::length(v34);
    v36 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
    v37 = (google::protobuf::internal::WireFormatLite *)std::string::data(v36);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v37,
      (const char *)v35,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.game_version",
      v38);
    v39 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(7, v39, target);
  }
  if ( proto_log::PlayerLogHead::uid(this) )
  {
    v40 = proto_log::PlayerLogHead::uid(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, v40, target);
  }
  if ( proto_log::PlayerLogHead::level(this) )
  {
    v41 = proto_log::PlayerLogHead::level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, v41, target);
  }
  if ( proto_log::PlayerLogHead::vip_point(this) )
  {
    v42 = proto_log::PlayerLogHead::vip_point(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(10, v42, target);
  }
  if ( proto_log::PlayerLogHead::vip_level(this) )
  {
    v43 = proto_log::PlayerLogHead::vip_level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, v43, target);
  }
  if ( proto_log::PlayerLogHead::account_type(this) )
  {
    v44 = proto_log::PlayerLogHead::account_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, v44, target);
  }
  if ( proto_log::PlayerLogHead::tag(this) )
  {
    v45 = proto_log::PlayerLogHead::tag(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(13, v45, target);
  }
  v46 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
  if ( std::string::size(v46) )
  {
    v47 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
    v48 = std::string::length(v47);
    v49 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
    v50 = (google::protobuf::internal::WireFormatLite *)std::string::data(v49);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v50,
      (const char *)v48,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.trans_no",
      v51);
    v52 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(14, v52, target);
  }
  if ( proto_log::PlayerLogHead::coin_1(this) )
  {
    v53 = proto_log::PlayerLogHead::coin_1(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(15, v53, target);
  }
  if ( proto_log::PlayerLogHead::coin_2(this) )
  {
    v54 = proto_log::PlayerLogHead::coin_2(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(16, v54, target);
  }
  if ( proto_log::PlayerLogHead::coin_3(this) )
  {
    v55 = proto_log::PlayerLogHead::coin_3(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(17, v55, target);
  }
  v56 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
  if ( std::string::size(v56) )
  {
    v57 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
    v58 = std::string::length(v57);
    v59 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
    v60 = (google::protobuf::internal::WireFormatLite *)std::string::data(v59);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v60,
      (const char *)v58,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHead.uuid",
      v61);
    v62 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(18, v62, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_49;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v64 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_49:
      v64 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v64->unknown_fields, target);
  }
  return target;
};

// Line 876: range 00000000178B5E82-00000000178B638B
size_t __cdecl proto_log::PlayerLogHead::ByteSizeLong(const proto_log::PlayerLogHead *const this)
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
  google::protobuf::uint64 v21; // rax
  google::protobuf::uint32 v22; // eax
  google::protobuf::uint32 v23; // eax
  google::protobuf::uint64 v24; // rax
  google::protobuf::int64 v25; // rax
  google::protobuf::int64 v26; // rax
  google::protobuf::int64 v27; // rax
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
  v3 = proto_log::PlayerLogHead::time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogHead::time[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::PlayerLogHead::action_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::PlayerLogHead::region_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  v11 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogHead::game_version[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v12) + 1;
  }
  v13 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
  if ( std::string::size(v13) )
  {
    v14 = proto_log::PlayerLogHead::trans_no[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v14) + 1;
  }
  v15 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
  if ( std::string::size(v15) )
  {
    v16 = proto_log::PlayerLogHead::uuid[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v16) + 2;
  }
  if ( proto_log::PlayerLogHead::action_id(this) )
  {
    v17 = proto_log::PlayerLogHead::action_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v17) + 1;
  }
  if ( proto_log::PlayerLogHead::sub_action_id(this) )
  {
    v18 = proto_log::PlayerLogHead::sub_action_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v18) + 1;
  }
  if ( proto_log::PlayerLogHead::uid(this) )
  {
    v19 = proto_log::PlayerLogHead::uid(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v19) + 1;
  }
  if ( proto_log::PlayerLogHead::level(this) )
  {
    v20 = proto_log::PlayerLogHead::level(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v20) + 1;
  }
  if ( proto_log::PlayerLogHead::vip_point(this) )
  {
    v21 = proto_log::PlayerLogHead::vip_point(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt64Size(v21) + 1;
  }
  if ( proto_log::PlayerLogHead::vip_level(this) )
  {
    v22 = proto_log::PlayerLogHead::vip_level(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v22) + 1;
  }
  if ( proto_log::PlayerLogHead::account_type(this) )
  {
    v23 = proto_log::PlayerLogHead::account_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v23) + 1;
  }
  if ( proto_log::PlayerLogHead::tag(this) )
  {
    v24 = proto_log::PlayerLogHead::tag(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt64Size(v24) + 1;
  }
  if ( proto_log::PlayerLogHead::coin_1(this) )
  {
    v25 = proto_log::PlayerLogHead::coin_1(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v25) + 1;
  }
  if ( proto_log::PlayerLogHead::coin_2(this) )
  {
    v26 = proto_log::PlayerLogHead::coin_2(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v26) + 2;
  }
  if ( proto_log::PlayerLogHead::coin_3(this) )
  {
    v27 = proto_log::PlayerLogHead::coin_3(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v27) + 2;
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

// Line 1018: range 00000000178B638C-00000000178B6615
void __cdecl proto_log::PlayerLogHead::MergeFrom(
        proto_log::PlayerLogHead *const this,
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
  const proto_log::PlayerLogHead *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogHead::MergeFrom;
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
      "./src/server_only/log/player/player_head.pb.cc",
      1020);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogHead const>(from);
  if ( source )
    proto_log::PlayerLogHead::MergeFrom(this, source);
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

// Line 1033: range 00000000178B6616-00000000178B6F33
void __cdecl proto_log::PlayerLogHead::MergeFrom(
        proto_log::PlayerLogHead *const this,
        const proto_log::PlayerLogHead *from)
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
  google::protobuf::uint64 v28; // rdx
  google::protobuf::uint32 v29; // edx
  google::protobuf::uint32 v30; // edx
  google::protobuf::uint64 v31; // rdx
  google::protobuf::int64 v32; // rdx
  google::protobuf::int64 v33; // rdx
  google::protobuf::int64 v34; // rdx
  char v35; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v37[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogHead::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v35 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_head.pb.cc",
      1035);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v35 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v35 )
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
  v10 = proto_log::PlayerLogHead::time[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->time_, v11, from->time_);
  }
  v12 = proto_log::PlayerLogHead::action_name[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_name_, v13, from->action_name_);
  }
  v14 = proto_log::PlayerLogHead::sub_action_name[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->sub_action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->sub_action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->sub_action_name_, v15, from->sub_action_name_);
  }
  v16 = proto_log::PlayerLogHead::region_name[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->region_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->region_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->region_name_, v17, from->region_name_);
  }
  v18 = proto_log::PlayerLogHead::game_version[abi:cxx11](from);
  if ( std::string::size(v18) )
  {
    v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->game_version_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->game_version_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->game_version_, v19, from->game_version_);
  }
  v20 = proto_log::PlayerLogHead::trans_no[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->trans_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->trans_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->trans_no_, v21, from->trans_no_);
  }
  v22 = proto_log::PlayerLogHead::uuid[abi:cxx11](from);
  if ( std::string::size(v22) )
  {
    v23 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->uuid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->uuid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->uuid_, v23, from->uuid_);
  }
  if ( proto_log::PlayerLogHead::action_id(from) )
  {
    v24 = proto_log::PlayerLogHead::action_id(from);
    proto_log::PlayerLogHead::set_action_id(this, v24);
  }
  if ( proto_log::PlayerLogHead::sub_action_id(from) )
  {
    v25 = proto_log::PlayerLogHead::sub_action_id(from);
    proto_log::PlayerLogHead::set_sub_action_id(this, v25);
  }
  if ( proto_log::PlayerLogHead::uid(from) )
  {
    v26 = proto_log::PlayerLogHead::uid(from);
    proto_log::PlayerLogHead::set_uid(this, v26);
  }
  if ( proto_log::PlayerLogHead::level(from) )
  {
    v27 = proto_log::PlayerLogHead::level(from);
    proto_log::PlayerLogHead::set_level(this, v27);
  }
  if ( proto_log::PlayerLogHead::vip_point(from) )
  {
    v28 = proto_log::PlayerLogHead::vip_point(from);
    proto_log::PlayerLogHead::set_vip_point(this, v28);
  }
  if ( proto_log::PlayerLogHead::vip_level(from) )
  {
    v29 = proto_log::PlayerLogHead::vip_level(from);
    proto_log::PlayerLogHead::set_vip_level(this, v29);
  }
  if ( proto_log::PlayerLogHead::account_type(from) )
  {
    v30 = proto_log::PlayerLogHead::account_type(from);
    proto_log::PlayerLogHead::set_account_type(this, v30);
  }
  if ( proto_log::PlayerLogHead::tag(from) )
  {
    v31 = proto_log::PlayerLogHead::tag(from);
    proto_log::PlayerLogHead::set_tag(this, v31);
  }
  if ( proto_log::PlayerLogHead::coin_1(from) )
  {
    v32 = proto_log::PlayerLogHead::coin_1(from);
    proto_log::PlayerLogHead::set_coin_1(this, v32);
  }
  if ( proto_log::PlayerLogHead::coin_2(from) )
  {
    v33 = proto_log::PlayerLogHead::coin_2(from);
    proto_log::PlayerLogHead::set_coin_2(this, v33);
  }
  if ( proto_log::PlayerLogHead::coin_3(from) )
  {
    v34 = proto_log::PlayerLogHead::coin_3(from);
    proto_log::PlayerLogHead::set_coin_3(this, v34);
  }
  if ( v37 == (char *)v2 )
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

// Line 1103: range 00000000178B6F34-00000000178B6F71
void __cdecl proto_log::PlayerLogHead::CopyFrom(
        proto_log::PlayerLogHead *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogHead::Clear(this);
    proto_log::PlayerLogHead::MergeFrom(this, from);
  }
};

// Line 1110: range 00000000178B6F72-00000000178B6FAF
void __cdecl proto_log::PlayerLogHead::CopyFrom(
        proto_log::PlayerLogHead *const this,
        const proto_log::PlayerLogHead *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogHead::Clear(this);
    proto_log::PlayerLogHead::MergeFrom(this, from);
  }
};

// Line 1117: range 00000000178B6FB0-00000000178B6FBE
bool __cdecl proto_log::PlayerLogHead::IsInitialized(const proto_log::PlayerLogHead *const this)
{
  return 1;
};

// Line 1121: range 00000000178B6FC0-00000000178B6FF1
void __cdecl proto_log::PlayerLogHead::Swap(proto_log::PlayerLogHead *const this, proto_log::PlayerLogHead *other)
{
  if ( other != this )
    proto_log::PlayerLogHead::InternalSwap(this, other);
};

// Line 1125: range 00000000178B6FF2-00000000178B747D
void __cdecl proto_log::PlayerLogHead::InternalSwap(
        proto_log::PlayerLogHead *const this,
        proto_log::PlayerLogHead *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-B0h]

  std::swap<std::string *>(&this->time_.ptr_, &other->time_.ptr_);
  std::swap<std::string *>(&this->action_name_.ptr_, &other->action_name_.ptr_);
  std::swap<std::string *>(&this->sub_action_name_.ptr_, &other->sub_action_name_.ptr_);
  std::swap<std::string *>(&this->region_name_.ptr_, &other->region_name_.ptr_);
  std::swap<std::string *>(&this->game_version_.ptr_, &other->game_version_.ptr_);
  std::swap<std::string *>(&this->trans_no_.ptr_, &other->trans_no_.ptr_);
  std::swap<std::string *>(&this->uuid_.ptr_, &other->uuid_.ptr_);
  std::swap<unsigned int>(&this->action_id_, &other->action_id_);
  std::swap<unsigned int>(&this->sub_action_id_, &other->sub_action_id_);
  std::swap<unsigned int>(&this->uid_, &other->uid_);
  std::swap<unsigned int>(&this->level_, &other->level_);
  std::swap<unsigned long>(&this->vip_point_, &other->vip_point_);
  std::swap<unsigned int>(&this->vip_level_, &other->vip_level_);
  std::swap<unsigned int>(&this->account_type_, &other->account_type_);
  std::swap<unsigned long>(&this->tag_, &other->tag_);
  std::swap<long>(&this->coin_1_, &other->coin_1_);
  std::swap<long>(&this->coin_2_, &other->coin_2_);
  std::swap<long>(&this->coin_3_, &other->coin_3_);
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

// Line 1149: range 00000000178B747E-00000000178B749E
google::protobuf::Metadata __cdecl proto_log::PlayerLogHead::GetMetadata(const proto_log::PlayerLogHead *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0];
};

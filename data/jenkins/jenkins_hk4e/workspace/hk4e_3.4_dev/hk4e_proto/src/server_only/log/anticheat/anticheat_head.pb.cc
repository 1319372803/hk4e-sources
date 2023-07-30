// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/anticheat/anticheat_head.pb.cc

// Line 79: range 000000001500295F-0000000015002B28
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/anticheat/anticheat_head.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
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

// Line 87: range 0000000015002B29-0000000015002B42
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 93: range 0000000015002B43-0000000015002B67
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
    1);
};

// Line 99: range 0000000015002B68-0000000015002BA7
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/anticheat/anticheat_head.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::AntiCheatLogHead>::DefaultConstruct(&proto_log::_AntiCheatLogHead_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_AntiCheatLogHead_default_instance_,
    (const void *)0x2DD660);
};

// Line 107: range 0000000015002BA8-0000000015002BC4
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 112: range 0000000015002BC5-0000000015002BF4
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 131: range 0000000015002BF5-0000000015002C0E
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 137: range 00000000160DEE10-00000000160DEE23
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::AddDescriptors();
};

// Line 162: range 0000000015002C10-0000000015002CEF
void __cdecl proto_log::AntiCheatLogHead::AntiCheatLogHead(proto_log::AntiCheatLogHead *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::AntiCheatLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<unsigned int>::RepeatedField(&this->mp_teammate_list_);
  if ( this != proto_log::AntiCheatLogHead::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::InitDefaults();
  proto_log::AntiCheatLogHead::SharedCtor(this);
};

// Line 170: range 0000000015002CF0-000000001500307F
void __cdecl proto_log::AntiCheatLogHead::AntiCheatLogHead(
        proto_log::AntiCheatLogHead *const this,
        const proto_log::AntiCheatLogHead *from)
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
  v2 = (int (**)(...))(&`vtable for'proto_log::AntiCheatLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<unsigned int>::RepeatedField(&this->mp_teammate_list_, &from->mp_teammate_list_);
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->time_, v4);
  v5 = proto_log::AntiCheatLogHead::time[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->time_, v6, from->time_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->region_name_, v7);
  v8 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->region_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->region_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->region_name_, v9, from->region_name_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->game_version_, v10);
  v11 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->game_version_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->game_version_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->game_version_, v12, from->game_version_);
  }
  memcpy(&this->action_id_, &from->action_id_, 0x24uLL);
};

// Line 194: range 0000000015003080-000000001500313C
void __cdecl proto_log::AntiCheatLogHead::SharedCtor(proto_log::AntiCheatLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->region_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->game_version_, v3);
  memset(&this->action_id_, 0, 0x24uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 204: range 000000001500313E-00000000150031B7
void __cdecl proto_log::AntiCheatLogHead::~AntiCheatLogHead(proto_log::AntiCheatLogHead *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::AntiCheatLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::AntiCheatLogHead::SharedDtor(this);
  google::protobuf::RepeatedField<unsigned int>::~RepeatedField(&this->mp_teammate_list_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 204: range 00000000150031B8-00000000150031E2
void __cdecl proto_log::AntiCheatLogHead::~AntiCheatLogHead(proto_log::AntiCheatLogHead *const this)
{
  proto_log::AntiCheatLogHead::~AntiCheatLogHead(this);
  operator delete(this, 0x68uLL);
};

// Line 209: range 00000000150031E4-0000000015003240
void __cdecl proto_log::AntiCheatLogHead::SharedDtor(proto_log::AntiCheatLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->region_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->game_version_, v3);
};

// Line 215: range 0000000015003242-0000000015003298
void __cdecl proto_log::AntiCheatLogHead::SetCachedSize(const proto_log::AntiCheatLogHead *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 220: range 000000001500329A-00000000150032AB
const google::protobuf::Descriptor *__cdecl proto_log::AntiCheatLogHead::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 225: range 00000000150032AC-00000000150032BB
const proto_log::AntiCheatLogHead *__cdecl proto_log::AntiCheatLogHead::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::InitDefaults();
  return proto_log::AntiCheatLogHead::internal_default_instance();
};

// Line 230: range 00000000150032BC-0000000015003330
proto_log::AntiCheatLogHead *__cdecl proto_log::AntiCheatLogHead::New(
        const proto_log::AntiCheatLogHead *const this,
        google::protobuf::Arena *arena)
{
  proto_log::AntiCheatLogHead *v2; // rbx

  v2 = (proto_log::AntiCheatLogHead *)operator new(0x68uLL);
  proto_log::AntiCheatLogHead::AntiCheatLogHead(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::AntiCheatLogHead>(arena, v2);
  return v2;
};

// Line 238: range 0000000015003332-000000001500341D
void __cdecl proto_log::AntiCheatLogHead::Clear(proto_log::AntiCheatLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  google::protobuf::RepeatedField<unsigned int>::Clear(&this->mp_teammate_list_);
  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->region_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->game_version_, v3);
  memset(&this->action_id_, 0, 0x24uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 255: range 000000001500341E-00000000150041DD
bool __cdecl proto_log::AntiCheatLogHead::MergePartialFromCodedStream(
        proto_log::AntiCheatLogHead *const this,
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
  google::protobuf::RepeatedField<unsigned int> *v31; // rdx
  google::protobuf::RepeatedField<unsigned int> *v32; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v33; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v38[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:260";
  *(_QWORD *)(v2 + 16) = proto_log::AntiCheatLogHead::MergePartialFromCodedStream;
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
          if ( (_BYTE)tag != 10 )
            goto handle_unusual;
          v13 = proto_log::AntiCheatLogHead::mutable_time[abi:cxx11](this);
          if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
            goto failure;
          v14 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
          v15 = std::string::length(v14);
          v16 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
          v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
          if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                   v17,
                                   (const char *)v15,
                                   0,
                                   (google::protobuf::internal::WireFormatLite::Operation)"proto_log.AntiCheatLogHead.time",
                                   v18) )
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
          v19 = proto_log::AntiCheatLogHead::mutable_region_name[abi:cxx11](this);
          if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
            goto failure;
          v20 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
          v21 = std::string::length(v20);
          v22 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
          v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
          if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                   v23,
                                   (const char *)v21,
                                   0,
                                   (google::protobuf::internal::WireFormatLite::Operation)"proto_log.AntiCheatLogHead.region_name",
                                   v24) )
            goto failure;
          continue;
        case 4:
          if ( (_BYTE)tag != 34 )
            goto handle_unusual;
          v25 = proto_log::AntiCheatLogHead::mutable_game_version[abi:cxx11](this);
          if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
            goto failure;
          v26 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
          v27 = std::string::length(v26);
          v28 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
          v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
          if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                   v29,
                                   (const char *)v27,
                                   0,
                                   (google::protobuf::internal::WireFormatLite::Operation)"proto_log.AntiCheatLogHead.game_version",
                                   v30) )
            goto failure;
          continue;
        case 5:
          if ( (_BYTE)tag != 40 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->uid_) )
            goto failure;
          continue;
        case 6:
          if ( (_BYTE)tag != 48 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->level_) )
            goto failure;
          continue;
        case 7:
          if ( (_BYTE)tag != 56 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                  input,
                  &this->vip_point_) )
            goto failure;
          continue;
        case 8:
          if ( (_BYTE)tag != 64 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->vip_level_) )
            goto failure;
          continue;
        case 9:
          if ( (_BYTE)tag != 72 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<bool,(google::protobuf::internal::WireFormatLite::FieldType)8>(
                  input,
                  &this->is_in_mp_) )
            goto failure;
          continue;
        case 10:
          if ( (_BYTE)tag == 82 )
          {
            v31 = proto_log::AntiCheatLogHead::mutable_mp_teammate_list(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    v31) )
              goto failure;
          }
          else
          {
            if ( (_BYTE)tag != 80 )
              goto handle_unusual;
            v32 = proto_log::AntiCheatLogHead::mutable_mp_teammate_list(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    1,
                    0x52u,
                    input,
                    v32) )
              goto failure;
          }
          break;
        case 11:
          if ( (_BYTE)tag != 88 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->scene_id_) )
            goto failure;
          continue;
        case 12:
          if ( (_BYTE)tag != 96 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->tag_) )
            goto failure;
          continue;
        default:
          goto handle_unusual;
      }
    }
handle_unusual:
    if ( !tag )
    {
      result = 1;
      goto LABEL_93;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v33 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v33 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v33->unknown_fields) );
failure:
  result = 0;
LABEL_93:
  if ( v38 == (char *)v2 )
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

// Line 464: range 00000000150041DE-00000000150046E0
void __cdecl proto_log::AntiCheatLogHead::SerializeWithCachedSizes(
        const proto_log::AntiCheatLogHead *const this,
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
  const std::string *v17; // rax
  const std::string *v18; // rax
  unsigned int v19; // ebx
  const std::string *v20; // rax
  google::protobuf::internal::WireFormatLite *v21; // rax
  const char *v22; // r8
  const std::string *v23; // rcx
  google::protobuf::uint32 v24; // ecx
  google::protobuf::uint32 v25; // ecx
  google::protobuf::uint64 v26; // rcx
  google::protobuf::uint32 v27; // ecx
  bool v28; // al
  google::protobuf::uint32 v29; // edx
  google::protobuf::uint32 v30; // ecx
  google::protobuf::uint32 v31; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v33; // rax
  int i; // [rsp+1Ch] [rbp-44h]
  int n; // [rsp+24h] [rbp-3Ch]

  v2 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
  if ( std::string::size(v2) )
  {
    v3 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
    v4 = std::string::length(v3);
    v5 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
    v6 = (google::protobuf::internal::WireFormatLite *)std::string::data(v5);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v6,
      (const char *)v4,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.AntiCheatLogHead.time",
      v7);
    v8 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, v8, output);
  }
  if ( proto_log::AntiCheatLogHead::action_id(this) )
  {
    v9 = proto_log::AntiCheatLogHead::action_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v9, output);
  }
  v10 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.AntiCheatLogHead.region_name",
      v15);
    v16 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v16, output);
  }
  v17 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
    v19 = std::string::length(v18);
    v20 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
    v21 = (google::protobuf::internal::WireFormatLite *)std::string::data(v20);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v21,
      (const char *)v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.AntiCheatLogHead.game_version",
      v22);
    v23 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v23, output);
  }
  if ( proto_log::AntiCheatLogHead::uid(this) )
  {
    v24 = proto_log::AntiCheatLogHead::uid(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(5, v24, output);
  }
  if ( proto_log::AntiCheatLogHead::level(this) )
  {
    v25 = proto_log::AntiCheatLogHead::level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(6, v25, output);
  }
  if ( proto_log::AntiCheatLogHead::vip_point(this) )
  {
    v26 = proto_log::AntiCheatLogHead::vip_point(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(7, v26, output);
  }
  if ( proto_log::AntiCheatLogHead::vip_level(this) )
  {
    v27 = proto_log::AntiCheatLogHead::vip_level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(8, v27, output);
  }
  if ( proto_log::AntiCheatLogHead::is_in_mp(this) )
  {
    v28 = proto_log::AntiCheatLogHead::is_in_mp(this);
    google::protobuf::internal::WireFormatLite::WriteBool(9, v28, output);
  }
  if ( proto_log::AntiCheatLogHead::mp_teammate_list_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(10, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_mp_teammate_list_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_mp_teammate_list_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_mp_teammate_list_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_mp_teammate_list_cached_byte_size_);
  }
  i = 0;
  n = proto_log::AntiCheatLogHead::mp_teammate_list_size(this);
  while ( i < n )
  {
    v29 = proto_log::AntiCheatLogHead::mp_teammate_list(this, i);
    google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(v29, output);
    ++i;
  }
  if ( proto_log::AntiCheatLogHead::scene_id(this) )
  {
    v30 = proto_log::AntiCheatLogHead::scene_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(11, v30, output);
  }
  if ( proto_log::AntiCheatLogHead::tag(this) )
  {
    v31 = proto_log::AntiCheatLogHead::tag(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(12, v31, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_42;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v33 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_42:
      v33 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v33->unknown_fields, output);
  }
};

// Line 558: range 00000000150046E2-0000000015004BFE
google::protobuf::uint8 *__cdecl proto_log::AntiCheatLogHead::InternalSerializeWithCachedSizesToArray(
        const proto_log::AntiCheatLogHead *const this,
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
  const std::string *v18; // rax
  const std::string *v19; // rax
  unsigned int v20; // ebx
  const std::string *v21; // rax
  google::protobuf::internal::WireFormatLite *v22; // rax
  const char *v23; // r8
  const std::string *v24; // rcx
  google::protobuf::uint32 v25; // ecx
  google::protobuf::uint32 v26; // ecx
  google::protobuf::uint64 v27; // rcx
  google::protobuf::uint32 v28; // ecx
  bool v29; // al
  google::protobuf::uint8 *v30; // rax
  google::protobuf::uint32 v31; // ecx
  google::protobuf::uint32 v32; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v34; // rax
  google::protobuf::uint8 *targetb; // [rsp+8h] [rbp-58h]

  v3 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.AntiCheatLogHead.time",
      v8);
    v9 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(1, v9, target);
  }
  if ( proto_log::AntiCheatLogHead::action_id(this) )
  {
    v10 = proto_log::AntiCheatLogHead::action_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v10, target);
  }
  v11 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.AntiCheatLogHead.region_name",
      v16);
    v17 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v17, target);
  }
  v18 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.AntiCheatLogHead.game_version",
      v23);
    v24 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v24, target);
  }
  if ( proto_log::AntiCheatLogHead::uid(this) )
  {
    v25 = proto_log::AntiCheatLogHead::uid(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, v25, target);
  }
  if ( proto_log::AntiCheatLogHead::level(this) )
  {
    v26 = proto_log::AntiCheatLogHead::level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, v26, target);
  }
  if ( proto_log::AntiCheatLogHead::vip_point(this) )
  {
    v27 = proto_log::AntiCheatLogHead::vip_point(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, v27, target);
  }
  if ( proto_log::AntiCheatLogHead::vip_level(this) )
  {
    v28 = proto_log::AntiCheatLogHead::vip_level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, v28, target);
  }
  if ( proto_log::AntiCheatLogHead::is_in_mp(this) )
  {
    v29 = proto_log::AntiCheatLogHead::is_in_mp(this);
    target = google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, v29, target);
  }
  if ( proto_log::AntiCheatLogHead::mp_teammate_list_size(this) > 0 )
  {
    targetb = google::protobuf::internal::WireFormatLite::WriteTagToArray(10, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_mp_teammate_list_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_mp_teammate_list_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_mp_teammate_list_cached_byte_size_);
    }
    v30 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
            this->_mp_teammate_list_cached_byte_size_,
            targetb);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32NoTagToArray(&this->mp_teammate_list_, v30);
  }
  if ( proto_log::AntiCheatLogHead::scene_id(this) )
  {
    v31 = proto_log::AntiCheatLogHead::scene_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, v31, target);
  }
  if ( proto_log::AntiCheatLogHead::tag(this) )
  {
    v32 = proto_log::AntiCheatLogHead::tag(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, v32, target);
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
      v34 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_39:
      v34 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v34->unknown_fields, target);
  }
  return target;
};

// Line 658: range 0000000015004C00-0000000015004FFB
size_t __cdecl proto_log::AntiCheatLogHead::ByteSizeLong(const proto_log::AntiCheatLogHead *const this)
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
  google::protobuf::uint64 v11; // rax
  google::protobuf::uint32 v12; // eax
  google::protobuf::uint32 v13; // eax
  google::protobuf::uint32 v14; // eax
  google::protobuf::uint32 v15; // eax
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
  data_size = google::protobuf::internal::WireFormatLite::UInt32Size(&this->mp_teammate_list_);
  if ( data_size )
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(data_size) + 1;
  cached_size_0 = google::protobuf::internal::ToCachedSize(data_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_mp_teammate_list_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_mp_teammate_list_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_mp_teammate_list_cached_byte_size_);
  }
  this->_mp_teammate_list_cached_byte_size_ = cached_size_0;
  total_sizea = data_size + total_size;
  v3 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::AntiCheatLogHead::time[abi:cxx11](this);
    total_sizea += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](this);
    total_sizea += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](this);
    total_sizea += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  if ( proto_log::AntiCheatLogHead::action_id(this) )
  {
    v9 = proto_log::AntiCheatLogHead::action_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v9) + 1;
  }
  if ( proto_log::AntiCheatLogHead::uid(this) )
  {
    v10 = proto_log::AntiCheatLogHead::uid(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v10) + 1;
  }
  if ( proto_log::AntiCheatLogHead::vip_point(this) )
  {
    v11 = proto_log::AntiCheatLogHead::vip_point(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt64Size(v11) + 1;
  }
  if ( proto_log::AntiCheatLogHead::level(this) )
  {
    v12 = proto_log::AntiCheatLogHead::level(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v12) + 1;
  }
  if ( proto_log::AntiCheatLogHead::vip_level(this) )
  {
    v13 = proto_log::AntiCheatLogHead::vip_level(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v13) + 1;
  }
  if ( proto_log::AntiCheatLogHead::is_in_mp(this) )
    total_sizea += 2LL;
  if ( proto_log::AntiCheatLogHead::scene_id(this) )
  {
    v14 = proto_log::AntiCheatLogHead::scene_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v14) + 1;
  }
  if ( proto_log::AntiCheatLogHead::tag(this) )
  {
    v15 = proto_log::AntiCheatLogHead::tag(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v15) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizea);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizea;
};

// Line 765: range 0000000015004FFC-0000000015005285
void __cdecl proto_log::AntiCheatLogHead::MergeFrom(
        proto_log::AntiCheatLogHead *const this,
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
  const proto_log::AntiCheatLogHead *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::AntiCheatLogHead::MergeFrom;
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
      "./src/server_only/log/anticheat/anticheat_head.pb.cc",
      767);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::AntiCheatLogHead const>(from);
  if ( source )
    proto_log::AntiCheatLogHead::MergeFrom(this, source);
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

// Line 780: range 0000000015005286-000000001500593A
void __cdecl proto_log::AntiCheatLogHead::MergeFrom(
        proto_log::AntiCheatLogHead *const this,
        const proto_log::AntiCheatLogHead *from)
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
  google::protobuf::uint64 v18; // rdx
  google::protobuf::uint32 v19; // edx
  google::protobuf::uint32 v20; // edx
  bool v21; // dl
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
  *(_QWORD *)(v2 + 16) = proto_log::AntiCheatLogHead::MergeFrom;
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
      "./src/server_only/log/anticheat/anticheat_head.pb.cc",
      782);
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
  google::protobuf::RepeatedField<unsigned int>::MergeFrom(&this->mp_teammate_list_, &from->mp_teammate_list_);
  v10 = proto_log::AntiCheatLogHead::time[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->time_, v11, from->time_);
  }
  v12 = proto_log::AntiCheatLogHead::region_name[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->region_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->region_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->region_name_, v13, from->region_name_);
  }
  v14 = proto_log::AntiCheatLogHead::game_version[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->game_version_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->game_version_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->game_version_, v15, from->game_version_);
  }
  if ( proto_log::AntiCheatLogHead::action_id(from) )
  {
    v16 = proto_log::AntiCheatLogHead::action_id(from);
    proto_log::AntiCheatLogHead::set_action_id(this, v16);
  }
  if ( proto_log::AntiCheatLogHead::uid(from) )
  {
    v17 = proto_log::AntiCheatLogHead::uid(from);
    proto_log::AntiCheatLogHead::set_uid(this, v17);
  }
  if ( proto_log::AntiCheatLogHead::vip_point(from) )
  {
    v18 = proto_log::AntiCheatLogHead::vip_point(from);
    proto_log::AntiCheatLogHead::set_vip_point(this, v18);
  }
  if ( proto_log::AntiCheatLogHead::level(from) )
  {
    v19 = proto_log::AntiCheatLogHead::level(from);
    proto_log::AntiCheatLogHead::set_level(this, v19);
  }
  if ( proto_log::AntiCheatLogHead::vip_level(from) )
  {
    v20 = proto_log::AntiCheatLogHead::vip_level(from);
    proto_log::AntiCheatLogHead::set_vip_level(this, v20);
  }
  if ( proto_log::AntiCheatLogHead::is_in_mp(from) )
  {
    v21 = proto_log::AntiCheatLogHead::is_in_mp(from);
    proto_log::AntiCheatLogHead::set_is_in_mp(this, v21);
  }
  if ( proto_log::AntiCheatLogHead::scene_id(from) )
  {
    v22 = proto_log::AntiCheatLogHead::scene_id(from);
    proto_log::AntiCheatLogHead::set_scene_id(this, v22);
  }
  if ( proto_log::AntiCheatLogHead::tag(from) )
  {
    v23 = proto_log::AntiCheatLogHead::tag(from);
    proto_log::AntiCheatLogHead::set_tag(this, v23);
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

// Line 826: range 000000001500593C-0000000015005979
void __cdecl proto_log::AntiCheatLogHead::CopyFrom(
        proto_log::AntiCheatLogHead *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::AntiCheatLogHead::Clear(this);
    proto_log::AntiCheatLogHead::MergeFrom(this, from);
  }
};

// Line 833: range 000000001500597A-00000000150059B7
void __cdecl proto_log::AntiCheatLogHead::CopyFrom(
        proto_log::AntiCheatLogHead *const this,
        const proto_log::AntiCheatLogHead *from)
{
  if ( from != this )
  {
    proto_log::AntiCheatLogHead::Clear(this);
    proto_log::AntiCheatLogHead::MergeFrom(this, from);
  }
};

// Line 840: range 00000000150059B8-00000000150059C6
bool __cdecl proto_log::AntiCheatLogHead::IsInitialized(const proto_log::AntiCheatLogHead *const this)
{
  return 1;
};

// Line 844: range 00000000150059C8-00000000150059F9
void __cdecl proto_log::AntiCheatLogHead::Swap(
        proto_log::AntiCheatLogHead *const this,
        proto_log::AntiCheatLogHead *other)
{
  if ( other != this )
    proto_log::AntiCheatLogHead::InternalSwap(this, other);
};

// Line 848: range 00000000150059FA-0000000015005D37
void __cdecl proto_log::AntiCheatLogHead::InternalSwap(
        proto_log::AntiCheatLogHead *const this,
        proto_log::AntiCheatLogHead *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-70h]

  google::protobuf::RepeatedField<unsigned int>::InternalSwap(&this->mp_teammate_list_, &other->mp_teammate_list_);
  std::swap<std::string *>(&this->time_.ptr_, &other->time_.ptr_);
  std::swap<std::string *>(&this->region_name_.ptr_, &other->region_name_.ptr_);
  std::swap<std::string *>(&this->game_version_.ptr_, &other->game_version_.ptr_);
  std::swap<unsigned int>(&this->action_id_, &other->action_id_);
  std::swap<unsigned int>(&this->uid_, &other->uid_);
  std::swap<unsigned long>(&this->vip_point_, &other->vip_point_);
  std::swap<unsigned int>(&this->level_, &other->level_);
  std::swap<unsigned int>(&this->vip_level_, &other->vip_level_);
  std::swap<bool>(&this->is_in_mp_, &other->is_in_mp_);
  std::swap<unsigned int>(&this->scene_id_, &other->scene_id_);
  std::swap<unsigned int>(&this->tag_, &other->tag_);
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

// Line 866: range 0000000015005D38-0000000015005D58
google::protobuf::Metadata __cdecl proto_log::AntiCheatLogHead::GetMetadata(
        const proto_log::AntiCheatLogHead *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fanticheat_2fanticheat_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0];
};

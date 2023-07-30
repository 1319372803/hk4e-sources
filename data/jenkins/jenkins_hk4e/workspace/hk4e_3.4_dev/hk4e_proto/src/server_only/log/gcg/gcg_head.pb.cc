// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/gcg/gcg_head.pb.cc

// Line 73: range 0000000015017EC7-0000000015018090
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/gcg/gcg_head.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
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

// Line 81: range 0000000015018091-00000000150180AA
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 87: range 00000000150180AB-00000000150180CF
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
    1);
};

// Line 93: range 00000000150180D0-000000001501810F
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/gcg/gcg_head.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::GCGLogHead>::DefaultConstruct(&proto_log::_GCGLogHead_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_GCGLogHead_default_instance_,
    (const void *)0x2DD660);
};

// Line 101: range 0000000015018110-000000001501812C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 106: range 000000001501812D-000000001501815C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 122: range 000000001501815D-0000000015018176
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 128: range 00000000160E0670-00000000160E0683
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::AddDescriptors();
};

// Line 147: range 0000000015018178-0000000015018237
void __cdecl proto_log::GCGLogHead::GCGLogHead(proto_log::GCGLogHead *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::GCGLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::GCGLogHead::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::InitDefaults();
  proto_log::GCGLogHead::SharedCtor(this);
};

// Line 155: range 0000000015018238-00000000150186E6
void __cdecl proto_log::GCGLogHead::GCGLogHead(proto_log::GCGLogHead *const this, const proto_log::GCGLogHead *from)
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
  __int64 p_action_id; // rsi
  google::protobuf::uint32 *v17; // rcx
  google::protobuf::uint32 *v18; // rdi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::GCGLogHead + 2);
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
  v5 = proto_log::GCGLogHead::time[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->time_, v6, from->time_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->trans_no_, v7);
  v8 = proto_log::GCGLogHead::trans_no[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->trans_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->trans_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->trans_no_, v9, from->trans_no_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_name_, v10);
  v11 = proto_log::GCGLogHead::action_name[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_name_, v12, from->action_name_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->sub_action_name_, v13);
  v14 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->sub_action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->sub_action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->sub_action_name_, v15, from->sub_action_name_);
  }
  p_action_id = (__int64)&from->action_id_;
  v17 = &this->action_id_;
  if ( (((unsigned __int8)from + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&from->action_id_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->action_id_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->sub_action_id_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&from->sub_action_id_ + 3) >> 3) + 0x7FFF8000) )
  {
    p_action_id = 8LL;
    __asan_report_load_n(&from->action_id_, 8LL);
  }
  v18 = *(google::protobuf::uint32 **)p_action_id;
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

// Line 182: range 00000000150186E8-00000000150187B4
void __cdecl proto_log::GCGLogHead::SharedCtor(proto_log::GCGLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->trans_no_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_name_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->sub_action_name_, v4);
  memset(&this->action_id_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 193: range 00000000150187B6-000000001501881F
void __cdecl proto_log::GCGLogHead::~GCGLogHead(proto_log::GCGLogHead *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::GCGLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::GCGLogHead::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 193: range 0000000015018820-000000001501884A
void __cdecl proto_log::GCGLogHead::~GCGLogHead(proto_log::GCGLogHead *const this)
{
  proto_log::GCGLogHead::~GCGLogHead(this);
  operator delete(this, 0x40uLL);
};

// Line 198: range 000000001501884C-00000000150188C0
void __cdecl proto_log::GCGLogHead::SharedDtor(proto_log::GCGLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->trans_no_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->action_name_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->sub_action_name_, v4);
};

// Line 205: range 00000000150188C2-0000000015018910
void __cdecl proto_log::GCGLogHead::SetCachedSize(const proto_log::GCGLogHead *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 210: range 0000000015018912-0000000015018923
const google::protobuf::Descriptor *__cdecl proto_log::GCGLogHead::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 215: range 0000000015018924-0000000015018933
const proto_log::GCGLogHead *__cdecl proto_log::GCGLogHead::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::InitDefaults();
  return proto_log::GCGLogHead::internal_default_instance();
};

// Line 220: range 0000000015018934-00000000150189A8
proto_log::GCGLogHead *__cdecl proto_log::GCGLogHead::New(
        const proto_log::GCGLogHead *const this,
        google::protobuf::Arena *arena)
{
  proto_log::GCGLogHead *v2; // rbx

  v2 = (proto_log::GCGLogHead *)operator new(0x40uLL);
  proto_log::GCGLogHead::GCGLogHead(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::GCGLogHead>(arena, v2);
  return v2;
};

// Line 228: range 00000000150189AA-0000000015018A9D
void __cdecl proto_log::GCGLogHead::Clear(proto_log::GCGLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->trans_no_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->action_name_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->sub_action_name_, v4);
  memset(&this->action_id_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 245: range 0000000015018A9E-00000000150196B3
bool __cdecl proto_log::GCGLogHead::MergePartialFromCodedStream(
        proto_log::GCGLogHead *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:250";
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogHead::MergePartialFromCodedStream;
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
            v13 = proto_log::GCGLogHead::mutable_time[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::GCGLogHead::time[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::GCGLogHead::time[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.time",
                                     v18) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 18 )
              goto handle_unusual;
            v19 = proto_log::GCGLogHead::mutable_trans_no[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.trans_no",
                                     v24) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->action_id_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v25 = proto_log::GCGLogHead::mutable_action_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.action_name",
                                     v30) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->sub_action_id_) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 50 )
              goto handle_unusual;
            v31 = proto_log::GCGLogHead::mutable_sub_action_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v31) )
              goto failure;
            v32 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
            v33 = std::string::length(v32);
            v34 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
            v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v35,
                                     (const char *)v33,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.sub_action_name",
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

// Line 367: range 00000000150196B4-0000000015019A35
void __cdecl proto_log::GCGLogHead::SerializeWithCachedSizes(
        const proto_log::GCGLogHead *const this,
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

  v2 = proto_log::GCGLogHead::time[abi:cxx11](this);
  if ( std::string::size(v2) )
  {
    v3 = proto_log::GCGLogHead::time[abi:cxx11](this);
    v4 = std::string::length(v3);
    v5 = proto_log::GCGLogHead::time[abi:cxx11](this);
    v6 = (google::protobuf::internal::WireFormatLite *)std::string::data(v5);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v6,
      (const char *)v4,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.time",
      v7);
    v8 = proto_log::GCGLogHead::time[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, v8, output);
  }
  v9 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
    v11 = std::string::length(v10);
    v12 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
    v13 = (google::protobuf::internal::WireFormatLite *)std::string::data(v12);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v13,
      (const char *)v11,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.trans_no",
      v14);
    v15 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v15, output);
  }
  if ( proto_log::GCGLogHead::action_id(this) )
  {
    v16 = proto_log::GCGLogHead::action_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v16, output);
  }
  v17 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
    v19 = std::string::length(v18);
    v20 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
    v21 = (google::protobuf::internal::WireFormatLite *)std::string::data(v20);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v21,
      (const char *)v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.action_name",
      v22);
    v23 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v23, output);
  }
  if ( proto_log::GCGLogHead::sub_action_id(this) )
  {
    v24 = proto_log::GCGLogHead::sub_action_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(5, v24, output);
  }
  v25 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
  if ( std::string::size(v25) )
  {
    v26 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
    v27 = std::string::length(v26);
    v28 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
    v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v29,
      (const char *)v27,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.sub_action_name",
      v30);
    v31 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
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

// Line 430: range 0000000015019A36-0000000015019DDB
google::protobuf::uint8 *__cdecl proto_log::GCGLogHead::InternalSerializeWithCachedSizesToArray(
        const proto_log::GCGLogHead *const this,
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

  v3 = proto_log::GCGLogHead::time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::GCGLogHead::time[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::GCGLogHead::time[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.time",
      v8);
    v9 = proto_log::GCGLogHead::time[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(1, v9, target);
  }
  v10 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.trans_no",
      v15);
    v16 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v16, target);
  }
  if ( proto_log::GCGLogHead::action_id(this) )
  {
    v17 = proto_log::GCGLogHead::action_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v17, target);
  }
  v18 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.action_name",
      v23);
    v24 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v24, target);
  }
  if ( proto_log::GCGLogHead::sub_action_id(this) )
  {
    v25 = proto_log::GCGLogHead::sub_action_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, v25, target);
  }
  v26 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
  if ( std::string::size(v26) )
  {
    v27 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
    v28 = std::string::length(v27);
    v29 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
    v30 = (google::protobuf::internal::WireFormatLite *)std::string::data(v29);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v30,
      (const char *)v28,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.GCGLogHead.sub_action_name",
      v31);
    v32 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
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

// Line 498: range 0000000015019DDC-000000001501A078
size_t __cdecl proto_log::GCGLogHead::ByteSizeLong(const proto_log::GCGLogHead *const this)
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
  v3 = proto_log::GCGLogHead::time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::GCGLogHead::time[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::GCGLogHead::trans_no[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::GCGLogHead::action_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  if ( proto_log::GCGLogHead::action_id(this) )
  {
    v11 = proto_log::GCGLogHead::action_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v11) + 1;
  }
  if ( proto_log::GCGLogHead::sub_action_id(this) )
  {
    v12 = proto_log::GCGLogHead::sub_action_id(this);
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

// Line 556: range 000000001501A07A-000000001501A303
void __cdecl proto_log::GCGLogHead::MergeFrom(proto_log::GCGLogHead *const this, const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::GCGLogHead *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogHead::MergeFrom;
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
      "./src/server_only/log/gcg/gcg_head.pb.cc",
      558);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::GCGLogHead const>(from);
  if ( source )
    proto_log::GCGLogHead::MergeFrom(this, source);
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

// Line 571: range 000000001501A304-000000001501A8A9
void __cdecl proto_log::GCGLogHead::MergeFrom(proto_log::GCGLogHead *const this, const proto_log::GCGLogHead *from)
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
  *(_QWORD *)(v2 + 16) = proto_log::GCGLogHead::MergeFrom;
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
      "./src/server_only/log/gcg/gcg_head.pb.cc",
      573);
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
  v10 = proto_log::GCGLogHead::time[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->time_, v11, from->time_);
  }
  v12 = proto_log::GCGLogHead::trans_no[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->trans_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->trans_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->trans_no_, v13, from->trans_no_);
  }
  v14 = proto_log::GCGLogHead::action_name[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_name_, v15, from->action_name_);
  }
  v16 = proto_log::GCGLogHead::sub_action_name[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->sub_action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->sub_action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->sub_action_name_, v17, from->sub_action_name_);
  }
  if ( proto_log::GCGLogHead::action_id(from) )
  {
    v18 = proto_log::GCGLogHead::action_id(from);
    proto_log::GCGLogHead::set_action_id(this, v18);
  }
  if ( proto_log::GCGLogHead::sub_action_id(from) )
  {
    v19 = proto_log::GCGLogHead::sub_action_id(from);
    proto_log::GCGLogHead::set_sub_action_id(this, v19);
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

// Line 602: range 000000001501A8AA-000000001501A8E7
void __cdecl proto_log::GCGLogHead::CopyFrom(proto_log::GCGLogHead *const this, const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::GCGLogHead::Clear(this);
    proto_log::GCGLogHead::MergeFrom(this, from);
  }
};

// Line 609: range 000000001501A8E8-000000001501A925
void __cdecl proto_log::GCGLogHead::CopyFrom(proto_log::GCGLogHead *const this, const proto_log::GCGLogHead *from)
{
  if ( from != this )
  {
    proto_log::GCGLogHead::Clear(this);
    proto_log::GCGLogHead::MergeFrom(this, from);
  }
};

// Line 616: range 000000001501A926-000000001501A934
bool __cdecl proto_log::GCGLogHead::IsInitialized(const proto_log::GCGLogHead *const this)
{
  return 1;
};

// Line 620: range 000000001501A936-000000001501A967
void __cdecl proto_log::GCGLogHead::Swap(proto_log::GCGLogHead *const this, proto_log::GCGLogHead *other)
{
  if ( other != this )
    proto_log::GCGLogHead::InternalSwap(this, other);
};

// Line 624: range 000000001501A968-000000001501ABF9
void __cdecl proto_log::GCGLogHead::InternalSwap(proto_log::GCGLogHead *const this, proto_log::GCGLogHead *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-80h]

  std::swap<std::string *>(&this->time_.ptr_, &other->time_.ptr_);
  std::swap<std::string *>(&this->trans_no_.ptr_, &other->trans_no_.ptr_);
  std::swap<std::string *>(&this->action_name_.ptr_, &other->action_name_.ptr_);
  std::swap<std::string *>(&this->sub_action_name_.ptr_, &other->sub_action_name_.ptr_);
  std::swap<unsigned int>(&this->action_id_, &other->action_id_);
  std::swap<unsigned int>(&this->sub_action_id_, &other->sub_action_id_);
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

// Line 636: range 000000001501ABFA-000000001501AC1A
google::protobuf::Metadata __cdecl proto_log::GCGLogHead::GetMetadata(const proto_log::GCGLogHead *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fgcg_2fgcg_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0];
};

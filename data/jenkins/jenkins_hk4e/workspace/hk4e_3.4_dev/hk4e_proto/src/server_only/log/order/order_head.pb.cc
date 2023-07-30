// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/order/order_head.pb.cc

// Line 72: range 0000000017430DE7-0000000017430FB0
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/order/order_head.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
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

// Line 80: range 0000000017430FB1-0000000017430FCA
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 86: range 0000000017430FCB-0000000017430FEF
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
    1);
};

// Line 92: range 0000000017430FF0-000000001743102F
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/order/order_head.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::OrderLogHead>::DefaultConstruct(&proto_log::_OrderLogHead_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_OrderLogHead_default_instance_,
    (const void *)0x2DD660);
};

// Line 100: range 0000000017431030-000000001743104C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 105: range 000000001743104D-000000001743107C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 121: range 000000001743107D-0000000017431096
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 127: range 00000000178BCD1E-00000000178BCD31
void __cdecl proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::AddDescriptors();
};

// Line 145: range 0000000017431098-0000000017431157
void __cdecl proto_log::OrderLogHead::OrderLogHead(proto_log::OrderLogHead *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::OrderLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::OrderLogHead::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::InitDefaults();
  proto_log::OrderLogHead::SharedCtor(this);
};

// Line 153: range 0000000017431158-0000000017431585
void __cdecl proto_log::OrderLogHead::OrderLogHead(
        proto_log::OrderLogHead *const this,
        const proto_log::OrderLogHead *from)
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
  __int64 p_action_id; // rsi
  google::protobuf::uint32 *v14; // rcx
  google::protobuf::uint32 *v15; // rdi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::OrderLogHead + 2);
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
  v5 = proto_log::OrderLogHead::time[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->time_, v6, from->time_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_name_, v7);
  v8 = proto_log::OrderLogHead::action_name[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_name_, v9, from->action_name_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->sub_action_name_, v10);
  v11 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->sub_action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->sub_action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->sub_action_name_, v12, from->sub_action_name_);
  }
  p_action_id = (__int64)&from->action_id_;
  v14 = &this->action_id_;
  if ( (((unsigned __int8)from + 40) & 7) >= *(_BYTE *)(((unsigned __int64)&from->action_id_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->action_id_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->sub_action_id_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&from->sub_action_id_ + 3) >> 3) + 0x7FFF8000) )
  {
    p_action_id = 8LL;
    __asan_report_load_n(&from->action_id_, 8LL);
  }
  v15 = *(google::protobuf::uint32 **)p_action_id;
  if ( ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)v14 + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v14 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v14 + 7) >> 3) + 0x7FFF8000) )
  {
    v15 = v14;
    __asan_report_store_n(v14, 8LL);
  }
  *(_QWORD *)v14 = v15;
};

// Line 176: range 0000000017431586-000000001743163A
void __cdecl proto_log::OrderLogHead::SharedCtor(proto_log::OrderLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->action_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->sub_action_name_, v3);
  memset(&this->action_id_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 186: range 000000001743163C-00000000174316A5
void __cdecl proto_log::OrderLogHead::~OrderLogHead(proto_log::OrderLogHead *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::OrderLogHead + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::OrderLogHead::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 186: range 00000000174316A6-00000000174316D0
void __cdecl proto_log::OrderLogHead::~OrderLogHead(proto_log::OrderLogHead *const this)
{
  proto_log::OrderLogHead::~OrderLogHead(this);
  operator delete(this, 0x38uLL);
};

// Line 191: range 00000000174316D2-000000001743172E
void __cdecl proto_log::OrderLogHead::SharedDtor(proto_log::OrderLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->action_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->sub_action_name_, v3);
};

// Line 197: range 0000000017431730-000000001743177E
void __cdecl proto_log::OrderLogHead::SetCachedSize(const proto_log::OrderLogHead *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 202: range 0000000017431780-0000000017431791
const google::protobuf::Descriptor *__cdecl proto_log::OrderLogHead::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 207: range 0000000017431792-00000000174317A1
const proto_log::OrderLogHead *__cdecl proto_log::OrderLogHead::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::InitDefaults();
  return proto_log::OrderLogHead::internal_default_instance();
};

// Line 212: range 00000000174317A2-0000000017431816
proto_log::OrderLogHead *__cdecl proto_log::OrderLogHead::New(
        const proto_log::OrderLogHead *const this,
        google::protobuf::Arena *arena)
{
  proto_log::OrderLogHead *v2; // rbx

  v2 = (proto_log::OrderLogHead *)operator new(0x38uLL);
  proto_log::OrderLogHead::OrderLogHead(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::OrderLogHead>(arena, v2);
  return v2;
};

// Line 220: range 0000000017431818-00000000174318F3
void __cdecl proto_log::OrderLogHead::Clear(proto_log::OrderLogHead *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->action_name_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->sub_action_name_, v3);
  memset(&this->action_id_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 236: range 00000000174318F4-000000001743245C
bool __cdecl proto_log::OrderLogHead::MergePartialFromCodedStream(
        proto_log::OrderLogHead *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:241";
  *(_QWORD *)(v2 + 16) = proto_log::OrderLogHead::MergePartialFromCodedStream;
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
            v13 = proto_log::OrderLogHead::mutable_time[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::OrderLogHead::time[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::OrderLogHead::time[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogHead.time",
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
            v19 = proto_log::OrderLogHead::mutable_action_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogHead.action_name",
                                     v24) )
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
            v25 = proto_log::OrderLogHead::mutable_sub_action_name[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogHead.sub_action_name",
                                     v30) )
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
      goto LABEL_62;
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
LABEL_62:
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

// Line 342: range 000000001743245E-000000001743275E
void __cdecl proto_log::OrderLogHead::SerializeWithCachedSizes(
        const proto_log::OrderLogHead *const this,
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
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v26; // rax

  v2 = proto_log::OrderLogHead::time[abi:cxx11](this);
  if ( std::string::size(v2) )
  {
    v3 = proto_log::OrderLogHead::time[abi:cxx11](this);
    v4 = std::string::length(v3);
    v5 = proto_log::OrderLogHead::time[abi:cxx11](this);
    v6 = (google::protobuf::internal::WireFormatLite *)std::string::data(v5);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v6,
      (const char *)v4,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogHead.time",
      v7);
    v8 = proto_log::OrderLogHead::time[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, v8, output);
  }
  if ( proto_log::OrderLogHead::action_id(this) )
  {
    v9 = proto_log::OrderLogHead::action_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v9, output);
  }
  v10 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogHead.action_name",
      v15);
    v16 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v16, output);
  }
  if ( proto_log::OrderLogHead::sub_action_id(this) )
  {
    v17 = proto_log::OrderLogHead::sub_action_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v17, output);
  }
  v18 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogHead.sub_action_name",
      v23);
    v24 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v24, output);
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
      v26 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_23:
      v26 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v26->unknown_fields, output);
  }
};

// Line 395: range 0000000017432760-0000000017432A80
google::protobuf::uint8 *__cdecl proto_log::OrderLogHead::InternalSerializeWithCachedSizesToArray(
        const proto_log::OrderLogHead *const this,
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
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v27; // rax

  v3 = proto_log::OrderLogHead::time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::OrderLogHead::time[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::OrderLogHead::time[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogHead.time",
      v8);
    v9 = proto_log::OrderLogHead::time[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(1, v9, target);
  }
  if ( proto_log::OrderLogHead::action_id(this) )
  {
    v10 = proto_log::OrderLogHead::action_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v10, target);
  }
  v11 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogHead.action_name",
      v16);
    v17 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v17, target);
  }
  if ( proto_log::OrderLogHead::sub_action_id(this) )
  {
    v18 = proto_log::OrderLogHead::sub_action_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v18, target);
  }
  v19 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
  if ( std::string::size(v19) )
  {
    v20 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
    v21 = std::string::length(v20);
    v22 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
    v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v23,
      (const char *)v21,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.OrderLogHead.sub_action_name",
      v24);
    v25 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v25, target);
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
      v27 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_23:
      v27 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v27->unknown_fields, target);
  }
  return target;
};

// Line 452: range 0000000017432A82-0000000017432CE4
size_t __cdecl proto_log::OrderLogHead::ByteSizeLong(const proto_log::OrderLogHead *const this)
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
  v3 = proto_log::OrderLogHead::time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::OrderLogHead::time[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::OrderLogHead::action_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  if ( proto_log::OrderLogHead::action_id(this) )
  {
    v9 = proto_log::OrderLogHead::action_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v9) + 1;
  }
  if ( proto_log::OrderLogHead::sub_action_id(this) )
  {
    v10 = proto_log::OrderLogHead::sub_action_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v10) + 1;
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

// Line 503: range 0000000017432CE6-0000000017432F6F
void __cdecl proto_log::OrderLogHead::MergeFrom(
        proto_log::OrderLogHead *const this,
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
  const proto_log::OrderLogHead *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::OrderLogHead::MergeFrom;
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
      "./src/server_only/log/order/order_head.pb.cc",
      505);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::OrderLogHead const>(from);
  if ( source )
    proto_log::OrderLogHead::MergeFrom(this, source);
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

// Line 518: range 0000000017432F70-00000000174334A0
void __cdecl proto_log::OrderLogHead::MergeFrom(
        proto_log::OrderLogHead *const this,
        const proto_log::OrderLogHead *from)
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
  *(_QWORD *)(v2 + 16) = proto_log::OrderLogHead::MergeFrom;
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
      "./src/server_only/log/order/order_head.pb.cc",
      520);
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
  v10 = proto_log::OrderLogHead::time[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->time_, v11, from->time_);
  }
  v12 = proto_log::OrderLogHead::action_name[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->action_name_, v13, from->action_name_);
  }
  v14 = proto_log::OrderLogHead::sub_action_name[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->sub_action_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->sub_action_name_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->sub_action_name_, v15, from->sub_action_name_);
  }
  if ( proto_log::OrderLogHead::action_id(from) )
  {
    v16 = proto_log::OrderLogHead::action_id(from);
    proto_log::OrderLogHead::set_action_id(this, v16);
  }
  if ( proto_log::OrderLogHead::sub_action_id(from) )
  {
    v17 = proto_log::OrderLogHead::sub_action_id(from);
    proto_log::OrderLogHead::set_sub_action_id(this, v17);
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

// Line 545: range 00000000174334A2-00000000174334DF
void __cdecl proto_log::OrderLogHead::CopyFrom(
        proto_log::OrderLogHead *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::OrderLogHead::Clear(this);
    proto_log::OrderLogHead::MergeFrom(this, from);
  }
};

// Line 552: range 00000000174334E0-000000001743351D
void __cdecl proto_log::OrderLogHead::CopyFrom(
        proto_log::OrderLogHead *const this,
        const proto_log::OrderLogHead *from)
{
  if ( from != this )
  {
    proto_log::OrderLogHead::Clear(this);
    proto_log::OrderLogHead::MergeFrom(this, from);
  }
};

// Line 559: range 000000001743351E-000000001743352C
bool __cdecl proto_log::OrderLogHead::IsInitialized(const proto_log::OrderLogHead *const this)
{
  return 1;
};

// Line 563: range 000000001743352E-000000001743355F
void __cdecl proto_log::OrderLogHead::Swap(proto_log::OrderLogHead *const this, proto_log::OrderLogHead *other)
{
  if ( other != this )
    proto_log::OrderLogHead::InternalSwap(this, other);
};

// Line 567: range 0000000017433560-00000000174337B6
void __cdecl proto_log::OrderLogHead::InternalSwap(proto_log::OrderLogHead *const this, proto_log::OrderLogHead *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-70h]

  std::swap<std::string *>(&this->time_.ptr_, &other->time_.ptr_);
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

// Line 578: range 00000000174337B8-00000000174337D8
google::protobuf::Metadata __cdecl proto_log::OrderLogHead::GetMetadata(const proto_log::OrderLogHead *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0];
};

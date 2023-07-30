// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/player/player_body_ext.pb.cc

// Line 212: range 000000001789F2AD-000000001789F476
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/player/player_body_ext.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata,
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

// Line 220: range 000000001789F477-000000001789F490
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 226: range 000000001789F491-000000001789F4B5
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata,
    9);
};

// Line 232: range 000000001789F4B6-000000001789F5EA
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/player/player_body_ext.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcustom_2eproto::InitDefaults();
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyExtRegister>::DefaultConstruct(&proto_log::_PlayerLogBodyExtRegister_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyExtRegister_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyExtLogin>::DefaultConstruct(&proto_log::_PlayerLogBodyExtLogin_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyExtLogin_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyExtLogout>::DefaultConstruct(&proto_log::_PlayerLogBodyExtLogout_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyExtLogout_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyExtLevelUp>::DefaultConstruct(&proto_log::_PlayerLogBodyExtLevelUp_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyExtLevelUp_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyExtGadget>::DefaultConstruct(&proto_log::_PlayerLogBodyExtGadget_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyExtGadget_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyExtMissionType>::DefaultConstruct(&proto_log::_PlayerLogBodyExtMissionType_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyExtMissionType_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyExtAddMaterial>::DefaultConstruct(&proto_log::_PlayerLogBodyExtAddMaterial_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyExtAddMaterial_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyExtAddCoin>::DefaultConstruct(&proto_log::_PlayerLogBodyExtAddCoin_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyExtAddCoin_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogBodyExtRecharge>::DefaultConstruct(&proto_log::_PlayerLogBodyExtRecharge_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogBodyExtRecharge_default_instance_,
    (const void *)0x2DD660);
};

// Line 257: range 000000001789F5EB-000000001789F607
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 262: range 000000001789F608-000000001789F63C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 307: range 000000001789F63D-000000001789F656
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 313: range 0000000017925EEE-0000000017925F01
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::AddDescriptors();
};

// Line 326: range 000000001789F658-000000001789F717
void __cdecl proto_log::PlayerLogBodyExtRegister::PlayerLogBodyExtRegister(
        proto_log::PlayerLogBodyExtRegister *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtRegister + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyExtRegister::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  proto_log::PlayerLogBodyExtRegister::SharedCtor(this);
};

// Line 334: range 000000001789F718-000000001789F8CC
void __cdecl proto_log::PlayerLogBodyExtRegister::PlayerLogBodyExtRegister(
        proto_log::PlayerLogBodyExtRegister *const this,
        const proto_log::PlayerLogBodyExtRegister *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtRegister + 2);
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
};

// Line 342: range 000000001789F8CE-000000001789F91A
void __cdecl proto_log::PlayerLogBodyExtRegister::SharedCtor(proto_log::PlayerLogBodyExtRegister *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 346: range 000000001789F91C-000000001789F985
void __cdecl proto_log::PlayerLogBodyExtRegister::~PlayerLogBodyExtRegister(
        proto_log::PlayerLogBodyExtRegister *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtRegister + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyExtRegister::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 346: range 000000001789F986-000000001789F9B0
void __cdecl proto_log::PlayerLogBodyExtRegister::~PlayerLogBodyExtRegister(
        proto_log::PlayerLogBodyExtRegister *const this)
{
  proto_log::PlayerLogBodyExtRegister::~PlayerLogBodyExtRegister(this);
  operator delete(this, 0x18uLL);
};

// Line 351: range 000000001789F9B2-000000001789F9BC
void __cdecl proto_log::PlayerLogBodyExtRegister::SharedDtor(proto_log::PlayerLogBodyExtRegister *const this)
{
  ;
};

// Line 354: range 000000001789F9BE-000000001789FA0C
void __cdecl proto_log::PlayerLogBodyExtRegister::SetCachedSize(
        const proto_log::PlayerLogBodyExtRegister *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 359: range 000000001789FA0E-000000001789FA1F
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyExtRegister::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 364: range 000000001789FA20-000000001789FA2F
const proto_log::PlayerLogBodyExtRegister *__cdecl proto_log::PlayerLogBodyExtRegister::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyExtRegister::internal_default_instance();
};

// Line 369: range 000000001789FA30-000000001789FAA4
proto_log::PlayerLogBodyExtRegister *__cdecl proto_log::PlayerLogBodyExtRegister::New(
        const proto_log::PlayerLogBodyExtRegister *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyExtRegister *v2; // rbx

  v2 = (proto_log::PlayerLogBodyExtRegister *)operator new(0x18uLL);
  proto_log::PlayerLogBodyExtRegister::PlayerLogBodyExtRegister(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyExtRegister>(arena, v2);
  return v2;
};

// Line 377: range 000000001789FAA6-000000001789FB19
void __cdecl proto_log::PlayerLogBodyExtRegister::Clear(proto_log::PlayerLogBodyExtRegister *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 387: range 000000001789FB1A-00000000178A03A8
bool __cdecl proto_log::PlayerLogBodyExtRegister::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyExtRegister *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:392";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtRegister::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  do
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
    if ( !tag )
    {
      result = 1;
      goto LABEL_37;
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
  result = 0;
LABEL_37:
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

// Line 412: range 00000000178A03AA-00000000178A04B5
void __cdecl proto_log::PlayerLogBodyExtRegister::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyExtRegister *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rax

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
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v3->unknown_fields, output);
  }
};

// Line 425: range 00000000178A04B6-00000000178A05CD
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyExtRegister::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyExtRegister *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v4; // rax

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
      v4 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_13:
      v4 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v4->unknown_fields, target);
  }
  return target;
};

// Line 439: range 00000000178A05CE-00000000178A0722
size_t __cdecl proto_log::PlayerLogBodyExtRegister::ByteSizeLong(const proto_log::PlayerLogBodyExtRegister *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
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
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 455: range 00000000178A0724-00000000178A09AD
void __cdecl proto_log::PlayerLogBodyExtRegister::MergeFrom(
        proto_log::PlayerLogBodyExtRegister *const this,
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
  const proto_log::PlayerLogBodyExtRegister *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtRegister::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      457);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyExtRegister const>(from);
  if ( source )
    proto_log::PlayerLogBodyExtRegister::MergeFrom(this, source);
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

// Line 470: range 00000000178A09AE-00000000178A0D0F
void __cdecl proto_log::PlayerLogBodyExtRegister::MergeFrom(
        proto_log::PlayerLogBodyExtRegister *const this,
        const proto_log::PlayerLogBodyExtRegister *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  char v10; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v12[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtRegister::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v10 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_ext.pb.cc",
      472);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v10 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v10 )
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
  if ( v12 == (char *)v2 )
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

// Line 479: range 00000000178A0D10-00000000178A0D4D
void __cdecl proto_log::PlayerLogBodyExtRegister::CopyFrom(
        proto_log::PlayerLogBodyExtRegister *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtRegister::Clear(this);
    proto_log::PlayerLogBodyExtRegister::MergeFrom(this, from);
  }
};

// Line 486: range 00000000178A0D4E-00000000178A0D8B
void __cdecl proto_log::PlayerLogBodyExtRegister::CopyFrom(
        proto_log::PlayerLogBodyExtRegister *const this,
        const proto_log::PlayerLogBodyExtRegister *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtRegister::Clear(this);
    proto_log::PlayerLogBodyExtRegister::MergeFrom(this, from);
  }
};

// Line 493: range 00000000178A0D8C-00000000178A0D9A
bool __cdecl proto_log::PlayerLogBodyExtRegister::IsInitialized(const proto_log::PlayerLogBodyExtRegister *const this)
{
  return 1;
};

// Line 497: range 00000000178A0D9C-00000000178A0DCD
void __cdecl proto_log::PlayerLogBodyExtRegister::Swap(
        proto_log::PlayerLogBodyExtRegister *const this,
        proto_log::PlayerLogBodyExtRegister *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyExtRegister::InternalSwap(this, other);
};

// Line 501: range 00000000178A0DCE-00000000178A0F37
void __cdecl proto_log::PlayerLogBodyExtRegister::InternalSwap(
        proto_log::PlayerLogBodyExtRegister *const this,
        proto_log::PlayerLogBodyExtRegister *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

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

// Line 507: range 00000000178A0F38-00000000178A0F58
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyExtRegister::GetMetadata(
        const proto_log::PlayerLogBodyExtRegister *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[0];
};

// Line 527: range 00000000178A0F5A-00000000178A1019
void __cdecl proto_log::PlayerLogBodyExtLogin::PlayerLogBodyExtLogin(proto_log::PlayerLogBodyExtLogin *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtLogin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyExtLogin::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  proto_log::PlayerLogBodyExtLogin::SharedCtor(this);
};

// Line 535: range 00000000178A101A-00000000178A1371
void __cdecl proto_log::PlayerLogBodyExtLogin::PlayerLogBodyExtLogin(
        proto_log::PlayerLogBodyExtLogin *const this,
        const proto_log::PlayerLogBodyExtLogin *from)
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
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtLogin + 2);
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_version_, v4);
  v5 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_version_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_version_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_version_, v6, from->client_version_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->account_uid_, v7);
  v8 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->account_uid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->account_uid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->account_uid_, v9, from->account_uid_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->nickname_, v10);
  v11 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->nickname_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->nickname_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->nickname_, v12, from->nickname_);
  }
  memcpy(&this->card_product_remain_days_, &from->card_product_remain_days_, 5uLL);
};

// Line 558: range 00000000178A1372-00000000178A1426
void __cdecl proto_log::PlayerLogBodyExtLogin::SharedCtor(proto_log::PlayerLogBodyExtLogin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_version_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->account_uid_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->nickname_, v3);
  memset(&this->card_product_remain_days_, 0, 5uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 568: range 00000000178A1428-00000000178A1491
void __cdecl proto_log::PlayerLogBodyExtLogin::~PlayerLogBodyExtLogin(proto_log::PlayerLogBodyExtLogin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtLogin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyExtLogin::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 568: range 00000000178A1492-00000000178A14BC
void __cdecl proto_log::PlayerLogBodyExtLogin::~PlayerLogBodyExtLogin(proto_log::PlayerLogBodyExtLogin *const this)
{
  proto_log::PlayerLogBodyExtLogin::~PlayerLogBodyExtLogin(this);
  operator delete(this, 0x38uLL);
};

// Line 573: range 00000000178A14BE-00000000178A151A
void __cdecl proto_log::PlayerLogBodyExtLogin::SharedDtor(proto_log::PlayerLogBodyExtLogin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->client_version_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->account_uid_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->nickname_, v3);
};

// Line 579: range 00000000178A151C-00000000178A156A
void __cdecl proto_log::PlayerLogBodyExtLogin::SetCachedSize(
        const proto_log::PlayerLogBodyExtLogin *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 584: range 00000000178A156C-00000000178A157D
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyExtLogin::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 589: range 00000000178A157E-00000000178A158D
const proto_log::PlayerLogBodyExtLogin *__cdecl proto_log::PlayerLogBodyExtLogin::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyExtLogin::internal_default_instance();
};

// Line 594: range 00000000178A158E-00000000178A1602
proto_log::PlayerLogBodyExtLogin *__cdecl proto_log::PlayerLogBodyExtLogin::New(
        const proto_log::PlayerLogBodyExtLogin *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyExtLogin *v2; // rbx

  v2 = (proto_log::PlayerLogBodyExtLogin *)operator new(0x38uLL);
  proto_log::PlayerLogBodyExtLogin::PlayerLogBodyExtLogin(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyExtLogin>(arena, v2);
  return v2;
};

// Line 602: range 00000000178A1604-00000000178A16DF
void __cdecl proto_log::PlayerLogBodyExtLogin::Clear(proto_log::PlayerLogBodyExtLogin *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->client_version_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->account_uid_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->nickname_, v3);
  memset(&this->card_product_remain_days_, 0, 5uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 618: range 00000000178A16E0-00000000178A2244
bool __cdecl proto_log::PlayerLogBodyExtLogin::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyExtLogin *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:623";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtLogin::MergePartialFromCodedStream;
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
                    &this->card_product_remain_days_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 18 )
              goto handle_unusual;
            v13 = proto_log::PlayerLogBodyExtLogin::mutable_client_version[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLo"
                                                                                            "gin.client_version",
                                     v18) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 26 )
              goto handle_unusual;
            v19 = proto_log::PlayerLogBodyExtLogin::mutable_account_uid[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogin.account_uid",
                                     v24) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 34 )
              goto handle_unusual;
            v25 = proto_log::PlayerLogBodyExtLogin::mutable_nickname[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogin.nickname",
                                     v30) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<bool,(google::protobuf::internal::WireFormatLite::FieldType)8>(
                    input,
                    &this->is_client_relogin_) )
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

// Line 724: range 00000000178A2246-00000000178A2547
void __cdecl proto_log::PlayerLogBodyExtLogin::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyExtLogin *const this,
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
  bool is_client_relogin; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v26; // rax

  if ( proto_log::PlayerLogBodyExtLogin::card_product_remain_days(this) )
  {
    v2 = proto_log::PlayerLogBodyExtLogin::card_product_remain_days(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  v3 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogin.client_version",
      v8);
    v9 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v9, output);
  }
  v10 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogin.account_uid",
      v15);
    v16 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v16, output);
  }
  v17 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
    v19 = std::string::length(v18);
    v20 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
    v21 = (google::protobuf::internal::WireFormatLite *)std::string::data(v20);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v21,
      (const char *)v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogin.nickname",
      v22);
    v23 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, v23, output);
  }
  if ( proto_log::PlayerLogBodyExtLogin::is_client_relogin(this) )
  {
    is_client_relogin = proto_log::PlayerLogBodyExtLogin::is_client_relogin(this);
    google::protobuf::internal::WireFormatLite::WriteBool(5, is_client_relogin, output);
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

// Line 777: range 00000000178A2548-00000000178A2869
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyExtLogin::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyExtLogin *const this,
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
  bool is_client_relogin; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v27; // rax

  if ( proto_log::PlayerLogBodyExtLogin::card_product_remain_days(this) )
  {
    v3 = proto_log::PlayerLogBodyExtLogin::card_product_remain_days(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  v4 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
  if ( std::string::size(v4) )
  {
    v5 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
    v6 = std::string::length(v5);
    v7 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
    v8 = (google::protobuf::internal::WireFormatLite *)std::string::data(v7);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v8,
      (const char *)v6,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogin.client_version",
      v9);
    v10 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v10, target);
  }
  v11 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogin.account_uid",
      v16);
    v17 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v17, target);
  }
  v18 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogin.nickname",
      v23);
    v24 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(4, v24, target);
  }
  if ( proto_log::PlayerLogBodyExtLogin::is_client_relogin(this) )
  {
    is_client_relogin = proto_log::PlayerLogBodyExtLogin::is_client_relogin(this);
    target = google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, is_client_relogin, target);
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

// Line 834: range 00000000178A286A-00000000178A2AB9
size_t __cdecl proto_log::PlayerLogBodyExtLogin::ByteSizeLong(const proto_log::PlayerLogBodyExtLogin *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  google::protobuf::uint32 v9; // eax
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
  v3 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  if ( proto_log::PlayerLogBodyExtLogin::card_product_remain_days(this) )
  {
    v9 = proto_log::PlayerLogBodyExtLogin::card_product_remain_days(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v9) + 1;
  }
  if ( proto_log::PlayerLogBodyExtLogin::is_client_relogin(this) )
    total_size += 2LL;
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 883: range 00000000178A2ABA-00000000178A2D43
void __cdecl proto_log::PlayerLogBodyExtLogin::MergeFrom(
        proto_log::PlayerLogBodyExtLogin *const this,
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
  const proto_log::PlayerLogBodyExtLogin *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtLogin::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      885);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyExtLogin const>(from);
  if ( source )
    proto_log::PlayerLogBodyExtLogin::MergeFrom(this, source);
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

// Line 898: range 00000000178A2D44-00000000178A3278
void __cdecl proto_log::PlayerLogBodyExtLogin::MergeFrom(
        proto_log::PlayerLogBodyExtLogin *const this,
        const proto_log::PlayerLogBodyExtLogin *from)
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
  bool is_client_relogin; // dl
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtLogin::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      900);
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
  v10 = proto_log::PlayerLogBodyExtLogin::client_version[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_version_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_version_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_version_, v11, from->client_version_);
  }
  v12 = proto_log::PlayerLogBodyExtLogin::account_uid[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->account_uid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->account_uid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->account_uid_, v13, from->account_uid_);
  }
  v14 = proto_log::PlayerLogBodyExtLogin::nickname[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->nickname_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->nickname_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->nickname_, v15, from->nickname_);
  }
  if ( proto_log::PlayerLogBodyExtLogin::card_product_remain_days(from) )
  {
    v16 = proto_log::PlayerLogBodyExtLogin::card_product_remain_days(from);
    proto_log::PlayerLogBodyExtLogin::set_card_product_remain_days(this, v16);
  }
  if ( proto_log::PlayerLogBodyExtLogin::is_client_relogin(from) )
  {
    is_client_relogin = proto_log::PlayerLogBodyExtLogin::is_client_relogin(from);
    proto_log::PlayerLogBodyExtLogin::set_is_client_relogin(this, is_client_relogin);
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

// Line 925: range 00000000178A327A-00000000178A32B7
void __cdecl proto_log::PlayerLogBodyExtLogin::CopyFrom(
        proto_log::PlayerLogBodyExtLogin *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtLogin::Clear(this);
    proto_log::PlayerLogBodyExtLogin::MergeFrom(this, from);
  }
};

// Line 932: range 00000000178A32B8-00000000178A32F5
void __cdecl proto_log::PlayerLogBodyExtLogin::CopyFrom(
        proto_log::PlayerLogBodyExtLogin *const this,
        const proto_log::PlayerLogBodyExtLogin *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtLogin::Clear(this);
    proto_log::PlayerLogBodyExtLogin::MergeFrom(this, from);
  }
};

// Line 939: range 00000000178A32F6-00000000178A3304
bool __cdecl proto_log::PlayerLogBodyExtLogin::IsInitialized(const proto_log::PlayerLogBodyExtLogin *const this)
{
  return 1;
};

// Line 943: range 00000000178A3306-00000000178A3337
void __cdecl proto_log::PlayerLogBodyExtLogin::Swap(
        proto_log::PlayerLogBodyExtLogin *const this,
        proto_log::PlayerLogBodyExtLogin *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyExtLogin::InternalSwap(this, other);
};

// Line 947: range 00000000178A3338-00000000178A358E
void __cdecl proto_log::PlayerLogBodyExtLogin::InternalSwap(
        proto_log::PlayerLogBodyExtLogin *const this,
        proto_log::PlayerLogBodyExtLogin *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-70h]

  std::swap<std::string *>(&this->client_version_.ptr_, &other->client_version_.ptr_);
  std::swap<std::string *>(&this->account_uid_.ptr_, &other->account_uid_.ptr_);
  std::swap<std::string *>(&this->nickname_.ptr_, &other->nickname_.ptr_);
  std::swap<unsigned int>(&this->card_product_remain_days_, &other->card_product_remain_days_);
  std::swap<bool>(&this->is_client_relogin_, &other->is_client_relogin_);
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

// Line 958: range 00000000178A3590-00000000178A35B0
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyExtLogin::GetMetadata(
        const proto_log::PlayerLogBodyExtLogin *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[1];
};

// Line 1163: range 00000000178A35B2-00000000178A3671
void __cdecl proto_log::PlayerLogBodyExtLogout::PlayerLogBodyExtLogout(proto_log::PlayerLogBodyExtLogout *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtLogout + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyExtLogout::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  proto_log::PlayerLogBodyExtLogout::SharedCtor(this);
};

// Line 1171: range 00000000178A3672-00000000178A39A5
void __cdecl proto_log::PlayerLogBodyExtLogout::PlayerLogBodyExtLogout(
        proto_log::PlayerLogBodyExtLogout *const this,
        const proto_log::PlayerLogBodyExtLogout *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rcx
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rcx
  google::protobuf::uint32 card_product_remain_days; // ecx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtLogout + 2);
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
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->account_uid_, v4);
  v5 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->account_uid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->account_uid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->account_uid_, v6, from->account_uid_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->nickname_, v7);
  v8 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->nickname_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->nickname_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->nickname_, v9, from->nickname_);
  }
  if ( *(_BYTE *)(((unsigned __int64)&from->card_product_remain_days_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&from->card_product_remain_days_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&from->card_product_remain_days_);
  }
  card_product_remain_days = from->card_product_remain_days_;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_product_remain_days_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_product_remain_days_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_product_remain_days_);
  }
  this->card_product_remain_days_ = card_product_remain_days;
};

// Line 1188: range 00000000178A39A6-00000000178A3A6E
void __cdecl proto_log::PlayerLogBodyExtLogout::SharedCtor(proto_log::PlayerLogBodyExtLogout *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->account_uid_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->nickname_, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_product_remain_days_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_product_remain_days_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_product_remain_days_);
  }
  this->card_product_remain_days_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 1195: range 00000000178A3A70-00000000178A3AD9
void __cdecl proto_log::PlayerLogBodyExtLogout::~PlayerLogBodyExtLogout(proto_log::PlayerLogBodyExtLogout *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtLogout + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyExtLogout::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 1195: range 00000000178A3ADA-00000000178A3B04
void __cdecl proto_log::PlayerLogBodyExtLogout::~PlayerLogBodyExtLogout(proto_log::PlayerLogBodyExtLogout *const this)
{
  proto_log::PlayerLogBodyExtLogout::~PlayerLogBodyExtLogout(this);
  operator delete(this, 0x28uLL);
};

// Line 1200: range 00000000178A3B06-00000000178A3B4A
void __cdecl proto_log::PlayerLogBodyExtLogout::SharedDtor(proto_log::PlayerLogBodyExtLogout *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->account_uid_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->nickname_, v2);
};

// Line 1205: range 00000000178A3B4C-00000000178A3BA2
void __cdecl proto_log::PlayerLogBodyExtLogout::SetCachedSize(
        const proto_log::PlayerLogBodyExtLogout *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 1210: range 00000000178A3BA4-00000000178A3BB5
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyExtLogout::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[2].descriptor;
};

// Line 1215: range 00000000178A3BB6-00000000178A3BC5
const proto_log::PlayerLogBodyExtLogout *__cdecl proto_log::PlayerLogBodyExtLogout::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyExtLogout::internal_default_instance();
};

// Line 1220: range 00000000178A3BC6-00000000178A3C3A
proto_log::PlayerLogBodyExtLogout *__cdecl proto_log::PlayerLogBodyExtLogout::New(
        const proto_log::PlayerLogBodyExtLogout *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyExtLogout *v2; // rbx

  v2 = (proto_log::PlayerLogBodyExtLogout *)operator new(0x28uLL);
  proto_log::PlayerLogBodyExtLogout::PlayerLogBodyExtLogout(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyExtLogout>(arena, v2);
  return v2;
};

// Line 1228: range 00000000178A3C3C-00000000178A3D23
void __cdecl proto_log::PlayerLogBodyExtLogout::Clear(proto_log::PlayerLogBodyExtLogout *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->account_uid_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->nickname_, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_product_remain_days_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_product_remain_days_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_product_remain_days_);
  }
  this->card_product_remain_days_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 1241: range 00000000178A3D24-00000000178A478B
bool __cdecl proto_log::PlayerLogBodyExtLogout::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyExtLogout *const this,
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
  std::string *v14; // rdx
  const std::string *v15; // rax
  unsigned int v16; // r14d
  const std::string *v17; // rax
  google::protobuf::internal::WireFormatLite *v18; // rax
  const char *v19; // r8
  std::string *v20; // rdx
  const std::string *v21; // rax
  unsigned int v22; // r14d
  const std::string *v23; // rax
  google::protobuf::internal::WireFormatLite *v24; // rax
  const char *v25; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v26; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v31[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:1246";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtLogout::MergePartialFromCodedStream;
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
        if ( (_BYTE)tag != 26 )
          break;
        v20 = proto_log::PlayerLogBodyExtLogout::mutable_nickname[abi:cxx11](this);
        if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v20) )
          goto failure;
        v21 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
        v22 = std::string::length(v21);
        v23 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
        v24 = (google::protobuf::internal::WireFormatLite *)std::string::data(v23);
        if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                 v24,
                                 (const char *)v22,
                                 0,
                                 (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogout.nickname",
                                 v25) )
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
                  &this->card_product_remain_days_) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 18 )
            break;
          v14 = proto_log::PlayerLogBodyExtLogout::mutable_account_uid[abi:cxx11](this);
          if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v14) )
            goto failure;
          v15 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
          v16 = std::string::length(v15);
          v17 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
          v18 = (google::protobuf::internal::WireFormatLite *)std::string::data(v17);
          if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                   v18,
                                   (const char *)v16,
                                   0,
                                   (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogout.account_uid",
                                   v19) )
            goto failure;
        }
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_57;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v26 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v26 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v26->unknown_fields) );
failure:
  result = 0;
LABEL_57:
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
  return result;
};

// Line 1317: range 00000000178A478C-00000000178A49D5
void __cdecl proto_log::PlayerLogBodyExtLogout::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyExtLogout *const this,
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
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v18; // rax

  if ( proto_log::PlayerLogBodyExtLogout::card_product_remain_days(this) )
  {
    v2 = proto_log::PlayerLogBodyExtLogout::card_product_remain_days(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  v3 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogout.account_uid",
      v8);
    v9 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v9, output);
  }
  v10 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogout.nickname",
      v15);
    v16 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v16, output);
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
      v18 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_19:
      v18 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v18->unknown_fields, output);
  }
};

// Line 1355: range 00000000178A49D6-00000000178A4C37
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyExtLogout::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyExtLogout *const this,
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
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v19; // rax

  if ( proto_log::PlayerLogBodyExtLogout::card_product_remain_days(this) )
  {
    v3 = proto_log::PlayerLogBodyExtLogout::card_product_remain_days(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  v4 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
  if ( std::string::size(v4) )
  {
    v5 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
    v6 = std::string::length(v5);
    v7 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
    v8 = (google::protobuf::internal::WireFormatLite *)std::string::data(v7);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v8,
      (const char *)v6,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogout.account_uid",
      v9);
    v10 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v10, target);
  }
  v11 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtLogout.nickname",
      v16);
    v17 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v17, target);
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
      v19 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_19:
      v19 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v19->unknown_fields, target);
  }
  return target;
};

// Line 1396: range 00000000178A4C38-00000000178A4E38
size_t __cdecl proto_log::PlayerLogBodyExtLogout::ByteSizeLong(const proto_log::PlayerLogBodyExtLogout *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
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
  v3 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  if ( proto_log::PlayerLogBodyExtLogout::card_product_remain_days(this) )
  {
    v7 = proto_log::PlayerLogBodyExtLogout::card_product_remain_days(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v7) + 1;
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

// Line 1433: range 00000000178A4E3A-00000000178A50C3
void __cdecl proto_log::PlayerLogBodyExtLogout::MergeFrom(
        proto_log::PlayerLogBodyExtLogout *const this,
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
  const proto_log::PlayerLogBodyExtLogout *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtLogout::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      1435);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyExtLogout const>(from);
  if ( source )
    proto_log::PlayerLogBodyExtLogout::MergeFrom(this, source);
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

// Line 1448: range 00000000178A50C4-00000000178A5545
void __cdecl proto_log::PlayerLogBodyExtLogout::MergeFrom(
        proto_log::PlayerLogBodyExtLogout *const this,
        const proto_log::PlayerLogBodyExtLogout *from)
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtLogout::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      1450);
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
  v10 = proto_log::PlayerLogBodyExtLogout::account_uid[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->account_uid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->account_uid_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->account_uid_, v11, from->account_uid_);
  }
  v12 = proto_log::PlayerLogBodyExtLogout::nickname[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->nickname_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->nickname_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->nickname_, v13, from->nickname_);
  }
  if ( proto_log::PlayerLogBodyExtLogout::card_product_remain_days(from) )
  {
    v14 = proto_log::PlayerLogBodyExtLogout::card_product_remain_days(from);
    proto_log::PlayerLogBodyExtLogout::set_card_product_remain_days(this, v14);
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

// Line 1468: range 00000000178A5546-00000000178A5583
void __cdecl proto_log::PlayerLogBodyExtLogout::CopyFrom(
        proto_log::PlayerLogBodyExtLogout *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtLogout::Clear(this);
    proto_log::PlayerLogBodyExtLogout::MergeFrom(this, from);
  }
};

// Line 1475: range 00000000178A5584-00000000178A55C1
void __cdecl proto_log::PlayerLogBodyExtLogout::CopyFrom(
        proto_log::PlayerLogBodyExtLogout *const this,
        const proto_log::PlayerLogBodyExtLogout *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtLogout::Clear(this);
    proto_log::PlayerLogBodyExtLogout::MergeFrom(this, from);
  }
};

// Line 1482: range 00000000178A55C2-00000000178A55D0
bool __cdecl proto_log::PlayerLogBodyExtLogout::IsInitialized(const proto_log::PlayerLogBodyExtLogout *const this)
{
  return 1;
};

// Line 1486: range 00000000178A55D2-00000000178A5603
void __cdecl proto_log::PlayerLogBodyExtLogout::Swap(
        proto_log::PlayerLogBodyExtLogout *const this,
        proto_log::PlayerLogBodyExtLogout *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyExtLogout::InternalSwap(this, other);
};

// Line 1490: range 00000000178A5604-00000000178A57E0
void __cdecl proto_log::PlayerLogBodyExtLogout::InternalSwap(
        proto_log::PlayerLogBodyExtLogout *const this,
        proto_log::PlayerLogBodyExtLogout *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-60h]

  std::swap<std::string *>(&this->account_uid_.ptr_, &other->account_uid_.ptr_);
  std::swap<std::string *>(&this->nickname_.ptr_, &other->nickname_.ptr_);
  std::swap<unsigned int>(&this->card_product_remain_days_, &other->card_product_remain_days_);
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

// Line 1499: range 00000000178A57E2-00000000178A5802
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyExtLogout::GetMetadata(
        const proto_log::PlayerLogBodyExtLogout *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[2];
};

// Line 1635: range 00000000178A5804-00000000178A58E8
void __cdecl proto_log::PlayerLogBodyExtLevelUp::PlayerLogBodyExtLevelUp(
        proto_log::PlayerLogBodyExtLevelUp *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtLevelUp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::RepeatedPtrField(&this->avatar_list_);
  if ( this != proto_log::PlayerLogBodyExtLevelUp::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  proto_log::PlayerLogBodyExtLevelUp::SharedCtor(this);
};

// Line 1643: range 00000000178A58EA-00000000178A5ACE
void __cdecl proto_log::PlayerLogBodyExtLevelUp::PlayerLogBodyExtLevelUp(
        proto_log::PlayerLogBodyExtLevelUp *const this,
        const proto_log::PlayerLogBodyExtLevelUp *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtLevelUp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::RepeatedPtrField(&this->avatar_list_, &from->avatar_list_);
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
};

// Line 1652: range 00000000178A5AD0-00000000178A5B1C
void __cdecl proto_log::PlayerLogBodyExtLevelUp::SharedCtor(proto_log::PlayerLogBodyExtLevelUp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 1656: range 00000000178A5B1E-00000000178A5B97
void __cdecl proto_log::PlayerLogBodyExtLevelUp::~PlayerLogBodyExtLevelUp(
        proto_log::PlayerLogBodyExtLevelUp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtLevelUp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyExtLevelUp::SharedDtor(this);
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::~RepeatedPtrField(&this->avatar_list_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 1656: range 00000000178A5B98-00000000178A5BC2
void __cdecl proto_log::PlayerLogBodyExtLevelUp::~PlayerLogBodyExtLevelUp(
        proto_log::PlayerLogBodyExtLevelUp *const this)
{
  proto_log::PlayerLogBodyExtLevelUp::~PlayerLogBodyExtLevelUp(this);
  operator delete(this, 0x30uLL);
};

// Line 1661: range 00000000178A5BC4-00000000178A5BCE
void __cdecl proto_log::PlayerLogBodyExtLevelUp::SharedDtor(proto_log::PlayerLogBodyExtLevelUp *const this)
{
  ;
};

// Line 1664: range 00000000178A5BD0-00000000178A5C1E
void __cdecl proto_log::PlayerLogBodyExtLevelUp::SetCachedSize(
        const proto_log::PlayerLogBodyExtLevelUp *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 1669: range 00000000178A5C20-00000000178A5C31
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyExtLevelUp::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 1674: range 00000000178A5C32-00000000178A5C41
const proto_log::PlayerLogBodyExtLevelUp *__cdecl proto_log::PlayerLogBodyExtLevelUp::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyExtLevelUp::internal_default_instance();
};

// Line 1679: range 00000000178A5C42-00000000178A5CB6
proto_log::PlayerLogBodyExtLevelUp *__cdecl proto_log::PlayerLogBodyExtLevelUp::New(
        const proto_log::PlayerLogBodyExtLevelUp *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyExtLevelUp *v2; // rbx

  v2 = (proto_log::PlayerLogBodyExtLevelUp *)operator new(0x30uLL);
  proto_log::PlayerLogBodyExtLevelUp::PlayerLogBodyExtLevelUp(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyExtLevelUp>(arena, v2);
  return v2;
};

// Line 1687: range 00000000178A5CB8-00000000178A5D3B
void __cdecl proto_log::PlayerLogBodyExtLevelUp::Clear(proto_log::PlayerLogBodyExtLevelUp *const this)
{
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::Clear(&this->avatar_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 1698: range 00000000178A5D3C-00000000178A6628
bool __cdecl proto_log::PlayerLogBodyExtLevelUp::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyExtLevelUp *const this,
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
  proto_log::AvatarLog *v13; // rdx
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:1703";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtLevelUp::MergePartialFromCodedStream;
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
        || google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag) != 5
        || (_BYTE)tag != 42 )
      {
        break;
      }
      v13 = proto_log::PlayerLogBodyExtLevelUp::add_avatar_list(this);
      if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<proto_log::AvatarLog>(input, v13) )
        goto failure;
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_43;
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
LABEL_43:
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

// Line 1740: range 00000000178A662A-00000000178A6781
void __cdecl proto_log::PlayerLogBodyExtLevelUp::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyExtLevelUp *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const proto_log::AvatarLog *v2; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v4; // rax
  unsigned int i; // [rsp+1Ch] [rbp-34h]
  unsigned int n; // [rsp+24h] [rbp-2Ch]

  i = 0;
  n = proto_log::PlayerLogBodyExtLevelUp::avatar_list_size(this);
  while ( i < n )
  {
    v2 = proto_log::PlayerLogBodyExtLevelUp::avatar_list(this, i);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(5, v2, output);
    ++i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v4 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_16:
      v4 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v4->unknown_fields, output);
  }
};

// Line 1760: range 00000000178A6782-00000000178A68F2
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyExtLevelUp::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyExtLevelUp *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const proto_log::AvatarLog *v3; // rsi
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax
  unsigned int i; // [rsp+2Ch] [rbp-44h]
  unsigned int n; // [rsp+34h] [rbp-3Ch]

  i = 0;
  n = proto_log::PlayerLogBodyExtLevelUp::avatar_list_size(this);
  while ( i < n )
  {
    v3 = proto_log::PlayerLogBodyExtLevelUp::avatar_list(this, i);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<proto_log::AvatarLog>(
               5,
               v3,
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
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_16:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v5->unknown_fields, target);
  }
  return target;
};

// Line 1782: range 00000000178A68F4-00000000178A6A90
size_t __cdecl proto_log::PlayerLogBodyExtLevelUp::ByteSizeLong(const proto_log::PlayerLogBodyExtLevelUp *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const proto_log::AvatarLog *v3; // rax
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
  count = proto_log::PlayerLogBodyExtLevelUp::avatar_list_size(this);
  total_sizea = count + total_size;
  for ( i = 0; i < count; ++i )
  {
    v3 = proto_log::PlayerLogBodyExtLevelUp::avatar_list(this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<proto_log::AvatarLog>(v3);
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

// Line 1809: range 00000000178A6A92-00000000178A6D1B
void __cdecl proto_log::PlayerLogBodyExtLevelUp::MergeFrom(
        proto_log::PlayerLogBodyExtLevelUp *const this,
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
  const proto_log::PlayerLogBodyExtLevelUp *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtLevelUp::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      1811);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyExtLevelUp const>(from);
  if ( source )
    proto_log::PlayerLogBodyExtLevelUp::MergeFrom(this, source);
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

// Line 1824: range 00000000178A6D1C-00000000178A709E
void __cdecl proto_log::PlayerLogBodyExtLevelUp::MergeFrom(
        proto_log::PlayerLogBodyExtLevelUp *const this,
        const proto_log::PlayerLogBodyExtLevelUp *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  char v10; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v12[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtLevelUp::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v10 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_ext.pb.cc",
      1826);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v10 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v10 )
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
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::MergeFrom(&this->avatar_list_, &from->avatar_list_);
  if ( v12 == (char *)v2 )
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

// Line 1834: range 00000000178A70A0-00000000178A70DD
void __cdecl proto_log::PlayerLogBodyExtLevelUp::CopyFrom(
        proto_log::PlayerLogBodyExtLevelUp *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtLevelUp::Clear(this);
    proto_log::PlayerLogBodyExtLevelUp::MergeFrom(this, from);
  }
};

// Line 1841: range 00000000178A70DE-00000000178A711B
void __cdecl proto_log::PlayerLogBodyExtLevelUp::CopyFrom(
        proto_log::PlayerLogBodyExtLevelUp *const this,
        const proto_log::PlayerLogBodyExtLevelUp *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtLevelUp::Clear(this);
    proto_log::PlayerLogBodyExtLevelUp::MergeFrom(this, from);
  }
};

// Line 1848: range 00000000178A711C-00000000178A712A
bool __cdecl proto_log::PlayerLogBodyExtLevelUp::IsInitialized(const proto_log::PlayerLogBodyExtLevelUp *const this)
{
  return 1;
};

// Line 1852: range 00000000178A712C-00000000178A715D
void __cdecl proto_log::PlayerLogBodyExtLevelUp::Swap(
        proto_log::PlayerLogBodyExtLevelUp *const this,
        proto_log::PlayerLogBodyExtLevelUp *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyExtLevelUp::InternalSwap(this, other);
};

// Line 1856: range 00000000178A715E-00000000178A72E2
void __cdecl proto_log::PlayerLogBodyExtLevelUp::InternalSwap(
        proto_log::PlayerLogBodyExtLevelUp *const this,
        proto_log::PlayerLogBodyExtLevelUp *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(&this->avatar_list_, &other->avatar_list_);
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

// Line 1863: range 00000000178A72E4-00000000178A7304
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyExtLevelUp::GetMetadata(
        const proto_log::PlayerLogBodyExtLevelUp *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[3];
};

// Line 1914: range 00000000178A7306-00000000178A73C5
void __cdecl proto_log::PlayerLogBodyExtGadget::PlayerLogBodyExtGadget(proto_log::PlayerLogBodyExtGadget *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyExtGadget::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  proto_log::PlayerLogBodyExtGadget::SharedCtor(this);
};

// Line 1922: range 00000000178A73C6-00000000178A759A
void __cdecl proto_log::PlayerLogBodyExtGadget::PlayerLogBodyExtGadget(
        proto_log::PlayerLogBodyExtGadget *const this,
        const proto_log::PlayerLogBodyExtGadget *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtGadget + 2);
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
  memcpy(&this->group_id_, &from->group_id_, 0x18uLL);
};

// Line 1933: range 00000000178A759C-00000000178A7602
void __cdecl proto_log::PlayerLogBodyExtGadget::SharedCtor(proto_log::PlayerLogBodyExtGadget *const this)
{
  memset(&this->group_id_, 0, 0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 1940: range 00000000178A7604-00000000178A766D
void __cdecl proto_log::PlayerLogBodyExtGadget::~PlayerLogBodyExtGadget(proto_log::PlayerLogBodyExtGadget *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyExtGadget::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 1940: range 00000000178A766E-00000000178A7698
void __cdecl proto_log::PlayerLogBodyExtGadget::~PlayerLogBodyExtGadget(proto_log::PlayerLogBodyExtGadget *const this)
{
  proto_log::PlayerLogBodyExtGadget::~PlayerLogBodyExtGadget(this);
  operator delete(this, 0x30uLL);
};

// Line 1945: range 00000000178A769A-00000000178A76A4
void __cdecl proto_log::PlayerLogBodyExtGadget::SharedDtor(proto_log::PlayerLogBodyExtGadget *const this)
{
  ;
};

// Line 1948: range 00000000178A76A6-00000000178A76F4
void __cdecl proto_log::PlayerLogBodyExtGadget::SetCachedSize(
        const proto_log::PlayerLogBodyExtGadget *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 1953: range 00000000178A76F6-00000000178A7707
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyExtGadget::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[4].descriptor;
};

// Line 1958: range 00000000178A7708-00000000178A7717
const proto_log::PlayerLogBodyExtGadget *__cdecl proto_log::PlayerLogBodyExtGadget::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyExtGadget::internal_default_instance();
};

// Line 1963: range 00000000178A7718-00000000178A778C
proto_log::PlayerLogBodyExtGadget *__cdecl proto_log::PlayerLogBodyExtGadget::New(
        const proto_log::PlayerLogBodyExtGadget *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyExtGadget *v2; // rbx

  v2 = (proto_log::PlayerLogBodyExtGadget *)operator new(0x30uLL);
  proto_log::PlayerLogBodyExtGadget::PlayerLogBodyExtGadget(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyExtGadget>(arena, v2);
  return v2;
};

// Line 1971: range 00000000178A778E-00000000178A781B
void __cdecl proto_log::PlayerLogBodyExtGadget::Clear(proto_log::PlayerLogBodyExtGadget *const this)
{
  memset(&this->group_id_, 0, 0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 1984: range 00000000178A781C-00000000178A8299
bool __cdecl proto_log::PlayerLogBodyExtGadget::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyExtGadget *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:1989";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtGadget::MergePartialFromCodedStream;
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
                    &this->group_id_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->config_id_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->entity_id_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    input,
                    &this->x_coordinate_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    input,
                    &this->y_coordinate_) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 48 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    input,
                    &this->z_coordinate_) )
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
      goto LABEL_63;
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
LABEL_63:
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

// Line 2098: range 00000000178A829A-00000000178A84E9
void __cdecl proto_log::PlayerLogBodyExtGadget::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyExtGadget *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::int32 v5; // ecx
  google::protobuf::int32 v6; // ecx
  google::protobuf::int32 v7; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rax

  if ( proto_log::PlayerLogBodyExtGadget::group_id(this) )
  {
    v2 = proto_log::PlayerLogBodyExtGadget::group_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyExtGadget::config_id(this) )
  {
    v3 = proto_log::PlayerLogBodyExtGadget::config_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::PlayerLogBodyExtGadget::entity_id(this) )
  {
    v4 = proto_log::PlayerLogBodyExtGadget::entity_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  if ( proto_log::PlayerLogBodyExtGadget::x_coordinate(this) )
  {
    v5 = proto_log::PlayerLogBodyExtGadget::x_coordinate(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(4, v5, output);
  }
  if ( proto_log::PlayerLogBodyExtGadget::y_coordinate(this) )
  {
    v6 = proto_log::PlayerLogBodyExtGadget::y_coordinate(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(5, v6, output);
  }
  if ( proto_log::PlayerLogBodyExtGadget::z_coordinate(this) )
  {
    v7 = proto_log::PlayerLogBodyExtGadget::z_coordinate(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(6, v7, output);
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
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v9->unknown_fields, output);
  }
};

// Line 2141: range 00000000178A84EA-00000000178A875D
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyExtGadget::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyExtGadget *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::int32 v6; // ecx
  google::protobuf::int32 v7; // ecx
  google::protobuf::int32 v8; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v10; // rax

  if ( proto_log::PlayerLogBodyExtGadget::group_id(this) )
  {
    v3 = proto_log::PlayerLogBodyExtGadget::group_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyExtGadget::config_id(this) )
  {
    v4 = proto_log::PlayerLogBodyExtGadget::config_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogBodyExtGadget::entity_id(this) )
  {
    v5 = proto_log::PlayerLogBodyExtGadget::entity_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  if ( proto_log::PlayerLogBodyExtGadget::x_coordinate(this) )
  {
    v6 = proto_log::PlayerLogBodyExtGadget::x_coordinate(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, v6, target);
  }
  if ( proto_log::PlayerLogBodyExtGadget::y_coordinate(this) )
  {
    v7 = proto_log::PlayerLogBodyExtGadget::y_coordinate(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, v7, target);
  }
  if ( proto_log::PlayerLogBodyExtGadget::z_coordinate(this) )
  {
    v8 = proto_log::PlayerLogBodyExtGadget::z_coordinate(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, v8, target);
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
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_25:
      v10 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v10->unknown_fields, target);
  }
  return target;
};

// Line 2185: range 00000000178A875E-00000000178A89D2
size_t __cdecl proto_log::PlayerLogBodyExtGadget::ByteSizeLong(const proto_log::PlayerLogBodyExtGadget *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  google::protobuf::uint32 v5; // eax
  google::protobuf::int32 v6; // eax
  google::protobuf::int32 v7; // eax
  google::protobuf::int32 v8; // eax
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
  if ( proto_log::PlayerLogBodyExtGadget::group_id(this) )
  {
    v3 = proto_log::PlayerLogBodyExtGadget::group_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::PlayerLogBodyExtGadget::config_id(this) )
  {
    v4 = proto_log::PlayerLogBodyExtGadget::config_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::PlayerLogBodyExtGadget::entity_id(this) )
  {
    v5 = proto_log::PlayerLogBodyExtGadget::entity_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v5) + 1;
  }
  if ( proto_log::PlayerLogBodyExtGadget::x_coordinate(this) )
  {
    v6 = proto_log::PlayerLogBodyExtGadget::x_coordinate(this);
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(v6) + 1;
  }
  if ( proto_log::PlayerLogBodyExtGadget::y_coordinate(this) )
  {
    v7 = proto_log::PlayerLogBodyExtGadget::y_coordinate(this);
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(v7) + 1;
  }
  if ( proto_log::PlayerLogBodyExtGadget::z_coordinate(this) )
  {
    v8 = proto_log::PlayerLogBodyExtGadget::z_coordinate(this);
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(v8) + 1;
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

// Line 2243: range 00000000178A89D4-00000000178A8C5D
void __cdecl proto_log::PlayerLogBodyExtGadget::MergeFrom(
        proto_log::PlayerLogBodyExtGadget *const this,
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
  const proto_log::PlayerLogBodyExtGadget *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtGadget::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      2245);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyExtGadget const>(from);
  if ( source )
    proto_log::PlayerLogBodyExtGadget::MergeFrom(this, source);
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

// Line 2258: range 00000000178A8C5E-00000000178A9117
void __cdecl proto_log::PlayerLogBodyExtGadget::MergeFrom(
        proto_log::PlayerLogBodyExtGadget *const this,
        const proto_log::PlayerLogBodyExtGadget *from)
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
  google::protobuf::int32 v13; // edx
  google::protobuf::int32 v14; // edx
  google::protobuf::int32 v15; // edx
  char v16; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v18[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtGadget::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v16 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_ext.pb.cc",
      2260);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v16 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v16 )
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
  if ( proto_log::PlayerLogBodyExtGadget::group_id(from) )
  {
    v10 = proto_log::PlayerLogBodyExtGadget::group_id(from);
    proto_log::PlayerLogBodyExtGadget::set_group_id(this, v10);
  }
  if ( proto_log::PlayerLogBodyExtGadget::config_id(from) )
  {
    v11 = proto_log::PlayerLogBodyExtGadget::config_id(from);
    proto_log::PlayerLogBodyExtGadget::set_config_id(this, v11);
  }
  if ( proto_log::PlayerLogBodyExtGadget::entity_id(from) )
  {
    v12 = proto_log::PlayerLogBodyExtGadget::entity_id(from);
    proto_log::PlayerLogBodyExtGadget::set_entity_id(this, v12);
  }
  if ( proto_log::PlayerLogBodyExtGadget::x_coordinate(from) )
  {
    v13 = proto_log::PlayerLogBodyExtGadget::x_coordinate(from);
    proto_log::PlayerLogBodyExtGadget::set_x_coordinate(this, v13);
  }
  if ( proto_log::PlayerLogBodyExtGadget::y_coordinate(from) )
  {
    v14 = proto_log::PlayerLogBodyExtGadget::y_coordinate(from);
    proto_log::PlayerLogBodyExtGadget::set_y_coordinate(this, v14);
  }
  if ( proto_log::PlayerLogBodyExtGadget::z_coordinate(from) )
  {
    v15 = proto_log::PlayerLogBodyExtGadget::z_coordinate(from);
    proto_log::PlayerLogBodyExtGadget::set_z_coordinate(this, v15);
  }
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
};

// Line 2285: range 00000000178A9118-00000000178A9155
void __cdecl proto_log::PlayerLogBodyExtGadget::CopyFrom(
        proto_log::PlayerLogBodyExtGadget *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtGadget::Clear(this);
    proto_log::PlayerLogBodyExtGadget::MergeFrom(this, from);
  }
};

// Line 2292: range 00000000178A9156-00000000178A9193
void __cdecl proto_log::PlayerLogBodyExtGadget::CopyFrom(
        proto_log::PlayerLogBodyExtGadget *const this,
        const proto_log::PlayerLogBodyExtGadget *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtGadget::Clear(this);
    proto_log::PlayerLogBodyExtGadget::MergeFrom(this, from);
  }
};

// Line 2299: range 00000000178A9194-00000000178A91A2
bool __cdecl proto_log::PlayerLogBodyExtGadget::IsInitialized(const proto_log::PlayerLogBodyExtGadget *const this)
{
  return 1;
};

// Line 2303: range 00000000178A91A4-00000000178A91D5
void __cdecl proto_log::PlayerLogBodyExtGadget::Swap(
        proto_log::PlayerLogBodyExtGadget *const this,
        proto_log::PlayerLogBodyExtGadget *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyExtGadget::InternalSwap(this, other);
};

// Line 2307: range 00000000178A91D6-00000000178A93E1
void __cdecl proto_log::PlayerLogBodyExtGadget::InternalSwap(
        proto_log::PlayerLogBodyExtGadget *const this,
        proto_log::PlayerLogBodyExtGadget *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->group_id_, &other->group_id_);
  std::swap<unsigned int>(&this->config_id_, &other->config_id_);
  std::swap<unsigned int>(&this->entity_id_, &other->entity_id_);
  std::swap<int>(&this->x_coordinate_, &other->x_coordinate_);
  std::swap<int>(&this->y_coordinate_, &other->y_coordinate_);
  std::swap<int>(&this->z_coordinate_, &other->z_coordinate_);
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

// Line 2319: range 00000000178A93E2-00000000178A9402
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyExtGadget::GetMetadata(
        const proto_log::PlayerLogBodyExtGadget *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[4];
};

// Line 2419: range 00000000178A9404-00000000178A94C3
void __cdecl proto_log::PlayerLogBodyExtMissionType::PlayerLogBodyExtMissionType(
        proto_log::PlayerLogBodyExtMissionType *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtMissionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyExtMissionType::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  proto_log::PlayerLogBodyExtMissionType::SharedCtor(this);
};

// Line 2427: range 00000000178A94C4-00000000178A96F5
void __cdecl proto_log::PlayerLogBodyExtMissionType::PlayerLogBodyExtMissionType(
        proto_log::PlayerLogBodyExtMissionType *const this,
        const proto_log::PlayerLogBodyExtMissionType *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::uint32 quest_type; // ecx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtMissionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  if ( *(_BYTE *)(((unsigned __int64)&from->quest_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&from->quest_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&from->quest_type_);
  }
  quest_type = from->quest_type_;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_type_);
  }
  this->quest_type_ = quest_type;
};

// Line 2436: range 00000000178A96F6-00000000178A9788
void __cdecl proto_log::PlayerLogBodyExtMissionType::SharedCtor(proto_log::PlayerLogBodyExtMissionType *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_type_);
  }
  this->quest_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 2441: range 00000000178A978A-00000000178A97F3
void __cdecl proto_log::PlayerLogBodyExtMissionType::~PlayerLogBodyExtMissionType(
        proto_log::PlayerLogBodyExtMissionType *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtMissionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyExtMissionType::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 2441: range 00000000178A97F4-00000000178A981E
void __cdecl proto_log::PlayerLogBodyExtMissionType::~PlayerLogBodyExtMissionType(
        proto_log::PlayerLogBodyExtMissionType *const this)
{
  proto_log::PlayerLogBodyExtMissionType::~PlayerLogBodyExtMissionType(this);
  operator delete(this, 0x18uLL);
};

// Line 2446: range 00000000178A9820-00000000178A982A
void __cdecl proto_log::PlayerLogBodyExtMissionType::SharedDtor(proto_log::PlayerLogBodyExtMissionType *const this)
{
  ;
};

// Line 2449: range 00000000178A982C-00000000178A9882
void __cdecl proto_log::PlayerLogBodyExtMissionType::SetCachedSize(
        const proto_log::PlayerLogBodyExtMissionType *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 2454: range 00000000178A9884-00000000178A9895
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyExtMissionType::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[5].descriptor;
};

// Line 2459: range 00000000178A9896-00000000178A98A5
const proto_log::PlayerLogBodyExtMissionType *__cdecl proto_log::PlayerLogBodyExtMissionType::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyExtMissionType::internal_default_instance();
};

// Line 2464: range 00000000178A98A6-00000000178A991A
proto_log::PlayerLogBodyExtMissionType *__cdecl proto_log::PlayerLogBodyExtMissionType::New(
        const proto_log::PlayerLogBodyExtMissionType *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyExtMissionType *v2; // rbx

  v2 = (proto_log::PlayerLogBodyExtMissionType *)operator new(0x18uLL);
  proto_log::PlayerLogBodyExtMissionType::PlayerLogBodyExtMissionType(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyExtMissionType>(arena, v2);
  return v2;
};

// Line 2472: range 00000000178A991C-00000000178A99CD
void __cdecl proto_log::PlayerLogBodyExtMissionType::Clear(proto_log::PlayerLogBodyExtMissionType *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_type_);
  }
  this->quest_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 2483: range 00000000178A99CE-00000000178AA2B3
bool __cdecl proto_log::PlayerLogBodyExtMissionType::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyExtMissionType *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:2488";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtMissionType::MergePartialFromCodedStream;
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
        || (_BYTE)tag != 8 )
      {
        break;
      }
      if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
              input,
              &this->quest_type_) )
        goto failure;
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_43;
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
LABEL_43:
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

// Line 2527: range 00000000178AA2B4-00000000178AA3F5
void __cdecl proto_log::PlayerLogBodyExtMissionType::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyExtMissionType *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v4; // rax

  if ( proto_log::PlayerLogBodyExtMissionType::quest_type(this) )
  {
    v2 = proto_log::PlayerLogBodyExtMissionType::quest_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
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
      v4 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_15:
      v4 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v4->unknown_fields, output);
  }
};

// Line 2545: range 00000000178AA3F6-00000000178AA547
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyExtMissionType::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyExtMissionType *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax

  if ( proto_log::PlayerLogBodyExtMissionType::quest_type(this) )
  {
    v3 = proto_log::PlayerLogBodyExtMissionType::quest_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
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
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_15:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v5->unknown_fields, target);
  }
  return target;
};

// Line 2564: range 00000000178AA548-00000000178AA6D4
size_t __cdecl proto_log::PlayerLogBodyExtMissionType::ByteSizeLong(
        const proto_log::PlayerLogBodyExtMissionType *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
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
  if ( proto_log::PlayerLogBodyExtMissionType::quest_type(this) )
  {
    v3 = proto_log::PlayerLogBodyExtMissionType::quest_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 2587: range 00000000178AA6D6-00000000178AA95F
void __cdecl proto_log::PlayerLogBodyExtMissionType::MergeFrom(
        proto_log::PlayerLogBodyExtMissionType *const this,
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
  const proto_log::PlayerLogBodyExtMissionType *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtMissionType::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      2589);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyExtMissionType const>(from);
  if ( source )
    proto_log::PlayerLogBodyExtMissionType::MergeFrom(this, source);
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

// Line 2602: range 00000000178AA960-00000000178AACF7
void __cdecl proto_log::PlayerLogBodyExtMissionType::MergeFrom(
        proto_log::PlayerLogBodyExtMissionType *const this,
        const proto_log::PlayerLogBodyExtMissionType *from)
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtMissionType::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      2604);
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
  if ( proto_log::PlayerLogBodyExtMissionType::quest_type(from) )
  {
    v10 = proto_log::PlayerLogBodyExtMissionType::quest_type(from);
    proto_log::PlayerLogBodyExtMissionType::set_quest_type(this, v10);
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

// Line 2614: range 00000000178AACF8-00000000178AAD35
void __cdecl proto_log::PlayerLogBodyExtMissionType::CopyFrom(
        proto_log::PlayerLogBodyExtMissionType *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtMissionType::Clear(this);
    proto_log::PlayerLogBodyExtMissionType::MergeFrom(this, from);
  }
};

// Line 2621: range 00000000178AAD36-00000000178AAD73
void __cdecl proto_log::PlayerLogBodyExtMissionType::CopyFrom(
        proto_log::PlayerLogBodyExtMissionType *const this,
        const proto_log::PlayerLogBodyExtMissionType *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtMissionType::Clear(this);
    proto_log::PlayerLogBodyExtMissionType::MergeFrom(this, from);
  }
};

// Line 2628: range 00000000178AAD74-00000000178AAD82
bool __cdecl proto_log::PlayerLogBodyExtMissionType::IsInitialized(
        const proto_log::PlayerLogBodyExtMissionType *const this)
{
  return 1;
};

// Line 2632: range 00000000178AAD84-00000000178AADB5
void __cdecl proto_log::PlayerLogBodyExtMissionType::Swap(
        proto_log::PlayerLogBodyExtMissionType *const this,
        proto_log::PlayerLogBodyExtMissionType *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyExtMissionType::InternalSwap(this, other);
};

// Line 2636: range 00000000178AADB6-00000000178AAF3A
void __cdecl proto_log::PlayerLogBodyExtMissionType::InternalSwap(
        proto_log::PlayerLogBodyExtMissionType *const this,
        proto_log::PlayerLogBodyExtMissionType *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->quest_type_, &other->quest_type_);
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

// Line 2643: range 00000000178AAF3C-00000000178AAF5C
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyExtMissionType::GetMetadata(
        const proto_log::PlayerLogBodyExtMissionType *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[5];
};

// Line 2677: range 00000000178AAF5E-00000000178AB01D
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::PlayerLogBodyExtAddMaterial(
        proto_log::PlayerLogBodyExtAddMaterial *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtAddMaterial + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyExtAddMaterial::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  proto_log::PlayerLogBodyExtAddMaterial::SharedCtor(this);
};

// Line 2685: range 00000000178AB01E-00000000178AB351
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::PlayerLogBodyExtAddMaterial(
        proto_log::PlayerLogBodyExtAddMaterial *const this,
        const proto_log::PlayerLogBodyExtAddMaterial *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rcx
  google::protobuf::uint32 *p_reason_type; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtAddMaterial + 2);
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->add_num_limit_, v4);
  v5 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->add_num_limit_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->add_num_limit_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->add_num_limit_, v6, from->add_num_limit_);
  }
  p_reason_type = &from->reason_type_;
  v8 = (unsigned __int64)&this->reason_type_;
  if ( (((unsigned __int8)from + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&from->reason_type_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->reason_type_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->total_add_num_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&from->total_add_num_ + 3) >> 3) + 0x7FFF8000) )
  {
    v8 = 16LL;
    __asan_report_load_n(&from->reason_type_, 16LL);
  }
  v9 = *((_QWORD *)p_reason_type + 1);
  v10 = *(_QWORD *)p_reason_type;
  v11 = v8;
  if ( (char)(v8 & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v8 + 15) >> 3) + 0x7FFF8000) != 0
    && (char)((v8 + 15) & 7) >= *(_BYTE *)(((v8 + 15) >> 3) + 0x7FFF8000) )
  {
    v8 = 16LL;
    __asan_report_store_n(v11, 16LL);
  }
  *(_QWORD *)v8 = v10;
  *(_QWORD *)(v8 + 8) = v9;
};

// Line 2700: range 00000000178AB352-00000000178AB3D6
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::SharedCtor(proto_log::PlayerLogBodyExtAddMaterial *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->add_num_limit_, v1);
  memset(&this->reason_type_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 2708: range 00000000178AB3D8-00000000178AB441
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::~PlayerLogBodyExtAddMaterial(
        proto_log::PlayerLogBodyExtAddMaterial *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtAddMaterial + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyExtAddMaterial::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 2708: range 00000000178AB442-00000000178AB46C
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::~PlayerLogBodyExtAddMaterial(
        proto_log::PlayerLogBodyExtAddMaterial *const this)
{
  proto_log::PlayerLogBodyExtAddMaterial::~PlayerLogBodyExtAddMaterial(this);
  operator delete(this, 0x30uLL);
};

// Line 2713: range 00000000178AB46E-00000000178AB49A
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::SharedDtor(proto_log::PlayerLogBodyExtAddMaterial *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->add_num_limit_, v1);
};

// Line 2717: range 00000000178AB49C-00000000178AB4EA
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::SetCachedSize(
        const proto_log::PlayerLogBodyExtAddMaterial *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 2722: range 00000000178AB4EC-00000000178AB4FD
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyExtAddMaterial::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[6].descriptor;
};

// Line 2727: range 00000000178AB4FE-00000000178AB50D
const proto_log::PlayerLogBodyExtAddMaterial *__cdecl proto_log::PlayerLogBodyExtAddMaterial::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyExtAddMaterial::internal_default_instance();
};

// Line 2732: range 00000000178AB50E-00000000178AB582
proto_log::PlayerLogBodyExtAddMaterial *__cdecl proto_log::PlayerLogBodyExtAddMaterial::New(
        const proto_log::PlayerLogBodyExtAddMaterial *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyExtAddMaterial *v2; // rbx

  v2 = (proto_log::PlayerLogBodyExtAddMaterial *)operator new(0x30uLL);
  proto_log::PlayerLogBodyExtAddMaterial::PlayerLogBodyExtAddMaterial(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyExtAddMaterial>(arena, v2);
  return v2;
};

// Line 2740: range 00000000178AB584-00000000178AB62F
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::Clear(proto_log::PlayerLogBodyExtAddMaterial *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->add_num_limit_, v1);
  memset(&this->reason_type_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 2754: range 00000000178AB630-00000000178AC0D2
bool __cdecl proto_log::PlayerLogBodyExtAddMaterial::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyExtAddMaterial *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:2759";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtAddMaterial::MergePartialFromCodedStream;
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
                    &this->reason_type_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->item_limit_type_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->refresh_type_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->total_add_num_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v13 = proto_log::PlayerLogBodyExtAddMaterial::mutable_add_num_limit[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtAd"
                                                                                            "dMaterial.add_num_limit",
                                     v18) )
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
      goto LABEL_60;
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
LABEL_60:
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

// Line 2856: range 00000000178AC0D4-00000000178AC33E
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyExtAddMaterial *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 refreshed; // ecx
  google::protobuf::uint32 v5; // ecx
  const std::string *v6; // rax
  const std::string *v7; // rax
  unsigned int v8; // ebx
  const std::string *v9; // rax
  google::protobuf::internal::WireFormatLite *v10; // rax
  const char *v11; // r8
  const std::string *v12; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v14; // rax

  if ( proto_log::PlayerLogBodyExtAddMaterial::reason_type(this) )
  {
    v2 = proto_log::PlayerLogBodyExtAddMaterial::reason_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::item_limit_type(this) )
  {
    v3 = proto_log::PlayerLogBodyExtAddMaterial::item_limit_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::refresh_type(this) )
  {
    refreshed = proto_log::PlayerLogBodyExtAddMaterial::refresh_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, refreshed, output);
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::total_add_num(this) )
  {
    v5 = proto_log::PlayerLogBodyExtAddMaterial::total_add_num(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v5, output);
  }
  v6 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
  if ( std::string::size(v6) )
  {
    v7 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
    v8 = std::string::length(v7);
    v9 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
    v10 = (google::protobuf::internal::WireFormatLite *)std::string::data(v9);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v10,
      (const char *)v8,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtAddMaterial.add_num_limit",
      v11);
    v12 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v12, output);
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
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_23:
      v14 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v14->unknown_fields, output);
  }
};

// Line 2899: range 00000000178AC340-00000000178AC5CA
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyExtAddMaterial::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyExtAddMaterial *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 refreshed; // ecx
  google::protobuf::uint32 v6; // ecx
  const std::string *v7; // rax
  const std::string *v8; // rax
  unsigned int v9; // ebx
  const std::string *v10; // rax
  google::protobuf::internal::WireFormatLite *v11; // rax
  const char *v12; // r8
  const std::string *v13; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v15; // rax

  if ( proto_log::PlayerLogBodyExtAddMaterial::reason_type(this) )
  {
    v3 = proto_log::PlayerLogBodyExtAddMaterial::reason_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::item_limit_type(this) )
  {
    v4 = proto_log::PlayerLogBodyExtAddMaterial::item_limit_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::refresh_type(this) )
  {
    refreshed = proto_log::PlayerLogBodyExtAddMaterial::refresh_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, refreshed, target);
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::total_add_num(this) )
  {
    v6 = proto_log::PlayerLogBodyExtAddMaterial::total_add_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v6, target);
  }
  v7 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
    v9 = std::string::length(v8);
    v10 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
    v11 = (google::protobuf::internal::WireFormatLite *)std::string::data(v10);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v11,
      (const char *)v9,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtAddMaterial.add_num_limit",
      v12);
    v13 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v13, target);
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
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_23:
      v15 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v15->unknown_fields, target);
  }
  return target;
};

// Line 2944: range 00000000178AC5CC-00000000178AC81A
size_t __cdecl proto_log::PlayerLogBodyExtAddMaterial::ByteSizeLong(
        const proto_log::PlayerLogBodyExtAddMaterial *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  google::protobuf::uint32 v5; // eax
  google::protobuf::uint32 v6; // eax
  google::protobuf::uint32 refreshed; // eax
  google::protobuf::uint32 v8; // eax
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
  v3 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::reason_type(this) )
  {
    v5 = proto_log::PlayerLogBodyExtAddMaterial::reason_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v5) + 1;
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::item_limit_type(this) )
  {
    v6 = proto_log::PlayerLogBodyExtAddMaterial::item_limit_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v6) + 1;
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::refresh_type(this) )
  {
    refreshed = proto_log::PlayerLogBodyExtAddMaterial::refresh_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(refreshed) + 1;
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::total_add_num(this) )
  {
    v8 = proto_log::PlayerLogBodyExtAddMaterial::total_add_num(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v8) + 1;
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

// Line 2995: range 00000000178AC81C-00000000178ACAA5
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::MergeFrom(
        proto_log::PlayerLogBodyExtAddMaterial *const this,
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
  const proto_log::PlayerLogBodyExtAddMaterial *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtAddMaterial::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      2997);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyExtAddMaterial const>(from);
  if ( source )
    proto_log::PlayerLogBodyExtAddMaterial::MergeFrom(this, source);
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

// Line 3010: range 00000000178ACAA6-00000000178ACF60
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::MergeFrom(
        proto_log::PlayerLogBodyExtAddMaterial *const this,
        const proto_log::PlayerLogBodyExtAddMaterial *from)
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
  google::protobuf::uint32 refreshed; // edx
  google::protobuf::uint32 v15; // edx
  char v16; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v18[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtAddMaterial::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v16 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_ext.pb.cc",
      3012);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v16 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v16 )
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
  v10 = proto_log::PlayerLogBodyExtAddMaterial::add_num_limit[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->add_num_limit_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->add_num_limit_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->add_num_limit_, v11, from->add_num_limit_);
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::reason_type(from) )
  {
    v12 = proto_log::PlayerLogBodyExtAddMaterial::reason_type(from);
    proto_log::PlayerLogBodyExtAddMaterial::set_reason_type(this, v12);
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::item_limit_type(from) )
  {
    v13 = proto_log::PlayerLogBodyExtAddMaterial::item_limit_type(from);
    proto_log::PlayerLogBodyExtAddMaterial::set_item_limit_type(this, v13);
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::refresh_type(from) )
  {
    refreshed = proto_log::PlayerLogBodyExtAddMaterial::refresh_type(from);
    proto_log::PlayerLogBodyExtAddMaterial::set_refresh_type(this, refreshed);
  }
  if ( proto_log::PlayerLogBodyExtAddMaterial::total_add_num(from) )
  {
    v15 = proto_log::PlayerLogBodyExtAddMaterial::total_add_num(from);
    proto_log::PlayerLogBodyExtAddMaterial::set_total_add_num(this, v15);
  }
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
};

// Line 3035: range 00000000178ACF62-00000000178ACF9F
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::CopyFrom(
        proto_log::PlayerLogBodyExtAddMaterial *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtAddMaterial::Clear(this);
    proto_log::PlayerLogBodyExtAddMaterial::MergeFrom(this, from);
  }
};

// Line 3042: range 00000000178ACFA0-00000000178ACFDD
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::CopyFrom(
        proto_log::PlayerLogBodyExtAddMaterial *const this,
        const proto_log::PlayerLogBodyExtAddMaterial *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtAddMaterial::Clear(this);
    proto_log::PlayerLogBodyExtAddMaterial::MergeFrom(this, from);
  }
};

// Line 3049: range 00000000178ACFDE-00000000178ACFEC
bool __cdecl proto_log::PlayerLogBodyExtAddMaterial::IsInitialized(
        const proto_log::PlayerLogBodyExtAddMaterial *const this)
{
  return 1;
};

// Line 3053: range 00000000178ACFEE-00000000178AD01F
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::Swap(
        proto_log::PlayerLogBodyExtAddMaterial *const this,
        proto_log::PlayerLogBodyExtAddMaterial *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyExtAddMaterial::InternalSwap(this, other);
};

// Line 3057: range 00000000178AD020-00000000178AD221
void __cdecl proto_log::PlayerLogBodyExtAddMaterial::InternalSwap(
        proto_log::PlayerLogBodyExtAddMaterial *const this,
        proto_log::PlayerLogBodyExtAddMaterial *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-50h]

  std::swap<std::string *>(&this->add_num_limit_.ptr_, &other->add_num_limit_.ptr_);
  std::swap<unsigned int>(&this->reason_type_, &other->reason_type_);
  std::swap<unsigned int>(&this->item_limit_type_, &other->item_limit_type_);
  std::swap<unsigned int>(&this->refresh_type_, &other->refresh_type_);
  std::swap<unsigned int>(&this->total_add_num_, &other->total_add_num_);
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

// Line 3068: range 00000000178AD222-00000000178AD242
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyExtAddMaterial::GetMetadata(
        const proto_log::PlayerLogBodyExtAddMaterial *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[6];
};

// Line 3198: range 00000000178AD244-00000000178AD303
void __cdecl proto_log::PlayerLogBodyExtAddCoin::PlayerLogBodyExtAddCoin(
        proto_log::PlayerLogBodyExtAddCoin *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtAddCoin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyExtAddCoin::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  proto_log::PlayerLogBodyExtAddCoin::SharedCtor(this);
};

// Line 3206: range 00000000178AD304-00000000178AD4D8
void __cdecl proto_log::PlayerLogBodyExtAddCoin::PlayerLogBodyExtAddCoin(
        proto_log::PlayerLogBodyExtAddCoin *const this,
        const proto_log::PlayerLogBodyExtAddCoin *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtAddCoin + 2);
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
  memcpy(&this->reason_type_, &from->reason_type_, 0x28uLL);
};

// Line 3217: range 00000000178AD4DA-00000000178AD540
void __cdecl proto_log::PlayerLogBodyExtAddCoin::SharedCtor(proto_log::PlayerLogBodyExtAddCoin *const this)
{
  memset(&this->reason_type_, 0, 0x28uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 3224: range 00000000178AD542-00000000178AD5AB
void __cdecl proto_log::PlayerLogBodyExtAddCoin::~PlayerLogBodyExtAddCoin(
        proto_log::PlayerLogBodyExtAddCoin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtAddCoin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyExtAddCoin::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 3224: range 00000000178AD5AC-00000000178AD5D6
void __cdecl proto_log::PlayerLogBodyExtAddCoin::~PlayerLogBodyExtAddCoin(
        proto_log::PlayerLogBodyExtAddCoin *const this)
{
  proto_log::PlayerLogBodyExtAddCoin::~PlayerLogBodyExtAddCoin(this);
  operator delete(this, 0x40uLL);
};

// Line 3229: range 00000000178AD5D8-00000000178AD5E2
void __cdecl proto_log::PlayerLogBodyExtAddCoin::SharedDtor(proto_log::PlayerLogBodyExtAddCoin *const this)
{
  ;
};

// Line 3232: range 00000000178AD5E4-00000000178AD632
void __cdecl proto_log::PlayerLogBodyExtAddCoin::SetCachedSize(
        const proto_log::PlayerLogBodyExtAddCoin *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 3237: range 00000000178AD634-00000000178AD645
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyExtAddCoin::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[7].descriptor;
};

// Line 3242: range 00000000178AD646-00000000178AD655
const proto_log::PlayerLogBodyExtAddCoin *__cdecl proto_log::PlayerLogBodyExtAddCoin::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyExtAddCoin::internal_default_instance();
};

// Line 3247: range 00000000178AD656-00000000178AD6CA
proto_log::PlayerLogBodyExtAddCoin *__cdecl proto_log::PlayerLogBodyExtAddCoin::New(
        const proto_log::PlayerLogBodyExtAddCoin *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyExtAddCoin *v2; // rbx

  v2 = (proto_log::PlayerLogBodyExtAddCoin *)operator new(0x40uLL);
  proto_log::PlayerLogBodyExtAddCoin::PlayerLogBodyExtAddCoin(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyExtAddCoin>(arena, v2);
  return v2;
};

// Line 3255: range 00000000178AD6CC-00000000178AD759
void __cdecl proto_log::PlayerLogBodyExtAddCoin::Clear(proto_log::PlayerLogBodyExtAddCoin *const this)
{
  memset(&this->reason_type_, 0, 0x28uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 3268: range 00000000178AD75A-00000000178AE1D7
bool __cdecl proto_log::PlayerLogBodyExtAddCoin::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyExtAddCoin *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:3273";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtAddCoin::MergePartialFromCodedStream;
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
                    &this->reason_type_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->item_limit_type_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->pcm_mcoin_add_num_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->pcm_mcoin_left_num_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 40 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->psn_mcoin_add_num_) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 48 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->psn_mcoin_left_num_) )
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
      goto LABEL_63;
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
LABEL_63:
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

// Line 3382: range 00000000178AE1D8-00000000178AE433
void __cdecl proto_log::PlayerLogBodyExtAddCoin::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyExtAddCoin *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::int64 v4; // rcx
  google::protobuf::int64 v5; // rcx
  google::protobuf::int64 v6; // rcx
  google::protobuf::int64 v7; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rax

  if ( proto_log::PlayerLogBodyExtAddCoin::reason_type(this) )
  {
    v2 = proto_log::PlayerLogBodyExtAddCoin::reason_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::item_limit_type(this) )
  {
    v3 = proto_log::PlayerLogBodyExtAddCoin::item_limit_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_add_num(this) )
  {
    v4 = proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_add_num(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(3, v4, output);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_left_num(this) )
  {
    v5 = proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_left_num(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(4, v5, output);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_add_num(this) )
  {
    v6 = proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_add_num(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(5, v6, output);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_left_num(this) )
  {
    v7 = proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_left_num(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(6, v7, output);
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
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v9->unknown_fields, output);
  }
};

// Line 3425: range 00000000178AE434-00000000178AE6B3
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyExtAddCoin::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyExtAddCoin *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::int64 v5; // rcx
  google::protobuf::int64 v6; // rcx
  google::protobuf::int64 v7; // rcx
  google::protobuf::int64 v8; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v10; // rax

  if ( proto_log::PlayerLogBodyExtAddCoin::reason_type(this) )
  {
    v3 = proto_log::PlayerLogBodyExtAddCoin::reason_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::item_limit_type(this) )
  {
    v4 = proto_log::PlayerLogBodyExtAddCoin::item_limit_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_add_num(this) )
  {
    v5 = proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_add_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, v5, target);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_left_num(this) )
  {
    v6 = proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_left_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, v6, target);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_add_num(this) )
  {
    v7 = proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_add_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, v7, target);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_left_num(this) )
  {
    v8 = proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_left_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, v8, target);
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
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_25:
      v10 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v10->unknown_fields, target);
  }
  return target;
};

// Line 3469: range 00000000178AE6B4-00000000178AE930
size_t __cdecl proto_log::PlayerLogBodyExtAddCoin::ByteSizeLong(const proto_log::PlayerLogBodyExtAddCoin *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  google::protobuf::int64 v5; // rax
  google::protobuf::int64 v6; // rax
  google::protobuf::int64 v7; // rax
  google::protobuf::int64 v8; // rax
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
  if ( proto_log::PlayerLogBodyExtAddCoin::reason_type(this) )
  {
    v3 = proto_log::PlayerLogBodyExtAddCoin::reason_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::item_limit_type(this) )
  {
    v4 = proto_log::PlayerLogBodyExtAddCoin::item_limit_type(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_add_num(this) )
  {
    v5 = proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_add_num(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v5) + 1;
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_left_num(this) )
  {
    v6 = proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_left_num(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v6) + 1;
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_add_num(this) )
  {
    v7 = proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_add_num(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v7) + 1;
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_left_num(this) )
  {
    v8 = proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_left_num(this);
    total_size += google::protobuf::internal::WireFormatLite::Int64Size(v8) + 1;
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

// Line 3527: range 00000000178AE932-00000000178AEBBB
void __cdecl proto_log::PlayerLogBodyExtAddCoin::MergeFrom(
        proto_log::PlayerLogBodyExtAddCoin *const this,
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
  const proto_log::PlayerLogBodyExtAddCoin *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtAddCoin::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      3529);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyExtAddCoin const>(from);
  if ( source )
    proto_log::PlayerLogBodyExtAddCoin::MergeFrom(this, source);
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

// Line 3542: range 00000000178AEBBC-00000000178AF081
void __cdecl proto_log::PlayerLogBodyExtAddCoin::MergeFrom(
        proto_log::PlayerLogBodyExtAddCoin *const this,
        const proto_log::PlayerLogBodyExtAddCoin *from)
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
  google::protobuf::int64 v14; // rdx
  google::protobuf::int64 v15; // rdx
  char v16; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v18[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtAddCoin::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v16 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_ext.pb.cc",
      3544);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v16 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v16 )
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
  if ( proto_log::PlayerLogBodyExtAddCoin::reason_type(from) )
  {
    v10 = proto_log::PlayerLogBodyExtAddCoin::reason_type(from);
    proto_log::PlayerLogBodyExtAddCoin::set_reason_type(this, v10);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::item_limit_type(from) )
  {
    v11 = proto_log::PlayerLogBodyExtAddCoin::item_limit_type(from);
    proto_log::PlayerLogBodyExtAddCoin::set_item_limit_type(this, v11);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_add_num(from) )
  {
    v12 = proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_add_num(from);
    proto_log::PlayerLogBodyExtAddCoin::set_pcm_mcoin_add_num(this, v12);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_left_num(from) )
  {
    v13 = proto_log::PlayerLogBodyExtAddCoin::pcm_mcoin_left_num(from);
    proto_log::PlayerLogBodyExtAddCoin::set_pcm_mcoin_left_num(this, v13);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_add_num(from) )
  {
    v14 = proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_add_num(from);
    proto_log::PlayerLogBodyExtAddCoin::set_psn_mcoin_add_num(this, v14);
  }
  if ( proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_left_num(from) )
  {
    v15 = proto_log::PlayerLogBodyExtAddCoin::psn_mcoin_left_num(from);
    proto_log::PlayerLogBodyExtAddCoin::set_psn_mcoin_left_num(this, v15);
  }
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
};

// Line 3569: range 00000000178AF082-00000000178AF0BF
void __cdecl proto_log::PlayerLogBodyExtAddCoin::CopyFrom(
        proto_log::PlayerLogBodyExtAddCoin *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtAddCoin::Clear(this);
    proto_log::PlayerLogBodyExtAddCoin::MergeFrom(this, from);
  }
};

// Line 3576: range 00000000178AF0C0-00000000178AF0FD
void __cdecl proto_log::PlayerLogBodyExtAddCoin::CopyFrom(
        proto_log::PlayerLogBodyExtAddCoin *const this,
        const proto_log::PlayerLogBodyExtAddCoin *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtAddCoin::Clear(this);
    proto_log::PlayerLogBodyExtAddCoin::MergeFrom(this, from);
  }
};

// Line 3583: range 00000000178AF0FE-00000000178AF10C
bool __cdecl proto_log::PlayerLogBodyExtAddCoin::IsInitialized(const proto_log::PlayerLogBodyExtAddCoin *const this)
{
  return 1;
};

// Line 3587: range 00000000178AF10E-00000000178AF13F
void __cdecl proto_log::PlayerLogBodyExtAddCoin::Swap(
        proto_log::PlayerLogBodyExtAddCoin *const this,
        proto_log::PlayerLogBodyExtAddCoin *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyExtAddCoin::InternalSwap(this, other);
};

// Line 3591: range 00000000178AF140-00000000178AF34B
void __cdecl proto_log::PlayerLogBodyExtAddCoin::InternalSwap(
        proto_log::PlayerLogBodyExtAddCoin *const this,
        proto_log::PlayerLogBodyExtAddCoin *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->reason_type_, &other->reason_type_);
  std::swap<unsigned int>(&this->item_limit_type_, &other->item_limit_type_);
  std::swap<long>(&this->pcm_mcoin_add_num_, &other->pcm_mcoin_add_num_);
  std::swap<long>(&this->pcm_mcoin_left_num_, &other->pcm_mcoin_left_num_);
  std::swap<long>(&this->psn_mcoin_add_num_, &other->psn_mcoin_add_num_);
  std::swap<long>(&this->psn_mcoin_left_num_, &other->psn_mcoin_left_num_);
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

// Line 3603: range 00000000178AF34C-00000000178AF36C
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyExtAddCoin::GetMetadata(
        const proto_log::PlayerLogBodyExtAddCoin *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[7];
};

// Line 3716: range 00000000178AF36E-00000000178AF42D
void __cdecl proto_log::PlayerLogBodyExtRecharge::PlayerLogBodyExtRecharge(
        proto_log::PlayerLogBodyExtRecharge *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtRecharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::PlayerLogBodyExtRecharge::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  proto_log::PlayerLogBodyExtRecharge::SharedCtor(this);
};

// Line 3724: range 00000000178AF42E-00000000178AFA8B
void __cdecl proto_log::PlayerLogBodyExtRecharge::PlayerLogBodyExtRecharge(
        proto_log::PlayerLogBodyExtRecharge *const this,
        const proto_log::PlayerLogBodyExtRecharge *from)
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
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtRecharge + 2);
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->create_time_, v4);
  v5 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->create_time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->create_time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->create_time_, v6, from->create_time_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->trade_no_, v7);
  v8 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->trade_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->trade_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->trade_no_, v9, from->trade_no_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->channel_order_no_, v10);
  v11 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->channel_order_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->channel_order_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(
      &this->channel_order_no_,
      v12,
      from->channel_order_no_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->pay_type_, v13);
  v14 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->pay_type_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->pay_type_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->pay_type_, v15, from->pay_type_);
  }
  v16 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->pay_vendor_, v16);
  v17 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](from);
  if ( std::string::size(v17) )
  {
    v18 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->pay_vendor_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->pay_vendor_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->pay_vendor_, v18, from->pay_vendor_);
  }
  v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_type_, v19);
  v20 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_type_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_type_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_type_, v21, from->client_type_);
  }
  v22 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_, v22);
  v23 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](from);
  if ( std::string::size(v23) )
  {
    v24 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_, v24, from->device_);
  }
  v25 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_ip_, v25);
  v26 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](from);
  if ( std::string::size(v26) )
  {
    v27 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_ip_, v27, from->client_ip_);
  }
  v28 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->extend_, v28);
  v29 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](from);
  if ( std::string::size(v29) )
  {
    v30 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->extend_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->extend_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->extend_, v30, from->extend_);
  }
  memcpy(&this->trade_time_, &from->trade_time_, 0xEuLL);
};

// Line 3771: range 00000000178AFA8C-00000000178AFBD0
void __cdecl proto_log::PlayerLogBodyExtRecharge::SharedCtor(proto_log::PlayerLogBodyExtRecharge *const this)
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

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->create_time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->trade_no_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->channel_order_no_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->pay_type_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->pay_vendor_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_type_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->device_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->client_ip_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->extend_, v9);
  memset(&this->trade_time_, 0, 0xEuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 3787: range 00000000178AFBD2-00000000178AFC3B
void __cdecl proto_log::PlayerLogBodyExtRecharge::~PlayerLogBodyExtRecharge(
        proto_log::PlayerLogBodyExtRecharge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogBodyExtRecharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogBodyExtRecharge::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 3787: range 00000000178AFC3C-00000000178AFC66
void __cdecl proto_log::PlayerLogBodyExtRecharge::~PlayerLogBodyExtRecharge(
        proto_log::PlayerLogBodyExtRecharge *const this)
{
  proto_log::PlayerLogBodyExtRecharge::~PlayerLogBodyExtRecharge(this);
  operator delete(this, 0x70uLL);
};

// Line 3792: range 00000000178AFC68-00000000178AFD54
void __cdecl proto_log::PlayerLogBodyExtRecharge::SharedDtor(proto_log::PlayerLogBodyExtRecharge *const this)
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

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->create_time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->trade_no_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->channel_order_no_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->pay_type_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->pay_vendor_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->client_type_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->device_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->client_ip_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->extend_, v9);
};

// Line 3804: range 00000000178AFD56-00000000178AFDA4
void __cdecl proto_log::PlayerLogBodyExtRecharge::SetCachedSize(
        const proto_log::PlayerLogBodyExtRecharge *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 3809: range 00000000178AFDA6-00000000178AFDB7
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogBodyExtRecharge::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[8].descriptor;
};

// Line 3814: range 00000000178AFDB8-00000000178AFDC7
const proto_log::PlayerLogBodyExtRecharge *__cdecl proto_log::PlayerLogBodyExtRecharge::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::InitDefaults();
  return proto_log::PlayerLogBodyExtRecharge::internal_default_instance();
};

// Line 3819: range 00000000178AFDC8-00000000178AFE3C
proto_log::PlayerLogBodyExtRecharge *__cdecl proto_log::PlayerLogBodyExtRecharge::New(
        const proto_log::PlayerLogBodyExtRecharge *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogBodyExtRecharge *v2; // rbx

  v2 = (proto_log::PlayerLogBodyExtRecharge *)operator new(0x70uLL);
  proto_log::PlayerLogBodyExtRecharge::PlayerLogBodyExtRecharge(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogBodyExtRecharge>(arena, v2);
  return v2;
};

// Line 3827: range 00000000178AFE3E-00000000178AFFA9
void __cdecl proto_log::PlayerLogBodyExtRecharge::Clear(proto_log::PlayerLogBodyExtRecharge *const this)
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

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->create_time_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->trade_no_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->channel_order_no_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->pay_type_, v4);
  v5 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->pay_vendor_, v5);
  v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->client_type_, v6);
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->device_, v7);
  v8 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->client_ip_, v8);
  v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->extend_, v9);
  memset(&this->trade_time_, 0, 0xEuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 3849: range 00000000178AFFAA-00000000178B0FFE
bool __cdecl proto_log::PlayerLogBodyExtRecharge::MergePartialFromCodedStream(
        proto_log::PlayerLogBodyExtRecharge *const this,
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
  std::string *v55; // rdx
  const std::string *v56; // rax
  unsigned int v57; // r14d
  const std::string *v58; // rax
  google::protobuf::internal::WireFormatLite *v59; // rax
  const char *v60; // r8
  std::string *v61; // rdx
  const std::string *v62; // rax
  unsigned int v63; // r14d
  const std::string *v64; // rax
  google::protobuf::internal::WireFormatLite *v65; // rax
  const char *v66; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v67; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v72[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:3854";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtRecharge::MergePartialFromCodedStream;
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
                    &this->trade_time_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 18 )
              goto handle_unusual;
            v13 = proto_log::PlayerLogBodyExtRecharge::mutable_create_time[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v13) )
              goto failure;
            v14 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
            v15 = std::string::length(v14);
            v16 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
            v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v17,
                                     (const char *)v15,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRe"
                                                                                            "charge.create_time",
                                     v18) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 26 )
              goto handle_unusual;
            v19 = proto_log::PlayerLogBodyExtRecharge::mutable_trade_no[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v19) )
              goto failure;
            v20 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
            v21 = std::string::length(v20);
            v22 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
            v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v23,
                                     (const char *)v21,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.trade_no",
                                     v24) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->channel_id_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v25 = proto_log::PlayerLogBodyExtRecharge::mutable_channel_order_no[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v25) )
              goto failure;
            v26 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
            v27 = std::string::length(v26);
            v28 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
            v29 = (google::protobuf::internal::WireFormatLite *)std::string::data(v28);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v29,
                                     (const char *)v27,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRe"
                                                                                            "charge.channel_order_no",
                                     v30) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 48 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->product_num_) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 56 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<bool,(google::protobuf::internal::WireFormatLite::FieldType)8>(
                    input,
                    &this->is_succ_) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<bool,(google::protobuf::internal::WireFormatLite::FieldType)8>(
                    input,
                    &this->is_replace_) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 74 )
              goto handle_unusual;
            v31 = proto_log::PlayerLogBodyExtRecharge::mutable_pay_type[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v31) )
              goto failure;
            v32 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
            v33 = std::string::length(v32);
            v34 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
            v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v35,
                                     (const char *)v33,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.pay_type",
                                     v36) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 82 )
              goto handle_unusual;
            v37 = proto_log::PlayerLogBodyExtRecharge::mutable_pay_vendor[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v37) )
              goto failure;
            v38 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
            v39 = std::string::length(v38);
            v40 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
            v41 = (google::protobuf::internal::WireFormatLite *)std::string::data(v40);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v41,
                                     (const char *)v39,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRe"
                                                                                            "charge.pay_vendor",
                                     v42) )
              goto failure;
            continue;
          case 11:
            if ( (_BYTE)tag != 90 )
              goto handle_unusual;
            v43 = proto_log::PlayerLogBodyExtRecharge::mutable_client_type[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v43) )
              goto failure;
            v44 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
            v45 = std::string::length(v44);
            v46 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
            v47 = (google::protobuf::internal::WireFormatLite *)std::string::data(v46);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v47,
                                     (const char *)v45,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRe"
                                                                                            "charge.client_type",
                                     v48) )
              goto failure;
            continue;
          case 12:
            if ( (_BYTE)tag != 98 )
              goto handle_unusual;
            v49 = proto_log::PlayerLogBodyExtRecharge::mutable_device[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v49) )
              goto failure;
            v50 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
            v51 = std::string::length(v50);
            v52 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
            v53 = (google::protobuf::internal::WireFormatLite *)std::string::data(v52);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v53,
                                     (const char *)v51,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.device",
                                     v54) )
              goto failure;
            continue;
          case 13:
            if ( (_BYTE)tag != 106 )
              goto handle_unusual;
            v55 = proto_log::PlayerLogBodyExtRecharge::mutable_client_ip[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v55) )
              goto failure;
            v56 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
            v57 = std::string::length(v56);
            v58 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
            v59 = (google::protobuf::internal::WireFormatLite *)std::string::data(v58);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v59,
                                     (const char *)v57,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRe"
                                                                                            "charge.client_ip",
                                     v60) )
              goto failure;
            continue;
          case 14:
            if ( (_BYTE)tag != 114 )
              goto handle_unusual;
            v61 = proto_log::PlayerLogBodyExtRecharge::mutable_extend[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v61) )
              goto failure;
            v62 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
            v63 = std::string::length(v62);
            v64 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
            v65 = (google::protobuf::internal::WireFormatLite *)std::string::data(v64);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v65,
                                     (const char *)v63,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.extend",
                                     v66) )
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
      goto LABEL_104;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v67 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v67 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v67->unknown_fields) );
failure:
  result = 0;
LABEL_104:
  if ( v72 == (char *)v2 )
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

// Line 4093: range 00000000178B1000-00000000178B16AA
void __cdecl proto_log::PlayerLogBodyExtRecharge::SerializeWithCachedSizes(
        const proto_log::PlayerLogBodyExtRecharge *const this,
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
  google::protobuf::uint32 v17; // ecx
  const std::string *v18; // rax
  const std::string *v19; // rax
  unsigned int v20; // ebx
  const std::string *v21; // rax
  google::protobuf::internal::WireFormatLite *v22; // rax
  const char *v23; // r8
  const std::string *v24; // rcx
  google::protobuf::uint32 v25; // ecx
  bool is_succ; // al
  bool is_replace; // al
  const std::string *v28; // rax
  const std::string *v29; // rax
  unsigned int v30; // ebx
  const std::string *v31; // rax
  google::protobuf::internal::WireFormatLite *v32; // rax
  const char *v33; // r8
  const std::string *v34; // rcx
  const std::string *v35; // rax
  const std::string *v36; // rax
  unsigned int v37; // ebx
  const std::string *v38; // rax
  google::protobuf::internal::WireFormatLite *v39; // rax
  const char *v40; // r8
  const std::string *v41; // rcx
  const std::string *v42; // rax
  const std::string *v43; // rax
  unsigned int v44; // ebx
  const std::string *v45; // rax
  google::protobuf::internal::WireFormatLite *v46; // rax
  const char *v47; // r8
  const std::string *v48; // rcx
  const std::string *v49; // rax
  const std::string *v50; // rax
  unsigned int v51; // ebx
  const std::string *v52; // rax
  google::protobuf::internal::WireFormatLite *v53; // rax
  const char *v54; // r8
  const std::string *v55; // rcx
  const std::string *v56; // rax
  const std::string *v57; // rax
  unsigned int v58; // ebx
  const std::string *v59; // rax
  google::protobuf::internal::WireFormatLite *v60; // rax
  const char *v61; // r8
  const std::string *v62; // rcx
  const std::string *v63; // rax
  const std::string *v64; // rax
  unsigned int v65; // ebx
  const std::string *v66; // rax
  google::protobuf::internal::WireFormatLite *v67; // rax
  const char *v68; // r8
  const std::string *v69; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v71; // rax

  if ( proto_log::PlayerLogBodyExtRecharge::trade_time(this) )
  {
    v2 = proto_log::PlayerLogBodyExtRecharge::trade_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  v3 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
    v5 = std::string::length(v4);
    v6 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
    v7 = (google::protobuf::internal::WireFormatLite *)std::string::data(v6);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v7,
      (const char *)v5,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.create_time",
      v8);
    v9 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, v9, output);
  }
  v10 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
    v12 = std::string::length(v11);
    v13 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
    v14 = (google::protobuf::internal::WireFormatLite *)std::string::data(v13);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v14,
      (const char *)v12,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.trade_no",
      v15);
    v16 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, v16, output);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::channel_id(this) )
  {
    v17 = proto_log::PlayerLogBodyExtRecharge::channel_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v17, output);
  }
  v18 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
  if ( std::string::size(v18) )
  {
    v19 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
    v20 = std::string::length(v19);
    v21 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
    v22 = (google::protobuf::internal::WireFormatLite *)std::string::data(v21);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v22,
      (const char *)v20,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.channel_order_no",
      v23);
    v24 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v24, output);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::product_num(this) )
  {
    v25 = proto_log::PlayerLogBodyExtRecharge::product_num(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(6, v25, output);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::is_succ(this) )
  {
    is_succ = proto_log::PlayerLogBodyExtRecharge::is_succ(this);
    google::protobuf::internal::WireFormatLite::WriteBool(7, is_succ, output);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::is_replace(this) )
  {
    is_replace = proto_log::PlayerLogBodyExtRecharge::is_replace(this);
    google::protobuf::internal::WireFormatLite::WriteBool(8, is_replace, output);
  }
  v28 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
  if ( std::string::size(v28) )
  {
    v29 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
    v30 = std::string::length(v29);
    v31 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
    v32 = (google::protobuf::internal::WireFormatLite *)std::string::data(v31);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v32,
      (const char *)v30,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.pay_type",
      v33);
    v34 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(9LL, v34, output);
  }
  v35 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
  if ( std::string::size(v35) )
  {
    v36 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
    v37 = std::string::length(v36);
    v38 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
    v39 = (google::protobuf::internal::WireFormatLite *)std::string::data(v38);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v39,
      (const char *)v37,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.pay_vendor",
      v40);
    v41 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(10LL, v41, output);
  }
  v42 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
  if ( std::string::size(v42) )
  {
    v43 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
    v44 = std::string::length(v43);
    v45 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
    v46 = (google::protobuf::internal::WireFormatLite *)std::string::data(v45);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v46,
      (const char *)v44,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.client_type",
      v47);
    v48 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(11LL, v48, output);
  }
  v49 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
  if ( std::string::size(v49) )
  {
    v50 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
    v51 = std::string::length(v50);
    v52 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
    v53 = (google::protobuf::internal::WireFormatLite *)std::string::data(v52);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v53,
      (const char *)v51,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.device",
      v54);
    v55 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(12LL, v55, output);
  }
  v56 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
  if ( std::string::size(v56) )
  {
    v57 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
    v58 = std::string::length(v57);
    v59 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
    v60 = (google::protobuf::internal::WireFormatLite *)std::string::data(v59);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v60,
      (const char *)v58,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.client_ip",
      v61);
    v62 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(13LL, v62, output);
  }
  v63 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
  if ( std::string::size(v63) )
  {
    v64 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
    v65 = std::string::length(v64);
    v66 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
    v67 = (google::protobuf::internal::WireFormatLite *)std::string::data(v66);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v67,
      (const char *)v65,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.extend",
      v68);
    v69 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(14LL, v69, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_41;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v71 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_41:
      v71 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v71->unknown_fields, output);
  }
};

// Line 4221: range 00000000178B16AC-00000000178B1D9A
google::protobuf::uint8 *__cdecl proto_log::PlayerLogBodyExtRecharge::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogBodyExtRecharge *const this,
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
  google::protobuf::uint32 v18; // ecx
  const std::string *v19; // rax
  const std::string *v20; // rax
  unsigned int v21; // ebx
  const std::string *v22; // rax
  google::protobuf::internal::WireFormatLite *v23; // rax
  const char *v24; // r8
  const std::string *v25; // rcx
  google::protobuf::uint32 v26; // ecx
  bool is_succ; // al
  bool is_replace; // al
  const std::string *v29; // rax
  const std::string *v30; // rax
  unsigned int v31; // ebx
  const std::string *v32; // rax
  google::protobuf::internal::WireFormatLite *v33; // rax
  const char *v34; // r8
  const std::string *v35; // rcx
  const std::string *v36; // rax
  const std::string *v37; // rax
  unsigned int v38; // ebx
  const std::string *v39; // rax
  google::protobuf::internal::WireFormatLite *v40; // rax
  const char *v41; // r8
  const std::string *v42; // rcx
  const std::string *v43; // rax
  const std::string *v44; // rax
  unsigned int v45; // ebx
  const std::string *v46; // rax
  google::protobuf::internal::WireFormatLite *v47; // rax
  const char *v48; // r8
  const std::string *v49; // rcx
  const std::string *v50; // rax
  const std::string *v51; // rax
  unsigned int v52; // ebx
  const std::string *v53; // rax
  google::protobuf::internal::WireFormatLite *v54; // rax
  const char *v55; // r8
  const std::string *v56; // rcx
  const std::string *v57; // rax
  const std::string *v58; // rax
  unsigned int v59; // ebx
  const std::string *v60; // rax
  google::protobuf::internal::WireFormatLite *v61; // rax
  const char *v62; // r8
  const std::string *v63; // rcx
  const std::string *v64; // rax
  const std::string *v65; // rax
  unsigned int v66; // ebx
  const std::string *v67; // rax
  google::protobuf::internal::WireFormatLite *v68; // rax
  const char *v69; // r8
  const std::string *v70; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v72; // rax

  if ( proto_log::PlayerLogBodyExtRecharge::trade_time(this) )
  {
    v3 = proto_log::PlayerLogBodyExtRecharge::trade_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  v4 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
  if ( std::string::size(v4) )
  {
    v5 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
    v6 = std::string::length(v5);
    v7 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
    v8 = (google::protobuf::internal::WireFormatLite *)std::string::data(v7);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v8,
      (const char *)v6,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.create_time",
      v9);
    v10 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(2, v10, target);
  }
  v11 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
    v13 = std::string::length(v12);
    v14 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.trade_no",
      v16);
    v17 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(3, v17, target);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::channel_id(this) )
  {
    v18 = proto_log::PlayerLogBodyExtRecharge::channel_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v18, target);
  }
  v19 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
  if ( std::string::size(v19) )
  {
    v20 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
    v21 = std::string::length(v20);
    v22 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
    v23 = (google::protobuf::internal::WireFormatLite *)std::string::data(v22);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v23,
      (const char *)v21,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.channel_order_no",
      v24);
    v25 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v25, target);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::product_num(this) )
  {
    v26 = proto_log::PlayerLogBodyExtRecharge::product_num(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, v26, target);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::is_succ(this) )
  {
    is_succ = proto_log::PlayerLogBodyExtRecharge::is_succ(this);
    target = google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, is_succ, target);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::is_replace(this) )
  {
    is_replace = proto_log::PlayerLogBodyExtRecharge::is_replace(this);
    target = google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, is_replace, target);
  }
  v29 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
  if ( std::string::size(v29) )
  {
    v30 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
    v31 = std::string::length(v30);
    v32 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
    v33 = (google::protobuf::internal::WireFormatLite *)std::string::data(v32);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v33,
      (const char *)v31,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.pay_type",
      v34);
    v35 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(9, v35, target);
  }
  v36 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
  if ( std::string::size(v36) )
  {
    v37 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
    v38 = std::string::length(v37);
    v39 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
    v40 = (google::protobuf::internal::WireFormatLite *)std::string::data(v39);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v40,
      (const char *)v38,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.pay_vendor",
      v41);
    v42 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(10, v42, target);
  }
  v43 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
  if ( std::string::size(v43) )
  {
    v44 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
    v45 = std::string::length(v44);
    v46 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
    v47 = (google::protobuf::internal::WireFormatLite *)std::string::data(v46);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v47,
      (const char *)v45,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.client_type",
      v48);
    v49 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(11, v49, target);
  }
  v50 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
  if ( std::string::size(v50) )
  {
    v51 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
    v52 = std::string::length(v51);
    v53 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
    v54 = (google::protobuf::internal::WireFormatLite *)std::string::data(v53);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v54,
      (const char *)v52,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.device",
      v55);
    v56 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(12, v56, target);
  }
  v57 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
  if ( std::string::size(v57) )
  {
    v58 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
    v59 = std::string::length(v58);
    v60 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
    v61 = (google::protobuf::internal::WireFormatLite *)std::string::data(v60);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v61,
      (const char *)v59,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.client_ip",
      v62);
    v63 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(13, v63, target);
  }
  v64 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
  if ( std::string::size(v64) )
  {
    v65 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
    v66 = std::string::length(v65);
    v67 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
    v68 = (google::protobuf::internal::WireFormatLite *)std::string::data(v67);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v68,
      (const char *)v66,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogBodyExtRecharge.extend",
      v69);
    v70 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(14, v70, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_41;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v72 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_41:
      v72 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v72->unknown_fields, target);
  }
  return target;
};

// Line 4359: range 00000000178B1D9C-00000000178B21C4
size_t __cdecl proto_log::PlayerLogBodyExtRecharge::ByteSizeLong(const proto_log::PlayerLogBodyExtRecharge *const this)
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
  google::protobuf::uint32 v21; // eax
  google::protobuf::uint32 v22; // eax
  google::protobuf::uint32 v23; // eax
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
  v3 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
  if ( std::string::size(v3) )
  {
    v4 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v4) + 1;
  }
  v5 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v6) + 1;
  }
  v7 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v8) + 1;
  }
  v9 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
  if ( std::string::size(v9) )
  {
    v10 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v10) + 1;
  }
  v11 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
  if ( std::string::size(v11) )
  {
    v12 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v12) + 1;
  }
  v13 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
  if ( std::string::size(v13) )
  {
    v14 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v14) + 1;
  }
  v15 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
  if ( std::string::size(v15) )
  {
    v16 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v16) + 1;
  }
  v17 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
  if ( std::string::size(v17) )
  {
    v18 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v18) + 1;
  }
  v19 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
  if ( std::string::size(v19) )
  {
    v20 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](this);
    total_size += google::protobuf::internal::WireFormatLite::StringSize(v20) + 1;
  }
  if ( proto_log::PlayerLogBodyExtRecharge::trade_time(this) )
  {
    v21 = proto_log::PlayerLogBodyExtRecharge::trade_time(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v21) + 1;
  }
  if ( proto_log::PlayerLogBodyExtRecharge::channel_id(this) )
  {
    v22 = proto_log::PlayerLogBodyExtRecharge::channel_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v22) + 1;
  }
  if ( proto_log::PlayerLogBodyExtRecharge::product_num(this) )
  {
    v23 = proto_log::PlayerLogBodyExtRecharge::product_num(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v23) + 1;
  }
  if ( proto_log::PlayerLogBodyExtRecharge::is_succ(this) )
    total_size += 2LL;
  if ( proto_log::PlayerLogBodyExtRecharge::is_replace(this) )
    total_size += 2LL;
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 4469: range 00000000178B21C6-00000000178B244F
void __cdecl proto_log::PlayerLogBodyExtRecharge::MergeFrom(
        proto_log::PlayerLogBodyExtRecharge *const this,
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
  const proto_log::PlayerLogBodyExtRecharge *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtRecharge::MergeFrom;
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
      "./src/server_only/log/player/player_body_ext.pb.cc",
      4471);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogBodyExtRecharge const>(from);
  if ( source )
    proto_log::PlayerLogBodyExtRecharge::MergeFrom(this, source);
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

// Line 4484: range 00000000178B2450-00000000178B2CF4
void __cdecl proto_log::PlayerLogBodyExtRecharge::MergeFrom(
        proto_log::PlayerLogBodyExtRecharge *const this,
        const proto_log::PlayerLogBodyExtRecharge *from)
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
  google::protobuf::uint32 v28; // edx
  google::protobuf::uint32 v29; // edx
  google::protobuf::uint32 v30; // edx
  bool is_succ; // dl
  bool is_replace; // dl
  char v33; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v35[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogBodyExtRecharge::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_body_ext.pb.cc",
      4486);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v33 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v33 )
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
  v10 = proto_log::PlayerLogBodyExtRecharge::create_time[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->create_time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->create_time_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->create_time_, v11, from->create_time_);
  }
  v12 = proto_log::PlayerLogBodyExtRecharge::trade_no[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->trade_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->trade_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->trade_no_, v13, from->trade_no_);
  }
  v14 = proto_log::PlayerLogBodyExtRecharge::channel_order_no[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->channel_order_no_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->channel_order_no_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(
      &this->channel_order_no_,
      v15,
      from->channel_order_no_);
  }
  v16 = proto_log::PlayerLogBodyExtRecharge::pay_type[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->pay_type_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->pay_type_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->pay_type_, v17, from->pay_type_);
  }
  v18 = proto_log::PlayerLogBodyExtRecharge::pay_vendor[abi:cxx11](from);
  if ( std::string::size(v18) )
  {
    v19 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->pay_vendor_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->pay_vendor_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->pay_vendor_, v19, from->pay_vendor_);
  }
  v20 = proto_log::PlayerLogBodyExtRecharge::client_type[abi:cxx11](from);
  if ( std::string::size(v20) )
  {
    v21 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_type_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_type_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_type_, v21, from->client_type_);
  }
  v22 = proto_log::PlayerLogBodyExtRecharge::device[abi:cxx11](from);
  if ( std::string::size(v22) )
  {
    v23 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->device_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->device_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->device_, v23, from->device_);
  }
  v24 = proto_log::PlayerLogBodyExtRecharge::client_ip[abi:cxx11](from);
  if ( std::string::size(v24) )
  {
    v25 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->client_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->client_ip_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->client_ip_, v25, from->client_ip_);
  }
  v26 = proto_log::PlayerLogBodyExtRecharge::extend[abi:cxx11](from);
  if ( std::string::size(v26) )
  {
    v27 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->extend_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->extend_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->extend_, v27, from->extend_);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::trade_time(from) )
  {
    v28 = proto_log::PlayerLogBodyExtRecharge::trade_time(from);
    proto_log::PlayerLogBodyExtRecharge::set_trade_time(this, v28);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::channel_id(from) )
  {
    v29 = proto_log::PlayerLogBodyExtRecharge::channel_id(from);
    proto_log::PlayerLogBodyExtRecharge::set_channel_id(this, v29);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::product_num(from) )
  {
    v30 = proto_log::PlayerLogBodyExtRecharge::product_num(from);
    proto_log::PlayerLogBodyExtRecharge::set_product_num(this, v30);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::is_succ(from) )
  {
    is_succ = proto_log::PlayerLogBodyExtRecharge::is_succ(from);
    proto_log::PlayerLogBodyExtRecharge::set_is_succ(this, is_succ);
  }
  if ( proto_log::PlayerLogBodyExtRecharge::is_replace(from) )
  {
    is_replace = proto_log::PlayerLogBodyExtRecharge::is_replace(from);
    proto_log::PlayerLogBodyExtRecharge::set_is_replace(this, is_replace);
  }
  if ( v35 == (char *)v2 )
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

// Line 4544: range 00000000178B2CF6-00000000178B2D33
void __cdecl proto_log::PlayerLogBodyExtRecharge::CopyFrom(
        proto_log::PlayerLogBodyExtRecharge *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtRecharge::Clear(this);
    proto_log::PlayerLogBodyExtRecharge::MergeFrom(this, from);
  }
};

// Line 4551: range 00000000178B2D34-00000000178B2D71
void __cdecl proto_log::PlayerLogBodyExtRecharge::CopyFrom(
        proto_log::PlayerLogBodyExtRecharge *const this,
        const proto_log::PlayerLogBodyExtRecharge *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogBodyExtRecharge::Clear(this);
    proto_log::PlayerLogBodyExtRecharge::MergeFrom(this, from);
  }
};

// Line 4558: range 00000000178B2D72-00000000178B2D80
bool __cdecl proto_log::PlayerLogBodyExtRecharge::IsInitialized(const proto_log::PlayerLogBodyExtRecharge *const this)
{
  return 1;
};

// Line 4562: range 00000000178B2D82-00000000178B2DB3
void __cdecl proto_log::PlayerLogBodyExtRecharge::Swap(
        proto_log::PlayerLogBodyExtRecharge *const this,
        proto_log::PlayerLogBodyExtRecharge *other)
{
  if ( other != this )
    proto_log::PlayerLogBodyExtRecharge::InternalSwap(this, other);
};

// Line 4566: range 00000000178B2DB4-00000000178B31F0
void __cdecl proto_log::PlayerLogBodyExtRecharge::InternalSwap(
        proto_log::PlayerLogBodyExtRecharge *const this,
        proto_log::PlayerLogBodyExtRecharge *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-D0h]

  std::swap<std::string *>(&this->create_time_.ptr_, &other->create_time_.ptr_);
  std::swap<std::string *>(&this->trade_no_.ptr_, &other->trade_no_.ptr_);
  std::swap<std::string *>(&this->channel_order_no_.ptr_, &other->channel_order_no_.ptr_);
  std::swap<std::string *>(&this->pay_type_.ptr_, &other->pay_type_.ptr_);
  std::swap<std::string *>(&this->pay_vendor_.ptr_, &other->pay_vendor_.ptr_);
  std::swap<std::string *>(&this->client_type_.ptr_, &other->client_type_.ptr_);
  std::swap<std::string *>(&this->device_.ptr_, &other->device_.ptr_);
  std::swap<std::string *>(&this->client_ip_.ptr_, &other->client_ip_.ptr_);
  std::swap<std::string *>(&this->extend_.ptr_, &other->extend_.ptr_);
  std::swap<unsigned int>(&this->trade_time_, &other->trade_time_);
  std::swap<unsigned int>(&this->channel_id_, &other->channel_id_);
  std::swap<unsigned int>(&this->product_num_, &other->product_num_);
  std::swap<bool>(&this->is_succ_, &other->is_succ_);
  std::swap<bool>(&this->is_replace_, &other->is_replace_);
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

// Line 4586: range 00000000178B31F2-00000000178B3212
google::protobuf::Metadata __cdecl proto_log::PlayerLogBodyExtRecharge::GetMetadata(
        const proto_log::PlayerLogBodyExtRecharge *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::`anonymous namespace'::file_level_metadata[8];
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/player/player_head_ext.pb.cc

// Line 95: range 00000000178B749F-00000000178B7668
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/player/player_head_ext.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::file_level_metadata,
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

// Line 103: range 00000000178B7669-00000000178B7682
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 109: range 00000000178B7683-00000000178B76A7
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::file_level_metadata,
    1);
};

// Line 115: range 00000000178B76A8-00000000178B76E7
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/player/player_head_ext.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::PlayerLogHeadExt>::DefaultConstruct(&proto_log::_PlayerLogHeadExt_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_PlayerLogHeadExt_default_instance_,
    (const void *)0x2DD660);
};

// Line 123: range 00000000178B76E8-00000000178B7704
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 128: range 00000000178B7705-00000000178B7734
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 157: range 00000000178B7735-00000000178B774E
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 163: range 000000001792791E-0000000017927931
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::AddDescriptors();
};

// Line 204: range 00000000178B7750-00000000178B7834
void __cdecl proto_log::PlayerLogHeadExt::PlayerLogHeadExt(proto_log::PlayerLogHeadExt *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogHeadExt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<std::string>::RepeatedPtrField(&this->sub_action_list_);
  if ( this != proto_log::PlayerLogHeadExt::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::InitDefaults();
  proto_log::PlayerLogHeadExt::SharedCtor(this);
};

// Line 212: range 00000000178B7836-00000000178B7AC8
void __cdecl proto_log::PlayerLogHeadExt::PlayerLogHeadExt(
        proto_log::PlayerLogHeadExt *const this,
        const proto_log::PlayerLogHeadExt *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rcx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::PlayerLogHeadExt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<std::string>::RepeatedPtrField(&this->sub_action_list_, &from->sub_action_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->country_code_, v4);
  v5 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->country_code_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->country_code_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->country_code_, v6, from->country_code_);
  }
  memcpy(&this->avatar_id_, &from->avatar_id_, 0x74uLL);
};

// Line 228: range 00000000178B7ACA-00000000178B7B5B
void __cdecl proto_log::PlayerLogHeadExt::SharedCtor(proto_log::PlayerLogHeadExt *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->country_code_, v1);
  memset(&this->avatar_id_, 0, 0x74uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 236: range 00000000178B7B5C-00000000178B7BD5
void __cdecl proto_log::PlayerLogHeadExt::~PlayerLogHeadExt(proto_log::PlayerLogHeadExt *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::PlayerLogHeadExt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::PlayerLogHeadExt::SharedDtor(this);
  google::protobuf::RepeatedPtrField<std::string>::~RepeatedPtrField(&this->sub_action_list_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 236: range 00000000178B7BD6-00000000178B7C00
void __cdecl proto_log::PlayerLogHeadExt::~PlayerLogHeadExt(proto_log::PlayerLogHeadExt *const this)
{
  proto_log::PlayerLogHeadExt::~PlayerLogHeadExt(this);
  operator delete(this, 0xA8uLL);
};

// Line 241: range 00000000178B7C02-00000000178B7C2E
void __cdecl proto_log::PlayerLogHeadExt::SharedDtor(proto_log::PlayerLogHeadExt *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->country_code_, v1);
};

// Line 245: range 00000000178B7C30-00000000178B7C8B
void __cdecl proto_log::PlayerLogHeadExt::SetCachedSize(const proto_log::PlayerLogHeadExt *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 250: range 00000000178B7C8C-00000000178B7C9D
const google::protobuf::Descriptor *__cdecl proto_log::PlayerLogHeadExt::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 255: range 00000000178B7C9E-00000000178B7CAD
const proto_log::PlayerLogHeadExt *__cdecl proto_log::PlayerLogHeadExt::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::InitDefaults();
  return proto_log::PlayerLogHeadExt::internal_default_instance();
};

// Line 260: range 00000000178B7CAE-00000000178B7D22
proto_log::PlayerLogHeadExt *__cdecl proto_log::PlayerLogHeadExt::New(
        const proto_log::PlayerLogHeadExt *const this,
        google::protobuf::Arena *arena)
{
  proto_log::PlayerLogHeadExt *v2; // rbx

  v2 = (proto_log::PlayerLogHeadExt *)operator new(0xA8uLL);
  proto_log::PlayerLogHeadExt::PlayerLogHeadExt(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::PlayerLogHeadExt>(arena, v2);
  return v2;
};

// Line 268: range 00000000178B7D24-00000000178B7DDF
void __cdecl proto_log::PlayerLogHeadExt::Clear(proto_log::PlayerLogHeadExt *const this)
{
  const std::string *v1; // rax

  google::protobuf::RepeatedPtrField<std::string>::Clear(&this->sub_action_list_);
  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->country_code_, v1);
  memset(&this->avatar_id_, 0, 0x74uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 283: range 00000000178B7DE0-00000000178B8FCC
bool __cdecl proto_log::PlayerLogHeadExt::MergePartialFromCodedStream(
        proto_log::PlayerLogHeadExt *const this,
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
  int v22; // edx
  const std::string *v23; // rax
  unsigned int v24; // r14d
  int v25; // edx
  const std::string *v26; // rax
  google::protobuf::internal::WireFormatLite *v27; // rax
  const char *v28; // r8
  std::string *v29; // rdx
  const std::string *v30; // rax
  unsigned int v31; // r14d
  const std::string *v32; // rax
  google::protobuf::internal::WireFormatLite *v33; // rax
  const char *v34; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v35; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-104h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-FCh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-E8h]
  char v41[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:288";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogHeadExt::MergePartialFromCodedStream;
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
                    &this->avatar_id_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->scene_id_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->world_owner_uid_) )
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
          case 7:
            if ( (_BYTE)tag != 56 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->player_time_) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->login_time_) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 72 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->platform_type_) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 80 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->weather_) )
              goto failure;
            continue;
          case 11:
            if ( (_BYTE)tag != 90 )
              goto handle_unusual;
            v21 = proto_log::PlayerLogHeadExt::add_sub_action_list[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v21) )
              goto failure;
            v22 = proto_log::PlayerLogHeadExt::sub_action_list_size(this) - 1;
            v23 = proto_log::PlayerLogHeadExt::sub_action_list[abi:cxx11](this, v22);
            v24 = std::string::length(v23);
            v25 = proto_log::PlayerLogHeadExt::sub_action_list_size(this) - 1;
            v26 = proto_log::PlayerLogHeadExt::sub_action_list[abi:cxx11](this, v25);
            v27 = (google::protobuf::internal::WireFormatLite *)std::string::data(v26);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v27,
                                     (const char *)v24,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHeadExt.sub_action_list",
                                     v28) )
              goto failure;
            continue;
          case 12:
            if ( (_BYTE)tag != 96 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->unpaused_time_) )
              goto failure;
            continue;
          case 13:
            if ( (_BYTE)tag != 104 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->is_in_mp_) )
              goto failure;
            continue;
          case 14:
            if ( (_BYTE)tag != 112 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->level1_area_id_) )
              goto failure;
            continue;
          case 15:
            if ( (_BYTE)tag != 120 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->level2_area_id_) )
              goto failure;
            continue;
          case 16:
            if ( (_BYTE)tag != 0x80 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->wait_sub_hcoin_) )
              goto failure;
            continue;
          case 17:
            if ( (_BYTE)tag != 0x88 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->wait_sub_scoin_) )
              goto failure;
            continue;
          case 18:
            if ( (_BYTE)tag != 0x90 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->gm_uid_) )
              goto failure;
            continue;
          case 19:
            if ( (_BYTE)tag != 0x98 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->wait_sub_mcoin_) )
              goto failure;
            continue;
          case 20:
            if ( (_BYTE)tag != 0xA0 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->world_level_) )
              goto failure;
            continue;
          case 21:
            if ( (_BYTE)tag != 0xA8 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->cur_world_level_) )
              goto failure;
            continue;
          case 22:
            if ( (_BYTE)tag != 0xB2 )
              goto handle_unusual;
            v29 = proto_log::PlayerLogHeadExt::mutable_country_code[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v29) )
              goto failure;
            v30 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
            v31 = std::string::length(v30);
            v32 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
            v33 = (google::protobuf::internal::WireFormatLite *)std::string::data(v32);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v33,
                                     (const char *)v31,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHeadExt.country_code",
                                     v34) )
              goto failure;
            continue;
          case 23:
            if ( (_BYTE)tag != 0xB8 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->world_level_limit_) )
              goto failure;
            continue;
          case 24:
            if ( (_BYTE)tag != 0xC0 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->pcm_coin_3_) )
              goto failure;
            continue;
          case 25:
            if ( (_BYTE)tag != 0xC8 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    &this->psn_coin_3_) )
              goto failure;
            continue;
          case 26:
            if ( (_BYTE)tag != 0xD0 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->pcm_wait_sub_mcoin_) )
              goto failure;
            continue;
          case 27:
            if ( (_BYTE)tag != 0xD8 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->psn_wait_sub_mcoin_) )
              goto failure;
            continue;
          case 28:
            if ( (_BYTE)tag != 0xE0 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned long,(google::protobuf::internal::WireFormatLite::FieldType)4>(
                    input,
                    &this->player_stat_id_) )
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
      goto LABEL_172;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v35 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v35 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v35->unknown_fields) );
failure:
  result = 0;
LABEL_172:
  if ( v41 == (char *)v2 )
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

// Line 710: range 00000000178B8FCE-00000000178B977B
void __cdecl proto_log::PlayerLogHeadExt::SerializeWithCachedSizes(
        const proto_log::PlayerLogHeadExt *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::int32 v5; // ecx
  google::protobuf::int32 v6; // ecx
  google::protobuf::int32 v7; // ecx
  google::protobuf::uint32 v8; // ecx
  google::protobuf::uint32 v9; // ecx
  google::protobuf::uint32 v10; // ecx
  google::protobuf::uint32 v11; // ecx
  const std::string *v12; // rax
  unsigned int v13; // ebx
  const std::string *v14; // rax
  google::protobuf::internal::WireFormatLite *v15; // rax
  const char *v16; // r8
  const std::string *v17; // rcx
  google::protobuf::uint32 v18; // ecx
  google::protobuf::uint32 v19; // ecx
  google::protobuf::uint32 v20; // ecx
  google::protobuf::uint32 v21; // ecx
  google::protobuf::uint32 v22; // ecx
  google::protobuf::uint32 v23; // ecx
  google::protobuf::uint32 v24; // ecx
  google::protobuf::uint32 v25; // ecx
  google::protobuf::uint32 v26; // ecx
  google::protobuf::uint32 v27; // ecx
  const std::string *v28; // rax
  const std::string *v29; // rax
  unsigned int v30; // ebx
  const std::string *v31; // rax
  google::protobuf::internal::WireFormatLite *v32; // rax
  const char *v33; // r8
  const std::string *v34; // rcx
  google::protobuf::uint32 v35; // ecx
  google::protobuf::int64 v36; // rcx
  google::protobuf::int64 v37; // rcx
  google::protobuf::uint32 v38; // ecx
  google::protobuf::uint32 v39; // ecx
  google::protobuf::uint64 v40; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v42; // rax
  int i; // [rsp+1Ch] [rbp-44h]
  int n; // [rsp+24h] [rbp-3Ch]

  if ( proto_log::PlayerLogHeadExt::avatar_id(this) )
  {
    v2 = proto_log::PlayerLogHeadExt::avatar_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::PlayerLogHeadExt::scene_id(this) )
  {
    v3 = proto_log::PlayerLogHeadExt::scene_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::PlayerLogHeadExt::world_owner_uid(this) )
  {
    v4 = proto_log::PlayerLogHeadExt::world_owner_uid(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  if ( proto_log::PlayerLogHeadExt::x_coordinate(this) )
  {
    v5 = proto_log::PlayerLogHeadExt::x_coordinate(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(4, v5, output);
  }
  if ( proto_log::PlayerLogHeadExt::y_coordinate(this) )
  {
    v6 = proto_log::PlayerLogHeadExt::y_coordinate(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(5, v6, output);
  }
  if ( proto_log::PlayerLogHeadExt::z_coordinate(this) )
  {
    v7 = proto_log::PlayerLogHeadExt::z_coordinate(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(6, v7, output);
  }
  if ( proto_log::PlayerLogHeadExt::player_time(this) )
  {
    v8 = proto_log::PlayerLogHeadExt::player_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(7, v8, output);
  }
  if ( proto_log::PlayerLogHeadExt::login_time(this) )
  {
    v9 = proto_log::PlayerLogHeadExt::login_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(8, v9, output);
  }
  if ( proto_log::PlayerLogHeadExt::platform_type(this) )
  {
    v10 = proto_log::PlayerLogHeadExt::platform_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(9, v10, output);
  }
  if ( proto_log::PlayerLogHeadExt::weather(this) )
  {
    v11 = proto_log::PlayerLogHeadExt::weather(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(10, v11, output);
  }
  i = 0;
  n = proto_log::PlayerLogHeadExt::sub_action_list_size(this);
  while ( i < n )
  {
    v12 = proto_log::PlayerLogHeadExt::sub_action_list[abi:cxx11](this, i);
    v13 = std::string::length(v12);
    v14 = proto_log::PlayerLogHeadExt::sub_action_list[abi:cxx11](this, i);
    v15 = (google::protobuf::internal::WireFormatLite *)std::string::data(v14);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v15,
      (const char *)v13,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHeadExt.sub_action_list",
      v16);
    v17 = proto_log::PlayerLogHeadExt::sub_action_list[abi:cxx11](this, i);
    google::protobuf::internal::WireFormatLite::WriteString(11LL, v17, output);
    ++i;
  }
  if ( proto_log::PlayerLogHeadExt::unpaused_time(this) )
  {
    v18 = proto_log::PlayerLogHeadExt::unpaused_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(12, v18, output);
  }
  if ( proto_log::PlayerLogHeadExt::is_in_mp(this) )
  {
    v19 = proto_log::PlayerLogHeadExt::is_in_mp(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(13, v19, output);
  }
  if ( proto_log::PlayerLogHeadExt::level1_area_id(this) )
  {
    v20 = proto_log::PlayerLogHeadExt::level1_area_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(14, v20, output);
  }
  if ( proto_log::PlayerLogHeadExt::level2_area_id(this) )
  {
    v21 = proto_log::PlayerLogHeadExt::level2_area_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(15, v21, output);
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_hcoin(this) )
  {
    v22 = proto_log::PlayerLogHeadExt::wait_sub_hcoin(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(16, v22, output);
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_scoin(this) )
  {
    v23 = proto_log::PlayerLogHeadExt::wait_sub_scoin(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(17, v23, output);
  }
  if ( proto_log::PlayerLogHeadExt::gm_uid(this) )
  {
    v24 = proto_log::PlayerLogHeadExt::gm_uid(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(18, v24, output);
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_mcoin(this) )
  {
    v25 = proto_log::PlayerLogHeadExt::wait_sub_mcoin(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(19, v25, output);
  }
  if ( proto_log::PlayerLogHeadExt::world_level(this) )
  {
    v26 = proto_log::PlayerLogHeadExt::world_level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(20, v26, output);
  }
  if ( proto_log::PlayerLogHeadExt::cur_world_level(this) )
  {
    v27 = proto_log::PlayerLogHeadExt::cur_world_level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(21, v27, output);
  }
  v28 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
  if ( std::string::size(v28) )
  {
    v29 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
    v30 = std::string::length(v29);
    v31 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
    v32 = (google::protobuf::internal::WireFormatLite *)std::string::data(v31);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v32,
      (const char *)v30,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHeadExt.country_code",
      v33);
    v34 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(22LL, v34, output);
  }
  if ( proto_log::PlayerLogHeadExt::world_level_limit(this) )
  {
    v35 = proto_log::PlayerLogHeadExt::world_level_limit(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(23, v35, output);
  }
  if ( proto_log::PlayerLogHeadExt::pcm_coin_3(this) )
  {
    v36 = proto_log::PlayerLogHeadExt::pcm_coin_3(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(24, v36, output);
  }
  if ( proto_log::PlayerLogHeadExt::psn_coin_3(this) )
  {
    v37 = proto_log::PlayerLogHeadExt::psn_coin_3(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(25, v37, output);
  }
  if ( proto_log::PlayerLogHeadExt::pcm_wait_sub_mcoin(this) )
  {
    v38 = proto_log::PlayerLogHeadExt::pcm_wait_sub_mcoin(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(26, v38, output);
  }
  if ( proto_log::PlayerLogHeadExt::psn_wait_sub_mcoin(this) )
  {
    v39 = proto_log::PlayerLogHeadExt::psn_wait_sub_mcoin(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(27, v39, output);
  }
  if ( proto_log::PlayerLogHeadExt::player_stat_id(this) )
  {
    v40 = proto_log::PlayerLogHeadExt::player_stat_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt64(28, v40, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_70;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v42 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_70:
      v42 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v42->unknown_fields, output);
  }
};

// Line 873: range 00000000178B977C-00000000178B9FA8
google::protobuf::uint8 *__cdecl proto_log::PlayerLogHeadExt::InternalSerializeWithCachedSizesToArray(
        const proto_log::PlayerLogHeadExt *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::int32 v6; // ecx
  google::protobuf::int32 v7; // ecx
  google::protobuf::int32 v8; // ecx
  google::protobuf::uint32 v9; // ecx
  google::protobuf::uint32 v10; // ecx
  google::protobuf::uint32 v11; // ecx
  google::protobuf::uint32 v12; // ecx
  const std::string *v13; // rax
  unsigned int v14; // ebx
  const std::string *v15; // rax
  google::protobuf::internal::WireFormatLite *v16; // rax
  const char *v17; // r8
  const std::string *v18; // rcx
  google::protobuf::uint32 v19; // ecx
  google::protobuf::uint32 v20; // ecx
  google::protobuf::uint32 v21; // ecx
  google::protobuf::uint32 v22; // ecx
  google::protobuf::uint32 v23; // ecx
  google::protobuf::uint32 v24; // ecx
  google::protobuf::uint32 v25; // ecx
  google::protobuf::uint32 v26; // ecx
  google::protobuf::uint32 v27; // ecx
  google::protobuf::uint32 v28; // ecx
  const std::string *v29; // rax
  const std::string *v30; // rax
  unsigned int v31; // ebx
  const std::string *v32; // rax
  google::protobuf::internal::WireFormatLite *v33; // rax
  const char *v34; // r8
  const std::string *v35; // rcx
  google::protobuf::uint32 v36; // ecx
  google::protobuf::int64 v37; // rcx
  google::protobuf::int64 v38; // rcx
  google::protobuf::uint32 v39; // ecx
  google::protobuf::uint32 v40; // ecx
  google::protobuf::uint64 v41; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v43; // rax
  int i; // [rsp+2Ch] [rbp-44h]
  int n; // [rsp+34h] [rbp-3Ch]

  if ( proto_log::PlayerLogHeadExt::avatar_id(this) )
  {
    v3 = proto_log::PlayerLogHeadExt::avatar_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::PlayerLogHeadExt::scene_id(this) )
  {
    v4 = proto_log::PlayerLogHeadExt::scene_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::PlayerLogHeadExt::world_owner_uid(this) )
  {
    v5 = proto_log::PlayerLogHeadExt::world_owner_uid(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  if ( proto_log::PlayerLogHeadExt::x_coordinate(this) )
  {
    v6 = proto_log::PlayerLogHeadExt::x_coordinate(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, v6, target);
  }
  if ( proto_log::PlayerLogHeadExt::y_coordinate(this) )
  {
    v7 = proto_log::PlayerLogHeadExt::y_coordinate(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, v7, target);
  }
  if ( proto_log::PlayerLogHeadExt::z_coordinate(this) )
  {
    v8 = proto_log::PlayerLogHeadExt::z_coordinate(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, v8, target);
  }
  if ( proto_log::PlayerLogHeadExt::player_time(this) )
  {
    v9 = proto_log::PlayerLogHeadExt::player_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, v9, target);
  }
  if ( proto_log::PlayerLogHeadExt::login_time(this) )
  {
    v10 = proto_log::PlayerLogHeadExt::login_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, v10, target);
  }
  if ( proto_log::PlayerLogHeadExt::platform_type(this) )
  {
    v11 = proto_log::PlayerLogHeadExt::platform_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, v11, target);
  }
  if ( proto_log::PlayerLogHeadExt::weather(this) )
  {
    v12 = proto_log::PlayerLogHeadExt::weather(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, v12, target);
  }
  i = 0;
  n = proto_log::PlayerLogHeadExt::sub_action_list_size(this);
  while ( i < n )
  {
    v13 = proto_log::PlayerLogHeadExt::sub_action_list[abi:cxx11](this, i);
    v14 = std::string::length(v13);
    v15 = proto_log::PlayerLogHeadExt::sub_action_list[abi:cxx11](this, i);
    v16 = (google::protobuf::internal::WireFormatLite *)std::string::data(v15);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v16,
      (const char *)v14,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHeadExt.sub_action_list",
      v17);
    v18 = proto_log::PlayerLogHeadExt::sub_action_list[abi:cxx11](this, i);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(11, v18, target);
    ++i;
  }
  if ( proto_log::PlayerLogHeadExt::unpaused_time(this) )
  {
    v19 = proto_log::PlayerLogHeadExt::unpaused_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, v19, target);
  }
  if ( proto_log::PlayerLogHeadExt::is_in_mp(this) )
  {
    v20 = proto_log::PlayerLogHeadExt::is_in_mp(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, v20, target);
  }
  if ( proto_log::PlayerLogHeadExt::level1_area_id(this) )
  {
    v21 = proto_log::PlayerLogHeadExt::level1_area_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, v21, target);
  }
  if ( proto_log::PlayerLogHeadExt::level2_area_id(this) )
  {
    v22 = proto_log::PlayerLogHeadExt::level2_area_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, v22, target);
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_hcoin(this) )
  {
    v23 = proto_log::PlayerLogHeadExt::wait_sub_hcoin(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(16, v23, target);
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_scoin(this) )
  {
    v24 = proto_log::PlayerLogHeadExt::wait_sub_scoin(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(17, v24, target);
  }
  if ( proto_log::PlayerLogHeadExt::gm_uid(this) )
  {
    v25 = proto_log::PlayerLogHeadExt::gm_uid(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(18, v25, target);
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_mcoin(this) )
  {
    v26 = proto_log::PlayerLogHeadExt::wait_sub_mcoin(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(19, v26, target);
  }
  if ( proto_log::PlayerLogHeadExt::world_level(this) )
  {
    v27 = proto_log::PlayerLogHeadExt::world_level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(20, v27, target);
  }
  if ( proto_log::PlayerLogHeadExt::cur_world_level(this) )
  {
    v28 = proto_log::PlayerLogHeadExt::cur_world_level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(21, v28, target);
  }
  v29 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
  if ( std::string::size(v29) )
  {
    v30 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
    v31 = std::string::length(v30);
    v32 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
    v33 = (google::protobuf::internal::WireFormatLite *)std::string::data(v32);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v33,
      (const char *)v31,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.PlayerLogHeadExt.country_code",
      v34);
    v35 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(22, v35, target);
  }
  if ( proto_log::PlayerLogHeadExt::world_level_limit(this) )
  {
    v36 = proto_log::PlayerLogHeadExt::world_level_limit(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(23, v36, target);
  }
  if ( proto_log::PlayerLogHeadExt::pcm_coin_3(this) )
  {
    v37 = proto_log::PlayerLogHeadExt::pcm_coin_3(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(24, v37, target);
  }
  if ( proto_log::PlayerLogHeadExt::psn_coin_3(this) )
  {
    v38 = proto_log::PlayerLogHeadExt::psn_coin_3(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(25, v38, target);
  }
  if ( proto_log::PlayerLogHeadExt::pcm_wait_sub_mcoin(this) )
  {
    v39 = proto_log::PlayerLogHeadExt::pcm_wait_sub_mcoin(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(26, v39, target);
  }
  if ( proto_log::PlayerLogHeadExt::psn_wait_sub_mcoin(this) )
  {
    v40 = proto_log::PlayerLogHeadExt::psn_wait_sub_mcoin(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(27, v40, target);
  }
  if ( proto_log::PlayerLogHeadExt::player_stat_id(this) )
  {
    v41 = proto_log::PlayerLogHeadExt::player_stat_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(28, v41, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_70;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v43 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_70:
      v43 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v43->unknown_fields, target);
  }
  return target;
};

// Line 1038: range 00000000178B9FAA-00000000178BA683
size_t __cdecl proto_log::PlayerLogHeadExt::ByteSizeLong(const proto_log::PlayerLogHeadExt *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  int v3; // eax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  google::protobuf::uint32 v7; // eax
  google::protobuf::uint32 v8; // eax
  google::protobuf::uint32 v9; // eax
  google::protobuf::int32 v10; // eax
  google::protobuf::int32 v11; // eax
  google::protobuf::int32 v12; // eax
  google::protobuf::uint32 v13; // eax
  google::protobuf::uint32 v14; // eax
  google::protobuf::uint32 v15; // eax
  google::protobuf::uint32 v16; // eax
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // eax
  google::protobuf::uint32 v19; // eax
  google::protobuf::uint32 v20; // eax
  google::protobuf::uint32 v21; // eax
  google::protobuf::uint32 v22; // eax
  google::protobuf::uint32 v23; // eax
  google::protobuf::uint32 v24; // eax
  google::protobuf::uint32 v25; // eax
  google::protobuf::uint32 v26; // eax
  google::protobuf::int64 v27; // rax
  google::protobuf::uint32 v28; // eax
  google::protobuf::uint32 v29; // eax
  google::protobuf::int64 v30; // rax
  google::protobuf::uint64 v31; // rax
  google::protobuf::uint32 v32; // eax
  int i; // [rsp+14h] [rbp-3Ch]
  int n; // [rsp+18h] [rbp-38h]
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
  v3 = proto_log::PlayerLogHeadExt::sub_action_list_size(this);
  total_sizea = google::protobuf::internal::FromIntSize(v3) + total_size;
  i = 0;
  n = proto_log::PlayerLogHeadExt::sub_action_list_size(this);
  while ( i < n )
  {
    v4 = proto_log::PlayerLogHeadExt::sub_action_list[abi:cxx11](this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::StringSize(v4);
    ++i;
  }
  v5 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
  if ( std::string::size(v5) )
  {
    v6 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](this);
    total_sizea += google::protobuf::internal::WireFormatLite::StringSize(v6) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::avatar_id(this) )
  {
    v7 = proto_log::PlayerLogHeadExt::avatar_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v7) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::scene_id(this) )
  {
    v8 = proto_log::PlayerLogHeadExt::scene_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v8) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::world_owner_uid(this) )
  {
    v9 = proto_log::PlayerLogHeadExt::world_owner_uid(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v9) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::x_coordinate(this) )
  {
    v10 = proto_log::PlayerLogHeadExt::x_coordinate(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(v10) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::y_coordinate(this) )
  {
    v11 = proto_log::PlayerLogHeadExt::y_coordinate(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(v11) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::z_coordinate(this) )
  {
    v12 = proto_log::PlayerLogHeadExt::z_coordinate(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(v12) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::player_time(this) )
  {
    v13 = proto_log::PlayerLogHeadExt::player_time(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v13) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::login_time(this) )
  {
    v14 = proto_log::PlayerLogHeadExt::login_time(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v14) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::platform_type(this) )
  {
    v15 = proto_log::PlayerLogHeadExt::platform_type(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v15) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::weather(this) )
  {
    v16 = proto_log::PlayerLogHeadExt::weather(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v16) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::unpaused_time(this) )
  {
    v17 = proto_log::PlayerLogHeadExt::unpaused_time(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v17) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::is_in_mp(this) )
  {
    v18 = proto_log::PlayerLogHeadExt::is_in_mp(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v18) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::level1_area_id(this) )
  {
    v19 = proto_log::PlayerLogHeadExt::level1_area_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v19) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::level2_area_id(this) )
  {
    v20 = proto_log::PlayerLogHeadExt::level2_area_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v20) + 1;
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_hcoin(this) )
  {
    v21 = proto_log::PlayerLogHeadExt::wait_sub_hcoin(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v21) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_scoin(this) )
  {
    v22 = proto_log::PlayerLogHeadExt::wait_sub_scoin(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v22) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::gm_uid(this) )
  {
    v23 = proto_log::PlayerLogHeadExt::gm_uid(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v23) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_mcoin(this) )
  {
    v24 = proto_log::PlayerLogHeadExt::wait_sub_mcoin(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v24) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::world_level(this) )
  {
    v25 = proto_log::PlayerLogHeadExt::world_level(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v25) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::cur_world_level(this) )
  {
    v26 = proto_log::PlayerLogHeadExt::cur_world_level(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v26) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::pcm_coin_3(this) )
  {
    v27 = proto_log::PlayerLogHeadExt::pcm_coin_3(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int64Size(v27) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::world_level_limit(this) )
  {
    v28 = proto_log::PlayerLogHeadExt::world_level_limit(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v28) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::pcm_wait_sub_mcoin(this) )
  {
    v29 = proto_log::PlayerLogHeadExt::pcm_wait_sub_mcoin(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v29) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::psn_coin_3(this) )
  {
    v30 = proto_log::PlayerLogHeadExt::psn_coin_3(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int64Size(v30) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::player_stat_id(this) )
  {
    v31 = proto_log::PlayerLogHeadExt::player_stat_id(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt64Size(v31) + 2;
  }
  if ( proto_log::PlayerLogHeadExt::psn_wait_sub_mcoin(this) )
  {
    v32 = proto_log::PlayerLogHeadExt::psn_wait_sub_mcoin(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v32) + 2;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizea);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizea;
};

// Line 1251: range 00000000178BA684-00000000178BA90D
void __cdecl proto_log::PlayerLogHeadExt::MergeFrom(
        proto_log::PlayerLogHeadExt *const this,
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
  const proto_log::PlayerLogHeadExt *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogHeadExt::MergeFrom;
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
      "./src/server_only/log/player/player_head_ext.pb.cc",
      1253);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::PlayerLogHeadExt const>(from);
  if ( source )
    proto_log::PlayerLogHeadExt::MergeFrom(this, source);
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

// Line 1266: range 00000000178BA90E-00000000178BB2EE
void __cdecl proto_log::PlayerLogHeadExt::MergeFrom(
        proto_log::PlayerLogHeadExt *const this,
        const proto_log::PlayerLogHeadExt *from)
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
  google::protobuf::uint32 v14; // edx
  google::protobuf::int32 v15; // edx
  google::protobuf::int32 v16; // edx
  google::protobuf::int32 v17; // edx
  google::protobuf::uint32 v18; // edx
  google::protobuf::uint32 v19; // edx
  google::protobuf::uint32 v20; // edx
  google::protobuf::uint32 v21; // edx
  google::protobuf::uint32 v22; // edx
  google::protobuf::uint32 v23; // edx
  google::protobuf::uint32 v24; // edx
  google::protobuf::uint32 v25; // edx
  google::protobuf::uint32 v26; // edx
  google::protobuf::uint32 v27; // edx
  google::protobuf::uint32 v28; // edx
  google::protobuf::uint32 v29; // edx
  google::protobuf::uint32 v30; // edx
  google::protobuf::uint32 v31; // edx
  google::protobuf::int64 v32; // rdx
  google::protobuf::uint32 v33; // edx
  google::protobuf::uint32 v34; // edx
  google::protobuf::int64 v35; // rdx
  google::protobuf::uint64 v36; // rdx
  google::protobuf::uint32 v37; // edx
  char v38; // [rsp+Fh] [rbp-121h]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+30h] [rbp-100h]
  char v40[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = proto_log::PlayerLogHeadExt::MergeFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v38 = 0;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "./src/server_only/log/player/player_head_ext.pb.cc",
      1268);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (&from) != (this): ");
    v38 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v38 )
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
  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(&this->sub_action_list_, &from->sub_action_list_);
  v10 = proto_log::PlayerLogHeadExt::country_code[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->country_code_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->country_code_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->country_code_, v11, from->country_code_);
  }
  if ( proto_log::PlayerLogHeadExt::avatar_id(from) )
  {
    v12 = proto_log::PlayerLogHeadExt::avatar_id(from);
    proto_log::PlayerLogHeadExt::set_avatar_id(this, v12);
  }
  if ( proto_log::PlayerLogHeadExt::scene_id(from) )
  {
    v13 = proto_log::PlayerLogHeadExt::scene_id(from);
    proto_log::PlayerLogHeadExt::set_scene_id(this, v13);
  }
  if ( proto_log::PlayerLogHeadExt::world_owner_uid(from) )
  {
    v14 = proto_log::PlayerLogHeadExt::world_owner_uid(from);
    proto_log::PlayerLogHeadExt::set_world_owner_uid(this, v14);
  }
  if ( proto_log::PlayerLogHeadExt::x_coordinate(from) )
  {
    v15 = proto_log::PlayerLogHeadExt::x_coordinate(from);
    proto_log::PlayerLogHeadExt::set_x_coordinate(this, v15);
  }
  if ( proto_log::PlayerLogHeadExt::y_coordinate(from) )
  {
    v16 = proto_log::PlayerLogHeadExt::y_coordinate(from);
    proto_log::PlayerLogHeadExt::set_y_coordinate(this, v16);
  }
  if ( proto_log::PlayerLogHeadExt::z_coordinate(from) )
  {
    v17 = proto_log::PlayerLogHeadExt::z_coordinate(from);
    proto_log::PlayerLogHeadExt::set_z_coordinate(this, v17);
  }
  if ( proto_log::PlayerLogHeadExt::player_time(from) )
  {
    v18 = proto_log::PlayerLogHeadExt::player_time(from);
    proto_log::PlayerLogHeadExt::set_player_time(this, v18);
  }
  if ( proto_log::PlayerLogHeadExt::login_time(from) )
  {
    v19 = proto_log::PlayerLogHeadExt::login_time(from);
    proto_log::PlayerLogHeadExt::set_login_time(this, v19);
  }
  if ( proto_log::PlayerLogHeadExt::platform_type(from) )
  {
    v20 = proto_log::PlayerLogHeadExt::platform_type(from);
    proto_log::PlayerLogHeadExt::set_platform_type(this, v20);
  }
  if ( proto_log::PlayerLogHeadExt::weather(from) )
  {
    v21 = proto_log::PlayerLogHeadExt::weather(from);
    proto_log::PlayerLogHeadExt::set_weather(this, v21);
  }
  if ( proto_log::PlayerLogHeadExt::unpaused_time(from) )
  {
    v22 = proto_log::PlayerLogHeadExt::unpaused_time(from);
    proto_log::PlayerLogHeadExt::set_unpaused_time(this, v22);
  }
  if ( proto_log::PlayerLogHeadExt::is_in_mp(from) )
  {
    v23 = proto_log::PlayerLogHeadExt::is_in_mp(from);
    proto_log::PlayerLogHeadExt::set_is_in_mp(this, v23);
  }
  if ( proto_log::PlayerLogHeadExt::level1_area_id(from) )
  {
    v24 = proto_log::PlayerLogHeadExt::level1_area_id(from);
    proto_log::PlayerLogHeadExt::set_level1_area_id(this, v24);
  }
  if ( proto_log::PlayerLogHeadExt::level2_area_id(from) )
  {
    v25 = proto_log::PlayerLogHeadExt::level2_area_id(from);
    proto_log::PlayerLogHeadExt::set_level2_area_id(this, v25);
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_hcoin(from) )
  {
    v26 = proto_log::PlayerLogHeadExt::wait_sub_hcoin(from);
    proto_log::PlayerLogHeadExt::set_wait_sub_hcoin(this, v26);
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_scoin(from) )
  {
    v27 = proto_log::PlayerLogHeadExt::wait_sub_scoin(from);
    proto_log::PlayerLogHeadExt::set_wait_sub_scoin(this, v27);
  }
  if ( proto_log::PlayerLogHeadExt::gm_uid(from) )
  {
    v28 = proto_log::PlayerLogHeadExt::gm_uid(from);
    proto_log::PlayerLogHeadExt::set_gm_uid(this, v28);
  }
  if ( proto_log::PlayerLogHeadExt::wait_sub_mcoin(from) )
  {
    v29 = proto_log::PlayerLogHeadExt::wait_sub_mcoin(from);
    proto_log::PlayerLogHeadExt::set_wait_sub_mcoin(this, v29);
  }
  if ( proto_log::PlayerLogHeadExt::world_level(from) )
  {
    v30 = proto_log::PlayerLogHeadExt::world_level(from);
    proto_log::PlayerLogHeadExt::set_world_level(this, v30);
  }
  if ( proto_log::PlayerLogHeadExt::cur_world_level(from) )
  {
    v31 = proto_log::PlayerLogHeadExt::cur_world_level(from);
    proto_log::PlayerLogHeadExt::set_cur_world_level(this, v31);
  }
  if ( proto_log::PlayerLogHeadExt::pcm_coin_3(from) )
  {
    v32 = proto_log::PlayerLogHeadExt::pcm_coin_3(from);
    proto_log::PlayerLogHeadExt::set_pcm_coin_3(this, v32);
  }
  if ( proto_log::PlayerLogHeadExt::world_level_limit(from) )
  {
    v33 = proto_log::PlayerLogHeadExt::world_level_limit(from);
    proto_log::PlayerLogHeadExt::set_world_level_limit(this, v33);
  }
  if ( proto_log::PlayerLogHeadExt::pcm_wait_sub_mcoin(from) )
  {
    v34 = proto_log::PlayerLogHeadExt::pcm_wait_sub_mcoin(from);
    proto_log::PlayerLogHeadExt::set_pcm_wait_sub_mcoin(this, v34);
  }
  if ( proto_log::PlayerLogHeadExt::psn_coin_3(from) )
  {
    v35 = proto_log::PlayerLogHeadExt::psn_coin_3(from);
    proto_log::PlayerLogHeadExt::set_psn_coin_3(this, v35);
  }
  if ( proto_log::PlayerLogHeadExt::player_stat_id(from) )
  {
    v36 = proto_log::PlayerLogHeadExt::player_stat_id(from);
    proto_log::PlayerLogHeadExt::set_player_stat_id(this, v36);
  }
  if ( proto_log::PlayerLogHeadExt::psn_wait_sub_mcoin(from) )
  {
    v37 = proto_log::PlayerLogHeadExt::psn_wait_sub_mcoin(from);
    proto_log::PlayerLogHeadExt::set_psn_wait_sub_mcoin(this, v37);
  }
  if ( v40 == (char *)v2 )
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

// Line 1358: range 00000000178BB2F0-00000000178BB32D
void __cdecl proto_log::PlayerLogHeadExt::CopyFrom(
        proto_log::PlayerLogHeadExt *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogHeadExt::Clear(this);
    proto_log::PlayerLogHeadExt::MergeFrom(this, from);
  }
};

// Line 1365: range 00000000178BB32E-00000000178BB36B
void __cdecl proto_log::PlayerLogHeadExt::CopyFrom(
        proto_log::PlayerLogHeadExt *const this,
        const proto_log::PlayerLogHeadExt *from)
{
  if ( from != this )
  {
    proto_log::PlayerLogHeadExt::Clear(this);
    proto_log::PlayerLogHeadExt::MergeFrom(this, from);
  }
};

// Line 1372: range 00000000178BB36C-00000000178BB37A
bool __cdecl proto_log::PlayerLogHeadExt::IsInitialized(const proto_log::PlayerLogHeadExt *const this)
{
  return 1;
};

// Line 1376: range 00000000178BB37C-00000000178BB3AD
void __cdecl proto_log::PlayerLogHeadExt::Swap(
        proto_log::PlayerLogHeadExt *const this,
        proto_log::PlayerLogHeadExt *other)
{
  if ( other != this )
    proto_log::PlayerLogHeadExt::InternalSwap(this, other);
};

// Line 1380: range 00000000178BB3AE-00000000178BB83D
void __cdecl proto_log::PlayerLogHeadExt::InternalSwap(
        proto_log::PlayerLogHeadExt *const this,
        proto_log::PlayerLogHeadExt *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-50h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(&this->sub_action_list_, &other->sub_action_list_);
  std::swap<std::string *>(&this->country_code_.ptr_, &other->country_code_.ptr_);
  std::swap<unsigned int>(&this->avatar_id_, &other->avatar_id_);
  std::swap<unsigned int>(&this->scene_id_, &other->scene_id_);
  std::swap<unsigned int>(&this->world_owner_uid_, &other->world_owner_uid_);
  std::swap<int>(&this->x_coordinate_, &other->x_coordinate_);
  std::swap<int>(&this->y_coordinate_, &other->y_coordinate_);
  std::swap<int>(&this->z_coordinate_, &other->z_coordinate_);
  std::swap<unsigned int>(&this->player_time_, &other->player_time_);
  std::swap<unsigned int>(&this->login_time_, &other->login_time_);
  std::swap<unsigned int>(&this->platform_type_, &other->platform_type_);
  std::swap<unsigned int>(&this->weather_, &other->weather_);
  std::swap<unsigned int>(&this->unpaused_time_, &other->unpaused_time_);
  std::swap<unsigned int>(&this->is_in_mp_, &other->is_in_mp_);
  std::swap<unsigned int>(&this->level1_area_id_, &other->level1_area_id_);
  std::swap<unsigned int>(&this->level2_area_id_, &other->level2_area_id_);
  std::swap<unsigned int>(&this->wait_sub_hcoin_, &other->wait_sub_hcoin_);
  std::swap<unsigned int>(&this->wait_sub_scoin_, &other->wait_sub_scoin_);
  std::swap<unsigned int>(&this->gm_uid_, &other->gm_uid_);
  std::swap<unsigned int>(&this->wait_sub_mcoin_, &other->wait_sub_mcoin_);
  std::swap<unsigned int>(&this->world_level_, &other->world_level_);
  std::swap<unsigned int>(&this->cur_world_level_, &other->cur_world_level_);
  std::swap<long>(&this->pcm_coin_3_, &other->pcm_coin_3_);
  std::swap<unsigned int>(&this->world_level_limit_, &other->world_level_limit_);
  std::swap<unsigned int>(&this->pcm_wait_sub_mcoin_, &other->pcm_wait_sub_mcoin_);
  std::swap<long>(&this->psn_coin_3_, &other->psn_coin_3_);
  std::swap<unsigned long>(&this->player_stat_id_, &other->player_stat_id_);
  std::swap<unsigned int>(&this->psn_wait_sub_mcoin_, &other->psn_wait_sub_mcoin_);
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

// Line 1414: range 00000000178BB83E-00000000178BB85E
google::protobuf::Metadata __cdecl proto_log::PlayerLogHeadExt::GetMetadata(
        const proto_log::PlayerLogHeadExt *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::`anonymous namespace'::file_level_metadata[0];
};

// Line 1912: range 00000000178BB966-00000000178BB97A
void __cdecl GLOBAL__sub_I_merge_merge_match_body_pb_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1912: range 00000000178BB85F-00000000178BB965
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_match_body.pb.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::static_descriptor_initializer);
      proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fhead_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fhead_2eproto::static_descriptor_initializer);
      proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5faction_5ftype_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5faction_5ftype_2eproto::static_descriptor_initializer);
      proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fbody_2eproto::static_descriptor_initializer);
      proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2forder_2forder_5fhead_2eproto::static_descriptor_initializer);
      proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5faction_5ftype_2eproto::static_descriptor_initializer);
      proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcommon_2eproto::static_descriptor_initializer);
      proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcustom_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fcustom_2eproto::static_descriptor_initializer);
      proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fbody_5fext_2eproto::static_descriptor_initializer);
      proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_2eproto::static_descriptor_initializer);
      proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(&proto_log::protobuf_server_5fonly_2flog_2fplayer_2fplayer_5fhead_5fext_2eproto::static_descriptor_initializer);
    }
    __asan_after_dynamic_init();
  }
};

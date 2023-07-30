// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/match/match_body.pb.cc

// Line 73: range 0000000017425A4A-0000000017425C13
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/match/match_body.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::file_level_metadata,
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

// Line 81: range 0000000017425C14-0000000017425C2D
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 87: range 0000000017425C2E-0000000017425C52
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::file_level_metadata,
    1);
};

// Line 93: range 0000000017425C54-0000000017425C93
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/match/match_body.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::MatchLogBodyJoinTeam>::DefaultConstruct(&proto_log::_MatchLogBodyJoinTeam_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_MatchLogBodyJoinTeam_default_instance_,
    (const void *)0x2DD660);
};

// Line 101: range 0000000017425C94-0000000017425CB0
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 106: range 0000000017425CB1-0000000017425CE0
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 122: range 0000000017425CE1-0000000017425CFA
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 128: range 00000000178BBDE2-00000000178BBDF5
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::AddDescriptors();
};

// Line 147: range 0000000017425CFC-0000000017425DDB
void __cdecl proto_log::MatchLogBodyJoinTeam::MatchLogBodyJoinTeam(proto_log::MatchLogBodyJoinTeam *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::MatchLogBodyJoinTeam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<unsigned int>::RepeatedField(&this->uid_list_);
  if ( this != proto_log::MatchLogBodyJoinTeam::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::InitDefaults();
  proto_log::MatchLogBodyJoinTeam::SharedCtor(this);
};

// Line 155: range 0000000017425DDC-0000000017425FE0
void __cdecl proto_log::MatchLogBodyJoinTeam::MatchLogBodyJoinTeam(
        proto_log::MatchLogBodyJoinTeam *const this,
        const proto_log::MatchLogBodyJoinTeam *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::MatchLogBodyJoinTeam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<unsigned int>::RepeatedField(&this->uid_list_, &from->uid_list_);
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
  memcpy(&this->host_uid_, &from->host_uid_, 0x14uLL);
};

// Line 167: range 0000000017425FE2-0000000017426048
void __cdecl proto_log::MatchLogBodyJoinTeam::SharedCtor(proto_log::MatchLogBodyJoinTeam *const this)
{
  memset(&this->host_uid_, 0, 0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 174: range 000000001742604A-00000000174260C3
void __cdecl proto_log::MatchLogBodyJoinTeam::~MatchLogBodyJoinTeam(proto_log::MatchLogBodyJoinTeam *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::MatchLogBodyJoinTeam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::MatchLogBodyJoinTeam::SharedDtor(this);
  google::protobuf::RepeatedField<unsigned int>::~RepeatedField(&this->uid_list_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 174: range 00000000174260C4-00000000174260EE
void __cdecl proto_log::MatchLogBodyJoinTeam::~MatchLogBodyJoinTeam(proto_log::MatchLogBodyJoinTeam *const this)
{
  proto_log::MatchLogBodyJoinTeam::~MatchLogBodyJoinTeam(this);
  operator delete(this, 0x40uLL);
};

// Line 179: range 00000000174260F0-00000000174260FA
void __cdecl proto_log::MatchLogBodyJoinTeam::SharedDtor(proto_log::MatchLogBodyJoinTeam *const this)
{
  ;
};

// Line 182: range 00000000174260FC-000000001742614A
void __cdecl proto_log::MatchLogBodyJoinTeam::SetCachedSize(
        const proto_log::MatchLogBodyJoinTeam *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 187: range 000000001742614C-000000001742615D
const google::protobuf::Descriptor *__cdecl proto_log::MatchLogBodyJoinTeam::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 192: range 000000001742615E-000000001742616D
const proto_log::MatchLogBodyJoinTeam *__cdecl proto_log::MatchLogBodyJoinTeam::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::InitDefaults();
  return proto_log::MatchLogBodyJoinTeam::internal_default_instance();
};

// Line 197: range 000000001742616E-00000000174261E2
proto_log::MatchLogBodyJoinTeam *__cdecl proto_log::MatchLogBodyJoinTeam::New(
        const proto_log::MatchLogBodyJoinTeam *const this,
        google::protobuf::Arena *arena)
{
  proto_log::MatchLogBodyJoinTeam *v2; // rbx

  v2 = (proto_log::MatchLogBodyJoinTeam *)operator new(0x40uLL);
  proto_log::MatchLogBodyJoinTeam::MatchLogBodyJoinTeam(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::MatchLogBodyJoinTeam>(arena, v2);
  return v2;
};

// Line 205: range 00000000174261E4-0000000017426281
void __cdecl proto_log::MatchLogBodyJoinTeam::Clear(proto_log::MatchLogBodyJoinTeam *const this)
{
  google::protobuf::RepeatedField<unsigned int>::Clear(&this->uid_list_);
  memset(&this->host_uid_, 0, 0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 219: range 0000000017426282-0000000017426D54
bool __cdecl proto_log::MatchLogBodyJoinTeam::MergePartialFromCodedStream(
        proto_log::MatchLogBodyJoinTeam *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:224";
  *(_QWORD *)(v2 + 16) = proto_log::MatchLogBodyJoinTeam::MergePartialFromCodedStream;
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
                  &this->host_uid_) )
            goto failure;
          continue;
        case 2:
          if ( (_BYTE)tag != 16 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->guest_uid_) )
            goto failure;
          continue;
        case 3:
          if ( (_BYTE)tag != 24 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->cost_time_) )
            goto failure;
          continue;
        case 4:
          if ( (_BYTE)tag == 34 )
          {
            v13 = proto_log::MatchLogBodyJoinTeam::mutable_uid_list(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    v13) )
              goto failure;
          }
          else
          {
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            v14 = proto_log::MatchLogBodyJoinTeam::mutable_uid_list(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    1,
                    0x22u,
                    input,
                    v14) )
              goto failure;
          }
          break;
        case 5:
          if ( (_BYTE)tag != 40 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->match_type_) )
            goto failure;
          continue;
        case 6:
          if ( (_BYTE)tag != 48 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->match_target_) )
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
      goto LABEL_66;
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
LABEL_66:
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

// Line 338: range 0000000017426D56-0000000017427029
void __cdecl proto_log::MatchLogBodyJoinTeam::SerializeWithCachedSizes(
        const proto_log::MatchLogBodyJoinTeam *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // edx
  google::protobuf::uint32 matched; // ecx
  google::protobuf::uint32 v7; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rax
  int i; // [rsp+1Ch] [rbp-34h]
  int n; // [rsp+24h] [rbp-2Ch]

  if ( proto_log::MatchLogBodyJoinTeam::host_uid(this) )
  {
    v2 = proto_log::MatchLogBodyJoinTeam::host_uid(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::MatchLogBodyJoinTeam::guest_uid(this) )
  {
    v3 = proto_log::MatchLogBodyJoinTeam::guest_uid(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::MatchLogBodyJoinTeam::cost_time(this) )
  {
    v4 = proto_log::MatchLogBodyJoinTeam::cost_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  if ( proto_log::MatchLogBodyJoinTeam::uid_list_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(4, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_uid_list_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_uid_list_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_uid_list_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_uid_list_cached_byte_size_);
  }
  i = 0;
  n = proto_log::MatchLogBodyJoinTeam::uid_list_size(this);
  while ( i < n )
  {
    v5 = proto_log::MatchLogBodyJoinTeam::uid_list(this, i);
    google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(v5, output);
    ++i;
  }
  if ( proto_log::MatchLogBodyJoinTeam::match_type(this) )
  {
    matched = proto_log::MatchLogBodyJoinTeam::match_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(5, matched, output);
  }
  if ( proto_log::MatchLogBodyJoinTeam::match_target(this) )
  {
    v7 = proto_log::MatchLogBodyJoinTeam::match_target(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(6, v7, output);
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
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_30:
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v9->unknown_fields, output);
  }
};

// Line 387: range 000000001742702A-00000000174272FF
google::protobuf::uint8 *__cdecl proto_log::MatchLogBodyJoinTeam::InternalSerializeWithCachedSizesToArray(
        const proto_log::MatchLogBodyJoinTeam *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::uint8 *v6; // rax
  google::protobuf::uint32 matched; // ecx
  google::protobuf::uint32 v8; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v10; // rax
  google::protobuf::uint8 *targetb; // [rsp+8h] [rbp-48h]

  if ( proto_log::MatchLogBodyJoinTeam::host_uid(this) )
  {
    v3 = proto_log::MatchLogBodyJoinTeam::host_uid(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::MatchLogBodyJoinTeam::guest_uid(this) )
  {
    v4 = proto_log::MatchLogBodyJoinTeam::guest_uid(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::MatchLogBodyJoinTeam::cost_time(this) )
  {
    v5 = proto_log::MatchLogBodyJoinTeam::cost_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  if ( proto_log::MatchLogBodyJoinTeam::uid_list_size(this) > 0 )
  {
    targetb = google::protobuf::internal::WireFormatLite::WriteTagToArray(4, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_uid_list_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_uid_list_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_uid_list_cached_byte_size_);
    }
    v6 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(this->_uid_list_cached_byte_size_, targetb);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32NoTagToArray(&this->uid_list_, v6);
  }
  if ( proto_log::MatchLogBodyJoinTeam::match_type(this) )
  {
    matched = proto_log::MatchLogBodyJoinTeam::match_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, matched, target);
  }
  if ( proto_log::MatchLogBodyJoinTeam::match_target(this) )
  {
    v8 = proto_log::MatchLogBodyJoinTeam::match_target(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, v8, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_27;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_27:
      v10 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v10->unknown_fields, target);
  }
  return target;
};

// Line 439: range 0000000017427300-00000000174275C6
size_t __cdecl proto_log::MatchLogBodyJoinTeam::ByteSizeLong(const proto_log::MatchLogBodyJoinTeam *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 v4; // eax
  google::protobuf::uint32 v5; // eax
  google::protobuf::uint32 matched; // eax
  google::protobuf::uint32 v7; // eax
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
  data_size = google::protobuf::internal::WireFormatLite::UInt32Size(&this->uid_list_);
  if ( data_size )
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(data_size) + 1;
  cached_size_0 = google::protobuf::internal::ToCachedSize(data_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_uid_list_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_uid_list_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_uid_list_cached_byte_size_);
  }
  this->_uid_list_cached_byte_size_ = cached_size_0;
  total_sizea = data_size + total_size;
  if ( proto_log::MatchLogBodyJoinTeam::host_uid(this) )
  {
    v3 = proto_log::MatchLogBodyJoinTeam::host_uid(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::MatchLogBodyJoinTeam::guest_uid(this) )
  {
    v4 = proto_log::MatchLogBodyJoinTeam::guest_uid(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::MatchLogBodyJoinTeam::cost_time(this) )
  {
    v5 = proto_log::MatchLogBodyJoinTeam::cost_time(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v5) + 1;
  }
  if ( proto_log::MatchLogBodyJoinTeam::match_type(this) )
  {
    matched = proto_log::MatchLogBodyJoinTeam::match_type(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(matched) + 1;
  }
  if ( proto_log::MatchLogBodyJoinTeam::match_target(this) )
  {
    v7 = proto_log::MatchLogBodyJoinTeam::match_target(this);
    total_sizea += google::protobuf::internal::WireFormatLite::UInt32Size(v7) + 1;
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

// Line 506: range 00000000174275C8-0000000017427851
void __cdecl proto_log::MatchLogBodyJoinTeam::MergeFrom(
        proto_log::MatchLogBodyJoinTeam *const this,
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
  const proto_log::MatchLogBodyJoinTeam *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::MatchLogBodyJoinTeam::MergeFrom;
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
      "./src/server_only/log/match/match_body.pb.cc",
      508);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::MatchLogBodyJoinTeam const>(from);
  if ( source )
    proto_log::MatchLogBodyJoinTeam::MergeFrom(this, source);
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

// Line 521: range 0000000017427852-0000000017427CF2
void __cdecl proto_log::MatchLogBodyJoinTeam::MergeFrom(
        proto_log::MatchLogBodyJoinTeam *const this,
        const proto_log::MatchLogBodyJoinTeam *from)
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
  google::protobuf::uint32 matched; // edx
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
  *(_QWORD *)(v2 + 16) = proto_log::MatchLogBodyJoinTeam::MergeFrom;
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
      "./src/server_only/log/match/match_body.pb.cc",
      523);
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
  google::protobuf::RepeatedField<unsigned int>::MergeFrom(&this->uid_list_, &from->uid_list_);
  if ( proto_log::MatchLogBodyJoinTeam::host_uid(from) )
  {
    v10 = proto_log::MatchLogBodyJoinTeam::host_uid(from);
    proto_log::MatchLogBodyJoinTeam::set_host_uid(this, v10);
  }
  if ( proto_log::MatchLogBodyJoinTeam::guest_uid(from) )
  {
    v11 = proto_log::MatchLogBodyJoinTeam::guest_uid(from);
    proto_log::MatchLogBodyJoinTeam::set_guest_uid(this, v11);
  }
  if ( proto_log::MatchLogBodyJoinTeam::cost_time(from) )
  {
    v12 = proto_log::MatchLogBodyJoinTeam::cost_time(from);
    proto_log::MatchLogBodyJoinTeam::set_cost_time(this, v12);
  }
  if ( proto_log::MatchLogBodyJoinTeam::match_type(from) )
  {
    matched = proto_log::MatchLogBodyJoinTeam::match_type(from);
    proto_log::MatchLogBodyJoinTeam::set_match_type(this, matched);
  }
  if ( proto_log::MatchLogBodyJoinTeam::match_target(from) )
  {
    v14 = proto_log::MatchLogBodyJoinTeam::match_target(from);
    proto_log::MatchLogBodyJoinTeam::set_match_target(this, v14);
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

// Line 546: range 0000000017427CF4-0000000017427D31
void __cdecl proto_log::MatchLogBodyJoinTeam::CopyFrom(
        proto_log::MatchLogBodyJoinTeam *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::MatchLogBodyJoinTeam::Clear(this);
    proto_log::MatchLogBodyJoinTeam::MergeFrom(this, from);
  }
};

// Line 553: range 0000000017427D32-0000000017427D6F
void __cdecl proto_log::MatchLogBodyJoinTeam::CopyFrom(
        proto_log::MatchLogBodyJoinTeam *const this,
        const proto_log::MatchLogBodyJoinTeam *from)
{
  if ( from != this )
  {
    proto_log::MatchLogBodyJoinTeam::Clear(this);
    proto_log::MatchLogBodyJoinTeam::MergeFrom(this, from);
  }
};

// Line 560: range 0000000017427D70-0000000017427D7E
bool __cdecl proto_log::MatchLogBodyJoinTeam::IsInitialized(const proto_log::MatchLogBodyJoinTeam *const this)
{
  return 1;
};

// Line 564: range 0000000017427D80-0000000017427DB1
void __cdecl proto_log::MatchLogBodyJoinTeam::Swap(
        proto_log::MatchLogBodyJoinTeam *const this,
        proto_log::MatchLogBodyJoinTeam *other)
{
  if ( other != this )
    proto_log::MatchLogBodyJoinTeam::InternalSwap(this, other);
};

// Line 568: range 0000000017427DB2-0000000017427FBD
void __cdecl proto_log::MatchLogBodyJoinTeam::InternalSwap(
        proto_log::MatchLogBodyJoinTeam *const this,
        proto_log::MatchLogBodyJoinTeam *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::RepeatedField<unsigned int>::InternalSwap(&this->uid_list_, &other->uid_list_);
  std::swap<unsigned int>(&this->host_uid_, &other->host_uid_);
  std::swap<unsigned int>(&this->guest_uid_, &other->guest_uid_);
  std::swap<unsigned int>(&this->cost_time_, &other->cost_time_);
  std::swap<unsigned int>(&this->match_type_, &other->match_type_);
  std::swap<unsigned int>(&this->match_target_, &other->match_target_);
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

// Line 580: range 0000000017427FBE-0000000017427FDE
google::protobuf::Metadata __cdecl proto_log::MatchLogBodyJoinTeam::GetMetadata(
        const proto_log::MatchLogBodyJoinTeam *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fmatch_2fmatch_5fbody_2eproto::`anonymous namespace'::file_level_metadata[0];
};

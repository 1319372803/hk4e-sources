// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/mail/mail_body.pb.cc

// Line 106: range 000000001501AEE2-000000001501B0B1
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/log/mail/mail_body.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::schemas,
    (int)proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::file_default_instances,
    (int)proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::TableStruct::offsets,
    0,
    (int)proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::file_level_metadata,
    (__int64)proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::file_level_enum_descriptors,
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

// Line 114: range 000000001501B0B2-000000001501B0CB
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 120: range 000000001501B0CC-000000001501B0F0
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::file_level_metadata,
    2);
};

// Line 126: range 000000001501B0F2-000000001501B14F
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/log/mail/mail_body.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::MailItem>::DefaultConstruct(&proto_log::_MailItem_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_MailItem_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto_log::MailLogBodyCommon>::DefaultConstruct(&proto_log::_MailLogBodyCommon_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto_log::_MailLogBodyCommon_default_instance_,
    (const void *)0x2DD660);
};

// Line 136: range 000000001501B150-000000001501B16C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::InitDefaults(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 141: range 000000001501B16D-000000001501B19C
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 195: range 000000001501B19D-000000001501B1B6
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::AddDescriptors(void)::once,
    proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 201: range 00000000160E15A2-00000000160E15B5
void __cdecl proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::StaticDescriptorInitializer *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::AddDescriptors();
};

// Line 208: range 000000001501B1B7-000000001501B1C8
const google::protobuf::EnumDescriptor *__cdecl proto_log::MailOpType_descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::file_level_enum_descriptors[0];
};

// Line 212: range 000000001501B1C9-000000001501B1E5
bool __cdecl proto_log::MailOpType_IsValid(int value)
{
  return (unsigned int)value <= 7;
};

// Line 228: range 000000001501B1E6-000000001501B1F7
const google::protobuf::EnumDescriptor *__cdecl proto_log::MailOpReason_descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::file_level_enum_descriptors[1];
};

// Line 232: range 000000001501B1F8-000000001501B214
bool __cdecl proto_log::MailOpReason_IsValid(int value)
{
  return (unsigned int)value <= 5;
};

// Line 246: range 000000001501B215-000000001501B226
const google::protobuf::EnumDescriptor *__cdecl proto_log::MailSourceType_descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::file_level_enum_descriptors[2];
};

// Line 250: range 000000001501B227-000000001501B243
bool __cdecl proto_log::MailSourceType_IsValid(int value)
{
  return (unsigned int)value <= 0x15;
};

// Line 290: range 000000001501B244-000000001501B303
void __cdecl proto_log::MailItem::MailItem(proto_log::MailItem *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::MailItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto_log::MailItem::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::InitDefaults();
  proto_log::MailItem::SharedCtor(this);
};

// Line 298: range 000000001501B304-000000001501B5B6
void __cdecl proto_log::MailItem::MailItem(proto_log::MailItem *const this, const proto_log::MailItem *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::uint32 *p_item_id; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::MailItem + 2);
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
  p_item_id = &from->item_id_;
  v5 = (unsigned __int64)&this->item_id_;
  if ( (((unsigned __int8)from + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&from->item_id_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->item_id_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->promote_level_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&from->promote_level_ + 3) >> 3) + 0x7FFF8000) )
  {
    v5 = 16LL;
    __asan_report_load_n(&from->item_id_, 16LL);
  }
  v6 = *((_QWORD *)p_item_id + 1);
  v7 = *(_QWORD *)p_item_id;
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

// Line 309: range 000000001501B5B8-000000001501B61E
void __cdecl proto_log::MailItem::SharedCtor(proto_log::MailItem *const this)
{
  memset(&this->item_id_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 316: range 000000001501B620-000000001501B689
void __cdecl proto_log::MailItem::~MailItem(proto_log::MailItem *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::MailItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::MailItem::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 316: range 000000001501B68A-000000001501B6B4
void __cdecl proto_log::MailItem::~MailItem(proto_log::MailItem *const this)
{
  proto_log::MailItem::~MailItem(this);
  operator delete(this, 0x28uLL);
};

// Line 321: range 000000001501B6B6-000000001501B6C0
void __cdecl proto_log::MailItem::SharedDtor(proto_log::MailItem *const this)
{
  ;
};

// Line 324: range 000000001501B6C2-000000001501B710
void __cdecl proto_log::MailItem::SetCachedSize(const proto_log::MailItem *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 329: range 000000001501B712-000000001501B723
const google::protobuf::Descriptor *__cdecl proto_log::MailItem::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 334: range 000000001501B724-000000001501B733
const proto_log::MailItem *__cdecl proto_log::MailItem::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::InitDefaults();
  return proto_log::MailItem::internal_default_instance();
};

// Line 339: range 000000001501B734-000000001501B7A8
proto_log::MailItem *__cdecl proto_log::MailItem::New(
        const proto_log::MailItem *const this,
        google::protobuf::Arena *arena)
{
  proto_log::MailItem *v2; // rbx

  v2 = (proto_log::MailItem *)operator new(0x28uLL);
  proto_log::MailItem::MailItem(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::MailItem>(arena, v2);
  return v2;
};

// Line 347: range 000000001501B7AA-000000001501B837
void __cdecl proto_log::MailItem::Clear(proto_log::MailItem *const this)
{
  memset(&this->item_id_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 360: range 000000001501B838-000000001501C229
bool __cdecl proto_log::MailItem::MergePartialFromCodedStream(
        proto_log::MailItem *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:365";
  *(_QWORD *)(v2 + 16) = proto_log::MailItem::MergePartialFromCodedStream;
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
                &this->promote_level_) )
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
                  &this->item_id_) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                  input,
                  &this->item_count_) )
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

// Line 446: range 000000001501C22A-000000001501C40D
void __cdecl proto_log::MailItem::SerializeWithCachedSizes(
        const proto_log::MailItem *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax

  if ( proto_log::MailItem::item_id(this) )
  {
    v2 = proto_log::MailItem::item_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::MailItem::item_count(this) )
  {
    v3 = proto_log::MailItem::item_count(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::MailItem::level(this) )
  {
    v4 = proto_log::MailItem::level(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  if ( proto_log::MailItem::promote_level(this) )
  {
    v5 = proto_log::MailItem::promote_level(this);
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

// Line 479: range 000000001501C40E-000000001501C60D
google::protobuf::uint8 *__cdecl proto_log::MailItem::InternalSerializeWithCachedSizesToArray(
        const proto_log::MailItem *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::uint32 v6; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v8; // rax

  if ( proto_log::MailItem::item_id(this) )
  {
    v3 = proto_log::MailItem::item_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::MailItem::item_count(this) )
  {
    v4 = proto_log::MailItem::item_count(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::MailItem::level(this) )
  {
    v5 = proto_log::MailItem::level(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  if ( proto_log::MailItem::promote_level(this) )
  {
    v6 = proto_log::MailItem::promote_level(this);
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

// Line 513: range 000000001501C60E-000000001501C822
size_t __cdecl proto_log::MailItem::ByteSizeLong(const proto_log::MailItem *const this)
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
  if ( proto_log::MailItem::item_id(this) )
  {
    v3 = proto_log::MailItem::item_id(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v3) + 1;
  }
  if ( proto_log::MailItem::item_count(this) )
  {
    v4 = proto_log::MailItem::item_count(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v4) + 1;
  }
  if ( proto_log::MailItem::level(this) )
  {
    v5 = proto_log::MailItem::level(this);
    total_size += google::protobuf::internal::WireFormatLite::UInt32Size(v5) + 1;
  }
  if ( proto_log::MailItem::promote_level(this) )
  {
    v6 = proto_log::MailItem::promote_level(this);
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

// Line 557: range 000000001501C824-000000001501CAAD
void __cdecl proto_log::MailItem::MergeFrom(proto_log::MailItem *const this, const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto_log::MailItem *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::MailItem::MergeFrom;
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
      "./src/server_only/log/mail/mail_body.pb.cc",
      559);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::MailItem const>(from);
  if ( source )
    proto_log::MailItem::MergeFrom(this, source);
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

// Line 572: range 000000001501CAAE-000000001501CEF3
void __cdecl proto_log::MailItem::MergeFrom(proto_log::MailItem *const this, const proto_log::MailItem *from)
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
  *(_QWORD *)(v2 + 16) = proto_log::MailItem::MergeFrom;
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
      "./src/server_only/log/mail/mail_body.pb.cc",
      574);
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
  if ( proto_log::MailItem::item_id(from) )
  {
    v10 = proto_log::MailItem::item_id(from);
    proto_log::MailItem::set_item_id(this, v10);
  }
  if ( proto_log::MailItem::item_count(from) )
  {
    v11 = proto_log::MailItem::item_count(from);
    proto_log::MailItem::set_item_count(this, v11);
  }
  if ( proto_log::MailItem::level(from) )
  {
    v12 = proto_log::MailItem::level(from);
    proto_log::MailItem::set_level(this, v12);
  }
  if ( proto_log::MailItem::promote_level(from) )
  {
    v13 = proto_log::MailItem::promote_level(from);
    proto_log::MailItem::set_promote_level(this, v13);
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

// Line 593: range 000000001501CEF4-000000001501CF31
void __cdecl proto_log::MailItem::CopyFrom(proto_log::MailItem *const this, const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::MailItem::Clear(this);
    proto_log::MailItem::MergeFrom(this, from);
  }
};

// Line 600: range 000000001501CF32-000000001501CF6F
void __cdecl proto_log::MailItem::CopyFrom(proto_log::MailItem *const this, const proto_log::MailItem *from)
{
  if ( from != this )
  {
    proto_log::MailItem::Clear(this);
    proto_log::MailItem::MergeFrom(this, from);
  }
};

// Line 607: range 000000001501CF70-000000001501CF7E
bool __cdecl proto_log::MailItem::IsInitialized(const proto_log::MailItem *const this)
{
  return 1;
};

// Line 611: range 000000001501CF80-000000001501CFB1
void __cdecl proto_log::MailItem::Swap(proto_log::MailItem *const this, proto_log::MailItem *other)
{
  if ( other != this )
    proto_log::MailItem::InternalSwap(this, other);
};

// Line 615: range 000000001501CFB2-000000001501D187
void __cdecl proto_log::MailItem::InternalSwap(proto_log::MailItem *const this, proto_log::MailItem *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<unsigned int>(&this->item_id_, &other->item_id_);
  std::swap<unsigned int>(&this->item_count_, &other->item_count_);
  std::swap<unsigned int>(&this->level_, &other->level_);
  std::swap<unsigned int>(&this->promote_level_, &other->promote_level_);
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

// Line 625: range 000000001501D188-000000001501D1A8
google::protobuf::Metadata __cdecl proto_log::MailItem::GetMetadata(const proto_log::MailItem *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::file_level_metadata[0];
};

// Line 717: range 000000001501D1AA-000000001501D2B3
void __cdecl proto_log::MailLogBodyCommon::MailLogBodyCommon(proto_log::MailLogBodyCommon *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto_log::MailLogBodyCommon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto_log::MailItem>::RepeatedPtrField(&this->item_list_);
  google::protobuf::RepeatedPtrField<std::string>::RepeatedPtrField(&this->argument_list_);
  if ( this != proto_log::MailLogBodyCommon::internal_default_instance() )
    proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::InitDefaults();
  proto_log::MailLogBodyCommon::SharedCtor(this);
};

// Line 725: range 000000001501D2B4-000000001501D6F9
void __cdecl proto_log::MailLogBodyCommon::MailLogBodyCommon(
        proto_log::MailLogBodyCommon *const this,
        const proto_log::MailLogBodyCommon *from)
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
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto_log::MailLogBodyCommon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto_log::MailItem>::RepeatedPtrField(&this->item_list_, &from->item_list_);
  google::protobuf::RepeatedPtrField<std::string>::RepeatedPtrField(&this->argument_list_, &from->argument_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->title_, v4);
  v5 = proto_log::MailLogBodyCommon::title[abi:cxx11](from);
  if ( std::string::size(v5) )
  {
    v6 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->title_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->title_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->title_, v6, from->title_);
  }
  v7 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->content_, v7);
  v8 = proto_log::MailLogBodyCommon::content[abi:cxx11](from);
  if ( std::string::size(v8) )
  {
    v9 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->content_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->content_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->content_, v9, from->content_);
  }
  v10 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->sender_, v10);
  v11 = proto_log::MailLogBodyCommon::sender[abi:cxx11](from);
  if ( std::string::size(v11) )
  {
    v12 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->sender_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->sender_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->sender_, v12, from->sender_);
  }
  v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->tag_, v13);
  v14 = proto_log::MailLogBodyCommon::tag[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->tag_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->tag_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->tag_, v15, from->tag_);
  }
  memcpy(&this->op_type_, &from->op_type_, 0x34uLL);
};

// Line 754: range 000000001501D6FA-000000001501D7D3
void __cdecl proto_log::MailLogBodyCommon::SharedCtor(proto_log::MailLogBodyCommon *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->title_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->content_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->sender_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::UnsafeSetDefault(&this->tag_, v4);
  memset(&this->op_type_, 0, 0x34uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 765: range 000000001501D7D4-000000001501D85D
void __cdecl proto_log::MailLogBodyCommon::~MailLogBodyCommon(proto_log::MailLogBodyCommon *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto_log::MailLogBodyCommon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto_log::MailLogBodyCommon::SharedDtor(this);
  google::protobuf::RepeatedPtrField<std::string>::~RepeatedPtrField(&this->argument_list_);
  google::protobuf::RepeatedPtrField<proto_log::MailItem>::~RepeatedPtrField(&this->item_list_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 765: range 000000001501D85E-000000001501D888
void __cdecl proto_log::MailLogBodyCommon::~MailLogBodyCommon(proto_log::MailLogBodyCommon *const this)
{
  proto_log::MailLogBodyCommon::~MailLogBodyCommon(this);
  operator delete(this, 0x98uLL);
};

// Line 770: range 000000001501D88A-000000001501D8FE
void __cdecl proto_log::MailLogBodyCommon::SharedDtor(proto_log::MailLogBodyCommon *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->title_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->content_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->sender_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::DestroyNoArena(&this->tag_, v4);
};

// Line 777: range 000000001501D900-000000001501D95B
void __cdecl proto_log::MailLogBodyCommon::SetCachedSize(const proto_log::MailLogBodyCommon *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 782: range 000000001501D95C-000000001501D96D
const google::protobuf::Descriptor *__cdecl proto_log::MailLogBodyCommon::descriptor()
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 787: range 000000001501D96E-000000001501D97D
const proto_log::MailLogBodyCommon *__cdecl proto_log::MailLogBodyCommon::default_instance()
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::InitDefaults();
  return proto_log::MailLogBodyCommon::internal_default_instance();
};

// Line 792: range 000000001501D97E-000000001501D9F2
proto_log::MailLogBodyCommon *__cdecl proto_log::MailLogBodyCommon::New(
        const proto_log::MailLogBodyCommon *const this,
        google::protobuf::Arena *arena)
{
  proto_log::MailLogBodyCommon *v2; // rbx

  v2 = (proto_log::MailLogBodyCommon *)operator new(0x98uLL);
  proto_log::MailLogBodyCommon::MailLogBodyCommon(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto_log::MailLogBodyCommon>(arena, v2);
  return v2;
};

// Line 800: range 000000001501D9F4-000000001501DB07
void __cdecl proto_log::MailLogBodyCommon::Clear(proto_log::MailLogBodyCommon *const this)
{
  const std::string *v1; // rax
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax

  google::protobuf::RepeatedPtrField<proto_log::MailItem>::Clear(&this->item_list_);
  google::protobuf::RepeatedPtrField<std::string>::Clear(&this->argument_list_);
  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->title_, v1);
  v2 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->content_, v2);
  v3 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->sender_, v3);
  v4 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  google::protobuf::internal::ArenaStringPtr::ClearToEmptyNoArena(&this->tag_, v4);
  memset(&this->op_type_, 0, 0x34uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 819: range 000000001501DB08-000000001501EC1A
bool __cdecl proto_log::MailLogBodyCommon::MergePartialFromCodedStream(
        proto_log::MailLogBodyCommon *const this,
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
  proto_log::MailItem *v39; // rdx
  std::string *v40; // rdx
  int v41; // edx
  const std::string *v42; // rax
  unsigned int v43; // r14d
  int v44; // edx
  const std::string *v45; // rax
  google::protobuf::internal::WireFormatLite *v46; // rax
  const char *v47; // r8
  std::string *v48; // rdx
  const std::string *v49; // rax
  unsigned int v50; // r14d
  const std::string *v51; // rax
  google::protobuf::internal::WireFormatLite *v52; // rax
  const char *v53; // r8
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v54; // rdx
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:824";
  *(_QWORD *)(v2 + 16) = proto_log::MailLogBodyCommon::MergePartialFromCodedStream;
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
                    &this->op_type_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->op_reason_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->uid_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->mail_id_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v21 = proto_log::MailLogBodyCommon::mutable_title[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v21) )
              goto failure;
            v22 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
            v23 = std::string::length(v22);
            v24 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
            v25 = (google::protobuf::internal::WireFormatLite *)std::string::data(v24);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v25,
                                     (const char *)v23,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.title",
                                     v26) )
              goto failure;
            continue;
          case 6:
            if ( (_BYTE)tag != 50 )
              goto handle_unusual;
            v27 = proto_log::MailLogBodyCommon::mutable_content[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v27) )
              goto failure;
            v28 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
            v29 = std::string::length(v28);
            v30 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
            v31 = (google::protobuf::internal::WireFormatLite *)std::string::data(v30);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v31,
                                     (const char *)v29,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.content",
                                     v32) )
              goto failure;
            continue;
          case 7:
            if ( (_BYTE)tag != 58 )
              goto handle_unusual;
            v33 = proto_log::MailLogBodyCommon::mutable_sender[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v33) )
              goto failure;
            v34 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
            v35 = std::string::length(v34);
            v36 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
            v37 = (google::protobuf::internal::WireFormatLite *)std::string::data(v36);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v37,
                                     (const char *)v35,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.sender",
                                     v38) )
              goto failure;
            continue;
          case 8:
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->send_time_) )
              goto failure;
            continue;
          case 9:
            if ( (_BYTE)tag != 72 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->expire_time_) )
              goto failure;
            continue;
          case 10:
            if ( (_BYTE)tag != 82 )
              goto handle_unusual;
            v39 = proto_log::MailLogBodyCommon::add_item_list(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<proto_log::MailItem>(input, v39) )
              goto failure;
            continue;
          case 11:
            if ( (_BYTE)tag != 88 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->importance_) )
              goto failure;
            continue;
          case 12:
            if ( (_BYTE)tag != 96 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->config_id_) )
              goto failure;
            continue;
          case 13:
            if ( (_BYTE)tag != 106 )
              goto handle_unusual;
            v40 = proto_log::MailLogBodyCommon::add_argument_list[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v40) )
              goto failure;
            v41 = proto_log::MailLogBodyCommon::argument_list_size(this) - 1;
            v42 = proto_log::MailLogBodyCommon::argument_list[abi:cxx11](this, v41);
            v43 = std::string::length(v42);
            v44 = proto_log::MailLogBodyCommon::argument_list_size(this) - 1;
            v45 = proto_log::MailLogBodyCommon::argument_list[abi:cxx11](this, v44);
            v46 = (google::protobuf::internal::WireFormatLite *)std::string::data(v45);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v46,
                                     (const char *)v43,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.argument_list",
                                     v47) )
              goto failure;
            continue;
          case 14:
            if ( (_BYTE)tag != 112 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->reason_type_) )
              goto failure;
            continue;
          case 15:
            if ( (_BYTE)tag != 120 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->item_limit_type_) )
              goto failure;
            continue;
          case 16:
            if ( (_BYTE)tag != 0x80 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->source_type_) )
              goto failure;
            continue;
          case 17:
            if ( (_BYTE)tag != 0x8A )
              goto handle_unusual;
            v48 = proto_log::MailLogBodyCommon::mutable_tag[abi:cxx11](this);
            if ( !google::protobuf::internal::WireFormatLite::ReadString(input, v48) )
              goto failure;
            v49 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
            v50 = std::string::length(v49);
            v51 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
            v52 = (google::protobuf::internal::WireFormatLite *)std::string::data(v51);
            if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                     v52,
                                     (const char *)v50,
                                     0,
                                     (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.tag",
                                     v53) )
              goto failure;
            continue;
          case 18:
            if ( (_BYTE)tag != 0x90 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<bool,(google::protobuf::internal::WireFormatLite::FieldType)8>(
                    input,
                    &this->is_read_) )
              goto failure;
            continue;
          case 19:
            if ( (_BYTE)tag != 0x98 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<bool,(google::protobuf::internal::WireFormatLite::FieldType)8>(
                    input,
                    &this->is_attachment_got_) )
              goto failure;
            continue;
          case 20:
            if ( (_BYTE)tag != 0xA0 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<bool,(google::protobuf::internal::WireFormatLite::FieldType)8>(
                    input,
                    &this->is_star_) )
              goto failure;
            continue;
          case 21:
            if ( (_BYTE)tag != 0xA8 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13>(
                    input,
                    &this->collect_state_) )
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
      goto LABEL_147;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v54 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v54 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v54->unknown_fields) );
failure:
  result = 0;
LABEL_147:
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

// Line 1152: range 000000001501EC1C-000000001501F340
void __cdecl proto_log::MailLogBodyCommon::SerializeWithCachedSizes(
        const proto_log::MailLogBodyCommon *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ecx
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  const std::string *v6; // rax
  const std::string *v7; // rax
  unsigned int v8; // ebx
  const std::string *v9; // rax
  google::protobuf::internal::WireFormatLite *v10; // rax
  const char *v11; // r8
  const std::string *v12; // rcx
  const std::string *v13; // rax
  const std::string *v14; // rax
  unsigned int v15; // ebx
  const std::string *v16; // rax
  google::protobuf::internal::WireFormatLite *v17; // rax
  const char *v18; // r8
  const std::string *v19; // rcx
  const std::string *v20; // rax
  const std::string *v21; // rax
  unsigned int v22; // ebx
  const std::string *v23; // rax
  google::protobuf::internal::WireFormatLite *v24; // rax
  const char *v25; // r8
  const std::string *v26; // rcx
  google::protobuf::uint32 v27; // ecx
  google::protobuf::uint32 v28; // ecx
  const proto_log::MailItem *v29; // rcx
  google::protobuf::uint32 v30; // ecx
  google::protobuf::uint32 v31; // ecx
  const std::string *v32; // rax
  unsigned int v33; // ebx
  const std::string *v34; // rax
  google::protobuf::internal::WireFormatLite *v35; // rax
  const char *v36; // r8
  const std::string *v37; // rcx
  google::protobuf::uint32 v38; // ecx
  google::protobuf::uint32 v39; // ecx
  google::protobuf::uint32 v40; // ecx
  const std::string *v41; // rax
  const std::string *v42; // rax
  unsigned int v43; // ebx
  const std::string *v44; // rax
  google::protobuf::internal::WireFormatLite *v45; // rax
  const char *v46; // r8
  const std::string *v47; // rcx
  bool v48; // al
  bool is_attachment_got; // al
  bool is_star; // al
  google::protobuf::uint32 v51; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v53; // rax
  unsigned int i; // [rsp+14h] [rbp-4Ch]
  int i_0; // [rsp+18h] [rbp-48h]
  unsigned int n; // [rsp+20h] [rbp-40h]
  int n_0; // [rsp+24h] [rbp-3Ch]

  if ( proto_log::MailLogBodyCommon::op_type(this) )
  {
    v2 = proto_log::MailLogBodyCommon::op_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, v2, output);
  }
  if ( proto_log::MailLogBodyCommon::op_reason(this) )
  {
    v3 = proto_log::MailLogBodyCommon::op_reason(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, v3, output);
  }
  if ( proto_log::MailLogBodyCommon::uid(this) )
  {
    v4 = proto_log::MailLogBodyCommon::uid(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, v4, output);
  }
  if ( proto_log::MailLogBodyCommon::mail_id(this) )
  {
    v5 = proto_log::MailLogBodyCommon::mail_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, v5, output);
  }
  v6 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
  if ( std::string::size(v6) )
  {
    v7 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
    v8 = std::string::length(v7);
    v9 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
    v10 = (google::protobuf::internal::WireFormatLite *)std::string::data(v9);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v10,
      (const char *)v8,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.title",
      v11);
    v12 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(5LL, v12, output);
  }
  v13 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
  if ( std::string::size(v13) )
  {
    v14 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
    v15 = std::string::length(v14);
    v16 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
    v17 = (google::protobuf::internal::WireFormatLite *)std::string::data(v16);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v17,
      (const char *)v15,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.content",
      v18);
    v19 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, v19, output);
  }
  v20 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
  if ( std::string::size(v20) )
  {
    v21 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
    v22 = std::string::length(v21);
    v23 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
    v24 = (google::protobuf::internal::WireFormatLite *)std::string::data(v23);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v24,
      (const char *)v22,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.sender",
      v25);
    v26 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(7LL, v26, output);
  }
  if ( proto_log::MailLogBodyCommon::send_time(this) )
  {
    v27 = proto_log::MailLogBodyCommon::send_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(8, v27, output);
  }
  if ( proto_log::MailLogBodyCommon::expire_time(this) )
  {
    v28 = proto_log::MailLogBodyCommon::expire_time(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(9, v28, output);
  }
  i = 0;
  n = proto_log::MailLogBodyCommon::item_list_size(this);
  while ( i < n )
  {
    v29 = proto_log::MailLogBodyCommon::item_list(this, i);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(10, v29, output);
    ++i;
  }
  if ( proto_log::MailLogBodyCommon::importance(this) )
  {
    v30 = proto_log::MailLogBodyCommon::importance(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(11, v30, output);
  }
  if ( proto_log::MailLogBodyCommon::config_id(this) )
  {
    v31 = proto_log::MailLogBodyCommon::config_id(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(12, v31, output);
  }
  i_0 = 0;
  n_0 = proto_log::MailLogBodyCommon::argument_list_size(this);
  while ( i_0 < n_0 )
  {
    v32 = proto_log::MailLogBodyCommon::argument_list[abi:cxx11](this, i_0);
    v33 = std::string::length(v32);
    v34 = proto_log::MailLogBodyCommon::argument_list[abi:cxx11](this, i_0);
    v35 = (google::protobuf::internal::WireFormatLite *)std::string::data(v34);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v35,
      (const char *)v33,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.argument_list",
      v36);
    v37 = proto_log::MailLogBodyCommon::argument_list[abi:cxx11](this, i_0);
    google::protobuf::internal::WireFormatLite::WriteString(13LL, v37, output);
    ++i_0;
  }
  if ( proto_log::MailLogBodyCommon::reason_type(this) )
  {
    v38 = proto_log::MailLogBodyCommon::reason_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(14, v38, output);
  }
  if ( proto_log::MailLogBodyCommon::item_limit_type(this) )
  {
    v39 = proto_log::MailLogBodyCommon::item_limit_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(15, v39, output);
  }
  if ( proto_log::MailLogBodyCommon::source_type(this) )
  {
    v40 = proto_log::MailLogBodyCommon::source_type(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(16, v40, output);
  }
  v41 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
  if ( std::string::size(v41) )
  {
    v42 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
    v43 = std::string::length(v42);
    v44 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
    v45 = (google::protobuf::internal::WireFormatLite *)std::string::data(v44);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v45,
      (const char *)v43,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.tag",
      v46);
    v47 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(17LL, v47, output);
  }
  if ( proto_log::MailLogBodyCommon::is_read(this) )
  {
    v48 = proto_log::MailLogBodyCommon::is_read(this);
    google::protobuf::internal::WireFormatLite::WriteBool(18, v48, output);
  }
  if ( proto_log::MailLogBodyCommon::is_attachment_got(this) )
  {
    is_attachment_got = proto_log::MailLogBodyCommon::is_attachment_got(this);
    google::protobuf::internal::WireFormatLite::WriteBool(19, is_attachment_got, output);
  }
  if ( proto_log::MailLogBodyCommon::is_star(this) )
  {
    is_star = proto_log::MailLogBodyCommon::is_star(this);
    google::protobuf::internal::WireFormatLite::WriteBool(20, is_star, output);
  }
  if ( proto_log::MailLogBodyCommon::collect_state(this) )
  {
    v51 = proto_log::MailLogBodyCommon::collect_state(this);
    google::protobuf::internal::WireFormatLite::WriteUInt32(21, v51, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_57;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v53 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_57:
      v53 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v53->unknown_fields, output);
  }
};

// Line 1297: range 000000001501F342-000000001501FACC
google::protobuf::uint8 *__cdecl proto_log::MailLogBodyCommon::InternalSerializeWithCachedSizesToArray(
        const proto_log::MailLogBodyCommon *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // ecx
  google::protobuf::uint32 v4; // ecx
  google::protobuf::uint32 v5; // ecx
  google::protobuf::uint32 v6; // ecx
  const std::string *v7; // rax
  const std::string *v8; // rax
  unsigned int v9; // ebx
  const std::string *v10; // rax
  google::protobuf::internal::WireFormatLite *v11; // rax
  const char *v12; // r8
  const std::string *v13; // rcx
  const std::string *v14; // rax
  const std::string *v15; // rax
  unsigned int v16; // ebx
  const std::string *v17; // rax
  google::protobuf::internal::WireFormatLite *v18; // rax
  const char *v19; // r8
  const std::string *v20; // rcx
  const std::string *v21; // rax
  const std::string *v22; // rax
  unsigned int v23; // ebx
  const std::string *v24; // rax
  google::protobuf::internal::WireFormatLite *v25; // rax
  const char *v26; // r8
  const std::string *v27; // rcx
  google::protobuf::uint32 v28; // ecx
  google::protobuf::uint32 v29; // ecx
  const proto_log::MailItem *v30; // rsi
  google::protobuf::uint32 v31; // ecx
  google::protobuf::uint32 v32; // ecx
  const std::string *v33; // rax
  unsigned int v34; // ebx
  const std::string *v35; // rax
  google::protobuf::internal::WireFormatLite *v36; // rax
  const char *v37; // r8
  const std::string *v38; // rcx
  google::protobuf::uint32 v39; // ecx
  google::protobuf::uint32 v40; // ecx
  google::protobuf::uint32 v41; // ecx
  const std::string *v42; // rax
  const std::string *v43; // rax
  unsigned int v44; // ebx
  const std::string *v45; // rax
  google::protobuf::internal::WireFormatLite *v46; // rax
  const char *v47; // r8
  const std::string *v48; // rcx
  bool v49; // al
  bool is_attachment_got; // al
  bool is_star; // al
  google::protobuf::uint32 v52; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v54; // rax
  unsigned int i; // [rsp+24h] [rbp-4Ch]
  int i_0; // [rsp+28h] [rbp-48h]
  unsigned int n; // [rsp+30h] [rbp-40h]
  int n_0; // [rsp+34h] [rbp-3Ch]

  if ( proto_log::MailLogBodyCommon::op_type(this) )
  {
    v3 = proto_log::MailLogBodyCommon::op_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, v3, target);
  }
  if ( proto_log::MailLogBodyCommon::op_reason(this) )
  {
    v4 = proto_log::MailLogBodyCommon::op_reason(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, v4, target);
  }
  if ( proto_log::MailLogBodyCommon::uid(this) )
  {
    v5 = proto_log::MailLogBodyCommon::uid(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, v5, target);
  }
  if ( proto_log::MailLogBodyCommon::mail_id(this) )
  {
    v6 = proto_log::MailLogBodyCommon::mail_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, v6, target);
  }
  v7 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
  if ( std::string::size(v7) )
  {
    v8 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
    v9 = std::string::length(v8);
    v10 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
    v11 = (google::protobuf::internal::WireFormatLite *)std::string::data(v10);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v11,
      (const char *)v9,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.title",
      v12);
    v13 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(5, v13, target);
  }
  v14 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
  if ( std::string::size(v14) )
  {
    v15 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
    v16 = std::string::length(v15);
    v17 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
    v18 = (google::protobuf::internal::WireFormatLite *)std::string::data(v17);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v18,
      (const char *)v16,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.content",
      v19);
    v20 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(6, v20, target);
  }
  v21 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
  if ( std::string::size(v21) )
  {
    v22 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
    v23 = std::string::length(v22);
    v24 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
    v25 = (google::protobuf::internal::WireFormatLite *)std::string::data(v24);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v25,
      (const char *)v23,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.sender",
      v26);
    v27 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(7, v27, target);
  }
  if ( proto_log::MailLogBodyCommon::send_time(this) )
  {
    v28 = proto_log::MailLogBodyCommon::send_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, v28, target);
  }
  if ( proto_log::MailLogBodyCommon::expire_time(this) )
  {
    v29 = proto_log::MailLogBodyCommon::expire_time(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, v29, target);
  }
  i = 0;
  n = proto_log::MailLogBodyCommon::item_list_size(this);
  while ( i < n )
  {
    v30 = proto_log::MailLogBodyCommon::item_list(this, i);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<proto_log::MailItem>(
               10,
               v30,
               deterministic,
               target);
    ++i;
  }
  if ( proto_log::MailLogBodyCommon::importance(this) )
  {
    v31 = proto_log::MailLogBodyCommon::importance(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, v31, target);
  }
  if ( proto_log::MailLogBodyCommon::config_id(this) )
  {
    v32 = proto_log::MailLogBodyCommon::config_id(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, v32, target);
  }
  i_0 = 0;
  n_0 = proto_log::MailLogBodyCommon::argument_list_size(this);
  while ( i_0 < n_0 )
  {
    v33 = proto_log::MailLogBodyCommon::argument_list[abi:cxx11](this, i_0);
    v34 = std::string::length(v33);
    v35 = proto_log::MailLogBodyCommon::argument_list[abi:cxx11](this, i_0);
    v36 = (google::protobuf::internal::WireFormatLite *)std::string::data(v35);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v36,
      (const char *)v34,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.argument_list",
      v37);
    v38 = proto_log::MailLogBodyCommon::argument_list[abi:cxx11](this, i_0);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(13, v38, target);
    ++i_0;
  }
  if ( proto_log::MailLogBodyCommon::reason_type(this) )
  {
    v39 = proto_log::MailLogBodyCommon::reason_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, v39, target);
  }
  if ( proto_log::MailLogBodyCommon::item_limit_type(this) )
  {
    v40 = proto_log::MailLogBodyCommon::item_limit_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, v40, target);
  }
  if ( proto_log::MailLogBodyCommon::source_type(this) )
  {
    v41 = proto_log::MailLogBodyCommon::source_type(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(16, v41, target);
  }
  v42 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
  if ( std::string::size(v42) )
  {
    v43 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
    v44 = std::string::length(v43);
    v45 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
    v46 = (google::protobuf::internal::WireFormatLite *)std::string::data(v45);
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      v46,
      (const char *)v44,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"proto_log.MailLogBodyCommon.tag",
      v47);
    v48 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
    target = google::protobuf::internal::WireFormatLite::WriteStringToArray(17, v48, target);
  }
  if ( proto_log::MailLogBodyCommon::is_read(this) )
  {
    v49 = proto_log::MailLogBodyCommon::is_read(this);
    target = google::protobuf::internal::WireFormatLite::WriteBoolToArray(18, v49, target);
  }
  if ( proto_log::MailLogBodyCommon::is_attachment_got(this) )
  {
    is_attachment_got = proto_log::MailLogBodyCommon::is_attachment_got(this);
    target = google::protobuf::internal::WireFormatLite::WriteBoolToArray(19, is_attachment_got, target);
  }
  if ( proto_log::MailLogBodyCommon::is_star(this) )
  {
    is_star = proto_log::MailLogBodyCommon::is_star(this);
    target = google::protobuf::internal::WireFormatLite::WriteBoolToArray(20, is_star, target);
  }
  if ( proto_log::MailLogBodyCommon::collect_state(this) )
  {
    v52 = proto_log::MailLogBodyCommon::collect_state(this);
    target = google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(21, v52, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_57;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v54 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_57:
      v54 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v54->unknown_fields, target);
  }
  return target;
};

// Line 1448: range 000000001501FACE-000000001502004E
size_t __cdecl proto_log::MailLogBodyCommon::ByteSizeLong(const proto_log::MailLogBodyCommon *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const proto_log::MailItem *v3; // rax
  int v4; // eax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  const std::string *v11; // rax
  const std::string *v12; // rax
  const std::string *v13; // rax
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
  unsigned int i; // [rsp+1Ch] [rbp-44h]
  int i_0; // [rsp+20h] [rbp-40h]
  unsigned int count; // [rsp+24h] [rbp-3Ch]
  int n; // [rsp+28h] [rbp-38h]
  int cached_size; // [rsp+2Ch] [rbp-34h]
  size_t total_size; // [rsp+30h] [rbp-30h]
  size_t total_sizea; // [rsp+30h] [rbp-30h]
  size_t total_sizeb; // [rsp+30h] [rbp-30h]

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
  count = proto_log::MailLogBodyCommon::item_list_size(this);
  total_sizea = count + total_size;
  for ( i = 0; i < count; ++i )
  {
    v3 = proto_log::MailLogBodyCommon::item_list(this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<proto_log::MailItem>(v3);
  }
  v4 = proto_log::MailLogBodyCommon::argument_list_size(this);
  total_sizeb = google::protobuf::internal::FromIntSize(v4) + total_sizea;
  i_0 = 0;
  n = proto_log::MailLogBodyCommon::argument_list_size(this);
  while ( i_0 < n )
  {
    v5 = proto_log::MailLogBodyCommon::argument_list[abi:cxx11](this, i_0);
    total_sizeb += google::protobuf::internal::WireFormatLite::StringSize(v5);
    ++i_0;
  }
  v6 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
  if ( std::string::size(v6) )
  {
    v7 = proto_log::MailLogBodyCommon::title[abi:cxx11](this);
    total_sizeb += google::protobuf::internal::WireFormatLite::StringSize(v7) + 1;
  }
  v8 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
  if ( std::string::size(v8) )
  {
    v9 = proto_log::MailLogBodyCommon::content[abi:cxx11](this);
    total_sizeb += google::protobuf::internal::WireFormatLite::StringSize(v9) + 1;
  }
  v10 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
  if ( std::string::size(v10) )
  {
    v11 = proto_log::MailLogBodyCommon::sender[abi:cxx11](this);
    total_sizeb += google::protobuf::internal::WireFormatLite::StringSize(v11) + 1;
  }
  v12 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
  if ( std::string::size(v12) )
  {
    v13 = proto_log::MailLogBodyCommon::tag[abi:cxx11](this);
    total_sizeb += google::protobuf::internal::WireFormatLite::StringSize(v13) + 2;
  }
  if ( proto_log::MailLogBodyCommon::op_type(this) )
  {
    v14 = proto_log::MailLogBodyCommon::op_type(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v14) + 1;
  }
  if ( proto_log::MailLogBodyCommon::op_reason(this) )
  {
    v15 = proto_log::MailLogBodyCommon::op_reason(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v15) + 1;
  }
  if ( proto_log::MailLogBodyCommon::uid(this) )
  {
    v16 = proto_log::MailLogBodyCommon::uid(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v16) + 1;
  }
  if ( proto_log::MailLogBodyCommon::mail_id(this) )
  {
    v17 = proto_log::MailLogBodyCommon::mail_id(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v17) + 1;
  }
  if ( proto_log::MailLogBodyCommon::send_time(this) )
  {
    v18 = proto_log::MailLogBodyCommon::send_time(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v18) + 1;
  }
  if ( proto_log::MailLogBodyCommon::expire_time(this) )
  {
    v19 = proto_log::MailLogBodyCommon::expire_time(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v19) + 1;
  }
  if ( proto_log::MailLogBodyCommon::importance(this) )
  {
    v20 = proto_log::MailLogBodyCommon::importance(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v20) + 1;
  }
  if ( proto_log::MailLogBodyCommon::config_id(this) )
  {
    v21 = proto_log::MailLogBodyCommon::config_id(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v21) + 1;
  }
  if ( proto_log::MailLogBodyCommon::reason_type(this) )
  {
    v22 = proto_log::MailLogBodyCommon::reason_type(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v22) + 1;
  }
  if ( proto_log::MailLogBodyCommon::item_limit_type(this) )
  {
    v23 = proto_log::MailLogBodyCommon::item_limit_type(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v23) + 1;
  }
  if ( proto_log::MailLogBodyCommon::source_type(this) )
  {
    v24 = proto_log::MailLogBodyCommon::source_type(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v24) + 2;
  }
  if ( proto_log::MailLogBodyCommon::is_read(this) )
    total_sizeb += 3LL;
  if ( proto_log::MailLogBodyCommon::is_attachment_got(this) )
    total_sizeb += 3LL;
  if ( proto_log::MailLogBodyCommon::is_star(this) )
    total_sizeb += 3LL;
  if ( proto_log::MailLogBodyCommon::collect_state(this) )
  {
    v25 = proto_log::MailLogBodyCommon::collect_state(this);
    total_sizeb += google::protobuf::internal::WireFormatLite::UInt32Size(v25) + 2;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizeb);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizeb;
};

// Line 1610: range 0000000015020050-00000000150202D9
void __cdecl proto_log::MailLogBodyCommon::MergeFrom(
        proto_log::MailLogBodyCommon *const this,
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
  const proto_log::MailLogBodyCommon *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto_log::MailLogBodyCommon::MergeFrom;
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
      "./src/server_only/log/mail/mail_body.pb.cc",
      1612);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto_log::MailLogBodyCommon const>(from);
  if ( source )
    proto_log::MailLogBodyCommon::MergeFrom(this, source);
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

// Line 1625: range 00000000150202DA-0000000015020BBF
void __cdecl proto_log::MailLogBodyCommon::MergeFrom(
        proto_log::MailLogBodyCommon *const this,
        const proto_log::MailLogBodyCommon *from)
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
  google::protobuf::uint32 v20; // edx
  google::protobuf::uint32 v21; // edx
  google::protobuf::uint32 v22; // edx
  google::protobuf::uint32 v23; // edx
  google::protobuf::uint32 v24; // edx
  google::protobuf::uint32 v25; // edx
  google::protobuf::uint32 v26; // edx
  google::protobuf::uint32 v27; // edx
  google::protobuf::uint32 v28; // edx
  bool v29; // dl
  bool is_attachment_got; // dl
  bool is_star; // dl
  google::protobuf::uint32 v32; // edx
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
  *(_QWORD *)(v2 + 16) = proto_log::MailLogBodyCommon::MergeFrom;
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
      "./src/server_only/log/mail/mail_body.pb.cc",
      1627);
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
  google::protobuf::RepeatedPtrField<proto_log::MailItem>::MergeFrom(&this->item_list_, &from->item_list_);
  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(&this->argument_list_, &from->argument_list_);
  v10 = proto_log::MailLogBodyCommon::title[abi:cxx11](from);
  if ( std::string::size(v10) )
  {
    v11 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->title_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->title_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->title_, v11, from->title_);
  }
  v12 = proto_log::MailLogBodyCommon::content[abi:cxx11](from);
  if ( std::string::size(v12) )
  {
    v13 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->content_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->content_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->content_, v13, from->content_);
  }
  v14 = proto_log::MailLogBodyCommon::sender[abi:cxx11](from);
  if ( std::string::size(v14) )
  {
    v15 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->sender_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->sender_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->sender_, v15, from->sender_);
  }
  v16 = proto_log::MailLogBodyCommon::tag[abi:cxx11](from);
  if ( std::string::size(v16) )
  {
    v17 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
    if ( *(_BYTE *)(((unsigned __int64)&from->tag_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->tag_);
    google::protobuf::internal::ArenaStringPtr::AssignWithDefault(&this->tag_, v17, from->tag_);
  }
  if ( proto_log::MailLogBodyCommon::op_type(from) )
  {
    v18 = proto_log::MailLogBodyCommon::op_type(from);
    proto_log::MailLogBodyCommon::set_op_type(this, v18);
  }
  if ( proto_log::MailLogBodyCommon::op_reason(from) )
  {
    v19 = proto_log::MailLogBodyCommon::op_reason(from);
    proto_log::MailLogBodyCommon::set_op_reason(this, v19);
  }
  if ( proto_log::MailLogBodyCommon::uid(from) )
  {
    v20 = proto_log::MailLogBodyCommon::uid(from);
    proto_log::MailLogBodyCommon::set_uid(this, v20);
  }
  if ( proto_log::MailLogBodyCommon::mail_id(from) )
  {
    v21 = proto_log::MailLogBodyCommon::mail_id(from);
    proto_log::MailLogBodyCommon::set_mail_id(this, v21);
  }
  if ( proto_log::MailLogBodyCommon::send_time(from) )
  {
    v22 = proto_log::MailLogBodyCommon::send_time(from);
    proto_log::MailLogBodyCommon::set_send_time(this, v22);
  }
  if ( proto_log::MailLogBodyCommon::expire_time(from) )
  {
    v23 = proto_log::MailLogBodyCommon::expire_time(from);
    proto_log::MailLogBodyCommon::set_expire_time(this, v23);
  }
  if ( proto_log::MailLogBodyCommon::importance(from) )
  {
    v24 = proto_log::MailLogBodyCommon::importance(from);
    proto_log::MailLogBodyCommon::set_importance(this, v24);
  }
  if ( proto_log::MailLogBodyCommon::config_id(from) )
  {
    v25 = proto_log::MailLogBodyCommon::config_id(from);
    proto_log::MailLogBodyCommon::set_config_id(this, v25);
  }
  if ( proto_log::MailLogBodyCommon::reason_type(from) )
  {
    v26 = proto_log::MailLogBodyCommon::reason_type(from);
    proto_log::MailLogBodyCommon::set_reason_type(this, v26);
  }
  if ( proto_log::MailLogBodyCommon::item_limit_type(from) )
  {
    v27 = proto_log::MailLogBodyCommon::item_limit_type(from);
    proto_log::MailLogBodyCommon::set_item_limit_type(this, v27);
  }
  if ( proto_log::MailLogBodyCommon::source_type(from) )
  {
    v28 = proto_log::MailLogBodyCommon::source_type(from);
    proto_log::MailLogBodyCommon::set_source_type(this, v28);
  }
  if ( proto_log::MailLogBodyCommon::is_read(from) )
  {
    v29 = proto_log::MailLogBodyCommon::is_read(from);
    proto_log::MailLogBodyCommon::set_is_read(this, v29);
  }
  if ( proto_log::MailLogBodyCommon::is_attachment_got(from) )
  {
    is_attachment_got = proto_log::MailLogBodyCommon::is_attachment_got(from);
    proto_log::MailLogBodyCommon::set_is_attachment_got(this, is_attachment_got);
  }
  if ( proto_log::MailLogBodyCommon::is_star(from) )
  {
    is_star = proto_log::MailLogBodyCommon::is_star(from);
    proto_log::MailLogBodyCommon::set_is_star(this, is_star);
  }
  if ( proto_log::MailLogBodyCommon::collect_state(from) )
  {
    v32 = proto_log::MailLogBodyCommon::collect_state(from);
    proto_log::MailLogBodyCommon::set_collect_state(this, v32);
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

// Line 1697: range 0000000015020BC0-0000000015020BFD
void __cdecl proto_log::MailLogBodyCommon::CopyFrom(
        proto_log::MailLogBodyCommon *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto_log::MailLogBodyCommon::Clear(this);
    proto_log::MailLogBodyCommon::MergeFrom(this, from);
  }
};

// Line 1704: range 0000000015020BFE-0000000015020C3B
void __cdecl proto_log::MailLogBodyCommon::CopyFrom(
        proto_log::MailLogBodyCommon *const this,
        const proto_log::MailLogBodyCommon *from)
{
  if ( from != this )
  {
    proto_log::MailLogBodyCommon::Clear(this);
    proto_log::MailLogBodyCommon::MergeFrom(this, from);
  }
};

// Line 1711: range 0000000015020C3C-0000000015020C4A
bool __cdecl proto_log::MailLogBodyCommon::IsInitialized(const proto_log::MailLogBodyCommon *const this)
{
  return 1;
};

// Line 1715: range 0000000015020C4C-0000000015020C7D
void __cdecl proto_log::MailLogBodyCommon::Swap(
        proto_log::MailLogBodyCommon *const this,
        proto_log::MailLogBodyCommon *other)
{
  if ( other != this )
    proto_log::MailLogBodyCommon::InternalSwap(this, other);
};

// Line 1719: range 0000000015020C7E-0000000015021124
void __cdecl proto_log::MailLogBodyCommon::InternalSwap(
        proto_log::MailLogBodyCommon *const this,
        proto_log::MailLogBodyCommon *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-80h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(&this->item_list_, &other->item_list_);
  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(&this->argument_list_, &other->argument_list_);
  std::swap<std::string *>(&this->title_.ptr_, &other->title_.ptr_);
  std::swap<std::string *>(&this->content_.ptr_, &other->content_.ptr_);
  std::swap<std::string *>(&this->sender_.ptr_, &other->sender_.ptr_);
  std::swap<std::string *>(&this->tag_.ptr_, &other->tag_.ptr_);
  std::swap<unsigned int>(&this->op_type_, &other->op_type_);
  std::swap<unsigned int>(&this->op_reason_, &other->op_reason_);
  std::swap<unsigned int>(&this->uid_, &other->uid_);
  std::swap<unsigned int>(&this->mail_id_, &other->mail_id_);
  std::swap<unsigned int>(&this->send_time_, &other->send_time_);
  std::swap<unsigned int>(&this->expire_time_, &other->expire_time_);
  std::swap<unsigned int>(&this->importance_, &other->importance_);
  std::swap<unsigned int>(&this->config_id_, &other->config_id_);
  std::swap<unsigned int>(&this->reason_type_, &other->reason_type_);
  std::swap<unsigned int>(&this->item_limit_type_, &other->item_limit_type_);
  std::swap<unsigned int>(&this->source_type_, &other->source_type_);
  std::swap<bool>(&this->is_read_, &other->is_read_);
  std::swap<bool>(&this->is_attachment_got_, &other->is_attachment_got_);
  std::swap<bool>(&this->is_star_, &other->is_star_);
  std::swap<unsigned int>(&this->collect_state_, &other->collect_state_);
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

// Line 1746: range 0000000015021126-0000000015021146
google::protobuf::Metadata __cdecl proto_log::MailLogBodyCommon::GetMetadata(
        const proto_log::MailLogBodyCommon *const this)
{
  proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto_log::protobuf_server_5fonly_2flog_2fmail_2fmail_5fbody_2eproto::`anonymous namespace'::file_level_metadata[1];
};

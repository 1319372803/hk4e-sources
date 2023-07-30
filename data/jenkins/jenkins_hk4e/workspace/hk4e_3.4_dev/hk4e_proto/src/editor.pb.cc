// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/editor.pb.cc

// Line 88: range 000000001848C487-000000001848C656
void __cdecl proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  proto::protobuf_editor_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "editor.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&proto::protobuf_editor_2eproto::schemas,
    (int)proto::protobuf_editor_2eproto::file_default_instances,
    (int)proto::protobuf_editor_2eproto::TableStruct::offsets,
    0,
    (int)proto::protobuf_editor_2eproto::`anonymous namespace'::file_level_metadata,
    (__int64)proto::protobuf_editor_2eproto::`anonymous namespace'::file_level_enum_descriptors,
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

// Line 96: range 000000001848C657-000000001848C670
void __cdecl proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 102: range 000000001848C671-000000001848C695
void __cdecl proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_RegisterTypes(const std::string *a1)
{
  proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto::protobuf_editor_2eproto::`anonymous namespace'::file_level_metadata,
    2);
};

// Line 108: range 000000001848C696-000000001848C6F3
void __cdecl proto::protobuf_editor_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion((google::protobuf::internal *)0x2DD660, 3004000, "./src/editor.pb.cc", v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto::MapInfo>::DefaultConstruct(&proto::_MapInfo_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto::_MapInfo_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<proto::CellInfo>::DefaultConstruct(&proto::_CellInfo_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto::_CellInfo_default_instance_,
    (const void *)0x2DD660);
};

// Line 118: range 000000001848C6F4-000000001848C710
void __cdecl proto::protobuf_editor_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &proto::protobuf_editor_2eproto::InitDefaults(void)::once,
    proto::protobuf_editor_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 123: range 000000001848C711-000000001848C740
void __cdecl proto::protobuf_editor_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 142: range 000000001848C741-000000001848C75A
void __cdecl proto::protobuf_editor_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &proto::protobuf_editor_2eproto::AddDescriptors(void)::once,
    proto::protobuf_editor_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 148: range 0000000018E54B58-0000000018E54B6B
void __cdecl proto::protobuf_editor_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        proto::protobuf_editor_2eproto::StaticDescriptorInitializer *const this)
{
  proto::protobuf_editor_2eproto::AddDescriptors();
};

// Line 155: range 000000001848C75B-000000001848C76C
const google::protobuf::EnumDescriptor *__cdecl proto::SceneSurfaceMaterial_descriptor()
{
  proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_editor_2eproto::`anonymous namespace'::file_level_enum_descriptors[0];
};

// Line 159: range 000000001848C76D-000000001848C789
bool __cdecl proto::SceneSurfaceMaterial_IsValid(int value)
{
  return (unsigned int)value <= 7;
};

// Line 186: range 000000001848C78A-000000001848C86E
void __cdecl proto::MapInfo::MapInfo(proto::MapInfo *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto::MapInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto::CellInfo>::RepeatedPtrField(&this->cells_);
  if ( this != proto::MapInfo::internal_default_instance() )
    proto::protobuf_editor_2eproto::InitDefaults();
  proto::MapInfo::SharedCtor(this);
};

// Line 194: range 000000001848C870-000000001848CB52
void __cdecl proto::MapInfo::MapInfo(proto::MapInfo *const this, const proto::MapInfo *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::int32 *p_minx; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto::MapInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<proto::CellInfo>::RepeatedPtrField(&this->cells_, &from->cells_);
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
  p_minx = &from->minx_;
  v5 = (unsigned __int64)&this->minx_;
  if ( (((unsigned __int8)from + 40) & 7) >= *(_BYTE *)(((unsigned __int64)&from->minx_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->minx_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->maxz_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&from->maxz_ + 3) >> 3) + 0x7FFF8000) )
  {
    v5 = 16LL;
    __asan_report_load_n(&from->minx_, 16LL);
  }
  v6 = *((_QWORD *)p_minx + 1);
  v7 = *(_QWORD *)p_minx;
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

// Line 206: range 000000001848CB54-000000001848CBBA
void __cdecl proto::MapInfo::SharedCtor(proto::MapInfo *const this)
{
  memset(&this->minx_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 213: range 000000001848CBBC-000000001848CC35
void __cdecl proto::MapInfo::~MapInfo(proto::MapInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto::MapInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto::MapInfo::SharedDtor(this);
  google::protobuf::RepeatedPtrField<proto::CellInfo>::~RepeatedPtrField(&this->cells_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 213: range 000000001848CC36-000000001848CC60
void __cdecl proto::MapInfo::~MapInfo(proto::MapInfo *const this)
{
  proto::MapInfo::~MapInfo(this);
  operator delete(this, 0x40uLL);
};

// Line 218: range 000000001848CC62-000000001848CC6C
void __cdecl proto::MapInfo::SharedDtor(proto::MapInfo *const this)
{
  ;
};

// Line 221: range 000000001848CC6E-000000001848CCBC
void __cdecl proto::MapInfo::SetCachedSize(const proto::MapInfo *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 226: range 000000001848CCBE-000000001848CCCF
const google::protobuf::Descriptor *__cdecl proto::MapInfo::descriptor()
{
  proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_editor_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 231: range 000000001848CCD0-000000001848CCDF
const proto::MapInfo *__cdecl proto::MapInfo::default_instance()
{
  proto::protobuf_editor_2eproto::InitDefaults();
  return proto::MapInfo::internal_default_instance();
};

// Line 236: range 000000001848CCE0-000000001848CD54
proto::MapInfo *__cdecl proto::MapInfo::New(const proto::MapInfo *const this, google::protobuf::Arena *arena)
{
  proto::MapInfo *v2; // rbx

  v2 = (proto::MapInfo *)operator new(0x40uLL);
  proto::MapInfo::MapInfo(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto::MapInfo>(arena, v2);
  return v2;
};

// Line 244: range 000000001848CD56-000000001848CDF3
void __cdecl proto::MapInfo::Clear(proto::MapInfo *const this)
{
  google::protobuf::RepeatedPtrField<proto::CellInfo>::Clear(&this->cells_);
  memset(&this->minx_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 258: range 000000001848CDF4-000000001848D82F
bool __cdecl proto::MapInfo::MergePartialFromCodedStream(
        proto::MapInfo *const this,
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
  proto::CellInfo *v13; // rdx
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:263";
  *(_QWORD *)(v2 + 16) = proto::MapInfo::MergePartialFromCodedStream;
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
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    input,
                    &this->minx_) )
              goto failure;
            continue;
          case 2:
            if ( (_BYTE)tag != 16 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    input,
                    &this->maxx_) )
              goto failure;
            continue;
          case 3:
            if ( (_BYTE)tag != 24 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    input,
                    &this->minz_) )
              goto failure;
            continue;
          case 4:
            if ( (_BYTE)tag != 32 )
              goto handle_unusual;
            if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    input,
                    &this->maxz_) )
              goto failure;
            continue;
          case 5:
            if ( (_BYTE)tag != 42 )
              goto handle_unusual;
            v13 = proto::MapInfo::add_cells(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<proto::CellInfo>(input, v13) )
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
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v14 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v14->unknown_fields) );
failure:
  result = 0;
LABEL_59:
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

// Line 356: range 000000001848D830-000000001848DA5F
void __cdecl proto::MapInfo::SerializeWithCachedSizes(
        const proto::MapInfo *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int32 v2; // ecx
  google::protobuf::int32 v3; // ecx
  google::protobuf::int32 v4; // ecx
  google::protobuf::int32 v5; // ecx
  const proto::CellInfo *v6; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v8; // rax
  unsigned int i; // [rsp+1Ch] [rbp-34h]
  unsigned int n; // [rsp+24h] [rbp-2Ch]

  if ( proto::MapInfo::minx(this) )
  {
    v2 = proto::MapInfo::minx(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(1, v2, output);
  }
  if ( proto::MapInfo::maxx(this) )
  {
    v3 = proto::MapInfo::maxx(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(2, v3, output);
  }
  if ( proto::MapInfo::minz(this) )
  {
    v4 = proto::MapInfo::minz(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(3, v4, output);
  }
  if ( proto::MapInfo::maxz(this) )
  {
    v5 = proto::MapInfo::maxz(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(4, v5, output);
  }
  i = 0;
  n = proto::MapInfo::cells_size(this);
  while ( i < n )
  {
    v6 = proto::MapInfo::cells(this, i);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(5, v6, output);
    ++i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_24;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_24:
      v8 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v8->unknown_fields, output);
  }
};

// Line 396: range 000000001848DA60-000000001848DCB8
google::protobuf::uint8 *__cdecl proto::MapInfo::InternalSerializeWithCachedSizesToArray(
        const proto::MapInfo *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::int32 v3; // ecx
  google::protobuf::int32 v4; // ecx
  google::protobuf::int32 v5; // ecx
  google::protobuf::int32 v6; // ecx
  const proto::CellInfo *v7; // rsi
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rax
  unsigned int i; // [rsp+2Ch] [rbp-44h]
  unsigned int n; // [rsp+34h] [rbp-3Ch]

  if ( proto::MapInfo::minx(this) )
  {
    v3 = proto::MapInfo::minx(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, v3, target);
  }
  if ( proto::MapInfo::maxx(this) )
  {
    v4 = proto::MapInfo::maxx(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, v4, target);
  }
  if ( proto::MapInfo::minz(this) )
  {
    v5 = proto::MapInfo::minz(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, v5, target);
  }
  if ( proto::MapInfo::maxz(this) )
  {
    v6 = proto::MapInfo::maxz(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, v6, target);
  }
  i = 0;
  n = proto::MapInfo::cells_size(this);
  while ( i < n )
  {
    v7 = proto::MapInfo::cells(this, i);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<proto::CellInfo>(
               5,
               v7,
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
      goto LABEL_24;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_24:
      v9 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v9->unknown_fields, target);
  }
  return target;
};

// Line 438: range 000000001848DCBA-000000001848DF16
size_t __cdecl proto::MapInfo::ByteSizeLong(const proto::MapInfo *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const proto::CellInfo *v3; // rax
  google::protobuf::int32 v4; // eax
  google::protobuf::int32 v5; // eax
  google::protobuf::int32 v6; // eax
  google::protobuf::int32 v7; // eax
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
  count = proto::MapInfo::cells_size(this);
  total_sizea = count + total_size;
  for ( i = 0; i < count; ++i )
  {
    v3 = proto::MapInfo::cells(this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<proto::CellInfo>(v3);
  }
  if ( proto::MapInfo::minx(this) )
  {
    v4 = proto::MapInfo::minx(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(v4) + 1;
  }
  if ( proto::MapInfo::maxx(this) )
  {
    v5 = proto::MapInfo::maxx(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(v5) + 1;
  }
  if ( proto::MapInfo::minz(this) )
  {
    v6 = proto::MapInfo::minz(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(v6) + 1;
  }
  if ( proto::MapInfo::maxz(this) )
  {
    v7 = proto::MapInfo::maxz(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(v7) + 1;
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

// Line 493: range 000000001848DF18-000000001848E1A1
void __cdecl proto::MapInfo::MergeFrom(proto::MapInfo *const this, const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto::MapInfo *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto::MapInfo::MergeFrom;
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
      "./src/editor.pb.cc",
      495);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto::MapInfo const>(from);
  if ( source )
    proto::MapInfo::MergeFrom(this, source);
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

// Line 508: range 000000001848E1A2-000000001848E608
void __cdecl proto::MapInfo::MergeFrom(proto::MapInfo *const this, const proto::MapInfo *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  google::protobuf::int32 v10; // edx
  google::protobuf::int32 v11; // edx
  google::protobuf::int32 v12; // edx
  google::protobuf::int32 v13; // edx
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
  *(_QWORD *)(v2 + 16) = proto::MapInfo::MergeFrom;
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
      "./src/editor.pb.cc",
      510);
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
  google::protobuf::RepeatedPtrField<proto::CellInfo>::MergeFrom(&this->cells_, &from->cells_);
  if ( proto::MapInfo::minx(from) )
  {
    v10 = proto::MapInfo::minx(from);
    proto::MapInfo::set_minx(this, v10);
  }
  if ( proto::MapInfo::maxx(from) )
  {
    v11 = proto::MapInfo::maxx(from);
    proto::MapInfo::set_maxx(this, v11);
  }
  if ( proto::MapInfo::minz(from) )
  {
    v12 = proto::MapInfo::minz(from);
    proto::MapInfo::set_minz(this, v12);
  }
  if ( proto::MapInfo::maxz(from) )
  {
    v13 = proto::MapInfo::maxz(from);
    proto::MapInfo::set_maxz(this, v13);
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

// Line 530: range 000000001848E60A-000000001848E644
void __cdecl proto::MapInfo::CopyFrom(proto::MapInfo *const this, const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto::MapInfo::Clear(this);
    proto::MapInfo::MergeFrom(this, from);
  }
};

// Line 537: range 000000001848E646-000000001848E680
void __cdecl proto::MapInfo::CopyFrom(proto::MapInfo *const this, const proto::MapInfo *from)
{
  if ( from != this )
  {
    proto::MapInfo::Clear(this);
    proto::MapInfo::MergeFrom(this, from);
  }
};

// Line 544: range 000000001848E682-000000001848E690
bool __cdecl proto::MapInfo::IsInitialized(const proto::MapInfo *const this)
{
  return 1;
};

// Line 548: range 000000001848E692-000000001848E6C0
void __cdecl proto::MapInfo::Swap(proto::MapInfo *const this, proto::MapInfo *other)
{
  if ( other != this )
    proto::MapInfo::InternalSwap(this, other);
};

// Line 552: range 000000001848E6C2-000000001848E8B2
void __cdecl proto::MapInfo::InternalSwap(proto::MapInfo *const this, proto::MapInfo *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(&this->cells_, &other->cells_);
  std::swap<int>(&this->minx_, &other->minx_);
  std::swap<int>(&this->maxx_, &other->maxx_);
  std::swap<int>(&this->minz_, &other->minz_);
  std::swap<int>(&this->maxz_, &other->maxz_);
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

// Line 563: range 000000001848E8B4-000000001848E8D4
google::protobuf::Metadata __cdecl proto::MapInfo::GetMetadata(const proto::MapInfo *const this)
{
  proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_editor_2eproto::`anonymous namespace'::file_level_metadata[0];
};

// Line 666: range 000000001848E8D6-000000001848E995
void __cdecl proto::CellInfo::CellInfo(proto::CellInfo *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'proto::CellInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != proto::CellInfo::internal_default_instance() )
    proto::protobuf_editor_2eproto::InitDefaults();
  proto::CellInfo::SharedCtor(this);
};

// Line 674: range 000000001848E996-000000001848EC40
void __cdecl proto::CellInfo::CellInfo(proto::CellInfo *const this, const proto::CellInfo *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  __int64 p_type; // rsi
  int *v5; // rcx
  int *v6; // rdi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'proto::CellInfo + 2);
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
  p_type = (__int64)&from->type_;
  v5 = &this->type_;
  if ( (((unsigned __int8)from + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&from->type_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->type_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->y_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&from->y_ + 3) >> 3) + 0x7FFF8000) )
  {
    p_type = 8LL;
    __asan_report_load_n(&from->type_, 8LL);
  }
  v6 = *(int **)p_type;
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

// Line 685: range 000000001848EC42-000000001848ECA8
void __cdecl proto::CellInfo::SharedCtor(proto::CellInfo *const this)
{
  memset(&this->type_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 692: range 000000001848ECAA-000000001848ED13
void __cdecl proto::CellInfo::~CellInfo(proto::CellInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'proto::CellInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  proto::CellInfo::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 692: range 000000001848ED14-000000001848ED3E
void __cdecl proto::CellInfo::~CellInfo(proto::CellInfo *const this)
{
  proto::CellInfo::~CellInfo(this);
  operator delete(this, 0x20uLL);
};

// Line 697: range 000000001848ED40-000000001848ED4A
void __cdecl proto::CellInfo::SharedDtor(proto::CellInfo *const this)
{
  ;
};

// Line 700: range 000000001848ED4C-000000001848ED9A
void __cdecl proto::CellInfo::SetCachedSize(const proto::CellInfo *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 705: range 000000001848ED9C-000000001848EDAD
const google::protobuf::Descriptor *__cdecl proto::CellInfo::descriptor()
{
  proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_editor_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 710: range 000000001848EDAE-000000001848EDBD
const proto::CellInfo *__cdecl proto::CellInfo::default_instance()
{
  proto::protobuf_editor_2eproto::InitDefaults();
  return proto::CellInfo::internal_default_instance();
};

// Line 715: range 000000001848EDBE-000000001848EE32
proto::CellInfo *__cdecl proto::CellInfo::New(const proto::CellInfo *const this, google::protobuf::Arena *arena)
{
  proto::CellInfo *v2; // rbx

  v2 = (proto::CellInfo *)operator new(0x20uLL);
  proto::CellInfo::CellInfo(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto::CellInfo>(arena, v2);
  return v2;
};

// Line 723: range 000000001848EE34-000000001848EEC1
void __cdecl proto::CellInfo::Clear(proto::CellInfo *const this)
{
  memset(&this->type_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 736: range 000000001848EEC2-000000001848F890
bool __cdecl proto::CellInfo::MergePartialFromCodedStream(
        proto::CellInfo *const this,
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
  int v14; // edx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v15; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-114h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-10Ch]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-F8h]
  char v20[224]; // [rsp+50h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 18 at_or_below_cutoff 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 value:749 112 4 3 tag 128 "
                        "4 3 tag 144 4 3 tag 160 8 5 p:741";
  *(_QWORD *)(v2 + 16) = proto::CellInfo::MergePartialFromCodedStream;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -202116352;
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
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, first_byte_or_zero);
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 112);
        *(_DWORD *)(v2 + 112) = TagFallback;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        v12 = (unsigned int)(*(_DWORD *)(v2 + 112) - 1) < 0x7F;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 64);
        *(_BYTE *)(v2 + 64) = v12;
        v10 = std::make_pair<unsigned int const&,bool>((const unsigned int *)(v2 + 112), (bool *)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
        v8 = input->buffer_;
        if ( *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) != 0
          && ((__int64)input->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)input->buffer_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(input->buffer_);
        }
        v9 = *v8;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 128);
        *(_DWORD *)(v2 + 128) = v9;
        google::protobuf::io::CodedInputStream::Advance(input, 1);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 80);
        *(_BYTE *)(v2 + 80) = 1;
        v10 = std::make_pair<unsigned int &,bool>((unsigned int *)(v2 + 128), (bool *)(v2 + 80));
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(std::pair<unsigned int,bool> *)(v2 + 160) = v10;
      tag = *(_DWORD *)(v2 + 160);
      if ( *(_BYTE *)(v2 + 164) != 1 )
        break;
      TagFieldNumber = google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag);
      if ( TagFieldNumber == 1 )
      {
        if ( (_BYTE)tag != 8 )
          break;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        if ( google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)14>(
               input,
               (int *)(v2 + 96)) )
        {
          if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 96);
          proto::CellInfo::set_type(this, *(proto::SceneSurfaceMaterial *)(v2 + 96));
          v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v14 != 1 )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                input,
                &this->y_) )
          goto failure;
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_54;
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
LABEL_54:
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 795: range 000000001848F892-000000001848FA09
void __cdecl proto::CellInfo::SerializeWithCachedSizes(
        const proto::CellInfo *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int32 v2; // ecx
  google::protobuf::int32 v3; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax

  if ( proto::CellInfo::type(this) )
  {
    v2 = proto::CellInfo::type(this);
    google::protobuf::internal::WireFormatLite::WriteEnum(1, v2, output);
  }
  if ( proto::CellInfo::y(this) )
  {
    v3 = proto::CellInfo::y(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(2, v3, output);
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

// Line 819: range 000000001848FA0A-000000001848FB95
google::protobuf::uint8 *__cdecl proto::CellInfo::InternalSerializeWithCachedSizesToArray(
        const proto::CellInfo *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  int v3; // ecx
  google::protobuf::int32 v4; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax

  if ( proto::CellInfo::type(this) )
  {
    v3 = proto::CellInfo::type(this);
    target = google::protobuf::internal::WireFormatLite::WriteEnumToArray(1, v3, target);
  }
  if ( proto::CellInfo::y(this) )
  {
    v4 = proto::CellInfo::y(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, v4, target);
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

// Line 844: range 000000001848FB96-000000001848FD4A
size_t __cdecl proto::CellInfo::ByteSizeLong(const proto::CellInfo *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  int v3; // eax
  google::protobuf::int32 v4; // eax
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
  if ( proto::CellInfo::type(this) )
  {
    v3 = proto::CellInfo::type(this);
    total_size += google::protobuf::internal::WireFormatLite::EnumSize(v3) + 1;
  }
  if ( proto::CellInfo::y(this) )
  {
    v4 = proto::CellInfo::y(this);
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(v4) + 1;
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

// Line 873: range 000000001848FD4C-000000001848FFD5
void __cdecl proto::CellInfo::MergeFrom(proto::CellInfo *const this, const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const proto::CellInfo *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = proto::CellInfo::MergeFrom;
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
      "./src/editor.pb.cc",
      875);
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
  source = google::protobuf::internal::DynamicCastToGenerated<proto::CellInfo const>(from);
  if ( source )
    proto::CellInfo::MergeFrom(this, source);
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

// Line 888: range 000000001848FFD6-00000000184903A7
void __cdecl proto::CellInfo::MergeFrom(proto::CellInfo *const this, const proto::CellInfo *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  proto::SceneSurfaceMaterial v10; // edx
  google::protobuf::int32 v11; // edx
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
  *(_QWORD *)(v2 + 16) = proto::CellInfo::MergeFrom;
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
      "./src/editor.pb.cc",
      890);
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
  if ( proto::CellInfo::type(from) )
  {
    v10 = proto::CellInfo::type(from);
    proto::CellInfo::set_type(this, v10);
  }
  if ( proto::CellInfo::y(from) )
  {
    v11 = proto::CellInfo::y(from);
    proto::CellInfo::set_y(this, v11);
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

// Line 903: range 00000000184903A8-00000000184903E2
void __cdecl proto::CellInfo::CopyFrom(proto::CellInfo *const this, const google::protobuf::Message *from)
{
  if ( from != this )
  {
    proto::CellInfo::Clear(this);
    proto::CellInfo::MergeFrom(this, from);
  }
};

// Line 910: range 00000000184903E4-000000001849041E
void __cdecl proto::CellInfo::CopyFrom(proto::CellInfo *const this, const proto::CellInfo *from)
{
  if ( from != this )
  {
    proto::CellInfo::Clear(this);
    proto::CellInfo::MergeFrom(this, from);
  }
};

// Line 917: range 0000000018490420-000000001849042E
bool __cdecl proto::CellInfo::IsInitialized(const proto::CellInfo *const this)
{
  return 1;
};

// Line 921: range 0000000018490430-000000001849045E
void __cdecl proto::CellInfo::Swap(proto::CellInfo *const this, proto::CellInfo *other)
{
  if ( other != this )
    proto::CellInfo::InternalSwap(this, other);
};

// Line 925: range 0000000018490460-00000000184905FF
void __cdecl proto::CellInfo::InternalSwap(proto::CellInfo *const this, proto::CellInfo *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<int>(&this->type_, &other->type_);
  std::swap<int>(&this->y_, &other->y_);
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

// Line 933: range 0000000018490600-0000000018490620
google::protobuf::Metadata __cdecl proto::CellInfo::GetMetadata(const proto::CellInfo *const this)
{
  proto::protobuf_editor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_editor_2eproto::`anonymous namespace'::file_level_metadata[1];
};

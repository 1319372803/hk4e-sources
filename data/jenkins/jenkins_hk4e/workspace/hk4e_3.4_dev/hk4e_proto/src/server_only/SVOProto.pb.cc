// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/SVOProto.pb.cc

// Line 188: range 000000001821E0ED-000000001821E2B6
void __cdecl ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptors()
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
  *(_QWORD *)(v0 + 16) = ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862723] = -202116109;
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::AddDescriptors();
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 64),
    "server_only/SVOProto.proto",
    (const std::allocator<char> *)(v0 + 48));
  google::protobuf::internal::AssignDescriptors(
    v0 + 64,
    (int)&ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::schemas,
    (int)ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::file_default_instances,
    (int)ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::TableStruct::offsets,
    0,
    (int)ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata,
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

// Line 196: range 000000001821E2B7-000000001821E2D0
void __cdecl ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  google::protobuf::GoogleOnceInit(
    &ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptors);
};

// Line 202: range 000000001821E2D1-000000001821E2F5
void __cdecl ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata,
    8);
};

// Line 208: range 000000001821E2F6-000000001821E53D
void __cdecl ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx
  const ToTheMoonProto::Pos *v1; // rbx
  ToTheMoonProto::SVOStructureProto *v2; // rax
  const ToTheMoonProto::SVOStructureProto *v3; // rbx
  ToTheMoonProto::SVOBlockProto *v4; // rax
  const ToTheMoonProto::SVONodeProto *v5; // rbx
  ToTheMoonProto::SVONodeWrapperProto *v6; // rax
  const ToTheMoonProto::Pos *v7; // rbx
  ToTheMoonProto::SVONodePathProto *v8; // rax
  const ToTheMoonProto::Pos *v9; // rbx
  ToTheMoonProto::SVONodePathProto *v10; // rax

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "./src/server_only/SVOProto.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::Pos>::DefaultConstruct(&ToTheMoonProto::_Pos_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&ToTheMoonProto::_Pos_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVONodeProto>::DefaultConstruct(&ToTheMoonProto::_SVONodeProto_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&ToTheMoonProto::_SVONodeProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVOLayerProto>::DefaultConstruct(&ToTheMoonProto::_SVOLayerProto_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&ToTheMoonProto::_SVOLayerProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVOStructureProto>::DefaultConstruct(&ToTheMoonProto::_SVOStructureProto_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&ToTheMoonProto::_SVOStructureProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVOBlockProto>::DefaultConstruct(&ToTheMoonProto::_SVOBlockProto_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&ToTheMoonProto::_SVOBlockProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVOWorldProto>::DefaultConstruct(&ToTheMoonProto::_SVOWorldProto_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&ToTheMoonProto::_SVOWorldProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVONodeWrapperProto>::DefaultConstruct(&ToTheMoonProto::_SVONodeWrapperProto_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&ToTheMoonProto::_SVONodeWrapperProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVONodePathProto>::DefaultConstruct(&ToTheMoonProto::_SVONodePathProto_default_instance_._instance);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&ToTheMoonProto::_SVONodePathProto_default_instance_,
    (const void *)0x2DD660);
  v1 = ToTheMoonProto::Pos::internal_default_instance();
  v2 = google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVOStructureProto>::get_mutable(&ToTheMoonProto::_SVOStructureProto_default_instance_._instance);
  if ( *(_BYTE *)(((unsigned __int64)&v2->basepos_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2->basepos_ = (ToTheMoonProto::Pos *)v1;
  v3 = ToTheMoonProto::SVOStructureProto::internal_default_instance();
  v4 = google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVOBlockProto>::get_mutable(&ToTheMoonProto::_SVOBlockProto_default_instance_._instance);
  if ( *(_BYTE *)(((unsigned __int64)&v4->svo_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v4->svo_ = (ToTheMoonProto::SVOStructureProto *)v3;
  v5 = ToTheMoonProto::SVONodeProto::internal_default_instance();
  v6 = google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVONodeWrapperProto>::get_mutable(&ToTheMoonProto::_SVONodeWrapperProto_default_instance_._instance);
  if ( *(_BYTE *)(((unsigned __int64)&v6->svonode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v6->svonode_ = (ToTheMoonProto::SVONodeProto *)v5;
  v7 = ToTheMoonProto::Pos::internal_default_instance();
  v8 = google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVONodePathProto>::get_mutable(&ToTheMoonProto::_SVONodePathProto_default_instance_._instance);
  if ( *(_BYTE *)(((unsigned __int64)&v8->start_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v8->start_ = (ToTheMoonProto::Pos *)v7;
  v9 = ToTheMoonProto::Pos::internal_default_instance();
  v10 = google::protobuf::internal::ExplicitlyConstructed<ToTheMoonProto::SVONodePathProto>::get_mutable(&ToTheMoonProto::_SVONodePathProto_default_instance_._instance);
  if ( *(_BYTE *)(((unsigned __int64)&v10->end_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v10->end_ = (ToTheMoonProto::Pos *)v9;
};

// Line 240: range 000000001821E53E-000000001821E55A
void __cdecl ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults()
{
  google::protobuf::GoogleOnceInit(
    &ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults(void)::once,
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::TableStruct::InitDefaultsImpl);
};

// Line 245: range 000000001821E55B-000000001821E58A
void __cdecl ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 281: range 000000001821E58B-000000001821E5A4
void __cdecl ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::AddDescriptors()
{
  google::protobuf::GoogleOnceInit(
    &ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::AddDescriptors(void)::once,
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::AddDescriptorsImpl);
};

// Line 287: range 0000000018E4EBAA-0000000018E4EBBD
void __cdecl ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::StaticDescriptorInitializer::StaticDescriptorInitializer(
        ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::StaticDescriptorInitializer *const this)
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::AddDescriptors();
};

// Line 303: range 000000001821E5A6-000000001821E665
void __cdecl ToTheMoonProto::Pos::Pos(ToTheMoonProto::Pos *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::Pos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != ToTheMoonProto::Pos::internal_default_instance() )
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  ToTheMoonProto::Pos::SharedCtor(this);
};

// Line 311: range 000000001821E666-000000001821E842
void __cdecl ToTheMoonProto::Pos::Pos(ToTheMoonProto::Pos *const this, const ToTheMoonProto::Pos *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'ToTheMoonProto::Pos + 2);
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
  memcpy(&this->x_, &from->x_, 0xCuLL);
};

// Line 322: range 000000001821E844-000000001821E8B2
void __cdecl ToTheMoonProto::Pos::SharedCtor(ToTheMoonProto::Pos *const this)
{
  memset(&this->x_, 0, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 329: range 000000001821E8B4-000000001821E91D
void __cdecl ToTheMoonProto::Pos::~Pos(ToTheMoonProto::Pos *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::Pos + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  ToTheMoonProto::Pos::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 329: range 000000001821E91E-000000001821E948
void __cdecl ToTheMoonProto::Pos::~Pos(ToTheMoonProto::Pos *const this)
{
  ToTheMoonProto::Pos::~Pos(this);
  operator delete(this, 0x20uLL);
};

// Line 334: range 000000001821E94A-000000001821E954
void __cdecl ToTheMoonProto::Pos::SharedDtor(ToTheMoonProto::Pos *const this)
{
  ;
};

// Line 337: range 000000001821E956-000000001821E9AC
void __cdecl ToTheMoonProto::Pos::SetCachedSize(const ToTheMoonProto::Pos *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 342: range 000000001821E9AE-000000001821E9BF
const google::protobuf::Descriptor *__cdecl ToTheMoonProto::Pos::descriptor()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[0].descriptor;
};

// Line 347: range 000000001821E9C0-000000001821E9CF
const ToTheMoonProto::Pos *__cdecl ToTheMoonProto::Pos::default_instance()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  return ToTheMoonProto::Pos::internal_default_instance();
};

// Line 352: range 000000001821E9D0-000000001821EA44
ToTheMoonProto::Pos *__cdecl ToTheMoonProto::Pos::New(
        const ToTheMoonProto::Pos *const this,
        google::protobuf::Arena *arena)
{
  ToTheMoonProto::Pos *v2; // rbx

  v2 = (ToTheMoonProto::Pos *)operator new(0x20uLL);
  ToTheMoonProto::Pos::Pos(v2);
  if ( arena )
    google::protobuf::Arena::Own<ToTheMoonProto::Pos>(arena, v2);
  return v2;
};

// Line 360: range 000000001821EA46-000000001821EAD3
void __cdecl ToTheMoonProto::Pos::Clear(ToTheMoonProto::Pos *const this)
{
  memset(&this->x_, 0, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 373: range 000000001821EAD4-000000001821F466
bool __cdecl ToTheMoonProto::Pos::MergePartialFromCodedStream(
        ToTheMoonProto::Pos *const this,
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:378";
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::Pos::MergePartialFromCodedStream;
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
        if ( (_BYTE)tag != 29 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(
                input,
                &this->z_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber > 3 )
          break;
        if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 13 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(
                  input,
                  &this->x_) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 21 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(
                  input,
                  &this->y_) )
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

// Line 445: range 000000001821F468-000000001821F645
void __cdecl ToTheMoonProto::Pos::SerializeWithCachedSizes(
        const ToTheMoonProto::Pos *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rax

  if ( ToTheMoonProto::Pos::x(this) != 0.0 )
  {
    ToTheMoonProto::Pos::x(this);
    google::protobuf::internal::WireFormatLite::WriteFloat(1, 0.0, output);
  }
  if ( ToTheMoonProto::Pos::y(this) != 0.0 )
  {
    ToTheMoonProto::Pos::y(this);
    google::protobuf::internal::WireFormatLite::WriteFloat(2, 0.0, output);
  }
  if ( ToTheMoonProto::Pos::z(this) != 0.0 )
  {
    ToTheMoonProto::Pos::z(this);
    google::protobuf::internal::WireFormatLite::WriteFloat(3, 0.0, output);
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
      v3 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_19:
      v3 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v3->unknown_fields, output);
  }
};

// Line 473: range 000000001821F646-000000001821F83B
google::protobuf::uint8 *__cdecl ToTheMoonProto::Pos::InternalSerializeWithCachedSizesToArray(
        const ToTheMoonProto::Pos *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax

  if ( ToTheMoonProto::Pos::x(this) != 0.0 )
  {
    v3 = ToTheMoonProto::Pos::x(this);
    target = google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, v3, target);
  }
  if ( ToTheMoonProto::Pos::y(this) != 0.0 )
  {
    v4 = ToTheMoonProto::Pos::y(this);
    target = google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, v4, target);
  }
  if ( ToTheMoonProto::Pos::z(this) != 0.0 )
  {
    v5 = ToTheMoonProto::Pos::z(this);
    target = google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, v5, target);
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

// Line 502: range 000000001821F83C-000000001821FA22
size_t __cdecl ToTheMoonProto::Pos::ByteSizeLong(const ToTheMoonProto::Pos *const this)
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
  if ( ToTheMoonProto::Pos::x(this) != 0.0 )
    total_size += 5LL;
  if ( ToTheMoonProto::Pos::y(this) != 0.0 )
    total_size += 5LL;
  if ( ToTheMoonProto::Pos::z(this) != 0.0 )
    total_size += 5LL;
  cached_size = google::protobuf::internal::ToCachedSize(total_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_size;
};

// Line 533: range 000000001821FA24-000000001821FCAD
void __cdecl ToTheMoonProto::Pos::MergeFrom(ToTheMoonProto::Pos *const this, const google::protobuf::Message *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // [rsp+Fh] [rbp-F1h]
  const ToTheMoonProto::Pos *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::Pos::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      535);
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
  source = google::protobuf::internal::DynamicCastToGenerated<ToTheMoonProto::Pos const>(from);
  if ( source )
    ToTheMoonProto::Pos::MergeFrom(this, source);
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

// Line 548: range 000000001821FCAE-00000000182200E9
void __cdecl ToTheMoonProto::Pos::MergeFrom(ToTheMoonProto::Pos *const this, const ToTheMoonProto::Pos *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::Pos::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      550);
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
  if ( ToTheMoonProto::Pos::x(from) != 0.0 )
  {
    v10 = ToTheMoonProto::Pos::x(from);
    ToTheMoonProto::Pos::set_x(this, v10);
  }
  if ( ToTheMoonProto::Pos::y(from) != 0.0 )
  {
    v11 = ToTheMoonProto::Pos::y(from);
    ToTheMoonProto::Pos::set_y(this, v11);
  }
  if ( ToTheMoonProto::Pos::z(from) != 0.0 )
  {
    v12 = ToTheMoonProto::Pos::z(from);
    ToTheMoonProto::Pos::set_z(this, v12);
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

// Line 566: range 00000000182200EA-0000000018220124
void __cdecl ToTheMoonProto::Pos::CopyFrom(ToTheMoonProto::Pos *const this, const google::protobuf::Message *from)
{
  if ( from != this )
  {
    ToTheMoonProto::Pos::Clear(this);
    ToTheMoonProto::Pos::MergeFrom(this, from);
  }
};

// Line 573: range 0000000018220126-0000000018220160
void __cdecl ToTheMoonProto::Pos::CopyFrom(ToTheMoonProto::Pos *const this, const ToTheMoonProto::Pos *from)
{
  if ( from != this )
  {
    ToTheMoonProto::Pos::Clear(this);
    ToTheMoonProto::Pos::MergeFrom(this, from);
  }
};

// Line 580: range 0000000018220162-0000000018220170
bool __cdecl ToTheMoonProto::Pos::IsInitialized(const ToTheMoonProto::Pos *const this)
{
  return 1;
};

// Line 584: range 0000000018220172-00000000182201A0
void __cdecl ToTheMoonProto::Pos::Swap(ToTheMoonProto::Pos *const this, ToTheMoonProto::Pos *other)
{
  if ( other != this )
    ToTheMoonProto::Pos::InternalSwap(this, other);
};

// Line 588: range 00000000182201A2-000000001822035C
void __cdecl ToTheMoonProto::Pos::InternalSwap(ToTheMoonProto::Pos *const this, ToTheMoonProto::Pos *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<float>(&this->x_, &other->x_);
  std::swap<float>(&this->y_, &other->y_);
  std::swap<float>(&this->z_, &other->z_);
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

// Line 597: range 000000001822035E-000000001822037E
google::protobuf::Metadata __cdecl ToTheMoonProto::Pos::GetMetadata(const ToTheMoonProto::Pos *const this)
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[0];
};

// Line 665: range 0000000018220380-0000000018220506
void __cdecl ToTheMoonProto::SVONodeProto::SVONodeProto(ToTheMoonProto::SVONodeProto *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVONodeProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<long>::RepeatedField(&this->neighbors_);
  google::protobuf::RepeatedField<int>::RepeatedField(&this->neighborslevel_);
  google::protobuf::RepeatedField<long>::RepeatedField(&this->planarneighbors_);
  google::protobuf::RepeatedField<int>::RepeatedField(&this->planarneighborslevel_);
  google::protobuf::RepeatedField<long>::RepeatedField(&this->diagonalneighbors_);
  google::protobuf::RepeatedField<int>::RepeatedField(&this->diagonalneighborslevel_);
  if ( this != ToTheMoonProto::SVONodeProto::internal_default_instance() )
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  ToTheMoonProto::SVONodeProto::SharedCtor(this);
};

// Line 673: range 0000000018220508-0000000018220810
void __cdecl ToTheMoonProto::SVONodeProto::SVONodeProto(
        ToTheMoonProto::SVONodeProto *const this,
        const ToTheMoonProto::SVONodeProto *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVONodeProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<long>::RepeatedField(&this->neighbors_, &from->neighbors_);
  google::protobuf::RepeatedField<int>::RepeatedField(&this->neighborslevel_, &from->neighborslevel_);
  google::protobuf::RepeatedField<long>::RepeatedField(&this->planarneighbors_, &from->planarneighbors_);
  google::protobuf::RepeatedField<int>::RepeatedField(&this->planarneighborslevel_, &from->planarneighborslevel_);
  google::protobuf::RepeatedField<long>::RepeatedField(&this->diagonalneighbors_, &from->diagonalneighbors_);
  google::protobuf::RepeatedField<int>::RepeatedField(&this->diagonalneighborslevel_, &from->diagonalneighborslevel_);
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
  memcpy(&this->mortonindex_, &from->mortonindex_, 0x20uLL);
};

// Line 690: range 0000000018220812-000000001822087F
void __cdecl ToTheMoonProto::SVONodeProto::SharedCtor(ToTheMoonProto::SVONodeProto *const this)
{
  memset(&this->mortonindex_, 0, 0x20uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 697: range 0000000018220880-000000001822094B
void __cdecl ToTheMoonProto::SVONodeProto::~SVONodeProto(ToTheMoonProto::SVONodeProto *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVONodeProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  ToTheMoonProto::SVONodeProto::SharedDtor(this);
  google::protobuf::RepeatedField<int>::~RepeatedField(&this->diagonalneighborslevel_);
  google::protobuf::RepeatedField<long>::~RepeatedField(&this->diagonalneighbors_);
  google::protobuf::RepeatedField<int>::~RepeatedField(&this->planarneighborslevel_);
  google::protobuf::RepeatedField<long>::~RepeatedField(&this->planarneighbors_);
  google::protobuf::RepeatedField<int>::~RepeatedField(&this->neighborslevel_);
  google::protobuf::RepeatedField<long>::~RepeatedField(&this->neighbors_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 697: range 000000001822094C-0000000018220976
void __cdecl ToTheMoonProto::SVONodeProto::~SVONodeProto(ToTheMoonProto::SVONodeProto *const this)
{
  ToTheMoonProto::SVONodeProto::~SVONodeProto(this);
  operator delete(this, 0xC8uLL);
};

// Line 702: range 0000000018220978-0000000018220982
void __cdecl ToTheMoonProto::SVONodeProto::SharedDtor(ToTheMoonProto::SVONodeProto *const this)
{
  ;
};

// Line 705: range 0000000018220984-00000000182209D7
void __cdecl ToTheMoonProto::SVONodeProto::SetCachedSize(const ToTheMoonProto::SVONodeProto *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 710: range 00000000182209D8-00000000182209E9
const google::protobuf::Descriptor *__cdecl ToTheMoonProto::SVONodeProto::descriptor()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[1].descriptor;
};

// Line 715: range 00000000182209EA-00000000182209F9
const ToTheMoonProto::SVONodeProto *__cdecl ToTheMoonProto::SVONodeProto::default_instance()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  return ToTheMoonProto::SVONodeProto::internal_default_instance();
};

// Line 720: range 00000000182209FA-0000000018220A6E
ToTheMoonProto::SVONodeProto *__cdecl ToTheMoonProto::SVONodeProto::New(
        const ToTheMoonProto::SVONodeProto *const this,
        google::protobuf::Arena *arena)
{
  ToTheMoonProto::SVONodeProto *v2; // rbx

  v2 = (ToTheMoonProto::SVONodeProto *)operator new(0xC8uLL);
  ToTheMoonProto::SVONodeProto::SVONodeProto(v2);
  if ( arena )
    google::protobuf::Arena::Own<ToTheMoonProto::SVONodeProto>(arena, v2);
  return v2;
};

// Line 728: range 0000000018220A70-0000000018220B61
void __cdecl ToTheMoonProto::SVONodeProto::Clear(ToTheMoonProto::SVONodeProto *const this)
{
  google::protobuf::RepeatedField<long>::Clear(&this->neighbors_);
  google::protobuf::RepeatedField<int>::Clear(&this->neighborslevel_);
  google::protobuf::RepeatedField<long>::Clear(&this->planarneighbors_);
  google::protobuf::RepeatedField<int>::Clear(&this->planarneighborslevel_);
  google::protobuf::RepeatedField<long>::Clear(&this->diagonalneighbors_);
  google::protobuf::RepeatedField<int>::Clear(&this->diagonalneighborslevel_);
  memset(&this->mortonindex_, 0, 0x20uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 747: range 0000000018220B62-000000001822195F
bool __cdecl ToTheMoonProto::SVONodeProto::MergePartialFromCodedStream(
        ToTheMoonProto::SVONodeProto *const this,
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
  google::protobuf::RepeatedField<long int> *v13; // rdx
  google::protobuf::RepeatedField<long int> *v14; // rdx
  google::protobuf::RepeatedField<int> *v15; // rdx
  google::protobuf::RepeatedField<int> *v16; // rdx
  google::protobuf::RepeatedField<long int> *v17; // rdx
  google::protobuf::RepeatedField<long int> *v18; // rdx
  google::protobuf::RepeatedField<int> *v19; // rdx
  google::protobuf::RepeatedField<int> *v20; // rdx
  google::protobuf::RepeatedField<long int> *v21; // rdx
  google::protobuf::RepeatedField<long int> *v22; // rdx
  google::protobuf::RepeatedField<int> *v23; // rdx
  google::protobuf::RepeatedField<int> *v24; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v25; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v30[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 5 p:752";
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVONodeProto::MergePartialFromCodedStream;
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
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                  input,
                  &this->area_) )
            goto failure;
          continue;
        case 2:
          if ( (_BYTE)tag != 16 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                  input,
                  &this->mortonindex_) )
            goto failure;
          continue;
        case 3:
          if ( (_BYTE)tag != 24 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                  input,
                  &this->parent_) )
            goto failure;
          continue;
        case 4:
          if ( (_BYTE)tag != 32 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                  input,
                  &this->children_) )
            goto failure;
          continue;
        case 5:
          if ( (_BYTE)tag != 40 )
            goto handle_unusual;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                  input,
                  &this->childnum_) )
            goto failure;
          continue;
        case 6:
          if ( (_BYTE)tag == 50 )
          {
            v13 = ToTheMoonProto::SVONodeProto::mutable_neighbors(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    v13) )
              goto failure;
          }
          else
          {
            if ( (_BYTE)tag != 48 )
              goto handle_unusual;
            v14 = ToTheMoonProto::SVONodeProto::mutable_neighbors(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    1,
                    0x32u,
                    input,
                    v14) )
              goto failure;
          }
          continue;
        case 7:
          if ( (_BYTE)tag == 58 )
          {
            v15 = ToTheMoonProto::SVONodeProto::mutable_neighborslevel(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    input,
                    v15) )
              goto failure;
          }
          else
          {
            if ( (_BYTE)tag != 56 )
              goto handle_unusual;
            v16 = ToTheMoonProto::SVONodeProto::mutable_neighborslevel(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    1,
                    0x3Au,
                    input,
                    v16) )
              goto failure;
          }
          continue;
        case 8:
          if ( (_BYTE)tag == 66 )
          {
            v17 = ToTheMoonProto::SVONodeProto::mutable_planarneighbors(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    v17) )
              goto failure;
          }
          else
          {
            if ( (_BYTE)tag != 64 )
              goto handle_unusual;
            v18 = ToTheMoonProto::SVONodeProto::mutable_planarneighbors(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    1,
                    0x42u,
                    input,
                    v18) )
              goto failure;
          }
          continue;
        case 9:
          if ( (_BYTE)tag == 74 )
          {
            v19 = ToTheMoonProto::SVONodeProto::mutable_planarneighborslevel(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    input,
                    v19) )
              goto failure;
          }
          else
          {
            if ( (_BYTE)tag != 72 )
              goto handle_unusual;
            v20 = ToTheMoonProto::SVONodeProto::mutable_planarneighborslevel(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    1,
                    0x4Au,
                    input,
                    v20) )
              goto failure;
          }
          continue;
        case 10:
          if ( (_BYTE)tag == 82 )
          {
            v21 = ToTheMoonProto::SVONodeProto::mutable_diagonalneighbors(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    input,
                    v21) )
              goto failure;
          }
          else
          {
            if ( (_BYTE)tag != 80 )
              goto handle_unusual;
            v22 = ToTheMoonProto::SVONodeProto::mutable_diagonalneighbors(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<long,(google::protobuf::internal::WireFormatLite::FieldType)3>(
                    1,
                    0x52u,
                    input,
                    v22) )
              goto failure;
          }
          continue;
        case 11:
          if ( (_BYTE)tag == 90 )
          {
            v23 = ToTheMoonProto::SVONodeProto::mutable_diagonalneighborslevel(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    input,
                    v23) )
              goto failure;
          }
          else
          {
            if ( (_BYTE)tag != 88 )
              goto handle_unusual;
            v24 = ToTheMoonProto::SVONodeProto::mutable_diagonalneighborslevel(this);
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    1,
                    0x5Au,
                    input,
                    v24) )
              goto failure;
          }
          break;
        default:
          goto handle_unusual;
      }
    }
handle_unusual:
    if ( !tag )
    {
      result = 1;
      goto LABEL_101;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v25 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v25 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v25->unknown_fields) );
failure:
  result = 0;
LABEL_101:
  if ( v30 == (char *)v2 )
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

// Line 961: range 0000000018221960-0000000018221FEC
void __cdecl ToTheMoonProto::SVONodeProto::SerializeWithCachedSizes(
        const ToTheMoonProto::SVONodeProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int32 v2; // ecx
  google::protobuf::int64 v3; // rcx
  google::protobuf::int64 v4; // rcx
  google::protobuf::int64 v5; // rcx
  google::protobuf::int32 v6; // ecx
  google::protobuf::int64 v7; // rdx
  google::protobuf::int32 v8; // edx
  google::protobuf::int64 v9; // rdx
  google::protobuf::int32 v10; // edx
  google::protobuf::int64 v11; // rdx
  google::protobuf::int32 v12; // edx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v14; // rax
  int i; // [rsp+14h] [rbp-5Ch]
  int i_0; // [rsp+18h] [rbp-58h]
  int i_1; // [rsp+1Ch] [rbp-54h]
  int i_2; // [rsp+20h] [rbp-50h]
  int i_3; // [rsp+24h] [rbp-4Ch]
  int i_4; // [rsp+28h] [rbp-48h]
  int n; // [rsp+30h] [rbp-40h]
  int n_0; // [rsp+34h] [rbp-3Ch]
  int n_1; // [rsp+38h] [rbp-38h]
  int n_2; // [rsp+3Ch] [rbp-34h]
  int n_3; // [rsp+40h] [rbp-30h]
  int n_4; // [rsp+44h] [rbp-2Ch]

  if ( ToTheMoonProto::SVONodeProto::area(this) )
  {
    v2 = ToTheMoonProto::SVONodeProto::area(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(1, v2, output);
  }
  if ( ToTheMoonProto::SVONodeProto::mortonindex(this) )
  {
    v3 = ToTheMoonProto::SVONodeProto::mortonindex(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(2, v3, output);
  }
  if ( ToTheMoonProto::SVONodeProto::parent(this) )
  {
    v4 = ToTheMoonProto::SVONodeProto::parent(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(3, v4, output);
  }
  if ( ToTheMoonProto::SVONodeProto::children(this) )
  {
    v5 = ToTheMoonProto::SVONodeProto::children(this);
    google::protobuf::internal::WireFormatLite::WriteInt64(4, v5, output);
  }
  if ( ToTheMoonProto::SVONodeProto::childnum(this) )
  {
    v6 = ToTheMoonProto::SVONodeProto::childnum(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(5, v6, output);
  }
  if ( ToTheMoonProto::SVONodeProto::neighbors_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(6, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_neighbors_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_neighbors_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_neighbors_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_neighbors_cached_byte_size_);
  }
  i = 0;
  n = ToTheMoonProto::SVONodeProto::neighbors_size(this);
  while ( i < n )
  {
    v7 = ToTheMoonProto::SVONodeProto::neighbors(this, i);
    google::protobuf::internal::WireFormatLite::WriteInt64NoTag(v7, output);
    ++i;
  }
  if ( ToTheMoonProto::SVONodeProto::neighborslevel_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(7, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_neighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_neighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_neighborslevel_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_neighborslevel_cached_byte_size_);
  }
  i_0 = 0;
  n_0 = ToTheMoonProto::SVONodeProto::neighborslevel_size(this);
  while ( i_0 < n_0 )
  {
    v8 = ToTheMoonProto::SVONodeProto::neighborslevel(this, i_0);
    google::protobuf::internal::WireFormatLite::WriteInt32NoTag(v8, output);
    ++i_0;
  }
  if ( ToTheMoonProto::SVONodeProto::planarneighbors_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(8, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_planarneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_planarneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_planarneighbors_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_planarneighbors_cached_byte_size_);
  }
  i_1 = 0;
  n_1 = ToTheMoonProto::SVONodeProto::planarneighbors_size(this);
  while ( i_1 < n_1 )
  {
    v9 = ToTheMoonProto::SVONodeProto::planarneighbors(this, i_1);
    google::protobuf::internal::WireFormatLite::WriteInt64NoTag(v9, output);
    ++i_1;
  }
  if ( ToTheMoonProto::SVONodeProto::planarneighborslevel_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(9, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_planarneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_planarneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_planarneighborslevel_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_planarneighborslevel_cached_byte_size_);
  }
  i_2 = 0;
  n_2 = ToTheMoonProto::SVONodeProto::planarneighborslevel_size(this);
  while ( i_2 < n_2 )
  {
    v10 = ToTheMoonProto::SVONodeProto::planarneighborslevel(this, i_2);
    google::protobuf::internal::WireFormatLite::WriteInt32NoTag(v10, output);
    ++i_2;
  }
  if ( ToTheMoonProto::SVONodeProto::diagonalneighbors_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(10, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_diagonalneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_diagonalneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_diagonalneighbors_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_diagonalneighbors_cached_byte_size_);
  }
  i_3 = 0;
  n_3 = ToTheMoonProto::SVONodeProto::diagonalneighbors_size(this);
  while ( i_3 < n_3 )
  {
    v11 = ToTheMoonProto::SVONodeProto::diagonalneighbors(this, i_3);
    google::protobuf::internal::WireFormatLite::WriteInt64NoTag(v11, output);
    ++i_3;
  }
  if ( ToTheMoonProto::SVONodeProto::diagonalneighborslevel_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(11, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_diagonalneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_diagonalneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_diagonalneighborslevel_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_diagonalneighborslevel_cached_byte_size_);
  }
  i_4 = 0;
  n_4 = ToTheMoonProto::SVONodeProto::diagonalneighborslevel_size(this);
  while ( i_4 < n_4 )
  {
    v12 = ToTheMoonProto::SVONodeProto::diagonalneighborslevel(this, i_4);
    google::protobuf::internal::WireFormatLite::WriteInt32NoTag(v12, output);
    ++i_4;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_65;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_65:
      v14 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v14->unknown_fields, output);
  }
};

// Line 1065: range 0000000018221FEE-00000000182225E3
google::protobuf::uint8 *__cdecl ToTheMoonProto::SVONodeProto::InternalSerializeWithCachedSizesToArray(
        const ToTheMoonProto::SVONodeProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::int32 v3; // ecx
  google::protobuf::int64 v4; // rcx
  google::protobuf::int64 v5; // rcx
  google::protobuf::int64 v6; // rcx
  google::protobuf::int32 v7; // ecx
  google::protobuf::uint8 *v8; // rax
  google::protobuf::uint8 *v9; // rax
  google::protobuf::uint8 *v10; // rax
  google::protobuf::uint8 *v11; // rax
  google::protobuf::uint8 *v12; // rax
  google::protobuf::uint8 *v13; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v15; // rax
  google::protobuf::uint8 *targetb; // [rsp+8h] [rbp-48h]
  google::protobuf::uint8 *targetc; // [rsp+8h] [rbp-48h]
  google::protobuf::uint8 *targetd; // [rsp+8h] [rbp-48h]
  google::protobuf::uint8 *targete; // [rsp+8h] [rbp-48h]
  google::protobuf::uint8 *targetf; // [rsp+8h] [rbp-48h]
  google::protobuf::uint8 *targetg; // [rsp+8h] [rbp-48h]

  if ( ToTheMoonProto::SVONodeProto::area(this) )
  {
    v3 = ToTheMoonProto::SVONodeProto::area(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, v3, target);
  }
  if ( ToTheMoonProto::SVONodeProto::mortonindex(this) )
  {
    v4 = ToTheMoonProto::SVONodeProto::mortonindex(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, v4, target);
  }
  if ( ToTheMoonProto::SVONodeProto::parent(this) )
  {
    v5 = ToTheMoonProto::SVONodeProto::parent(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, v5, target);
  }
  if ( ToTheMoonProto::SVONodeProto::children(this) )
  {
    v6 = ToTheMoonProto::SVONodeProto::children(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, v6, target);
  }
  if ( ToTheMoonProto::SVONodeProto::childnum(this) )
  {
    v7 = ToTheMoonProto::SVONodeProto::childnum(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, v7, target);
  }
  if ( ToTheMoonProto::SVONodeProto::neighbors_size(this) > 0 )
  {
    targetb = google::protobuf::internal::WireFormatLite::WriteTagToArray(6, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_neighbors_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_neighbors_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_neighbors_cached_byte_size_);
    }
    v8 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(this->_neighbors_cached_byte_size_, targetb);
    target = google::protobuf::internal::WireFormatLite::WriteInt64NoTagToArray(&this->neighbors_, v8);
  }
  if ( ToTheMoonProto::SVONodeProto::neighborslevel_size(this) > 0 )
  {
    targetc = google::protobuf::internal::WireFormatLite::WriteTagToArray(7, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_neighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_neighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_neighborslevel_cached_byte_size_);
    }
    v9 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(this->_neighborslevel_cached_byte_size_, targetc);
    target = google::protobuf::internal::WireFormatLite::WriteInt32NoTagToArray(&this->neighborslevel_, v9);
  }
  if ( ToTheMoonProto::SVONodeProto::planarneighbors_size(this) > 0 )
  {
    targetd = google::protobuf::internal::WireFormatLite::WriteTagToArray(8, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_planarneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_planarneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_planarneighbors_cached_byte_size_);
    }
    v10 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
            this->_planarneighbors_cached_byte_size_,
            targetd);
    target = google::protobuf::internal::WireFormatLite::WriteInt64NoTagToArray(&this->planarneighbors_, v10);
  }
  if ( ToTheMoonProto::SVONodeProto::planarneighborslevel_size(this) > 0 )
  {
    targete = google::protobuf::internal::WireFormatLite::WriteTagToArray(9, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_planarneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_planarneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_planarneighborslevel_cached_byte_size_);
    }
    v11 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
            this->_planarneighborslevel_cached_byte_size_,
            targete);
    target = google::protobuf::internal::WireFormatLite::WriteInt32NoTagToArray(&this->planarneighborslevel_, v11);
  }
  if ( ToTheMoonProto::SVONodeProto::diagonalneighbors_size(this) > 0 )
  {
    targetf = google::protobuf::internal::WireFormatLite::WriteTagToArray(10, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_diagonalneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_diagonalneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_diagonalneighbors_cached_byte_size_);
    }
    v12 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
            this->_diagonalneighbors_cached_byte_size_,
            targetf);
    target = google::protobuf::internal::WireFormatLite::WriteInt64NoTagToArray(&this->diagonalneighbors_, v12);
  }
  if ( ToTheMoonProto::SVONodeProto::diagonalneighborslevel_size(this) > 0 )
  {
    targetg = google::protobuf::internal::WireFormatLite::WriteTagToArray(11, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_diagonalneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_diagonalneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_diagonalneighborslevel_cached_byte_size_);
    }
    v13 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
            this->_diagonalneighborslevel_cached_byte_size_,
            targetg);
    target = google::protobuf::internal::WireFormatLite::WriteInt32NoTagToArray(&this->diagonalneighborslevel_, v13);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_47;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_47:
      v15 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v15->unknown_fields, target);
  }
  return target;
};

// Line 1182: range 00000000182225E4-0000000018222BAF
size_t __cdecl ToTheMoonProto::SVONodeProto::ByteSizeLong(const ToTheMoonProto::SVONodeProto *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::int64 v3; // rax
  google::protobuf::int64 v4; // rax
  google::protobuf::int32 v5; // eax
  google::protobuf::int32 v6; // eax
  google::protobuf::int64 v7; // rax
  int cached_size_0; // [rsp+14h] [rbp-7Ch]
  int cached_size_1; // [rsp+18h] [rbp-78h]
  int cached_size_2; // [rsp+1Ch] [rbp-74h]
  int cached_size_3; // [rsp+20h] [rbp-70h]
  int cached_size_4; // [rsp+24h] [rbp-6Ch]
  int cached_size_5; // [rsp+28h] [rbp-68h]
  int cached_size; // [rsp+2Ch] [rbp-64h]
  size_t total_size; // [rsp+30h] [rbp-60h]
  size_t total_sizea; // [rsp+30h] [rbp-60h]
  size_t total_sizeb; // [rsp+30h] [rbp-60h]
  size_t total_sizec; // [rsp+30h] [rbp-60h]
  size_t total_sized; // [rsp+30h] [rbp-60h]
  size_t total_sizee; // [rsp+30h] [rbp-60h]
  size_t total_sizef; // [rsp+30h] [rbp-60h]
  size_t data_size; // [rsp+38h] [rbp-58h]
  size_t data_size_0; // [rsp+40h] [rbp-50h]
  size_t data_size_1; // [rsp+48h] [rbp-48h]
  size_t data_size_2; // [rsp+50h] [rbp-40h]
  size_t data_size_3; // [rsp+58h] [rbp-38h]
  size_t data_size_4; // [rsp+60h] [rbp-30h]

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
  data_size = google::protobuf::internal::WireFormatLite::Int64Size(&this->neighbors_);
  if ( data_size )
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(data_size) + 1;
  cached_size_0 = google::protobuf::internal::ToCachedSize(data_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_neighbors_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_neighbors_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_neighbors_cached_byte_size_);
  }
  this->_neighbors_cached_byte_size_ = cached_size_0;
  total_sizea = data_size + total_size;
  data_size_0 = google::protobuf::internal::WireFormatLite::Int32Size(&this->neighborslevel_);
  if ( data_size_0 )
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(data_size_0) + 1;
  cached_size_1 = google::protobuf::internal::ToCachedSize(data_size_0);
  if ( *(_BYTE *)(((unsigned __int64)&this->_neighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_neighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_neighborslevel_cached_byte_size_);
  }
  this->_neighborslevel_cached_byte_size_ = cached_size_1;
  total_sizeb = data_size_0 + total_sizea;
  data_size_1 = google::protobuf::internal::WireFormatLite::Int64Size(&this->planarneighbors_);
  if ( data_size_1 )
    total_sizeb += google::protobuf::internal::WireFormatLite::Int32Size(data_size_1) + 1;
  cached_size_2 = google::protobuf::internal::ToCachedSize(data_size_1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_planarneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_planarneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_planarneighbors_cached_byte_size_);
  }
  this->_planarneighbors_cached_byte_size_ = cached_size_2;
  total_sizec = data_size_1 + total_sizeb;
  data_size_2 = google::protobuf::internal::WireFormatLite::Int32Size(&this->planarneighborslevel_);
  if ( data_size_2 )
    total_sizec += google::protobuf::internal::WireFormatLite::Int32Size(data_size_2) + 1;
  cached_size_3 = google::protobuf::internal::ToCachedSize(data_size_2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_planarneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_planarneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_planarneighborslevel_cached_byte_size_);
  }
  this->_planarneighborslevel_cached_byte_size_ = cached_size_3;
  total_sized = data_size_2 + total_sizec;
  data_size_3 = google::protobuf::internal::WireFormatLite::Int64Size(&this->diagonalneighbors_);
  if ( data_size_3 )
    total_sized += google::protobuf::internal::WireFormatLite::Int32Size(data_size_3) + 1;
  cached_size_4 = google::protobuf::internal::ToCachedSize(data_size_3);
  if ( *(_BYTE *)(((unsigned __int64)&this->_diagonalneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_diagonalneighbors_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_diagonalneighbors_cached_byte_size_);
  }
  this->_diagonalneighbors_cached_byte_size_ = cached_size_4;
  total_sizee = data_size_3 + total_sized;
  data_size_4 = google::protobuf::internal::WireFormatLite::Int32Size(&this->diagonalneighborslevel_);
  if ( data_size_4 )
    total_sizee += google::protobuf::internal::WireFormatLite::Int32Size(data_size_4) + 1;
  cached_size_5 = google::protobuf::internal::ToCachedSize(data_size_4);
  if ( *(_BYTE *)(((unsigned __int64)&this->_diagonalneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_diagonalneighborslevel_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_diagonalneighborslevel_cached_byte_size_);
  }
  this->_diagonalneighborslevel_cached_byte_size_ = cached_size_5;
  total_sizef = data_size_4 + total_sizee;
  if ( ToTheMoonProto::SVONodeProto::mortonindex(this) )
  {
    v3 = ToTheMoonProto::SVONodeProto::mortonindex(this);
    total_sizef += google::protobuf::internal::WireFormatLite::Int64Size(v3) + 1;
  }
  if ( ToTheMoonProto::SVONodeProto::parent(this) )
  {
    v4 = ToTheMoonProto::SVONodeProto::parent(this);
    total_sizef += google::protobuf::internal::WireFormatLite::Int64Size(v4) + 1;
  }
  if ( ToTheMoonProto::SVONodeProto::area(this) )
  {
    v5 = ToTheMoonProto::SVONodeProto::area(this);
    total_sizef += google::protobuf::internal::WireFormatLite::Int32Size(v5) + 1;
  }
  if ( ToTheMoonProto::SVONodeProto::childnum(this) )
  {
    v6 = ToTheMoonProto::SVONodeProto::childnum(this);
    total_sizef += google::protobuf::internal::WireFormatLite::Int32Size(v6) + 1;
  }
  if ( ToTheMoonProto::SVONodeProto::children(this) )
  {
    v7 = ToTheMoonProto::SVONodeProto::children(this);
    total_sizef += google::protobuf::internal::WireFormatLite::Int64Size(v7) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizef);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizef;
};

// Line 1329: range 0000000018222BB0-0000000018222E39
void __cdecl ToTheMoonProto::SVONodeProto::MergeFrom(
        ToTheMoonProto::SVONodeProto *const this,
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
  const ToTheMoonProto::SVONodeProto *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVONodeProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      1331);
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
  source = google::protobuf::internal::DynamicCastToGenerated<ToTheMoonProto::SVONodeProto const>(from);
  if ( source )
    ToTheMoonProto::SVONodeProto::MergeFrom(this, source);
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

// Line 1344: range 0000000018222E3A-000000001822338D
void __cdecl ToTheMoonProto::SVONodeProto::MergeFrom(
        ToTheMoonProto::SVONodeProto *const this,
        const ToTheMoonProto::SVONodeProto *from)
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
  google::protobuf::int32 v12; // edx
  google::protobuf::int32 v13; // edx
  google::protobuf::int64 v14; // rdx
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVONodeProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      1346);
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
  google::protobuf::RepeatedField<long>::MergeFrom(&this->neighbors_, &from->neighbors_);
  google::protobuf::RepeatedField<int>::MergeFrom(&this->neighborslevel_, &from->neighborslevel_);
  google::protobuf::RepeatedField<long>::MergeFrom(&this->planarneighbors_, &from->planarneighbors_);
  google::protobuf::RepeatedField<int>::MergeFrom(&this->planarneighborslevel_, &from->planarneighborslevel_);
  google::protobuf::RepeatedField<long>::MergeFrom(&this->diagonalneighbors_, &from->diagonalneighbors_);
  google::protobuf::RepeatedField<int>::MergeFrom(&this->diagonalneighborslevel_, &from->diagonalneighborslevel_);
  if ( ToTheMoonProto::SVONodeProto::mortonindex(from) )
  {
    v10 = ToTheMoonProto::SVONodeProto::mortonindex(from);
    ToTheMoonProto::SVONodeProto::set_mortonindex(this, v10);
  }
  if ( ToTheMoonProto::SVONodeProto::parent(from) )
  {
    v11 = ToTheMoonProto::SVONodeProto::parent(from);
    ToTheMoonProto::SVONodeProto::set_parent(this, v11);
  }
  if ( ToTheMoonProto::SVONodeProto::area(from) )
  {
    v12 = ToTheMoonProto::SVONodeProto::area(from);
    ToTheMoonProto::SVONodeProto::set_area(this, v12);
  }
  if ( ToTheMoonProto::SVONodeProto::childnum(from) )
  {
    v13 = ToTheMoonProto::SVONodeProto::childnum(from);
    ToTheMoonProto::SVONodeProto::set_childnum(this, v13);
  }
  if ( ToTheMoonProto::SVONodeProto::children(from) )
  {
    v14 = ToTheMoonProto::SVONodeProto::children(from);
    ToTheMoonProto::SVONodeProto::set_children(this, v14);
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

// Line 1374: range 000000001822338E-00000000182233C8
void __cdecl ToTheMoonProto::SVONodeProto::CopyFrom(
        ToTheMoonProto::SVONodeProto *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVONodeProto::Clear(this);
    ToTheMoonProto::SVONodeProto::MergeFrom(this, from);
  }
};

// Line 1381: range 00000000182233CA-0000000018223404
void __cdecl ToTheMoonProto::SVONodeProto::CopyFrom(
        ToTheMoonProto::SVONodeProto *const this,
        const ToTheMoonProto::SVONodeProto *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVONodeProto::Clear(this);
    ToTheMoonProto::SVONodeProto::MergeFrom(this, from);
  }
};

// Line 1388: range 0000000018223406-0000000018223414
bool __cdecl ToTheMoonProto::SVONodeProto::IsInitialized(const ToTheMoonProto::SVONodeProto *const this)
{
  return 1;
};

// Line 1392: range 0000000018223416-0000000018223444
void __cdecl ToTheMoonProto::SVONodeProto::Swap(
        ToTheMoonProto::SVONodeProto *const this,
        ToTheMoonProto::SVONodeProto *other)
{
  if ( other != this )
    ToTheMoonProto::SVONodeProto::InternalSwap(this, other);
};

// Line 1396: range 0000000018223446-00000000182236FB
void __cdecl ToTheMoonProto::SVONodeProto::InternalSwap(
        ToTheMoonProto::SVONodeProto *const this,
        ToTheMoonProto::SVONodeProto *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::RepeatedField<long>::InternalSwap(&this->neighbors_, &other->neighbors_);
  google::protobuf::RepeatedField<int>::InternalSwap(&this->neighborslevel_, &other->neighborslevel_);
  google::protobuf::RepeatedField<long>::InternalSwap(&this->planarneighbors_, &other->planarneighbors_);
  google::protobuf::RepeatedField<int>::InternalSwap(&this->planarneighborslevel_, &other->planarneighborslevel_);
  google::protobuf::RepeatedField<long>::InternalSwap(&this->diagonalneighbors_, &other->diagonalneighbors_);
  google::protobuf::RepeatedField<int>::InternalSwap(&this->diagonalneighborslevel_, &other->diagonalneighborslevel_);
  std::swap<long>(&this->mortonindex_, &other->mortonindex_);
  std::swap<long>(&this->parent_, &other->parent_);
  std::swap<int>(&this->area_, &other->area_);
  std::swap<int>(&this->childnum_, &other->childnum_);
  std::swap<long>(&this->children_, &other->children_);
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

// Line 1413: range 00000000182236FC-000000001822371C
google::protobuf::Metadata __cdecl ToTheMoonProto::SVONodeProto::GetMetadata(
        const ToTheMoonProto::SVONodeProto *const this)
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[1];
};

// Line 1680: range 000000001822371E-0000000018223802
void __cdecl ToTheMoonProto::SVOLayerProto::SVOLayerProto(ToTheMoonProto::SVOLayerProto *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOLayerProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto>::RepeatedPtrField(&this->nodedata_);
  if ( this != ToTheMoonProto::SVOLayerProto::internal_default_instance() )
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  ToTheMoonProto::SVOLayerProto::SharedCtor(this);
};

// Line 1688: range 0000000018223804-0000000018223A65
void __cdecl ToTheMoonProto::SVOLayerProto::SVOLayerProto(
        ToTheMoonProto::SVOLayerProto *const this,
        const ToTheMoonProto::SVOLayerProto *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::int32 level; // ecx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOLayerProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto>::RepeatedPtrField(&this->nodedata_, &from->nodedata_);
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
  if ( *(_BYTE *)(((unsigned __int64)&from->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&from->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&from->level_);
  }
  level = from->level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = level;
};

// Line 1698: range 0000000018223A66-0000000018223AF8
void __cdecl ToTheMoonProto::SVOLayerProto::SharedCtor(ToTheMoonProto::SVOLayerProto *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 1703: range 0000000018223AFA-0000000018223B73
void __cdecl ToTheMoonProto::SVOLayerProto::~SVOLayerProto(ToTheMoonProto::SVOLayerProto *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOLayerProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  ToTheMoonProto::SVOLayerProto::SharedDtor(this);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto>::~RepeatedPtrField(&this->nodedata_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 1703: range 0000000018223B74-0000000018223B9E
void __cdecl ToTheMoonProto::SVOLayerProto::~SVOLayerProto(ToTheMoonProto::SVOLayerProto *const this)
{
  ToTheMoonProto::SVOLayerProto::~SVOLayerProto(this);
  operator delete(this, 0x30uLL);
};

// Line 1708: range 0000000018223BA0-0000000018223BAA
void __cdecl ToTheMoonProto::SVOLayerProto::SharedDtor(ToTheMoonProto::SVOLayerProto *const this)
{
  ;
};

// Line 1711: range 0000000018223BAC-0000000018223C02
void __cdecl ToTheMoonProto::SVOLayerProto::SetCachedSize(const ToTheMoonProto::SVOLayerProto *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 1716: range 0000000018223C04-0000000018223C15
const google::protobuf::Descriptor *__cdecl ToTheMoonProto::SVOLayerProto::descriptor()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[2].descriptor;
};

// Line 1721: range 0000000018223C16-0000000018223C25
const ToTheMoonProto::SVOLayerProto *__cdecl ToTheMoonProto::SVOLayerProto::default_instance()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  return ToTheMoonProto::SVOLayerProto::internal_default_instance();
};

// Line 1726: range 0000000018223C26-0000000018223C9A
ToTheMoonProto::SVOLayerProto *__cdecl ToTheMoonProto::SVOLayerProto::New(
        const ToTheMoonProto::SVOLayerProto *const this,
        google::protobuf::Arena *arena)
{
  ToTheMoonProto::SVOLayerProto *v2; // rbx

  v2 = (ToTheMoonProto::SVOLayerProto *)operator new(0x30uLL);
  ToTheMoonProto::SVOLayerProto::SVOLayerProto(v2);
  if ( arena )
    google::protobuf::Arena::Own<ToTheMoonProto::SVOLayerProto>(arena, v2);
  return v2;
};

// Line 1734: range 0000000018223C9C-0000000018223D5D
void __cdecl ToTheMoonProto::SVOLayerProto::Clear(ToTheMoonProto::SVOLayerProto *const this)
{
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto>::Clear(&this->nodedata_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 1746: range 0000000018223D5E-000000001822469B
bool __cdecl ToTheMoonProto::SVOLayerProto::MergePartialFromCodedStream(
        ToTheMoonProto::SVOLayerProto *const this,
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
  ToTheMoonProto::SVONodeProto *v14; // rdx
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:1751";
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOLayerProto::MergePartialFromCodedStream;
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
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                input,
                &this->level_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber != 2 || (_BYTE)tag != 18 )
          break;
        v14 = ToTheMoonProto::SVOLayerProto::add_nodedata(this);
        if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<ToTheMoonProto::SVONodeProto>(input, v14) )
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
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v15 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v15->unknown_fields) );
failure:
  result = 0;
LABEL_49:
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

// Line 1802: range 000000001822469C-0000000018224829
void __cdecl ToTheMoonProto::SVOLayerProto::SerializeWithCachedSizes(
        const ToTheMoonProto::SVOLayerProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int32 v2; // ecx
  const ToTheMoonProto::SVONodeProto *v3; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax
  unsigned int i; // [rsp+1Ch] [rbp-34h]
  unsigned int n; // [rsp+24h] [rbp-2Ch]

  if ( ToTheMoonProto::SVOLayerProto::level(this) )
  {
    v2 = ToTheMoonProto::SVOLayerProto::level(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(1, v2, output);
  }
  i = 0;
  n = ToTheMoonProto::SVOLayerProto::nodedata_size(this);
  while ( i < n )
  {
    v3 = ToTheMoonProto::SVOLayerProto::nodedata(this, i);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(2, v3, output);
    ++i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_18;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_18:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v5->unknown_fields, output);
  }
};

// Line 1827: range 000000001822482A-00000000182249D4
google::protobuf::uint8 *__cdecl ToTheMoonProto::SVOLayerProto::InternalSerializeWithCachedSizesToArray(
        const ToTheMoonProto::SVOLayerProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::int32 v3; // ecx
  const ToTheMoonProto::SVONodeProto *v4; // rsi
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax
  unsigned int i; // [rsp+2Ch] [rbp-44h]
  unsigned int n; // [rsp+34h] [rbp-3Ch]

  if ( ToTheMoonProto::SVOLayerProto::level(this) )
  {
    v3 = ToTheMoonProto::SVOLayerProto::level(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, v3, target);
  }
  i = 0;
  n = ToTheMoonProto::SVOLayerProto::nodedata_size(this);
  while ( i < n )
  {
    v4 = ToTheMoonProto::SVOLayerProto::nodedata(this, i);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<ToTheMoonProto::SVONodeProto>(
               2,
               v4,
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
      goto LABEL_18;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_18:
      v6 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v6->unknown_fields, target);
  }
  return target;
};

// Line 1854: range 00000000182249D6-0000000018224BAA
size_t __cdecl ToTheMoonProto::SVOLayerProto::ByteSizeLong(const ToTheMoonProto::SVOLayerProto *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const ToTheMoonProto::SVONodeProto *v3; // rax
  google::protobuf::int32 v4; // eax
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
  count = ToTheMoonProto::SVOLayerProto::nodedata_size(this);
  total_sizea = count + total_size;
  for ( i = 0; i < count; ++i )
  {
    v3 = ToTheMoonProto::SVOLayerProto::nodedata(this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<ToTheMoonProto::SVONodeProto>(v3);
  }
  if ( ToTheMoonProto::SVOLayerProto::level(this) )
  {
    v4 = ToTheMoonProto::SVOLayerProto::level(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(v4) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizea);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizea;
};

// Line 1888: range 0000000018224BAC-0000000018224E35
void __cdecl ToTheMoonProto::SVOLayerProto::MergeFrom(
        ToTheMoonProto::SVOLayerProto *const this,
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
  const ToTheMoonProto::SVOLayerProto *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOLayerProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      1890);
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
  source = google::protobuf::internal::DynamicCastToGenerated<ToTheMoonProto::SVOLayerProto const>(from);
  if ( source )
    ToTheMoonProto::SVOLayerProto::MergeFrom(this, source);
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

// Line 1903: range 0000000018224E36-00000000182251EE
void __cdecl ToTheMoonProto::SVOLayerProto::MergeFrom(
        ToTheMoonProto::SVOLayerProto *const this,
        const ToTheMoonProto::SVOLayerProto *from)
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOLayerProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      1905);
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
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto>::MergeFrom(&this->nodedata_, &from->nodedata_);
  if ( ToTheMoonProto::SVOLayerProto::level(from) )
  {
    v10 = ToTheMoonProto::SVOLayerProto::level(from);
    ToTheMoonProto::SVOLayerProto::set_level(this, v10);
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

// Line 1916: range 00000000182251F0-000000001822522A
void __cdecl ToTheMoonProto::SVOLayerProto::CopyFrom(
        ToTheMoonProto::SVOLayerProto *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVOLayerProto::Clear(this);
    ToTheMoonProto::SVOLayerProto::MergeFrom(this, from);
  }
};

// Line 1923: range 000000001822522C-0000000018225266
void __cdecl ToTheMoonProto::SVOLayerProto::CopyFrom(
        ToTheMoonProto::SVOLayerProto *const this,
        const ToTheMoonProto::SVOLayerProto *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVOLayerProto::Clear(this);
    ToTheMoonProto::SVOLayerProto::MergeFrom(this, from);
  }
};

// Line 1930: range 0000000018225268-0000000018225276
bool __cdecl ToTheMoonProto::SVOLayerProto::IsInitialized(const ToTheMoonProto::SVOLayerProto *const this)
{
  return 1;
};

// Line 1934: range 0000000018225278-00000000182252A6
void __cdecl ToTheMoonProto::SVOLayerProto::Swap(
        ToTheMoonProto::SVOLayerProto *const this,
        ToTheMoonProto::SVOLayerProto *other)
{
  if ( other != this )
    ToTheMoonProto::SVOLayerProto::InternalSwap(this, other);
};

// Line 1938: range 00000000182252A8-0000000018225447
void __cdecl ToTheMoonProto::SVOLayerProto::InternalSwap(
        ToTheMoonProto::SVOLayerProto *const this,
        ToTheMoonProto::SVOLayerProto *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(&this->nodedata_, &other->nodedata_);
  std::swap<int>(&this->level_, &other->level_);
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

// Line 1946: range 0000000018225448-0000000018225468
google::protobuf::Metadata __cdecl ToTheMoonProto::SVOLayerProto::GetMetadata(
        const ToTheMoonProto::SVOLayerProto *const this)
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[2];
};

// Line 2008: range 000000001822546A-000000001822556E
void __cdecl ToTheMoonProto::SVOStructureProto::SVOStructureProto(ToTheMoonProto::SVOStructureProto *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOStructureProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::RepeatedPtrField(&this->layerdata_);
  google::protobuf::RepeatedField<int>::RepeatedField(&this->totalindex_);
  if ( this != ToTheMoonProto::SVOStructureProto::internal_default_instance() )
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  ToTheMoonProto::SVOStructureProto::SharedCtor(this);
};

// Line 2016: range 0000000018225570-0000000018225855
void __cdecl ToTheMoonProto::SVOStructureProto::SVOStructureProto(
        ToTheMoonProto::SVOStructureProto *const this,
        const ToTheMoonProto::SVOStructureProto *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  ToTheMoonProto::Pos *v4; // rbx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOStructureProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::RepeatedPtrField(
    &this->layerdata_,
    &from->layerdata_);
  google::protobuf::RepeatedField<int>::RepeatedField(&this->totalindex_, &from->totalindex_);
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
  if ( ToTheMoonProto::SVOStructureProto::has_basepos(from) )
  {
    v4 = (ToTheMoonProto::Pos *)operator new(0x20uLL);
    if ( *(_BYTE *)(((unsigned __int64)&from->basepos_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->basepos_);
    ToTheMoonProto::Pos::Pos(v4, from->basepos_);
    if ( *(_BYTE *)(((unsigned __int64)&this->basepos_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->basepos_ = v4;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->basepos_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->basepos_ = 0LL;
  }
};

// Line 2031: range 0000000018225856-00000000182258D3
void __cdecl ToTheMoonProto::SVOStructureProto::SharedCtor(ToTheMoonProto::SVOStructureProto *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->basepos_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->basepos_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 2036: range 00000000182258D4-000000001822595D
void __cdecl ToTheMoonProto::SVOStructureProto::~SVOStructureProto(ToTheMoonProto::SVOStructureProto *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOStructureProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  ToTheMoonProto::SVOStructureProto::SharedDtor(this);
  google::protobuf::RepeatedField<int>::~RepeatedField(&this->totalindex_);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::~RepeatedPtrField(&this->layerdata_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 2036: range 000000001822595E-0000000018225988
void __cdecl ToTheMoonProto::SVOStructureProto::~SVOStructureProto(ToTheMoonProto::SVOStructureProto *const this)
{
  ToTheMoonProto::SVOStructureProto::~SVOStructureProto(this);
  operator delete(this, 0x50uLL);
};

// Line 2041: range 000000001822598A-0000000018225A2E
void __cdecl ToTheMoonProto::SVOStructureProto::SharedDtor(ToTheMoonProto::SVOStructureProto *const this)
{
  unsigned __int64 basepos; // rax
  unsigned __int64 v2; // rdx

  if ( this != ToTheMoonProto::SVOStructureProto::internal_default_instance() )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->basepos_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->basepos_);
    basepos = (unsigned __int64)this->basepos_;
    if ( basepos )
    {
      if ( *(_BYTE *)((basepos >> 3) + 0x7FFF8000) )
        basepos = __asan_report_load8(basepos);
      v2 = *(_QWORD *)basepos + 8LL;
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        basepos = __asan_report_load8(*(_QWORD *)basepos + 8LL);
      (*(void (__fastcall **)(unsigned __int64))v2)(basepos);
    }
  }
};

// Line 2045: range 0000000018225A30-0000000018225A7E
void __cdecl ToTheMoonProto::SVOStructureProto::SetCachedSize(
        const ToTheMoonProto::SVOStructureProto *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 2050: range 0000000018225A80-0000000018225A91
const google::protobuf::Descriptor *__cdecl ToTheMoonProto::SVOStructureProto::descriptor()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 2055: range 0000000018225A92-0000000018225AA1
const ToTheMoonProto::SVOStructureProto *__cdecl ToTheMoonProto::SVOStructureProto::default_instance()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  return ToTheMoonProto::SVOStructureProto::internal_default_instance();
};

// Line 2060: range 0000000018225AA2-0000000018225B16
ToTheMoonProto::SVOStructureProto *__cdecl ToTheMoonProto::SVOStructureProto::New(
        const ToTheMoonProto::SVOStructureProto *const this,
        google::protobuf::Arena *arena)
{
  ToTheMoonProto::SVOStructureProto *v2; // rbx

  v2 = (ToTheMoonProto::SVOStructureProto *)operator new(0x50uLL);
  ToTheMoonProto::SVOStructureProto::SVOStructureProto(v2);
  if ( arena )
    google::protobuf::Arena::Own<ToTheMoonProto::SVOStructureProto>(arena, v2);
  return v2;
};

// Line 2068: range 0000000018225B18-0000000018225CB5
void __cdecl ToTheMoonProto::SVOStructureProto::Clear(ToTheMoonProto::SVOStructureProto *const this)
{
  char v1; // al
  unsigned __int64 basepos; // rax
  unsigned __int64 v3; // rdx

  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::Clear(&this->layerdata_);
  google::protobuf::RepeatedField<int>::Clear(&this->totalindex_);
  if ( ToTheMoonProto::SVOStructureProto::GetArenaNoVirtual(this) )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&this->basepos_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->basepos_);
  if ( !this->basepos_ )
LABEL_6:
    v1 = 0;
  else
    v1 = 1;
  if ( v1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->basepos_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->basepos_);
    basepos = (unsigned __int64)this->basepos_;
    if ( basepos )
    {
      if ( *(_BYTE *)((basepos >> 3) + 0x7FFF8000) )
        basepos = __asan_report_load8(basepos);
      v3 = *(_QWORD *)basepos + 8LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        basepos = __asan_report_load8(*(_QWORD *)basepos + 8LL);
      (*(void (__fastcall **)(unsigned __int64))v3)(basepos);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->basepos_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->basepos_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 2084: range 0000000018225CB6-00000000182266AF
bool __cdecl ToTheMoonProto::SVOStructureProto::MergePartialFromCodedStream(
        ToTheMoonProto::SVOStructureProto *const this,
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
  ToTheMoonProto::Pos *v14; // rdx
  ToTheMoonProto::SVOLayerProto *v15; // rdx
  google::protobuf::RepeatedField<int> *v16; // rdx
  google::protobuf::RepeatedField<int> *v17; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v18; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v23[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:2089";
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOStructureProto::MergePartialFromCodedStream;
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
        if ( (_BYTE)tag == 26 )
        {
          v16 = ToTheMoonProto::SVOStructureProto::mutable_totalindex(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                  input,
                  v16) )
            goto failure;
        }
        else
        {
          if ( (_BYTE)tag != 24 )
            break;
          v17 = ToTheMoonProto::SVOStructureProto::mutable_totalindex(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                  1,
                  0x1Au,
                  input,
                  v17) )
            goto failure;
        }
      }
      else
      {
        if ( TagFieldNumber > 3 )
          break;
        if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 10 )
            break;
          v14 = ToTheMoonProto::SVOStructureProto::mutable_basepos(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<ToTheMoonProto::Pos>(input, v14) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 18 )
            break;
          v15 = ToTheMoonProto::SVOStructureProto::add_layerdata(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<ToTheMoonProto::SVOLayerProto>(
                  input,
                  v15) )
            goto failure;
        }
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_58;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v18 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v18 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v18->unknown_fields) );
failure:
  result = 0;
LABEL_58:
  if ( v23 == (char *)v2 )
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

// Line 2157: range 00000000182266B0-0000000018226915
void __cdecl ToTheMoonProto::SVOStructureProto::SerializeWithCachedSizes(
        const ToTheMoonProto::SVOStructureProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const ToTheMoonProto::SVOLayerProto *v2; // rcx
  google::protobuf::int32 v3; // edx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax
  unsigned int i; // [rsp+14h] [rbp-3Ch]
  int i_0; // [rsp+18h] [rbp-38h]
  unsigned int n; // [rsp+20h] [rbp-30h]
  int n_0; // [rsp+24h] [rbp-2Ch]

  if ( ToTheMoonProto::SVOStructureProto::has_basepos(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->basepos_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->basepos_);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(1, this->basepos_, output);
  }
  i = 0;
  n = ToTheMoonProto::SVOStructureProto::layerdata_size(this);
  while ( i < n )
  {
    v2 = ToTheMoonProto::SVOStructureProto::layerdata(this, i);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(2, v2, output);
    ++i;
  }
  if ( ToTheMoonProto::SVOStructureProto::totalindex_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(3, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_totalindex_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_totalindex_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_totalindex_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_totalindex_cached_byte_size_);
  }
  i_0 = 0;
  n_0 = ToTheMoonProto::SVOStructureProto::totalindex_size(this);
  while ( i_0 < n_0 )
  {
    v3 = ToTheMoonProto::SVOStructureProto::totalindex(this, i_0);
    google::protobuf::internal::WireFormatLite::WriteInt32NoTag(v3, output);
    ++i_0;
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
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_27:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v5->unknown_fields, output);
  }
};

// Line 2194: range 0000000018226916-0000000018226B78
google::protobuf::uint8 *__cdecl ToTheMoonProto::SVOStructureProto::InternalSerializeWithCachedSizesToArray(
        const ToTheMoonProto::SVOStructureProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  bool v3; // dl
  const ToTheMoonProto::SVOLayerProto *v4; // rsi
  google::protobuf::uint8 *v5; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax
  google::protobuf::uint8 *targetb; // [rsp+8h] [rbp-68h]
  unsigned int i; // [rsp+2Ch] [rbp-44h]
  unsigned int n; // [rsp+34h] [rbp-3Ch]

  if ( ToTheMoonProto::SVOStructureProto::has_basepos(this) )
  {
    v3 = deterministic;
    if ( *(_BYTE *)(((unsigned __int64)&this->basepos_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->basepos_);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<ToTheMoonProto::Pos>(
               1,
               this->basepos_,
               v3,
               target);
  }
  i = 0;
  n = ToTheMoonProto::SVOStructureProto::layerdata_size(this);
  while ( i < n )
  {
    v4 = ToTheMoonProto::SVOStructureProto::layerdata(this, i);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<ToTheMoonProto::SVOLayerProto>(
               2,
               v4,
               deterministic,
               target);
    ++i;
  }
  if ( ToTheMoonProto::SVOStructureProto::totalindex_size(this) > 0 )
  {
    targetb = google::protobuf::internal::WireFormatLite::WriteTagToArray(3, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_totalindex_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_totalindex_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_totalindex_cached_byte_size_);
    }
    v5 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(this->_totalindex_cached_byte_size_, targetb);
    target = google::protobuf::internal::WireFormatLite::WriteInt32NoTagToArray(&this->totalindex_, v5);
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
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_24:
      v7 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v7->unknown_fields, target);
  }
  return target;
};

// Line 2236: range 0000000018226B7A-0000000018226DE5
size_t __cdecl ToTheMoonProto::SVOStructureProto::ByteSizeLong(const ToTheMoonProto::SVOStructureProto *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const ToTheMoonProto::SVOLayerProto *v3; // rax
  unsigned int i; // [rsp+18h] [rbp-48h]
  unsigned int count; // [rsp+1Ch] [rbp-44h]
  int cached_size_0; // [rsp+20h] [rbp-40h]
  int cached_size; // [rsp+24h] [rbp-3Ch]
  size_t total_size; // [rsp+28h] [rbp-38h]
  size_t total_sizea; // [rsp+28h] [rbp-38h]
  size_t total_sizeb; // [rsp+28h] [rbp-38h]
  size_t data_size; // [rsp+30h] [rbp-30h]

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
  count = ToTheMoonProto::SVOStructureProto::layerdata_size(this);
  total_sizea = count + total_size;
  for ( i = 0; i < count; ++i )
  {
    v3 = ToTheMoonProto::SVOStructureProto::layerdata(this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<ToTheMoonProto::SVOLayerProto>(v3);
  }
  data_size = google::protobuf::internal::WireFormatLite::Int32Size(&this->totalindex_);
  if ( data_size )
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(data_size) + 1;
  cached_size_0 = google::protobuf::internal::ToCachedSize(data_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_totalindex_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_totalindex_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_totalindex_cached_byte_size_);
  }
  this->_totalindex_cached_byte_size_ = cached_size_0;
  total_sizeb = data_size + total_sizea;
  if ( ToTheMoonProto::SVOStructureProto::has_basepos(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->basepos_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->basepos_);
    total_sizeb += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<ToTheMoonProto::Pos>(this->basepos_)
                 + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizeb);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizeb;
};

// Line 2286: range 0000000018226DE6-000000001822706F
void __cdecl ToTheMoonProto::SVOStructureProto::MergeFrom(
        ToTheMoonProto::SVOStructureProto *const this,
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
  const ToTheMoonProto::SVOStructureProto *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOStructureProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      2288);
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
  source = google::protobuf::internal::DynamicCastToGenerated<ToTheMoonProto::SVOStructureProto const>(from);
  if ( source )
    ToTheMoonProto::SVOStructureProto::MergeFrom(this, source);
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

// Line 2301: range 0000000018227070-000000001822744E
void __cdecl ToTheMoonProto::SVOStructureProto::MergeFrom(
        ToTheMoonProto::SVOStructureProto *const this,
        const ToTheMoonProto::SVOStructureProto *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  ToTheMoonProto::Pos *v10; // r13
  const ToTheMoonProto::Pos *v11; // rax
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOStructureProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      2303);
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
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::MergeFrom(&this->layerdata_, &from->layerdata_);
  google::protobuf::RepeatedField<int>::MergeFrom(&this->totalindex_, &from->totalindex_);
  if ( ToTheMoonProto::SVOStructureProto::has_basepos(from) )
  {
    v10 = ToTheMoonProto::SVOStructureProto::mutable_basepos(this);
    v11 = ToTheMoonProto::SVOStructureProto::basepos(from);
    ToTheMoonProto::Pos::MergeFrom(v10, v11);
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

// Line 2315: range 0000000018227450-000000001822748A
void __cdecl ToTheMoonProto::SVOStructureProto::CopyFrom(
        ToTheMoonProto::SVOStructureProto *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVOStructureProto::Clear(this);
    ToTheMoonProto::SVOStructureProto::MergeFrom(this, from);
  }
};

// Line 2322: range 000000001822748C-00000000182274C6
void __cdecl ToTheMoonProto::SVOStructureProto::CopyFrom(
        ToTheMoonProto::SVOStructureProto *const this,
        const ToTheMoonProto::SVOStructureProto *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVOStructureProto::Clear(this);
    ToTheMoonProto::SVOStructureProto::MergeFrom(this, from);
  }
};

// Line 2329: range 00000000182274C8-00000000182274D6
bool __cdecl ToTheMoonProto::SVOStructureProto::IsInitialized(const ToTheMoonProto::SVOStructureProto *const this)
{
  return 1;
};

// Line 2333: range 00000000182274D8-0000000018227506
void __cdecl ToTheMoonProto::SVOStructureProto::Swap(
        ToTheMoonProto::SVOStructureProto *const this,
        ToTheMoonProto::SVOStructureProto *other)
{
  if ( other != this )
    ToTheMoonProto::SVOStructureProto::InternalSwap(this, other);
};

// Line 2337: range 0000000018227508-00000000182276C2
void __cdecl ToTheMoonProto::SVOStructureProto::InternalSwap(
        ToTheMoonProto::SVOStructureProto *const this,
        ToTheMoonProto::SVOStructureProto *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(&this->layerdata_, &other->layerdata_);
  google::protobuf::RepeatedField<int>::InternalSwap(&this->totalindex_, &other->totalindex_);
  std::swap<ToTheMoonProto::Pos *>(&this->basepos_, &other->basepos_);
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

// Line 2346: range 00000000182276C4-00000000182276E4
google::protobuf::Metadata __cdecl ToTheMoonProto::SVOStructureProto::GetMetadata(
        const ToTheMoonProto::SVOStructureProto *const this)
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[3];
};

// Line 2464: range 00000000182276E6-00000000182277C5
void __cdecl ToTheMoonProto::SVOBlockProto::SVOBlockProto(ToTheMoonProto::SVOBlockProto *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOBlockProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<int>::RepeatedField(&this->blockindex_);
  if ( this != ToTheMoonProto::SVOBlockProto::internal_default_instance() )
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  ToTheMoonProto::SVOBlockProto::SharedCtor(this);
};

// Line 2472: range 00000000182277C6-0000000018227AF5
void __cdecl ToTheMoonProto::SVOBlockProto::SVOBlockProto(
        ToTheMoonProto::SVOBlockProto *const this,
        const ToTheMoonProto::SVOBlockProto *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  ToTheMoonProto::SVOStructureProto *v4; // rbx
  google::protobuf::int32 sceneid; // ecx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOBlockProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedField<int>::RepeatedField(&this->blockindex_, &from->blockindex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
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
  if ( ToTheMoonProto::SVOBlockProto::has_svo(from) )
  {
    v4 = (ToTheMoonProto::SVOStructureProto *)operator new(0x50uLL);
    if ( *(_BYTE *)(((unsigned __int64)&from->svo_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->svo_);
    ToTheMoonProto::SVOStructureProto::SVOStructureProto(v4, from->svo_);
    if ( *(_BYTE *)(((unsigned __int64)&this->svo_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->svo_ = v4;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->svo_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->svo_ = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&from->sceneid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&from->sceneid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&from->sceneid_);
  }
  sceneid = from->sceneid_;
  if ( *(_BYTE *)(((unsigned __int64)&this->sceneid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sceneid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sceneid_);
  }
  this->sceneid_ = sceneid;
};

// Line 2487: range 0000000018227AF6-0000000018227B64
void __cdecl ToTheMoonProto::SVOBlockProto::SharedCtor(ToTheMoonProto::SVOBlockProto *const this)
{
  memset(&this->svo_, 0, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 2494: range 0000000018227B66-0000000018227BDF
void __cdecl ToTheMoonProto::SVOBlockProto::~SVOBlockProto(ToTheMoonProto::SVOBlockProto *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOBlockProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  ToTheMoonProto::SVOBlockProto::SharedDtor(this);
  google::protobuf::RepeatedField<int>::~RepeatedField(&this->blockindex_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 2494: range 0000000018227BE0-0000000018227C0A
void __cdecl ToTheMoonProto::SVOBlockProto::~SVOBlockProto(ToTheMoonProto::SVOBlockProto *const this)
{
  ToTheMoonProto::SVOBlockProto::~SVOBlockProto(this);
  operator delete(this, 0x38uLL);
};

// Line 2499: range 0000000018227C0C-0000000018227CB0
void __cdecl ToTheMoonProto::SVOBlockProto::SharedDtor(ToTheMoonProto::SVOBlockProto *const this)
{
  unsigned __int64 svo; // rax
  unsigned __int64 v2; // rdx

  if ( this != ToTheMoonProto::SVOBlockProto::internal_default_instance() )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->svo_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->svo_);
    svo = (unsigned __int64)this->svo_;
    if ( svo )
    {
      if ( *(_BYTE *)((svo >> 3) + 0x7FFF8000) )
        svo = __asan_report_load8(svo);
      v2 = *(_QWORD *)svo + 8LL;
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        svo = __asan_report_load8(*(_QWORD *)svo + 8LL);
      (*(void (__fastcall **)(unsigned __int64))v2)(svo);
    }
  }
};

// Line 2503: range 0000000018227CB2-0000000018227D08
void __cdecl ToTheMoonProto::SVOBlockProto::SetCachedSize(const ToTheMoonProto::SVOBlockProto *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 2508: range 0000000018227D0A-0000000018227D1B
const google::protobuf::Descriptor *__cdecl ToTheMoonProto::SVOBlockProto::descriptor()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[4].descriptor;
};

// Line 2513: range 0000000018227D1C-0000000018227D2B
const ToTheMoonProto::SVOBlockProto *__cdecl ToTheMoonProto::SVOBlockProto::default_instance()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  return ToTheMoonProto::SVOBlockProto::internal_default_instance();
};

// Line 2518: range 0000000018227D2C-0000000018227DA0
ToTheMoonProto::SVOBlockProto *__cdecl ToTheMoonProto::SVOBlockProto::New(
        const ToTheMoonProto::SVOBlockProto *const this,
        google::protobuf::Arena *arena)
{
  ToTheMoonProto::SVOBlockProto *v2; // rbx

  v2 = (ToTheMoonProto::SVOBlockProto *)operator new(0x38uLL);
  ToTheMoonProto::SVOBlockProto::SVOBlockProto(v2);
  if ( arena )
    google::protobuf::Arena::Own<ToTheMoonProto::SVOBlockProto>(arena, v2);
  return v2;
};

// Line 2526: range 0000000018227DA2-0000000018227F6D
void __cdecl ToTheMoonProto::SVOBlockProto::Clear(ToTheMoonProto::SVOBlockProto *const this)
{
  char v1; // al
  unsigned __int64 svo; // rax
  unsigned __int64 v3; // rdx

  google::protobuf::RepeatedField<int>::Clear(&this->blockindex_);
  if ( ToTheMoonProto::SVOBlockProto::GetArenaNoVirtual(this) )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&this->svo_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->svo_);
  if ( !this->svo_ )
LABEL_6:
    v1 = 0;
  else
    v1 = 1;
  if ( v1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->svo_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->svo_);
    svo = (unsigned __int64)this->svo_;
    if ( svo )
    {
      if ( *(_BYTE *)((svo >> 3) + 0x7FFF8000) )
        svo = __asan_report_load8(svo);
      v3 = *(_QWORD *)svo + 8LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        svo = __asan_report_load8(*(_QWORD *)svo + 8LL);
      (*(void (__fastcall **)(unsigned __int64))v3)(svo);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->svo_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->svo_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->sceneid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sceneid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sceneid_);
  }
  this->sceneid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 2542: range 0000000018227F6E-0000000018228960
bool __cdecl ToTheMoonProto::SVOBlockProto::MergePartialFromCodedStream(
        ToTheMoonProto::SVOBlockProto *const this,
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
  ToTheMoonProto::SVOStructureProto *v14; // rdx
  google::protobuf::RepeatedField<int> *v15; // rdx
  google::protobuf::RepeatedField<int> *v16; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v17; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v22[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:2547";
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOBlockProto::MergePartialFromCodedStream;
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
        if ( (_BYTE)tag == 26 )
        {
          v15 = ToTheMoonProto::SVOBlockProto::mutable_blockindex(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                  input,
                  v15) )
            goto failure;
        }
        else
        {
          if ( (_BYTE)tag != 24 )
            break;
          v16 = ToTheMoonProto::SVOBlockProto::mutable_blockindex(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                  1,
                  0x1Au,
                  input,
                  v16) )
            goto failure;
        }
      }
      else
      {
        if ( TagFieldNumber > 3 )
          break;
        if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 10 )
            break;
          v14 = ToTheMoonProto::SVOBlockProto::mutable_svo(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<ToTheMoonProto::SVOStructureProto>(
                  input,
                  v14) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                  input,
                  &this->sceneid_) )
            goto failure;
        }
      }
    }
    if ( !tag )
    {
      result = 1;
      goto LABEL_58;
    }
    p_internal_metadata = &this->_internal_metadata_;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v17 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v17 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v17->unknown_fields) );
failure:
  result = 0;
LABEL_58:
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
  return result;
};

// Line 2617: range 0000000018228962-0000000018228BB1
void __cdecl ToTheMoonProto::SVOBlockProto::SerializeWithCachedSizes(
        const ToTheMoonProto::SVOBlockProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int32 v2; // ecx
  google::protobuf::int32 v3; // edx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax
  int i; // [rsp+1Ch] [rbp-34h]
  int n; // [rsp+24h] [rbp-2Ch]

  if ( ToTheMoonProto::SVOBlockProto::has_svo(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->svo_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->svo_);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(1, this->svo_, output);
  }
  if ( ToTheMoonProto::SVOBlockProto::sceneid(this) )
  {
    v2 = ToTheMoonProto::SVOBlockProto::sceneid(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(2, v2, output);
  }
  if ( ToTheMoonProto::SVOBlockProto::blockindex_size(this) > 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteTag(3, WIRETYPE_LENGTH_DELIMITED, output);
    if ( *(_BYTE *)(((unsigned __int64)&this->_blockindex_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_blockindex_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_blockindex_cached_byte_size_);
    }
    google::protobuf::io::CodedOutputStream::WriteVarint32(output, this->_blockindex_cached_byte_size_);
  }
  i = 0;
  n = ToTheMoonProto::SVOBlockProto::blockindex_size(this);
  while ( i < n )
  {
    v3 = ToTheMoonProto::SVOBlockProto::blockindex(this, i);
    google::protobuf::internal::WireFormatLite::WriteInt32NoTag(v3, output);
    ++i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_26;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_26:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v5->unknown_fields, output);
  }
};

// Line 2652: range 0000000018228BB2-0000000018228DF5
google::protobuf::uint8 *__cdecl ToTheMoonProto::SVOBlockProto::InternalSerializeWithCachedSizesToArray(
        const ToTheMoonProto::SVOBlockProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  bool v3; // dl
  google::protobuf::int32 v4; // ecx
  google::protobuf::uint8 *v5; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax
  google::protobuf::uint8 *targetb; // [rsp+8h] [rbp-48h]

  if ( ToTheMoonProto::SVOBlockProto::has_svo(this) )
  {
    v3 = deterministic;
    if ( *(_BYTE *)(((unsigned __int64)&this->svo_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->svo_);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<ToTheMoonProto::SVOStructureProto>(
               1,
               this->svo_,
               v3,
               target);
  }
  if ( ToTheMoonProto::SVOBlockProto::sceneid(this) )
  {
    v4 = ToTheMoonProto::SVOBlockProto::sceneid(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, v4, target);
  }
  if ( ToTheMoonProto::SVOBlockProto::blockindex_size(this) > 0 )
  {
    targetb = google::protobuf::internal::WireFormatLite::WriteTagToArray(3, WIRETYPE_LENGTH_DELIMITED, target);
    if ( *(_BYTE *)(((unsigned __int64)&this->_blockindex_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_blockindex_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_blockindex_cached_byte_size_);
    }
    v5 = google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(this->_blockindex_cached_byte_size_, targetb);
    target = google::protobuf::internal::WireFormatLite::WriteInt32NoTagToArray(&this->blockindex_, v5);
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
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_23:
      v7 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v7->unknown_fields, target);
  }
  return target;
};

// Line 2691: range 0000000018228DF6-0000000018229051
size_t __cdecl ToTheMoonProto::SVOBlockProto::ByteSizeLong(const ToTheMoonProto::SVOBlockProto *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::int32 v3; // eax
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
  data_size = google::protobuf::internal::WireFormatLite::Int32Size(&this->blockindex_);
  if ( data_size )
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(data_size) + 1;
  cached_size_0 = google::protobuf::internal::ToCachedSize(data_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->_blockindex_cached_byte_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_blockindex_cached_byte_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_blockindex_cached_byte_size_);
  }
  this->_blockindex_cached_byte_size_ = cached_size_0;
  total_sizea = data_size + total_size;
  if ( ToTheMoonProto::SVOBlockProto::has_svo(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->svo_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->svo_);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<ToTheMoonProto::SVOStructureProto>(this->svo_)
                 + 1;
  }
  if ( ToTheMoonProto::SVOBlockProto::sceneid(this) )
  {
    v3 = ToTheMoonProto::SVOBlockProto::sceneid(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(v3) + 1;
  }
  cached_size = google::protobuf::internal::ToCachedSize(total_sizea);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = cached_size;
  return total_sizea;
};

// Line 2737: range 0000000018229052-00000000182292DB
void __cdecl ToTheMoonProto::SVOBlockProto::MergeFrom(
        ToTheMoonProto::SVOBlockProto *const this,
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
  const ToTheMoonProto::SVOBlockProto *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOBlockProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      2739);
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
  source = google::protobuf::internal::DynamicCastToGenerated<ToTheMoonProto::SVOBlockProto const>(from);
  if ( source )
    ToTheMoonProto::SVOBlockProto::MergeFrom(this, source);
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

// Line 2752: range 00000000182292DC-00000000182296D3
void __cdecl ToTheMoonProto::SVOBlockProto::MergeFrom(
        ToTheMoonProto::SVOBlockProto *const this,
        const ToTheMoonProto::SVOBlockProto *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  ToTheMoonProto::SVOStructureProto *v10; // r13
  const ToTheMoonProto::SVOStructureProto *v11; // rax
  google::protobuf::int32 v12; // edx
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOBlockProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      2754);
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
  google::protobuf::RepeatedField<int>::MergeFrom(&this->blockindex_, &from->blockindex_);
  if ( ToTheMoonProto::SVOBlockProto::has_svo(from) )
  {
    v10 = ToTheMoonProto::SVOBlockProto::mutable_svo(this);
    v11 = ToTheMoonProto::SVOBlockProto::svo(from);
    ToTheMoonProto::SVOStructureProto::MergeFrom(v10, v11);
  }
  if ( ToTheMoonProto::SVOBlockProto::sceneid(from) )
  {
    v12 = ToTheMoonProto::SVOBlockProto::sceneid(from);
    ToTheMoonProto::SVOBlockProto::set_sceneid(this, v12);
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

// Line 2768: range 00000000182296D4-000000001822970E
void __cdecl ToTheMoonProto::SVOBlockProto::CopyFrom(
        ToTheMoonProto::SVOBlockProto *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVOBlockProto::Clear(this);
    ToTheMoonProto::SVOBlockProto::MergeFrom(this, from);
  }
};

// Line 2775: range 0000000018229710-000000001822974A
void __cdecl ToTheMoonProto::SVOBlockProto::CopyFrom(
        ToTheMoonProto::SVOBlockProto *const this,
        const ToTheMoonProto::SVOBlockProto *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVOBlockProto::Clear(this);
    ToTheMoonProto::SVOBlockProto::MergeFrom(this, from);
  }
};

// Line 2782: range 000000001822974C-000000001822975A
bool __cdecl ToTheMoonProto::SVOBlockProto::IsInitialized(const ToTheMoonProto::SVOBlockProto *const this)
{
  return 1;
};

// Line 2786: range 000000001822975C-000000001822978A
void __cdecl ToTheMoonProto::SVOBlockProto::Swap(
        ToTheMoonProto::SVOBlockProto *const this,
        ToTheMoonProto::SVOBlockProto *other)
{
  if ( other != this )
    ToTheMoonProto::SVOBlockProto::InternalSwap(this, other);
};

// Line 2790: range 000000001822978C-0000000018229946
void __cdecl ToTheMoonProto::SVOBlockProto::InternalSwap(
        ToTheMoonProto::SVOBlockProto *const this,
        ToTheMoonProto::SVOBlockProto *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::RepeatedField<int>::InternalSwap(&this->blockindex_, &other->blockindex_);
  std::swap<ToTheMoonProto::SVOStructureProto *>(&this->svo_, &other->svo_);
  std::swap<int>(&this->sceneid_, &other->sceneid_);
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

// Line 2799: range 0000000018229948-0000000018229968
google::protobuf::Metadata __cdecl ToTheMoonProto::SVOBlockProto::GetMetadata(
        const ToTheMoonProto::SVOBlockProto *const this)
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[4];
};

// Line 2901: range 000000001822996A-0000000018229A4E
void __cdecl ToTheMoonProto::SVOWorldProto::SVOWorldProto(ToTheMoonProto::SVOWorldProto *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOWorldProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOBlockProto>::RepeatedPtrField(&this->blocks_);
  if ( this != ToTheMoonProto::SVOWorldProto::internal_default_instance() )
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  ToTheMoonProto::SVOWorldProto::SharedCtor(this);
};

// Line 2909: range 0000000018229A50-0000000018229D2A
void __cdecl ToTheMoonProto::SVOWorldProto::SVOWorldProto(
        ToTheMoonProto::SVOWorldProto *const this,
        const ToTheMoonProto::SVOWorldProto *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  __int64 p_side_length; // rsi
  float *v5; // rcx
  float *v6; // rdi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOWorldProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOBlockProto>::RepeatedPtrField(&this->blocks_, &from->blocks_);
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
  p_side_length = (__int64)&from->side_length_;
  v5 = &this->side_length_;
  if ( (((unsigned __int8)from + 40) & 7) >= *(_BYTE *)(((unsigned __int64)&from->side_length_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&from->side_length_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&from->sceneid_ + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)from + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&from->sceneid_ + 3) >> 3) + 0x7FFF8000) )
  {
    p_side_length = 8LL;
    __asan_report_load_n(&from->side_length_, 8LL);
  }
  v6 = *(float **)p_side_length;
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

// Line 2921: range 0000000018229D2C-0000000018229D92
void __cdecl ToTheMoonProto::SVOWorldProto::SharedCtor(ToTheMoonProto::SVOWorldProto *const this)
{
  memset(&this->side_length_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 2928: range 0000000018229D94-0000000018229E0D
void __cdecl ToTheMoonProto::SVOWorldProto::~SVOWorldProto(ToTheMoonProto::SVOWorldProto *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVOWorldProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  ToTheMoonProto::SVOWorldProto::SharedDtor(this);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOBlockProto>::~RepeatedPtrField(&this->blocks_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 2928: range 0000000018229E0E-0000000018229E38
void __cdecl ToTheMoonProto::SVOWorldProto::~SVOWorldProto(ToTheMoonProto::SVOWorldProto *const this)
{
  ToTheMoonProto::SVOWorldProto::~SVOWorldProto(this);
  operator delete(this, 0x38uLL);
};

// Line 2933: range 0000000018229E3A-0000000018229E44
void __cdecl ToTheMoonProto::SVOWorldProto::SharedDtor(ToTheMoonProto::SVOWorldProto *const this)
{
  ;
};

// Line 2936: range 0000000018229E46-0000000018229E94
void __cdecl ToTheMoonProto::SVOWorldProto::SetCachedSize(const ToTheMoonProto::SVOWorldProto *const this, int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 2941: range 0000000018229E96-0000000018229EA7
const google::protobuf::Descriptor *__cdecl ToTheMoonProto::SVOWorldProto::descriptor()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[5].descriptor;
};

// Line 2946: range 0000000018229EA8-0000000018229EB7
const ToTheMoonProto::SVOWorldProto *__cdecl ToTheMoonProto::SVOWorldProto::default_instance()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  return ToTheMoonProto::SVOWorldProto::internal_default_instance();
};

// Line 2951: range 0000000018229EB8-0000000018229F2C
ToTheMoonProto::SVOWorldProto *__cdecl ToTheMoonProto::SVOWorldProto::New(
        const ToTheMoonProto::SVOWorldProto *const this,
        google::protobuf::Arena *arena)
{
  ToTheMoonProto::SVOWorldProto *v2; // rbx

  v2 = (ToTheMoonProto::SVOWorldProto *)operator new(0x38uLL);
  ToTheMoonProto::SVOWorldProto::SVOWorldProto(v2);
  if ( arena )
    google::protobuf::Arena::Own<ToTheMoonProto::SVOWorldProto>(arena, v2);
  return v2;
};

// Line 2959: range 0000000018229F2E-0000000018229FCB
void __cdecl ToTheMoonProto::SVOWorldProto::Clear(ToTheMoonProto::SVOWorldProto *const this)
{
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOBlockProto>::Clear(&this->blocks_);
  memset(&this->side_length_, 0, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 2973: range 0000000018229FCC-000000001822A965
bool __cdecl ToTheMoonProto::SVOWorldProto::MergePartialFromCodedStream(
        ToTheMoonProto::SVOWorldProto *const this,
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
  ToTheMoonProto::SVOBlockProto *v14; // rdx
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:2978";
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOWorldProto::MergePartialFromCodedStream;
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
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                input,
                &this->sceneid_) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber > 3 )
          break;
        if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 10 )
            break;
          v14 = ToTheMoonProto::SVOWorldProto::add_blocks(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<ToTheMoonProto::SVOBlockProto>(
                  input,
                  v14) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 21 )
            break;
          if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(
                  input,
                  &this->side_length_) )
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
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v15 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v15->unknown_fields) );
failure:
  result = 0;
LABEL_55:
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

// Line 3043: range 000000001822A966-000000001822AB39
void __cdecl ToTheMoonProto::SVOWorldProto::SerializeWithCachedSizes(
        const ToTheMoonProto::SVOWorldProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const ToTheMoonProto::SVOBlockProto *v2; // rcx
  google::protobuf::int32 v3; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v5; // rax
  unsigned int i; // [rsp+1Ch] [rbp-34h]
  unsigned int n; // [rsp+24h] [rbp-2Ch]

  i = 0;
  n = ToTheMoonProto::SVOWorldProto::blocks_size(this);
  while ( i < n )
  {
    v2 = ToTheMoonProto::SVOWorldProto::blocks(this, i);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(1, v2, output);
    ++i;
  }
  if ( ToTheMoonProto::SVOWorldProto::side_length(this) != 0.0 )
  {
    ToTheMoonProto::SVOWorldProto::side_length(this);
    google::protobuf::internal::WireFormatLite::WriteFloat(2, 0.0, output);
  }
  if ( ToTheMoonProto::SVOWorldProto::sceneid(this) )
  {
    v3 = ToTheMoonProto::SVOWorldProto::sceneid(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(3, v3, output);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_20;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_20:
      v5 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v5->unknown_fields, output);
  }
};

// Line 3073: range 000000001822AB3A-000000001822AD2E
google::protobuf::uint8 *__cdecl ToTheMoonProto::SVOWorldProto::InternalSerializeWithCachedSizesToArray(
        const ToTheMoonProto::SVOWorldProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const ToTheMoonProto::SVOBlockProto *v3; // rsi
  float v4; // xmm0_4
  google::protobuf::int32 v5; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax
  unsigned int i; // [rsp+2Ch] [rbp-44h]
  unsigned int n; // [rsp+34h] [rbp-3Ch]

  i = 0;
  n = ToTheMoonProto::SVOWorldProto::blocks_size(this);
  while ( i < n )
  {
    v3 = ToTheMoonProto::SVOWorldProto::blocks(this, i);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<ToTheMoonProto::SVOBlockProto>(
               1,
               v3,
               deterministic,
               target);
    ++i;
  }
  if ( ToTheMoonProto::SVOWorldProto::side_length(this) != 0.0 )
  {
    v4 = ToTheMoonProto::SVOWorldProto::side_length(this);
    target = google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, v4, target);
  }
  if ( ToTheMoonProto::SVOWorldProto::sceneid(this) )
  {
    v5 = ToTheMoonProto::SVOWorldProto::sceneid(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, v5, target);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1
    && google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
  {
    if ( !google::protobuf::internal::GetProto3PreserveUnknownsDefault() )
      goto LABEL_20;
    if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_internal_metadata_);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_20:
      v7 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v7->unknown_fields, target);
  }
  return target;
};

// Line 3105: range 000000001822AD30-000000001822AF2A
size_t __cdecl ToTheMoonProto::SVOWorldProto::ByteSizeLong(const ToTheMoonProto::SVOWorldProto *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const ToTheMoonProto::SVOBlockProto *v3; // rax
  google::protobuf::int32 v4; // eax
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
  count = ToTheMoonProto::SVOWorldProto::blocks_size(this);
  total_sizea = count + total_size;
  for ( i = 0; i < count; ++i )
  {
    v3 = ToTheMoonProto::SVOWorldProto::blocks(this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<ToTheMoonProto::SVOBlockProto>(v3);
  }
  if ( ToTheMoonProto::SVOWorldProto::side_length(this) != 0.0 )
    total_sizea += 5LL;
  if ( ToTheMoonProto::SVOWorldProto::sceneid(this) )
  {
    v4 = ToTheMoonProto::SVOWorldProto::sceneid(this);
    total_sizea += google::protobuf::internal::WireFormatLite::Int32Size(v4) + 1;
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

// Line 3144: range 000000001822AF2C-000000001822B1B5
void __cdecl ToTheMoonProto::SVOWorldProto::MergeFrom(
        ToTheMoonProto::SVOWorldProto *const this,
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
  const ToTheMoonProto::SVOWorldProto *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOWorldProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      3146);
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
  source = google::protobuf::internal::DynamicCastToGenerated<ToTheMoonProto::SVOWorldProto const>(from);
  if ( source )
    ToTheMoonProto::SVOWorldProto::MergeFrom(this, source);
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

// Line 3159: range 000000001822B1B6-000000001822B5B8
void __cdecl ToTheMoonProto::SVOWorldProto::MergeFrom(
        ToTheMoonProto::SVOWorldProto *const this,
        const ToTheMoonProto::SVOWorldProto *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  float v10; // xmm0_4
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVOWorldProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      3161);
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
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOBlockProto>::MergeFrom(&this->blocks_, &from->blocks_);
  if ( ToTheMoonProto::SVOWorldProto::side_length(from) != 0.0 )
  {
    v10 = ToTheMoonProto::SVOWorldProto::side_length(from);
    ToTheMoonProto::SVOWorldProto::set_side_length(this, v10);
  }
  if ( ToTheMoonProto::SVOWorldProto::sceneid(from) )
  {
    v11 = ToTheMoonProto::SVOWorldProto::sceneid(from);
    ToTheMoonProto::SVOWorldProto::set_sceneid(this, v11);
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

// Line 3175: range 000000001822B5BA-000000001822B5F4
void __cdecl ToTheMoonProto::SVOWorldProto::CopyFrom(
        ToTheMoonProto::SVOWorldProto *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVOWorldProto::Clear(this);
    ToTheMoonProto::SVOWorldProto::MergeFrom(this, from);
  }
};

// Line 3182: range 000000001822B5F6-000000001822B630
void __cdecl ToTheMoonProto::SVOWorldProto::CopyFrom(
        ToTheMoonProto::SVOWorldProto *const this,
        const ToTheMoonProto::SVOWorldProto *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVOWorldProto::Clear(this);
    ToTheMoonProto::SVOWorldProto::MergeFrom(this, from);
  }
};

// Line 3189: range 000000001822B632-000000001822B640
bool __cdecl ToTheMoonProto::SVOWorldProto::IsInitialized(const ToTheMoonProto::SVOWorldProto *const this)
{
  return 1;
};

// Line 3193: range 000000001822B642-000000001822B670
void __cdecl ToTheMoonProto::SVOWorldProto::Swap(
        ToTheMoonProto::SVOWorldProto *const this,
        ToTheMoonProto::SVOWorldProto *other)
{
  if ( other != this )
    ToTheMoonProto::SVOWorldProto::InternalSwap(this, other);
};

// Line 3197: range 000000001822B672-000000001822B82C
void __cdecl ToTheMoonProto::SVOWorldProto::InternalSwap(
        ToTheMoonProto::SVOWorldProto *const this,
        ToTheMoonProto::SVOWorldProto *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(&this->blocks_, &other->blocks_);
  std::swap<float>(&this->side_length_, &other->side_length_);
  std::swap<int>(&this->sceneid_, &other->sceneid_);
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

// Line 3206: range 000000001822B82E-000000001822B84E
google::protobuf::Metadata __cdecl ToTheMoonProto::SVOWorldProto::GetMetadata(
        const ToTheMoonProto::SVOWorldProto *const this)
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[5];
};

// Line 3281: range 000000001822B850-000000001822B90F
void __cdecl ToTheMoonProto::SVONodeWrapperProto::SVONodeWrapperProto(ToTheMoonProto::SVONodeWrapperProto *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVONodeWrapperProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  if ( this != ToTheMoonProto::SVONodeWrapperProto::internal_default_instance() )
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  ToTheMoonProto::SVONodeWrapperProto::SharedCtor(this);
};

// Line 3289: range 000000001822B910-000000001822BC0F
void __cdecl ToTheMoonProto::SVONodeWrapperProto::SVONodeWrapperProto(
        ToTheMoonProto::SVONodeWrapperProto *const this,
        const ToTheMoonProto::SVONodeWrapperProto *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  ToTheMoonProto::SVONodeProto *v4; // rbx
  google::protobuf::int32 level; // ecx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVONodeWrapperProto + 2);
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
  if ( ToTheMoonProto::SVONodeWrapperProto::has_svonode(from) )
  {
    v4 = (ToTheMoonProto::SVONodeProto *)operator new(0xC8uLL);
    if ( *(_BYTE *)(((unsigned __int64)&from->svonode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->svonode_);
    ToTheMoonProto::SVONodeProto::SVONodeProto(v4, from->svonode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->svonode_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->svonode_ = v4;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->svonode_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->svonode_ = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&from->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&from->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&from->level_);
  }
  level = from->level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = level;
};

// Line 3303: range 000000001822BC10-000000001822BC7E
void __cdecl ToTheMoonProto::SVONodeWrapperProto::SharedCtor(ToTheMoonProto::SVONodeWrapperProto *const this)
{
  memset(&this->svonode_, 0, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 3310: range 000000001822BC80-000000001822BCE9
void __cdecl ToTheMoonProto::SVONodeWrapperProto::~SVONodeWrapperProto(ToTheMoonProto::SVONodeWrapperProto *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVONodeWrapperProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  ToTheMoonProto::SVONodeWrapperProto::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 3310: range 000000001822BCEA-000000001822BD14
void __cdecl ToTheMoonProto::SVONodeWrapperProto::~SVONodeWrapperProto(ToTheMoonProto::SVONodeWrapperProto *const this)
{
  ToTheMoonProto::SVONodeWrapperProto::~SVONodeWrapperProto(this);
  operator delete(this, 0x20uLL);
};

// Line 3315: range 000000001822BD16-000000001822BDBA
void __cdecl ToTheMoonProto::SVONodeWrapperProto::SharedDtor(ToTheMoonProto::SVONodeWrapperProto *const this)
{
  unsigned __int64 svonode; // rax
  unsigned __int64 v2; // rdx

  if ( this != ToTheMoonProto::SVONodeWrapperProto::internal_default_instance() )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->svonode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->svonode_);
    svonode = (unsigned __int64)this->svonode_;
    if ( svonode )
    {
      if ( *(_BYTE *)((svonode >> 3) + 0x7FFF8000) )
        svonode = __asan_report_load8(svonode);
      v2 = *(_QWORD *)svonode + 8LL;
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        svonode = __asan_report_load8(*(_QWORD *)svonode + 8LL);
      (*(void (__fastcall **)(unsigned __int64))v2)(svonode);
    }
  }
};

// Line 3319: range 000000001822BDBC-000000001822BE12
void __cdecl ToTheMoonProto::SVONodeWrapperProto::SetCachedSize(
        const ToTheMoonProto::SVONodeWrapperProto *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 3324: range 000000001822BE14-000000001822BE25
const google::protobuf::Descriptor *__cdecl ToTheMoonProto::SVONodeWrapperProto::descriptor()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[6].descriptor;
};

// Line 3329: range 000000001822BE26-000000001822BE35
const ToTheMoonProto::SVONodeWrapperProto *__cdecl ToTheMoonProto::SVONodeWrapperProto::default_instance()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  return ToTheMoonProto::SVONodeWrapperProto::internal_default_instance();
};

// Line 3334: range 000000001822BE36-000000001822BEAA
ToTheMoonProto::SVONodeWrapperProto *__cdecl ToTheMoonProto::SVONodeWrapperProto::New(
        const ToTheMoonProto::SVONodeWrapperProto *const this,
        google::protobuf::Arena *arena)
{
  ToTheMoonProto::SVONodeWrapperProto *v2; // rbx

  v2 = (ToTheMoonProto::SVONodeWrapperProto *)operator new(0x20uLL);
  ToTheMoonProto::SVONodeWrapperProto::SVONodeWrapperProto(v2);
  if ( arena )
    google::protobuf::Arena::Own<ToTheMoonProto::SVONodeWrapperProto>(arena, v2);
  return v2;
};

// Line 3342: range 000000001822BEAC-000000001822C067
void __cdecl ToTheMoonProto::SVONodeWrapperProto::Clear(ToTheMoonProto::SVONodeWrapperProto *const this)
{
  char v1; // al
  unsigned __int64 svonode; // rax
  unsigned __int64 v3; // rdx

  if ( ToTheMoonProto::SVONodeWrapperProto::GetArenaNoVirtual(this) )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&this->svonode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->svonode_);
  if ( !this->svonode_ )
LABEL_6:
    v1 = 0;
  else
    v1 = 1;
  if ( v1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->svonode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->svonode_);
    svonode = (unsigned __int64)this->svonode_;
    if ( svonode )
    {
      if ( *(_BYTE *)((svonode >> 3) + 0x7FFF8000) )
        svonode = __asan_report_load8(svonode);
      v3 = *(_QWORD *)svonode + 8LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        svonode = __asan_report_load8(*(_QWORD *)svonode + 8LL);
      (*(void (__fastcall **)(unsigned __int64))v3)(svonode);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->svonode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->svonode_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 3357: range 000000001822C068-000000001822C9A5
bool __cdecl ToTheMoonProto::SVONodeWrapperProto::MergePartialFromCodedStream(
        ToTheMoonProto::SVONodeWrapperProto *const this,
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
  ToTheMoonProto::SVONodeProto *v14; // rdx
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
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:3362";
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVONodeWrapperProto::MergePartialFromCodedStream;
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
        if ( (_BYTE)tag != 10 )
          break;
        v14 = ToTheMoonProto::SVONodeWrapperProto::mutable_svonode(this);
        if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<ToTheMoonProto::SVONodeProto>(input, v14) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber != 2 || (_BYTE)tag != 16 )
          break;
        if ( !google::protobuf::internal::WireFormatLite::ReadPrimitive<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                input,
                &this->level_) )
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
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v15 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v15->unknown_fields) );
failure:
  result = 0;
LABEL_49:
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

// Line 3413: range 000000001822C9A6-000000001822CB3B
void __cdecl ToTheMoonProto::SVONodeWrapperProto::SerializeWithCachedSizes(
        const ToTheMoonProto::SVONodeWrapperProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int32 v2; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v4; // rax

  if ( ToTheMoonProto::SVONodeWrapperProto::has_svonode(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->svonode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->svonode_);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(1, this->svonode_, output);
  }
  if ( ToTheMoonProto::SVONodeWrapperProto::level(this) )
  {
    v2 = ToTheMoonProto::SVONodeWrapperProto::level(this);
    google::protobuf::internal::WireFormatLite::WriteInt32(2, v2, output);
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
      v4 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_19:
      v4 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v4->unknown_fields, output);
  }
};

// Line 3437: range 000000001822CB3C-000000001822CCE3
google::protobuf::uint8 *__cdecl ToTheMoonProto::SVONodeWrapperProto::InternalSerializeWithCachedSizesToArray(
        const ToTheMoonProto::SVONodeWrapperProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  bool v3; // dl
  google::protobuf::int32 v4; // ecx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v6; // rax

  if ( ToTheMoonProto::SVONodeWrapperProto::has_svonode(this) )
  {
    v3 = deterministic;
    if ( *(_BYTE *)(((unsigned __int64)&this->svonode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->svonode_);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<ToTheMoonProto::SVONodeProto>(
               1,
               this->svonode_,
               v3,
               target);
  }
  if ( ToTheMoonProto::SVONodeWrapperProto::level(this) )
  {
    v4 = ToTheMoonProto::SVONodeWrapperProto::level(this);
    target = google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, v4, target);
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
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v6->unknown_fields, target);
  }
  return target;
};

// Line 3463: range 000000001822CCE4-000000001822CEBD
size_t __cdecl ToTheMoonProto::SVONodeWrapperProto::ByteSizeLong(const ToTheMoonProto::SVONodeWrapperProto *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  google::protobuf::int32 v3; // eax
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
  if ( ToTheMoonProto::SVONodeWrapperProto::has_svonode(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->svonode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->svonode_);
    total_size += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<ToTheMoonProto::SVONodeProto>(this->svonode_)
                + 1;
  }
  if ( ToTheMoonProto::SVONodeWrapperProto::level(this) )
  {
    v3 = ToTheMoonProto::SVONodeWrapperProto::level(this);
    total_size += google::protobuf::internal::WireFormatLite::Int32Size(v3) + 1;
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

// Line 3493: range 000000001822CEBE-000000001822D147
void __cdecl ToTheMoonProto::SVONodeWrapperProto::MergeFrom(
        ToTheMoonProto::SVONodeWrapperProto *const this,
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
  const ToTheMoonProto::SVONodeWrapperProto *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVONodeWrapperProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      3495);
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
  source = google::protobuf::internal::DynamicCastToGenerated<ToTheMoonProto::SVONodeWrapperProto const>(from);
  if ( source )
    ToTheMoonProto::SVONodeWrapperProto::MergeFrom(this, source);
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

// Line 3508: range 000000001822D148-000000001822D51E
void __cdecl ToTheMoonProto::SVONodeWrapperProto::MergeFrom(
        ToTheMoonProto::SVONodeWrapperProto *const this,
        const ToTheMoonProto::SVONodeWrapperProto *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  ToTheMoonProto::SVONodeProto *v10; // r13
  const ToTheMoonProto::SVONodeProto *v11; // rax
  google::protobuf::int32 v12; // edx
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVONodeWrapperProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      3510);
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
  if ( ToTheMoonProto::SVONodeWrapperProto::has_svonode(from) )
  {
    v10 = ToTheMoonProto::SVONodeWrapperProto::mutable_svonode(this);
    v11 = ToTheMoonProto::SVONodeWrapperProto::svonode(from);
    ToTheMoonProto::SVONodeProto::MergeFrom(v10, v11);
  }
  if ( ToTheMoonProto::SVONodeWrapperProto::level(from) )
  {
    v12 = ToTheMoonProto::SVONodeWrapperProto::level(from);
    ToTheMoonProto::SVONodeWrapperProto::set_level(this, v12);
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

// Line 3523: range 000000001822D520-000000001822D55A
void __cdecl ToTheMoonProto::SVONodeWrapperProto::CopyFrom(
        ToTheMoonProto::SVONodeWrapperProto *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVONodeWrapperProto::Clear(this);
    ToTheMoonProto::SVONodeWrapperProto::MergeFrom(this, from);
  }
};

// Line 3530: range 000000001822D55C-000000001822D596
void __cdecl ToTheMoonProto::SVONodeWrapperProto::CopyFrom(
        ToTheMoonProto::SVONodeWrapperProto *const this,
        const ToTheMoonProto::SVONodeWrapperProto *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVONodeWrapperProto::Clear(this);
    ToTheMoonProto::SVONodeWrapperProto::MergeFrom(this, from);
  }
};

// Line 3537: range 000000001822D598-000000001822D5A6
bool __cdecl ToTheMoonProto::SVONodeWrapperProto::IsInitialized(const ToTheMoonProto::SVONodeWrapperProto *const this)
{
  return 1;
};

// Line 3541: range 000000001822D5A8-000000001822D5D6
void __cdecl ToTheMoonProto::SVONodeWrapperProto::Swap(
        ToTheMoonProto::SVONodeWrapperProto *const this,
        ToTheMoonProto::SVONodeWrapperProto *other)
{
  if ( other != this )
    ToTheMoonProto::SVONodeWrapperProto::InternalSwap(this, other);
};

// Line 3545: range 000000001822D5D8-000000001822D777
void __cdecl ToTheMoonProto::SVONodeWrapperProto::InternalSwap(
        ToTheMoonProto::SVONodeWrapperProto *const this,
        ToTheMoonProto::SVONodeWrapperProto *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  std::swap<ToTheMoonProto::SVONodeProto *>(&this->svonode_, &other->svonode_);
  std::swap<int>(&this->level_, &other->level_);
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

// Line 3553: range 000000001822D778-000000001822D798
google::protobuf::Metadata __cdecl ToTheMoonProto::SVONodeWrapperProto::GetMetadata(
        const ToTheMoonProto::SVONodeWrapperProto *const this)
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[6];
};

// Line 3625: range 000000001822D79A-000000001822D87E
void __cdecl ToTheMoonProto::SVONodePathProto::SVONodePathProto(ToTheMoonProto::SVONodePathProto *const this)
{
  int (**v1)(...); // rdx

  google::protobuf::Message::Message(this);
  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVONodePathProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeWrapperProto>::RepeatedPtrField(&this->svonodes_);
  if ( this != ToTheMoonProto::SVONodePathProto::internal_default_instance() )
    ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  ToTheMoonProto::SVONodePathProto::SharedCtor(this);
};

// Line 3633: range 000000001822D880-000000001822DBFF
void __cdecl ToTheMoonProto::SVONodePathProto::SVONodePathProto(
        ToTheMoonProto::SVONodePathProto *const this,
        const ToTheMoonProto::SVONodePathProto *from)
{
  int (**v2)(...); // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  ToTheMoonProto::Pos *v4; // rbx
  ToTheMoonProto::Pos *v5; // rbx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::Message::Message(this);
  v2 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVONodePathProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v2;
  google::protobuf::internal::InternalMetadataWithArena::InternalMetadataWithArena(&this->_internal_metadata_, 0LL);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeWrapperProto>::RepeatedPtrField(
    &this->svonodes_,
    &from->svonodes_);
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
  if ( ToTheMoonProto::SVONodePathProto::has_start(from) )
  {
    v4 = (ToTheMoonProto::Pos *)operator new(0x20uLL);
    if ( *(_BYTE *)(((unsigned __int64)&from->start_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->start_);
    ToTheMoonProto::Pos::Pos(v4, from->start_);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->start_ = v4;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->start_ = 0LL;
  }
  if ( ToTheMoonProto::SVONodePathProto::has_end(from) )
  {
    v5 = (ToTheMoonProto::Pos *)operator new(0x20uLL);
    if ( *(_BYTE *)(((unsigned __int64)&from->end_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&from->end_);
    ToTheMoonProto::Pos::Pos(v5, from->end_);
    if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->end_ = v5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->end_ = 0LL;
  }
};

// Line 3652: range 000000001822DC00-000000001822DC66
void __cdecl ToTheMoonProto::SVONodePathProto::SharedCtor(ToTheMoonProto::SVONodePathProto *const this)
{
  memset(&this->start_, 0, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = 0;
};

// Line 3659: range 000000001822DC68-000000001822DCE1
void __cdecl ToTheMoonProto::SVONodePathProto::~SVONodePathProto(ToTheMoonProto::SVONodePathProto *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ToTheMoonProto::SVONodePathProto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MessageLite = v1;
  ToTheMoonProto::SVONodePathProto::SharedDtor(this);
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeWrapperProto>::~RepeatedPtrField(&this->svonodes_);
  google::protobuf::internal::InternalMetadataWithArena::~InternalMetadataWithArena(&this->_internal_metadata_);
  google::protobuf::Message::~Message(this);
};

// Line 3659: range 000000001822DCE2-000000001822DD0C
void __cdecl ToTheMoonProto::SVONodePathProto::~SVONodePathProto(ToTheMoonProto::SVONodePathProto *const this)
{
  ToTheMoonProto::SVONodePathProto::~SVONodePathProto(this);
  operator delete(this, 0x40uLL);
};

// Line 3664: range 000000001822DD0E-000000001822DE48
void __cdecl ToTheMoonProto::SVONodePathProto::SharedDtor(ToTheMoonProto::SVONodePathProto *const this)
{
  unsigned __int64 start; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 end; // rax
  unsigned __int64 v4; // rdx

  if ( this != ToTheMoonProto::SVONodePathProto::internal_default_instance() )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->start_);
    start = (unsigned __int64)this->start_;
    if ( start )
    {
      if ( *(_BYTE *)((start >> 3) + 0x7FFF8000) )
        start = __asan_report_load8(start);
      v2 = *(_QWORD *)start + 8LL;
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        start = __asan_report_load8(*(_QWORD *)start + 8LL);
      (*(void (__fastcall **)(unsigned __int64))v2)(start);
    }
  }
  if ( this != ToTheMoonProto::SVONodePathProto::internal_default_instance() )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end_);
    end = (unsigned __int64)this->end_;
    if ( end )
    {
      if ( *(_BYTE *)((end >> 3) + 0x7FFF8000) )
        end = __asan_report_load8(end);
      v4 = *(_QWORD *)end + 8LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        end = __asan_report_load8(*(_QWORD *)end + 8LL);
      (*(void (__fastcall **)(unsigned __int64))v4)(end);
    }
  }
};

// Line 3669: range 000000001822DE4A-000000001822DE98
void __cdecl ToTheMoonProto::SVONodePathProto::SetCachedSize(
        const ToTheMoonProto::SVONodePathProto *const this,
        int size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_cached_size_);
  }
  this->_cached_size_ = size;
};

// Line 3674: range 000000001822DE9A-000000001822DEAB
const google::protobuf::Descriptor *__cdecl ToTheMoonProto::SVONodePathProto::descriptor()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[7].descriptor;
};

// Line 3679: range 000000001822DEAC-000000001822DEBB
const ToTheMoonProto::SVONodePathProto *__cdecl ToTheMoonProto::SVONodePathProto::default_instance()
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::InitDefaults();
  return ToTheMoonProto::SVONodePathProto::internal_default_instance();
};

// Line 3684: range 000000001822DEBC-000000001822DF30
ToTheMoonProto::SVONodePathProto *__cdecl ToTheMoonProto::SVONodePathProto::New(
        const ToTheMoonProto::SVONodePathProto *const this,
        google::protobuf::Arena *arena)
{
  ToTheMoonProto::SVONodePathProto *v2; // rbx

  v2 = (ToTheMoonProto::SVONodePathProto *)operator new(0x40uLL);
  ToTheMoonProto::SVONodePathProto::SVONodePathProto(v2);
  if ( arena )
    google::protobuf::Arena::Own<ToTheMoonProto::SVONodePathProto>(arena, v2);
  return v2;
};

// Line 3692: range 000000001822DF32-000000001822E1C9
void __cdecl ToTheMoonProto::SVONodePathProto::Clear(ToTheMoonProto::SVONodePathProto *const this)
{
  char v1; // al
  unsigned __int64 start; // rax
  unsigned __int64 v3; // rdx
  char v4; // al
  unsigned __int64 end; // rax
  unsigned __int64 v6; // rdx

  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeWrapperProto>::Clear(&this->svonodes_);
  if ( ToTheMoonProto::SVONodePathProto::GetArenaNoVirtual(this) )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_);
  if ( !this->start_ )
LABEL_6:
    v1 = 0;
  else
    v1 = 1;
  if ( v1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->start_);
    start = (unsigned __int64)this->start_;
    if ( start )
    {
      if ( *(_BYTE *)((start >> 3) + 0x7FFF8000) )
        start = __asan_report_load8(start);
      v3 = *(_QWORD *)start + 8LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        start = __asan_report_load8(*(_QWORD *)start + 8LL);
      (*(void (__fastcall **)(unsigned __int64))v3)(start);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->start_ = 0LL;
  if ( ToTheMoonProto::SVONodePathProto::GetArenaNoVirtual(this) )
    goto LABEL_23;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->end_);
  if ( !this->end_ )
LABEL_23:
    v4 = 0;
  else
    v4 = 1;
  if ( v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end_);
    end = (unsigned __int64)this->end_;
    if ( end )
    {
      if ( *(_BYTE *)((end >> 3) + 0x7FFF8000) )
        end = __asan_report_load8(end);
      v6 = *(_QWORD *)end + 8LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        end = __asan_report_load8(*(_QWORD *)end + 8LL);
      (*(void (__fastcall **)(unsigned __int64))v6)(end);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->end_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_internal_metadata_);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 1 )
    google::protobuf::internal::InternalMetadataWithArena::DoClear(&this->_internal_metadata_);
};

// Line 3711: range 000000001822E1CA-000000001822EB75
bool __cdecl ToTheMoonProto::SVONodePathProto::MergePartialFromCodedStream(
        ToTheMoonProto::SVONodePathProto *const this,
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
  ToTheMoonProto::Pos *v14; // rdx
  ToTheMoonProto::Pos *v15; // rdx
  ToTheMoonProto::SVONodeWrapperProto *v16; // rdx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v17; // rdx
  bool result; // al
  google::protobuf::uint32 tag; // [rsp+1Ch] [rbp-F4h]
  google::protobuf::uint32 first_byte_or_zero; // [rsp+24h] [rbp-ECh]
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+38h] [rbp-D8h]
  char v22[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 18 at_or_below_cutoff 48 1 9 <unknown> 64 1 9 <unknown> 80 4 3 tag 96 4 3 tag 112 4 3 tag 128 8 6 p:3716";
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVONodePathProto::MergePartialFromCodedStream;
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
        v16 = ToTheMoonProto::SVONodePathProto::add_svonodes(this);
        if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<ToTheMoonProto::SVONodeWrapperProto>(
                input,
                v16) )
          goto failure;
      }
      else
      {
        if ( TagFieldNumber > 3 )
          break;
        if ( TagFieldNumber == 1 )
        {
          if ( (_BYTE)tag != 10 )
            break;
          v14 = ToTheMoonProto::SVONodePathProto::mutable_start(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<ToTheMoonProto::Pos>(input, v14) )
            goto failure;
        }
        else
        {
          if ( TagFieldNumber != 2 || (_BYTE)tag != 18 )
            break;
          v15 = ToTheMoonProto::SVONodePathProto::mutable_end(this);
          if ( !google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual<ToTheMoonProto::Pos>(input, v15) )
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
      v17 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(p_internal_metadata);
    else
      v17 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
  }
  while ( google::protobuf::internal::WireFormat::SkipField(input, tag, &v17->unknown_fields) );
failure:
  result = 0;
LABEL_55:
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
  return result;
};

// Line 3777: range 000000001822EB76-000000001822ED75
void __cdecl ToTheMoonProto::SVONodePathProto::SerializeWithCachedSizes(
        const ToTheMoonProto::SVONodePathProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const ToTheMoonProto::SVONodeWrapperProto *v2; // rcx
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v4; // rax
  unsigned int i; // [rsp+1Ch] [rbp-34h]
  unsigned int n; // [rsp+24h] [rbp-2Ch]

  if ( ToTheMoonProto::SVONodePathProto::has_start(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->start_);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(1, this->start_, output);
  }
  if ( ToTheMoonProto::SVONodePathProto::has_end(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end_);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(2, this->end_, output);
  }
  i = 0;
  n = ToTheMoonProto::SVONodePathProto::svonodes_size(this);
  while ( i < n )
  {
    v2 = ToTheMoonProto::SVONodePathProto::svonodes(this, i);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(3, v2, output);
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
      v4 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_24:
      v4 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    google::protobuf::internal::WireFormat::SerializeUnknownFields(&v4->unknown_fields, output);
  }
};

// Line 3809: range 000000001822ED76-000000001822EF92
google::protobuf::uint8 *__cdecl ToTheMoonProto::SVONodePathProto::InternalSerializeWithCachedSizesToArray(
        const ToTheMoonProto::SVONodePathProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  bool v3; // dl
  bool v4; // dl
  const ToTheMoonProto::SVONodeWrapperProto *v5; // rsi
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v7; // rax
  unsigned int i; // [rsp+2Ch] [rbp-44h]
  unsigned int n; // [rsp+34h] [rbp-3Ch]

  if ( ToTheMoonProto::SVONodePathProto::has_start(this) )
  {
    v3 = deterministic;
    if ( *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->start_);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<ToTheMoonProto::Pos>(
               1,
               this->start_,
               v3,
               target);
  }
  if ( ToTheMoonProto::SVONodePathProto::has_end(this) )
  {
    v4 = deterministic;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end_);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<ToTheMoonProto::Pos>(
               2,
               this->end_,
               v4,
               target);
  }
  i = 0;
  n = ToTheMoonProto::SVONodePathProto::svonodes_size(this);
  while ( i < n )
  {
    v5 = ToTheMoonProto::SVONodePathProto::svonodes(this, i);
    target = google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray<ToTheMoonProto::SVONodeWrapperProto>(
               3,
               v5,
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
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::PtrValue<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container>(&this->_internal_metadata_);
    else
LABEL_24:
      v7 = (google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *)google::protobuf::internal::InternalMetadataWithArena::default_instance();
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(&v7->unknown_fields, target);
  }
  return target;
};

// Line 3845: range 000000001822EF94-000000001822F1CA
size_t __cdecl ToTheMoonProto::SVONodePathProto::ByteSizeLong(const ToTheMoonProto::SVONodePathProto *const this)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v2; // rax
  const ToTheMoonProto::SVONodeWrapperProto *v3; // rax
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
  count = ToTheMoonProto::SVONodePathProto::svonodes_size(this);
  total_sizea = count + total_size;
  for ( i = 0; i < count; ++i )
  {
    v3 = ToTheMoonProto::SVONodePathProto::svonodes(this, i);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<ToTheMoonProto::SVONodeWrapperProto>(v3);
  }
  if ( ToTheMoonProto::SVONodePathProto::has_start(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->start_);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<ToTheMoonProto::Pos>(this->start_)
                 + 1;
  }
  if ( ToTheMoonProto::SVONodePathProto::has_end(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end_);
    total_sizea += google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual<ToTheMoonProto::Pos>(this->end_) + 1;
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

// Line 3886: range 000000001822F1CC-000000001822F455
void __cdecl ToTheMoonProto::SVONodePathProto::MergeFrom(
        ToTheMoonProto::SVONodePathProto *const this,
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
  const ToTheMoonProto::SVONodePathProto *source; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVONodePathProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      3888);
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
  source = google::protobuf::internal::DynamicCastToGenerated<ToTheMoonProto::SVONodePathProto const>(from);
  if ( source )
    ToTheMoonProto::SVONodePathProto::MergeFrom(this, source);
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

// Line 3901: range 000000001822F456-000000001822F852
void __cdecl ToTheMoonProto::SVONodePathProto::MergeFrom(
        ToTheMoonProto::SVONodePathProto *const this,
        const ToTheMoonProto::SVONodePathProto *from)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v9; // rdx
  ToTheMoonProto::Pos *v10; // r13
  const ToTheMoonProto::Pos *v11; // rax
  ToTheMoonProto::Pos *v12; // r13
  const ToTheMoonProto::Pos *v13; // rax
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
  *(_QWORD *)(v2 + 16) = ToTheMoonProto::SVONodePathProto::MergeFrom;
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
      "./src/server_only/SVOProto.pb.cc",
      3903);
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
  google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeWrapperProto>::MergeFrom(&this->svonodes_, &from->svonodes_);
  if ( ToTheMoonProto::SVONodePathProto::has_start(from) )
  {
    v10 = ToTheMoonProto::SVONodePathProto::mutable_start(this);
    v11 = ToTheMoonProto::SVONodePathProto::start(from);
    ToTheMoonProto::Pos::MergeFrom(v10, v11);
  }
  if ( ToTheMoonProto::SVONodePathProto::has_end(from) )
  {
    v12 = ToTheMoonProto::SVONodePathProto::mutable_end(this);
    v13 = ToTheMoonProto::SVONodePathProto::end(from);
    ToTheMoonProto::Pos::MergeFrom(v12, v13);
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

// Line 3917: range 000000001822F854-000000001822F88E
void __cdecl ToTheMoonProto::SVONodePathProto::CopyFrom(
        ToTheMoonProto::SVONodePathProto *const this,
        const google::protobuf::Message *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVONodePathProto::Clear(this);
    ToTheMoonProto::SVONodePathProto::MergeFrom(this, from);
  }
};

// Line 3924: range 000000001822F890-000000001822F8CA
void __cdecl ToTheMoonProto::SVONodePathProto::CopyFrom(
        ToTheMoonProto::SVONodePathProto *const this,
        const ToTheMoonProto::SVONodePathProto *from)
{
  if ( from != this )
  {
    ToTheMoonProto::SVONodePathProto::Clear(this);
    ToTheMoonProto::SVONodePathProto::MergeFrom(this, from);
  }
};

// Line 3931: range 000000001822F8CC-000000001822F8DA
bool __cdecl ToTheMoonProto::SVONodePathProto::IsInitialized(const ToTheMoonProto::SVONodePathProto *const this)
{
  return 1;
};

// Line 3935: range 000000001822F8DC-000000001822F90A
void __cdecl ToTheMoonProto::SVONodePathProto::Swap(
        ToTheMoonProto::SVONodePathProto *const this,
        ToTheMoonProto::SVONodePathProto *other)
{
  if ( other != this )
    ToTheMoonProto::SVONodePathProto::InternalSwap(this, other);
};

// Line 3939: range 000000001822F90C-000000001822FAC6
void __cdecl ToTheMoonProto::SVONodePathProto::InternalSwap(
        ToTheMoonProto::SVONodePathProto *const this,
        ToTheMoonProto::SVONodePathProto *other)
{
  char v2; // al
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::Container *v3; // rdx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // [rsp+20h] [rbp-40h]

  google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(&this->svonodes_, &other->svonodes_);
  std::swap<ToTheMoonProto::Pos *>(&this->start_, &other->start_);
  std::swap<ToTheMoonProto::Pos *>(&this->end_, &other->end_);
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

// Line 3948: range 000000001822FAC8-000000001822FAE8
google::protobuf::Metadata __cdecl ToTheMoonProto::SVONodePathProto::GetMetadata(
        const ToTheMoonProto::SVONodePathProto *const this)
{
  ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return ToTheMoonProto::protobuf_server_5fonly_2fSVOProto_2eproto::`anonymous namespace'::file_level_metadata[7];
};

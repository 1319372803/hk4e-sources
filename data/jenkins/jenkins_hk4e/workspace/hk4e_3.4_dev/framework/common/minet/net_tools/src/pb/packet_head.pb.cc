// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/src/pb/packet_head.pb.cc

// Line 131: range 000000000C813D9A-000000000C813ECB
void __cdecl proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce()
{
  unsigned __int64 v0; // rbx
  _DWORD *v1; // rbp
  __int64 v2; // rax
  _BYTE v3[136]; // [rsp+0h] [rbp-88h] BYREF

  v0 = (unsigned __int64)v3;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v0 = v2;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 24 4 func";
  *(_QWORD *)(v0 + 16) = proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce;
  v1 = (_DWORD *)(v0 >> 3);
  v1[536862720] = -235802127;
  v1[536862721] = -218103808;
  v1[536862722] = -202116109;
  if ( proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    *(_QWORD *)(v0 + 32) = &`vtable for'google::protobuf::internal::FunctionClosure0 + 2;
    *(_QWORD *)(v0 + 40) = proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    *(_BYTE *)(v0 + 48) = 0;
    google::protobuf::GoogleOnceInitImpl(
      &proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      (google::protobuf::Closure *)(v0 + 32));
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)(v0 + 32));
  }
  if ( v3 == (_BYTE *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 137: range 000000000C813F40-000000000C813F5E
void __fastcall proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_RegisterTypes(
        const std::string *a1)
{
  proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  google::protobuf::internal::RegisterAllTypes(
    proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::file_level_metadata,
    4);
};

// Line 143: range 000000000C81CDFA-000000000C81CE81
void __cdecl proto::protobuf_pb_2fpacket_5fhead_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "src/pb/packet_head.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  proto::PacketHead::PacketHead_ExtMapEntry::PacketHead_ExtMapEntry((proto::PacketHead::PacketHead_ExtMapEntry *const)&proto::_PacketHead_ExtMapEntry_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto::_PacketHead_ExtMapEntry_default_instance_,
    (const void *)0x2DD660);
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry::PacketHead_ServiceAppIdMapEntry((proto::PacketHead::PacketHead_ServiceAppIdMapEntry *const)&proto::_PacketHead_ServiceAppIdMapEntry_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto::_PacketHead_ServiceAppIdMapEntry_default_instance_,
    (const void *)0x2DD660);
  proto::PacketHead::PacketHead((proto::PacketHead *const)&proto::_PacketHead_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto::_PacketHead_default_instance_,
    (const void *)0x2DD660);
  proto::DebugNotify::DebugNotify((proto::DebugNotify *const)&proto::_DebugNotify_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&proto::_DebugNotify_default_instance_,
    (const void *)0x2DD660);
  *((_QWORD *)&proto::_PacketHead_ExtMapEntry_default_instance_._instance.union_.align_to_ptr + 1) = &proto::_PacketHead_ExtMapEntry_default_instance_;
  *((_QWORD *)&proto::_PacketHead_ServiceAppIdMapEntry_default_instance_._instance.union_.align_to_ptr + 1) = &proto::_PacketHead_ServiceAppIdMapEntry_default_instance_;
};

// Line 161: range 000000000C814595-000000000C8146C6
void __cdecl proto::protobuf_pb_2fpacket_5fhead_2eproto::InitDefaults()
{
  unsigned __int64 v0; // rbx
  _DWORD *v1; // rbp
  __int64 v2; // rax
  _BYTE v3[136]; // [rsp+0h] [rbp-88h] BYREF

  v0 = (unsigned __int64)v3;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v0 = v2;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 24 4 func";
  *(_QWORD *)(v0 + 16) = proto::protobuf_pb_2fpacket_5fhead_2eproto::InitDefaults;
  v1 = (_DWORD *)(v0 >> 3);
  v1[536862720] = -235802127;
  v1[536862721] = -218103808;
  v1[536862722] = -202116109;
  if ( proto::protobuf_pb_2fpacket_5fhead_2eproto::InitDefaults(void)::once != 2 )
  {
    *(_QWORD *)(v0 + 32) = &`vtable for'google::protobuf::internal::FunctionClosure0 + 2;
    *(_QWORD *)(v0 + 40) = proto::protobuf_pb_2fpacket_5fhead_2eproto::TableStruct::InitDefaultsImpl;
    *(_BYTE *)(v0 + 48) = 0;
    google::protobuf::GoogleOnceInitImpl(
      &proto::protobuf_pb_2fpacket_5fhead_2eproto::InitDefaults(void)::once,
      (google::protobuf::Closure *)(v0 + 32));
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)(v0 + 32));
  }
  if ( v3 == (_BYTE *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 166: range 000000000C8146CB-000000000C8146FC
void __cdecl proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl();

// Line 202: range 000000000C8146FD-000000000C81482E
void __cdecl proto::protobuf_pb_2fpacket_5fhead_2eproto::AddDescriptors()
{
  unsigned __int64 v0; // rbx
  _DWORD *v1; // rbp
  __int64 v2; // rax
  _BYTE v3[136]; // [rsp+0h] [rbp-88h] BYREF

  v0 = (unsigned __int64)v3;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v0 = v2;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 24 4 func";
  *(_QWORD *)(v0 + 16) = proto::protobuf_pb_2fpacket_5fhead_2eproto::AddDescriptors;
  v1 = (_DWORD *)(v0 >> 3);
  v1[536862720] = -235802127;
  v1[536862721] = -218103808;
  v1[536862722] = -202116109;
  if ( proto::protobuf_pb_2fpacket_5fhead_2eproto::AddDescriptors(void)::once != 2 )
  {
    *(_QWORD *)(v0 + 32) = &`vtable for'google::protobuf::internal::FunctionClosure0 + 2;
    *(_QWORD *)(v0 + 40) = proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    *(_BYTE *)(v0 + 48) = 0;
    google::protobuf::GoogleOnceInitImpl(
      &proto::protobuf_pb_2fpacket_5fhead_2eproto::AddDescriptors(void)::once,
      (google::protobuf::Closure *)(v0 + 32));
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)(v0 + 32));
  }
  if ( v3 == (_BYTE *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 215: range 000000000C814884-000000000C814898
const google::protobuf::EnumDescriptor *__cdecl proto::DebugNotify_Enum_descriptor()
{
  proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::file_level_enum_descriptors[0];
};

// Line 220: range 000000000C814899-000000000C8148BE
bool __fastcall proto::DebugNotify_Enum_IsValid(int value)
{
  if ( value > 2 )
    return value == 101;
  else
    return value >= 0;
};

// Line 241: range 000000000C8148BF-000000000C8148D3
const google::protobuf::EnumDescriptor *__cdecl proto::DebugNotify_Retcode_descriptor()
{
  proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::file_level_enum_descriptors[1];
};

// Line 246: range 000000000C8148D4-000000000C8148E4
bool __fastcall proto::DebugNotify_Retcode_IsValid(int value)
{
  return (unsigned int)value <= 1;
};

// Line 265: range 000000000C8148E6-000000000C8152B8
void __fastcall proto::PacketHead::PacketHead_ExtMapEntry::PacketHead_ExtMapEntry(
        proto::PacketHead::PacketHead_ExtMapEntry *const this)
{
  __int64 v1; // rsi
  __int64 p_arena; // rax
  google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::KeyOnMemory *p_key; // rdx
  char v4; // cl
  google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ValueOnMemory *p_value; // rdx
  char v6; // cl
  google::protobuf::uint32 *has_bits; // rdx
  char v8; // al
  proto::PacketHead::PacketHead_ExtMapEntry *p_internal_metadata; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->default_instance_ >> 3) + 0x7FFF8000) )
  {
    p_arena = __asan_report_store8(&this->default_instance_, v1);
    goto LABEL_13;
  }
  this->default_instance_ = 0LL;
  p_arena = (__int64)&this->arena_;
  if ( *(_BYTE *)(((unsigned __int64)&this->arena_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8(p_arena, v1);
LABEL_14:
    __asan_report_store4(p_key, v1);
LABEL_15:
    __asan_report_store4(p_value, v1);
LABEL_16:
    p_internal_metadata = (proto::PacketHead::PacketHead_ExtMapEntry *)__asan_report_store4(has_bits, v1);
    goto LABEL_17;
  }
  this->arena_ = 0LL;
  p_key = &this->key_;
  v4 = *(_BYTE *)(((unsigned __int64)&this->key_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 16) & 7) + 3) >= v4 && v4 )
    goto LABEL_14;
  this->key_ = 0;
  p_value = &this->value_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 20) & 7) + 3) >= v6 && v6 )
    goto LABEL_15;
  this->value_ = 0;
  has_bits = this->_has_bits_;
  v8 = *(_BYTE *)(((unsigned __int64)this->_has_bits_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_16;
  this->_has_bits_[0] = 0;
  p_internal_metadata = (proto::PacketHead::PacketHead_ExtMapEntry *)&this->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    this = p_internal_metadata;
    __asan_report_store8(p_internal_metadata, v1);
    goto LABEL_18;
  }
  this->_internal_metadata_.ptr_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8(this, v1);
    JUMPOUT(0xC814A17LL);
  }
  this->_vptr_MessageLite = (int (**)(...))(&`vtable for'proto::PacketHead::PacketHead_ExtMapEntry + 2);
};

// Line 267: range 000000000C813ED0-000000000C813EEB
google::protobuf::Metadata __fastcall proto::PacketHead::PacketHead_ExtMapEntry::GetMetadata(
        const proto::PacketHead::PacketHead_ExtMapEntry *const this)
{
  proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::file_level_metadata[0];
};

// Line 272: range 000000000C813F60-000000000C813F6D
void __fastcall proto::PacketHead::PacketHead_ExtMapEntry::MergeFrom(
        proto::PacketHead::PacketHead_ExtMapEntry *const this,
        const google::protobuf::Message *other)
{
  google::protobuf::Message::MergeFrom(this, other);
};

// Line 286: range 000000000C813EEC-000000000C813F07
google::protobuf::Metadata __fastcall proto::PacketHead::PacketHead_ServiceAppIdMapEntry::GetMetadata(
        const proto::PacketHead::PacketHead_ServiceAppIdMapEntry *const this)
{
  proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::file_level_metadata[1];
};

// Line 291: range 000000000C813F6E-000000000C813F7B
void __fastcall proto::PacketHead::PacketHead_ServiceAppIdMapEntry::MergeFrom(
        proto::PacketHead::PacketHead_ServiceAppIdMapEntry *const this,
        const google::protobuf::Message *other)
{
  google::protobuf::Message::MergeFrom(this, other);
};

// Line 329: range 000000000C81C24C-000000000C81CDF9
void __fastcall proto::PacketHead::PacketHead(proto::PacketHead *const this)
{
  unsigned __int64 p_ext_map; // rbp
  __int64 v2; // rsi
  google::protobuf::Arena *Aligned; // r13
  google::protobuf::Map<unsigned int,unsigned int> *p_map; // r14
  proto::PacketHead *v5; // r12
  unsigned __int64 p_arena; // rdi
  char v7; // al
  char *v8; // rdi
  google::protobuf::Map<unsigned int,unsigned int> *v9; // rdi
  char v10; // al
  void **p_hooks_cookie; // rdi
  unsigned __int64 AlignedAndAddCleanup; // rax
  unsigned __int64 v13; // rbx
  char *v14; // rdx
  _QWORD *v15; // rdi
  google::protobuf::Arena *v16; // r13
  char *v17; // rdx
  _QWORD *v18; // rdi
  google::protobuf::Arena *v19; // r13
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap **p_elements; // rdi
  unsigned __int64 p_repeated_field; // rdi
  __int64 v22; // r13
  struct _Unwind_Exception *v23; // rbx
  char v24; // al
  void *p_service_app_id_map; // rdi
  int *p_default_enum_value; // rdi
  char v27; // al
  void **v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  char *v31; // rdx
  _QWORD *v32; // rdi
  google::protobuf::Arena *v33; // r13
  char *v34; // rdx
  _QWORD *v35; // rdi
  google::protobuf::Arena *v36; // r13
  void *v37; // r13
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap **v38; // rdi
  __int64 v39; // r13

  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, v2);
    goto LABEL_8;
  }
  this->_vptr_MessageLite = (int (**)(...))(&`vtable for'proto::PacketHead + 2);
  this = (proto::PacketHead *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8(this, v2);
    goto LABEL_9;
  }
  v5->_internal_metadata_.ptr_ = 0LL;
  p_ext_map = (unsigned __int64)&v5->ext_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->ext_map_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    p_arena = p_ext_map;
    __asan_report_store8(p_ext_map, v2);
    goto LABEL_10;
  }
  v5->ext_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapFieldBase + 2);
  p_arena = (unsigned __int64)&v5->ext_map_.arena_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->ext_map_.arena_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8(p_arena, v2);
    goto LABEL_11;
  }
  v5->ext_map_.arena_ = 0LL;
  p_arena = (unsigned __int64)&v5->ext_map_.repeated_field_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->ext_map_.repeated_field_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8(p_arena, v2);
    goto LABEL_12;
  }
  v5->ext_map_.repeated_field_ = 0LL;
  google::protobuf::internal::Mutex::Mutex(&v5->ext_map_.mutex_);
LABEL_12:
  v7 = *(_BYTE *)(((p_ext_map + 32) >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_store4(p_ext_map + 32, v2);
    goto LABEL_25;
  }
  *(_DWORD *)(p_ext_map + 32) = 0;
  if ( *(_BYTE *)((p_ext_map >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v8 = (char *)p_ext_map;
    __asan_report_store8(p_ext_map, v2);
    goto LABEL_26;
  }
  v5->ext_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>
                                                  + 2);
  v8 = (char *)(p_ext_map + 40);
  if ( *(_BYTE *)(((p_ext_map + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8(v8, v2);
    goto LABEL_27;
  }
  *(_QWORD *)(p_ext_map + 40) = 0LL;
  p_map = (google::protobuf::Map<unsigned int,unsigned int> *)(p_ext_map + 48);
  if ( *(_BYTE *)(((p_ext_map + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    v9 = p_map;
    __asan_report_store8(p_map, v2);
LABEL_28:
    __asan_report_store4(v9, v2);
    goto LABEL_29;
  }
  *(_QWORD *)(p_ext_map + 48) = 0LL;
  v9 = (google::protobuf::Map<unsigned int,unsigned int> *)(p_ext_map + 56);
  v10 = *(_BYTE *)(((p_ext_map + 56) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_28;
  *(_DWORD *)(p_ext_map + 56) = 0;
  if ( *(_BYTE *)(((unsigned __int64)p_map >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_map);
LABEL_30:
    v13 = operator new(0x30uLL);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    {
      v15 = (_QWORD *)v13;
      __asan_report_store8(v13, v2);
    }
    else
    {
      *(_QWORD *)v13 = 0LL;
      v14 = (char *)(v13 + __rdtsc());
      v15 = (_QWORD *)(v13 + 16);
      if ( !*(_BYTE *)(((v13 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v13 + 16) = v14;
        v15 = (_QWORD *)(v13 + 32);
        if ( !*(_BYTE *)(((v13 + 32) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          v15 = (_QWORD *)(v13 + 40);
          if ( !*(_BYTE *)(((v13 + 40) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v13 + 40) = Aligned;
            v15 = (_QWORD *)(v13 + 40);
            if ( !*(_BYTE *)(((v13 + 40) >> 3) + 0x7FFF8000) )
            {
              v16 = *(google::protobuf::Arena **)(v13 + 40);
              if ( v16 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&v16->hooks_cookie_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(&v16->hooks_cookie_);
                }
                else if ( !v16->hooks_cookie_ )
                {
LABEL_38:
                  Aligned = (google::protobuf::Arena *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                         &v16->impl_,
                                                         0x40uLL);
LABEL_47:
                  memset(Aligned, 0, 0x40uLL);
                  *(_QWORD *)(v13 + 32) = Aligned;
                  p_hooks_cookie = (void **)(v13 + 24);
                  if ( *(_BYTE *)(((v13 + 24) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store8(p_hooks_cookie, 0LL);
                  }
                  else
                  {
                    *(_QWORD *)(v13 + 24) = 8LL;
                    p_hooks_cookie = (void **)(v13 + 8);
                    if ( !*(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)(v13 + 8) = 8LL;
                      goto LABEL_74;
                    }
                  }
                  __asan_report_store8(p_hooks_cookie, 0LL);
                  goto LABEL_52;
                }
                google::protobuf::Arena::OnArenaAllocation(
                  v16,
                  (const std::type_info *)&`typeinfo for'unsigned char,
                  0x40uLL);
                goto LABEL_38;
              }
LABEL_44:
              Aligned = (google::protobuf::Arena *)operator new(0x40uLL);
              goto LABEL_47;
            }
LABEL_43:
            __asan_report_load8(v15);
            goto LABEL_44;
          }
LABEL_42:
          __asan_report_store8(v15, v2);
          goto LABEL_43;
        }
LABEL_41:
        __asan_report_store8(v15, v2);
        goto LABEL_42;
      }
    }
    __asan_report_store8(v15, v2);
    goto LABEL_41;
  }
  Aligned = *(google::protobuf::Arena **)(p_ext_map + 48);
  if ( !Aligned )
    goto LABEL_30;
  p_hooks_cookie = &Aligned->hooks_cookie_;
  if ( *(_BYTE *)(((unsigned __int64)&Aligned->hooks_cookie_ >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(p_hooks_cookie);
    goto LABEL_53;
  }
  if ( Aligned->hooks_cookie_ )
LABEL_53:
    google::protobuf::Arena::OnArenaAllocation(
      Aligned,
      (const std::type_info *)&`typeinfo for'google::protobuf::Map<unsigned int,unsigned int>::InnerMap,
      0x30uLL);
  AlignedAndAddCleanup = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                             &Aligned->impl_,
                                             0x30uLL,
                                             google::protobuf::internal::arena_destruct_object<google::protobuf::Map<unsigned int,unsigned int>::InnerMap>);
  v13 = AlignedAndAddCleanup;
  if ( *(_BYTE *)((AlignedAndAddCleanup >> 3) + 0x7FFF8000) )
  {
    v18 = (_QWORD *)AlignedAndAddCleanup;
    __asan_report_store8(AlignedAndAddCleanup, 48LL);
    goto LABEL_64;
  }
  *(_QWORD *)AlignedAndAddCleanup = 0LL;
  v17 = (char *)(AlignedAndAddCleanup + __rdtsc());
  v18 = (_QWORD *)(v13 + 16);
  if ( *(_BYTE *)(((v13 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_store8(v18, 48LL);
    goto LABEL_65;
  }
  *(_QWORD *)(v13 + 16) = v17;
  v18 = (_QWORD *)(v13 + 32);
  if ( *(_BYTE *)(((v13 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store8(v18, 48LL);
    goto LABEL_66;
  }
  *(_QWORD *)(v13 + 32) = 0LL;
  v18 = (_QWORD *)(v13 + 40);
  if ( *(_BYTE *)(((v13 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_store8(v18, 48LL);
    goto LABEL_67;
  }
  *(_QWORD *)(v13 + 40) = Aligned;
  v18 = (_QWORD *)(v13 + 40);
  if ( *(_BYTE *)(((v13 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(v18);
    goto LABEL_68;
  }
  v19 = *(google::protobuf::Arena **)(v13 + 40);
  if ( v19 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v19->hooks_cookie_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v19->hooks_cookie_);
    }
    else if ( !v19->hooks_cookie_ )
    {
LABEL_62:
      Aligned = (google::protobuf::Arena *)google::protobuf::internal::ArenaImpl::AllocateAligned(&v19->impl_, 0x40uLL);
      goto LABEL_71;
    }
    google::protobuf::Arena::OnArenaAllocation(v19, (const std::type_info *)&`typeinfo for'unsigned char, 0x40uLL);
    goto LABEL_62;
  }
LABEL_68:
  Aligned = (google::protobuf::Arena *)operator new(0x40uLL);
LABEL_71:
  memset(Aligned, 0, 0x40uLL);
  *(_QWORD *)(v13 + 32) = Aligned;
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)(v13 + 24);
  if ( *(_BYTE *)(((v13 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_elements, 0LL);
    goto LABEL_80;
  }
  *(_QWORD *)(v13 + 24) = 8LL;
  p_elements = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)(v13 + 8);
  if ( *(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_store8(p_elements, 0LL);
    goto LABEL_81;
  }
  *(_QWORD *)(v13 + 8) = 8LL;
LABEL_74:
  p_elements = &p_map->elements_;
  if ( *(_BYTE *)(((unsigned __int64)&p_map->elements_ >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_store8(p_elements, 0LL);
    goto LABEL_82;
  }
  p_map->elements_ = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)v13;
  *(_DWORD *)(p_ext_map + 56) = 0;
  p_ext_map = (unsigned __int64)&v5->service_app_id_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->service_app_id_map_ >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    p_repeated_field = p_ext_map;
    __asan_report_store8(p_ext_map, 0LL);
    goto LABEL_83;
  }
  v5->service_app_id_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapFieldBase + 2);
  p_repeated_field = (unsigned __int64)&v5->service_app_id_map_.arena_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->service_app_id_map_.arena_ >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_store8(p_repeated_field, 0LL);
LABEL_84:
    v22 = __asan_report_store8(p_repeated_field, 0LL);
    operator delete((void *)v13, 0x30uLL);
    v23 = (struct _Unwind_Exception *)v22;
    while ( *(_BYTE *)((p_ext_map >> 3) + 0x7FFF8000) )
      v23 = (struct _Unwind_Exception *)__asan_report_store8(p_ext_map, 48LL);
    v5->ext_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>
                                                    + 2);
    google::protobuf::internal::MapFieldBase::~MapFieldBase((google::protobuf::internal::MapFieldBase *const)p_ext_map);
    goto LABEL_88;
  }
  v5->service_app_id_map_.arena_ = 0LL;
  p_repeated_field = (unsigned __int64)&v5->service_app_id_map_.repeated_field_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->service_app_id_map_.repeated_field_ >> 3) + 0x7FFF8000) )
    goto LABEL_84;
  v5->service_app_id_map_.repeated_field_ = 0LL;
  google::protobuf::internal::Mutex::Mutex(&v5->service_app_id_map_.mutex_);
  v24 = *(_BYTE *)(((unsigned __int64)&v5->service_app_id_map_.state_ >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
  {
    __asan_report_store4(&v5->service_app_id_map_.state_, 0LL);
    goto LABEL_102;
  }
  v5->service_app_id_map_.state_ = 0;
  if ( *(_BYTE *)((p_ext_map >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    p_service_app_id_map = &v5->service_app_id_map_;
    __asan_report_store8(&v5->service_app_id_map_, 0LL);
    goto LABEL_103;
  }
  v5->service_app_id_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>
                                                             + 2);
  p_service_app_id_map = &v5->service_app_id_map_.impl_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->service_app_id_map_.impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    __asan_report_store8(p_service_app_id_map, 0LL);
    goto LABEL_104;
  }
  v5->service_app_id_map_.impl_.arena_ = 0LL;
  p_map = &v5->service_app_id_map_.impl_.map_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->service_app_id_map_.impl_.map_ >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    p_default_enum_value = (int *)p_map;
    __asan_report_store8(p_map, 0LL);
LABEL_105:
    __asan_report_store4(p_default_enum_value, 0LL);
    goto LABEL_106;
  }
  v5->service_app_id_map_.impl_.map_.arena_ = 0LL;
  p_default_enum_value = &v5->service_app_id_map_.impl_.map_.default_enum_value_;
  v27 = *(_BYTE *)(((unsigned __int64)&v5->service_app_id_map_.impl_.map_.default_enum_value_ >> 3) + 0x7FFF8000);
  if ( v27 && v27 <= 3 )
    goto LABEL_105;
  v5->service_app_id_map_.impl_.map_.default_enum_value_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)p_map >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load8(p_map);
LABEL_107:
    v30 = operator new(0x30uLL);
    if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    {
      v32 = (_QWORD *)v30;
      __asan_report_store8(v30, 0LL);
    }
    else
    {
      *(_QWORD *)v30 = 0LL;
      v31 = (char *)(v30 + __rdtsc());
      v32 = (_QWORD *)(v30 + 16);
      if ( !*(_BYTE *)(((v30 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v30 + 16) = v31;
        v32 = (_QWORD *)(v30 + 32);
        if ( !*(_BYTE *)(((v30 + 32) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v30 + 32) = 0LL;
          v32 = (_QWORD *)(v30 + 40);
          if ( !*(_BYTE *)(((v30 + 40) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v30 + 40) = Aligned;
            v32 = (_QWORD *)(v30 + 40);
            if ( !*(_BYTE *)(((v30 + 40) >> 3) + 0x7FFF8000) )
            {
              v33 = *(google::protobuf::Arena **)(v30 + 40);
              if ( v33 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&v33->hooks_cookie_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(&v33->hooks_cookie_);
                }
                else if ( !v33->hooks_cookie_ )
                {
LABEL_115:
                  Aligned = (google::protobuf::Arena *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                         &v33->impl_,
                                                         0x40uLL);
LABEL_124:
                  memset(Aligned, 0, 0x40uLL);
                  *(_QWORD *)(v30 + 32) = Aligned;
                  v28 = (void **)(v30 + 24);
                  if ( *(_BYTE *)(((v30 + 24) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store8(v28, 0LL);
                  }
                  else
                  {
                    *(_QWORD *)(v30 + 24) = 8LL;
                    v28 = (void **)(v30 + 8);
                    if ( !*(_BYTE *)(((v30 + 8) >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)(v30 + 8) = 8LL;
                      goto LABEL_151;
                    }
                  }
                  __asan_report_store8(v28, 0LL);
                  goto LABEL_129;
                }
                google::protobuf::Arena::OnArenaAllocation(
                  v33,
                  (const std::type_info *)&`typeinfo for'unsigned char,
                  0x40uLL);
                goto LABEL_115;
              }
LABEL_121:
              Aligned = (google::protobuf::Arena *)operator new(0x40uLL);
              goto LABEL_124;
            }
LABEL_120:
            __asan_report_load8(v32);
            goto LABEL_121;
          }
LABEL_119:
          __asan_report_store8(v32, 0LL);
          goto LABEL_120;
        }
LABEL_118:
        __asan_report_store8(v32, 0LL);
        goto LABEL_119;
      }
    }
    __asan_report_store8(v32, 0LL);
    goto LABEL_118;
  }
  Aligned = v5->service_app_id_map_.impl_.map_.arena_;
  if ( !Aligned )
    goto LABEL_107;
  v28 = &Aligned->hooks_cookie_;
  if ( *(_BYTE *)(((unsigned __int64)&Aligned->hooks_cookie_ >> 3) + 0x7FFF8000) )
  {
LABEL_129:
    __asan_report_load8(v28);
    goto LABEL_130;
  }
  if ( Aligned->hooks_cookie_ )
LABEL_130:
    google::protobuf::Arena::OnArenaAllocation(
      Aligned,
      (const std::type_info *)&`typeinfo for'google::protobuf::Map<unsigned int,unsigned int>::InnerMap,
      0x30uLL);
  v29 = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                            &Aligned->impl_,
                            0x30uLL,
                            google::protobuf::internal::arena_destruct_object<google::protobuf::Map<unsigned int,unsigned int>::InnerMap>);
  v30 = v29;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
    v35 = (_QWORD *)v29;
    __asan_report_store8(v29, 48LL);
    goto LABEL_141;
  }
  *(_QWORD *)v29 = 0LL;
  v34 = (char *)(v29 + __rdtsc());
  v35 = (_QWORD *)(v30 + 16);
  if ( *(_BYTE *)(((v30 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_141:
    __asan_report_store8(v35, 48LL);
    goto LABEL_142;
  }
  *(_QWORD *)(v30 + 16) = v34;
  v35 = (_QWORD *)(v30 + 32);
  if ( *(_BYTE *)(((v30 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_142:
    __asan_report_store8(v35, 48LL);
    goto LABEL_143;
  }
  *(_QWORD *)(v30 + 32) = 0LL;
  v35 = (_QWORD *)(v30 + 40);
  if ( *(_BYTE *)(((v30 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_143:
    __asan_report_store8(v35, 48LL);
    goto LABEL_144;
  }
  *(_QWORD *)(v30 + 40) = Aligned;
  v35 = (_QWORD *)(v30 + 40);
  if ( *(_BYTE *)(((v30 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_144:
    __asan_report_load8(v35);
    goto LABEL_145;
  }
  v36 = *(google::protobuf::Arena **)(v30 + 40);
  if ( v36 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v36->hooks_cookie_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v36->hooks_cookie_);
    }
    else if ( !v36->hooks_cookie_ )
    {
LABEL_139:
      v37 = google::protobuf::internal::ArenaImpl::AllocateAligned(&v36->impl_, 0x40uLL);
      goto LABEL_148;
    }
    google::protobuf::Arena::OnArenaAllocation(v36, (const std::type_info *)&`typeinfo for'unsigned char, 0x40uLL);
    goto LABEL_139;
  }
LABEL_145:
  v37 = (void *)operator new(0x40uLL);
LABEL_148:
  memset(v37, 0, 0x40uLL);
  *(_QWORD *)(v30 + 32) = v37;
  v38 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)(v30 + 24);
  if ( *(_BYTE *)(((v30 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v38, 0LL);
    goto LABEL_155;
  }
  *(_QWORD *)(v30 + 24) = 8LL;
  v38 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)(v30 + 8);
  if ( *(_BYTE *)(((v30 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_155:
    __asan_report_store8(v38, 0LL);
LABEL_156:
    v39 = __asan_report_store8(v38, 0LL);
    operator delete((void *)v30, 0x30uLL);
    v23 = (struct _Unwind_Exception *)v39;
    while ( *(_BYTE *)((p_ext_map >> 3) + 0x7FFF8000) )
      v23 = (struct _Unwind_Exception *)__asan_report_store8(&v5->service_app_id_map_, 48LL);
    v5->service_app_id_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>
                                                               + 2);
    google::protobuf::internal::MapFieldBase::~MapFieldBase(&v5->service_app_id_map_);
    if ( *(_BYTE *)(((unsigned __int64)&v5->ext_map_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(&v5->ext_map_, 48LL);
      goto LABEL_161;
    }
    v5->ext_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>
                                                    + 2);
    google::protobuf::Map<unsigned int,unsigned int>::~Map(&v5->ext_map_.impl_.map_);
    if ( *(_BYTE *)(((unsigned __int64)&v5->ext_map_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v5->ext_map_, 48LL);
    v5->ext_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>
                                                    + 2);
    google::protobuf::internal::MapFieldBase::~MapFieldBase(&v5->ext_map_);
LABEL_88:
    google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&v5->_internal_metadata_);
    __asan_handle_no_return(&v5->_internal_metadata_);
    _Unwind_Resume(v23);
  }
  *(_QWORD *)(v30 + 8) = 8LL;
LABEL_151:
  v38 = &p_map->elements_;
  if ( *(_BYTE *)(((unsigned __int64)&p_map->elements_ >> 3) + 0x7FFF8000) )
    goto LABEL_156;
  p_map->elements_ = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)v30;
  v5->service_app_id_map_.impl_.map_.default_enum_value_ = 0;
  if ( v5 != (proto::PacketHead *)&proto::_PacketHead_default_instance_ )
    proto::protobuf_pb_2fpacket_5fhead_2eproto::InitDefaults();
LABEL_161:
  proto::PacketHead::SharedCtor(v5);
};

// Line 337: range 000000000C81E7DE-000000000C81F4BF
void __fastcall proto::PacketHead::PacketHead(proto::PacketHead *const this, const proto::PacketHead *from)
{
  google::protobuf::Arena *Aligned; // r12
  unsigned __int64 p_ext_map; // r13
  const proto::PacketHead *v4; // r14
  google::protobuf::Arena *arena; // r15
  proto::PacketHead *v6; // rbx
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *p_arena; // rdi
  char v8; // al
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *v9; // rdi
  int *v10; // rdi
  char v11; // al
  void **p_hooks_cookie; // rdi
  unsigned __int64 AlignedAndAddCleanup; // rax
  google::protobuf::uint64 v14; // rbp
  char *v15; // rdx
  _QWORD *v16; // rdi
  google::protobuf::Arena *v17; // r12
  __int64 v18; // rsi
  char *v19; // rdx
  _QWORD *v20; // rdi
  google::protobuf::Arena *v21; // r12
  google::protobuf::uint64 *p_space_allocated; // rdi
  google::protobuf::Arena *p_repeated_field; // rdi
  __int64 v24; // r12
  struct _Unwind_Exception *v25; // rbp
  char v26; // al
  void *p_service_app_id_map; // rdi
  int *p_default_enum_value; // rdi
  char v29; // al
  void *p_table; // rdi
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v31; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v32; // rbp
  char *v33; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *p_seed; // rdi
  __int64 EmptyTable; // rax
  char *v36; // rdx
  _QWORD *p_num_elements; // rdi
  google::protobuf::Arena *v38; // r15
  void *v39; // r15
  void *p_index_of_first_non_null; // rdi
  char v41; // dl
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // rdx
  __int64 v43; // rax
  const google::protobuf::UnknownFieldSet *v44; // rbp
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v46; // rdi
  const std::string *v47; // rsi
  google::protobuf::internal::ArenaStringPtr *p_span_context_str; // rdi
  google::protobuf::Map<unsigned int,unsigned int> *p_map; // [rsp+8h] [rbp-40h]

  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, from);
    goto LABEL_8;
  }
  v4 = from;
  this->_vptr_MessageLite = (int (**)(...))(&`vtable for'proto::PacketHead + 2);
  this = (proto::PacketHead *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8(this, from);
    goto LABEL_9;
  }
  v6->_internal_metadata_.ptr_ = 0LL;
  p_ext_map = (unsigned __int64)&v6->ext_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->ext_map_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    p_arena = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)p_ext_map;
    __asan_report_store8(p_ext_map, from);
    goto LABEL_10;
  }
  v6->ext_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapFieldBase + 2);
  p_arena = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)&v6->ext_map_.arena_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->ext_map_.arena_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8(p_arena, from);
    goto LABEL_11;
  }
  v6->ext_map_.arena_ = 0LL;
  p_arena = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)&v6->ext_map_.repeated_field_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->ext_map_.repeated_field_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8(p_arena, from);
    goto LABEL_12;
  }
  v6->ext_map_.repeated_field_ = 0LL;
  google::protobuf::internal::Mutex::Mutex(&v6->ext_map_.mutex_);
LABEL_12:
  v8 = *(_BYTE *)(((p_ext_map + 32) >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_store4(p_ext_map + 32, from);
    goto LABEL_25;
  }
  *(_DWORD *)(p_ext_map + 32) = 0;
  if ( *(_BYTE *)((p_ext_map >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v9 = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)p_ext_map;
    __asan_report_store8(p_ext_map, from);
    goto LABEL_26;
  }
  v6->ext_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>
                                                  + 2);
  v9 = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)(p_ext_map + 40);
  if ( *(_BYTE *)(((p_ext_map + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8(v9, from);
    goto LABEL_27;
  }
  *(_QWORD *)(p_ext_map + 40) = 0LL;
  arena = (google::protobuf::Arena *)(p_ext_map + 48);
  if ( *(_BYTE *)(((p_ext_map + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    v10 = (int *)arena;
    __asan_report_store8(arena, from);
LABEL_28:
    __asan_report_store4(v10, from);
    goto LABEL_29;
  }
  *(_QWORD *)(p_ext_map + 48) = 0LL;
  v10 = (int *)(p_ext_map + 56);
  v11 = *(_BYTE *)(((p_ext_map + 56) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_28;
  *(_DWORD *)(p_ext_map + 56) = 0;
  if ( *(_BYTE *)(((unsigned __int64)arena >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(arena);
LABEL_30:
    v14 = operator new(0x30uLL);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    {
      v16 = (_QWORD *)v14;
      __asan_report_store8(v14, from);
    }
    else
    {
      *(_QWORD *)v14 = 0LL;
      v15 = (char *)(v14 + __rdtsc());
      v16 = (_QWORD *)(v14 + 16);
      if ( !*(_BYTE *)(((v14 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v14 + 16) = v15;
        v16 = (_QWORD *)(v14 + 32);
        if ( !*(_BYTE *)(((v14 + 32) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v14 + 32) = 0LL;
          v16 = (_QWORD *)(v14 + 40);
          if ( !*(_BYTE *)(((v14 + 40) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v14 + 40) = Aligned;
            v16 = (_QWORD *)(v14 + 40);
            if ( !*(_BYTE *)(((v14 + 40) >> 3) + 0x7FFF8000) )
            {
              v17 = *(google::protobuf::Arena **)(v14 + 40);
              if ( v17 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&v17->hooks_cookie_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(&v17->hooks_cookie_);
                }
                else if ( !v17->hooks_cookie_ )
                {
LABEL_38:
                  Aligned = (google::protobuf::Arena *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                         &v17->impl_,
                                                         0x40uLL);
LABEL_47:
                  v18 = 0LL;
                  memset(Aligned, 0, 0x40uLL);
                  *(_QWORD *)(v14 + 32) = Aligned;
                  p_hooks_cookie = (void **)(v14 + 24);
                  if ( *(_BYTE *)(((v14 + 24) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store8(p_hooks_cookie, 0LL);
                  }
                  else
                  {
                    *(_QWORD *)(v14 + 24) = 8LL;
                    p_hooks_cookie = (void **)(v14 + 8);
                    if ( !*(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)(v14 + 8) = 8LL;
                      goto LABEL_74;
                    }
                  }
                  __asan_report_store8(p_hooks_cookie, 0LL);
                  goto LABEL_52;
                }
                google::protobuf::Arena::OnArenaAllocation(
                  v17,
                  (const std::type_info *)&`typeinfo for'unsigned char,
                  0x40uLL);
                goto LABEL_38;
              }
LABEL_44:
              Aligned = (google::protobuf::Arena *)operator new(0x40uLL);
              goto LABEL_47;
            }
LABEL_43:
            __asan_report_load8(v16);
            goto LABEL_44;
          }
LABEL_42:
          __asan_report_store8(v16, from);
          goto LABEL_43;
        }
LABEL_41:
        __asan_report_store8(v16, from);
        goto LABEL_42;
      }
    }
    __asan_report_store8(v16, from);
    goto LABEL_41;
  }
  Aligned = *(google::protobuf::Arena **)(p_ext_map + 48);
  if ( !Aligned )
    goto LABEL_30;
  p_hooks_cookie = &Aligned->hooks_cookie_;
  if ( *(_BYTE *)(((unsigned __int64)&Aligned->hooks_cookie_ >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(p_hooks_cookie);
    goto LABEL_53;
  }
  if ( Aligned->hooks_cookie_ )
LABEL_53:
    google::protobuf::Arena::OnArenaAllocation(
      Aligned,
      (const std::type_info *)&`typeinfo for'google::protobuf::Map<unsigned int,unsigned int>::InnerMap,
      0x30uLL);
  AlignedAndAddCleanup = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                             &Aligned->impl_,
                                             0x30uLL,
                                             google::protobuf::internal::arena_destruct_object<google::protobuf::Map<unsigned int,unsigned int>::InnerMap>);
  v14 = AlignedAndAddCleanup;
  if ( *(_BYTE *)((AlignedAndAddCleanup >> 3) + 0x7FFF8000) )
  {
    v20 = (_QWORD *)AlignedAndAddCleanup;
    __asan_report_store8(AlignedAndAddCleanup, 48LL);
    goto LABEL_64;
  }
  *(_QWORD *)AlignedAndAddCleanup = 0LL;
  v19 = (char *)(AlignedAndAddCleanup + __rdtsc());
  v20 = (_QWORD *)(v14 + 16);
  if ( *(_BYTE *)(((v14 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_store8(v20, 48LL);
    goto LABEL_65;
  }
  *(_QWORD *)(v14 + 16) = v19;
  v20 = (_QWORD *)(v14 + 32);
  if ( *(_BYTE *)(((v14 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store8(v20, 48LL);
    goto LABEL_66;
  }
  *(_QWORD *)(v14 + 32) = 0LL;
  v20 = (_QWORD *)(v14 + 40);
  if ( *(_BYTE *)(((v14 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_store8(v20, 48LL);
    goto LABEL_67;
  }
  *(_QWORD *)(v14 + 40) = Aligned;
  v20 = (_QWORD *)(v14 + 40);
  if ( *(_BYTE *)(((v14 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(v20);
    goto LABEL_68;
  }
  v21 = *(google::protobuf::Arena **)(v14 + 40);
  if ( v21 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v21->hooks_cookie_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v21->hooks_cookie_);
    }
    else if ( !v21->hooks_cookie_ )
    {
LABEL_62:
      Aligned = (google::protobuf::Arena *)google::protobuf::internal::ArenaImpl::AllocateAligned(&v21->impl_, 0x40uLL);
      goto LABEL_71;
    }
    google::protobuf::Arena::OnArenaAllocation(v21, (const std::type_info *)&`typeinfo for'unsigned char, 0x40uLL);
    goto LABEL_62;
  }
LABEL_68:
  Aligned = (google::protobuf::Arena *)operator new(0x40uLL);
LABEL_71:
  v18 = 0LL;
  memset(Aligned, 0, 0x40uLL);
  *(_QWORD *)(v14 + 32) = Aligned;
  p_space_allocated = (google::protobuf::uint64 *)(v14 + 24);
  if ( *(_BYTE *)(((v14 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_space_allocated, 0LL);
    goto LABEL_80;
  }
  *(_QWORD *)(v14 + 24) = 8LL;
  p_space_allocated = (google::protobuf::uint64 *)(v14 + 8);
  if ( *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_store8(p_space_allocated, 0LL);
    goto LABEL_81;
  }
  *(_QWORD *)(v14 + 8) = 8LL;
LABEL_74:
  p_space_allocated = &arena->impl_.space_allocated_;
  if ( *(_BYTE *)(((unsigned __int64)&arena->impl_.space_allocated_ >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_store8(p_space_allocated, 0LL);
    goto LABEL_82;
  }
  arena->impl_.space_allocated_ = v14;
  *(_DWORD *)(p_ext_map + 56) = 0;
  Aligned = (google::protobuf::Arena *)&v6->service_app_id_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->service_app_id_map_ >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    p_repeated_field = Aligned;
    __asan_report_store8(Aligned, 0LL);
    goto LABEL_83;
  }
  v6->service_app_id_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapFieldBase + 2);
  p_repeated_field = (google::protobuf::Arena *)&v6->service_app_id_map_.arena_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->service_app_id_map_.arena_ >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_store8(p_repeated_field, 0LL);
LABEL_84:
    v24 = __asan_report_store8(p_repeated_field, 0LL);
    operator delete((void *)v14, 0x30uLL);
    v25 = (struct _Unwind_Exception *)v24;
    while ( *(_BYTE *)((p_ext_map >> 3) + 0x7FFF8000) )
      v25 = (struct _Unwind_Exception *)__asan_report_store8(p_ext_map, 48LL);
    v6->ext_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>
                                                    + 2);
    google::protobuf::internal::MapFieldBase::~MapFieldBase((google::protobuf::internal::MapFieldBase *const)p_ext_map);
    goto LABEL_88;
  }
  v6->service_app_id_map_.arena_ = 0LL;
  p_repeated_field = (google::protobuf::Arena *)&v6->service_app_id_map_.repeated_field_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->service_app_id_map_.repeated_field_ >> 3) + 0x7FFF8000) )
    goto LABEL_84;
  v6->service_app_id_map_.repeated_field_ = 0LL;
  google::protobuf::internal::Mutex::Mutex(&v6->service_app_id_map_.mutex_);
  v26 = *(_BYTE *)(((unsigned __int64)&v6->service_app_id_map_.state_ >> 3) + 0x7FFF8000);
  if ( v26 && v26 <= 3 )
  {
    __asan_report_store4(&v6->service_app_id_map_.state_, 0LL);
    goto LABEL_102;
  }
  v6->service_app_id_map_.state_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)Aligned >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    p_service_app_id_map = &v6->service_app_id_map_;
    __asan_report_store8(&v6->service_app_id_map_, 0LL);
    goto LABEL_103;
  }
  v6->service_app_id_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>
                                                             + 2);
  p_service_app_id_map = &v6->service_app_id_map_.impl_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->service_app_id_map_.impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    __asan_report_store8(p_service_app_id_map, 0LL);
    goto LABEL_104;
  }
  v6->service_app_id_map_.impl_.arena_ = 0LL;
  p_map = &v6->service_app_id_map_.impl_.map_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->service_app_id_map_.impl_.map_ >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    p_default_enum_value = (int *)p_map;
    __asan_report_store8(p_map, 0LL);
LABEL_105:
    __asan_report_store4(p_default_enum_value, 0LL);
    goto LABEL_106;
  }
  v6->service_app_id_map_.impl_.map_.arena_ = 0LL;
  p_default_enum_value = &v6->service_app_id_map_.impl_.map_.default_enum_value_;
  v29 = *(_BYTE *)(((unsigned __int64)&v6->service_app_id_map_.impl_.map_.default_enum_value_ >> 3) + 0x7FFF8000);
  if ( v29 && v29 <= 3 )
    goto LABEL_105;
  v6->service_app_id_map_.impl_.map_.default_enum_value_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)p_map >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load8(p_map);
LABEL_107:
    v32 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)operator new(0x30uLL);
    if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
    {
      p_seed = v32;
      __asan_report_store8(v32, 0LL);
    }
    else
    {
      v32->num_elements_ = 0LL;
      v33 = (char *)v32 + __rdtsc();
      p_seed = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)&v32->seed_;
      if ( !*(_BYTE *)(((unsigned __int64)&v32->seed_ >> 3) + 0x7FFF8000) )
      {
        v32->seed_ = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v33;
        p_seed = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)&v32->table_;
        if ( !*(_BYTE *)(((unsigned __int64)&v32->table_ >> 3) + 0x7FFF8000) )
        {
          v32->table_ = 0LL;
          p_seed = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)&v32->alloc_;
          if ( !*(_BYTE *)(((unsigned __int64)&v32->alloc_ >> 3) + 0x7FFF8000) )
          {
            v32->alloc_.arena_ = arena;
            v18 = 8LL;
            EmptyTable = (__int64)google::protobuf::Map<unsigned int,unsigned int>::InnerMap::CreateEmptyTable(
                                    v32,
                                    8uLL);
            goto LABEL_116;
          }
LABEL_115:
          EmptyTable = __asan_report_store8(p_seed, 0LL);
LABEL_116:
          p_table = &v32->table_;
          if ( *(_BYTE *)(((unsigned __int64)&v32->table_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_store8(p_table, v18);
          }
          else
          {
            v32->table_ = (void **)EmptyTable;
            p_table = &v32->index_of_first_non_null_;
            if ( !*(_BYTE *)(((unsigned __int64)&v32->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
            {
              v32->index_of_first_non_null_ = 8LL;
              p_table = &v32->num_buckets_;
              if ( !*(_BYTE *)(((unsigned __int64)&v32->num_buckets_ >> 3) + 0x7FFF8000) )
              {
                v32->num_buckets_ = 8LL;
                goto LABEL_145;
              }
              goto LABEL_122;
            }
          }
          __asan_report_store8(p_table, v18);
LABEL_122:
          __asan_report_store8(p_table, v18);
          goto LABEL_123;
        }
LABEL_114:
        __asan_report_store8(p_seed, 0LL);
        goto LABEL_115;
      }
    }
    __asan_report_store8(p_seed, 0LL);
    goto LABEL_114;
  }
  arena = v6->service_app_id_map_.impl_.map_.arena_;
  if ( !arena )
    goto LABEL_107;
  p_table = &arena->hooks_cookie_;
  if ( *(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
  {
LABEL_123:
    __asan_report_load8(p_table);
    goto LABEL_124;
  }
  if ( arena->hooks_cookie_ )
LABEL_124:
    google::protobuf::Arena::OnArenaAllocation(
      arena,
      (const std::type_info *)&`typeinfo for'google::protobuf::Map<unsigned int,unsigned int>::InnerMap,
      0x30uLL);
  v31 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                        &arena->impl_,
                                                                        0x30uLL,
                                                                        google::protobuf::internal::arena_destruct_object<google::protobuf::Map<unsigned int,unsigned int>::InnerMap>);
  v32 = v31;
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    p_num_elements = &v31->num_elements_;
    __asan_report_store8(v31, 48LL);
    goto LABEL_135;
  }
  v31->num_elements_ = 0LL;
  v36 = (char *)v31 + __rdtsc();
  p_num_elements = &v32->seed_;
  if ( *(_BYTE *)(((unsigned __int64)&v32->seed_ >> 3) + 0x7FFF8000) )
  {
LABEL_135:
    __asan_report_store8(p_num_elements, 48LL);
    goto LABEL_136;
  }
  v32->seed_ = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v36;
  p_num_elements = &v32->table_;
  if ( *(_BYTE *)(((unsigned __int64)&v32->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_136:
    __asan_report_store8(p_num_elements, 48LL);
    goto LABEL_137;
  }
  v32->table_ = 0LL;
  p_num_elements = &v32->alloc_.arena_;
  if ( *(_BYTE *)(((unsigned __int64)&v32->alloc_ >> 3) + 0x7FFF8000) )
  {
LABEL_137:
    __asan_report_store8(p_num_elements, 48LL);
    goto LABEL_138;
  }
  v32->alloc_.arena_ = arena;
  p_num_elements = &v32->alloc_.arena_;
  if ( *(_BYTE *)(((unsigned __int64)&v32->alloc_ >> 3) + 0x7FFF8000) )
  {
LABEL_138:
    __asan_report_load8(p_num_elements);
    goto LABEL_139;
  }
  v38 = v32->alloc_.arena_;
  if ( v38 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v38->hooks_cookie_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v38->hooks_cookie_);
    }
    else if ( !v38->hooks_cookie_ )
    {
LABEL_133:
      v39 = google::protobuf::internal::ArenaImpl::AllocateAligned(&v38->impl_, 0x40uLL);
      goto LABEL_142;
    }
    google::protobuf::Arena::OnArenaAllocation(v38, (const std::type_info *)&`typeinfo for'unsigned char, 0x40uLL);
    goto LABEL_133;
  }
LABEL_139:
  v39 = (void *)operator new(0x40uLL);
LABEL_142:
  v18 = 0LL;
  memset(v39, 0, 0x40uLL);
  v32->table_ = (void **)v39;
  p_index_of_first_non_null = &v32->index_of_first_non_null_;
  if ( *(_BYTE *)(((unsigned __int64)&v32->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_index_of_first_non_null, 0LL);
    goto LABEL_152;
  }
  v32->index_of_first_non_null_ = 8LL;
  p_index_of_first_non_null = &v32->num_buckets_;
  if ( *(_BYTE *)(((unsigned __int64)&v32->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_152:
    __asan_report_store8(p_index_of_first_non_null, 0LL);
    goto LABEL_153;
  }
  v32->num_buckets_ = 8LL;
LABEL_145:
  p_index_of_first_non_null = &p_map->elements_;
  if ( *(_BYTE *)(((unsigned __int64)&p_map->elements_ >> 3) + 0x7FFF8000) )
  {
LABEL_153:
    __asan_report_store8(p_index_of_first_non_null, v18);
LABEL_154:
    __asan_report_store4(p_index_of_first_non_null, v18);
LABEL_155:
    p_ext_map = __asan_report_load8(p_index_of_first_non_null);
    operator delete(v32, 0x30uLL);
    v25 = (struct _Unwind_Exception *)p_ext_map;
    while ( *(_BYTE *)(((unsigned __int64)Aligned >> 3) + 0x7FFF8000) )
      v25 = (struct _Unwind_Exception *)__asan_report_store8(&v6->service_app_id_map_, 48LL);
    v6->service_app_id_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>
                                                               + 2);
    google::protobuf::internal::MapFieldBase::~MapFieldBase(&v6->service_app_id_map_);
    if ( *(_BYTE *)(((unsigned __int64)&v6->ext_map_ >> 3) + 0x7FFF8000) )
    {
      v43 = __asan_report_store8(&v6->ext_map_, 48LL);
LABEL_160:
      v44 = (const google::protobuf::UnknownFieldSet *)(v43 & 0xFFFFFFFFFFFFFFFELL);
      if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_internal_metadata);
      }
      else
      {
        ptr = (unsigned __int64)v6->_internal_metadata_.ptr_;
        if ( (ptr & 1) != 0 )
        {
          v46 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_163:
          google::protobuf::UnknownFieldSet::MergeFrom(v46, v44);
          goto LABEL_150;
        }
      }
      v46 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
      goto LABEL_163;
    }
    v6->ext_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>
                                                    + 2);
    google::protobuf::Map<unsigned int,unsigned int>::~Map(&v6->ext_map_.impl_.map_);
    if ( *(_BYTE *)(((unsigned __int64)&v6->ext_map_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v6->ext_map_, 48LL);
    v6->ext_map_._vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>
                                                    + 2);
    google::protobuf::internal::MapFieldBase::~MapFieldBase(&v6->ext_map_);
LABEL_88:
    google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&v6->_internal_metadata_);
    __asan_handle_no_return(&v6->_internal_metadata_);
    _Unwind_Resume(v25);
  }
  p_map->elements_ = v32;
  v6->service_app_id_map_.impl_.map_.default_enum_value_ = 0;
  p_index_of_first_non_null = &v6->_cached_size_;
  v41 = *(_BYTE *)(((unsigned __int64)&v6->_cached_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v6 - 4) & 7) + 3) >= v41 && v41 )
    goto LABEL_154;
  v6->_cached_size_ = 0;
  p_internal_metadata = &v6->_internal_metadata_;
  p_index_of_first_non_null = &v4->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&v4->_internal_metadata_ >> 3) + 0x7FFF8000) )
    goto LABEL_155;
  v43 = (__int64)v4->_internal_metadata_.ptr_;
  if ( (v43 & 1) != 0 )
    goto LABEL_160;
LABEL_150:
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MergeFrom(
    (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const)p_ext_map,
    &v4->ext_map_);
  v47 = (const std::string *)&v4->service_app_id_map_;
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MergeFrom(
    &v6->service_app_id_map_,
    &v4->service_app_id_map_);
  p_span_context_str = &v6->span_context_str_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->span_context_str_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_span_context_str, v47);
    goto LABEL_175;
  }
  v6->span_context_str_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  p_span_context_str = &v4->span_context_str_;
  if ( *(_BYTE *)(((unsigned __int64)&v4->span_context_str_ >> 3) + 0x7FFF8000) )
  {
LABEL_175:
    __asan_report_load8(p_span_context_str);
    goto LABEL_176;
  }
  v47 = v4->span_context_str_.ptr_;
  p_span_context_str = (google::protobuf::internal::ArenaStringPtr *)&v47->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v47->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_176:
    __asan_report_load8(p_span_context_str);
    goto LABEL_177;
  }
  if ( v47->_M_string_length )
  {
    p_span_context_str = &v6->span_context_str_;
    if ( v47 != (const std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      if ( !*(_BYTE *)(((unsigned __int64)p_span_context_str >> 3) + 0x7FFF8000) )
      {
        if ( (google::protobuf::internal::ExplicitlyConstructed<std::string > *)v6->span_context_str_.ptr_ != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          std::string::_M_assign(v6->span_context_str_.ptr_, v47);
          goto LABEL_179;
        }
LABEL_178:
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(p_span_context_str, v47);
        goto LABEL_179;
      }
LABEL_177:
      __asan_report_load8(p_span_context_str);
      goto LABEL_178;
    }
  }
LABEL_179:
  memcpy(&v6->packet_id_, &v4->packet_id_, 0x52uLL);
};

// Line 381: range 000000000C8152BA-000000000C8152CE
const proto::PacketHead *__cdecl proto::PacketHead::default_instance()
{
  proto::protobuf_pb_2fpacket_5fhead_2eproto::InitDefaults();
  return (const proto::PacketHead *)&proto::_PacketHead_default_instance_;
};

// Line 386: range 000000000C81CE82-000000000C81CED2
proto::PacketHead *__fastcall proto::PacketHead::New(
        const proto::PacketHead *const this,
        google::protobuf::Arena *arena)
{
  proto::PacketHead *v2; // rbx

  v2 = (proto::PacketHead *)operator new(0x100uLL);
  proto::PacketHead::PacketHead(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto::PacketHead>(arena, v2);
  return v2;
};

// Line 394: range 000000000C81BF7E-000000000C81C24B
void __fastcall proto::PacketHead::Clear(proto::PacketHead *const this)
{
  __int64 v1; // rsi
  google::protobuf::internal::ArenaStringPtr *p_span_context_str; // rdi
  unsigned __int64 ptr; // rdi
  __int64 v5; // rax
  char v6; // al
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi

  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Clear(&this->ext_map_);
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Clear(&this->service_app_id_map_);
  p_span_context_str = &this->span_context_str_;
  if ( *(_BYTE *)(((unsigned __int64)p_span_context_str >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load8(p_span_context_str);
LABEL_12:
    ptr = v5;
    __asan_report_store8(v5, v1);
    goto LABEL_13;
  }
  ptr = (unsigned __int64)this->span_context_str_.ptr_;
  if ( (google::protobuf::internal::ExplicitlyConstructed<std::string > *)ptr == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    goto LABEL_8;
  v5 = ptr + 8;
  if ( *(_BYTE *)(((ptr + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  *(_QWORD *)(ptr + 8) = 0LL;
  if ( *(_BYTE *)((ptr >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(ptr);
LABEL_14:
    __asan_report_store1(ptr, v1, v7);
    goto LABEL_15;
  }
  ptr = *(_QWORD *)ptr;
  v6 = *(_BYTE *)((ptr >> 3) + 0x7FFF8000);
  v7 = ptr & 7;
  if ( v6 <= (char)v7 && v6 )
    goto LABEL_14;
  *(_BYTE *)ptr = 0;
LABEL_8:
  memset(&this->packet_id_, 0, 0x52uLL);
  ptr = (unsigned __int64)&this->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(ptr);
    goto LABEL_16;
  }
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 0 )
    return;
LABEL_16:
  if ( *(_BYTE *)((ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(ptr);
    goto LABEL_23;
  }
  v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v8 & 1) == 0 )
  {
LABEL_23:
    v9 = (unsigned __int64)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow((google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *const)ptr);
    goto LABEL_19;
  }
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
LABEL_19:
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v9);
    JUMPOUT(0xC81C0ABLL);
  }
  if ( *(_QWORD *)v9 )
    google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)v9);
};

// Line 410: range 000000000C81D9F8-000000000C81E7D8
bool __fastcall proto::PacketHead::MergePartialFromCodedStream(
        proto::PacketHead *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r14
  google::protobuf::io::CodedInputStream *v4; // rbx
  unsigned __int64 v5; // r13
  _DWORD *v6; // r15
  __int64 v7; // rax
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint32 v9; // eax
  unsigned __int64 v10; // rax
  google::protobuf::uint32 TagFallback; // eax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // rdi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v14; // rdx
  google::protobuf::io::CodedInputStream *p_buffer_end; // rdi
  char v16; // al
  unsigned __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned __int8 v19; // si
  std::pair<int,int> v20; // rbp
  google::protobuf::uint64 *p_sent_ms; // rbp
  google::protobuf::io::CodedInputStream *v22; // rdi
  google::protobuf::uint64 v23; // rax
  __int64 v24; // rdx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  google::protobuf::uint64 *v26; // rdi
  google::protobuf::uint64 *p_recv_time_ms; // rbp
  google::protobuf::io::CodedInputStream *v28; // rdi
  google::protobuf::uint64 v29; // rax
  __int64 v30; // rdx
  std::pair<long unsigned int,bool> v31; // rax
  google::protobuf::uint64 *v32; // rdi
  int (**vptr_MapFieldBase)(...); // rax
  int (**v34)(...); // rdx
  google::protobuf::io::CodedInputStream *v35; // rdi
  const google::protobuf::uint8 *v36; // rax
  __int64 v37; // rdx
  int VarintSizeAsIntFallback; // eax
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  google::protobuf::internal::ArenaStringPtr *p_span_context_str; // rdi
  const std::string *v46; // rax
  bool result; // al
  int (**v48)(...); // rax
  int (**v49)(...); // rdx
  google::protobuf::io::CodedInputStream *v50; // rdi
  const google::protobuf::uint8 *v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // rdx
  google::protobuf::io::CodedInputStream *v58; // rdi
  std::pair<long unsigned int,bool> v59; // rax
  google::protobuf::io::CodedInputStream *v60; // rdi
  std::pair<long unsigned int,bool> v61; // rax
  char second; // [rsp+4h] [rbp-E4h]
  unsigned __int64 v63; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v64; // [rsp+10h] [rbp-D8h]
  char v65[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = input;
  v5 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 48 40 10 parser:684";
  *(_QWORD *)(v5 + 16) = proto::PacketHead::MergePartialFromCodedStream;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  while ( 2 )
  {
    p_buffer_end = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v4);
LABEL_6:
      __asan_report_load8(p_buffer_end);
LABEL_7:
      v9 = __asan_report_load1(p_buffer_end, input, buffer);
LABEL_8:
      v4->buffer_ = buffer + 1;
      input = (google::protobuf::io::CodedInputStream *)0xFFFFFF00FFFFFFFFLL;
      v10 = v9 | v63 & 0xFFFFFF0000000000LL | 0x100000000LL;
      v63 = v10;
      goto LABEL_29;
    }
    buffer = v4->buffer_;
    p_buffer_end = (google::protobuf::io::CodedInputStream *)&v4->buffer_end_;
    if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    input = (google::protobuf::io::CodedInputStream *)v4->buffer_end_;
    if ( buffer >= (const google::protobuf::uint8 *)input )
      goto LABEL_10;
    p_buffer_end = (google::protobuf::io::CodedInputStream *)v4->buffer_;
    v16 = *(_BYTE *)(((unsigned __int64)buffer >> 3) + 0x7FFF8000);
    if ( v16 <= ((__int64)v4->buffer_ & 7) && v16 )
      goto LABEL_7;
    v9 = *buffer;
    if ( *(char *)buffer > 0 )
      goto LABEL_8;
    v17 = (unsigned __int64)(buffer + 1);
    if ( input <= (google::protobuf::io::CodedInputStream *)(buffer + 1) )
      goto LABEL_11;
    v18 = *(unsigned __int8 *)((v17 >> 3) + 0x7FFF8000);
    if ( (char)v18 <= (char)(v17 & 7) && (_BYTE)v18 )
    {
      __asan_report_load1(v17, v18, buffer);
LABEL_10:
      v9 = 0;
LABEL_11:
      input = (google::protobuf::io::CodedInputStream *)v9;
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(v4, v9);
      v10 = ((unsigned __int64)(TagFallback - 1 <= 0x3FFE) << 32) | TagFallback | v64 & 0xFFFFFF0000000000LL;
      v64 = v10;
      goto LABEL_29;
    }
    v19 = buffer[1];
    if ( (~v19 & *buffer) <= 127 )
      goto LABEL_11;
    input = (google::protobuf::io::CodedInputStream *)(v19 << 7);
    v4->buffer_ = buffer + 2;
    v10 = (v9 + (unsigned int)input - 128) | v2 & 0xFFFFFF0000000000LL | 0x100000000LL;
    v2 = v10;
LABEL_29:
    v20.first = v10;
    second = BYTE4(v10);
    if ( !BYTE4(v10) || (unsigned int)v10 > 0x12F )
      goto handle_unusual;
    switch ( (unsigned int)v10 >> 3 )
    {
      case 0u:
      case 7u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
        goto handle_unusual;
      case 1u:
        if ( (_BYTE)v10 != 8 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->packet_id_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->packet_id_) )
          goto failure;
        continue;
      case 2u:
        if ( (_BYTE)v10 != 16 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->rpc_id_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->rpc_id_) )
          goto failure;
        continue;
      case 3u:
        if ( (_BYTE)v10 != 24 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->client_sequence_id_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->client_sequence_id_) )
          goto failure;
        continue;
      case 4u:
        if ( (_BYTE)v10 != 32 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->enet_channel_id_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->enet_channel_id_) )
          goto failure;
        continue;
      case 5u:
        if ( (_BYTE)v10 != 40 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->enet_is_reliable_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->enet_is_reliable_) )
          goto failure;
        continue;
      case 6u:
        if ( (_BYTE)v10 != 48 )
          goto handle_unusual;
        p_sent_ms = &this->sent_ms_;
        v22 = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v4);
LABEL_58:
          __asan_report_load8(v22);
LABEL_59:
          LOBYTE(v23) = __asan_report_load1(v22, input, v24);
          goto LABEL_60;
        }
        v23 = (google::protobuf::uint64)v4->buffer_;
        v22 = (google::protobuf::io::CodedInputStream *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_58;
        if ( (const google::protobuf::uint8 *)v23 >= v4->buffer_end_ )
          goto LABEL_53;
        v22 = (google::protobuf::io::CodedInputStream *)v4->buffer_;
        v24 = *(unsigned __int8 *)((v23 >> 3) + 0x7FFF8000);
        if ( (char)v24 <= ((__int64)v4->buffer_ & 7) && (_BYTE)v24 )
          goto LABEL_59;
        LOBYTE(v23) = *(_BYTE *)v23;
        if ( (v23 & 0x80u) != 0LL )
        {
LABEL_53:
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v4);
          v26 = &this->sent_ms_;
          v20 = (std::pair<int,int>)((unsigned __int64)p_sent_ms >> 3);
          if ( !*(_BYTE *)(*(_QWORD *)&v20 + 2147450880LL) )
          {
            this->sent_ms_ = Varint64Fallback.first;
            second = Varint64Fallback.second;
            goto LABEL_55;
          }
          goto LABEL_63;
        }
LABEL_60:
        v23 = (unsigned __int8)v23;
        v26 = &this->sent_ms_;
        v20 = (std::pair<int,int>)((unsigned __int64)p_sent_ms >> 3);
        if ( !*(_BYTE *)(*(_QWORD *)&v20 + 2147450880LL) )
        {
          this->sent_ms_ = v23;
          ++v4->buffer_;
LABEL_55:
          if ( !second )
            goto failure;
          continue;
        }
        __asan_report_store8(v26, input);
LABEL_63:
        __asan_report_store8(v26, input);
LABEL_64:
        if ( LOBYTE(v20.first) != 88 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->user_id_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->user_id_) )
          goto failure;
        continue;
      case 0xBu:
        goto LABEL_64;
      case 0xCu:
        if ( (_BYTE)v10 != 96 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->user_ip_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->user_ip_) )
          goto failure;
        continue;
      case 0xDu:
        if ( (_BYTE)v10 != 104 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->user_session_id_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->user_session_id_) )
          goto failure;
        continue;
      case 0xEu:
        if ( (_BYTE)v10 != 112 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->home_user_id_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->home_user_id_) )
          goto failure;
        continue;
      case 0x15u:
        if ( (_BYTE)v10 != 0xA8 )
          goto handle_unusual;
        p_recv_time_ms = &this->recv_time_ms_;
        v28 = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v4);
LABEL_88:
          __asan_report_load8(v28);
LABEL_89:
          LOBYTE(v29) = __asan_report_load1(v28, input, v30);
          goto LABEL_90;
        }
        v29 = (google::protobuf::uint64)v4->buffer_;
        v28 = (google::protobuf::io::CodedInputStream *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_88;
        if ( (const google::protobuf::uint8 *)v29 >= v4->buffer_end_ )
          goto LABEL_83;
        v28 = (google::protobuf::io::CodedInputStream *)v4->buffer_;
        v30 = *(unsigned __int8 *)((v29 >> 3) + 0x7FFF8000);
        if ( (char)v30 <= ((__int64)v4->buffer_ & 7) && (_BYTE)v30 )
          goto LABEL_89;
        LOBYTE(v29) = *(_BYTE *)v29;
        if ( (v29 & 0x80u) != 0LL )
        {
LABEL_83:
          v31 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v4);
          v32 = &this->recv_time_ms_;
          v20 = (std::pair<int,int>)((unsigned __int64)p_recv_time_ms >> 3);
          if ( !*(_BYTE *)(*(_QWORD *)&v20 + 2147450880LL) )
          {
            this->recv_time_ms_ = v31.first;
            second = v31.second;
            goto LABEL_85;
          }
          goto LABEL_93;
        }
LABEL_90:
        v29 = (unsigned __int8)v29;
        v32 = &this->recv_time_ms_;
        v20 = (std::pair<int,int>)((unsigned __int64)p_recv_time_ms >> 3);
        if ( !*(_BYTE *)(*(_QWORD *)&v20 + 2147450880LL) )
        {
          this->recv_time_ms_ = v29;
          ++v4->buffer_;
LABEL_85:
          if ( !second )
            goto failure;
          continue;
        }
        __asan_report_store8(v32, input);
LABEL_93:
        __asan_report_store8(v32, input);
LABEL_94:
        if ( LOBYTE(v20.first) != 0xB0 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->rpc_begin_time_ms_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->rpc_begin_time_ms_) )
          goto failure;
        continue;
      case 0x16u:
        goto LABEL_94;
      case 0x17u:
        if ( (_BYTE)v10 != 0xBA )
          goto handle_unusual;
        *(_QWORD *)(v5 + 48) = &this->ext_map_;
        if ( *(_BYTE *)(((unsigned __int64)&this->ext_map_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(&this->ext_map_);
LABEL_108:
          v35 = (google::protobuf::io::CodedInputStream *)v34;
          __asan_report_load8(v34);
LABEL_109:
          __asan_report_load8(v35);
LABEL_110:
          __asan_report_load8(v35);
LABEL_111:
          __asan_report_load1(v35, input, v37);
          goto LABEL_112;
        }
        vptr_MapFieldBase = this->ext_map_._vptr_MapFieldBase;
        v34 = vptr_MapFieldBase + 17;
        if ( *(_BYTE *)(((unsigned __int64)(vptr_MapFieldBase + 17) >> 3) + 0x7FFF8000) )
          goto LABEL_108;
        input = (google::protobuf::io::CodedInputStream *)(v5 + 128);
        *(_QWORD *)(v5 + 56) = ((__int64 (*)(void))vptr_MapFieldBase[17])();
        *(_QWORD *)(v5 + 80) = 0LL;
        v35 = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
          goto LABEL_109;
        v36 = v4->buffer_;
        v35 = (google::protobuf::io::CodedInputStream *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_110;
        if ( v36 >= v4->buffer_end_ )
          goto LABEL_106;
        v35 = (google::protobuf::io::CodedInputStream *)v4->buffer_;
        v37 = *(unsigned __int8 *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
        if ( (char)v37 <= ((__int64)v4->buffer_ & 7) && (_BYTE)v37 )
          goto LABEL_111;
        input = (google::protobuf::io::CodedInputStream *)*v36;
        if ( *v36 > 0x7Fu )
        {
LABEL_106:
          VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(v4);
          input = (google::protobuf::io::CodedInputStream *)(unsigned int)VarintSizeAsIntFallback;
          second = VarintSizeAsIntFallback >= 0;
          goto LABEL_113;
        }
LABEL_112:
        ++v4->buffer_;
LABEL_113:
        if ( second )
        {
          v20 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(v4, (int)input);
          if ( v20.second >= 0
            && (input = v4,
                google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Parser<google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>,google::protobuf::Map<unsigned int,unsigned int>>::MergePartialFromCodedStream(
                  (google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Parser<google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>,google::protobuf::Map<unsigned int,unsigned int> > *const)(v5 + 48),
                  v4)) )
          {
            input = (google::protobuf::io::CodedInputStream *)(unsigned int)v20.first;
            second = google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(v4, v20.first);
          }
          else
          {
            second = 0;
          }
        }
        if ( !second )
        {
          v42 = *(_QWORD *)(v5 + 80);
          if ( !v42 )
            goto failure;
          if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v42);
          }
          else
          {
            v43 = *(_QWORD *)v42;
            v44 = *(_QWORD *)v42 + 8LL;
            if ( !*(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
              goto LABEL_126;
          }
          v39 = v44;
          __asan_report_load8(v44);
LABEL_129:
          __asan_report_load8(v39);
          goto LABEL_130;
        }
        v39 = *(_QWORD *)(v5 + 80);
        if ( !v39 )
          continue;
        if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
          goto LABEL_129;
        v40 = *(_QWORD *)v39;
        v41 = *(_QWORD *)v39 + 8LL;
        if ( !*(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
          goto LABEL_118;
LABEL_130:
        __asan_report_load8(v41);
LABEL_131:
        if ( LOBYTE(v20.first) != 0xC0 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->sender_app_id_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->sender_app_id_) )
          goto failure;
        continue;
      case 0x18u:
        goto LABEL_131;
      case 0x19u:
        if ( (_BYTE)v10 != 0xC8 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->sender_load_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->sender_load_) )
          goto failure;
        continue;
      case 0x1Au:
        if ( (_BYTE)v10 != 0xD2 )
          goto handle_unusual;
        p_span_context_str = &this->span_context_str_;
        if ( *(_BYTE *)(((unsigned __int64)&this->span_context_str_ >> 3) + 0x7FFF8000) )
        {
          v46 = (const std::string *)__asan_report_load8(p_span_context_str);
        }
        else
        {
          v46 = (const std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
          if ( (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->span_context_str_.ptr_ != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            goto LABEL_140;
        }
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(p_span_context_str, v46);
LABEL_140:
        if ( *(_BYTE *)(((unsigned __int64)&this->span_context_str_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(&this->span_context_str_);
LABEL_148:
          if ( LOBYTE(v20.first) != 0xF8 )
            goto handle_unusual;
          input = (google::protobuf::io::CodedInputStream *)&this->source_service_;
          if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->source_service_) )
            goto failure;
        }
        else
        {
          input = (google::protobuf::io::CodedInputStream *)this->span_context_str_.ptr_;
          if ( !google::protobuf::internal::WireFormatLite::ReadBytes(v4, (std::string *)input) )
            goto failure;
        }
        continue;
      case 0x1Fu:
        goto LABEL_148;
      case 0x20u:
        if ( (_BYTE)v10 )
          goto handle_unusual;
        input = (google::protobuf::io::CodedInputStream *)&this->target_service_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->target_service_) )
          goto failure;
        continue;
      case 0x21u:
        if ( (_BYTE)v10 != 10 )
          goto handle_unusual;
        *(_QWORD *)(v5 + 48) = &this->service_app_id_map_;
        if ( *(_BYTE *)(((unsigned __int64)&this->service_app_id_map_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(&this->service_app_id_map_);
LABEL_165:
          v50 = (google::protobuf::io::CodedInputStream *)v49;
          __asan_report_load8(v49);
LABEL_166:
          __asan_report_load8(v50);
LABEL_167:
          __asan_report_load8(v50);
LABEL_168:
          __asan_report_load1(v50, input, v52);
          goto LABEL_169;
        }
        v48 = this->service_app_id_map_._vptr_MapFieldBase;
        v49 = v48 + 17;
        if ( *(_BYTE *)(((unsigned __int64)(v48 + 17) >> 3) + 0x7FFF8000) )
          goto LABEL_165;
        *(_QWORD *)(v5 + 56) = ((__int64 (*)(void))v48[17])();
        *(_QWORD *)(v5 + 80) = 0LL;
        v50 = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
          goto LABEL_166;
        v51 = v4->buffer_;
        v50 = (google::protobuf::io::CodedInputStream *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_167;
        if ( v51 >= v4->buffer_end_ )
          goto LABEL_163;
        v50 = (google::protobuf::io::CodedInputStream *)v4->buffer_;
        v52 = *(unsigned __int8 *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000);
        if ( (char)v52 <= ((__int64)v4->buffer_ & 7) && (_BYTE)v52 )
          goto LABEL_168;
        input = (google::protobuf::io::CodedInputStream *)*v51;
        if ( *v51 > 0x7Fu )
        {
LABEL_163:
          v53 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(v4);
          input = (google::protobuf::io::CodedInputStream *)(unsigned int)v53;
          second = v53 >= 0;
          goto LABEL_170;
        }
LABEL_169:
        ++v4->buffer_;
LABEL_170:
        if ( second )
        {
          v20 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(v4, (int)input);
          if ( v20.second >= 0
            && (input = v4,
                google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Parser<google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>,google::protobuf::Map<unsigned int,unsigned int>>::MergePartialFromCodedStream(
                  (google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Parser<google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>,google::protobuf::Map<unsigned int,unsigned int> > *const)(v5 + 48),
                  v4)) )
          {
            input = (google::protobuf::io::CodedInputStream *)(unsigned int)v20.first;
            second = google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(v4, v20.first);
          }
          else
          {
            second = 0;
          }
        }
        if ( second )
        {
          v54 = *(_QWORD *)(v5 + 80);
          if ( v54 )
          {
            if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
              goto LABEL_186;
            v40 = *(_QWORD *)v54;
            v55 = *(_QWORD *)v54 + 8LL;
            if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
            {
LABEL_187:
              __asan_report_load8(v55);
LABEL_188:
              if ( LOBYTE(v20.first) != 16 )
                goto handle_unusual;
              v58 = v4;
              if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v4);
LABEL_203:
                __asan_report_load8(v58);
LABEL_204:
                LOBYTE(v59.first) = __asan_report_load1(v58, input, *(_QWORD *)&v59.second);
LABEL_205:
                v59.first = LOBYTE(v59.first);
                ++v4->buffer_;
                goto LABEL_196;
              }
              v59.first = (unsigned __int64)v4->buffer_;
              v58 = (google::protobuf::io::CodedInputStream *)&v4->buffer_end_;
              if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
                goto LABEL_203;
              if ( (const google::protobuf::uint8 *)v59.first < v4->buffer_end_ )
              {
                v58 = (google::protobuf::io::CodedInputStream *)v4->buffer_;
                *(_QWORD *)&v59.second = *(unsigned __int8 *)((v59.first >> 3) + 0x7FFF8000);
                if ( v59.second <= ((__int64)v4->buffer_ & 7) && v59.second )
                  goto LABEL_204;
                LOBYTE(v59.first) = *(_BYTE *)v59.first;
                if ( SLOBYTE(v59.first) >= 0 )
                  goto LABEL_205;
              }
              v59 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v4);
              second = v59.second;
LABEL_196:
              if ( second )
              {
                v59.second = v59.first != 0;
                LOBYTE(v59.first) = *(_BYTE *)(((unsigned __int64)&this->is_set_game_thread_ >> 3) + 0x7FFF8000);
                if ( SLOBYTE(v59.first) > (((unsigned __int8)this - 8) & 7) || !LOBYTE(v59.first) )
                {
                  this->is_set_game_thread_ = v59.second;
                  goto LABEL_200;
                }
                __asan_report_store1(&this->is_set_game_thread_, input, *(_QWORD *)&v59.second);
LABEL_207:
                if ( LOBYTE(v20.first) == 24 )
                {
                  input = (google::protobuf::io::CodedInputStream *)&this->game_thread_index_;
                  if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->game_thread_index_) )
                    goto failure;
                }
                else
                {
handle_unusual:
                  if ( !v20.first )
                  {
                    result = 1;
                    goto LABEL_143;
                  }
                  p_internal_metadata = &this->_internal_metadata_;
                  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8(p_internal_metadata);
LABEL_234:
                    v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
                    goto LABEL_17;
                  }
                  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
                  if ( (ptr & 1) == 0 )
                    goto LABEL_234;
                  v14 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_17:
                  input = (google::protobuf::io::CodedInputStream *)(unsigned int)v20.first;
                  if ( !google::protobuf::internal::WireFormat::SkipField(v4, v20.first, v14) )
                    goto failure;
                }
              }
              else
              {
LABEL_200:
                if ( !second )
                  goto failure;
              }
            }
            else
            {
LABEL_118:
              (*(void (**)(void))(v40 + 8))();
            }
          }
          continue;
        }
        v56 = *(_QWORD *)(v5 + 80);
        if ( !v56 )
          goto failure;
        if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v56);
          goto LABEL_185;
        }
        v43 = *(_QWORD *)v56;
        v57 = *(_QWORD *)v56 + 8LL;
        if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
        {
LABEL_185:
          v54 = v57;
          __asan_report_load8(v57);
LABEL_186:
          __asan_report_load8(v54);
          goto LABEL_187;
        }
LABEL_126:
        (*(void (**)(void))(v43 + 8))();
failure:
        result = 0;
LABEL_143:
        if ( v65 == (char *)v5 )
        {
          *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
          *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
        }
        else
        {
          *(_QWORD *)v5 = 1172321806LL;
          *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
          *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
        }
        return result;
      case 0x22u:
        goto LABEL_188;
      case 0x23u:
        goto LABEL_207;
      case 0x24u:
        if ( (_BYTE)v10 != 32 )
          goto handle_unusual;
        v60 = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v4);
LABEL_225:
          __asan_report_load8(v60);
LABEL_226:
          LOBYTE(v61.first) = __asan_report_load1(v60, input, *(_QWORD *)&v61.second);
          goto LABEL_227;
        }
        v61.first = (unsigned __int64)v4->buffer_;
        v60 = (google::protobuf::io::CodedInputStream *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_225;
        if ( (const google::protobuf::uint8 *)v61.first >= v4->buffer_end_ )
          goto LABEL_217;
        v60 = (google::protobuf::io::CodedInputStream *)v4->buffer_;
        *(_QWORD *)&v61.second = *(unsigned __int8 *)((v61.first >> 3) + 0x7FFF8000);
        if ( v61.second <= ((__int64)v4->buffer_ & 7) && v61.second )
          goto LABEL_226;
        LOBYTE(v61.first) = *(_BYTE *)v61.first;
        if ( SLOBYTE(v61.first) < 0 )
        {
LABEL_217:
          v61 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v4);
          second = v61.second;
          goto LABEL_218;
        }
LABEL_227:
        v61.first = LOBYTE(v61.first);
        ++v4->buffer_;
LABEL_218:
        if ( !second )
          goto LABEL_222;
        v61.second = v61.first != 0;
        LOBYTE(v61.first) = *(_BYTE *)(((unsigned __int64)&this->is_set_multi_thread_ >> 3) + 0x7FFF8000);
        if ( SLOBYTE(v61.first) <= (((unsigned __int8)this - 7) & 7) && LOBYTE(v61.first) )
        {
          __asan_report_store1(&this->is_set_multi_thread_, input, *(_QWORD *)&v61.second);
LABEL_229:
          if ( LOBYTE(v20.first) != 40 )
            goto handle_unusual;
          input = (google::protobuf::io::CodedInputStream *)&this->multi_thread_index_;
          if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->multi_thread_index_) )
            goto failure;
        }
        else
        {
          this->is_set_multi_thread_ = v61.second;
LABEL_222:
          if ( !second )
            goto failure;
        }
        continue;
      case 0x25u:
        goto LABEL_229;
    }
  }
};

// Line 745: range 000000000C813D2A-000000000C813D69
// local variable allocation has failed, the output may be wrong!
void __fastcall proto::PacketHead::SetCachedSize(const proto::PacketHead *const this, int size)
{
  char v2; // cl

  v2 = *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 4) & 7) + 3) >= v2 && v2 )
  {
    __asan_report_store4(&this->_cached_size_, *(_QWORD *)&size);
    JUMPOUT(0xC813D63LL);
  }
  this->_cached_size_ = size;
};

// Line 770: range 000000000C8178EE-000000000C818F0C
void __fastcall proto::PacketHead::SerializeWithCachedSizes(
        const proto::PacketHead *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v3; // r13
  _DWORD *v4; // r14
  char v5; // al
  char v6; // dl
  char v7; // al
  char v8; // dl
  char v9; // al
  char v10; // dl
  char v11; // al
  char v12; // dl
  char v13; // al
  char v14; // dl
  google::protobuf::io::CodedOutputStream *p_ext_map; // r15
  unsigned __int64 p_elements; // rdi
  char v17; // al
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rdx
  google::protobuf::internal::AtomicWord serialization_deterministic_override; // rax
  google::protobuf::internal::AtomicWord *elements; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 i; // r12
  const google::protobuf::MapPair<unsigned int,unsigned int> *v28; // rax
  const google::protobuf::MapPair<unsigned int,unsigned int> *v29; // rdi
  unsigned __int64 v30; // r12
  char v31; // dl
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v32; // rax
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v33; // rax
  unsigned __int64 j; // r12
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *p_impl; // rax
  proto::PacketHead::PacketHead_ExtMapEntry *v36; // rax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v39; // rax
  const unsigned int *second; // rdi
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rdx
  void *v43; // rdi
  __int64 v44; // rax
  const unsigned int *v45; // rdi
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *v46; // rax
  proto::PacketHead::PacketHead_ExtMapEntry *v47; // rax
  proto::PacketHead::PacketHead_ExtMapEntry *v48; // r12
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rdx
  google::protobuf::uint32 *p_sender_app_id; // rdi
  char v54; // dl
  char v55; // al
  void *p_span_context_str; // rdi
  char v57; // dl
  char v58; // al
  google::protobuf::internal::MapFieldBase *p_service_app_id_map; // r15
  __int64 v60; // rdx
  unsigned __int64 p_serialization_deterministic_is_overridden; // rdi
  char v62; // al
  __int64 v63; // rdx
  char v64; // al
  __int64 v65; // rdx
  google::protobuf::internal::AtomicWord v66; // rax
  google::protobuf::internal::AtomicWord *v67; // rdi
  unsigned __int64 v68; // rdi
  __int64 v69; // r12
  __int64 v70; // rax
  __int64 k; // r12
  const google::protobuf::MapPair<unsigned int,unsigned int> *v72; // rax
  const google::protobuf::MapPair<unsigned int,unsigned int> *v73; // rdi
  unsigned __int64 v74; // r12
  char v75; // dl
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v76; // rax
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v77; // rax
  unsigned __int64 v78; // r12
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *v79; // rax
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v80; // rax
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // rdx
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v83; // rax
  const unsigned int *v84; // rdi
  unsigned __int64 v85; // rdi
  unsigned __int64 v86; // rdx
  void *v87; // rdi
  __int64 v88; // rax
  const unsigned int *v89; // rdi
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *v90; // rax
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v91; // rax
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v92; // r12
  unsigned __int64 v93; // rdi
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rdi
  unsigned __int64 v96; // rdx
  bool *p_is_set_game_thread; // rdi
  bool is_set_game_thread; // al
  char v99; // dl
  char v100; // al
  __int64 v101; // rdx
  bool is_set_multi_thread; // al
  char v103; // al
  unsigned __int64 ptr; // rdi
  bool *v105; // rax
  __int64 v106; // rdx
  __gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::CompareByFirstField<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > > v107; // [rsp+0h] [rbp-188h]
  unsigned __int64 n; // [rsp+10h] [rbp-178h]
  unsigned __int64 na; // [rsp+10h] [rbp-178h]
  unsigned __int64 v110; // [rsp+18h] [rbp-170h]
  __int64 v111; // [rsp+28h] [rbp-160h]
  __int64 v112; // [rsp+28h] [rbp-160h]
  char v113[216]; // [rsp+B0h] [rbp-D8h] BYREF

  v3 = output;
  v110 = (unsigned __int64)v113;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v23 = __asan_stack_malloc_2(160LL);
    if ( v23 )
      v110 = v23;
  }
  *(_QWORD *)v110 = 1102416563LL;
  *(_QWORD *)(v110 + 8) = "3 32 8 9 items:909 64 8 9 entry:927 96 24 6 it:929";
  *(_QWORD *)(v110 + 16) = proto::PacketHead::SerializeWithCachedSizes;
  v4 = (_DWORD *)(v110 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = *(_BYTE *)(((unsigned __int64)&this->packet_id_ >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
  {
    __asan_report_load4(&this->packet_id_);
    goto LABEL_53;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->packet_id_;
  if ( (_DWORD)output )
LABEL_53:
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, (google::protobuf::uint32)output, v3);
  v6 = *(_BYTE *)(((unsigned __int64)&this->rpc_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 84) & 7) + 3) >= v6 && v6 )
  {
    __asan_report_load4(&this->rpc_id_);
    goto LABEL_55;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->rpc_id_;
  if ( (_DWORD)output )
LABEL_55:
    google::protobuf::internal::WireFormatLite::WriteUInt32(2, (google::protobuf::uint32)output, v3);
  v7 = *(_BYTE *)(((unsigned __int64)&this->client_sequence_id_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_load4(&this->client_sequence_id_);
    goto LABEL_57;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->client_sequence_id_;
  if ( (_DWORD)output )
LABEL_57:
    google::protobuf::internal::WireFormatLite::WriteUInt32(3, (google::protobuf::uint32)output, v3);
  v8 = *(_BYTE *)(((unsigned __int64)&this->enet_channel_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 76) & 7) + 3) >= v8 && v8 )
  {
    __asan_report_load4(&this->enet_channel_id_);
    goto LABEL_59;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->enet_channel_id_;
  if ( (_DWORD)output )
LABEL_59:
    google::protobuf::internal::WireFormatLite::WriteUInt32(4, (google::protobuf::uint32)output, v3);
  v9 = *(_BYTE *)(((unsigned __int64)&this->enet_is_reliable_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(&this->enet_is_reliable_);
  }
  else
  {
    output = (google::protobuf::io::CodedOutputStream *)this->enet_is_reliable_;
    if ( !(_DWORD)output )
      goto LABEL_17;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(5, (google::protobuf::uint32)output, v3);
LABEL_17:
  if ( *(_BYTE *)(((unsigned __int64)&this->sent_ms_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->sent_ms_);
    goto LABEL_63;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->sent_ms_;
  if ( output )
LABEL_63:
    google::protobuf::internal::WireFormatLite::WriteUInt64(6, (google::protobuf::uint64)output, v3);
  v10 = *(_BYTE *)(((unsigned __int64)&this->user_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 60) & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(&this->user_id_);
    goto LABEL_65;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->user_id_;
  if ( (_DWORD)output )
LABEL_65:
    google::protobuf::internal::WireFormatLite::WriteUInt32(11, (google::protobuf::uint32)output, v3);
  v11 = *(_BYTE *)(((unsigned __int64)&this->user_ip_ >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
  {
    __asan_report_load4(&this->user_ip_);
    goto LABEL_67;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->user_ip_;
  if ( (_DWORD)output )
LABEL_67:
    google::protobuf::internal::WireFormatLite::WriteUInt32(12, (google::protobuf::uint32)output, v3);
  v12 = *(_BYTE *)(((unsigned __int64)&this->user_session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 52) & 7) + 3) >= v12 && v12 )
  {
    __asan_report_load4(&this->user_session_id_);
    goto LABEL_69;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->user_session_id_;
  if ( (_DWORD)output )
LABEL_69:
    google::protobuf::internal::WireFormatLite::WriteUInt32(13, (google::protobuf::uint32)output, v3);
  v13 = *(_BYTE *)(((unsigned __int64)&this->home_user_id_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
  {
    __asan_report_load4(&this->home_user_id_);
  }
  else
  {
    output = (google::protobuf::io::CodedOutputStream *)this->home_user_id_;
    if ( !(_DWORD)output )
      goto LABEL_31;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(14, (google::protobuf::uint32)output, v3);
LABEL_31:
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_time_ms_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->recv_time_ms_);
    goto LABEL_73;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->recv_time_ms_;
  if ( output )
LABEL_73:
    google::protobuf::internal::WireFormatLite::WriteUInt64(21, (google::protobuf::uint64)output, v3);
  v14 = *(_BYTE *)(((unsigned __int64)&this->rpc_begin_time_ms_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v14 && v14 )
  {
    __asan_report_load4(&this->rpc_begin_time_ms_);
  }
  else
  {
    output = (google::protobuf::io::CodedOutputStream *)this->rpc_begin_time_ms_;
    if ( !(_DWORD)output )
      goto LABEL_36;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(22, (google::protobuf::uint32)output, v3);
LABEL_36:
  p_ext_map = (google::protobuf::io::CodedOutputStream *)&this->ext_map_;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->ext_map_);
  p_elements = (unsigned __int64)&this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_elements);
    goto LABEL_77;
  }
  p_elements = (unsigned __int64)this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)((p_elements >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_load8(p_elements);
LABEL_78:
    __asan_report_load1(p_elements, output, v18);
LABEL_79:
    __asan_report_load1(p_elements, output, v20);
    goto LABEL_80;
  }
  if ( !*(_QWORD *)p_elements )
    goto LABEL_154;
  p_elements = (unsigned __int64)&v3->serialization_deterministic_is_overridden_;
  v17 = *(_BYTE *)(((unsigned __int64)&v3->serialization_deterministic_is_overridden_ >> 3) + 0x7FFF8000);
  v18 = ((_BYTE)v3 + 26) & 7;
  if ( v17 <= (char)v18 && v17 )
    goto LABEL_78;
  if ( v3->serialization_deterministic_is_overridden_ )
  {
    p_elements = (unsigned __int64)&v3->serialization_deterministic_override_;
    v19 = *(_BYTE *)(((unsigned __int64)&v3->serialization_deterministic_override_ >> 3) + 0x7FFF8000);
    v20 = ((_BYTE)v3 + 27) & 7;
    if ( v19 > (char)v20 || !v19 )
    {
      serialization_deterministic_override = v3->serialization_deterministic_override_;
      goto LABEL_45;
    }
    goto LABEL_79;
  }
LABEL_80:
  if ( *(_BYTE *)(((unsigned __int64)&google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ >> 3)
                + 0x7FFF8000) )
  {
    elements = &google::protobuf::io::CodedOutputStream::default_serialization_deterministic_;
    __asan_report_load8(&google::protobuf::io::CodedOutputStream::default_serialization_deterministic_);
LABEL_83:
    __asan_report_load8(elements);
    goto LABEL_84;
  }
  serialization_deterministic_override = google::protobuf::io::CodedOutputStream::default_serialization_deterministic_;
LABEL_45:
  if ( !serialization_deterministic_override )
  {
LABEL_49:
    *(_QWORD *)(v110 + 64) = 0LL;
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->ext_map_);
    goto LABEL_132;
  }
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->ext_map_);
  elements = (google::protobuf::internal::AtomicWord *)&this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
    goto LABEL_83;
  elements = (google::protobuf::internal::AtomicWord *)this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)elements >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(elements);
    goto LABEL_85;
  }
  if ( (unsigned __int64)*elements <= 1 )
    goto LABEL_49;
LABEL_85:
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->ext_map_);
  v24 = (unsigned __int64)&this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v24);
    goto LABEL_92;
  }
  v24 = (unsigned __int64)this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_load8(v24);
LABEL_93:
    __asan_handle_no_return(v24);
    __cxa_throw_bad_array_new_length();
  }
  v25 = *(_QWORD *)v24;
  if ( *(_QWORD *)v24 > 0x7FFFFFFFFFFFFFFuLL )
    goto LABEL_93;
  v26 = operator new[](16 * v25);
  for ( i = v25 - 1; i >= 0; --i )
    ;
  *(_QWORD *)(v110 + 32) = v26;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->ext_map_);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v110 + 96),
    &this->ext_map_.impl_.map_);
  for ( n = 0LL; ; ++n )
  {
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->ext_map_);
    v28 = *(const google::protobuf::MapPair<unsigned int,unsigned int> **)(v110 + 96);
    if ( !v28 )
      break;
    v29 = v28 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v28[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v29);
LABEL_102:
      __asan_report_load4(v29);
      goto LABEL_103;
    }
    v30 = (unsigned __int64)v28[1];
    v29 = (const google::protobuf::MapPair<unsigned int,unsigned int> *)v30;
    v31 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
    if ( (char)((v30 & 7) + 3) >= v31 && v31 )
      goto LABEL_102;
    v111 = *(unsigned int *)v30;
    v32 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
            (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v110 + 32),
            n);
    if ( !*(_WORD *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)&v32->first = v111;
      v32->second = (const google::protobuf::MapPair<unsigned int,unsigned int> *)v30;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v110 + 96));
      continue;
    }
LABEL_103:
    __asan_report_store16();
  }
  p_ext_map = (google::protobuf::io::CodedOutputStream *)google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
                                                           (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v110 + 32),
                                                           n);
  v33 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
          (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v110 + 32),
          0LL);
  output = p_ext_map;
  std::__sort<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*> *,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::CompareByFirstField<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>>>(
    v33,
    (google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *)p_ext_map,
    v107);
  *(_QWORD *)(v110 + 64) = 0LL;
  for ( j = 0LL; n > j; ++j )
  {
    v39 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
            (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v110 + 32),
            j);
    if ( *(_BYTE *)(((unsigned __int64)&v39->second >> 3) + 0x7FFF8000) )
    {
      p_impl = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)__asan_report_load8(&v39->second);
LABEL_108:
      v36 = (proto::PacketHead::PacketHead_ExtMapEntry *)__asan_report_load8(p_impl);
      goto LABEL_109;
    }
    second = (const unsigned int *)v39->second;
    p_impl = &this->ext_map_.impl_;
    if ( *(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_ >> 3) + 0x7FFF8000) )
      goto LABEL_108;
    v36 = google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Wrap(
            second,
            second + 1,
            this->ext_map_.impl_.arena_);
LABEL_109:
    p_ext_map = (google::protobuf::io::CodedOutputStream *)v36;
    v37 = *(_QWORD *)(v110 + 64);
    if ( (proto::PacketHead::PacketHead_ExtMapEntry *)v37 != v36 )
    {
      if ( v37 )
      {
        if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v37);
LABEL_118:
          v37 = v38;
          __asan_report_load8(v38);
LABEL_119:
          __asan_handle_no_return(v37);
          __assert_fail(
            "ptr_ != __null",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/scoped_ptr.h",
            0x5Bu,
            "C& google::protobuf::internal::scoped_ptr<C>::operator*() const [with C = proto::PacketHead::PacketHead_ExtMapEntry]");
        }
        v38 = *(_QWORD *)v37 + 8LL;
        if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
          goto LABEL_118;
        (*(void (**)(void))(*(_QWORD *)v37 + 8LL))();
      }
      *(_QWORD *)(v110 + 64) = p_ext_map;
    }
    output = *(google::protobuf::io::CodedOutputStream **)(v110 + 64);
    if ( !output )
      goto LABEL_119;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      23,
      (const google::protobuf::MessageLite *)output,
      v3);
  }
  v41 = *(_QWORD *)(v110 + 64);
  if ( !v41 )
    goto LABEL_128;
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v41);
  }
  else
  {
    v42 = *(_QWORD *)v41 + 8LL;
    if ( !*(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
    {
      (*(void (**)(void))(*(_QWORD *)v41 + 8LL))();
LABEL_128:
      v43 = *(void **)(v110 + 32);
      if ( v43 )
        operator delete[](v43);
      goto LABEL_154;
    }
  }
  __asan_report_load8(v42);
LABEL_132:
  output = (google::protobuf::io::CodedOutputStream *)&this->ext_map_.impl_.map_;
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v110 + 96),
    &this->ext_map_.impl_.map_);
  while ( 2 )
  {
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField((const google::protobuf::internal::MapFieldBase *const)p_ext_map);
    v44 = *(_QWORD *)(v110 + 96);
    if ( v44 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(v44 + 8) >> 3) + 0x7FFF8000) )
      {
        v46 = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)__asan_report_load8(v44 + 8);
      }
      else
      {
        v45 = *(const unsigned int **)(v44 + 8);
        v46 = &this->ext_map_.impl_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_ >> 3) + 0x7FFF8000) )
        {
          v47 = google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Wrap(
                  v45,
                  v45 + 1,
                  this->ext_map_.impl_.arena_);
LABEL_139:
          v48 = v47;
          v49 = *(_QWORD *)(v110 + 64);
          if ( v47 != (proto::PacketHead::PacketHead_ExtMapEntry *)v49 )
          {
            if ( v49 )
            {
              if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v49);
LABEL_148:
                v49 = v50;
                __asan_report_load8(v50);
LABEL_149:
                __asan_handle_no_return(v49);
                __assert_fail(
                  "ptr_ != __null",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/s"
                  "tubs/scoped_ptr.h",
                  0x5Bu,
                  "C& google::protobuf::internal::scoped_ptr<C>::operator*() const [with C = proto::PacketHead::PacketHead_ExtMapEntry]");
              }
              v50 = *(_QWORD *)v49 + 8LL;
              if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
                goto LABEL_148;
              (*(void (**)(void))(*(_QWORD *)v49 + 8LL))();
            }
            *(_QWORD *)(v110 + 64) = v48;
          }
          output = *(google::protobuf::io::CodedOutputStream **)(v110 + 64);
          if ( !output )
            goto LABEL_149;
          google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            23,
            (const google::protobuf::MessageLite *)output,
            v3);
          google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v110 + 96));
          continue;
        }
      }
      v47 = (proto::PacketHead::PacketHead_ExtMapEntry *)__asan_report_load8(v46);
      goto LABEL_139;
    }
    break;
  }
  v51 = *(_QWORD *)(v110 + 64);
  if ( v51 )
  {
    if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v51);
    }
    else
    {
      v52 = *(_QWORD *)v51 + 8LL;
      if ( !*(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v51 + 8LL))();
        goto LABEL_154;
      }
    }
    p_sender_app_id = (google::protobuf::uint32 *)v52;
    __asan_report_load8(v52);
LABEL_185:
    __asan_report_load4(p_sender_app_id);
    goto LABEL_186;
  }
LABEL_154:
  p_sender_app_id = &this->sender_app_id_;
  v54 = *(_BYTE *)(((unsigned __int64)&this->sender_app_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 28) & 7) + 3) >= v54 && v54 )
    goto LABEL_185;
  output = (google::protobuf::io::CodedOutputStream *)this->sender_app_id_;
  if ( (_DWORD)output )
LABEL_186:
    google::protobuf::internal::WireFormatLite::WriteUInt32(24, (google::protobuf::uint32)output, v3);
  v55 = *(_BYTE *)(((unsigned __int64)&this->sender_load_ >> 3) + 0x7FFF8000);
  if ( v55 && v55 <= 3 )
  {
    __asan_report_load4(&this->sender_load_);
  }
  else
  {
    output = (google::protobuf::io::CodedOutputStream *)this->sender_load_;
    if ( !(_DWORD)output )
      goto LABEL_160;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(25, (google::protobuf::uint32)output, v3);
LABEL_160:
  p_span_context_str = &this->span_context_str_;
  if ( *(_BYTE *)(((unsigned __int64)&this->span_context_str_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_span_context_str);
    goto LABEL_190;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->span_context_str_.ptr_;
  p_span_context_str = &output->buffer_;
  if ( *(_BYTE *)(((unsigned __int64)&output->buffer_ >> 3) + 0x7FFF8000) )
  {
LABEL_190:
    __asan_report_load8(p_span_context_str);
    goto LABEL_191;
  }
  if ( output->buffer_ )
LABEL_191:
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(26LL, output, v3);
  v57 = *(_BYTE *)(((unsigned __int64)&this->source_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 20) & 7) + 3) >= v57 && v57 )
  {
    __asan_report_load4(&this->source_service_);
    goto LABEL_193;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->source_service_;
  if ( (_DWORD)output )
LABEL_193:
    google::protobuf::internal::WireFormatLite::WriteUInt32(31, (google::protobuf::uint32)output, v3);
  v58 = *(_BYTE *)(((unsigned __int64)&this->target_service_ >> 3) + 0x7FFF8000);
  if ( v58 && v58 <= 3 )
  {
    __asan_report_load4(&this->target_service_);
  }
  else
  {
    output = (google::protobuf::io::CodedOutputStream *)this->target_service_;
    if ( !(_DWORD)output )
      goto LABEL_169;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(32, (google::protobuf::uint32)output, v3);
LABEL_169:
  p_service_app_id_map = &this->service_app_id_map_;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->service_app_id_map_);
  p_serialization_deterministic_is_overridden = (unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_serialization_deterministic_is_overridden);
    goto LABEL_197;
  }
  p_serialization_deterministic_is_overridden = (unsigned __int64)this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)((p_serialization_deterministic_is_overridden >> 3) + 0x7FFF8000) )
  {
LABEL_197:
    __asan_report_load8(p_serialization_deterministic_is_overridden);
LABEL_198:
    __asan_report_load1(p_serialization_deterministic_is_overridden, output, v63);
    goto LABEL_199;
  }
  if ( !*(_QWORD *)p_serialization_deterministic_is_overridden )
    goto LABEL_274;
  p_serialization_deterministic_is_overridden = (unsigned __int64)&v3->serialization_deterministic_is_overridden_;
  v62 = *(_BYTE *)(((unsigned __int64)&v3->serialization_deterministic_is_overridden_ >> 3) + 0x7FFF8000);
  v63 = ((_BYTE)v3 + 26) & 7;
  if ( v62 <= (char)v63 && v62 )
    goto LABEL_198;
  if ( v3->serialization_deterministic_is_overridden_ )
  {
    p_serialization_deterministic_is_overridden = (unsigned __int64)&v3->serialization_deterministic_override_;
    v64 = *(_BYTE *)(((unsigned __int64)&v3->serialization_deterministic_override_ >> 3) + 0x7FFF8000);
    v65 = ((_BYTE)v3 + 27) & 7;
    if ( v64 > (char)v65 || !v64 )
    {
      v66 = v3->serialization_deterministic_override_;
      goto LABEL_178;
    }
LABEL_199:
    __asan_report_load1(p_serialization_deterministic_is_overridden, output, v65);
  }
  if ( *(_BYTE *)(((unsigned __int64)&google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ >> 3)
                + 0x7FFF8000) )
  {
    v67 = &google::protobuf::io::CodedOutputStream::default_serialization_deterministic_;
    __asan_report_load8(&google::protobuf::io::CodedOutputStream::default_serialization_deterministic_);
LABEL_203:
    __asan_report_load8(v67);
    goto LABEL_204;
  }
  v66 = google::protobuf::io::CodedOutputStream::default_serialization_deterministic_;
LABEL_178:
  if ( !v66 )
  {
LABEL_182:
    *(_QWORD *)(v110 + 64) = 0LL;
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->service_app_id_map_);
LABEL_252:
    output = (google::protobuf::io::CodedOutputStream *)&this->service_app_id_map_.impl_.map_;
    google::protobuf::Map<unsigned int,unsigned int>::begin(
      (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v110 + 96),
      &this->service_app_id_map_.impl_.map_);
    while ( 1 )
    {
      google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(p_service_app_id_map);
      v60 = 0LL;
      v88 = *(_QWORD *)(v110 + 96);
      if ( !v88 )
      {
        v95 = *(_QWORD *)(v110 + 64);
        if ( !v95 )
          goto LABEL_274;
        if ( *(_BYTE *)((v95 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v95);
        }
        else
        {
          v96 = *(_QWORD *)v95 + 8LL;
          if ( !*(_BYTE *)((v96 >> 3) + 0x7FFF8000) )
          {
            (*(void (**)(void))(*(_QWORD *)v95 + 8LL))();
            goto LABEL_274;
          }
        }
        p_is_set_game_thread = (bool *)v96;
        __asan_report_load8(v96);
LABEL_294:
        __asan_report_load1(p_is_set_game_thread, output, v60);
        goto LABEL_295;
      }
      if ( *(_BYTE *)(((unsigned __int64)(v88 + 8) >> 3) + 0x7FFF8000) )
      {
        v90 = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)__asan_report_load8(v88 + 8);
      }
      else
      {
        v89 = *(const unsigned int **)(v88 + 8);
        v90 = &this->service_app_id_map_.impl_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_ >> 3) + 0x7FFF8000) )
        {
          v91 = google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Wrap(
                  v89,
                  v89 + 1,
                  this->service_app_id_map_.impl_.arena_);
          goto LABEL_259;
        }
      }
      v91 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)__asan_report_load8(v90);
LABEL_259:
      v92 = v91;
      v93 = *(_QWORD *)(v110 + 64);
      if ( v91 != (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)v93 )
      {
        if ( v93 )
        {
          if ( *(_BYTE *)((v93 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v93);
LABEL_268:
            v93 = v94;
            __asan_report_load8(v94);
LABEL_269:
            __asan_handle_no_return(v93);
            __assert_fail(
              "ptr_ != __null",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/scoped_ptr.h",
              0x5Bu,
              "C& google::protobuf::internal::scoped_ptr<C>::operator*() const [with C = proto::PacketHead::PacketHead_Se"
              "rviceAppIdMapEntry]");
          }
          v94 = *(_QWORD *)v93 + 8LL;
          if ( *(_BYTE *)((v94 >> 3) + 0x7FFF8000) )
            goto LABEL_268;
          (*(void (**)(void))(*(_QWORD *)v93 + 8LL))();
        }
        *(_QWORD *)(v110 + 64) = v92;
      }
      output = *(google::protobuf::io::CodedOutputStream **)(v110 + 64);
      if ( !output )
        goto LABEL_269;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        33,
        (const google::protobuf::MessageLite *)output,
        v3);
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v110 + 96));
    }
  }
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->service_app_id_map_);
  v67 = (google::protobuf::internal::AtomicWord *)&this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
    goto LABEL_203;
  v67 = (google::protobuf::internal::AtomicWord *)this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
  {
LABEL_204:
    __asan_report_load8(v67);
    goto LABEL_205;
  }
  if ( (unsigned __int64)*v67 <= 1 )
    goto LABEL_182;
LABEL_205:
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->service_app_id_map_);
  v68 = (unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v68);
    goto LABEL_212;
  }
  v68 = (unsigned __int64)this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
  {
LABEL_212:
    __asan_report_load8(v68);
LABEL_213:
    __asan_handle_no_return(v68);
    __cxa_throw_bad_array_new_length();
  }
  v69 = *(_QWORD *)v68;
  if ( *(_QWORD *)v68 > 0x7FFFFFFFFFFFFFFuLL )
    goto LABEL_213;
  v70 = operator new[](16 * v69);
  for ( k = v69 - 1; k >= 0; --k )
    ;
  *(_QWORD *)(v110 + 32) = v70;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->service_app_id_map_);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v110 + 96),
    &this->service_app_id_map_.impl_.map_);
  na = 0LL;
  while ( 2 )
  {
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->service_app_id_map_);
    v72 = *(const google::protobuf::MapPair<unsigned int,unsigned int> **)(v110 + 96);
    if ( v72 )
    {
      v73 = v72 + 1;
      if ( *(_BYTE *)(((unsigned __int64)&v72[1] >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v73);
      }
      else
      {
        v74 = (unsigned __int64)v72[1];
        v73 = (const google::protobuf::MapPair<unsigned int,unsigned int> *)v74;
        v75 = *(_BYTE *)((v74 >> 3) + 0x7FFF8000);
        if ( (char)((v74 & 7) + 3) < v75 || !v75 )
        {
          v112 = *(unsigned int *)v74;
          v76 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
                  (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v110 + 32),
                  na);
          if ( !*(_WORD *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)&v76->first = v112;
            v76->second = (const google::protobuf::MapPair<unsigned int,unsigned int> *)v74;
            google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v110 + 96));
LABEL_224:
            ++na;
            continue;
          }
LABEL_223:
          __asan_report_store16();
          goto LABEL_224;
        }
      }
      __asan_report_load4(v73);
      goto LABEL_223;
    }
    break;
  }
  p_service_app_id_map = (google::protobuf::internal::MapFieldBase *)google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
                                                                       (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v110 + 32),
                                                                       na);
  v77 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
          (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v110 + 32),
          0LL);
  output = (google::protobuf::io::CodedOutputStream *)p_service_app_id_map;
  std::__sort<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*> *,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::CompareByFirstField<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>>>(
    v77,
    (google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *)p_service_app_id_map,
    v107);
  *(_QWORD *)(v110 + 64) = 0LL;
  v78 = 0LL;
  while ( 2 )
  {
    if ( na > v78 )
    {
      v83 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
              (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v110 + 32),
              v78);
      if ( *(_BYTE *)(((unsigned __int64)&v83->second >> 3) + 0x7FFF8000) )
      {
        v79 = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)__asan_report_load8(&v83->second);
      }
      else
      {
        v84 = (const unsigned int *)v83->second;
        v79 = &this->service_app_id_map_.impl_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_ >> 3) + 0x7FFF8000) )
        {
          v80 = google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Wrap(
                  v84,
                  v84 + 1,
                  this->service_app_id_map_.impl_.arena_);
          goto LABEL_229;
        }
      }
      v80 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)__asan_report_load8(v79);
LABEL_229:
      p_service_app_id_map = (google::protobuf::internal::MapFieldBase *)v80;
      v81 = *(_QWORD *)(v110 + 64);
      if ( v80 != (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)v81 )
      {
        if ( v81 )
        {
          if ( *(_BYTE *)((v81 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v81);
LABEL_238:
            v81 = v82;
            __asan_report_load8(v82);
LABEL_239:
            __asan_handle_no_return(v81);
            __assert_fail(
              "ptr_ != __null",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/scoped_ptr.h",
              0x5Bu,
              "C& google::protobuf::internal::scoped_ptr<C>::operator*() const [with C = proto::PacketHead::PacketHead_Se"
              "rviceAppIdMapEntry]");
          }
          v82 = *(_QWORD *)v81 + 8LL;
          if ( *(_BYTE *)((v82 >> 3) + 0x7FFF8000) )
            goto LABEL_238;
          (*(void (**)(void))(*(_QWORD *)v81 + 8LL))();
        }
        *(_QWORD *)(v110 + 64) = p_service_app_id_map;
      }
      output = *(google::protobuf::io::CodedOutputStream **)(v110 + 64);
      if ( !output )
        goto LABEL_239;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        33,
        (const google::protobuf::MessageLite *)output,
        v3);
      ++v78;
      continue;
    }
    break;
  }
  v85 = *(_QWORD *)(v110 + 64);
  if ( !v85 )
    goto LABEL_248;
  if ( *(_BYTE *)((v85 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v85);
    goto LABEL_251;
  }
  v86 = *(_QWORD *)v85 + 8LL;
  if ( *(_BYTE *)((v86 >> 3) + 0x7FFF8000) )
  {
LABEL_251:
    __asan_report_load8(v86);
    goto LABEL_252;
  }
  (*(void (**)(void))(*(_QWORD *)v85 + 8LL))();
LABEL_248:
  v87 = *(void **)(v110 + 32);
  if ( v87 )
    operator delete[](v87);
LABEL_274:
  p_is_set_game_thread = &this->is_set_game_thread_;
  if ( *(char *)(((unsigned __int64)&this->is_set_game_thread_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_294;
  is_set_game_thread = this->is_set_game_thread_;
  output = (google::protobuf::io::CodedOutputStream *)is_set_game_thread;
  if ( is_set_game_thread )
LABEL_295:
    google::protobuf::internal::WireFormatLite::WriteBool(34, (bool)output, v3);
  v99 = *(_BYTE *)(((unsigned __int64)&this->game_thread_index_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 12) & 7) + 3) >= v99 && v99 )
  {
    __asan_report_load4(&this->game_thread_index_);
    goto LABEL_297;
  }
  output = (google::protobuf::io::CodedOutputStream *)this->game_thread_index_;
  if ( (_DWORD)output )
LABEL_297:
    google::protobuf::internal::WireFormatLite::WriteUInt32(35, (google::protobuf::uint32)output, v3);
  v100 = *(_BYTE *)(((unsigned __int64)&this->is_set_multi_thread_ >> 3) + 0x7FFF8000);
  v101 = ((_BYTE)this - 7) & 7;
  if ( v100 <= (char)v101 && v100 )
  {
    __asan_report_load1(&this->is_set_multi_thread_, output, v101);
    goto LABEL_299;
  }
  is_set_multi_thread = this->is_set_multi_thread_;
  output = (google::protobuf::io::CodedOutputStream *)is_set_multi_thread;
  if ( is_set_multi_thread )
LABEL_299:
    google::protobuf::internal::WireFormatLite::WriteBool(36, (bool)output, v3);
  v103 = *(_BYTE *)(((unsigned __int64)&this->multi_thread_index_ >> 3) + 0x7FFF8000);
  if ( v103 && v103 <= 3 )
  {
    __asan_report_load4(&this->multi_thread_index_);
  }
  else
  {
    output = (google::protobuf::io::CodedOutputStream *)this->multi_thread_index_;
    if ( !(_DWORD)output )
      goto LABEL_285;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(37, (google::protobuf::uint32)output, v3);
LABEL_285:
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
    v105 = (bool *)__asan_report_load8(&this->_internal_metadata_);
  }
  else
  {
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) == 0 )
      goto LABEL_290;
    v105 = &google::protobuf::internal::proto3_preserve_unknown_;
    v106 = *(unsigned __int8 *)(((unsigned __int64)&google::protobuf::internal::proto3_preserve_unknown_ >> 3)
                              + 0x7FFF8000);
    if ( (char)v106 > (char)((unsigned __int64)&google::protobuf::internal::proto3_preserve_unknown_ & 7)
      || !(_BYTE)v106 )
    {
      if ( !google::protobuf::internal::proto3_preserve_unknown_ )
        goto LABEL_290;
      goto LABEL_304;
    }
  }
  ptr = (unsigned __int64)v105;
  __asan_report_load1(v105, output, v106);
LABEL_304:
  google::protobuf::internal::WireFormat::SerializeUnknownFields(
    (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
    v3);
LABEL_290:
  if ( v113 == (char *)v110 )
  {
    *(_QWORD *)((v110 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v110 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v110 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v110 = 1172321806LL;
    *(_QWORD *)((v110 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v110 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v110 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 967: range 000000000C818F12-000000000C81BF79
google::protobuf::uint8 *__fastcall proto::PacketHead::InternalSerializeWithCachedSizesToArray(
        const proto::PacketHead *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *p_service_app_id_map; // r13
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *p_ext_map; // r14
  google::protobuf::Map<unsigned int,unsigned int> *p_map; // rsi
  void *p_packet_id; // rdi
  char v9; // al
  unsigned int packet_id; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  google::protobuf::uint8 v13; // cl
  __int64 v14; // rdx
  void *p_rpc_id; // rdi
  __int64 v16; // rdx
  char v17; // dl
  unsigned int rpc_id; // eax
  __int64 v19; // rdx
  google::protobuf::uint8 v20; // cl
  __int64 v21; // rdx
  void *p_client_sequence_id; // rdi
  __int64 v23; // rdx
  char v24; // al
  unsigned int client_sequence_id; // eax
  __int64 v26; // rdx
  google::protobuf::uint8 v27; // cl
  __int64 v28; // rdx
  void *p_enet_channel_id; // rdi
  __int64 v30; // rdx
  char v31; // dl
  unsigned int enet_channel_id; // eax
  __int64 v33; // rdx
  google::protobuf::uint8 v34; // cl
  __int64 v35; // rdx
  void *p_enet_is_reliable; // rdi
  __int64 v37; // rdx
  char v38; // al
  unsigned int enet_is_reliable; // eax
  __int64 v40; // rdx
  google::protobuf::uint8 v41; // cl
  __int64 v42; // rdx
  void *p_sent_ms; // rdi
  __int64 v44; // rdx
  google::protobuf::uint64 sent_ms; // rax
  __int64 v46; // rdx
  google::protobuf::uint8 v47; // cl
  __int64 v48; // rdx
  void *p_user_id; // rdi
  __int64 v50; // rdx
  char v51; // dl
  unsigned int user_id; // eax
  __int64 v53; // rdx
  google::protobuf::uint8 v54; // cl
  __int64 v55; // rdx
  void *p_user_ip; // rdi
  __int64 v57; // rdx
  char v58; // al
  unsigned int user_ip; // eax
  __int64 v60; // rdx
  google::protobuf::uint8 v61; // cl
  __int64 v62; // rdx
  void *p_user_session_id; // rdi
  __int64 v64; // rdx
  char v65; // dl
  unsigned int user_session_id; // eax
  __int64 v67; // rdx
  google::protobuf::uint8 v68; // cl
  __int64 v69; // rdx
  void *p_home_user_id; // rdi
  __int64 v71; // rdx
  char v72; // al
  unsigned int home_user_id; // eax
  __int64 v74; // rdx
  google::protobuf::uint8 v75; // cl
  __int64 v76; // rdx
  void *p_recv_time_ms; // rdi
  __int64 v78; // rdx
  unsigned __int64 recv_time_ms; // rax
  __int64 v80; // rdx
  char v81; // cl
  char v82; // cl
  google::protobuf::uint8 v83; // cl
  __int64 v84; // rdx
  void *p_rpc_begin_time_ms; // rdi
  __int64 v86; // rdx
  char v87; // dl
  unsigned int rpc_begin_time_ms; // eax
  __int64 v89; // rdx
  char v90; // cl
  char v91; // cl
  google::protobuf::uint8 v92; // cl
  __int64 v93; // rdx
  unsigned __int64 p_elements; // rdi
  __int64 v95; // rdx
  unsigned __int64 elements; // rdi
  __int64 v97; // r13
  __int64 v98; // rax
  __int64 i; // r13
  const google::protobuf::MapPair<unsigned int,unsigned int> *v100; // rax
  const google::protobuf::MapPair<unsigned int,unsigned int> *v101; // rdi
  unsigned __int64 v102; // r13
  char v103; // dl
  __int64 v104; // r15
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v105; // rax
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v106; // r14
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v107; // rax
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *p_impl; // rax
  proto::PacketHead::PacketHead_ExtMapEntry *v109; // rax
  proto::PacketHead::PacketHead_ExtMapEntry *v110; // r13
  unsigned __int64 v111; // rdi
  unsigned __int64 v112; // rdx
  unsigned int j; // eax
  __int64 v114; // rdx
  unsigned __int64 p_state; // rdi
  __int64 v116; // rdx
  char v117; // al
  unsigned __int64 v118; // rax
  char v119; // cl
  unsigned int v120; // r15d
  unsigned __int64 v121; // rdi
  unsigned __int64 v122; // rax
  char v123; // cl
  unsigned int v124; // eax
  unsigned int k; // r15d
  char v126; // al
  google::protobuf::uint8 *v127; // rdi
  char v128; // al
  __int64 v129; // rdx
  unsigned __int64 v130; // rax
  google::protobuf::uint8 *v131; // rdi
  char v132; // cl
  unsigned int v133; // eax
  __int64 v134; // rdx
  google::protobuf::uint8 v135; // cl
  __int64 v136; // rdx
  google::protobuf::uint8 *v137; // rdi
  __int64 v138; // rdx
  unsigned __int64 v139; // rax
  google::protobuf::uint8 *v140; // rdi
  char v141; // cl
  unsigned int v142; // eax
  __int64 v143; // rdx
  google::protobuf::uint8 v144; // cl
  __int64 v145; // rdx
  __int64 v146; // rdx
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v147; // rax
  const unsigned int *second; // rdi
  unsigned __int64 v149; // rdi
  unsigned __int64 v150; // rdx
  void *v151; // rdi
  __int64 v152; // rax
  const unsigned int *v153; // rdi
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *v154; // rax
  proto::PacketHead::PacketHead_ExtMapEntry *v155; // rax
  proto::PacketHead::PacketHead_ExtMapEntry *v156; // r13
  unsigned __int64 v157; // rdi
  unsigned __int64 v158; // rdx
  unsigned int m; // eax
  __int64 v160; // rdx
  unsigned __int64 v161; // rdi
  __int64 v162; // rdx
  char v163; // al
  unsigned __int64 v164; // rax
  char v165; // cl
  unsigned int v166; // r15d
  unsigned __int64 v167; // rdi
  unsigned __int64 v168; // rax
  char v169; // cl
  unsigned int v170; // eax
  unsigned int ii; // r15d
  char v172; // al
  google::protobuf::uint8 *v173; // rdi
  char v174; // al
  __int64 v175; // rdx
  unsigned __int64 v176; // rax
  google::protobuf::uint8 *v177; // rdi
  char v178; // cl
  unsigned int v179; // eax
  __int64 v180; // rdx
  google::protobuf::uint8 v181; // cl
  __int64 v182; // rdx
  google::protobuf::uint8 *v183; // rdi
  __int64 v184; // rdx
  unsigned __int64 v185; // rax
  google::protobuf::uint8 *v186; // rdi
  char v187; // cl
  unsigned int v188; // eax
  __int64 v189; // rdx
  google::protobuf::uint8 v190; // cl
  __int64 v191; // rdx
  __int64 v192; // rdx
  unsigned __int64 v193; // rdi
  unsigned __int64 v194; // rdx
  google::protobuf::uint32 *p_sender_app_id; // rdi
  char v196; // dl
  unsigned int sender_app_id; // eax
  __int64 v198; // rdx
  char v199; // cl
  char v200; // cl
  google::protobuf::uint8 v201; // cl
  __int64 v202; // rdx
  void *p_sender_load; // rdi
  __int64 v204; // rdx
  char v205; // al
  unsigned int sender_load; // eax
  __int64 v207; // rdx
  char v208; // cl
  char v209; // cl
  google::protobuf::uint8 v210; // cl
  __int64 v211; // rdx
  void *p_span_context_str; // rdi
  __int64 v213; // rdx
  std::string *ptr; // r8
  unsigned int jj; // eax
  google::protobuf::uint8 v216; // cl
  __int64 v217; // rdx
  void *p_source_service; // rdi
  __int64 v219; // rdx
  char v220; // dl
  unsigned int source_service; // eax
  __int64 v222; // rdx
  char v223; // cl
  char v224; // cl
  google::protobuf::uint8 v225; // cl
  __int64 v226; // rdx
  void *p_target_service; // rdi
  __int64 v228; // rdx
  char v229; // al
  unsigned int target_service; // eax
  __int64 v231; // rdx
  char v232; // cl
  char v233; // cl
  google::protobuf::uint8 v234; // cl
  __int64 v235; // rdx
  unsigned __int64 v236; // rdi
  __int64 v237; // rdx
  __int64 v238; // rdx
  unsigned __int64 v239; // rdi
  __int64 v240; // r14
  __int64 v241; // rax
  __int64 nn; // r14
  unsigned __int64 v243; // r15
  const google::protobuf::MapPair<unsigned int,unsigned int> *v244; // rax
  const google::protobuf::MapPair<unsigned int,unsigned int> *v245; // rdi
  unsigned __int64 v246; // r14
  char v247; // dl
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v248; // rax
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v249; // r14
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v250; // rax
  unsigned __int64 v251; // r14
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *v252; // rax
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v253; // rax
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v254; // r13
  unsigned __int64 v255; // rdi
  unsigned __int64 v256; // rdx
  unsigned int i1; // eax
  __int64 v258; // rdx
  unsigned __int64 v259; // rdi
  __int64 v260; // rdx
  char v261; // al
  unsigned __int64 v262; // rax
  char v263; // cl
  unsigned __int64 v264; // rdi
  unsigned __int64 v265; // rax
  char v266; // cl
  unsigned int v267; // eax
  unsigned int i2; // eax
  __int64 v269; // rdx
  google::protobuf::uint8 *v270; // rdi
  __int64 v271; // rdx
  unsigned __int64 v272; // rax
  google::protobuf::uint8 *v273; // rdi
  char v274; // cl
  unsigned int v275; // eax
  __int64 v276; // rdx
  google::protobuf::uint8 v277; // cl
  __int64 v278; // rdx
  google::protobuf::uint8 *v279; // rdi
  __int64 v280; // rdx
  unsigned __int64 v281; // rax
  google::protobuf::uint8 *v282; // rdi
  char v283; // cl
  unsigned int v284; // eax
  __int64 v285; // rdx
  google::protobuf::uint8 v286; // cl
  __int64 v287; // rdx
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v288; // rax
  const unsigned int *v289; // rdi
  unsigned __int64 v290; // rdi
  unsigned __int64 v291; // rdx
  void *v292; // rdi
  __int64 v293; // rax
  const unsigned int *v294; // rdi
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *v295; // rax
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v296; // rax
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v297; // r14
  unsigned __int64 v298; // rdi
  unsigned __int64 v299; // rdx
  unsigned __int64 v300; // r14
  unsigned int kk; // eax
  __int64 v302; // rdx
  unsigned __int64 v303; // rdi
  __int64 v304; // rdx
  char v305; // al
  unsigned __int64 v306; // rax
  char v307; // cl
  unsigned int v308; // r15d
  unsigned __int64 v309; // rdi
  unsigned __int64 v310; // rax
  char v311; // cl
  unsigned int v312; // eax
  unsigned int mm; // r15d
  char v314; // al
  unsigned __int64 v315; // rdi
  char v316; // al
  __int64 v317; // rdx
  unsigned __int64 v318; // rax
  google::protobuf::uint8 *v319; // rdi
  char v320; // cl
  unsigned int v321; // eax
  __int64 v322; // rdx
  google::protobuf::uint8 v323; // cl
  __int64 v324; // rdx
  unsigned __int64 v325; // rdi
  __int64 v326; // rdx
  unsigned __int64 v327; // rax
  google::protobuf::uint8 *v328; // rdi
  char v329; // cl
  unsigned int v330; // eax
  __int64 v331; // rdx
  google::protobuf::uint8 v332; // cl
  __int64 v333; // rdx
  __int64 v334; // rdx
  unsigned __int64 v335; // rdi
  unsigned __int64 v336; // rdx
  bool *p_is_set_game_thread; // rdi
  unsigned int i3; // eax
  google::protobuf::uint8 v339; // cl
  __int64 v340; // rdx
  __int64 v341; // rdx
  char v342; // al
  __int64 v343; // rdx
  void *p_game_thread_index; // rdi
  char v345; // dl
  unsigned int game_thread_index; // eax
  __int64 v347; // rdx
  char v348; // cl
  char v349; // cl
  google::protobuf::uint8 v350; // cl
  __int64 v351; // rdx
  void *p_is_set_multi_thread; // rdi
  __int64 v353; // rdx
  char v354; // al
  __int64 v355; // rdx
  unsigned int i4; // eax
  google::protobuf::uint8 v357; // cl
  __int64 v358; // rdx
  __int64 v359; // rdx
  char v360; // al
  __int64 v361; // rdx
  void *p_multi_thread_index; // rdi
  char v363; // al
  unsigned int multi_thread_index; // eax
  __int64 v365; // rdx
  char v366; // cl
  char v367; // cl
  google::protobuf::uint8 v368; // cl
  __int64 v369; // rdx
  void *p_internal_metadata; // rdi
  __int64 v371; // rdx
  unsigned __int64 v372; // rdi
  bool *v373; // rax
  __int64 v374; // rdx
  google::protobuf::uint8 *result; // rax
  char *v376; // [rsp+0h] [rbp-188h]
  unsigned __int64 n; // [rsp+8h] [rbp-180h]
  proto::PacketHead::InternalSerializeWithCachedSizesToArray::size_type na; // [rsp+8h] [rbp-180h]
  unsigned int nb; // [rsp+8h] [rbp-180h]
  unsigned __int64 v380; // [rsp+10h] [rbp-178h]
  _DWORD *v381; // [rsp+18h] [rbp-170h]
  char v383[216]; // [rsp+B0h] [rbp-D8h] BYREF

  v380 = (unsigned __int64)v383;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(160LL);
    if ( v12 )
      v380 = v12;
  }
  v376 = (char *)(v380 + 160);
  *(_QWORD *)v380 = 1102416563LL;
  *(_QWORD *)(v380 + 8) = "3 32 8 10 items:1112 64 8 10 entry:1132 96 24 7 it:1134";
  p_map = (google::protobuf::Map<unsigned int,unsigned int> *)proto::PacketHead::InternalSerializeWithCachedSizesToArray;
  *(_QWORD *)(v380 + 16) = proto::PacketHead::InternalSerializeWithCachedSizesToArray;
  v381 = (_DWORD *)(v380 >> 3);
  v381[536862720] = -235802127;
  v381[536862721] = -218959360;
  v381[536862722] = -218959360;
  v381[536862723] = -218103808;
  v381[536862724] = -202116109;
  p_packet_id = &this->packet_id_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->packet_id_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(p_packet_id);
    goto LABEL_11;
  }
  packet_id = this->packet_id_;
  if ( !packet_id )
    goto LABEL_20;
  p_packet_id = target;
  v11 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v11 <= ((unsigned __int8)target & 7) && (_BYTE)v11 )
  {
LABEL_11:
    packet_id = __asan_report_store1(p_packet_id, proto::PacketHead::InternalSerializeWithCachedSizesToArray, v11);
    goto LABEL_12;
  }
  *target++ = 8;
  while ( packet_id > 0x7F )
  {
    v13 = packet_id | 0x80;
    v14 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( (char)v14 <= (char)p_map && (_BYTE)v14 )
    {
      LOBYTE(packet_id) = __asan_report_store1(target, p_map, v14);
      break;
    }
LABEL_12:
    *target = v13;
    packet_id >>= 7;
    ++target;
  }
  p_rpc_id = target;
  v16 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v16 <= ((unsigned __int8)target & 7) && (_BYTE)v16 )
  {
    __asan_report_store1(target, p_map, v16);
LABEL_27:
    __asan_report_load4(p_rpc_id);
    goto LABEL_28;
  }
  *target++ = packet_id;
LABEL_20:
  p_rpc_id = &this->rpc_id_;
  v17 = *(_BYTE *)(((unsigned __int64)&this->rpc_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 84) & 7) + 3) >= v17 && v17 )
    goto LABEL_27;
  rpc_id = this->rpc_id_;
  if ( !rpc_id )
    goto LABEL_37;
  p_rpc_id = target;
  v19 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v19 <= ((unsigned __int8)target & 7) && (_BYTE)v19 )
  {
LABEL_28:
    rpc_id = __asan_report_store1(p_rpc_id, p_map, v19);
    goto LABEL_29;
  }
  *target++ = 16;
  while ( rpc_id > 0x7F )
  {
    v20 = rpc_id | 0x80;
    v21 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( (char)v21 <= (char)p_map && (_BYTE)v21 )
    {
      LOBYTE(rpc_id) = __asan_report_store1(target, p_map, v21);
      break;
    }
LABEL_29:
    *target = v20;
    rpc_id >>= 7;
    ++target;
  }
  p_client_sequence_id = target;
  v23 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v23 <= ((unsigned __int8)target & 7) && (_BYTE)v23 )
  {
    __asan_report_store1(target, p_map, v23);
LABEL_44:
    __asan_report_load4(p_client_sequence_id);
    goto LABEL_45;
  }
  *target++ = rpc_id;
LABEL_37:
  p_client_sequence_id = &this->client_sequence_id_;
  v24 = *(_BYTE *)(((unsigned __int64)&this->client_sequence_id_ >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
    goto LABEL_44;
  client_sequence_id = this->client_sequence_id_;
  if ( !client_sequence_id )
    goto LABEL_54;
  p_client_sequence_id = target;
  v26 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v26 <= ((unsigned __int8)target & 7) && (_BYTE)v26 )
  {
LABEL_45:
    client_sequence_id = __asan_report_store1(p_client_sequence_id, p_map, v26);
    goto LABEL_46;
  }
  *target++ = 24;
  while ( client_sequence_id > 0x7F )
  {
    v27 = client_sequence_id | 0x80;
    v28 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( (char)v28 <= (char)p_map && (_BYTE)v28 )
    {
      LOBYTE(client_sequence_id) = __asan_report_store1(target, p_map, v28);
      break;
    }
LABEL_46:
    *target = v27;
    client_sequence_id >>= 7;
    ++target;
  }
  p_enet_channel_id = target;
  v30 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v30 <= ((unsigned __int8)target & 7) && (_BYTE)v30 )
  {
    __asan_report_store1(target, p_map, v30);
LABEL_61:
    __asan_report_load4(p_enet_channel_id);
    goto LABEL_62;
  }
  *target++ = client_sequence_id;
LABEL_54:
  p_enet_channel_id = &this->enet_channel_id_;
  v31 = *(_BYTE *)(((unsigned __int64)&this->enet_channel_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 76) & 7) + 3) >= v31 && v31 )
    goto LABEL_61;
  enet_channel_id = this->enet_channel_id_;
  if ( !enet_channel_id )
    goto LABEL_71;
  p_enet_channel_id = target;
  v33 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v33 <= ((unsigned __int8)target & 7) && (_BYTE)v33 )
  {
LABEL_62:
    enet_channel_id = __asan_report_store1(p_enet_channel_id, p_map, v33);
    goto LABEL_63;
  }
  *target++ = 32;
  while ( enet_channel_id > 0x7F )
  {
    v34 = enet_channel_id | 0x80;
    v35 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( (char)v35 <= (char)p_map && (_BYTE)v35 )
    {
      LOBYTE(enet_channel_id) = __asan_report_store1(target, p_map, v35);
      break;
    }
LABEL_63:
    *target = v34;
    enet_channel_id >>= 7;
    ++target;
  }
  p_enet_is_reliable = target;
  v37 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v37 <= ((unsigned __int8)target & 7) && (_BYTE)v37 )
  {
    __asan_report_store1(target, p_map, v37);
LABEL_78:
    __asan_report_load4(p_enet_is_reliable);
    goto LABEL_79;
  }
  *target++ = enet_channel_id;
LABEL_71:
  p_enet_is_reliable = &this->enet_is_reliable_;
  v38 = *(_BYTE *)(((unsigned __int64)&this->enet_is_reliable_ >> 3) + 0x7FFF8000);
  if ( v38 && v38 <= 3 )
    goto LABEL_78;
  enet_is_reliable = this->enet_is_reliable_;
  if ( !enet_is_reliable )
    goto LABEL_88;
  p_enet_is_reliable = target;
  v40 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v40 <= ((unsigned __int8)target & 7) && (_BYTE)v40 )
  {
LABEL_79:
    enet_is_reliable = __asan_report_store1(p_enet_is_reliable, p_map, v40);
    goto LABEL_80;
  }
  *target++ = 40;
  while ( enet_is_reliable > 0x7F )
  {
    v41 = enet_is_reliable | 0x80;
    v42 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( (char)v42 <= (char)p_map && (_BYTE)v42 )
    {
      LOBYTE(enet_is_reliable) = __asan_report_store1(target, p_map, v42);
      break;
    }
LABEL_80:
    *target = v41;
    enet_is_reliable >>= 7;
    ++target;
  }
  p_sent_ms = target;
  v44 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v44 <= ((unsigned __int8)target & 7) && (_BYTE)v44 )
  {
    __asan_report_store1(target, p_map, v44);
    goto LABEL_94;
  }
  *target++ = enet_is_reliable;
LABEL_88:
  p_sent_ms = &this->sent_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->sent_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_load8(p_sent_ms);
    goto LABEL_95;
  }
  sent_ms = this->sent_ms_;
  if ( !sent_ms )
    goto LABEL_104;
  p_sent_ms = target;
  v46 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v46 <= ((unsigned __int8)target & 7) && (_BYTE)v46 )
  {
LABEL_95:
    sent_ms = __asan_report_store1(p_sent_ms, p_map, v46);
    goto LABEL_96;
  }
  *target++ = 48;
  while ( sent_ms > 0x7F )
  {
    v47 = sent_ms | 0x80;
    v48 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( (char)v48 <= (char)p_map && (_BYTE)v48 )
    {
      LOBYTE(sent_ms) = __asan_report_store1(target, p_map, v48);
      break;
    }
LABEL_96:
    *target = v47;
    sent_ms >>= 7;
    ++target;
  }
  p_user_id = target;
  v50 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v50 <= ((unsigned __int8)target & 7) && (_BYTE)v50 )
  {
    __asan_report_store1(target, p_map, v50);
LABEL_111:
    __asan_report_load4(p_user_id);
    goto LABEL_112;
  }
  *target++ = sent_ms;
LABEL_104:
  p_user_id = &this->user_id_;
  v51 = *(_BYTE *)(((unsigned __int64)&this->user_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 60) & 7) + 3) >= v51 && v51 )
    goto LABEL_111;
  user_id = this->user_id_;
  if ( !user_id )
    goto LABEL_121;
  p_user_id = target;
  v53 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v53 <= ((unsigned __int8)target & 7) && (_BYTE)v53 )
  {
LABEL_112:
    user_id = __asan_report_store1(p_user_id, p_map, v53);
    goto LABEL_113;
  }
  *target++ = 88;
  while ( user_id > 0x7F )
  {
    v54 = user_id | 0x80;
    v55 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( (char)v55 <= (char)p_map && (_BYTE)v55 )
    {
      LOBYTE(user_id) = __asan_report_store1(target, p_map, v55);
      break;
    }
LABEL_113:
    *target = v54;
    user_id >>= 7;
    ++target;
  }
  p_user_ip = target;
  v57 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v57 <= ((unsigned __int8)target & 7) && (_BYTE)v57 )
  {
    __asan_report_store1(target, p_map, v57);
LABEL_128:
    __asan_report_load4(p_user_ip);
    goto LABEL_129;
  }
  *target++ = user_id;
LABEL_121:
  p_user_ip = &this->user_ip_;
  v58 = *(_BYTE *)(((unsigned __int64)&this->user_ip_ >> 3) + 0x7FFF8000);
  if ( v58 && v58 <= 3 )
    goto LABEL_128;
  user_ip = this->user_ip_;
  if ( !user_ip )
    goto LABEL_138;
  p_user_ip = target;
  v60 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v60 <= ((unsigned __int8)target & 7) && (_BYTE)v60 )
  {
LABEL_129:
    user_ip = __asan_report_store1(p_user_ip, p_map, v60);
    goto LABEL_130;
  }
  *target++ = 96;
  while ( user_ip > 0x7F )
  {
    v61 = user_ip | 0x80;
    v62 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( (char)v62 <= (char)p_map && (_BYTE)v62 )
    {
      LOBYTE(user_ip) = __asan_report_store1(target, p_map, v62);
      break;
    }
LABEL_130:
    *target = v61;
    user_ip >>= 7;
    ++target;
  }
  p_user_session_id = target;
  v64 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v64 <= ((unsigned __int8)target & 7) && (_BYTE)v64 )
  {
    __asan_report_store1(target, p_map, v64);
LABEL_145:
    __asan_report_load4(p_user_session_id);
    goto LABEL_146;
  }
  *target++ = user_ip;
LABEL_138:
  p_user_session_id = &this->user_session_id_;
  v65 = *(_BYTE *)(((unsigned __int64)&this->user_session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 52) & 7) + 3) >= v65 && v65 )
    goto LABEL_145;
  user_session_id = this->user_session_id_;
  if ( !user_session_id )
    goto LABEL_155;
  p_user_session_id = target;
  v67 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v67 <= ((unsigned __int8)target & 7) && (_BYTE)v67 )
  {
LABEL_146:
    user_session_id = __asan_report_store1(p_user_session_id, p_map, v67);
    goto LABEL_147;
  }
  *target++ = 104;
  while ( user_session_id > 0x7F )
  {
    v68 = user_session_id | 0x80;
    v69 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( (char)v69 <= (char)p_map && (_BYTE)v69 )
    {
      LOBYTE(user_session_id) = __asan_report_store1(target, p_map, v69);
      break;
    }
LABEL_147:
    *target = v68;
    user_session_id >>= 7;
    ++target;
  }
  p_home_user_id = target;
  v71 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v71 <= ((unsigned __int8)target & 7) && (_BYTE)v71 )
  {
    __asan_report_store1(target, p_map, v71);
LABEL_162:
    __asan_report_load4(p_home_user_id);
    goto LABEL_163;
  }
  *target++ = user_session_id;
LABEL_155:
  p_home_user_id = &this->home_user_id_;
  v72 = *(_BYTE *)(((unsigned __int64)&this->home_user_id_ >> 3) + 0x7FFF8000);
  if ( v72 && v72 <= 3 )
    goto LABEL_162;
  home_user_id = this->home_user_id_;
  if ( !home_user_id )
    goto LABEL_172;
  p_home_user_id = target;
  v74 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v74 <= ((unsigned __int8)target & 7) && (_BYTE)v74 )
  {
LABEL_163:
    home_user_id = __asan_report_store1(p_home_user_id, p_map, v74);
    goto LABEL_164;
  }
  *target++ = 112;
  while ( home_user_id > 0x7F )
  {
    v75 = home_user_id | 0x80;
    v76 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( (char)v76 <= (char)p_map && (_BYTE)v76 )
    {
      LOBYTE(home_user_id) = __asan_report_store1(target, p_map, v76);
      break;
    }
LABEL_164:
    *target = v75;
    home_user_id >>= 7;
    ++target;
  }
  p_recv_time_ms = target;
  v78 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
  if ( (char)v78 <= ((unsigned __int8)target & 7) && (_BYTE)v78 )
  {
    __asan_report_store1(target, p_map, v78);
    goto LABEL_176;
  }
  *target++ = home_user_id;
LABEL_172:
  p_recv_time_ms = &this->recv_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_time_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_176:
    recv_time_ms = __asan_report_load8(p_recv_time_ms);
    goto LABEL_177;
  }
  recv_time_ms = this->recv_time_ms_;
  if ( recv_time_ms )
  {
    v80 = 168LL;
    while ( (unsigned int)v80 > 0x7F )
    {
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)v80 | 0xFFFFFF80);
      v81 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( v81 <= ((unsigned __int8)target & 7) && v81 )
      {
        recv_time_ms = __asan_report_store1(target, p_map, v80);
        break;
      }
LABEL_177:
      *target = (unsigned __int8)p_map;
      v80 = (unsigned int)v80 >> 7;
      ++target;
    }
    v82 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( v82 <= (char)p_map && v82 )
    {
      recv_time_ms = __asan_report_store1(target, p_map, v80);
      goto LABEL_186;
    }
    *target++ = v80;
    while ( recv_time_ms > 0x7F )
    {
      v83 = recv_time_ms | 0x80;
      v84 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v84 <= (char)p_map && (_BYTE)v84 )
      {
        LOBYTE(recv_time_ms) = __asan_report_store1(target, p_map, v84);
        break;
      }
LABEL_186:
      *target = v83;
      recv_time_ms >>= 7;
      ++target;
    }
    p_rpc_begin_time_ms = target;
    v86 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v86 <= ((unsigned __int8)target & 7) && (_BYTE)v86 )
    {
      __asan_report_store1(target, p_map, v86);
LABEL_199:
      rpc_begin_time_ms = __asan_report_load4(p_rpc_begin_time_ms);
      goto LABEL_200;
    }
    *target++ = recv_time_ms;
  }
  p_rpc_begin_time_ms = &this->rpc_begin_time_ms_;
  v87 = *(_BYTE *)(((unsigned __int64)&this->rpc_begin_time_ms_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v87 && v87 )
    goto LABEL_199;
  rpc_begin_time_ms = this->rpc_begin_time_ms_;
  if ( rpc_begin_time_ms )
  {
    v89 = 176LL;
    while ( (unsigned int)v89 > 0x7F )
    {
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)v89 | 0xFFFFFF80);
      v90 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( v90 <= ((unsigned __int8)target & 7) && v90 )
      {
        rpc_begin_time_ms = __asan_report_store1(target, p_map, v89);
        break;
      }
LABEL_200:
      *target = (unsigned __int8)p_map;
      v89 = (unsigned int)v89 >> 7;
      ++target;
    }
    v91 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( v91 <= (char)p_map && v91 )
    {
      rpc_begin_time_ms = __asan_report_store1(target, p_map, v89);
      goto LABEL_209;
    }
    *target++ = v89;
    while ( rpc_begin_time_ms > 0x7F )
    {
      v92 = rpc_begin_time_ms | 0x80;
      v93 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v93 <= (char)p_map && (_BYTE)v93 )
      {
        LOBYTE(rpc_begin_time_ms) = __asan_report_store1(target, p_map, v93);
        break;
      }
LABEL_209:
      *target = v92;
      rpc_begin_time_ms >>= 7;
      ++target;
    }
    p_elements = (unsigned __int64)target;
    v95 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v95 <= ((unsigned __int8)target & 7) && (_BYTE)v95 )
    {
      __asan_report_store1(target, p_map, v95);
      goto LABEL_226;
    }
    *target++ = rpc_begin_time_ms;
  }
  p_ext_map = &this->ext_map_;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->ext_map_);
  p_elements = (unsigned __int64)&this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
LABEL_226:
    __asan_report_load8(p_elements);
    goto LABEL_227;
  }
  p_elements = (unsigned __int64)this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)((p_elements >> 3) + 0x7FFF8000) )
  {
LABEL_227:
    __asan_report_load8(p_elements);
LABEL_228:
    __asan_report_load8(p_elements);
    goto LABEL_229;
  }
  if ( !*(_QWORD *)p_elements )
    goto LABEL_465;
  if ( !deterministic )
    goto LABEL_224;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->ext_map_);
  p_elements = (unsigned __int64)&this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
    goto LABEL_228;
  p_elements = (unsigned __int64)this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)((p_elements >> 3) + 0x7FFF8000) )
  {
LABEL_229:
    __asan_report_load8(p_elements);
    goto LABEL_230;
  }
  if ( *(_QWORD *)p_elements <= 1uLL )
  {
LABEL_224:
    *(_QWORD *)(v380 + 64) = 0LL;
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->ext_map_);
    goto LABEL_360;
  }
LABEL_230:
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(p_ext_map);
  elements = (unsigned __int64)&this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(elements);
    goto LABEL_237;
  }
  elements = (unsigned __int64)this->ext_map_.impl_.map_.elements_;
  if ( *(_BYTE *)((elements >> 3) + 0x7FFF8000) )
  {
LABEL_237:
    __asan_report_load8(elements);
LABEL_238:
    __asan_handle_no_return(elements);
    __cxa_throw_bad_array_new_length();
  }
  v97 = *(_QWORD *)elements;
  if ( *(_QWORD *)elements > 0x7FFFFFFFFFFFFFFuLL )
    goto LABEL_238;
  v98 = operator new[](16 * v97);
  for ( i = v97 - 1; i >= 0; --i )
    ;
  *(_QWORD *)(v380 + 32) = v98;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(p_ext_map);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v380 + 96),
    &this->ext_map_.impl_.map_);
  for ( n = 0LL; ; ++n )
  {
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(p_ext_map);
    v100 = *(const google::protobuf::MapPair<unsigned int,unsigned int> **)(v380 + 96);
    if ( !v100 )
      break;
    v101 = v100 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v100[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v101);
LABEL_247:
      __asan_report_load4(v101);
      goto LABEL_248;
    }
    v102 = (unsigned __int64)v100[1];
    v101 = (const google::protobuf::MapPair<unsigned int,unsigned int> *)v102;
    v103 = *(_BYTE *)((v102 >> 3) + 0x7FFF8000);
    if ( (char)((v102 & 7) + 3) >= v103 && v103 )
      goto LABEL_247;
    v104 = *(unsigned int *)v102;
    v105 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
             (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v380 + 32),
             n);
    if ( !*(_WORD *)(((unsigned __int64)v105 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)&v105->first = v104;
      v105->second = (const google::protobuf::MapPair<unsigned int,unsigned int> *)v102;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v380 + 96));
      continue;
    }
LABEL_248:
    __asan_report_store16();
  }
  p_service_app_id_map = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)(v380 + 32);
  v106 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
           (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v380 + 32),
           n);
  v107 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
           (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v380 + 32),
           0LL);
  p_map = (google::protobuf::Map<unsigned int,unsigned int> *)v106;
  std::__sort<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*> *,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::CompareByFirstField<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>>>(
    v107,
    v106,
    (__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::CompareByFirstField<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > >)(v380 - 96));
  *(_QWORD *)(v380 + 64) = 0LL;
  for ( p_ext_map = 0LL;
        n > (unsigned __int64)p_ext_map;
        p_ext_map = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)((char *)p_ext_map + 1) )
  {
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)p_ext_map;
    v147 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
             (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v380 + 32),
             (std::ptrdiff_t)p_ext_map);
    if ( *(_BYTE *)(((unsigned __int64)&v147->second >> 3) + 0x7FFF8000) )
    {
      p_impl = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)__asan_report_load8(&v147->second);
LABEL_253:
      v109 = (proto::PacketHead::PacketHead_ExtMapEntry *)__asan_report_load8(p_impl);
      goto LABEL_254;
    }
    second = (const unsigned int *)v147->second;
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)(second + 1);
    p_impl = &this->ext_map_.impl_;
    if ( *(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_ >> 3) + 0x7FFF8000) )
      goto LABEL_253;
    v109 = google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Wrap(
             second,
             (const unsigned int *)p_map,
             this->ext_map_.impl_.arena_);
LABEL_254:
    v110 = v109;
    v111 = *(_QWORD *)(v380 + 64);
    if ( v109 != (proto::PacketHead::PacketHead_ExtMapEntry *)v111 )
    {
      if ( v111 )
      {
        if ( *(_BYTE *)((v111 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v111);
LABEL_263:
          v111 = v112;
          __asan_report_load8(v112);
LABEL_264:
          __asan_handle_no_return(v111);
          __assert_fail(
            "ptr_ != __null",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/scoped_ptr.h",
            0x5Bu,
            "C& google::protobuf::internal::scoped_ptr<C>::operator*() const [with C = proto::PacketHead::PacketHead_ExtMapEntry]");
        }
        v112 = *(_QWORD *)v111 + 8LL;
        if ( *(_BYTE *)((v112 >> 3) + 0x7FFF8000) )
          goto LABEL_263;
        (*(void (**)(void))(*(_QWORD *)v111 + 8LL))();
      }
      *(_QWORD *)(v380 + 64) = v110;
    }
    p_service_app_id_map = *(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> **)(v380 + 64);
    if ( !p_service_app_id_map )
      goto LABEL_264;
    for ( j = 186; j > 0x7F; j >>= 7 )
    {
      v114 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v114 <= (char)p_map && (_BYTE)v114 )
      {
        LOBYTE(j) = __asan_report_store1(target, p_map, v114);
        break;
      }
      *target++ = j | 0x80;
    }
    p_state = (unsigned __int64)target;
    v116 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v116 <= ((unsigned __int8)target & 7) && (_BYTE)v116 )
    {
      __asan_report_store1(target, p_map, v116);
LABEL_279:
      __asan_report_load4(p_state);
LABEL_280:
      __asan_report_load8(p_state);
      goto LABEL_281;
    }
    *target++ = j;
    p_state = (unsigned __int64)&p_service_app_id_map->state_;
    v117 = *(_BYTE *)(((unsigned __int64)&p_service_app_id_map->state_ >> 3) + 0x7FFF8000);
    if ( v117 && v117 <= 3 )
      goto LABEL_279;
    if ( (p_service_app_id_map->state_ & 1) == 0 )
      goto LABEL_290;
    p_state = (unsigned __int64)p_service_app_id_map;
    if ( *(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
      goto LABEL_280;
    p_state = (unsigned __int64)(p_service_app_id_map->_vptr_MapFieldBase + 25);
    if ( !*(_BYTE *)((p_state >> 3) + 0x7FFF8000) )
    {
      v118 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
              + 25))(p_service_app_id_map);
      goto LABEL_282;
    }
LABEL_281:
    v118 = __asan_report_load8(p_state);
LABEL_282:
    v119 = *(_BYTE *)((v118 >> 3) + 0x7FFF8000);
    if ( (char)((v118 & 7) + 3) < v119 || !v119 )
    {
      _BitScanReverse((unsigned int *)&v118, *(_DWORD *)v118 | 1);
      v120 = ((unsigned int)(9 * v118 + 73) >> 6) + 1;
      goto LABEL_285;
    }
    __asan_report_load4(v118);
LABEL_290:
    v120 = 0;
LABEL_285:
    if ( (p_service_app_id_map->state_ & 2) == 0 )
      goto LABEL_298;
    v121 = (unsigned __int64)p_service_app_id_map;
    if ( *(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_service_app_id_map);
LABEL_292:
      v122 = __asan_report_load8(v121);
      goto LABEL_293;
    }
    v121 = (unsigned __int64)(p_service_app_id_map->_vptr_MapFieldBase + 26);
    if ( *(_BYTE *)((v121 >> 3) + 0x7FFF8000) )
      goto LABEL_292;
    v122 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
            + 26))(p_service_app_id_map);
LABEL_293:
    v123 = *(_BYTE *)((v122 >> 3) + 0x7FFF8000);
    if ( (char)((v122 & 7) + 3) >= v123 && v123 )
    {
      __asan_report_load4(v122);
LABEL_298:
      v124 = 0;
      goto LABEL_296;
    }
    _BitScanReverse((unsigned int *)&v122, *(_DWORD *)v122 | 1);
    v124 = ((unsigned int)(9 * v122 + 73) >> 6) + 1;
LABEL_296:
    for ( k = v124 + v120; k > 0x7F; k >>= 7 )
    {
      v126 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( v126 <= ((unsigned __int8)target & 7) && v126 )
      {
        __asan_report_store1(target, p_map, k | 0xFFFFFF80);
        break;
      }
      *target++ = k | 0x80;
    }
    v127 = target;
    v128 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    v129 = (unsigned __int8)target & 7;
    if ( v128 <= (char)v129 && v128 )
    {
      __asan_report_store1(target, p_map, v129);
LABEL_310:
      __asan_report_load8(v127);
      goto LABEL_311;
    }
    *target++ = k;
    v127 = (google::protobuf::uint8 *)p_service_app_id_map;
    if ( *(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
      goto LABEL_310;
    v127 = (google::protobuf::uint8 *)(p_service_app_id_map->_vptr_MapFieldBase + 25);
    if ( !*(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000) )
    {
      v130 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
              + 25))(p_service_app_id_map);
      goto LABEL_312;
    }
LABEL_311:
    v130 = __asan_report_load8(v127);
LABEL_312:
    v131 = (google::protobuf::uint8 *)v130;
    v132 = *(_BYTE *)((v130 >> 3) + 0x7FFF8000);
    if ( (char)((v130 & 7) + 3) >= v132 && v132 )
    {
      __asan_report_load4(v130);
    }
    else
    {
      v133 = *(_DWORD *)v130;
      v131 = target;
      v134 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( (char)v134 > ((unsigned __int8)target & 7) || !(_BYTE)v134 )
      {
        *target++ = 8;
        goto LABEL_320;
      }
    }
    v133 = __asan_report_store1(v131, p_map, v134);
    while ( 1 )
    {
      *target = v135;
      v133 >>= 7;
      ++target;
LABEL_320:
      if ( v133 <= 0x7F )
        break;
      v135 = v133 | 0x80;
      v136 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v136 <= (char)p_map && (_BYTE)v136 )
      {
        LOBYTE(v133) = __asan_report_store1(target, p_map, v136);
        break;
      }
    }
    v137 = target;
    v138 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v138 <= ((unsigned __int8)target & 7) && (_BYTE)v138 )
    {
      __asan_report_store1(target, p_map, v138);
LABEL_330:
      __asan_report_load8(v137);
      goto LABEL_331;
    }
    *target = v133;
    v137 = (google::protobuf::uint8 *)p_service_app_id_map;
    if ( *(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
      goto LABEL_330;
    v137 = (google::protobuf::uint8 *)(p_service_app_id_map->_vptr_MapFieldBase + 26);
    if ( !*(_BYTE *)(((unsigned __int64)v137 >> 3) + 0x7FFF8000) )
    {
      v139 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
              + 26))(p_service_app_id_map);
      goto LABEL_332;
    }
LABEL_331:
    v139 = __asan_report_load8(v137);
LABEL_332:
    v140 = (google::protobuf::uint8 *)v139;
    v141 = *(_BYTE *)((v139 >> 3) + 0x7FFF8000);
    if ( (char)((v139 & 7) + 3) >= v141 && v141 )
    {
      __asan_report_load4(v139);
    }
    else
    {
      v142 = *(_DWORD *)v139;
      v140 = target + 1;
      v143 = *(unsigned __int8 *)(((unsigned __int64)(target + 1) >> 3) + 0x7FFF8000);
      if ( (char)v143 > (((unsigned __int8)target + 1) & 7) || !(_BYTE)v143 )
      {
        target[1] = 16;
        target += 2;
        goto LABEL_340;
      }
    }
    v142 = __asan_report_store1(v140, p_map, v143);
    while ( 1 )
    {
      *target = v144;
      v142 >>= 7;
      ++target;
LABEL_340:
      if ( v142 <= 0x7F )
        break;
      v144 = v142 | 0x80;
      v145 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v145 <= (char)p_map && (_BYTE)v145 )
      {
        LOBYTE(v142) = __asan_report_store1(target, p_map, v145);
        break;
      }
    }
    v146 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v146 <= ((unsigned __int8)target & 7) && (_BYTE)v146 )
    {
      __asan_report_store1(target, p_map, v146);
      break;
    }
    *target++ = v142;
  }
  v149 = *((_QWORD *)v376 - 12);
  if ( !v149 )
    goto LABEL_356;
  if ( *(_BYTE *)((v149 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v149);
  }
  else
  {
    v150 = *(_QWORD *)v149 + 8LL;
    if ( !*(_BYTE *)((v150 >> 3) + 0x7FFF8000) )
    {
      (*(void (**)(void))(*(_QWORD *)v149 + 8LL))();
LABEL_356:
      v151 = (void *)*((_QWORD *)v376 - 16);
      if ( v151 )
        operator delete[](v151);
      goto LABEL_465;
    }
  }
  __asan_report_load8(v150);
LABEL_360:
  p_map = &this->ext_map_.impl_.map_;
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v376 - 64),
    &this->ext_map_.impl_.map_);
  while ( 2 )
  {
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(p_ext_map);
    v152 = *(_QWORD *)(v380 + 96);
    if ( v152 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(v152 + 8) >> 3) + 0x7FFF8000) )
      {
        v154 = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)__asan_report_load8(v152 + 8);
      }
      else
      {
        v153 = *(const unsigned int **)(v152 + 8);
        p_map = (google::protobuf::Map<unsigned int,unsigned int> *)(v153 + 1);
        v154 = &this->ext_map_.impl_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_ >> 3) + 0x7FFF8000) )
        {
          v155 = google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Wrap(
                   v153,
                   (const unsigned int *)p_map,
                   this->ext_map_.impl_.arena_);
          goto LABEL_367;
        }
      }
      v155 = (proto::PacketHead::PacketHead_ExtMapEntry *)__asan_report_load8(v154);
LABEL_367:
      v156 = v155;
      v157 = *(_QWORD *)(v380 + 64);
      if ( v155 != (proto::PacketHead::PacketHead_ExtMapEntry *)v157 )
      {
        if ( v157 )
        {
          if ( *(_BYTE *)((v157 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v157);
LABEL_376:
            v157 = v158;
            __asan_report_load8(v158);
LABEL_377:
            __asan_handle_no_return(v157);
            __assert_fail(
              "ptr_ != __null",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/scoped_ptr.h",
              0x5Bu,
              "C& google::protobuf::internal::scoped_ptr<C>::operator*() const [with C = proto::PacketHead::PacketHead_ExtMapEntry]");
          }
          v158 = *(_QWORD *)v157 + 8LL;
          if ( *(_BYTE *)((v158 >> 3) + 0x7FFF8000) )
            goto LABEL_376;
          (*(void (**)(void))(*(_QWORD *)v157 + 8LL))();
        }
        *(_QWORD *)(v380 + 64) = v156;
      }
      p_service_app_id_map = *(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> **)(v380 + 64);
      if ( !p_service_app_id_map )
        goto LABEL_377;
      for ( m = 186; m > 0x7F; m >>= 7 )
      {
        v160 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
        p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
        if ( (char)v160 <= (char)p_map && (_BYTE)v160 )
        {
          LOBYTE(m) = __asan_report_store1(target, p_map, v160);
          break;
        }
        *target++ = m | 0x80;
      }
      v161 = (unsigned __int64)target;
      v162 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( (char)v162 <= ((unsigned __int8)target & 7) && (_BYTE)v162 )
      {
        __asan_report_store1(target, p_map, v162);
      }
      else
      {
        *target++ = m;
        v161 = (unsigned __int64)&p_service_app_id_map->state_;
        v163 = *(_BYTE *)(((unsigned __int64)&p_service_app_id_map->state_ >> 3) + 0x7FFF8000);
        if ( !v163 || v163 > 3 )
        {
          if ( (p_service_app_id_map->state_ & 1) == 0 )
            goto LABEL_403;
          v161 = (unsigned __int64)p_service_app_id_map;
          if ( !*(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
          {
            v161 = (unsigned __int64)(p_service_app_id_map->_vptr_MapFieldBase + 25);
            if ( !*(_BYTE *)((v161 >> 3) + 0x7FFF8000) )
            {
              v164 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
                      + 25))(p_service_app_id_map);
LABEL_395:
              v165 = *(_BYTE *)((v164 >> 3) + 0x7FFF8000);
              if ( (char)((v164 & 7) + 3) < v165 || !v165 )
              {
                _BitScanReverse((unsigned int *)&v164, *(_DWORD *)v164 | 1);
                v166 = ((unsigned int)(9 * v164 + 73) >> 6) + 1;
                goto LABEL_398;
              }
              __asan_report_load4(v164);
LABEL_403:
              v166 = 0;
LABEL_398:
              if ( (p_service_app_id_map->state_ & 2) == 0 )
                goto LABEL_411;
              v167 = (unsigned __int64)p_service_app_id_map;
              if ( *(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(p_service_app_id_map);
              }
              else
              {
                v167 = (unsigned __int64)(p_service_app_id_map->_vptr_MapFieldBase + 26);
                if ( !*(_BYTE *)((v167 >> 3) + 0x7FFF8000) )
                {
                  v168 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
                          + 26))(p_service_app_id_map);
LABEL_406:
                  v169 = *(_BYTE *)((v168 >> 3) + 0x7FFF8000);
                  if ( (char)((v168 & 7) + 3) < v169 || !v169 )
                  {
                    _BitScanReverse((unsigned int *)&v168, *(_DWORD *)v168 | 1);
                    v170 = ((unsigned int)(9 * v168 + 73) >> 6) + 1;
LABEL_409:
                    for ( ii = v170 + v166; ii > 0x7F; ii >>= 7 )
                    {
                      v172 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                      if ( v172 <= ((unsigned __int8)target & 7) && v172 )
                      {
                        __asan_report_store1(target, p_map, ii | 0xFFFFFF80);
                        break;
                      }
                      *target++ = ii | 0x80;
                    }
                    v173 = target;
                    v174 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                    v175 = (unsigned __int8)target & 7;
                    if ( v174 <= (char)v175 && v174 )
                    {
                      __asan_report_store1(target, p_map, v175);
                    }
                    else
                    {
                      *target++ = ii;
                      v173 = (google::protobuf::uint8 *)p_service_app_id_map;
                      if ( !*(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
                      {
                        v173 = (google::protobuf::uint8 *)(p_service_app_id_map->_vptr_MapFieldBase + 25);
                        if ( !*(_BYTE *)(((unsigned __int64)v173 >> 3) + 0x7FFF8000) )
                        {
                          v176 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
                                  + 25))(p_service_app_id_map);
                          goto LABEL_425;
                        }
LABEL_424:
                        v176 = __asan_report_load8(v173);
LABEL_425:
                        v177 = (google::protobuf::uint8 *)v176;
                        v178 = *(_BYTE *)((v176 >> 3) + 0x7FFF8000);
                        if ( (char)((v176 & 7) + 3) >= v178 && v178 )
                        {
                          __asan_report_load4(v176);
                        }
                        else
                        {
                          v179 = *(_DWORD *)v176;
                          v177 = target;
                          v180 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                          if ( (char)v180 > ((unsigned __int8)target & 7) || !(_BYTE)v180 )
                          {
                            *target++ = 8;
                            goto LABEL_433;
                          }
                        }
                        v179 = __asan_report_store1(v177, p_map, v180);
                        while ( 1 )
                        {
                          *target = v181;
                          v179 >>= 7;
                          ++target;
LABEL_433:
                          if ( v179 <= 0x7F )
                            break;
                          v181 = v179 | 0x80;
                          v182 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                          p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
                          if ( (char)v182 <= (char)p_map && (_BYTE)v182 )
                          {
                            LOBYTE(v179) = __asan_report_store1(target, p_map, v182);
                            break;
                          }
                        }
                        v183 = target;
                        v184 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                        if ( (char)v184 <= ((unsigned __int8)target & 7) && (_BYTE)v184 )
                        {
                          __asan_report_store1(target, p_map, v184);
                        }
                        else
                        {
                          *target = v179;
                          v183 = (google::protobuf::uint8 *)p_service_app_id_map;
                          if ( !*(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
                          {
                            v183 = (google::protobuf::uint8 *)(p_service_app_id_map->_vptr_MapFieldBase + 26);
                            if ( !*(_BYTE *)(((unsigned __int64)v183 >> 3) + 0x7FFF8000) )
                            {
                              v185 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
                                      + 26))(p_service_app_id_map);
LABEL_445:
                              v186 = (google::protobuf::uint8 *)v185;
                              v187 = *(_BYTE *)((v185 >> 3) + 0x7FFF8000);
                              if ( (char)((v185 & 7) + 3) >= v187 && v187 )
                              {
                                __asan_report_load4(v185);
                              }
                              else
                              {
                                v188 = *(_DWORD *)v185;
                                v186 = target + 1;
                                v189 = *(unsigned __int8 *)(((unsigned __int64)(target + 1) >> 3) + 0x7FFF8000);
                                if ( (char)v189 > (((unsigned __int8)target + 1) & 7) || !(_BYTE)v189 )
                                {
                                  target[1] = 16;
                                  target += 2;
                                  goto LABEL_453;
                                }
                              }
                              v188 = __asan_report_store1(v186, p_map, v189);
                              while ( 1 )
                              {
                                *target = v190;
                                v188 >>= 7;
                                ++target;
LABEL_453:
                                if ( v188 <= 0x7F )
                                  break;
                                v190 = v188 | 0x80;
                                v191 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                                p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
                                if ( (char)v191 <= (char)p_map && (_BYTE)v191 )
                                {
                                  LOBYTE(v188) = __asan_report_store1(target, p_map, v191);
                                  break;
                                }
                              }
                              v192 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                              if ( (char)v192 <= ((unsigned __int8)target & 7) && (_BYTE)v192 )
                              {
                                __asan_report_store1(target, p_map, v192);
                                break;
                              }
                              *target++ = v188;
                              google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v380 + 96));
                              continue;
                            }
LABEL_444:
                            v185 = __asan_report_load8(v183);
                            goto LABEL_445;
                          }
                        }
                        __asan_report_load8(v183);
                        goto LABEL_444;
                      }
                    }
                    __asan_report_load8(v173);
                    goto LABEL_424;
                  }
                  __asan_report_load4(v168);
LABEL_411:
                  v170 = 0;
                  goto LABEL_409;
                }
              }
              v168 = __asan_report_load8(v167);
              goto LABEL_406;
            }
LABEL_394:
            v164 = __asan_report_load8(v161);
            goto LABEL_395;
          }
LABEL_393:
          __asan_report_load8(v161);
          goto LABEL_394;
        }
      }
      __asan_report_load4(v161);
      goto LABEL_393;
    }
    break;
  }
  v193 = *((_QWORD *)v376 - 12);
  if ( v193 )
  {
    if ( *(_BYTE *)((v193 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v193);
    }
    else
    {
      v194 = *(_QWORD *)v193 + 8LL;
      if ( !*(_BYTE *)((v194 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v193 + 8LL))();
        goto LABEL_465;
      }
    }
    p_sender_app_id = (google::protobuf::uint32 *)v194;
    __asan_report_load8(v194);
LABEL_471:
    sender_app_id = __asan_report_load4(p_sender_app_id);
    goto LABEL_472;
  }
LABEL_465:
  p_sender_app_id = &this->sender_app_id_;
  v196 = *(_BYTE *)(((unsigned __int64)&this->sender_app_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 28) & 7) + 3) >= v196 && v196 )
    goto LABEL_471;
  sender_app_id = this->sender_app_id_;
  if ( sender_app_id )
  {
    v198 = 192LL;
    while ( (unsigned int)v198 > 0x7F )
    {
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)v198 | 0xFFFFFF80);
      v199 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( v199 <= ((unsigned __int8)target & 7) && v199 )
      {
        sender_app_id = __asan_report_store1(target, p_map, v198);
        break;
      }
LABEL_472:
      *target = (unsigned __int8)p_map;
      v198 = (unsigned int)v198 >> 7;
      ++target;
    }
    v200 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( v200 <= (char)p_map && v200 )
    {
      sender_app_id = __asan_report_store1(target, p_map, v198);
      goto LABEL_481;
    }
    *target++ = v198;
    while ( sender_app_id > 0x7F )
    {
      v201 = sender_app_id | 0x80;
      v202 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v202 <= (char)p_map && (_BYTE)v202 )
      {
        LOBYTE(sender_app_id) = __asan_report_store1(target, p_map, v202);
        break;
      }
LABEL_481:
      *target = v201;
      sender_app_id >>= 7;
      ++target;
    }
    p_sender_load = target;
    v204 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v204 > ((unsigned __int8)target & 7) || !(_BYTE)v204 )
    {
      *target++ = sender_app_id;
      goto LABEL_489;
    }
    __asan_report_store1(target, p_map, v204);
LABEL_494:
    sender_load = __asan_report_load4(p_sender_load);
    goto LABEL_495;
  }
LABEL_489:
  p_sender_load = &this->sender_load_;
  v205 = *(_BYTE *)(((unsigned __int64)&this->sender_load_ >> 3) + 0x7FFF8000);
  if ( v205 && v205 <= 3 )
    goto LABEL_494;
  sender_load = this->sender_load_;
  if ( sender_load )
  {
    v207 = 200LL;
    while ( (unsigned int)v207 > 0x7F )
    {
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)v207 | 0xFFFFFF80);
      v208 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( v208 <= ((unsigned __int8)target & 7) && v208 )
      {
        sender_load = __asan_report_store1(target, p_map, v207);
        break;
      }
LABEL_495:
      *target = (unsigned __int8)p_map;
      v207 = (unsigned int)v207 >> 7;
      ++target;
    }
    v209 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( v209 <= (char)p_map && v209 )
    {
      sender_load = __asan_report_store1(target, p_map, v207);
      goto LABEL_504;
    }
    *target++ = v207;
    while ( sender_load > 0x7F )
    {
      v210 = sender_load | 0x80;
      v211 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v211 <= (char)p_map && (_BYTE)v211 )
      {
        LOBYTE(sender_load) = __asan_report_store1(target, p_map, v211);
        break;
      }
LABEL_504:
      *target = v210;
      sender_load >>= 7;
      ++target;
    }
    p_span_context_str = target;
    v213 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v213 > ((unsigned __int8)target & 7) || !(_BYTE)v213 )
    {
      *target++ = sender_load;
      goto LABEL_512;
    }
    __asan_report_store1(target, p_map, v213);
LABEL_517:
    __asan_report_load8(p_span_context_str);
    goto LABEL_518;
  }
LABEL_512:
  p_span_context_str = &this->span_context_str_;
  if ( *(_BYTE *)(((unsigned __int64)&this->span_context_str_ >> 3) + 0x7FFF8000) )
    goto LABEL_517;
  ptr = this->span_context_str_.ptr_;
  p_span_context_str = &ptr->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&ptr->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_518:
    jj = __asan_report_load8(p_span_context_str);
    goto LABEL_519;
  }
  if ( ptr->_M_string_length )
  {
    for ( jj = 210; jj > 0x7F; jj >>= 7 )
    {
      v216 = jj | 0x80;
      v217 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v217 <= (char)p_map && (_BYTE)v217 )
      {
        LOBYTE(jj) = __asan_report_store1(target, p_map, v217);
        break;
      }
LABEL_519:
      *target++ = v216;
    }
    p_source_service = target;
    v219 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v219 > ((unsigned __int8)target & 7) || !(_BYTE)v219 )
    {
      *target = jj;
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)(target + 1);
      target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
      goto LABEL_527;
    }
    __asan_report_store1(target, p_map, v219);
LABEL_532:
    source_service = __asan_report_load4(p_source_service);
    goto LABEL_533;
  }
LABEL_527:
  p_source_service = &this->source_service_;
  v220 = *(_BYTE *)(((unsigned __int64)&this->source_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 20) & 7) + 3) >= v220 && v220 )
    goto LABEL_532;
  source_service = this->source_service_;
  if ( source_service )
  {
    v222 = 248LL;
    while ( (unsigned int)v222 > 0x7F )
    {
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)v222 | 0xFFFFFF80);
      v223 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( v223 <= ((unsigned __int8)target & 7) && v223 )
      {
        source_service = __asan_report_store1(target, p_map, v222);
        break;
      }
LABEL_533:
      *target = (unsigned __int8)p_map;
      v222 = (unsigned int)v222 >> 7;
      ++target;
    }
    v224 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( v224 <= (char)p_map && v224 )
    {
      source_service = __asan_report_store1(target, p_map, v222);
      goto LABEL_542;
    }
    *target++ = v222;
    while ( source_service > 0x7F )
    {
      v225 = source_service | 0x80;
      v226 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v226 <= (char)p_map && (_BYTE)v226 )
      {
        LOBYTE(source_service) = __asan_report_store1(target, p_map, v226);
        break;
      }
LABEL_542:
      *target = v225;
      source_service >>= 7;
      ++target;
    }
    p_target_service = target;
    v228 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v228 > ((unsigned __int8)target & 7) || !(_BYTE)v228 )
    {
      *target++ = source_service;
      goto LABEL_550;
    }
    __asan_report_store1(target, p_map, v228);
LABEL_555:
    target_service = __asan_report_load4(p_target_service);
    goto LABEL_556;
  }
LABEL_550:
  p_target_service = &this->target_service_;
  v229 = *(_BYTE *)(((unsigned __int64)&this->target_service_ >> 3) + 0x7FFF8000);
  if ( v229 && v229 <= 3 )
    goto LABEL_555;
  target_service = this->target_service_;
  if ( target_service )
  {
    v231 = 256LL;
    while ( (unsigned int)v231 > 0x7F )
    {
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)v231 | 0xFFFFFF80);
      v232 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( v232 <= ((unsigned __int8)target & 7) && v232 )
      {
        target_service = __asan_report_store1(target, p_map, v231);
        break;
      }
LABEL_556:
      *target = (unsigned __int8)p_map;
      v231 = (unsigned int)v231 >> 7;
      ++target;
    }
    v233 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( v233 <= (char)p_map && v233 )
    {
      target_service = __asan_report_store1(target, p_map, v231);
      goto LABEL_565;
    }
    *target++ = v231;
    while ( target_service > 0x7F )
    {
      v234 = target_service | 0x80;
      v235 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v235 <= (char)p_map && (_BYTE)v235 )
      {
        LOBYTE(target_service) = __asan_report_store1(target, p_map, v235);
        break;
      }
LABEL_565:
      *target = v234;
      target_service >>= 7;
      ++target;
    }
    v236 = (unsigned __int64)target;
    v237 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v237 > ((unsigned __int8)target & 7) || !(_BYTE)v237 )
    {
      *target++ = target_service;
      goto LABEL_573;
    }
    __asan_report_store1(target, p_map, v237);
LABEL_582:
    __asan_report_load8(v236);
    goto LABEL_583;
  }
LABEL_573:
  p_service_app_id_map = &this->service_app_id_map_;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->service_app_id_map_);
  v236 = (unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
    goto LABEL_582;
  v236 = (unsigned __int64)this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)((v236 >> 3) + 0x7FFF8000) )
  {
LABEL_583:
    __asan_report_load8(v236);
LABEL_584:
    __asan_report_load8(v236);
    goto LABEL_585;
  }
  if ( !*(_QWORD *)v236 )
    goto LABEL_821;
  if ( !deterministic )
  {
LABEL_580:
    *((_QWORD *)v376 - 12) = 0LL;
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->service_app_id_map_);
LABEL_716:
    p_map = &this->service_app_id_map_.impl_.map_;
    google::protobuf::Map<unsigned int,unsigned int>::begin(
      (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v376 - 64),
      &this->service_app_id_map_.impl_.map_);
    while ( 1 )
    {
      google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(p_service_app_id_map);
      v238 = 0LL;
      v293 = *(_QWORD *)(v380 + 96);
      if ( !v293 )
      {
LABEL_817:
        v335 = *((_QWORD *)v376 - 12);
        if ( !v335 )
          goto LABEL_821;
        if ( *(_BYTE *)((v335 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v335);
        }
        else
        {
          v336 = *(_QWORD *)v335 + 8LL;
          if ( !*(_BYTE *)((v336 >> 3) + 0x7FFF8000) )
          {
            (*(void (**)(void))(*(_QWORD *)v335 + 8LL))();
            goto LABEL_821;
          }
        }
        p_is_set_game_thread = (bool *)v336;
        __asan_report_load8(v336);
LABEL_826:
        i3 = __asan_report_load1(p_is_set_game_thread, p_map, v238);
        goto LABEL_827;
      }
      if ( *(_BYTE *)(((unsigned __int64)(v293 + 8) >> 3) + 0x7FFF8000) )
      {
        v295 = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)__asan_report_load8(v293 + 8);
      }
      else
      {
        v294 = *(const unsigned int **)(v293 + 8);
        p_map = (google::protobuf::Map<unsigned int,unsigned int> *)(v294 + 1);
        v295 = &this->service_app_id_map_.impl_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_ >> 3) + 0x7FFF8000) )
        {
          v296 = google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Wrap(
                   v294,
                   (const unsigned int *)p_map,
                   this->service_app_id_map_.impl_.arena_);
          goto LABEL_723;
        }
      }
      v296 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)__asan_report_load8(v295);
LABEL_723:
      v297 = v296;
      v298 = *(_QWORD *)(v380 + 64);
      if ( v296 != (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)v298 )
      {
        if ( v298 )
        {
          if ( *(_BYTE *)((v298 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v298);
LABEL_732:
            v298 = v299;
            __asan_report_load8(v299);
LABEL_733:
            __asan_handle_no_return(v298);
            __assert_fail(
              "ptr_ != __null",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/scoped_ptr.h",
              0x5Bu,
              "C& google::protobuf::internal::scoped_ptr<C>::operator*() const [with C = proto::PacketHead::PacketHead_Se"
              "rviceAppIdMapEntry]");
          }
          v299 = *(_QWORD *)v298 + 8LL;
          if ( *(_BYTE *)((v299 >> 3) + 0x7FFF8000) )
            goto LABEL_732;
          (*(void (**)(void))(*(_QWORD *)v298 + 8LL))();
        }
        *(_QWORD *)(v380 + 64) = v297;
      }
      v300 = *(_QWORD *)(v380 + 64);
      if ( !v300 )
        goto LABEL_733;
      for ( kk = 266; kk > 0x7F; kk >>= 7 )
      {
        v302 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
        p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
        if ( (char)v302 <= (char)p_map && (_BYTE)v302 )
        {
          LOBYTE(kk) = __asan_report_store1(target, p_map, v302);
          break;
        }
        *target++ = kk | 0x80;
      }
      v303 = (unsigned __int64)target;
      v304 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( (char)v304 <= ((unsigned __int8)target & 7) && (_BYTE)v304 )
      {
        __asan_report_store1(target, p_map, v304);
LABEL_748:
        __asan_report_load4(v303);
LABEL_749:
        __asan_report_load8(v303);
        goto LABEL_750;
      }
      *target++ = kk;
      v303 = v300 + 32;
      v305 = *(_BYTE *)(((v300 + 32) >> 3) + 0x7FFF8000);
      if ( v305 && v305 <= 3 )
        goto LABEL_748;
      if ( (*(_BYTE *)(v300 + 32) & 1) == 0 )
        goto LABEL_755;
      v303 = v300;
      if ( *(_BYTE *)((v300 >> 3) + 0x7FFF8000) )
        goto LABEL_749;
      v303 = *(_QWORD *)v300 + 200LL;
      if ( !*(_BYTE *)((v303 >> 3) + 0x7FFF8000) )
      {
        v306 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v300 + 200LL))(v300);
        goto LABEL_751;
      }
LABEL_750:
      v306 = __asan_report_load8(v303);
LABEL_751:
      v307 = *(_BYTE *)((v306 >> 3) + 0x7FFF8000);
      if ( (char)((v306 & 7) + 3) < v307 || !v307 )
      {
        _BitScanReverse((unsigned int *)&v306, *(_DWORD *)v306 | 1);
        v308 = ((unsigned int)(9 * v306 + 73) >> 6) + 1;
        goto LABEL_756;
      }
      __asan_report_load4(v306);
LABEL_755:
      v308 = 0;
LABEL_756:
      if ( (*(_BYTE *)(v300 + 32) & 2) == 0 )
        goto LABEL_766;
      v309 = v300;
      if ( *(_BYTE *)((v300 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v300);
LABEL_761:
        v310 = __asan_report_load8(v309);
        goto LABEL_762;
      }
      v309 = *(_QWORD *)v300 + 208LL;
      if ( *(_BYTE *)((v309 >> 3) + 0x7FFF8000) )
        goto LABEL_761;
      v310 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v300 + 208LL))(v300);
LABEL_762:
      v311 = *(_BYTE *)((v310 >> 3) + 0x7FFF8000);
      if ( (char)((v310 & 7) + 3) >= v311 && v311 )
      {
        __asan_report_load4(v310);
LABEL_766:
        v312 = 0;
        goto LABEL_767;
      }
      _BitScanReverse((unsigned int *)&v310, *(_DWORD *)v310 | 1);
      v312 = ((unsigned int)(9 * v310 + 73) >> 6) + 1;
LABEL_767:
      for ( mm = v312 + v308; mm > 0x7F; mm >>= 7 )
      {
        v314 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
        if ( v314 <= ((unsigned __int8)target & 7) && v314 )
        {
          __asan_report_store1(target, p_map, mm | 0xFFFFFF80);
          break;
        }
        *target++ = mm | 0x80;
      }
      v315 = (unsigned __int64)target;
      v316 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      v317 = (unsigned __int8)target & 7;
      if ( v316 <= (char)v317 && v316 )
      {
        __asan_report_store1(target, p_map, v317);
LABEL_779:
        __asan_report_load8(v315);
        goto LABEL_780;
      }
      *target++ = mm;
      v315 = v300;
      if ( *(_BYTE *)((v300 >> 3) + 0x7FFF8000) )
        goto LABEL_779;
      v315 = *(_QWORD *)v300 + 200LL;
      if ( !*(_BYTE *)((v315 >> 3) + 0x7FFF8000) )
      {
        v318 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v300 + 200LL))(v300);
        goto LABEL_781;
      }
LABEL_780:
      v318 = __asan_report_load8(v315);
LABEL_781:
      v319 = (google::protobuf::uint8 *)v318;
      v320 = *(_BYTE *)((v318 >> 3) + 0x7FFF8000);
      if ( (char)((v318 & 7) + 3) >= v320 && v320 )
      {
        __asan_report_load4(v318);
      }
      else
      {
        v321 = *(_DWORD *)v318;
        v319 = target;
        v322 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
        if ( (char)v322 > ((unsigned __int8)target & 7) || !(_BYTE)v322 )
        {
          *target++ = 8;
          goto LABEL_789;
        }
      }
      v321 = __asan_report_store1(v319, p_map, v322);
      while ( 1 )
      {
        *target = v323;
        v321 >>= 7;
        ++target;
LABEL_789:
        if ( v321 <= 0x7F )
          break;
        v323 = v321 | 0x80;
        v324 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
        p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
        if ( (char)v324 <= (char)p_map && (_BYTE)v324 )
        {
          LOBYTE(v321) = __asan_report_store1(target, p_map, v324);
          break;
        }
      }
      v325 = (unsigned __int64)target;
      v326 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( (char)v326 <= ((unsigned __int8)target & 7) && (_BYTE)v326 )
      {
        __asan_report_store1(target, p_map, v326);
LABEL_799:
        __asan_report_load8(v325);
        goto LABEL_800;
      }
      *target = v321;
      v325 = v300;
      if ( *(_BYTE *)((v300 >> 3) + 0x7FFF8000) )
        goto LABEL_799;
      v325 = *(_QWORD *)v300 + 208LL;
      if ( !*(_BYTE *)((v325 >> 3) + 0x7FFF8000) )
      {
        v327 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v300 + 208LL))(v300);
        goto LABEL_801;
      }
LABEL_800:
      v327 = __asan_report_load8(v325);
LABEL_801:
      v328 = (google::protobuf::uint8 *)v327;
      v329 = *(_BYTE *)((v327 >> 3) + 0x7FFF8000);
      if ( (char)((v327 & 7) + 3) >= v329 && v329 )
      {
        __asan_report_load4(v327);
      }
      else
      {
        v330 = *(_DWORD *)v327;
        v328 = target + 1;
        v331 = *(unsigned __int8 *)(((unsigned __int64)(target + 1) >> 3) + 0x7FFF8000);
        if ( (char)v331 > (((unsigned __int8)target + 1) & 7) || !(_BYTE)v331 )
        {
          target[1] = 16;
          target += 2;
          goto LABEL_809;
        }
      }
      v330 = __asan_report_store1(v328, p_map, v331);
      while ( 1 )
      {
        *target = v332;
        v330 >>= 7;
        ++target;
LABEL_809:
        if ( v330 <= 0x7F )
          break;
        v332 = v330 | 0x80;
        v333 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
        p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
        if ( (char)v333 <= (char)p_map && (_BYTE)v333 )
        {
          LOBYTE(v330) = __asan_report_store1(target, p_map, v333);
          break;
        }
      }
      v334 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( (char)v334 <= ((unsigned __int8)target & 7) && (_BYTE)v334 )
      {
        __asan_report_store1(target, p_map, v334);
        goto LABEL_817;
      }
      *target++ = v330;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v380 + 96));
    }
  }
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->service_app_id_map_);
  v236 = (unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
    goto LABEL_584;
  v236 = (unsigned __int64)this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)((v236 >> 3) + 0x7FFF8000) )
  {
LABEL_585:
    __asan_report_load8(v236);
    goto LABEL_586;
  }
  if ( *(_QWORD *)v236 <= 1uLL )
    goto LABEL_580;
LABEL_586:
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(p_service_app_id_map);
  v239 = (unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v239);
    goto LABEL_593;
  }
  v239 = (unsigned __int64)this->service_app_id_map_.impl_.map_.elements_;
  if ( *(_BYTE *)((v239 >> 3) + 0x7FFF8000) )
  {
LABEL_593:
    __asan_report_load8(v239);
LABEL_594:
    __asan_handle_no_return(v239);
    __cxa_throw_bad_array_new_length();
  }
  v240 = *(_QWORD *)v239;
  if ( *(_QWORD *)v239 > 0x7FFFFFFFFFFFFFFuLL )
    goto LABEL_594;
  v241 = operator new[](16 * v240);
  for ( nn = v240 - 1; nn >= 0; --nn )
    ;
  *((_QWORD *)v376 - 16) = v241;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(p_service_app_id_map);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v376 - 64),
    &this->service_app_id_map_.impl_.map_);
  v243 = 0LL;
  while ( 2 )
  {
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(p_service_app_id_map);
    v244 = *(const google::protobuf::MapPair<unsigned int,unsigned int> **)(v380 + 96);
    if ( v244 )
    {
      v245 = v244 + 1;
      if ( *(_BYTE *)(((unsigned __int64)&v244[1] >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v245);
      }
      else
      {
        v246 = (unsigned __int64)v244[1];
        v245 = (const google::protobuf::MapPair<unsigned int,unsigned int> *)v246;
        v247 = *(_BYTE *)((v246 >> 3) + 0x7FFF8000);
        if ( (char)((v246 & 7) + 3) < v247 || !v247 )
        {
          na = *(unsigned int *)v246;
          v248 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
                   (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v380 + 32),
                   v243);
          if ( !*(_WORD *)(((unsigned __int64)v248 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)&v248->first = na;
            v248->second = (const google::protobuf::MapPair<unsigned int,unsigned int> *)v246;
            google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v380 + 96));
LABEL_605:
            ++v243;
            continue;
          }
LABEL_604:
          __asan_report_store16();
          goto LABEL_605;
        }
      }
      __asan_report_load4(v245);
      goto LABEL_604;
    }
    break;
  }
  p_service_app_id_map = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)(v376 - 128);
  v249 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
           (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)v376
         - 16,
           v243);
  v250 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
           (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)v376
         - 16,
           0LL);
  p_map = (google::protobuf::Map<unsigned int,unsigned int> *)v249;
  std::__sort<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*> *,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::CompareByFirstField<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>>>(
    v250,
    v249,
    (__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::CompareByFirstField<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > >)v376);
  *((_QWORD *)v376 - 12) = 0LL;
  v251 = 0LL;
  while ( 2 )
  {
    if ( v243 > v251 )
    {
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)v251;
      v288 = google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
               (const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const)(v380 + 32),
               v251);
      if ( *(_BYTE *)(((unsigned __int64)&v288->second >> 3) + 0x7FFF8000) )
      {
        v252 = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)__asan_report_load8(&v288->second);
      }
      else
      {
        v289 = (const unsigned int *)v288->second;
        p_map = (google::protobuf::Map<unsigned int,unsigned int> *)(v289 + 1);
        v252 = &this->service_app_id_map_.impl_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_ >> 3) + 0x7FFF8000) )
        {
          v253 = google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Wrap(
                   v289,
                   (const unsigned int *)p_map,
                   this->service_app_id_map_.impl_.arena_);
LABEL_610:
          v254 = v253;
          v255 = *(_QWORD *)(v380 + 64);
          if ( v253 != (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)v255 )
          {
            if ( v255 )
            {
              if ( *(_BYTE *)((v255 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v255);
LABEL_619:
                v255 = v256;
                __asan_report_load8(v256);
LABEL_620:
                __asan_handle_no_return(v255);
                __assert_fail(
                  "ptr_ != __null",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/s"
                  "tubs/scoped_ptr.h",
                  0x5Bu,
                  "C& google::protobuf::internal::scoped_ptr<C>::operator*() const [with C = proto::PacketHead::PacketHea"
                  "d_ServiceAppIdMapEntry]");
              }
              v256 = *(_QWORD *)v255 + 8LL;
              if ( *(_BYTE *)((v256 >> 3) + 0x7FFF8000) )
                goto LABEL_619;
              (*(void (**)(void))(*(_QWORD *)v255 + 8LL))();
            }
            *(_QWORD *)(v380 + 64) = v254;
          }
          p_service_app_id_map = *(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> **)(v380 + 64);
          if ( !p_service_app_id_map )
            goto LABEL_620;
          for ( i1 = 266; i1 > 0x7F; i1 >>= 7 )
          {
            v258 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
            p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
            if ( (char)v258 <= (char)p_map && (_BYTE)v258 )
            {
              LOBYTE(i1) = __asan_report_store1(target, p_map, v258);
              break;
            }
            *target++ = i1 | 0x80;
          }
          v259 = (unsigned __int64)target;
          v260 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
          if ( (char)v260 <= ((unsigned __int8)target & 7) && (_BYTE)v260 )
          {
            __asan_report_store1(target, p_map, v260);
          }
          else
          {
            *target++ = i1;
            v259 = (unsigned __int64)&p_service_app_id_map->state_;
            v261 = *(_BYTE *)(((unsigned __int64)&p_service_app_id_map->state_ >> 3) + 0x7FFF8000);
            if ( !v261 || v261 > 3 )
            {
              if ( (p_service_app_id_map->state_ & 1) == 0 )
                goto LABEL_646;
              v259 = (unsigned __int64)p_service_app_id_map;
              if ( !*(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
              {
                v259 = (unsigned __int64)(p_service_app_id_map->_vptr_MapFieldBase + 25);
                if ( !*(_BYTE *)((v259 >> 3) + 0x7FFF8000) )
                {
                  v262 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
                          + 25))(p_service_app_id_map);
LABEL_638:
                  v263 = *(_BYTE *)((v262 >> 3) + 0x7FFF8000);
                  if ( (char)((v262 & 7) + 3) < v263 || !v263 )
                  {
                    _BitScanReverse((unsigned int *)&v262, *(_DWORD *)v262 | 1);
                    nb = ((unsigned int)(9 * v262 + 73) >> 6) + 1;
                    goto LABEL_641;
                  }
                  __asan_report_load4(v262);
LABEL_646:
                  nb = 0;
LABEL_641:
                  if ( (p_service_app_id_map->state_ & 2) == 0 )
                    goto LABEL_654;
                  v264 = (unsigned __int64)p_service_app_id_map;
                  if ( *(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8(p_service_app_id_map);
                  }
                  else
                  {
                    v264 = (unsigned __int64)(p_service_app_id_map->_vptr_MapFieldBase + 26);
                    if ( !*(_BYTE *)((v264 >> 3) + 0x7FFF8000) )
                    {
                      v265 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
                              + 26))(p_service_app_id_map);
LABEL_649:
                      v266 = *(_BYTE *)((v265 >> 3) + 0x7FFF8000);
                      if ( (char)((v265 & 7) + 3) < v266 || !v266 )
                      {
                        _BitScanReverse((unsigned int *)&v265, *(_DWORD *)v265 | 1);
                        v267 = ((unsigned int)(9 * v265 + 73) >> 6) + 1;
LABEL_652:
                        for ( i2 = nb + v267; i2 > 0x7F; i2 >>= 7 )
                        {
                          v269 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                          p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
                          if ( (char)v269 <= (char)p_map && (_BYTE)v269 )
                          {
                            LOBYTE(i2) = __asan_report_store1(target, p_map, v269);
                            break;
                          }
                          *target++ = i2 | 0x80;
                        }
                        v270 = target;
                        v271 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                        if ( (char)v271 <= ((unsigned __int8)target & 7) && (_BYTE)v271 )
                        {
                          __asan_report_store1(target, p_map, v271);
                        }
                        else
                        {
                          *target++ = i2;
                          v270 = (google::protobuf::uint8 *)p_service_app_id_map;
                          if ( !*(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
                          {
                            v270 = (google::protobuf::uint8 *)(p_service_app_id_map->_vptr_MapFieldBase + 25);
                            if ( !*(_BYTE *)(((unsigned __int64)v270 >> 3) + 0x7FFF8000) )
                            {
                              v272 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
                                      + 25))(p_service_app_id_map);
                              goto LABEL_668;
                            }
LABEL_667:
                            v272 = __asan_report_load8(v270);
LABEL_668:
                            v273 = (google::protobuf::uint8 *)v272;
                            v274 = *(_BYTE *)((v272 >> 3) + 0x7FFF8000);
                            if ( (char)((v272 & 7) + 3) >= v274 && v274 )
                            {
                              __asan_report_load4(v272);
                            }
                            else
                            {
                              v275 = *(_DWORD *)v272;
                              v273 = target;
                              v276 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                              if ( (char)v276 > ((unsigned __int8)target & 7) || !(_BYTE)v276 )
                              {
                                *target++ = 8;
                                goto LABEL_676;
                              }
                            }
                            v275 = __asan_report_store1(v273, p_map, v276);
                            while ( 1 )
                            {
                              *target = v277;
                              v275 >>= 7;
                              ++target;
LABEL_676:
                              if ( v275 <= 0x7F )
                                break;
                              v277 = v275 | 0x80;
                              v278 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                              p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
                              if ( (char)v278 <= (char)p_map && (_BYTE)v278 )
                              {
                                LOBYTE(v275) = __asan_report_store1(target, p_map, v278);
                                break;
                              }
                            }
                            v279 = target;
                            v280 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                            if ( (char)v280 <= ((unsigned __int8)target & 7) && (_BYTE)v280 )
                            {
                              __asan_report_store1(target, p_map, v280);
                            }
                            else
                            {
                              *target = v275;
                              v279 = (google::protobuf::uint8 *)p_service_app_id_map;
                              if ( !*(_BYTE *)(((unsigned __int64)p_service_app_id_map >> 3) + 0x7FFF8000) )
                              {
                                v279 = (google::protobuf::uint8 *)(p_service_app_id_map->_vptr_MapFieldBase + 26);
                                if ( !*(_BYTE *)(((unsigned __int64)v279 >> 3) + 0x7FFF8000) )
                                {
                                  v281 = (*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))p_service_app_id_map->_vptr_MapFieldBase
                                          + 26))(p_service_app_id_map);
LABEL_688:
                                  v282 = (google::protobuf::uint8 *)v281;
                                  v283 = *(_BYTE *)((v281 >> 3) + 0x7FFF8000);
                                  if ( (char)((v281 & 7) + 3) >= v283 && v283 )
                                  {
                                    __asan_report_load4(v281);
                                  }
                                  else
                                  {
                                    v284 = *(_DWORD *)v281;
                                    v282 = target + 1;
                                    v285 = *(unsigned __int8 *)(((unsigned __int64)(target + 1) >> 3) + 0x7FFF8000);
                                    if ( (char)v285 > (((unsigned __int8)target + 1) & 7) || !(_BYTE)v285 )
                                    {
                                      target[1] = 16;
                                      target += 2;
                                      goto LABEL_696;
                                    }
                                  }
                                  v284 = __asan_report_store1(v282, p_map, v285);
                                  while ( 1 )
                                  {
                                    *target = v286;
                                    v284 >>= 7;
                                    ++target;
LABEL_696:
                                    if ( v284 <= 0x7F )
                                      break;
                                    v286 = v284 | 0x80;
                                    v287 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                                    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
                                    if ( (char)v287 <= (char)p_map && (_BYTE)v287 )
                                    {
                                      LOBYTE(v284) = __asan_report_store1(target, p_map, v287);
                                      break;
                                    }
                                  }
                                  v238 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
                                  if ( (char)v238 <= ((unsigned __int8)target & 7) && (_BYTE)v238 )
                                  {
                                    __asan_report_store1(target, p_map, v238);
                                    break;
                                  }
                                  *target++ = v284;
                                  ++v251;
                                  continue;
                                }
LABEL_687:
                                v281 = __asan_report_load8(v279);
                                goto LABEL_688;
                              }
                            }
                            __asan_report_load8(v279);
                            goto LABEL_687;
                          }
                        }
                        __asan_report_load8(v270);
                        goto LABEL_667;
                      }
                      __asan_report_load4(v265);
LABEL_654:
                      v267 = 0;
                      goto LABEL_652;
                    }
                  }
                  v265 = __asan_report_load8(v264);
                  goto LABEL_649;
                }
LABEL_637:
                v262 = __asan_report_load8(v259);
                goto LABEL_638;
              }
LABEL_636:
              __asan_report_load8(v259);
              goto LABEL_637;
            }
          }
          __asan_report_load4(v259);
          goto LABEL_636;
        }
      }
      v253 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)__asan_report_load8(v252);
      goto LABEL_610;
    }
    break;
  }
  v290 = *((_QWORD *)v376 - 12);
  if ( !v290 )
    goto LABEL_712;
  if ( *(_BYTE *)((v290 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v290);
    goto LABEL_715;
  }
  v291 = *(_QWORD *)v290 + 8LL;
  if ( *(_BYTE *)((v291 >> 3) + 0x7FFF8000) )
  {
LABEL_715:
    __asan_report_load8(v291);
    goto LABEL_716;
  }
  (*(void (**)(void))(*(_QWORD *)v290 + 8LL))();
LABEL_712:
  v292 = (void *)*((_QWORD *)v376 - 16);
  if ( v292 )
    operator delete[](v292);
LABEL_821:
  p_is_set_game_thread = &this->is_set_game_thread_;
  if ( *(char *)(((unsigned __int64)&this->is_set_game_thread_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_826;
  if ( this->is_set_game_thread_ )
  {
    for ( i3 = 272; i3 > 0x7F; i3 >>= 7 )
    {
      v339 = i3 | 0x80;
      v340 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v340 <= (char)p_map && (_BYTE)v340 )
      {
        LOBYTE(i3) = __asan_report_store1(target, p_map, v340);
        break;
      }
LABEL_827:
      *target++ = v339;
    }
    v341 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v341 <= ((unsigned __int8)target & 7) && (_BYTE)v341 )
    {
      __asan_report_store1(target, p_map, v341);
    }
    else
    {
      *target++ = i3;
      v342 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      v343 = (unsigned __int8)target & 7;
      if ( v342 > (char)v343 || !v342 )
      {
        *target++ = 1;
        goto LABEL_837;
      }
    }
    p_game_thread_index = target;
    __asan_report_store1(target, p_map, v343);
LABEL_843:
    game_thread_index = __asan_report_load4(p_game_thread_index);
    goto LABEL_844;
  }
LABEL_837:
  p_game_thread_index = &this->game_thread_index_;
  v345 = *(_BYTE *)(((unsigned __int64)&this->game_thread_index_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 12) & 7) + 3) >= v345 && v345 )
    goto LABEL_843;
  game_thread_index = this->game_thread_index_;
  if ( game_thread_index )
  {
    v347 = 280LL;
    while ( (unsigned int)v347 > 0x7F )
    {
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)v347 | 0xFFFFFF80);
      v348 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( v348 <= ((unsigned __int8)target & 7) && v348 )
      {
        game_thread_index = __asan_report_store1(target, p_map, v347);
        break;
      }
LABEL_844:
      *target = (unsigned __int8)p_map;
      v347 = (unsigned int)v347 >> 7;
      ++target;
    }
    v349 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( v349 <= (char)p_map && v349 )
    {
      game_thread_index = __asan_report_store1(target, p_map, v347);
      goto LABEL_853;
    }
    *target++ = v347;
    while ( game_thread_index > 0x7F )
    {
      v350 = game_thread_index | 0x80;
      v351 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v351 <= (char)p_map && (_BYTE)v351 )
      {
        LOBYTE(game_thread_index) = __asan_report_store1(target, p_map, v351);
        break;
      }
LABEL_853:
      *target = v350;
      game_thread_index >>= 7;
      ++target;
    }
    p_is_set_multi_thread = target;
    v353 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v353 > ((unsigned __int8)target & 7) || !(_BYTE)v353 )
    {
      *target++ = game_thread_index;
      goto LABEL_861;
    }
    __asan_report_store1(target, p_map, v353);
LABEL_866:
    i4 = __asan_report_load1(p_is_set_multi_thread, p_map, v355);
    goto LABEL_867;
  }
LABEL_861:
  p_is_set_multi_thread = &this->is_set_multi_thread_;
  v354 = *(_BYTE *)(((unsigned __int64)&this->is_set_multi_thread_ >> 3) + 0x7FFF8000);
  v355 = ((_BYTE)this - 7) & 7;
  if ( v354 <= (char)v355 && v354 )
    goto LABEL_866;
  if ( this->is_set_multi_thread_ )
  {
    for ( i4 = 288; i4 > 0x7F; i4 >>= 7 )
    {
      v357 = i4 | 0x80;
      v358 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v358 <= (char)p_map && (_BYTE)v358 )
      {
        LOBYTE(i4) = __asan_report_store1(target, p_map, v358);
        break;
      }
LABEL_867:
      *target++ = v357;
    }
    v359 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v359 <= ((unsigned __int8)target & 7) && (_BYTE)v359 )
    {
      __asan_report_store1(target, p_map, v359);
    }
    else
    {
      *target++ = i4;
      v360 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      v361 = (unsigned __int8)target & 7;
      if ( v360 > (char)v361 || !v360 )
      {
        *target++ = 1;
        goto LABEL_877;
      }
    }
    p_multi_thread_index = target;
    __asan_report_store1(target, p_map, v361);
LABEL_883:
    multi_thread_index = __asan_report_load4(p_multi_thread_index);
    goto LABEL_884;
  }
LABEL_877:
  p_multi_thread_index = &this->multi_thread_index_;
  v363 = *(_BYTE *)(((unsigned __int64)&this->multi_thread_index_ >> 3) + 0x7FFF8000);
  if ( v363 && v363 <= 3 )
    goto LABEL_883;
  multi_thread_index = this->multi_thread_index_;
  if ( multi_thread_index )
  {
    v365 = 296LL;
    while ( (unsigned int)v365 > 0x7F )
    {
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)v365 | 0xFFFFFF80);
      v366 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      if ( v366 <= ((unsigned __int8)target & 7) && v366 )
      {
        multi_thread_index = __asan_report_store1(target, p_map, v365);
        break;
      }
LABEL_884:
      *target = (unsigned __int8)p_map;
      v365 = (unsigned int)v365 >> 7;
      ++target;
    }
    v367 = *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
    if ( v367 <= (char)p_map && v367 )
    {
      multi_thread_index = __asan_report_store1(target, p_map, v365);
      goto LABEL_893;
    }
    *target++ = v365;
    while ( multi_thread_index > 0x7F )
    {
      v368 = multi_thread_index | 0x80;
      v369 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
      p_map = (google::protobuf::Map<unsigned int,unsigned int> *)((unsigned __int8)target & 7);
      if ( (char)v369 <= (char)p_map && (_BYTE)v369 )
      {
        LOBYTE(multi_thread_index) = __asan_report_store1(target, p_map, v369);
        break;
      }
LABEL_893:
      *target = v368;
      multi_thread_index >>= 7;
      ++target;
    }
    p_internal_metadata = target;
    v371 = *(unsigned __int8 *)(((unsigned __int64)target >> 3) + 0x7FFF8000);
    if ( (char)v371 > ((unsigned __int8)target & 7) || !(_BYTE)v371 )
    {
      *target++ = multi_thread_index;
      goto LABEL_901;
    }
    __asan_report_store1(target, p_map, v371);
LABEL_909:
    v373 = (bool *)__asan_report_load8(p_internal_metadata);
LABEL_910:
    v372 = (unsigned __int64)v373;
    __asan_report_load1(v373, p_map, v374);
    goto LABEL_911;
  }
LABEL_901:
  p_internal_metadata = &this->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
    goto LABEL_909;
  v372 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v372 & 1) != 0 )
  {
    v373 = &google::protobuf::internal::proto3_preserve_unknown_;
    v374 = *(unsigned __int8 *)(((unsigned __int64)&google::protobuf::internal::proto3_preserve_unknown_ >> 3)
                              + 0x7FFF8000);
    if ( (char)v374 <= (char)((unsigned __int64)&google::protobuf::internal::proto3_preserve_unknown_ & 7)
      && (_BYTE)v374 )
    {
      goto LABEL_910;
    }
    if ( google::protobuf::internal::proto3_preserve_unknown_ )
LABEL_911:
      target = google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
                 (const google::protobuf::UnknownFieldSet *)(v372 & 0xFFFFFFFFFFFFFFFELL),
                 target);
  }
  result = target;
  if ( v383 == (char *)v380 )
  {
    *(_QWORD *)((v380 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v380 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v380 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v380 = 1172321806LL;
    *(_QWORD *)((v380 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v380 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v380 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1174: range 000000000C816624-000000000C8178E9
size_t __fastcall proto::PacketHead::ByteSizeLong(const proto::PacketHead *const this)
{
  char *v1; // r15
  unsigned __int64 ptr; // rdi
  bool *v4; // rax
  __int64 v5; // rdx
  size_t arena; // r13
  __int64 v7; // rax
  size_t v8; // r14
  __int64 v9; // rax
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *p_impl; // rdi
  proto::PacketHead::PacketHead_ExtMapEntry *v11; // rdi
  char v12; // al
  unsigned __int64 Aligned; // rbx
  proto::PacketHead::PacketHead_ExtMapEntry *v14; // rdi
  char v15; // al
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  char v20; // al
  unsigned __int64 v21; // rax
  struct _Unwind_Exception *v22; // rbp
  char v23; // cl
  __int64 v24; // r13
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rax
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  google::protobuf::Map<unsigned int,unsigned int> *p_map; // rsi
  __int64 v34; // rax
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *v35; // rdi
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v36; // rdi
  char v37; // al
  unsigned __int64 v38; // rbx
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry *v39; // rdi
  char v40; // al
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rdi
  char v45; // al
  unsigned __int64 v46; // rax
  struct _Unwind_Exception *v47; // rbp
  char v48; // cl
  __int64 v49; // r13
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rax
  char v52; // cl
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // edx
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // rdx
  unsigned __int64 p_span_context_str; // rdi
  std::string *v59; // rax
  std::string::size_type M_string_length; // rdx
  unsigned int v61; // eax
  char v62; // al
  google::protobuf::uint32 packet_id; // eax
  char v64; // dl
  google::protobuf::uint32 rpc_id; // eax
  char v66; // al
  google::protobuf::uint32 client_sequence_id; // eax
  char v68; // dl
  google::protobuf::uint32 enet_channel_id; // eax
  google::protobuf::uint64 sent_ms; // rax
  char v71; // al
  google::protobuf::uint32 enet_is_reliable; // eax
  char v73; // dl
  google::protobuf::uint32 user_id; // eax
  char v75; // al
  google::protobuf::uint32 user_ip; // eax
  char v77; // dl
  google::protobuf::uint32 user_session_id; // eax
  char v79; // al
  google::protobuf::uint32 home_user_id; // eax
  char v81; // dl
  google::protobuf::uint32 rpc_begin_time_ms; // eax
  google::protobuf::uint64 recv_time_ms; // rax
  char v84; // al
  google::protobuf::uint32 multi_thread_index; // eax
  char v86; // dl
  google::protobuf::uint32 sender_app_id; // eax
  char v88; // al
  google::protobuf::uint32 sender_load; // eax
  char v90; // dl
  google::protobuf::uint32 source_service; // eax
  char v92; // al
  google::protobuf::uint32 target_service; // eax
  __int64 v94; // rdx
  google::protobuf::uint32 game_thread_index; // eax
  char v96; // al
  __int64 v97; // rdx
  char v98; // dl
  __int64 v100; // rax
  __int64 v101; // rax
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *p_ext_map; // [rsp+0h] [rbp-168h]
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *total_size; // [rsp+8h] [rbp-160h]
  unsigned __int64 v104; // [rsp+18h] [rbp-150h]
  _DWORD *v105; // [rsp+20h] [rbp-148h]
  char v106[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v104 = (unsigned __int64)v106;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v104 = v7;
  }
  *(_QWORD *)v104 = 1102416563LL;
  *(_QWORD *)(v104 + 8) = "2 32 8 10 entry:1201 64 24 7 it:1203";
  *(_QWORD *)(v104 + 16) = proto::PacketHead::ByteSizeLong;
  v105 = (_DWORD *)(v104 >> 3);
  v105[536862720] = -235802127;
  v105[536862721] = -218959360;
  v105[536862722] = -218103808;
  v105[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
    v4 = (bool *)__asan_report_load8(&this->_internal_metadata_);
LABEL_11:
    ptr = (unsigned __int64)v4;
    __asan_report_load1(v4, proto::PacketHead::ByteSizeLong, v5);
    goto LABEL_12;
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) == 0 )
  {
    arena = 0LL;
    goto LABEL_14;
  }
  v4 = &google::protobuf::internal::proto3_preserve_unknown_;
  v5 = *(unsigned __int8 *)(((unsigned __int64)&google::protobuf::internal::proto3_preserve_unknown_ >> 3) + 0x7FFF8000);
  if ( (char)v5 <= (char)((unsigned __int64)&google::protobuf::internal::proto3_preserve_unknown_ & 7) && (_BYTE)v5 )
    goto LABEL_11;
  if ( google::protobuf::internal::proto3_preserve_unknown_ )
  {
LABEL_12:
    arena = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
    goto LABEL_14;
  }
  arena = 0LL;
LABEL_14:
  total_size = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)(arena + 2LL * (unsigned int)google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::size(&this->ext_map_));
  v8 = v104 + 128;
  *(_QWORD *)(v104 + 32) = 0LL;
  p_ext_map = &this->ext_map_;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->ext_map_);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v104 + 64),
    &this->ext_map_.impl_.map_);
  while ( 1 )
  {
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(p_ext_map);
    v9 = *(_QWORD *)(v104 + 64);
    if ( !v9 )
      break;
    p_impl = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)(v9 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_impl);
LABEL_23:
      __asan_report_load8(p_impl);
LABEL_24:
      Aligned = operator new(0x40uLL);
      proto::PacketHead::PacketHead_ExtMapEntry::PacketHead_ExtMapEntry(
        (proto::PacketHead::PacketHead_ExtMapEntry *const)Aligned,
        0LL);
      v11 = (proto::PacketHead::PacketHead_ExtMapEntry *)Aligned;
      if ( *(_BYTE *)((Aligned >> 3) + 0x7FFF8000) )
      {
        __asan_report_store8(Aligned, 0LL);
      }
      else
      {
        *(_QWORD *)Aligned = &`vtable for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper
                           + 2;
        v11 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 48);
        if ( !*(_BYTE *)(((Aligned + 48) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(Aligned + 48) = v8;
          v11 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 56);
          if ( !*(_BYTE *)(((Aligned + 56) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(Aligned + 56) = v1;
            v11 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 32);
            v12 = *(_BYTE *)(((Aligned + 32) >> 3) + 0x7FFF8000);
            if ( !v12 || v12 > 3 )
            {
              *(_DWORD *)(Aligned + 32) |= 3u;
              goto LABEL_42;
            }
            goto LABEL_33;
          }
LABEL_32:
          __asan_report_store8(v11, 0LL);
LABEL_33:
          __asan_report_load4(v11);
          goto LABEL_34;
        }
      }
      __asan_report_store8(v11, 0LL);
      goto LABEL_32;
    }
    v8 = *(_QWORD *)(v9 + 8);
    v1 = (char *)(v8 + 4);
    p_impl = &this->ext_map_.impl_;
    if ( *(_BYTE *)(((unsigned __int64)&this->ext_map_.impl_ >> 3) + 0x7FFF8000) )
      goto LABEL_23;
    arena = (size_t)this->ext_map_.impl_.arena_;
    if ( !arena )
      goto LABEL_24;
    v11 = (proto::PacketHead::PacketHead_ExtMapEntry *)(arena + 128);
    if ( !*(_BYTE *)(((arena + 128) >> 3) + 0x7FFF8000) )
    {
      if ( !*(_QWORD *)(arena + 128) )
        goto LABEL_21;
      goto LABEL_35;
    }
LABEL_34:
    __asan_report_load8(v11);
LABEL_35:
    google::protobuf::Arena::OnArenaAllocation(
      (const google::protobuf::Arena *const)arena,
      (const std::type_info *)&`typeinfo for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper,
      0x40uLL);
LABEL_21:
    Aligned = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                  (google::protobuf::internal::ArenaImpl *const)arena,
                                  0x40uLL);
    proto::PacketHead::PacketHead_ExtMapEntry::PacketHead_ExtMapEntry(
      (proto::PacketHead::PacketHead_ExtMapEntry *const)Aligned,
      (google::protobuf::Arena *)arena);
    v14 = (proto::PacketHead::PacketHead_ExtMapEntry *)Aligned;
    if ( *(_BYTE *)((Aligned >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(Aligned, arena);
LABEL_56:
      __asan_report_store8(v14, arena);
LABEL_57:
      __asan_report_store8(v14, arena);
LABEL_58:
      v22 = (struct _Unwind_Exception *)__asan_report_load4(v14);
      operator delete((void *)Aligned, 0x40uLL);
LABEL_59:
      v16 = *(_QWORD *)(v104 + 32);
      if ( v16 )
      {
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_62:
          __asan_report_load8(v16);
LABEL_63:
          v16 = v17;
          __asan_report_load8(v17);
LABEL_64:
          __asan_handle_no_return(v16);
          __assert_fail(
            "ptr_ != __null",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/scoped_ptr.h",
            0x5Bu,
            "C& google::protobuf::internal::scoped_ptr<C>::operator*() const [with C = proto::PacketHead::PacketHead_ExtMapEntry]");
        }
        v100 = *(_QWORD *)v16;
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v16 + 8LL) >> 3) + 0x7FFF8000) )
        {
          v16 = *(_QWORD *)v16 + 8LL;
          v100 = __asan_report_load8(v16);
        }
        (*(void (**)(void))(v100 + 8))();
      }
      __asan_handle_no_return(v16);
      _Unwind_Resume(v22);
    }
    *(_QWORD *)Aligned = &`vtable for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ExtMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper
                       + 2;
    v14 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 48);
    if ( *(_BYTE *)(((Aligned + 48) >> 3) + 0x7FFF8000) )
      goto LABEL_56;
    *(_QWORD *)(Aligned + 48) = v8;
    v14 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 56);
    if ( *(_BYTE *)(((Aligned + 56) >> 3) + 0x7FFF8000) )
      goto LABEL_57;
    *(_QWORD *)(Aligned + 56) = v1;
    v14 = (proto::PacketHead::PacketHead_ExtMapEntry *)(Aligned + 32);
    v15 = *(_BYTE *)(((Aligned + 32) >> 3) + 0x7FFF8000);
    if ( v15 && v15 <= 3 )
      goto LABEL_58;
    *(_DWORD *)(Aligned + 32) |= 3u;
LABEL_42:
    v16 = *(_QWORD *)(v104 + 32);
    if ( v16 != Aligned )
    {
      if ( v16 )
      {
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          goto LABEL_62;
        v17 = *(_QWORD *)v16 + 8LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          goto LABEL_63;
        (*(void (**)(void))(*(_QWORD *)v16 + 8LL))();
      }
      *(_QWORD *)(v104 + 32) = Aligned;
    }
    v18 = *(_QWORD *)(v104 + 32);
    if ( !v18 )
      goto LABEL_64;
    v19 = v18 + 32;
    v20 = *(_BYTE *)(((v18 + 32) >> 3) + 0x7FFF8000);
    if ( v20 && v20 <= 3 )
    {
      __asan_report_load4(v19);
LABEL_66:
      __asan_report_load8(v19);
      goto LABEL_67;
    }
    if ( (*(_BYTE *)(v18 + 32) & 1) == 0 )
      goto LABEL_72;
    v19 = *(_QWORD *)(v104 + 32);
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      goto LABEL_66;
    v19 = *(_QWORD *)v18 + 200LL;
    if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 200LL))(*(_QWORD *)(v104 + 32));
      goto LABEL_68;
    }
LABEL_67:
    v21 = __asan_report_load8(v19);
LABEL_68:
    v23 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
    if ( (char)((v21 & 7) + 3) < v23 || !v23 )
    {
      _BitScanReverse((unsigned int *)&v21, *(_DWORD *)v21 | 1);
      v24 = ((unsigned int)(9 * v21 + 73) >> 6) + 1LL;
      goto LABEL_73;
    }
    __asan_report_load4(v21);
LABEL_72:
    v24 = 0LL;
LABEL_73:
    if ( (*(_BYTE *)(v18 + 32) & 2) == 0 )
      goto LABEL_83;
    v25 = v18;
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v18);
    }
    else
    {
      v25 = *(_QWORD *)v18 + 208LL;
      if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        v26 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 208LL))(v18);
        goto LABEL_79;
      }
    }
    v26 = __asan_report_load8(v25);
LABEL_79:
    v27 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
    if ( (char)((v26 & 7) + 3) < v27 || !v27 )
    {
      _BitScanReverse((unsigned int *)&v26, *(_DWORD *)v26 | 1);
      v28 = ((unsigned int)(9 * v26 + 73) >> 6) + 1LL;
      goto LABEL_84;
    }
    __asan_report_load4(v26);
LABEL_83:
    v28 = 0LL;
LABEL_84:
    v29 = v24 + v28;
    _BitScanReverse(&v30, v29 | 1);
    arena = v29 + ((9 * v30 + 73) >> 6);
    total_size = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)((char *)total_size + arena);
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v104 + 64));
  }
  v31 = *(_QWORD *)(v104 + 32);
  if ( !v31 )
    goto LABEL_89;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v31);
    goto LABEL_91;
  }
  v32 = *(_QWORD *)v31 + 8LL;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(v32);
    goto LABEL_92;
  }
  (*(void (**)(void))(*(_QWORD *)v31 + 8LL))();
LABEL_89:
  v8 = (size_t)total_size
     + 2
     * (unsigned int)google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::size(&this->service_app_id_map_);
  v1 = (char *)(v104 + 128);
  *(_QWORD *)(v104 + 32) = 0LL;
  total_size = &this->service_app_id_map_;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(&this->service_app_id_map_);
LABEL_92:
  p_map = &this->service_app_id_map_.impl_.map_;
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v1 - 64),
    &this->service_app_id_map_.impl_.map_);
  while ( 2 )
  {
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(total_size);
    v34 = *(_QWORD *)(v104 + 64);
    if ( v34 )
    {
      v35 = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapFieldLiteType *)(v34 + 8);
      if ( *(_BYTE *)(((unsigned __int64)(v34 + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v35);
      }
      else
      {
        v1 = *(char **)(v34 + 8);
        p_ext_map = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)(v1 + 4);
        v35 = &this->service_app_id_map_.impl_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->service_app_id_map_.impl_ >> 3) + 0x7FFF8000) )
        {
          arena = (size_t)this->service_app_id_map_.impl_.arena_;
          if ( arena )
          {
            v36 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(arena + 128);
            if ( !*(_BYTE *)(((arena + 128) >> 3) + 0x7FFF8000) )
            {
              if ( !*(_QWORD *)(arena + 128) )
              {
LABEL_99:
                v38 = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                          (google::protobuf::internal::ArenaImpl *const)arena,
                                          0x40uLL);
                p_map = (google::protobuf::Map<unsigned int,unsigned int> *)arena;
                proto::PacketHead::PacketHead_ServiceAppIdMapEntry::PacketHead_ServiceAppIdMapEntry(
                  (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *const)v38,
                  (google::protobuf::Arena *)arena);
                v39 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)v38;
                if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store8(v38, arena);
LABEL_134:
                  __asan_report_store8(v39, arena);
LABEL_135:
                  __asan_report_store8(v39, arena);
LABEL_136:
                  v47 = (struct _Unwind_Exception *)__asan_report_load4(v39);
                  operator delete((void *)v38, 0x40uLL);
                  v41 = *(_QWORD *)(v104 + 32);
                  if ( v41 )
                  {
                    if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load8(v41);
LABEL_139:
                      __asan_report_load8(v41);
LABEL_140:
                      v41 = v42;
                      __asan_report_load8(v42);
LABEL_141:
                      __asan_handle_no_return(v41);
                      __assert_fail(
                        "ptr_ != __null",
                        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/protobuf_3_4_1/include/google/prot"
                        "obuf/stubs/scoped_ptr.h",
                        0x5Bu,
                        "C& google::protobuf::internal::scoped_ptr<C>::operator*() const [with C = proto::PacketHead::Pac"
                        "ketHead_ServiceAppIdMapEntry]");
                    }
                    v101 = *(_QWORD *)v41;
                    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v41 + 8LL) >> 3) + 0x7FFF8000) )
                    {
                      v41 = *(_QWORD *)v41 + 8LL;
                      v101 = __asan_report_load8(v41);
                    }
                    (*(void (**)(void))(v101 + 8))();
                  }
                  __asan_handle_no_return(v41);
                  _Unwind_Resume(v47);
                }
                *(_QWORD *)v38 = &`vtable for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper
                               + 2;
                v39 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(v38 + 48);
                if ( *(_BYTE *)(((v38 + 48) >> 3) + 0x7FFF8000) )
                  goto LABEL_134;
                *(_QWORD *)(v38 + 48) = v1;
                v39 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(v38 + 56);
                if ( *(_BYTE *)(((v38 + 56) >> 3) + 0x7FFF8000) )
                  goto LABEL_135;
                *(_QWORD *)(v38 + 56) = p_ext_map;
                v39 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(v38 + 32);
                v40 = *(_BYTE *)(((v38 + 32) >> 3) + 0x7FFF8000);
                if ( v40 && v40 <= 3 )
                  goto LABEL_136;
                *(_DWORD *)(v38 + 32) |= 3u;
LABEL_120:
                v41 = *(_QWORD *)(v104 + 32);
                if ( v41 != v38 )
                {
                  if ( v41 )
                  {
                    if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
                      goto LABEL_139;
                    v42 = *(_QWORD *)v41 + 8LL;
                    if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
                      goto LABEL_140;
                    (*(void (**)(void))(*(_QWORD *)v41 + 8LL))();
                  }
                  *(_QWORD *)(v104 + 32) = v38;
                }
                v43 = *(_QWORD *)(v104 + 32);
                if ( !v43 )
                  goto LABEL_141;
                v44 = v43 + 32;
                v45 = *(_BYTE *)(((v43 + 32) >> 3) + 0x7FFF8000);
                if ( v45 && v45 <= 3 )
                {
                  __asan_report_load4(v44);
                }
                else
                {
                  if ( (*(_BYTE *)(v43 + 32) & 1) == 0 )
                    goto LABEL_153;
                  v44 = *(_QWORD *)(v104 + 32);
                  if ( !*(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
                  {
                    v44 = *(_QWORD *)v43 + 200LL;
                    if ( !*(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
                    {
                      v46 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v43 + 200LL))(*(_QWORD *)(v104 + 32));
LABEL_145:
                      v48 = *(_BYTE *)((v46 >> 3) + 0x7FFF8000);
                      if ( (char)((v46 & 7) + 3) < v48 || !v48 )
                      {
                        _BitScanReverse((unsigned int *)&v46, *(_DWORD *)v46 | 1);
                        v49 = ((unsigned int)(9 * v46 + 73) >> 6) + 1LL;
                        goto LABEL_148;
                      }
                      __asan_report_load4(v46);
LABEL_153:
                      v49 = 0LL;
LABEL_148:
                      if ( (*(_BYTE *)(v43 + 32) & 2) == 0 )
                        goto LABEL_161;
                      v50 = v43;
                      if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8(v43);
                      }
                      else
                      {
                        v50 = *(_QWORD *)v43 + 208LL;
                        if ( !*(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
                        {
                          v51 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v43 + 208LL))(v43);
LABEL_156:
                          v52 = *(_BYTE *)((v51 >> 3) + 0x7FFF8000);
                          if ( (char)((v51 & 7) + 3) < v52 || !v52 )
                          {
                            _BitScanReverse((unsigned int *)&v51, *(_DWORD *)v51 | 1);
                            v53 = ((unsigned int)(9 * v51 + 73) >> 6) + 1LL;
LABEL_159:
                            v54 = v49 + v53;
                            _BitScanReverse(&v55, v54 | 1);
                            arena = v54 + ((9 * v55 + 73) >> 6);
                            v8 += arena;
                            google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v104 + 64));
                            continue;
                          }
                          __asan_report_load4(v51);
LABEL_161:
                          v53 = 0LL;
                          goto LABEL_159;
                        }
                      }
                      v51 = __asan_report_load8(v50);
                      goto LABEL_156;
                    }
LABEL_144:
                    v46 = __asan_report_load8(v44);
                    goto LABEL_145;
                  }
                }
                __asan_report_load8(v44);
                goto LABEL_144;
              }
LABEL_113:
              google::protobuf::Arena::OnArenaAllocation(
                (const google::protobuf::Arena *const)arena,
                (const std::type_info *)&`typeinfo for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper,
                0x40uLL);
              goto LABEL_99;
            }
LABEL_112:
            __asan_report_load8(v36);
            goto LABEL_113;
          }
LABEL_102:
          v38 = operator new(0x40uLL);
          p_map = 0LL;
          proto::PacketHead::PacketHead_ServiceAppIdMapEntry::PacketHead_ServiceAppIdMapEntry(
            (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *const)v38,
            0LL);
          v36 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)v38;
          if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store8(v38, 0LL);
          }
          else
          {
            *(_QWORD *)v38 = &`vtable for'google::protobuf::internal::MapEntryImpl<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,google::protobuf::Message,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MapEntryWrapper
                           + 2;
            v36 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(v38 + 48);
            if ( !*(_BYTE *)(((v38 + 48) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v38 + 48) = v1;
              v36 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(v38 + 56);
              if ( !*(_BYTE *)(((v38 + 56) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v38 + 56) = p_ext_map;
                v36 = (proto::PacketHead::PacketHead_ServiceAppIdMapEntry *)(v38 + 32);
                v37 = *(_BYTE *)(((v38 + 32) >> 3) + 0x7FFF8000);
                if ( !v37 || v37 > 3 )
                {
                  *(_DWORD *)(v38 + 32) |= 3u;
                  goto LABEL_120;
                }
                goto LABEL_111;
              }
LABEL_110:
              __asan_report_store8(v36, 0LL);
LABEL_111:
              __asan_report_load4(v36);
              goto LABEL_112;
            }
          }
          __asan_report_store8(v36, 0LL);
          goto LABEL_110;
        }
      }
      __asan_report_load8(v35);
      goto LABEL_102;
    }
    break;
  }
  v56 = *(_QWORD *)(v104 + 32);
  if ( !v56 )
    goto LABEL_166;
  if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v56);
    goto LABEL_253;
  }
  v57 = *(_QWORD *)v56 + 8LL;
  if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
  {
LABEL_253:
    p_span_context_str = v57;
    __asan_report_load8(v57);
LABEL_254:
    __asan_report_load8(p_span_context_str);
    goto LABEL_255;
  }
  (*(void (**)(void))(*(_QWORD *)v56 + 8LL))();
LABEL_166:
  p_span_context_str = (unsigned __int64)&this->span_context_str_;
  if ( *(_BYTE *)(((unsigned __int64)&this->span_context_str_ >> 3) + 0x7FFF8000) )
    goto LABEL_254;
  v59 = this->span_context_str_.ptr_;
  p_span_context_str = (unsigned __int64)&v59->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v59->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_255:
    __asan_report_load8(p_span_context_str);
LABEL_256:
    __asan_report_load4(p_span_context_str);
LABEL_257:
    __asan_report_load4(p_span_context_str);
LABEL_258:
    __asan_report_load4(p_span_context_str);
LABEL_259:
    __asan_report_load4(p_span_context_str);
LABEL_260:
    __asan_report_load8(p_span_context_str);
LABEL_261:
    __asan_report_load4(p_span_context_str);
LABEL_262:
    __asan_report_load4(p_span_context_str);
LABEL_263:
    __asan_report_load4(p_span_context_str);
LABEL_264:
    __asan_report_load4(p_span_context_str);
LABEL_265:
    __asan_report_load4(p_span_context_str);
LABEL_266:
    __asan_report_load4(p_span_context_str);
LABEL_267:
    __asan_report_load8(p_span_context_str);
LABEL_268:
    __asan_report_load4(p_span_context_str);
LABEL_269:
    __asan_report_load4(p_span_context_str);
LABEL_270:
    __asan_report_load4(p_span_context_str);
LABEL_271:
    __asan_report_load4(p_span_context_str);
LABEL_272:
    __asan_report_load4(p_span_context_str);
LABEL_273:
    __asan_report_load4(p_span_context_str);
LABEL_274:
    __asan_report_load1(p_span_context_str, p_map, v94);
LABEL_275:
    __asan_report_load1(p_span_context_str, p_map, v97);
LABEL_276:
    v22 = (struct _Unwind_Exception *)__asan_report_store4(p_span_context_str, p_map);
    goto LABEL_59;
  }
  M_string_length = v59->_M_string_length;
  if ( M_string_length )
  {
    _BitScanReverse(&v61, M_string_length | 1);
    v8 += M_string_length + ((9 * v61 + 73) >> 6) + 2;
  }
  p_span_context_str = (unsigned __int64)&this->packet_id_;
  v62 = *(_BYTE *)(((unsigned __int64)&this->packet_id_ >> 3) + 0x7FFF8000);
  if ( v62 && v62 <= 3 )
    goto LABEL_256;
  packet_id = this->packet_id_;
  if ( packet_id )
  {
    _BitScanReverse(&packet_id, packet_id | 1);
    v8 += ((9 * packet_id + 73) >> 6) + 1LL;
  }
  p_span_context_str = (unsigned __int64)&this->rpc_id_;
  v64 = *(_BYTE *)(((unsigned __int64)&this->rpc_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 84) & 7) + 3) >= v64 && v64 )
    goto LABEL_257;
  rpc_id = this->rpc_id_;
  if ( rpc_id )
  {
    _BitScanReverse(&rpc_id, rpc_id | 1);
    v8 += ((9 * rpc_id + 73) >> 6) + 1LL;
  }
  p_span_context_str = (unsigned __int64)&this->client_sequence_id_;
  v66 = *(_BYTE *)(((unsigned __int64)&this->client_sequence_id_ >> 3) + 0x7FFF8000);
  if ( v66 && v66 <= 3 )
    goto LABEL_258;
  client_sequence_id = this->client_sequence_id_;
  if ( client_sequence_id )
  {
    _BitScanReverse(&client_sequence_id, client_sequence_id | 1);
    v8 += ((9 * client_sequence_id + 73) >> 6) + 1LL;
  }
  p_span_context_str = (unsigned __int64)&this->enet_channel_id_;
  v68 = *(_BYTE *)(((unsigned __int64)&this->enet_channel_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 76) & 7) + 3) >= v68 && v68 )
    goto LABEL_259;
  enet_channel_id = this->enet_channel_id_;
  if ( enet_channel_id )
  {
    _BitScanReverse(&enet_channel_id, enet_channel_id | 1);
    v8 += ((9 * enet_channel_id + 73) >> 6) + 1LL;
  }
  p_span_context_str = (unsigned __int64)&this->sent_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->sent_ms_ >> 3) + 0x7FFF8000) )
    goto LABEL_260;
  sent_ms = this->sent_ms_;
  if ( sent_ms )
  {
    _BitScanReverse64(&sent_ms, sent_ms | 1);
    v8 += ((unsigned int)(9 * sent_ms + 73) >> 6) + 1LL;
  }
  p_span_context_str = (unsigned __int64)&this->enet_is_reliable_;
  v71 = *(_BYTE *)(((unsigned __int64)&this->enet_is_reliable_ >> 3) + 0x7FFF8000);
  if ( v71 && v71 <= 3 )
    goto LABEL_261;
  enet_is_reliable = this->enet_is_reliable_;
  if ( enet_is_reliable )
  {
    _BitScanReverse(&enet_is_reliable, enet_is_reliable | 1);
    v8 += ((9 * enet_is_reliable + 73) >> 6) + 1LL;
  }
  p_span_context_str = (unsigned __int64)&this->user_id_;
  v73 = *(_BYTE *)(((unsigned __int64)&this->user_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 60) & 7) + 3) >= v73 && v73 )
    goto LABEL_262;
  user_id = this->user_id_;
  if ( user_id )
  {
    _BitScanReverse(&user_id, user_id | 1);
    v8 += ((9 * user_id + 73) >> 6) + 1LL;
  }
  p_span_context_str = (unsigned __int64)&this->user_ip_;
  v75 = *(_BYTE *)(((unsigned __int64)&this->user_ip_ >> 3) + 0x7FFF8000);
  if ( v75 && v75 <= 3 )
    goto LABEL_263;
  user_ip = this->user_ip_;
  if ( user_ip )
  {
    _BitScanReverse(&user_ip, user_ip | 1);
    v8 += ((9 * user_ip + 73) >> 6) + 1LL;
  }
  p_span_context_str = (unsigned __int64)&this->user_session_id_;
  v77 = *(_BYTE *)(((unsigned __int64)&this->user_session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 52) & 7) + 3) >= v77 && v77 )
    goto LABEL_264;
  user_session_id = this->user_session_id_;
  if ( user_session_id )
  {
    _BitScanReverse(&user_session_id, user_session_id | 1);
    v8 += ((9 * user_session_id + 73) >> 6) + 1LL;
  }
  p_span_context_str = (unsigned __int64)&this->home_user_id_;
  v79 = *(_BYTE *)(((unsigned __int64)&this->home_user_id_ >> 3) + 0x7FFF8000);
  if ( v79 && v79 <= 3 )
    goto LABEL_265;
  home_user_id = this->home_user_id_;
  if ( home_user_id )
  {
    _BitScanReverse(&home_user_id, home_user_id | 1);
    v8 += ((9 * home_user_id + 73) >> 6) + 1LL;
  }
  p_span_context_str = (unsigned __int64)&this->rpc_begin_time_ms_;
  v81 = *(_BYTE *)(((unsigned __int64)&this->rpc_begin_time_ms_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v81 && v81 )
    goto LABEL_266;
  rpc_begin_time_ms = this->rpc_begin_time_ms_;
  if ( rpc_begin_time_ms )
  {
    _BitScanReverse(&rpc_begin_time_ms, rpc_begin_time_ms | 1);
    v8 += ((9 * rpc_begin_time_ms + 73) >> 6) + 2LL;
  }
  p_span_context_str = (unsigned __int64)&this->recv_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_time_ms_ >> 3) + 0x7FFF8000) )
    goto LABEL_267;
  recv_time_ms = this->recv_time_ms_;
  if ( recv_time_ms )
  {
    _BitScanReverse64(&recv_time_ms, recv_time_ms | 1);
    v8 += ((unsigned int)(9 * recv_time_ms + 73) >> 6) + 2LL;
  }
  p_span_context_str = (unsigned __int64)&this->multi_thread_index_;
  v84 = *(_BYTE *)(((unsigned __int64)&this->multi_thread_index_ >> 3) + 0x7FFF8000);
  if ( v84 && v84 <= 3 )
    goto LABEL_268;
  multi_thread_index = this->multi_thread_index_;
  if ( multi_thread_index )
  {
    _BitScanReverse(&multi_thread_index, multi_thread_index | 1);
    v8 += ((9 * multi_thread_index + 73) >> 6) + 2LL;
  }
  p_span_context_str = (unsigned __int64)&this->sender_app_id_;
  v86 = *(_BYTE *)(((unsigned __int64)&this->sender_app_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 28) & 7) + 3) >= v86 && v86 )
    goto LABEL_269;
  sender_app_id = this->sender_app_id_;
  if ( sender_app_id )
  {
    _BitScanReverse(&sender_app_id, sender_app_id | 1);
    v8 += ((9 * sender_app_id + 73) >> 6) + 2LL;
  }
  p_span_context_str = (unsigned __int64)&this->sender_load_;
  v88 = *(_BYTE *)(((unsigned __int64)&this->sender_load_ >> 3) + 0x7FFF8000);
  if ( v88 && v88 <= 3 )
    goto LABEL_270;
  sender_load = this->sender_load_;
  if ( sender_load )
  {
    _BitScanReverse(&sender_load, sender_load | 1);
    v8 += ((9 * sender_load + 73) >> 6) + 2LL;
  }
  p_span_context_str = (unsigned __int64)&this->source_service_;
  v90 = *(_BYTE *)(((unsigned __int64)&this->source_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 20) & 7) + 3) >= v90 && v90 )
    goto LABEL_271;
  source_service = this->source_service_;
  if ( source_service )
  {
    _BitScanReverse(&source_service, source_service | 1);
    v8 += ((9 * source_service + 73) >> 6) + 2LL;
  }
  p_span_context_str = (unsigned __int64)&this->target_service_;
  v92 = *(_BYTE *)(((unsigned __int64)&this->target_service_ >> 3) + 0x7FFF8000);
  if ( v92 && v92 <= 3 )
    goto LABEL_272;
  target_service = this->target_service_;
  if ( target_service )
  {
    _BitScanReverse(&target_service, target_service | 1);
    v8 += ((9 * target_service + 73) >> 6) + 2LL;
  }
  p_span_context_str = (unsigned __int64)&this->game_thread_index_;
  v94 = *(unsigned __int8 *)(((unsigned __int64)&this->game_thread_index_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 12) & 7) + 3) >= (char)v94 && (_BYTE)v94 )
    goto LABEL_273;
  game_thread_index = this->game_thread_index_;
  if ( game_thread_index )
  {
    _BitScanReverse(&game_thread_index, game_thread_index | 1);
    v8 += ((9 * game_thread_index + 73) >> 6) + 2LL;
  }
  p_span_context_str = (unsigned __int64)&this->is_set_game_thread_;
  if ( *(char *)(((unsigned __int64)&this->is_set_game_thread_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_274;
  if ( this->is_set_game_thread_ )
    v8 += 3LL;
  p_span_context_str = (unsigned __int64)&this->is_set_multi_thread_;
  v96 = *(_BYTE *)(((unsigned __int64)&this->is_set_multi_thread_ >> 3) + 0x7FFF8000);
  v97 = ((_BYTE)this - 7) & 7;
  if ( v96 <= (char)v97 && v96 )
    goto LABEL_275;
  if ( this->is_set_multi_thread_ )
    v8 += 3LL;
  p_span_context_str = (unsigned __int64)&this->_cached_size_;
  v98 = *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 4) & 7) + 3) >= v98 && v98 )
    goto LABEL_276;
  this->_cached_size_ = v8;
  if ( v106 == (char *)v104 )
  {
    *(_QWORD *)((v104 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v104 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v104 = 1172321806LL;
    *(_QWORD *)((v104 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v104 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v8;
};

// Line 1361: range 000000000C81FE6C-000000000C81FF31
void __fastcall proto::PacketHead::MergeFrom(proto::PacketHead *const this, const google::protobuf::Message *from)
{
  google::protobuf::Message *v3; // rdx
  const proto::PacketHead *v4; // rsi
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+10h] [rbp-58h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v7, LOGLEVEL_FATAL_0, "src/pb/packet_head.pb.cc", 1363);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v7, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v6, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  }
  v4 = google::protobuf::internal::DynamicCastToGenerated<proto::PacketHead const>(from);
  if ( v4 )
    proto::PacketHead::MergeFrom(this, v4);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 1376: range 000000000C81F4C4-000000000C81FE66
void __fastcall proto::PacketHead::MergeFrom(proto::PacketHead *const this, const proto::PacketHead *from)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // rdx
  __int64 ptr; // rax
  std::string *p_service_app_id_map; // rsi
  google::protobuf::internal::ArenaStringPtr *p_span_context_str; // rdi
  void *p_packet_id; // rdi
  char v9; // al
  google::protobuf::uint32 packet_id; // eax
  char v11; // dl
  char v12; // dl
  google::protobuf::uint32 rpc_id; // eax
  char v14; // cl
  char v15; // al
  google::protobuf::uint32 client_sequence_id; // eax
  char v17; // dl
  char v18; // dl
  google::protobuf::uint32 enet_channel_id; // eax
  char v20; // cl
  google::protobuf::uint64 sent_ms; // rax
  char v22; // al
  google::protobuf::uint32 enet_is_reliable; // eax
  char v24; // dl
  char v25; // dl
  google::protobuf::uint32 user_id; // eax
  char v27; // cl
  char v28; // al
  google::protobuf::uint32 user_ip; // eax
  char v30; // dl
  char v31; // dl
  google::protobuf::uint32 user_session_id; // eax
  char v33; // cl
  char v34; // al
  google::protobuf::uint32 home_user_id; // eax
  char v36; // dl
  char v37; // dl
  google::protobuf::uint32 rpc_begin_time_ms; // eax
  char v39; // cl
  google::protobuf::uint64 recv_time_ms; // rax
  char v41; // al
  google::protobuf::uint32 multi_thread_index; // eax
  char v43; // dl
  char v44; // dl
  google::protobuf::uint32 sender_app_id; // eax
  char v46; // cl
  char v47; // al
  google::protobuf::uint32 sender_load; // eax
  char v49; // dl
  char v50; // dl
  google::protobuf::uint32 source_service; // eax
  char v52; // cl
  char v53; // al
  google::protobuf::uint32 target_service; // eax
  char v55; // dl
  __int64 v56; // rdx
  google::protobuf::uint32 game_thread_index; // eax
  char v58; // cl
  bool is_set_game_thread; // al
  __int64 v60; // rdx
  char v61; // al
  __int64 v62; // rdx
  bool is_set_multi_thread; // al
  __int64 v64; // rdx
  google::protobuf::internal::LogMessage_0 *v65; // rax
  const google::protobuf::UnknownFieldSet *v66; // r12
  unsigned __int64 v67; // rdi
  google::protobuf::UnknownFieldSet *v68; // rdi
  struct _Unwind_Exception *v69; // rbx
  google::protobuf::internal::LogFinisher v70; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v71; // [rsp+10h] [rbp-58h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v71, LOGLEVEL_FATAL_0, "src/pb/packet_head.pb.cc", 1378);
    v65 = google::protobuf::internal::LogMessage::operator<<(&v71, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v70, v65);
    google::protobuf::internal::LogMessage::~LogMessage(&v71);
  }
  p_internal_metadata = &this->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
    ptr = __asan_report_load8(&from->_internal_metadata_);
  }
  else
  {
    ptr = (__int64)from->_internal_metadata_.ptr_;
    if ( (ptr & 1) == 0 )
      goto LABEL_5;
  }
  v66 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_internal_metadata);
    goto LABEL_134;
  }
  v67 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v67 & 1) == 0 )
  {
LABEL_134:
    v68 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_132;
  }
  v68 = (google::protobuf::UnknownFieldSet *)(v67 & 0xFFFFFFFFFFFFFFFELL);
LABEL_132:
  google::protobuf::UnknownFieldSet::MergeFrom(v68, v66);
LABEL_5:
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MergeFrom(
    &this->ext_map_,
    &from->ext_map_);
  p_service_app_id_map = (std::string *)&from->service_app_id_map_;
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MergeFrom(
    &this->service_app_id_map_,
    &from->service_app_id_map_);
  p_span_context_str = &from->span_context_str_;
  if ( *(_BYTE *)(((unsigned __int64)&from->span_context_str_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_span_context_str);
    goto LABEL_136;
  }
  p_service_app_id_map = from->span_context_str_.ptr_;
  p_span_context_str = (google::protobuf::internal::ArenaStringPtr *)&p_service_app_id_map->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&p_service_app_id_map->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_136:
    __asan_report_load8(p_span_context_str);
    goto LABEL_137;
  }
  if ( !p_service_app_id_map->_M_string_length )
    goto LABEL_13;
  p_span_context_str = &this->span_context_str_;
  if ( *(_BYTE *)(((unsigned __int64)&this->span_context_str_ >> 3) + 0x7FFF8000) )
  {
LABEL_137:
    __asan_report_load8(p_span_context_str);
    goto LABEL_138;
  }
  if ( this->span_context_str_.ptr_ != p_service_app_id_map )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_span_context_str >> 3) + 0x7FFF8000) )
    {
      if ( (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->span_context_str_.ptr_ != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        std::string::_M_assign(this->span_context_str_.ptr_, p_service_app_id_map);
        goto LABEL_13;
      }
LABEL_139:
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(p_span_context_str, p_service_app_id_map);
      goto LABEL_13;
    }
LABEL_138:
    __asan_report_load8(p_span_context_str);
    goto LABEL_139;
  }
LABEL_13:
  p_packet_id = &from->packet_id_;
  v9 = *(_BYTE *)(((unsigned __int64)&from->packet_id_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(p_packet_id);
    goto LABEL_141;
  }
  packet_id = from->packet_id_;
  if ( packet_id )
  {
    p_packet_id = &this->packet_id_;
    v11 = *(_BYTE *)(((unsigned __int64)&this->packet_id_ >> 3) + 0x7FFF8000);
    if ( !v11 || v11 > 3 )
    {
      this->packet_id_ = packet_id;
      goto LABEL_19;
    }
LABEL_141:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_142:
    __asan_report_load4(p_packet_id);
    goto LABEL_143;
  }
LABEL_19:
  p_packet_id = &from->rpc_id_;
  v12 = *(_BYTE *)(((unsigned __int64)&from->rpc_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)from - 84) & 7) + 3) >= v12 && v12 )
    goto LABEL_142;
  rpc_id = from->rpc_id_;
  if ( rpc_id )
  {
    p_packet_id = &this->rpc_id_;
    v14 = *(_BYTE *)(((unsigned __int64)&this->rpc_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 84) & 7) + 3) < v14 || !v14 )
    {
      this->rpc_id_ = rpc_id;
      goto LABEL_25;
    }
LABEL_143:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_144:
    __asan_report_load4(p_packet_id);
    goto LABEL_145;
  }
LABEL_25:
  p_packet_id = &from->client_sequence_id_;
  v15 = *(_BYTE *)(((unsigned __int64)&from->client_sequence_id_ >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_144;
  client_sequence_id = from->client_sequence_id_;
  if ( client_sequence_id )
  {
    p_packet_id = &this->client_sequence_id_;
    v17 = *(_BYTE *)(((unsigned __int64)&this->client_sequence_id_ >> 3) + 0x7FFF8000);
    if ( !v17 || v17 > 3 )
    {
      this->client_sequence_id_ = client_sequence_id;
      goto LABEL_31;
    }
LABEL_145:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_146:
    __asan_report_load4(p_packet_id);
    goto LABEL_147;
  }
LABEL_31:
  p_packet_id = &from->enet_channel_id_;
  v18 = *(_BYTE *)(((unsigned __int64)&from->enet_channel_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)from - 76) & 7) + 3) >= v18 && v18 )
    goto LABEL_146;
  enet_channel_id = from->enet_channel_id_;
  if ( !enet_channel_id )
    goto LABEL_37;
  p_packet_id = &this->enet_channel_id_;
  v20 = *(_BYTE *)(((unsigned __int64)&this->enet_channel_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 76) & 7) + 3) >= v20 && v20 )
  {
LABEL_147:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
    goto LABEL_148;
  }
  this->enet_channel_id_ = enet_channel_id;
LABEL_37:
  p_packet_id = &from->sent_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&from->sent_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_148:
    __asan_report_load8(p_packet_id);
    goto LABEL_149;
  }
  sent_ms = from->sent_ms_;
  if ( sent_ms )
  {
    p_packet_id = &this->sent_ms_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->sent_ms_ >> 3) + 0x7FFF8000) )
    {
      this->sent_ms_ = sent_ms;
      goto LABEL_41;
    }
LABEL_149:
    __asan_report_store8(p_packet_id, p_service_app_id_map);
LABEL_150:
    __asan_report_load4(p_packet_id);
    goto LABEL_151;
  }
LABEL_41:
  p_packet_id = &from->enet_is_reliable_;
  v22 = *(_BYTE *)(((unsigned __int64)&from->enet_is_reliable_ >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_150;
  enet_is_reliable = from->enet_is_reliable_;
  if ( enet_is_reliable )
  {
    p_packet_id = &this->enet_is_reliable_;
    v24 = *(_BYTE *)(((unsigned __int64)&this->enet_is_reliable_ >> 3) + 0x7FFF8000);
    if ( !v24 || v24 > 3 )
    {
      this->enet_is_reliable_ = enet_is_reliable;
      goto LABEL_47;
    }
LABEL_151:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_152:
    __asan_report_load4(p_packet_id);
    goto LABEL_153;
  }
LABEL_47:
  p_packet_id = &from->user_id_;
  v25 = *(_BYTE *)(((unsigned __int64)&from->user_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)from - 60) & 7) + 3) >= v25 && v25 )
    goto LABEL_152;
  user_id = from->user_id_;
  if ( user_id )
  {
    p_packet_id = &this->user_id_;
    v27 = *(_BYTE *)(((unsigned __int64)&this->user_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 60) & 7) + 3) < v27 || !v27 )
    {
      this->user_id_ = user_id;
      goto LABEL_53;
    }
LABEL_153:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_154:
    __asan_report_load4(p_packet_id);
    goto LABEL_155;
  }
LABEL_53:
  p_packet_id = &from->user_ip_;
  v28 = *(_BYTE *)(((unsigned __int64)&from->user_ip_ >> 3) + 0x7FFF8000);
  if ( v28 && v28 <= 3 )
    goto LABEL_154;
  user_ip = from->user_ip_;
  if ( user_ip )
  {
    p_packet_id = &this->user_ip_;
    v30 = *(_BYTE *)(((unsigned __int64)&this->user_ip_ >> 3) + 0x7FFF8000);
    if ( !v30 || v30 > 3 )
    {
      this->user_ip_ = user_ip;
      goto LABEL_59;
    }
LABEL_155:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_156:
    __asan_report_load4(p_packet_id);
    goto LABEL_157;
  }
LABEL_59:
  p_packet_id = &from->user_session_id_;
  v31 = *(_BYTE *)(((unsigned __int64)&from->user_session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)from - 52) & 7) + 3) >= v31 && v31 )
    goto LABEL_156;
  user_session_id = from->user_session_id_;
  if ( user_session_id )
  {
    p_packet_id = &this->user_session_id_;
    v33 = *(_BYTE *)(((unsigned __int64)&this->user_session_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 52) & 7) + 3) < v33 || !v33 )
    {
      this->user_session_id_ = user_session_id;
      goto LABEL_65;
    }
LABEL_157:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_158:
    __asan_report_load4(p_packet_id);
    goto LABEL_159;
  }
LABEL_65:
  p_packet_id = &from->home_user_id_;
  v34 = *(_BYTE *)(((unsigned __int64)&from->home_user_id_ >> 3) + 0x7FFF8000);
  if ( v34 && v34 <= 3 )
    goto LABEL_158;
  home_user_id = from->home_user_id_;
  if ( home_user_id )
  {
    p_packet_id = &this->home_user_id_;
    v36 = *(_BYTE *)(((unsigned __int64)&this->home_user_id_ >> 3) + 0x7FFF8000);
    if ( !v36 || v36 > 3 )
    {
      this->home_user_id_ = home_user_id;
      goto LABEL_71;
    }
LABEL_159:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_160:
    __asan_report_load4(p_packet_id);
    goto LABEL_161;
  }
LABEL_71:
  p_packet_id = &from->rpc_begin_time_ms_;
  v37 = *(_BYTE *)(((unsigned __int64)&from->rpc_begin_time_ms_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)from - 44) & 7) + 3) >= v37 && v37 )
    goto LABEL_160;
  rpc_begin_time_ms = from->rpc_begin_time_ms_;
  if ( !rpc_begin_time_ms )
    goto LABEL_77;
  p_packet_id = &this->rpc_begin_time_ms_;
  v39 = *(_BYTE *)(((unsigned __int64)&this->rpc_begin_time_ms_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v39 && v39 )
  {
LABEL_161:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
    goto LABEL_162;
  }
  this->rpc_begin_time_ms_ = rpc_begin_time_ms;
LABEL_77:
  p_packet_id = &from->recv_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&from->recv_time_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_162:
    __asan_report_load8(p_packet_id);
    goto LABEL_163;
  }
  recv_time_ms = from->recv_time_ms_;
  if ( recv_time_ms )
  {
    p_packet_id = &this->recv_time_ms_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->recv_time_ms_ >> 3) + 0x7FFF8000) )
    {
      this->recv_time_ms_ = recv_time_ms;
      goto LABEL_81;
    }
LABEL_163:
    __asan_report_store8(p_packet_id, p_service_app_id_map);
LABEL_164:
    __asan_report_load4(p_packet_id);
    goto LABEL_165;
  }
LABEL_81:
  p_packet_id = &from->multi_thread_index_;
  v41 = *(_BYTE *)(((unsigned __int64)&from->multi_thread_index_ >> 3) + 0x7FFF8000);
  if ( v41 && v41 <= 3 )
    goto LABEL_164;
  multi_thread_index = from->multi_thread_index_;
  if ( multi_thread_index )
  {
    p_packet_id = &this->multi_thread_index_;
    v43 = *(_BYTE *)(((unsigned __int64)&this->multi_thread_index_ >> 3) + 0x7FFF8000);
    if ( !v43 || v43 > 3 )
    {
      this->multi_thread_index_ = multi_thread_index;
      goto LABEL_87;
    }
LABEL_165:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_166:
    __asan_report_load4(p_packet_id);
    goto LABEL_167;
  }
LABEL_87:
  p_packet_id = &from->sender_app_id_;
  v44 = *(_BYTE *)(((unsigned __int64)&from->sender_app_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)from - 28) & 7) + 3) >= v44 && v44 )
    goto LABEL_166;
  sender_app_id = from->sender_app_id_;
  if ( sender_app_id )
  {
    p_packet_id = &this->sender_app_id_;
    v46 = *(_BYTE *)(((unsigned __int64)&this->sender_app_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 28) & 7) + 3) < v46 || !v46 )
    {
      this->sender_app_id_ = sender_app_id;
      goto LABEL_93;
    }
LABEL_167:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_168:
    __asan_report_load4(p_packet_id);
    goto LABEL_169;
  }
LABEL_93:
  p_packet_id = &from->sender_load_;
  v47 = *(_BYTE *)(((unsigned __int64)&from->sender_load_ >> 3) + 0x7FFF8000);
  if ( v47 && v47 <= 3 )
    goto LABEL_168;
  sender_load = from->sender_load_;
  if ( sender_load )
  {
    p_packet_id = &this->sender_load_;
    v49 = *(_BYTE *)(((unsigned __int64)&this->sender_load_ >> 3) + 0x7FFF8000);
    if ( !v49 || v49 > 3 )
    {
      this->sender_load_ = sender_load;
      goto LABEL_99;
    }
LABEL_169:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_170:
    __asan_report_load4(p_packet_id);
    goto LABEL_171;
  }
LABEL_99:
  p_packet_id = &from->source_service_;
  v50 = *(_BYTE *)(((unsigned __int64)&from->source_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)from - 20) & 7) + 3) >= v50 && v50 )
    goto LABEL_170;
  source_service = from->source_service_;
  if ( source_service )
  {
    p_packet_id = &this->source_service_;
    v52 = *(_BYTE *)(((unsigned __int64)&this->source_service_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 20) & 7) + 3) < v52 || !v52 )
    {
      this->source_service_ = source_service;
      goto LABEL_105;
    }
LABEL_171:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_172:
    __asan_report_load4(p_packet_id);
    goto LABEL_173;
  }
LABEL_105:
  p_packet_id = &from->target_service_;
  v53 = *(_BYTE *)(((unsigned __int64)&from->target_service_ >> 3) + 0x7FFF8000);
  if ( v53 && v53 <= 3 )
    goto LABEL_172;
  target_service = from->target_service_;
  if ( target_service )
  {
    p_packet_id = &this->target_service_;
    v55 = *(_BYTE *)(((unsigned __int64)&this->target_service_ >> 3) + 0x7FFF8000);
    if ( !v55 || v55 > 3 )
    {
      this->target_service_ = target_service;
      goto LABEL_111;
    }
LABEL_173:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
LABEL_174:
    __asan_report_load4(p_packet_id);
    goto LABEL_175;
  }
LABEL_111:
  p_packet_id = &from->game_thread_index_;
  v56 = *(unsigned __int8 *)(((unsigned __int64)&from->game_thread_index_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)from - 12) & 7) + 3) >= (char)v56 && (_BYTE)v56 )
    goto LABEL_174;
  game_thread_index = from->game_thread_index_;
  if ( !game_thread_index )
    goto LABEL_117;
  p_packet_id = &this->game_thread_index_;
  v58 = *(_BYTE *)(((unsigned __int64)&this->game_thread_index_ >> 3) + 0x7FFF8000);
  v56 = (((_BYTE)this - 12) & 7u) + 3;
  if ( (char)((((_BYTE)this - 12) & 7) + 3) >= v58 && v58 )
  {
LABEL_175:
    __asan_report_store4(p_packet_id, p_service_app_id_map);
    goto LABEL_176;
  }
  this->game_thread_index_ = game_thread_index;
LABEL_117:
  p_packet_id = &from->is_set_game_thread_;
  if ( *(char *)(((unsigned __int64)&from->is_set_game_thread_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_176:
    __asan_report_load1(p_packet_id, p_service_app_id_map, v56);
    goto LABEL_177;
  }
  is_set_game_thread = from->is_set_game_thread_;
  if ( is_set_game_thread )
  {
    p_packet_id = &this->is_set_game_thread_;
    v60 = *(unsigned __int8 *)(((unsigned __int64)&this->is_set_game_thread_ >> 3) + 0x7FFF8000);
    if ( (v60 & 0x80u) == 0LL )
    {
      this->is_set_game_thread_ = is_set_game_thread;
      goto LABEL_121;
    }
LABEL_177:
    __asan_report_store1(p_packet_id, p_service_app_id_map, v60);
LABEL_178:
    __asan_report_load1(p_packet_id, p_service_app_id_map, v62);
    goto LABEL_179;
  }
LABEL_121:
  p_packet_id = &from->is_set_multi_thread_;
  v61 = *(_BYTE *)(((unsigned __int64)&from->is_set_multi_thread_ >> 3) + 0x7FFF8000);
  v62 = ((_BYTE)from - 7) & 7;
  if ( v61 <= (char)v62 && v61 )
    goto LABEL_178;
  is_set_multi_thread = from->is_set_multi_thread_;
  if ( !is_set_multi_thread )
    return;
  p_packet_id = &this->is_set_multi_thread_;
  v64 = *(unsigned __int8 *)(((unsigned __int64)&this->is_set_multi_thread_ >> 3) + 0x7FFF8000);
  if ( (char)v64 <= (((unsigned __int8)this - 7) & 7) && (_BYTE)v64 )
  {
LABEL_179:
    v69 = (struct _Unwind_Exception *)__asan_report_store1(p_packet_id, p_service_app_id_map, v64);
    google::protobuf::internal::LogMessage::~LogMessage(&v71);
    __asan_handle_no_return(&v71);
    _Unwind_Resume(v69);
  }
  this->is_set_multi_thread_ = is_set_multi_thread;
};

// Line 1453: range 000000000C81FF34-000000000C81FF5C
void __fastcall proto::PacketHead::CopyFrom(proto::PacketHead *const this, const google::protobuf::Message *from)
{
  if ( this != from )
  {
    proto::PacketHead::Clear(this);
    proto::PacketHead::MergeFrom(this, from);
  }
};

// Line 1460: range 000000000C81FF5E-000000000C81FF86
void __fastcall proto::PacketHead::CopyFrom(proto::PacketHead *const this, const proto::PacketHead *from)
{
  if ( from != this )
  {
    proto::PacketHead::Clear(this);
    proto::PacketHead::MergeFrom(this, from);
  }
};

// Line 1473: range 000000000C81CED8-000000000C81D9F7
void __fastcall proto::PacketHead::InternalSwap(proto::PacketHead *const this, proto::PacketHead *other)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *p_service_app_id_map; // rsi
  unsigned __int64 p_span_context_str; // rdi
  std::string *ptr; // rax
  char v8; // dl
  google::protobuf::uint32 packet_id; // ecx
  char v10; // dl
  char v11; // dl
  google::protobuf::uint32 rpc_id; // ecx
  char v13; // dl
  char v14; // dl
  google::protobuf::uint32 client_sequence_id; // ecx
  char v16; // dl
  char v17; // dl
  google::protobuf::uint32 enet_channel_id; // ecx
  char v19; // dl
  google::protobuf::uint64 sent_ms; // rax
  char v21; // dl
  google::protobuf::uint32 enet_is_reliable; // ecx
  char v23; // dl
  char v24; // dl
  google::protobuf::uint32 user_id; // ecx
  char v26; // dl
  char v27; // dl
  google::protobuf::uint32 user_ip; // ecx
  char v29; // dl
  char v30; // dl
  google::protobuf::uint32 user_session_id; // ecx
  char v32; // dl
  char v33; // dl
  google::protobuf::uint32 home_user_id; // ecx
  char v35; // dl
  char v36; // dl
  google::protobuf::uint32 rpc_begin_time_ms; // ecx
  char v38; // dl
  google::protobuf::uint64 recv_time_ms; // rax
  char v40; // dl
  google::protobuf::uint32 multi_thread_index; // ecx
  char v42; // dl
  char v43; // dl
  google::protobuf::uint32 sender_app_id; // ecx
  char v45; // dl
  char v46; // dl
  google::protobuf::uint32 sender_load; // ecx
  char v48; // dl
  char v49; // dl
  google::protobuf::uint32 source_service; // ecx
  char v51; // dl
  char v52; // dl
  google::protobuf::uint32 target_service; // ecx
  char v54; // dl
  char v55; // dl
  google::protobuf::uint32 game_thread_index; // ecx
  char v57; // dl
  char v58; // al
  __int64 v59; // rdx
  _BOOL8 is_set_game_thread; // rdx
  char v61; // al
  char v62; // al
  __int64 v63; // rdx
  _BOOL8 is_set_multi_thread; // rdx
  char v65; // al
  google::protobuf::internal::InternalMetadataWithArena *v66; // rdi
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // r12
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  int *p_cached_size; // rdi
  char v73; // dl
  int cached_size; // ecx
  char v75; // dl

  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Swap(
    &this->ext_map_,
    &other->ext_map_);
  p_service_app_id_map = &other->service_app_id_map_;
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Swap(
    &this->service_app_id_map_,
    p_service_app_id_map);
  p_span_context_str = (unsigned __int64)&this->span_context_str_;
  if ( *(_BYTE *)((p_span_context_str >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_span_context_str);
    goto LABEL_98;
  }
  ptr = this->span_context_str_.ptr_;
  p_span_context_str = (unsigned __int64)&other->span_context_str_;
  if ( *(_BYTE *)(((unsigned __int64)&other->span_context_str_ >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8(p_span_context_str);
LABEL_99:
    __asan_report_load4(p_span_context_str);
LABEL_100:
    __asan_report_load4(p_span_context_str);
LABEL_101:
    __asan_report_load4(p_span_context_str);
LABEL_102:
    __asan_report_load4(p_span_context_str);
LABEL_103:
    __asan_report_load4(p_span_context_str);
LABEL_104:
    __asan_report_load4(p_span_context_str);
LABEL_105:
    __asan_report_load4(p_span_context_str);
LABEL_106:
    __asan_report_load4(p_span_context_str);
    goto LABEL_107;
  }
  this->span_context_str_.ptr_ = other->span_context_str_.ptr_;
  other->span_context_str_.ptr_ = ptr;
  p_span_context_str = (unsigned __int64)&this->packet_id_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->packet_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 88) & 7) + 3) >= v8 && v8 )
    goto LABEL_99;
  packet_id = this->packet_id_;
  p_span_context_str = (unsigned __int64)&other->packet_id_;
  v10 = *(_BYTE *)(((unsigned __int64)&other->packet_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 88) & 7) + 3) >= v10 && v10 )
    goto LABEL_100;
  this->packet_id_ = other->packet_id_;
  other->packet_id_ = packet_id;
  p_span_context_str = (unsigned __int64)&this->rpc_id_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->rpc_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 84) & 7) + 3) >= v11 && v11 )
    goto LABEL_101;
  rpc_id = this->rpc_id_;
  p_span_context_str = (unsigned __int64)&other->rpc_id_;
  v13 = *(_BYTE *)(((unsigned __int64)&other->rpc_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 84) & 7) + 3) >= v13 && v13 )
    goto LABEL_102;
  this->rpc_id_ = other->rpc_id_;
  other->rpc_id_ = rpc_id;
  p_span_context_str = (unsigned __int64)&this->client_sequence_id_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->client_sequence_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 80) & 7) + 3) >= v14 && v14 )
    goto LABEL_103;
  client_sequence_id = this->client_sequence_id_;
  p_span_context_str = (unsigned __int64)&other->client_sequence_id_;
  v16 = *(_BYTE *)(((unsigned __int64)&other->client_sequence_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 80) & 7) + 3) >= v16 && v16 )
    goto LABEL_104;
  this->client_sequence_id_ = other->client_sequence_id_;
  other->client_sequence_id_ = client_sequence_id;
  p_span_context_str = (unsigned __int64)&this->enet_channel_id_;
  v17 = *(_BYTE *)(((unsigned __int64)&this->enet_channel_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 76) & 7) + 3) >= v17 && v17 )
    goto LABEL_105;
  enet_channel_id = this->enet_channel_id_;
  p_span_context_str = (unsigned __int64)&other->enet_channel_id_;
  v19 = *(_BYTE *)(((unsigned __int64)&other->enet_channel_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 76) & 7) + 3) >= v19 && v19 )
    goto LABEL_106;
  this->enet_channel_id_ = other->enet_channel_id_;
  other->enet_channel_id_ = enet_channel_id;
  p_span_context_str = (unsigned __int64)&this->sent_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->sent_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_load8(p_span_context_str);
    goto LABEL_108;
  }
  sent_ms = this->sent_ms_;
  p_span_context_str = (unsigned __int64)&other->sent_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&other->sent_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_load8(p_span_context_str);
LABEL_109:
    __asan_report_load4(p_span_context_str);
LABEL_110:
    __asan_report_load4(p_span_context_str);
LABEL_111:
    __asan_report_load4(p_span_context_str);
LABEL_112:
    __asan_report_load4(p_span_context_str);
LABEL_113:
    __asan_report_load4(p_span_context_str);
LABEL_114:
    __asan_report_load4(p_span_context_str);
LABEL_115:
    __asan_report_load4(p_span_context_str);
LABEL_116:
    __asan_report_load4(p_span_context_str);
LABEL_117:
    __asan_report_load4(p_span_context_str);
LABEL_118:
    __asan_report_load4(p_span_context_str);
LABEL_119:
    __asan_report_load4(p_span_context_str);
LABEL_120:
    __asan_report_load4(p_span_context_str);
    goto LABEL_121;
  }
  this->sent_ms_ = other->sent_ms_;
  other->sent_ms_ = sent_ms;
  p_span_context_str = (unsigned __int64)&this->enet_is_reliable_;
  v21 = *(_BYTE *)(((unsigned __int64)&this->enet_is_reliable_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 64) & 7) + 3) >= v21 && v21 )
    goto LABEL_109;
  enet_is_reliable = this->enet_is_reliable_;
  p_span_context_str = (unsigned __int64)&other->enet_is_reliable_;
  v23 = *(_BYTE *)(((unsigned __int64)&other->enet_is_reliable_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 64) & 7) + 3) >= v23 && v23 )
    goto LABEL_110;
  this->enet_is_reliable_ = other->enet_is_reliable_;
  other->enet_is_reliable_ = enet_is_reliable;
  p_span_context_str = (unsigned __int64)&this->user_id_;
  v24 = *(_BYTE *)(((unsigned __int64)&this->user_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 60) & 7) + 3) >= v24 && v24 )
    goto LABEL_111;
  user_id = this->user_id_;
  p_span_context_str = (unsigned __int64)&other->user_id_;
  v26 = *(_BYTE *)(((unsigned __int64)&other->user_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 60) & 7) + 3) >= v26 && v26 )
    goto LABEL_112;
  this->user_id_ = other->user_id_;
  other->user_id_ = user_id;
  p_span_context_str = (unsigned __int64)&this->user_ip_;
  v27 = *(_BYTE *)(((unsigned __int64)&this->user_ip_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 56) & 7) + 3) >= v27 && v27 )
    goto LABEL_113;
  user_ip = this->user_ip_;
  p_span_context_str = (unsigned __int64)&other->user_ip_;
  v29 = *(_BYTE *)(((unsigned __int64)&other->user_ip_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 56) & 7) + 3) >= v29 && v29 )
    goto LABEL_114;
  this->user_ip_ = other->user_ip_;
  other->user_ip_ = user_ip;
  p_span_context_str = (unsigned __int64)&this->user_session_id_;
  v30 = *(_BYTE *)(((unsigned __int64)&this->user_session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 52) & 7) + 3) >= v30 && v30 )
    goto LABEL_115;
  user_session_id = this->user_session_id_;
  p_span_context_str = (unsigned __int64)&other->user_session_id_;
  v32 = *(_BYTE *)(((unsigned __int64)&other->user_session_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 52) & 7) + 3) >= v32 && v32 )
    goto LABEL_116;
  this->user_session_id_ = other->user_session_id_;
  other->user_session_id_ = user_session_id;
  p_span_context_str = (unsigned __int64)&this->home_user_id_;
  v33 = *(_BYTE *)(((unsigned __int64)&this->home_user_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 48) & 7) + 3) >= v33 && v33 )
    goto LABEL_117;
  home_user_id = this->home_user_id_;
  p_span_context_str = (unsigned __int64)&other->home_user_id_;
  v35 = *(_BYTE *)(((unsigned __int64)&other->home_user_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 48) & 7) + 3) >= v35 && v35 )
    goto LABEL_118;
  this->home_user_id_ = other->home_user_id_;
  other->home_user_id_ = home_user_id;
  p_span_context_str = (unsigned __int64)&this->rpc_begin_time_ms_;
  v36 = *(_BYTE *)(((unsigned __int64)&this->rpc_begin_time_ms_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 44) & 7) + 3) >= v36 && v36 )
    goto LABEL_119;
  rpc_begin_time_ms = this->rpc_begin_time_ms_;
  p_span_context_str = (unsigned __int64)&other->rpc_begin_time_ms_;
  v38 = *(_BYTE *)(((unsigned __int64)&other->rpc_begin_time_ms_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 44) & 7) + 3) >= v38 && v38 )
    goto LABEL_120;
  this->rpc_begin_time_ms_ = other->rpc_begin_time_ms_;
  other->rpc_begin_time_ms_ = rpc_begin_time_ms;
  p_span_context_str = (unsigned __int64)&this->recv_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_time_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_121:
    __asan_report_load8(p_span_context_str);
    goto LABEL_122;
  }
  recv_time_ms = this->recv_time_ms_;
  p_span_context_str = (unsigned __int64)&other->recv_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&other->recv_time_ms_ >> 3) + 0x7FFF8000) )
  {
LABEL_122:
    __asan_report_load8(p_span_context_str);
LABEL_123:
    __asan_report_load4(p_span_context_str);
LABEL_124:
    __asan_report_load4(p_span_context_str);
LABEL_125:
    __asan_report_load4(p_span_context_str);
LABEL_126:
    __asan_report_load4(p_span_context_str);
LABEL_127:
    __asan_report_load4(p_span_context_str);
LABEL_128:
    __asan_report_load4(p_span_context_str);
LABEL_129:
    __asan_report_load4(p_span_context_str);
LABEL_130:
    __asan_report_load4(p_span_context_str);
LABEL_131:
    __asan_report_load4(p_span_context_str);
LABEL_132:
    __asan_report_load4(p_span_context_str);
LABEL_133:
    __asan_report_load4(p_span_context_str);
LABEL_134:
    __asan_report_load4(p_span_context_str);
LABEL_135:
    __asan_report_load1(p_span_context_str, p_service_app_id_map, v59);
LABEL_136:
    __asan_report_load1(p_span_context_str, p_service_app_id_map, is_set_game_thread);
LABEL_137:
    __asan_report_load1(p_span_context_str, p_service_app_id_map, v63);
LABEL_138:
    __asan_report_load1(p_span_context_str, p_service_app_id_map, is_set_multi_thread);
    goto LABEL_139;
  }
  this->recv_time_ms_ = other->recv_time_ms_;
  other->recv_time_ms_ = recv_time_ms;
  p_span_context_str = (unsigned __int64)&this->multi_thread_index_;
  v40 = *(_BYTE *)(((unsigned __int64)&this->multi_thread_index_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 32) & 7) + 3) >= v40 && v40 )
    goto LABEL_123;
  multi_thread_index = this->multi_thread_index_;
  p_span_context_str = (unsigned __int64)&other->multi_thread_index_;
  v42 = *(_BYTE *)(((unsigned __int64)&other->multi_thread_index_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 32) & 7) + 3) >= v42 && v42 )
    goto LABEL_124;
  this->multi_thread_index_ = other->multi_thread_index_;
  other->multi_thread_index_ = multi_thread_index;
  p_span_context_str = (unsigned __int64)&this->sender_app_id_;
  v43 = *(_BYTE *)(((unsigned __int64)&this->sender_app_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 28) & 7) + 3) >= v43 && v43 )
    goto LABEL_125;
  sender_app_id = this->sender_app_id_;
  p_span_context_str = (unsigned __int64)&other->sender_app_id_;
  v45 = *(_BYTE *)(((unsigned __int64)&other->sender_app_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 28) & 7) + 3) >= v45 && v45 )
    goto LABEL_126;
  this->sender_app_id_ = other->sender_app_id_;
  other->sender_app_id_ = sender_app_id;
  p_span_context_str = (unsigned __int64)&this->sender_load_;
  v46 = *(_BYTE *)(((unsigned __int64)&this->sender_load_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 24) & 7) + 3) >= v46 && v46 )
    goto LABEL_127;
  sender_load = this->sender_load_;
  p_span_context_str = (unsigned __int64)&other->sender_load_;
  v48 = *(_BYTE *)(((unsigned __int64)&other->sender_load_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 24) & 7) + 3) >= v48 && v48 )
    goto LABEL_128;
  this->sender_load_ = other->sender_load_;
  other->sender_load_ = sender_load;
  p_span_context_str = (unsigned __int64)&this->source_service_;
  v49 = *(_BYTE *)(((unsigned __int64)&this->source_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 20) & 7) + 3) >= v49 && v49 )
    goto LABEL_129;
  source_service = this->source_service_;
  p_span_context_str = (unsigned __int64)&other->source_service_;
  v51 = *(_BYTE *)(((unsigned __int64)&other->source_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 20) & 7) + 3) >= v51 && v51 )
    goto LABEL_130;
  this->source_service_ = other->source_service_;
  other->source_service_ = source_service;
  p_span_context_str = (unsigned __int64)&this->target_service_;
  v52 = *(_BYTE *)(((unsigned __int64)&this->target_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 16) & 7) + 3) >= v52 && v52 )
    goto LABEL_131;
  target_service = this->target_service_;
  p_span_context_str = (unsigned __int64)&other->target_service_;
  v54 = *(_BYTE *)(((unsigned __int64)&other->target_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 16) & 7) + 3) >= v54 && v54 )
    goto LABEL_132;
  this->target_service_ = other->target_service_;
  other->target_service_ = target_service;
  p_span_context_str = (unsigned __int64)&this->game_thread_index_;
  v55 = *(_BYTE *)(((unsigned __int64)&this->game_thread_index_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 12) & 7) + 3) >= v55 && v55 )
    goto LABEL_133;
  game_thread_index = this->game_thread_index_;
  p_span_context_str = (unsigned __int64)&other->game_thread_index_;
  v57 = *(_BYTE *)(((unsigned __int64)&other->game_thread_index_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 12) & 7) + 3) >= v57 && v57 )
    goto LABEL_134;
  this->game_thread_index_ = other->game_thread_index_;
  other->game_thread_index_ = game_thread_index;
  p_span_context_str = (unsigned __int64)&this->is_set_game_thread_;
  v58 = *(_BYTE *)(((unsigned __int64)&this->is_set_game_thread_ >> 3) + 0x7FFF8000);
  v59 = ((_BYTE)this - 8) & 7;
  if ( v58 <= (char)v59 && v58 )
    goto LABEL_135;
  is_set_game_thread = this->is_set_game_thread_;
  p_span_context_str = (unsigned __int64)&other->is_set_game_thread_;
  v61 = *(_BYTE *)(((unsigned __int64)&other->is_set_game_thread_ >> 3) + 0x7FFF8000);
  if ( v61 <= (((unsigned __int8)other - 8) & 7) && v61 )
    goto LABEL_136;
  this->is_set_game_thread_ = other->is_set_game_thread_;
  other->is_set_game_thread_ = is_set_game_thread;
  p_span_context_str = (unsigned __int64)&this->is_set_multi_thread_;
  v62 = *(_BYTE *)(((unsigned __int64)&this->is_set_multi_thread_ >> 3) + 0x7FFF8000);
  v63 = ((_BYTE)this - 7) & 7;
  if ( v62 <= (char)v63 && v62 )
    goto LABEL_137;
  is_set_multi_thread = this->is_set_multi_thread_;
  p_span_context_str = (unsigned __int64)&other->is_set_multi_thread_;
  v65 = *(_BYTE *)(((unsigned __int64)&other->is_set_multi_thread_ >> 3) + 0x7FFF8000);
  if ( v65 <= (((unsigned __int8)other - 7) & 7) && v65 )
    goto LABEL_138;
  this->is_set_multi_thread_ = other->is_set_multi_thread_;
  other->is_set_multi_thread_ = is_set_multi_thread;
  p_internal_metadata = &this->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
LABEL_139:
    v66 = p_internal_metadata;
    __asan_report_load8(p_internal_metadata);
    goto LABEL_140;
  }
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    goto LABEL_83;
  v66 = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&other->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
LABEL_140:
    __asan_report_load8(v66);
    goto LABEL_141;
  }
  if ( ((__int64)other->_internal_metadata_.ptr_ & 1) != 0 )
  {
LABEL_83:
    v66 = &other->_internal_metadata_;
    if ( !*(_BYTE *)(((unsigned __int64)&other->_internal_metadata_ >> 3) + 0x7FFF8000) )
    {
      v67 = (unsigned __int64)other->_internal_metadata_.ptr_;
      if ( (v67 & 1) != 0 )
      {
        v68 = v67 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_86;
      }
LABEL_142:
      v68 = (unsigned __int64)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(v66);
LABEL_86:
      if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_internal_metadata);
      }
      else
      {
        v69 = (unsigned __int64)this->_internal_metadata_.ptr_;
        if ( (v69 & 1) != 0 )
        {
          v70 = v69 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_89;
        }
      }
      v70 = (unsigned __int64)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
LABEL_89:
      if ( *(_BYTE *)((v70 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v70);
      }
      else
      {
        v71 = *(_QWORD *)v70;
        if ( !*(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v70 = *(_QWORD *)v68;
          *(_QWORD *)v68 = v71;
          goto LABEL_92;
        }
      }
      p_cached_size = (int *)v68;
      __asan_report_load8(v68);
LABEL_147:
      __asan_report_load4(p_cached_size);
      goto LABEL_148;
    }
LABEL_141:
    __asan_report_load8(v66);
    goto LABEL_142;
  }
LABEL_92:
  p_cached_size = &this->_cached_size_;
  v73 = *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 4) & 7) + 3) >= v73 && v73 )
    goto LABEL_147;
  cached_size = this->_cached_size_;
  p_cached_size = &other->_cached_size_;
  v75 = *(_BYTE *)(((unsigned __int64)&other->_cached_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other - 4) & 7) + 3) >= v75 && v75 )
  {
LABEL_148:
    __asan_report_load4(p_cached_size);
    JUMPOUT(0xC81D9E3LL);
  }
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 1502: range 000000000C813F08-000000000C813F23
google::protobuf::Metadata __fastcall proto::PacketHead::GetMetadata(const proto::PacketHead *const this)
{
  proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::file_level_metadata[2];
};

// Line 1889: range 000000000C815490-000000000C815516
void __fastcall proto::DebugNotify::DebugNotify(proto::DebugNotify *const this)
{
  __int64 v1; // rsi
  proto::DebugNotify *v2; // rbx

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, v1);
    goto LABEL_6;
  }
  this->_vptr_MessageLite = (int (**)(...))(&`vtable for'proto::DebugNotify + 2);
  this = (proto::DebugNotify *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_store8(this, v1);
    goto LABEL_7;
  }
  v2->_internal_metadata_.ptr_ = 0LL;
  if ( v2 != (proto::DebugNotify *)&proto::_DebugNotify_default_instance_ )
    proto::protobuf_pb_2fpacket_5fhead_2eproto::InitDefaults();
LABEL_7:
  proto::DebugNotify::SharedCtor(v2);
};

// Line 1897: range 000000000C81600C-000000000C816290
void __fastcall proto::DebugNotify::DebugNotify(proto::DebugNotify *const this, const proto::DebugNotify *from)
{
  const proto::DebugNotify *v2; // rbp
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  proto::DebugNotify *v4; // rbx
  char v5; // al
  __int64 ptr; // rax
  google::protobuf::internal::ArenaStringPtr *p_name; // rdi
  const proto::DebugNotify *v8; // r12
  unsigned __int64 v9; // rdi
  google::protobuf::UnknownFieldSet *v10; // rdi
  google::protobuf::uint32 *p_id; // rdi
  struct _Unwind_Exception *v12; // rbx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, from);
    goto LABEL_16;
  }
  v2 = from;
  this->_vptr_MessageLite = (int (**)(...))(&`vtable for'proto::DebugNotify + 2);
  this = (proto::DebugNotify *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8(this, from);
LABEL_17:
    __asan_report_store4(this, from);
    goto LABEL_18;
  }
  v4->_internal_metadata_.ptr_ = 0LL;
  this = (proto::DebugNotify *const)&v4->_cached_size_;
  v5 = *(_BYTE *)(((unsigned __int64)&v4->_cached_size_ >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
    goto LABEL_17;
  v4->_cached_size_ = 0;
  p_internal_metadata = &v4->_internal_metadata_;
  this = (proto::DebugNotify *const)&from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    ptr = __asan_report_load8(this);
    goto LABEL_19;
  }
  ptr = (__int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) == 0 )
    goto LABEL_7;
LABEL_19:
  v8 = (const proto::DebugNotify *)(ptr & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_internal_metadata);
    goto LABEL_24;
  }
  v9 = (unsigned __int64)v4->_internal_metadata_.ptr_;
  if ( (v9 & 1) == 0 )
  {
LABEL_24:
    v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_22;
  }
  v10 = (google::protobuf::UnknownFieldSet *)(v9 & 0xFFFFFFFFFFFFFFFELL);
LABEL_22:
  from = v8;
  google::protobuf::UnknownFieldSet::MergeFrom(v10, (const google::protobuf::UnknownFieldSet *)v8);
LABEL_7:
  p_name = &v4->name_;
  if ( *(_BYTE *)(((unsigned __int64)&v4->name_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_name, from);
    goto LABEL_26;
  }
  v4->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  p_name = &v2->name_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->name_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_name);
    goto LABEL_27;
  }
  from = (const proto::DebugNotify *)v2->name_.ptr_;
  p_name = (google::protobuf::internal::ArenaStringPtr *)&from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_name);
    goto LABEL_28;
  }
  if ( from->_internal_metadata_.ptr_ )
  {
    p_name = &v4->name_;
    if ( from != (const proto::DebugNotify *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      if ( !*(_BYTE *)(((unsigned __int64)p_name >> 3) + 0x7FFF8000) )
      {
        if ( (google::protobuf::internal::ExplicitlyConstructed<std::string > *)v4->name_.ptr_ != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          std::string::_M_assign(v4->name_.ptr_, from);
          goto LABEL_30;
        }
LABEL_29:
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(p_name, (const std::string *)from);
        goto LABEL_30;
      }
LABEL_28:
      __asan_report_load8(p_name);
      goto LABEL_29;
    }
  }
LABEL_30:
  p_id = &v2->id_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v2->id_ >> 3) + 0x7FFF8000) <= (((unsigned __int8)v2 + 24) & 7)
    || *(_BYTE *)((((unsigned __int64)&v2->retcode_ + 3) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&v2->retcode_ + 3) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v2 + 31) & 7) )
  {
    __asan_report_load_n(p_id, 8LL);
    goto LABEL_36;
  }
  p_id = &v4->id_;
  if ( *(_BYTE *)(((unsigned __int64)&v4->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->id_ >> 3) + 0x7FFF8000) <= (((unsigned __int8)v4 + 24) & 7)
    || *(_BYTE *)((((unsigned __int64)&v4->retcode_ + 3) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&v4->retcode_ + 3) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v4 + 31) & 7) )
  {
LABEL_36:
    v12 = (struct _Unwind_Exception *)__asan_report_store_n(p_id, 8LL);
    google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(p_internal_metadata);
    __asan_handle_no_return(p_internal_metadata);
    _Unwind_Resume(v12);
  }
  *(_QWORD *)&v4->id_ = *(_QWORD *)&v2->id_;
};

// Line 1912: range 000000000C8152D0-000000000C815463
void __fastcall proto::DebugNotify::SharedCtor(proto::DebugNotify *const this)
{
  __int64 v1; // rsi
  unsigned __int64 p_name; // rdi
  char v4; // al

  p_name = (unsigned __int64)&this->name_;
  if ( *(_BYTE *)((p_name >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_name, v1);
    goto LABEL_6;
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  v1 = 0LL;
  memset(&this->id_, 0, 8uLL);
  p_name = (unsigned __int64)&this->_cached_size_;
  v4 = *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
LABEL_6:
    __asan_report_store4(p_name, v1);
    JUMPOUT(0xC815333LL);
  }
  this->_cached_size_ = 0;
};

// Line 1931: range 000000000C813D6A-000000000C813D99
// local variable allocation has failed, the output may be wrong!
void __fastcall proto::DebugNotify::SetCachedSize(const proto::DebugNotify *const this, int size)
{
  char v2; // al
  int *p_cached_size; // rdi

  v2 = *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000);
  if ( v2 && v2 <= 3 )
  {
    p_cached_size = &this->_cached_size_;
    __asan_report_store4(p_cached_size, *(_QWORD *)&size);
    proto::DebugNotify::IsInitialized((const proto::DebugNotify *const)p_cached_size);
  }
  else
  {
    this->_cached_size_ = size;
  }
};

// Line 1934: range 000000000C815464-000000000C815478
const google::protobuf::Descriptor *__cdecl proto::DebugNotify::descriptor()
{
  proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::file_level_metadata[3].descriptor;
};

// Line 1939: range 000000000C81547A-000000000C81548E
const proto::DebugNotify *__cdecl proto::DebugNotify::default_instance()
{
  proto::protobuf_pb_2fpacket_5fhead_2eproto::InitDefaults();
  return (const proto::DebugNotify *)&proto::_DebugNotify_default_instance_;
};

// Line 1944: range 000000000C815518-000000000C815568
proto::DebugNotify *__fastcall proto::DebugNotify::New(
        const proto::DebugNotify *const this,
        google::protobuf::Arena *arena)
{
  proto::DebugNotify *v2; // rbx

  v2 = (proto::DebugNotify *)operator new(0x28uLL);
  proto::DebugNotify::DebugNotify(v2);
  if ( arena )
    google::protobuf::Arena::Own<proto::DebugNotify>(arena, v2);
  return v2;
};

// Line 1952: range 000000000C815818-000000000C815C3F
void __fastcall proto::DebugNotify::Clear(proto::DebugNotify *const this)
{
  __int64 v1; // rsi
  google::protobuf::internal::ArenaStringPtr *p_name; // rdi
  unsigned __int64 ptr; // rdi
  __int64 v5; // rax
  char v6; // al
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi

  p_name = &this->name_;
  if ( *(_BYTE *)(((unsigned __int64)p_name >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load8(p_name);
LABEL_12:
    ptr = v5;
    __asan_report_store8(v5, v1);
    goto LABEL_13;
  }
  ptr = (unsigned __int64)this->name_.ptr_;
  if ( (google::protobuf::internal::ExplicitlyConstructed<std::string > *)ptr == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    goto LABEL_8;
  v5 = ptr + 8;
  if ( *(_BYTE *)(((ptr + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  *(_QWORD *)(ptr + 8) = 0LL;
  if ( *(_BYTE *)((ptr >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(ptr);
LABEL_14:
    __asan_report_store1(ptr, v1, v7);
    goto LABEL_15;
  }
  ptr = *(_QWORD *)ptr;
  v6 = *(_BYTE *)((ptr >> 3) + 0x7FFF8000);
  v7 = ptr & 7;
  if ( v6 <= (char)v7 && v6 )
    goto LABEL_14;
  *(_BYTE *)ptr = 0;
LABEL_8:
  memset(&this->id_, 0, 8uLL);
  ptr = (unsigned __int64)&this->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(ptr);
    goto LABEL_16;
  }
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 0 )
    return;
LABEL_16:
  if ( *(_BYTE *)((ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(ptr);
  }
  else
  {
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (v8 & 1) != 0 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_19;
    }
  }
  v9 = (unsigned __int64)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow((google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *const)ptr);
LABEL_19:
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v9);
    proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptors();
  }
  else if ( *(_QWORD *)v9 )
  {
    google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)v9);
  }
};

// Line 1966: range 000000000C815C42-000000000C816006
bool __fastcall proto::DebugNotify::MergePartialFromCodedStream(
        proto::DebugNotify *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned __int64 v2; // r13
  google::protobuf::io::CodedInputStream *v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  const google::protobuf::uint8 *buffer; // rdx
  unsigned __int64 v9; // rax
  google::protobuf::internal::ArenaStringPtr *p_name; // rdi
  const std::string *v11; // rax
  void *p_M_string_length; // rdi
  const char *v13; // r8
  std::string *ptr; // rax
  bool result; // al
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // rdi
  unsigned __int64 v17; // rdx
  google::protobuf::UnknownFieldSet *v18; // rdx
  google::protobuf::io::CodedInputStream *p_buffer_end; // rdi
  char v20; // al
  google::protobuf::uint32 TagFallback; // eax
  google::protobuf::uint32 v22; // ebp
  unsigned int v23; // eax
  bool Varint32; // al
  char v25; // dl
  unsigned __int64 v26; // [rsp+0h] [rbp-98h]
  int value; // [rsp+1Ch] [rbp-7Ch]
  char v28[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = input;
  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 4 temp";
  *(_QWORD *)(v5 + 16) = proto::DebugNotify::MergePartialFromCodedStream;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        p_buffer_end = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v4);
LABEL_6:
          __asan_report_load8(p_buffer_end);
LABEL_7:
          __asan_report_load1(p_buffer_end, input, buffer);
LABEL_8:
          v4->buffer_ = buffer + 1;
          v9 = (unsigned int)input | v26 & 0xFFFFFF0000000000LL | 0x100000000LL;
          v26 = v9;
          goto LABEL_41;
        }
        buffer = v4->buffer_;
        p_buffer_end = (google::protobuf::io::CodedInputStream *)&v4->buffer_end_;
        if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_end_ >> 3) + 0x7FFF8000) )
          goto LABEL_6;
        if ( v4->buffer_end_ <= buffer )
        {
          LODWORD(input) = 0;
        }
        else
        {
          p_buffer_end = (google::protobuf::io::CodedInputStream *)v4->buffer_;
          v20 = *(_BYTE *)(((unsigned __int64)buffer >> 3) + 0x7FFF8000);
          if ( v20 <= ((__int64)v4->buffer_ & 7) && v20 )
            goto LABEL_7;
          LODWORD(input) = *buffer;
          if ( *(char *)buffer > 0 )
            goto LABEL_8;
        }
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(v4, (google::protobuf::uint32)input);
        v9 = ((unsigned __int64)(TagFallback - 1 <= 0x7E) << 32) | TagFallback | v2 & 0xFFFFFF0000000000LL;
        v2 = v9;
LABEL_41:
        v22 = v9;
        if ( !BYTE4(v9) )
          goto handle_unusual;
        v23 = (unsigned int)v9 >> 3;
        if ( v23 != 2 )
          break;
        if ( (_BYTE)v22 != 18 )
          goto handle_unusual;
        p_name = &this->name_;
        if ( *(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
        {
          v11 = (const std::string *)__asan_report_load8(p_name);
        }
        else
        {
          v11 = (const std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
          if ( (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_ != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            goto LABEL_13;
        }
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(p_name, v11);
LABEL_13:
        p_M_string_length = &this->name_;
        if ( *(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_M_string_length);
LABEL_25:
          __asan_report_load8(p_M_string_length);
LABEL_26:
          __asan_report_load8(p_M_string_length);
LABEL_27:
          __asan_report_load8(p_M_string_length);
          goto LABEL_28;
        }
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(v4, this->name_.ptr_) )
          goto failure;
        p_M_string_length = &this->name_;
        if ( *(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
          goto LABEL_25;
        ptr = this->name_.ptr_;
        p_M_string_length = &ptr->_M_string_length;
        if ( *(_BYTE *)(((unsigned __int64)&ptr->_M_string_length >> 3) + 0x7FFF8000) )
          goto LABEL_26;
        input = (google::protobuf::io::CodedInputStream *)ptr->_M_string_length;
        p_M_string_length = this->name_.ptr_;
        if ( *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
          goto LABEL_27;
        if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                 (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
                                 (const char *)input,
                                 0,
                                 (google::protobuf::internal::WireFormatLite::Operation)"proto.DebugNotify.name",
                                 v13) )
          goto failure;
      }
      if ( v23 == 3 )
        break;
      if ( v23 == 1 && (_BYTE)v22 == 8 )
      {
        input = (google::protobuf::io::CodedInputStream *)&this->id_;
        if ( !google::protobuf::io::CodedInputStream::ReadVarint32(v4, &this->id_) )
          goto failure;
      }
      else
      {
handle_unusual:
        if ( !v22 )
          goto success;
        p_internal_metadata = &this->_internal_metadata_;
        if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_internal_metadata);
LABEL_57:
          v18 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
          goto LABEL_33;
        }
        v17 = (unsigned __int64)this->_internal_metadata_.ptr_;
        if ( (v17 & 1) == 0 )
          goto LABEL_57;
        v18 = (google::protobuf::UnknownFieldSet *)(v17 & 0xFFFFFFFFFFFFFFFELL);
LABEL_33:
        input = (google::protobuf::io::CodedInputStream *)v22;
        if ( !google::protobuf::internal::WireFormat::SkipField(v4, v22, v18) )
          goto failure;
      }
    }
LABEL_28:
    if ( (_BYTE)v22 != 24 )
      goto handle_unusual;
    input = (google::protobuf::io::CodedInputStream *)(v5 + 32);
    Varint32 = google::protobuf::io::CodedInputStream::ReadVarint32(v4, (google::protobuf::uint32 *)(v5 + 32));
    if ( Varint32 )
    {
      input = (google::protobuf::io::CodedInputStream *)*(unsigned int *)(v5 + 32);
      value = *(_DWORD *)(v5 + 32);
    }
    if ( !Varint32 )
    {
failure:
      result = 0;
      goto LABEL_20;
    }
    v25 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v25 )
    {
      if ( v25 )
        break;
    }
    this->retcode_ = value;
  }
  __asan_report_store4(&this->retcode_, input);
success:
  result = 1;
LABEL_20:
  if ( v28 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2041: range 000000000C8143DC-000000000C814590
void __fastcall proto::DebugNotify::SerializeWithCachedSizes(
        const proto::DebugNotify *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const char *v2; // r8
  google::protobuf::io::CodedOutputStream *v4; // rbp
  google::protobuf::uint32 *p_id; // rdi
  char v6; // al
  unsigned __int64 ptr; // rdi
  __int64 v8; // rax
  char v9; // dl
  unsigned __int64 v10; // rdi
  bool *v11; // rax
  __int64 v12; // rdx

  v4 = output;
  p_id = &this->id_;
  v6 = *(_BYTE *)(((unsigned __int64)p_id >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
  {
    __asan_report_load4(p_id);
  }
  else
  {
    output = (google::protobuf::io::CodedOutputStream *)this->id_;
    if ( !(_DWORD)output )
      goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(1, (google::protobuf::uint32)output, v4);
LABEL_4:
  if ( *(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load8(&this->name_);
    goto LABEL_19;
  }
  ptr = (unsigned __int64)this->name_.ptr_;
  v8 = ptr + 8;
  if ( *(_BYTE *)(((ptr + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    ptr = v8;
    __asan_report_load8(v8);
LABEL_20:
    if ( *(_BYTE *)((ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(ptr);
    }
    else
    {
      google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        *(google::protobuf::internal::WireFormatLite **)ptr,
        (const char *)output,
        1,
        (google::protobuf::internal::WireFormatLite::Operation)"proto.DebugNotify.name",
        v2);
      ptr = (unsigned __int64)&this->name_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
      {
        output = (google::protobuf::io::CodedOutputStream *)this->name_.ptr_;
        google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, output, v4);
        goto LABEL_7;
      }
    }
    __asan_report_load8(ptr);
    goto LABEL_25;
  }
  output = *(google::protobuf::io::CodedOutputStream **)(ptr + 8);
  if ( output )
    goto LABEL_20;
LABEL_7:
  ptr = (unsigned __int64)&this->retcode_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) < v9 || !v9 )
  {
    output = (google::protobuf::io::CodedOutputStream *)(unsigned int)this->retcode_;
    if ( !(_DWORD)output )
      goto LABEL_10;
    goto LABEL_26;
  }
LABEL_25:
  __asan_report_load4(ptr);
LABEL_26:
  google::protobuf::internal::WireFormatLite::WriteEnum(3, (google::protobuf::int32)output, v4);
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
    v11 = (bool *)__asan_report_load8(&this->_internal_metadata_);
LABEL_28:
    v10 = (unsigned __int64)v11;
    __asan_report_load1(v11, output, v12);
    goto LABEL_29;
  }
  v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v10 & 1) == 0 )
    return;
  v11 = &google::protobuf::internal::proto3_preserve_unknown_;
  v12 = *(unsigned __int8 *)(((unsigned __int64)&google::protobuf::internal::proto3_preserve_unknown_ >> 3) + 0x7FFF8000);
  if ( (char)v12 <= (char)((unsigned __int64)&google::protobuf::internal::proto3_preserve_unknown_ & 7) && (_BYTE)v12 )
    goto LABEL_28;
  if ( google::protobuf::internal::proto3_preserve_unknown_ )
LABEL_29:
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(v10 & 0xFFFFFFFFFFFFFFFELL),
      v4);
};

// Line 2111: range 000000000C813F7C-000000000C8143DA
size_t __fastcall proto::DebugNotify::ByteSizeLong(const proto::DebugNotify *const this)
{
  __int64 v1; // rsi
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // rdi
  unsigned __int64 ptr; // rdi
  bool *v5; // rax
  __int64 v6; // rdx
  size_t result; // rax
  void *p_name; // rdi
  std::string *v9; // rdx
  std::string::size_type M_string_length; // rcx
  unsigned int v11; // edx
  char v12; // dl
  google::protobuf::uint32 id; // edx
  char v14; // cl
  int retcode; // edx
  __int64 v16; // rdx
  char v17; // dl

  p_internal_metadata = &this->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
  {
    v5 = (bool *)__asan_report_load8(p_internal_metadata);
    goto LABEL_8;
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = &google::protobuf::internal::proto3_preserve_unknown_;
    v6 = *(unsigned __int8 *)(((unsigned __int64)&google::protobuf::internal::proto3_preserve_unknown_ >> 3) + 0x7FFF8000);
    if ( (char)v6 > (char)((unsigned __int64)&google::protobuf::internal::proto3_preserve_unknown_ & 7) || !(_BYTE)v6 )
    {
      if ( !google::protobuf::internal::proto3_preserve_unknown_ )
      {
        result = 0LL;
        goto LABEL_11;
      }
      goto LABEL_9;
    }
LABEL_8:
    ptr = (unsigned __int64)v5;
    __asan_report_load1(v5, v1, v6);
LABEL_9:
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
    goto LABEL_11;
  }
  result = 0LL;
LABEL_11:
  p_name = &this->name_;
  if ( *(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_name);
    goto LABEL_29;
  }
  v9 = this->name_.ptr_;
  p_name = &v9->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v9->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_name);
LABEL_30:
    __asan_report_load4(p_name);
LABEL_31:
    result = __asan_report_load4(p_name);
    goto LABEL_32;
  }
  M_string_length = v9->_M_string_length;
  if ( M_string_length )
  {
    _BitScanReverse(&v11, M_string_length | 1);
    result += M_string_length + ((9 * v11 + 73) >> 6) + 1;
  }
  p_name = &this->id_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_30;
  id = this->id_;
  if ( id )
  {
    _BitScanReverse(&id, id | 1);
    result += ((9 * id + 73) >> 6) + 1LL;
  }
  p_name = &this->retcode_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v14 && v14 )
    goto LABEL_31;
  retcode = this->retcode_;
  if ( retcode )
  {
    if ( retcode >= 0 )
    {
      _BitScanReverse((unsigned int *)&retcode, retcode | 1);
      v16 = (unsigned int)(9 * retcode + 73) >> 6;
LABEL_24:
      result += v16 + 1;
      goto LABEL_25;
    }
LABEL_32:
    v16 = 10LL;
    goto LABEL_24;
  }
LABEL_25:
  v17 = *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
  {
    __asan_report_store4(&this->_cached_size_, v1);
    JUMPOUT(0xC814103LL);
  }
  this->_cached_size_ = result;
  return result;
};

// Line 2147: range 000000000C816508-000000000C8165CD
void __fastcall proto::DebugNotify::MergeFrom(proto::DebugNotify *const this, const google::protobuf::Message *from)
{
  google::protobuf::Message *v3; // rdx
  const proto::DebugNotify *v4; // rsi
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+10h] [rbp-58h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v7, LOGLEVEL_FATAL_0, "src/pb/packet_head.pb.cc", 2149);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v7, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v6, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  }
  v4 = google::protobuf::internal::DynamicCastToGenerated<proto::DebugNotify const>(from);
  if ( v4 )
    proto::DebugNotify::MergeFrom(this, v4);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 2162: range 000000000C816296-000000000C816502
void __fastcall proto::DebugNotify::MergeFrom(proto::DebugNotify *const this, const proto::DebugNotify *from)
{
  const proto::DebugNotify *v3; // rbx
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // rdx
  __int64 ptr; // rax
  google::protobuf::internal::ArenaStringPtr *p_name; // rdi
  void *p_id; // rdi
  char v8; // al
  google::protobuf::uint32 id; // eax
  char v10; // dl
  char v11; // dl
  int retcode; // eax
  char v13; // cl
  const proto::DebugNotify *v14; // r12
  unsigned __int64 v15; // rdi
  google::protobuf::UnknownFieldSet *v16; // rdi
  struct _Unwind_Exception *v17; // rbx
  google::protobuf::internal::LogFinisher v18; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v19; // [rsp+10h] [rbp-58h] BYREF

  v3 = from;
  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v19, LOGLEVEL_FATAL_0, "src/pb/packet_head.pb.cc", 2164);
    from = (const proto::DebugNotify *)google::protobuf::internal::LogMessage::operator<<(
                                         &v19,
                                         "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v18, (google::protobuf::internal::LogMessage_0 *)from);
    google::protobuf::internal::LogMessage::~LogMessage(&v19);
  }
  p_internal_metadata = &this->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
    ptr = __asan_report_load8(&v3->_internal_metadata_);
  }
  else
  {
    ptr = (__int64)v3->_internal_metadata_.ptr_;
    if ( (ptr & 1) == 0 )
      goto LABEL_5;
  }
  v14 = (const proto::DebugNotify *)(ptr & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_internal_metadata);
    goto LABEL_32;
  }
  v15 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v15 & 1) == 0 )
  {
LABEL_32:
    v16 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_30;
  }
  v16 = (google::protobuf::UnknownFieldSet *)(v15 & 0xFFFFFFFFFFFFFFFELL);
LABEL_30:
  from = v14;
  google::protobuf::UnknownFieldSet::MergeFrom(v16, (const google::protobuf::UnknownFieldSet *)v14);
LABEL_5:
  p_name = &v3->name_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->name_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_name);
    goto LABEL_34;
  }
  from = (const proto::DebugNotify *)v3->name_.ptr_;
  p_name = (google::protobuf::internal::ArenaStringPtr *)&from->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&from->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_name);
    goto LABEL_35;
  }
  if ( !from->_internal_metadata_.ptr_ )
    goto LABEL_13;
  p_name = &this->name_;
  if ( *(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_name);
    goto LABEL_36;
  }
  if ( from != (const proto::DebugNotify *)this->name_.ptr_ )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_name >> 3) + 0x7FFF8000) )
    {
      if ( (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_ != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        std::string::_M_assign(this->name_.ptr_, from);
        goto LABEL_13;
      }
LABEL_37:
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(p_name, (const std::string *)from);
      goto LABEL_13;
    }
LABEL_36:
    __asan_report_load8(p_name);
    goto LABEL_37;
  }
LABEL_13:
  p_id = &v3->id_;
  v8 = *(_BYTE *)(((unsigned __int64)&v3->id_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_load4(p_id);
    goto LABEL_39;
  }
  id = v3->id_;
  if ( id )
  {
    p_id = &this->id_;
    v10 = *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000);
    if ( !v10 || v10 > 3 )
    {
      this->id_ = id;
      goto LABEL_19;
    }
LABEL_39:
    __asan_report_store4(p_id, from);
LABEL_40:
    __asan_report_load4(p_id);
    goto LABEL_41;
  }
LABEL_19:
  p_id = &v3->retcode_;
  v11 = *(_BYTE *)(((unsigned __int64)&v3->retcode_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 28) & 7) + 3) >= v11 && v11 )
    goto LABEL_40;
  retcode = v3->retcode_;
  if ( !retcode )
    return;
  p_id = &this->retcode_;
  v13 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v13 && v13 )
  {
LABEL_41:
    v17 = (struct _Unwind_Exception *)__asan_report_store4(p_id, from);
    google::protobuf::internal::LogMessage::~LogMessage(&v19);
    __asan_handle_no_return(&v19);
    _Unwind_Resume(v17);
  }
  this->retcode_ = retcode;
};

// Line 2183: range 000000000C8165D0-000000000C8165F8
void __fastcall proto::DebugNotify::CopyFrom(proto::DebugNotify *const this, const google::protobuf::Message *from)
{
  if ( this != from )
  {
    proto::DebugNotify::Clear(this);
    proto::DebugNotify::MergeFrom(this, from);
  }
};

// Line 2190: range 000000000C8165FA-000000000C816622
void __fastcall proto::DebugNotify::CopyFrom(proto::DebugNotify *const this, const proto::DebugNotify *from)
{
  if ( from != this )
  {
    proto::DebugNotify::Clear(this);
    proto::DebugNotify::MergeFrom(this, from);
  }
};

// Line 2203: range 000000000C81556E-000000000C815817
void __fastcall proto::DebugNotify::InternalSwap(proto::DebugNotify *const this, proto::DebugNotify *other)
{
  proto::DebugNotify *v2; // rbp
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  unsigned __int64 p_name; // rdi
  std::string *ptr; // rax
  char v7; // dl
  google::protobuf::uint32 id; // ecx
  char v9; // dl
  char v10; // dl
  int retcode; // ecx
  char v12; // dl
  google::protobuf::internal::InternalMetadataWithArena *v13; // rdi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  int *p_cached_size; // rdi
  char v20; // dl
  int cached_size; // ecx
  char v22; // dl

  p_name = (unsigned __int64)&this->name_;
  if ( *(_BYTE *)((p_name >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_name);
    goto LABEL_30;
  }
  v2 = other;
  ptr = this->name_.ptr_;
  p_name = (unsigned __int64)&other->name_;
  if ( *(_BYTE *)(((unsigned __int64)&other->name_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_name);
LABEL_31:
    __asan_report_load4(p_name);
LABEL_32:
    __asan_report_load4(p_name);
LABEL_33:
    __asan_report_load4(p_name);
LABEL_34:
    __asan_report_load4(p_name);
    goto LABEL_35;
  }
  this->name_.ptr_ = other->name_.ptr_;
  other->name_.ptr_ = ptr;
  p_name = (unsigned __int64)&this->id_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v7 && v7 )
    goto LABEL_31;
  id = this->id_;
  p_name = (unsigned __int64)&other->id_;
  v9 = *(_BYTE *)(((unsigned __int64)&other->id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 24) & 7) + 3) >= v9 && v9 )
    goto LABEL_32;
  this->id_ = other->id_;
  other->id_ = id;
  p_name = (unsigned __int64)&this->retcode_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v10 && v10 )
    goto LABEL_33;
  retcode = this->retcode_;
  p_name = (unsigned __int64)&other->retcode_;
  v12 = *(_BYTE *)(((unsigned __int64)&other->retcode_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 28) & 7) + 3) >= v12 && v12 )
    goto LABEL_34;
  this->retcode_ = other->retcode_;
  other->retcode_ = retcode;
  p_internal_metadata = &this->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&this->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    v13 = p_internal_metadata;
    __asan_report_load8(p_internal_metadata);
    goto LABEL_36;
  }
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    goto LABEL_15;
  v13 = &other->_internal_metadata_;
  if ( *(_BYTE *)(((unsigned __int64)&other->_internal_metadata_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(v13);
    goto LABEL_37;
  }
  if ( ((__int64)other->_internal_metadata_.ptr_ & 1) != 0 )
  {
LABEL_15:
    v13 = &other->_internal_metadata_;
    if ( !*(_BYTE *)(((unsigned __int64)&other->_internal_metadata_ >> 3) + 0x7FFF8000) )
    {
      v14 = (unsigned __int64)other->_internal_metadata_.ptr_;
      if ( (v14 & 1) != 0 )
      {
        v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_18;
      }
LABEL_38:
      v15 = (unsigned __int64)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(v13);
LABEL_18:
      if ( *(_BYTE *)(((unsigned __int64)p_internal_metadata >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_internal_metadata);
      }
      else
      {
        v16 = (unsigned __int64)this->_internal_metadata_.ptr_;
        if ( (v16 & 1) != 0 )
        {
          v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_21;
        }
      }
      v17 = (unsigned __int64)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
LABEL_21:
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v17);
      }
      else
      {
        v18 = *(_QWORD *)v17;
        if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v17 = *(_QWORD *)v15;
          *(_QWORD *)v15 = v18;
          goto LABEL_24;
        }
      }
      p_cached_size = (int *)v15;
      __asan_report_load8(v15);
LABEL_43:
      __asan_report_load4(p_cached_size);
      goto LABEL_44;
    }
LABEL_37:
    __asan_report_load8(v13);
    goto LABEL_38;
  }
LABEL_24:
  p_cached_size = &this->_cached_size_;
  v20 = *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 32) & 7) + 3) >= v20 && v20 )
    goto LABEL_43;
  cached_size = this->_cached_size_;
  p_cached_size = &v2->_cached_size_;
  v22 = *(_BYTE *)(((unsigned __int64)&v2->_cached_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 32) & 7) + 3) >= v22 && v22 )
  {
LABEL_44:
    __asan_report_load4(p_cached_size);
    JUMPOUT(0xC815803LL);
  }
  this->_cached_size_ = v2->_cached_size_;
  v2->_cached_size_ = cached_size;
};

// Line 2212: range 000000000C813F24-000000000C813F3F
google::protobuf::Metadata __fastcall proto::DebugNotify::GetMetadata(const proto::DebugNotify *const this)
{
  proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce();
  return proto::protobuf_pb_2fpacket_5fhead_2eproto::`anonymous namespace'::file_level_metadata[3];
};

// Line 2305: range 000000000C81FF87-000000000C81FF9E
void __cdecl GLOBAL__sub_I_packet_head_pb_cc()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 2305: range 000000000C814833-000000000C814882
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/pb/packet_head.pb.cc");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      proto::protobuf_pb_2fpacket_5fhead_2eproto::AddDescriptors();
    }
    __asan_after_dynamic_init();
  }
};

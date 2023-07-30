// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/any.cc

// Line 56: range 000000000C8F2AC0-000000000C8F2AC7
void __fastcall google::protobuf::internal::AnyMetadata::AnyMetadata(
        google::protobuf::internal::AnyMetadata *const this,
        google::protobuf::internal::AnyMetadata::UrlType *type_url,
        google::protobuf::internal::AnyMetadata::ValueType *value)
{
  this->type_url_ = type_url;
  this->value_ = value;
};

// Line 59: range 000000000C8F3170-000000000C8F31C1
void __fastcall google::protobuf::internal::AnyMetadata::PackFrom(
        google::protobuf::internal::AnyMetadata *this,
        const google::protobuf::Message *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  std::string v4; // [rsp+0h] [rbp-38h] BYREF

  v4._M_dataplus._M_p = v4._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v4, "type.googleapis.com/", "", a4);
  google::protobuf::internal::AnyMetadata::PackFrom(this, a2, &v4);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4._M_dataplus._M_p != &v4._anon_0 )
    operator delete(v4._M_dataplus._M_p);
};

// Line 64: range 000000000C8F2E10-000000000C8F3162
bool __fastcall google::protobuf::internal::AnyMetadata::PackFrom(
        google::protobuf::internal::ExplicitlyConstructed<std::string > ***a1,
        const google::protobuf::MessageLite *a2,
        __int64 a3)
{
  __int64 v6; // rax
  std::forward_iterator_tag v7; // cl
  __int64 v8; // rdx
  char *v9; // rsi
  __int64 v10; // r14
  char *v11; // r8
  __int64 v12; // rax
  std::string::size_type v13; // rcx
  std::string *M_p; // rdi
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v15; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *align_to_int64; // rdi
  std::string::size_type M_string_length; // rdx
  std::string::size_type v18; // rcx
  google::protobuf::internal::ExplicitlyConstructed<std::string > **v19; // rbx
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v20; // rsi
  __m128i *v22; // rax
  google::protobuf::internal::ExplicitlyConstructed<std::string > **v23; // [rsp+8h] [rbp-80h]
  std::string v24; // [rsp+10h] [rbp-78h] BYREF
  std::string v25; // [rsp+30h] [rbp-58h] BYREF

  v23 = *a1;
  v6 = (*((__int64 (__fastcall **)(const google::protobuf::MessageLite *))a2->_vptr_MessageLite + 24))(a2);
  v8 = *(_QWORD *)(a3 + 8);
  v9 = *(char **)a3;
  v10 = *(_QWORD *)(v6 + 8);
  if ( v8 )
  {
    v11 = &v9[v8];
    if ( v9[v8 - 1] == 47 )
    {
      v24._M_dataplus._M_p = v24._anon_0._M_local_buf;
      std::string::_M_construct<char *>(&v24, v9, &v9[v8], v7);
      std::string::_M_append(&v24, *(const char **)v10, *(_QWORD *)(v10 + 8));
      goto LABEL_8;
    }
  }
  else
  {
    v11 = *(char **)a3;
  }
  v25._M_dataplus._M_p = v25._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&v25, v9, v11, v7);
  if ( v25._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v25, dirsep, 1LL);
  v12 = std::string::_M_append(&v25, *(const char **)v10, *(_QWORD *)(v10 + 8));
  v24._M_dataplus._M_p = v24._anon_0._M_local_buf;
  if ( *(_QWORD *)v12 == v12 + 16 )
  {
    v24._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v12 + 16));
  }
  else
  {
    v24._M_dataplus._M_p = *(std::string::pointer *)v12;
    v24._anon_0._M_allocated_capacity = *(_QWORD *)(v12 + 16);
  }
  v13 = *(_QWORD *)(v12 + 8);
  *(_BYTE *)(v12 + 16) = 0;
  v24._M_string_length = v13;
  *(_QWORD *)v12 = v12 + 16;
  M_p = (std::string *)v25._M_dataplus._M_p;
  *(_QWORD *)(v12 + 8) = 0LL;
  if ( M_p != (std::string *)&v25._anon_0 )
    operator delete(M_p);
LABEL_8:
  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v25._M_dataplus._M_p = (std::string::pointer)off_1A16E058;
    v25._anon_0._M_local_buf[0] = 0;
    v25._M_string_length = (std::string::size_type)google::protobuf::internal::InitEmptyString;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::internal::empty_string_once_init_,
      (google::protobuf::Closure *)&v25);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v25);
  }
  v15 = *v23;
  if ( *v23 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    v22 = (__m128i *)operator new(0x20uLL);
    v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24._M_dataplus._M_p == &v24._anon_0 )
    {
      v22[1] = _mm_load_si128((const __m128i *)&v24._anon_0);
    }
    else
    {
      v22->m128i_i64[0] = (__int64)v24._M_dataplus._M_p;
      v22[1].m128i_i64[0] = v24._anon_0._M_allocated_capacity;
    }
    v19 = a1[1];
    v22->m128i_i64[1] = v24._M_string_length;
    *v23 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)v22;
    v20 = *v19;
    if ( *v19 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      return google::protobuf::MessageLite::SerializeToString(a2, (std::string *)v20);
LABEL_28:
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(v19);
    v20 = *v19;
    return google::protobuf::MessageLite::SerializeToString(a2, (std::string *)v20);
  }
  align_to_int64 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15->union_.align_to_int64;
  M_string_length = v24._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24._M_dataplus._M_p == &v24._anon_0 )
  {
    if ( v24._M_string_length )
    {
      if ( v24._M_string_length == 1 )
        align_to_int64->_M_local_buf[0] = v24._anon_0._M_local_buf[0];
      else
        memcpy(align_to_int64, &v24._anon_0, v24._M_string_length);
      M_string_length = v24._M_string_length;
      align_to_int64 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15->union_.align_to_int64;
    }
    *((_QWORD *)&v15->union_.align_to_ptr + 1) = M_string_length;
    align_to_int64->_M_local_buf[M_string_length] = 0;
    align_to_int64 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24._M_dataplus._M_p;
  }
  else
  {
    if ( align_to_int64 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(&v15->union_.align_to_ptr + 2) )
    {
      v15->union_.align_to_int64 = (google::protobuf::int64)v24._M_dataplus._M_p;
      *((_QWORD *)&v15->union_.align_to_ptr + 1) = M_string_length;
      *((_QWORD *)&v15->union_.align_to_ptr + 2) = v24._anon_0._M_allocated_capacity;
    }
    else
    {
      v15->union_.align_to_int64 = (google::protobuf::int64)v24._M_dataplus._M_p;
      v18 = *((_QWORD *)&v15->union_.align_to_ptr + 2);
      *((_QWORD *)&v15->union_.align_to_ptr + 1) = M_string_length;
      *((_QWORD *)&v15->union_.align_to_ptr + 2) = v24._anon_0._M_allocated_capacity;
      if ( align_to_int64 )
      {
        v24._M_dataplus._M_p = (std::string::pointer)align_to_int64;
        v24._anon_0._M_allocated_capacity = v18;
        goto LABEL_15;
      }
    }
    v24._M_dataplus._M_p = v24._anon_0._M_local_buf;
    align_to_int64 = &v24._anon_0;
  }
LABEL_15:
  v24._M_string_length = 0LL;
  align_to_int64->_M_local_buf[0] = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24._M_dataplus._M_p != &v24._anon_0 )
    operator delete(v24._M_dataplus._M_p);
  v19 = a1[1];
  v20 = *v19;
  if ( *v19 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    goto LABEL_28;
  return google::protobuf::MessageLite::SerializeToString(a2, (std::string *)v20);
};

// Line 71: range 000000000C8F2D70-000000000C8F2DB0
bool __fastcall google::protobuf::internal::AnyMetadata::UnpackTo(
        const google::protobuf::internal::AnyMetadata *const this,
        google::protobuf::Message *message)
{
  const google::protobuf::Descriptor *v2; // rax

  v2 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(google::protobuf::Message *))message->_vptr_MessageLite
                                              + 24))(message);
  if ( (unsigned __int8)google::protobuf::internal::AnyMetadata::InternalIs(
                          (google::protobuf::internal::AnyMetadata *)this,
                          v2) )
    return google::protobuf::MessageLite::ParseFromString(message, this->value_->ptr_);
  else
    return 0;
};

// Line 78: range 000000000C8F2CB0-000000000C8F2D6B
__int64 __fastcall google::protobuf::internal::AnyMetadata::InternalIs(
        google::protobuf::internal::AnyMetadata *this,
        const google::protobuf::Descriptor *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  std::string *ptr; // rax
  unsigned int v5; // eax
  std::string *M_p; // r14
  unsigned int v7; // r12d
  const std::string *full_name; // rax
  std::string v10; // [rsp+0h] [rbp-68h] BYREF
  std::string full_type_name; // [rsp+20h] [rbp-48h] BYREF

  ptr = this->type_url_->ptr_;
  v10._M_dataplus._M_p = v10._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&v10, ptr->_M_dataplus._M_p, &ptr->_M_dataplus._M_p[ptr->_M_string_length], a4);
  full_type_name._M_dataplus._M_p = full_type_name._anon_0._M_local_buf;
  full_type_name._M_string_length = 0LL;
  full_type_name._anon_0._M_local_buf[0] = 0;
  LOBYTE(v5) = google::protobuf::internal::ParseAnyTypeUrl(&v10, &full_type_name);
  M_p = (std::string *)full_type_name._M_dataplus._M_p;
  v7 = v5;
  if ( (_BYTE)v5 )
  {
    full_name = a2->full_name_;
    if ( full_type_name._M_string_length == full_name->_M_string_length )
    {
      if ( full_type_name._M_string_length )
        LOBYTE(v7) = memcmp(
                       full_type_name._M_dataplus._M_p,
                       full_name->_M_dataplus._M_p,
                       full_type_name._M_string_length) == 0;
    }
    else
    {
      v7 = 0;
    }
  }
  if ( M_p != (std::string *)&full_type_name._anon_0 )
    operator delete(M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p != &v10._anon_0 )
    operator delete(v10._M_dataplus._M_p);
  return v7;
};

// Line 87: range 000000000C8F2B50-000000000C8F2CA3
bool __fastcall google::protobuf::internal::ParseAnyTypeUrl(const std::string *type_url, std::string *full_type_name)
{
  __int64 last_of; // rax
  std::forward_iterator_tag v4; // cl
  std::string::size_type M_string_length; // rdx
  std::string::size_type v6; // rax
  std::string::pointer M_p; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::string::size_type v9; // rsi
  std::string::size_type M_allocated_capacity; // rcx
  std::string::size_type v11; // rdx
  std::string::size_type v13; // rdx
  std::string v14; // [rsp+0h] [rbp-38h] BYREF

  last_of = std::string::find_last_of(type_url, dirsep, -1LL, 1LL);
  if ( last_of == -1 )
    return 0;
  M_string_length = type_url->_M_string_length;
  v6 = last_of + 1;
  if ( v6 == M_string_length )
    return 0;
  if ( v6 > M_string_length )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      v6,
      type_url->_M_string_length);
  M_p = type_url->_M_dataplus._M_p;
  v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v14, &M_p[v6], &M_p[M_string_length], v4);
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)full_type_name->_M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p == &v14._anon_0 )
  {
    v13 = v14._M_string_length;
    if ( v14._M_string_length )
    {
      if ( v14._M_string_length == 1 )
        p_anon_0->_M_local_buf[0] = v14._anon_0._M_local_buf[0];
      else
        memcpy(p_anon_0, &v14._anon_0, v14._M_string_length);
      v13 = v14._M_string_length;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)full_type_name->_M_dataplus._M_p;
    }
    full_type_name->_M_string_length = v13;
    p_anon_0->_M_local_buf[v13] = 0;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p;
    goto LABEL_8;
  }
  v9 = v14._M_string_length;
  M_allocated_capacity = v14._anon_0._M_allocated_capacity;
  if ( p_anon_0 == &full_type_name->_anon_0 )
  {
    full_type_name->_M_dataplus._M_p = v14._M_dataplus._M_p;
    full_type_name->_M_string_length = v9;
    full_type_name->_anon_0._M_allocated_capacity = M_allocated_capacity;
    goto LABEL_18;
  }
  v11 = full_type_name->_anon_0._M_allocated_capacity;
  full_type_name->_M_dataplus._M_p = v14._M_dataplus._M_p;
  full_type_name->_M_string_length = v9;
  full_type_name->_anon_0._M_allocated_capacity = M_allocated_capacity;
  if ( !p_anon_0 )
  {
LABEL_18:
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    p_anon_0 = &v14._anon_0;
    goto LABEL_8;
  }
  v14._M_dataplus._M_p = (std::string::pointer)p_anon_0;
  v14._anon_0._M_allocated_capacity = v11;
LABEL_8:
  v14._M_string_length = 0LL;
  p_anon_0->_M_local_buf[0] = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
    operator delete(v14._M_dataplus._M_p);
  return 1;
};

// Line 99: range 000000000C8F2AD0-000000000C8F2B47
bool __fastcall google::protobuf::internal::GetAnyFieldDescriptors(
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor **type_url_field,
        const google::protobuf::FieldDescriptor **value_field)
{
  const google::protobuf::Descriptor *v4; // rbp
  bool result; // al

  v4 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(const google::protobuf::Message *))message->_vptr_MessageLite
                                              + 24))(message);
  result = !(unsigned int)std::string::compare(v4->full_name_, "google.protobuf.Any")
        && (*type_url_field = google::protobuf::Descriptor::FindFieldByNumber(v4, 1),
            *value_field = google::protobuf::Descriptor::FindFieldByNumber(v4, 2),
            *type_url_field)
        && (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)*type_url_field) == 9
        && *value_field
        && (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)*value_field) == 12;
  return result;
};

// Line 114: range 000000000C746EC0-000000000C746EE1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal16kAnyFullTypeNameE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};

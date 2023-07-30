// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/protostream_objectsource.cc

// Line 115: range 000000000C95D970-000000000C95DA33
void __fastcall google::protobuf::util::converter::ProtoStreamObjectSource::ProtoStreamObjectSource(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        google::protobuf::io::CodedInputStream *a2,
        google::protobuf::util::TypeResolver *a3,
        const google::protobuf::Type *a4)
{
  google::protobuf::util::converter::TypeInfo *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v8; // [rsp+10h] [rbp-58h] BYREF

  this->_vptr_ObjectSource = (int (**)(...))off_1A184BC8;
  this->stream_ = a2;
  v5 = google::protobuf::util::converter::TypeInfo::NewTypeInfo(a3);
  this->own_typeinfo_ = 1;
  this->typeinfo_ = v5;
  *(_WORD *)&this->use_lower_camel_for_enums_ = 0;
  this->type_ = a4;
  this->preserve_proto_field_names_ = 0;
  *(_QWORD *)&this->recursion_depth_ = 0x4000000000LL;
  *(_WORD *)&this->render_unknown_fields_ = 256;
  this->add_trailing_zeros_for_timestamp_and_duration_ = 0;
  if ( !a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      LOGLEVEL_ERROR_0,
      "google/protobuf/util/internal/protostream_objectsource.cc",
      130);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "Input stream is NULL.");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
};

// Line 130: range 000000000C7334BE-000000000C7334CB
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::ProtoStreamObjectSource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 147: range 000000000C95DA40-000000000C95DAE5
void __fastcall google::protobuf::util::converter::ProtoStreamObjectSource::ProtoStreamObjectSource(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        google::protobuf::io::CodedInputStream *a2,
        const google::protobuf::util::converter::TypeInfo *a3,
        const google::protobuf::Type *a4)
{
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogFinisher v5; // [rsp+1h] [rbp-49h] BYREF
  google::protobuf::internal::LogMessage_0 v6; // [rsp+2h] [rbp-48h] BYREF

  this->typeinfo_ = a3;
  *(_WORD *)&this->use_lower_camel_for_enums_ = 0;
  this->_vptr_ObjectSource = (int (**)(...))off_1A184BC8;
  this->stream_ = a2;
  this->own_typeinfo_ = 0;
  this->type_ = a4;
  this->preserve_proto_field_names_ = 0;
  *(_QWORD *)&this->recursion_depth_ = 0x4000000000LL;
  *(_WORD *)&this->render_unknown_fields_ = 256;
  this->add_trailing_zeros_for_timestamp_and_duration_ = 0;
  if ( !a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      LOGLEVEL_ERROR_0,
      "google/protobuf/util/internal/protostream_objectsource.cc",
      148);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v6, "Input stream is NULL.");
    google::protobuf::internal::LogFinisher::operator=(&v5, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  }
};

// Line 148: range 000000000C7334D0-000000000C7334DD
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::ProtoStreamObjectSource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 151: range 000000000C95CDB0-000000000C95CDCF
void __fastcall google::protobuf::util::converter::ProtoStreamObjectSource::~ProtoStreamObjectSource(
        google::protobuf::util::converter::ProtoStreamObjectSource *const this)
{
  bool v1; // zf

  v1 = !this->own_typeinfo_;
  this->_vptr_ObjectSource = (int (**)(...))off_1A184BC8;
  if ( !v1 )
    google::protobuf::util::converter::ProtoStreamObjectSource::~ProtoStreamObjectSource(this);
  operator delete(this, 0x38uLL);
};

// Line 152: range 000000000C95CD90-000000000C95CDA0
void __fastcall google::protobuf::util::converter::ProtoStreamObjectSource::~ProtoStreamObjectSource(
        google::protobuf::util::converter::ProtoStreamObjectSource *const this)
{
  bool v1; // zf

  v1 = !this->own_typeinfo_;
  this->_vptr_ObjectSource = (int (**)(...))off_1A184BC8;
  if ( !v1 )
    google::protobuf::util::converter::ProtoStreamObjectSource::~ProtoStreamObjectSource(this);
};

// Line 153: range 000000000C95CD70-000000000C95CD80
void __fastcall google::protobuf::util::converter::ProtoStreamObjectSource::~ProtoStreamObjectSource(
        google::protobuf::util::converter::ProtoStreamObjectSource *const this)
{
  const google::protobuf::util::converter::TypeInfo *typeinfo; // rdi

  typeinfo = this->typeinfo_;
  if ( typeinfo )
    (*((void (__fastcall **)(const google::protobuf::util::converter::TypeInfo *))typeinfo->_vptr_TypeInfo + 1))(typeinfo);
};

// Line 158: range 000000000C95CD40-000000000C95CD6E
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::NamedWriteTo(
        google::protobuf::util::Status *retstr,
        const google::protobuf::util::converter::ProtoStreamObjectSource *const this,
        google::protobuf::StringPiece name,
        google::protobuf::util::converter::ObjectWriter *ow)
{
  (*((void (__fastcall **)(google::protobuf::util::Status *, const google::protobuf::util::converter::ProtoStreamObjectSource *const, const google::protobuf::Type *, const char *, google::protobuf::stringpiece_ssize_type, _QWORD, __int64, google::protobuf::util::converter::ObjectWriter *))this->_vptr_ObjectSource
   + 4))(
    retstr,
    this,
    this->type_,
    name.ptr_,
    name.length_,
    0LL,
    1LL,
    ow);
  return retstr;
};

// Line 186: range 000000000C9614E0-000000000C961A66
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::WriteMessage(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        google::protobuf::StringPiece a3,
        __int64 a4,
        int a5,
        google::protobuf::util::converter::ObjectWriter *a6,
        __int64 a7)
{
  google::protobuf::stringpiece_ssize_type length; // r15
  const char *ptr; // r13
  void (__fastcall **TypeRenderer)(google::protobuf::util::converter::ProtoStreamObjectSource *, const google::protobuf::util::converter::ProtoStreamObjectSource *, const char *, google::protobuf::stringpiece_ssize_type, __int64, __int64); // rax
  google::protobuf::io::CodedInputStream *stream; // rbx
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::Field *v15; // rbx
  google::protobuf::StringPiece v16; // rdx
  google::protobuf::io::CodedInputStream *v17; // r14
  const google::protobuf::uint8 *v18; // rax
  const google::protobuf::Field *v19; // rax
  google::protobuf::StringPiece v20; // rdx
  google::protobuf::uint32 v21; // esi
  google::protobuf::UnknownFieldSet *v22; // rdx
  google::protobuf::io::CodedInputStream *v23; // rbx
  char *buffer; // rax
  void *M_p; // rdi
  google::protobuf::uint32 v28; // [rsp+18h] [rbp-C8h]
  google::protobuf::uint32 vptr_ObjectSource; // [rsp+1Ch] [rbp-C4h]
  google::protobuf::UnknownFieldSet v30; // [rsp+28h] [rbp-B8h] BYREF
  void *v31; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::util::converter::ObjectWriter *v32; // [rsp+38h] [rbp-A8h]
  char v33[16]; // [rsp+40h] [rbp-A0h] BYREF
  google::protobuf::util::Status v34; // [rsp+50h] [rbp-90h] BYREF
  google::protobuf::util::converter::ProtoStreamObjectSource other; // [rsp+80h] [rbp-60h] BYREF

  length = a3.length_;
  ptr = a3.ptr_;
  TypeRenderer = (void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectSource *, const google::protobuf::util::converter::ProtoStreamObjectSource *, const char *, google::protobuf::stringpiece_ssize_type, __int64, __int64))google::protobuf::util::converter::ProtoStreamObjectSource::FindTypeRenderer(*((std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type **)a3.ptr_ + 11));
  if ( TypeRenderer )
  {
    (*TypeRenderer)(this, a2, ptr, length, a4, a7);
    return this;
  }
  stream = a2->stream_;
  v33[0] = 0;
  v31 = v33;
  v32 = 0LL;
  if ( stream->buffer_ >= stream->buffer_end_ )
  {
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, 0);
  }
  else
  {
    vptr_ObjectSource = *stream->buffer_;
    if ( (vptr_ObjectSource & 0x80u) == 0 )
    {
      ++stream->buffer_;
      goto LABEL_8;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, vptr_ObjectSource);
  }
  vptr_ObjectSource = TagFallback;
LABEL_8:
  v30.fields_ = 0LL;
  stream->last_tag_ = vptr_ObjectSource;
  v28 = vptr_ObjectSource + 1;
  if ( (_BYTE)a6 )
  {
    (*(void (__fastcall **)(__int64, google::protobuf::stringpiece_ssize_type, __int64))(*(_QWORD *)a7 + 16LL))(
      a7,
      length,
      a4);
    if ( a5 == vptr_ObjectSource )
    {
LABEL_43:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 24LL))(a7);
      goto LABEL_37;
    }
  }
  else if ( a5 == vptr_ObjectSource )
  {
    goto LABEL_37;
  }
  v15 = 0LL;
  while ( 1 )
  {
    if ( vptr_ObjectSource != v28 )
    {
      v19 = google::protobuf::util::converter::ProtoStreamObjectSource::FindAndVerifyField(
              a2,
              (const google::protobuf::Type *)ptr,
              vptr_ObjectSource);
      goto LABEL_21;
    }
LABEL_25:
    if ( !v15 )
    {
      vptr_ObjectSource = v28;
      while ( 1 )
      {
        v21 = vptr_ObjectSource;
        do
        {
          v22 = &v30;
          if ( !a2->render_unknown_fields_ )
            v22 = 0LL;
          google::protobuf::internal::WireFormat::SkipField(a2->stream_, v21, v22);
          v23 = a2->stream_;
          buffer = (char *)v23->buffer_;
          if ( v23->buffer_ >= v23->buffer_end_ )
          {
            v21 = 0;
LABEL_51:
            v21 = google::protobuf::io::CodedInputStream::ReadTagFallback(a2->stream_, v21);
            goto LABEL_52;
          }
          v21 = (unsigned __int8)*buffer;
          if ( *buffer < 0 )
            goto LABEL_51;
          v23->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_52:
          v23->last_tag_ = v21;
          if ( a5 == v21 )
            goto LABEL_42;
        }
        while ( v21 == vptr_ObjectSource );
        vptr_ObjectSource = v21;
        v19 = google::protobuf::util::converter::ProtoStreamObjectSource::FindAndVerifyField(
                a2,
                (const google::protobuf::Type *)ptr,
                v21);
LABEL_21:
        v15 = v19;
        if ( v19 )
        {
          if ( a2->preserve_proto_field_names_ )
            std::string::_M_assign(&v31, v19->name_.ptr_);
          else
            std::string::_M_assign(&v31, v19->json_name_.ptr_);
          v28 = vptr_ObjectSource;
          goto LABEL_25;
        }
      }
    }
    if ( v15->cardinality_ != 3 )
    {
      v16.ptr_ = (const char *)v15;
      v16.length_ = (google::protobuf::stringpiece_ssize_type)v31;
      google::protobuf::util::converter::ProtoStreamObjectSource::RenderField(
        &other,
        (const google::protobuf::Field *)a2,
        v16,
        v32);
      vptr_ObjectSource = (google::protobuf::uint32)other._vptr_ObjectSource;
      if ( !LODWORD(other._vptr_ObjectSource) )
      {
        if ( (bool *)other.stream_ != &other.own_typeinfo_ )
          operator delete(other.stream_);
        v17 = a2->stream_;
        v18 = v17->buffer_;
        if ( v17->buffer_ < v17->buffer_end_ && (vptr_ObjectSource = *v18, (vptr_ObjectSource & 0x80u) == 0) )
          v17->buffer_ = v18 + 1;
        else
          vptr_ObjectSource = google::protobuf::io::CodedInputStream::ReadTagFallback(v17, vptr_ObjectSource);
        v17->last_tag_ = vptr_ObjectSource;
        goto LABEL_18;
      }
      google::protobuf::util::Status::Status(
        (google::protobuf::util::Status *const)this,
        (const google::protobuf::util::Status *)&other);
      M_p = other.stream_;
      if ( (bool *)other.stream_ == &other.own_typeinfo_ )
        goto LABEL_38;
LABEL_65:
      operator delete(M_p);
      goto LABEL_38;
    }
    if ( google::protobuf::util::converter::ProtoStreamObjectSource::IsMap(a2, v15) )
    {
      (*(void (__fastcall **)(__int64, void *, google::protobuf::util::converter::ObjectWriter *))(*(_QWORD *)a7 + 16LL))(
        a7,
        v31,
        v32);
      v20.ptr_ = (const char *)v15;
      v20.length_ = (google::protobuf::stringpiece_ssize_type)v31;
      google::protobuf::util::converter::ProtoStreamObjectSource::RenderMap(
        &other,
        (const google::protobuf::Field *)a2,
        v20,
        (unsigned int)v32,
        (google::protobuf::util::converter::ObjectWriter *)v28);
      vptr_ObjectSource = v28;
      if ( !LODWORD(other._vptr_ObjectSource) )
        vptr_ObjectSource = *(_DWORD *)&other.use_lower_camel_for_enums_;
      google::protobuf::util::Status::Status(&v34, (const google::protobuf::util::Status *)&other);
      if ( (bool *)other.stream_ != &other.own_typeinfo_ )
        operator delete(other.stream_);
      if ( v34.error_code_ )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 24LL))(a7);
      goto LABEL_34;
    }
    (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectSource *, const google::protobuf::util::converter::ProtoStreamObjectSource *, const google::protobuf::Field *, void *, google::protobuf::util::converter::ObjectWriter *, _QWORD, __int64))a2->_vptr_ObjectSource
     + 5))(
      &other,
      a2,
      v15,
      v31,
      v32,
      v28,
      a7);
    vptr_ObjectSource = v28;
    if ( !LODWORD(other._vptr_ObjectSource) )
      vptr_ObjectSource = *(_DWORD *)&other.use_lower_camel_for_enums_;
    google::protobuf::util::Status::Status(&v34, (const google::protobuf::util::Status *)&other);
    if ( (bool *)other.stream_ != &other.own_typeinfo_ )
      operator delete(other.stream_);
    if ( v34.error_code_ )
      break;
LABEL_34:
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v34.error_message_._M_dataplus._M_p != &v34.error_message_._anon_0 )
      operator delete(v34.error_message_._M_dataplus._M_p);
LABEL_18:
    if ( a5 == vptr_ObjectSource )
    {
LABEL_42:
      if ( (_BYTE)a6 )
        goto LABEL_43;
LABEL_37:
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      goto LABEL_38;
    }
  }
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &v34);
  M_p = v34.error_message_._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v34.error_message_._M_dataplus._M_p != &v34.error_message_._anon_0 )
    goto LABEL_65;
LABEL_38:
  if ( v30.fields_ )
    google::protobuf::UnknownFieldSet::ClearFallback(&v30);
  if ( v31 != v33 )
    operator delete(v31);
  return this;
};

// Line 250: range 000000000C9610B0-000000000C961349
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderList(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::Field *a2,
        google::protobuf::StringPiece a3,
        __int64 a4,
        google::protobuf::util::converter::ObjectWriter *a5,
        __int64 a6)
{
  char *ptr; // r12
  google::protobuf::uint32 error_code; // ebp
  google::protobuf::StringPiece v8; // rdx
  char **v9; // r15
  char *v10; // rax
  google::protobuf::StringPiece v12; // rdx
  google::protobuf::io::CodedInputStream *v13; // rbx
  char *buffer; // rax
  int v15; // [rsp+4h] [rbp-A4h]
  google::protobuf::util::Status first_byte_or_zero; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+40h] [rbp-68h] BYREF

  ptr = (char *)a3.ptr_;
  v15 = (int)a5;
  (*(void (__fastcall **)(__int64, google::protobuf::stringpiece_ssize_type, __int64))(*(_QWORD *)a6 + 32LL))(
    a6,
    a3.length_,
    a4);
  if ( *((_DWORD *)ptr + 19) != 3
    || (unsigned int)(*((_DWORD *)ptr + 18) - 9) <= 3
    || v15 != 8 * *((_DWORD *)ptr + 20) + 2 )
  {
    while ( 1 )
    {
      v8.length_ = (google::protobuf::stringpiece_ssize_type)&off_1B23A528[4];
      v8.ptr_ = ptr;
      google::protobuf::util::converter::ProtoStreamObjectSource::RenderField(
        (google::protobuf::util::converter::ProtoStreamObjectSource *)&first_byte_or_zero,
        a2,
        v8,
        0LL);
      error_code = first_byte_or_zero.error_code_;
      if ( first_byte_or_zero.error_code_ )
        break;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)first_byte_or_zero.error_message_._M_dataplus._M_p != &first_byte_or_zero.error_message_._anon_0 )
        operator delete(first_byte_or_zero.error_message_._M_dataplus._M_p);
      v9 = (char **)a2->_internal_metadata_.ptr_;
      v10 = *v9;
      if ( *v9 >= v9[1] || (error_code = (unsigned __int8)*v10, *v10 < 0) )
      {
        error_code = google::protobuf::io::CodedInputStream::ReadTagFallback(
                       (google::protobuf::io::CodedInputStream *const)a2->_internal_metadata_.ptr_,
                       error_code);
        *((_DWORD *)v9 + 8) = error_code;
        if ( v15 != error_code )
          goto LABEL_10;
      }
      else
      {
        *((_DWORD *)v9 + 8) = error_code;
        *v9 = v10 + 1;
        if ( v15 != error_code )
          goto LABEL_10;
      }
    }
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    if ( first_byte_or_zero.error_code_ )
      goto LABEL_12;
    goto LABEL_16;
  }
  google::protobuf::util::converter::ProtoStreamObjectSource::RenderPacked(
    (google::protobuf::util::converter::ProtoStreamObjectSource *)&first_byte_or_zero,
    a2,
    (google::protobuf::util::converter::ObjectWriter *)ptr);
  error_code = first_byte_or_zero.error_code_;
  if ( first_byte_or_zero.error_code_ )
  {
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    if ( first_byte_or_zero.error_code_ )
    {
LABEL_12:
      google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &first_byte_or_zero);
LABEL_13:
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)first_byte_or_zero.error_message_._M_dataplus._M_p != &first_byte_or_zero.error_message_._anon_0 )
        operator delete(first_byte_or_zero.error_message_._M_dataplus._M_p);
      return this;
    }
LABEL_16:
    v12.ptr_ = "Status::OK is not a valid argument.";
    v12.length_ = 35LL;
    google::protobuf::util::Status::Status(&other, INTERNAL, v12);
    google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &other);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    goto LABEL_13;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)first_byte_or_zero.error_message_._M_dataplus._M_p != &first_byte_or_zero.error_message_._anon_0 )
    operator delete(first_byte_or_zero.error_message_._M_dataplus._M_p);
  v13 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
  buffer = (char *)v13->buffer_;
  if ( v13->buffer_ < v13->buffer_end_ && (error_code = (unsigned __int8)*buffer, *buffer >= 0) )
    v13->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
  else
    error_code = google::protobuf::io::CodedInputStream::ReadTagFallback(v13, error_code);
  v13->last_tag_ = error_code;
LABEL_10:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 40LL))(a6);
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
  google::protobuf::util::Status::operator=(
    (google::protobuf::util::Status *const)this,
    &google::protobuf::util::Status::OK);
  *(_DWORD *)&this->use_lower_camel_for_enums_ = error_code;
  return this;
};

// Line 272: range 000000000C960540-000000000C960DF9
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderMap(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        google::protobuf::StringPiece a3,
        __int64 a4,
        google::protobuf::util::converter::ObjectWriter *a5,
        google::protobuf::util::converter::ObjectWriter *a6)
{
  const google::protobuf::Type *v7; // rbp
  google::protobuf::io::CodedInputStream *stream; // rdi
  char *buffer; // rax
  google::protobuf::uint32 v10; // esi
  google::protobuf::uint32 Varint32Fallback; // eax
  google::protobuf::io::CodedInputStream::Limit v12; // eax
  google::protobuf::io::CodedInputStream *v13; // r12
  char *v14; // rax
  google::protobuf::uint32 TagFallback; // r9d
  const google::protobuf::Field *v16; // rax
  google::protobuf::uint32 v17; // r9d
  const char *v18; // r12
  google::protobuf::int32 number; // eax
  google::protobuf::util::converter::ObjectWriter *v20; // r8
  google::protobuf::StringPiece v21; // rdx
  std::string::pointer M_p; // rdi
  char *v23; // rax
  google::protobuf::io::CodedInputStream *v24; // r13
  char *v25; // rax
  google::protobuf::uint32 v26; // r12d
  int current_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rcx
  void **elements; // rax
  __int64 v30; // rcx
  std::string::pointer v31; // rdi
  void (__fastcall *v32)(google::protobuf::util::converter::ObjectWriter *const); // rax
  google::protobuf::StringPiece v33; // rdx
  google::protobuf::StringPiece v34; // rdx
  google::protobuf::StringPiece v36; // rdx
  google::protobuf::StringPiece v37; // rdx
  google::protobuf::StringPiece v38; // rdx
  google::protobuf::io::CodedInputStream::Limit limit; // [rsp+18h] [rbp-110h]
  int v41; // [rsp+1Ch] [rbp-10Ch]
  void *v42; // [rsp+20h] [rbp-108h] BYREF
  google::protobuf::util::converter::ObjectWriter *v43; // [rsp+28h] [rbp-100h]
  char v44[16]; // [rsp+30h] [rbp-F8h] BYREF
  google::protobuf::util::Status v45; // [rsp+40h] [rbp-E8h] BYREF
  google::protobuf::util::Status v46; // [rsp+70h] [rbp-B8h] BYREF
  google::protobuf::util::Status other; // [rsp+A0h] [rbp-88h] BYREF
  void *v48; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-58h]
  char v50[80]; // [rsp+D8h] [rbp-50h] BYREF

  v41 = (int)a5;
  v7 = (const google::protobuf::Type *)(*((__int64 (__fastcall **)(const google::protobuf::util::converter::TypeInfo *, _QWORD, _QWORD))a2->typeinfo_->_vptr_TypeInfo
                                        + 3))(
                                         a2->typeinfo_,
                                         **((_QWORD **)a3.ptr_ + 6),
                                         *(_QWORD *)(*((_QWORD *)a3.ptr_ + 6) + 8LL));
  while ( 1 )
  {
    stream = a2->stream_;
    buffer = (char *)stream->buffer_;
    if ( stream->buffer_ >= stream->buffer_end_ )
    {
      v10 = 0;
LABEL_4:
      Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(stream, v10);
      stream = a2->stream_;
      v10 = Varint32Fallback;
      goto LABEL_5;
    }
    v10 = (unsigned __int8)*buffer;
    if ( *buffer < 0 )
      goto LABEL_4;
    stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_5:
    v12 = google::protobuf::io::CodedInputStream::PushLimit(stream, v10);
    v13 = a2->stream_;
    v44[0] = 0;
    limit = v12;
    v42 = v44;
    v14 = (char *)v13->buffer_;
    v43 = 0LL;
    if ( v13->buffer_end_ <= (const google::protobuf::uint8 *)v14 )
    {
LABEL_53:
      TagFallback = 0;
LABEL_7:
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(v13, TagFallback);
      goto LABEL_8;
    }
    TagFallback = (unsigned __int8)*v14;
    if ( *v14 < 0 )
      goto LABEL_7;
    ++v13->buffer_;
LABEL_8:
    v13->last_tag_ = TagFallback;
    if ( TagFallback )
      break;
LABEL_19:
    google::protobuf::io::CodedInputStream::PopLimit(a2->stream_, limit);
    if ( v42 != v44 )
      operator delete(v42);
    v24 = a2->stream_;
    v25 = (char *)v24->buffer_;
    if ( v24->buffer_ >= v24->buffer_end_ )
    {
      v26 = 0;
    }
    else
    {
      v26 = (unsigned __int8)*v25;
      if ( *v25 >= 0 )
      {
        ++v24->buffer_;
        goto LABEL_24;
      }
    }
    v26 = google::protobuf::io::CodedInputStream::ReadTagFallback(a2->stream_, v26);
LABEL_24:
    v24->last_tag_ = v26;
    if ( v41 != v26 )
    {
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)this,
        &google::protobuf::util::Status::OK);
      *(_DWORD *)&this->use_lower_camel_for_enums_ = v26;
      return this;
    }
  }
  while ( 1 )
  {
    v16 = google::protobuf::util::converter::ProtoStreamObjectSource::FindAndVerifyField(a2, v7, TagFallback);
    v18 = (const char *)v16;
    if ( v16 )
      break;
    google::protobuf::internal::WireFormat::SkipField(a2->stream_, v17, 0LL);
LABEL_16:
    v13 = a2->stream_;
    v23 = (char *)v13->buffer_;
    if ( v13->buffer_ >= v13->buffer_end_ )
      goto LABEL_53;
LABEL_17:
    TagFallback = (unsigned __int8)*v23;
    if ( *v23 < 0 )
      goto LABEL_7;
    v13->last_tag_ = TagFallback;
    v13->buffer_ = (const google::protobuf::uint8 *)(v23 + 1);
    if ( !TagFallback )
      goto LABEL_19;
  }
  number = v16->number_;
  if ( number == 1 )
  {
    google::protobuf::util::converter::ProtoStreamObjectSource::ReadFieldValueAsString[abi:cxx11]((std::string *)&other);
    std::string::_M_assign(&v42, &other);
    M_p = *(std::string::pointer *)&other.error_code_;
    if ( *(google::protobuf::util::Status **)&other.error_code_ == (google::protobuf::util::Status *)&other.error_message_._M_string_length )
    {
      v13 = a2->stream_;
      v23 = (char *)v13->buffer_;
      if ( v13->buffer_ >= v13->buffer_end_ )
        goto LABEL_53;
      goto LABEL_17;
    }
LABEL_15:
    operator delete(M_p);
    goto LABEL_16;
  }
  if ( number != 2 )
  {
    v37.ptr_ = "Invalid map entry.";
    v37.length_ = 18LL;
    google::protobuf::util::Status::Status(&v46, INTERNAL, v37);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    if ( v46.error_code_ == OK )
      goto LABEL_65;
    goto LABEL_56;
  }
  v20 = v43;
  if ( v43 )
  {
LABEL_13:
    v21.length_ = (google::protobuf::stringpiece_ssize_type)v42;
    v21.ptr_ = v18;
    google::protobuf::util::converter::ProtoStreamObjectSource::RenderField(
      (google::protobuf::util::converter::ProtoStreamObjectSource *)&v46,
      (const google::protobuf::Field *)a2,
      v21,
      v20);
    if ( v46.error_code_ == OK )
    {
      M_p = v46.error_message_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v46.error_message_._M_dataplus._M_p == &v46.error_message_._anon_0 )
        goto LABEL_16;
      goto LABEL_15;
    }
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    if ( v46.error_code_ )
      goto LABEL_56;
LABEL_65:
    v36.ptr_ = "Status::OK is not a valid argument.";
    v36.length_ = 35LL;
    google::protobuf::util::Status::Status(&other, INTERNAL, v36);
    google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &other);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    goto LABEL_57;
  }
  current_size = v7->fields_.current_size_;
  if ( current_size <= 0 )
  {
LABEL_76:
    v38.ptr_ = "Invalid map entry.";
    v38.length_ = 18LL;
    google::protobuf::util::Status::Status(&v46, INTERNAL, v38);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    if ( v46.error_code_ )
      goto LABEL_56;
    goto LABEL_65;
  }
  rep = v7->fields_.rep_;
  elements = rep->elements;
  v30 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
  while ( *((_DWORD *)*elements + 20) != 1 )
  {
    if ( (void **)v30 == ++elements )
      goto LABEL_76;
  }
  switch ( *((_DWORD *)*elements + 18) )
  {
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xD:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
      *(_QWORD *)&v46.error_code_ = &v46.error_message_._M_string_length;
      std::string::_M_construct<char const*>((std::string *const)&v46, "0", "", (std::forward_iterator_tag)v30);
      google::protobuf::util::Status::Status(&other);
      v49 = 0LL;
      v48 = v50;
      v50[0] = 0;
      google::protobuf::util::Status::operator=(&other, &google::protobuf::util::Status::OK);
      std::string::_M_assign(&v48, &v46);
      goto LABEL_32;
    case 8:
      *(_QWORD *)&v46.error_code_ = &v46.error_message_._M_string_length;
      std::string::_M_construct<char const*>((std::string *const)&v46, "false", "", (std::forward_iterator_tag)v30);
      google::protobuf::util::Status::Status(&other);
      v49 = 0LL;
      v48 = v50;
      v50[0] = 0;
      google::protobuf::util::Status::operator=(&other, &google::protobuf::util::Status::OK);
      std::string::_M_assign(&v48, &v46);
      goto LABEL_32;
    case 9:
      v46.error_message_._M_dataplus._M_p = 0LL;
      *(_QWORD *)&v46.error_code_ = &v46.error_message_._M_string_length;
      LOBYTE(v46.error_message_._M_string_length) = 0;
      google::protobuf::util::Status::Status(&other);
      v49 = 0LL;
      v48 = v50;
      v50[0] = 0;
      google::protobuf::util::Status::operator=(&other, &google::protobuf::util::Status::OK);
      std::string::_M_assign(&v48, &v46);
LABEL_32:
      v31 = *(std::string::pointer *)&v46.error_code_;
      if ( *(google::protobuf::util::Status **)&v46.error_code_ != (google::protobuf::util::Status *)&v46.error_message_._M_string_length )
        goto LABEL_33;
      goto LABEL_34;
    default:
      v33.ptr_ = "Invalid map key type.";
      v33.length_ = 21LL;
      google::protobuf::util::Status::Status(&v45, INTERNAL, v33);
      google::protobuf::util::Status::Status(&other);
      v49 = 0LL;
      v48 = v50;
      v50[0] = 0;
      if ( v45.error_code_ )
      {
        google::protobuf::util::Status::operator=(&other, &v45);
      }
      else
      {
        v34.ptr_ = "Status::OK is not a valid argument.";
        v34.length_ = 35LL;
        google::protobuf::util::Status::Status(&v46, INTERNAL, v34);
        google::protobuf::util::Status::operator=(&other, &v46);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v46.error_message_._M_dataplus._M_p != &v46.error_message_._anon_0 )
          operator delete(v46.error_message_._M_dataplus._M_p);
      }
      v31 = v45.error_message_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v45.error_message_._M_dataplus._M_p == &v45.error_message_._anon_0 )
        goto LABEL_34;
LABEL_33:
      operator delete(v31);
LABEL_34:
      if ( other.error_code_ == OK )
        std::string::_M_assign(&v42, &v48);
      google::protobuf::util::Status::Status(&v46, &other);
      if ( v48 != v50 )
        operator delete(v48);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
        operator delete(other.error_message_._M_dataplus._M_p);
      if ( v46.error_code_ == OK )
      {
        v32 = (void (__fastcall *)(google::protobuf::util::converter::ObjectWriter *const))*((_QWORD *)a6->_vptr_ObjectWriter
                                                                                           + 17);
        if ( v32 != google::protobuf::util::converter::ObjectWriter::empty_name_ok_for_next_key )
          v32(a6);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v46.error_message_._M_dataplus._M_p != &v46.error_message_._anon_0 )
          operator delete(v46.error_message_._M_dataplus._M_p);
        v20 = v43;
        goto LABEL_13;
      }
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      if ( v46.error_code_ == OK )
        goto LABEL_65;
LABEL_56:
      google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)this, &v46);
LABEL_57:
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v46.error_message_._M_dataplus._M_p != &v46.error_message_._anon_0 )
        operator delete(v46.error_message_._M_dataplus._M_p);
      if ( v42 != v44 )
        operator delete(v42);
      return this;
  }
};

// Line 319: range 000000000C960FA0-000000000C9610AA
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderPacked(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::Field *a2,
        google::protobuf::util::converter::ObjectWriter *a3)
{
  google::protobuf::io::CodedInputStream *ptr; // rdi
  char *buffer; // rax
  google::protobuf::uint32 v8; // esi
  google::protobuf::uint32 Varint32Fallback; // eax
  google::protobuf::io::CodedInputStream::Limit v10; // r14d
  google::protobuf::util::converter::ProtoStreamObjectSource v12; // [rsp+0h] [rbp-58h] BYREF

  ptr = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
  buffer = (char *)ptr->buffer_;
  if ( ptr->buffer_ >= ptr->buffer_end_ )
  {
    v8 = 0;
  }
  else
  {
    v8 = (unsigned __int8)*buffer;
    if ( *buffer >= 0 )
    {
      ptr->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
      goto LABEL_4;
    }
  }
  Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(ptr, v8);
  ptr = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
  v8 = Varint32Fallback;
LABEL_4:
  v10 = google::protobuf::io::CodedInputStream::PushLimit(ptr, v8);
LABEL_5:
  if ( google::protobuf::io::CodedInputStream::BytesUntilLimit((const google::protobuf::io::CodedInputStream *const)a2->_internal_metadata_.ptr_) <= 0 )
  {
LABEL_9:
    google::protobuf::io::CodedInputStream::PopLimit(
      (google::protobuf::io::CodedInputStream *const)a2->_internal_metadata_.ptr_,
      v10);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  while ( 1 )
  {
    google::protobuf::util::converter::ProtoStreamObjectSource::RenderField(
      &v12,
      a2,
      (google::protobuf::StringPiece)(unsigned __int64)a3,
      0LL);
    if ( LODWORD(v12._vptr_ObjectSource) )
      break;
    if ( (bool *)v12.stream_ == &v12.own_typeinfo_ )
      goto LABEL_5;
    operator delete(v12.stream_);
    if ( google::protobuf::io::CodedInputStream::BytesUntilLimit((const google::protobuf::io::CodedInputStream *const)a2->_internal_metadata_.ptr_) <= 0 )
      goto LABEL_9;
  }
  google::protobuf::util::Status::Status(
    (google::protobuf::util::Status *const)this,
    (const google::protobuf::util::Status *)&v12);
  if ( (bool *)v12.stream_ == &v12.own_typeinfo_ )
    return this;
  operator delete(v12.stream_);
  return this;
};

// Line 332: range 000000000C95FB00-000000000C95FC6C
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderTimestamp(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece a4,
        google::protobuf::util::converter::ObjectWriter *a5)
{
  size_t length; // r13
  const char *ptr; // rbp
  std::pair<long int,int> SecondsAndNanos; // rax
  void (__fastcall *v10)(google::protobuf::util::converter::ObjectWriter *, const char *, size_t, const char *, size_t); // rbx
  google::protobuf::StringPiece v11; // [rsp+0h] [rbp-A8h] BYREF
  char v12; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum v13; // [rsp+20h] [rbp-88h] BYREF
  google::protobuf::strings::AlphaNum v14; // [rsp+50h] [rbp-58h] BYREF

  length = a4.length_;
  ptr = a4.ptr_;
  SecondsAndNanos = google::protobuf::util::converter::ProtoStreamObjectSource::ReadSecondsAndNanos(a2, type);
  if ( (unsigned __int64)(SecondsAndNanos.first + 0xE7791F700LL) > 0x497786387FLL )
  {
    v14.piece_data_ = ptr;
    v14.piece_size_ = length;
    v13.piece_data_ = "Timestamp seconds exceeds limit for field: ";
    v13.piece_size_ = 43LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v11, &v13, &v14);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INTERNAL, v11);
    goto LABEL_4;
  }
  if ( SecondsAndNanos.second > 0x3B9AC9FFu )
  {
    v14.piece_data_ = ptr;
    v14.piece_size_ = length;
    v13.piece_data_ = "Timestamp nanos exceeds limit for field: ";
    v13.piece_size_ = 41LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v11, &v13, &v14);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INTERNAL, v11);
LABEL_4:
    if ( v11.ptr_ != &v12 )
      operator delete((void *)v11.ptr_);
    return this;
  }
  v10 = (void (__fastcall *)(google::protobuf::util::converter::ObjectWriter *, const char *, size_t, const char *, size_t))*((_QWORD *)a5->_vptr_ObjectWriter + 13);
  google::protobuf::internal::FormatTime[abi:cxx11]((char *)&v14, SecondsAndNanos.first, SecondsAndNanos.second);
  v10(a5, ptr, length, v14.piece_data_, v14.piece_size_);
  if ( v14.piece_data_ != v14.digits )
    operator delete((void *)v14.piece_data_);
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
  return this;
};

// Line 356: range 000000000C95FDB0-000000000C9601AF
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderDuration(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece a4,
        google::protobuf::util::converter::ObjectWriter *a5)
{
  size_t length; // r15
  const char *ptr; // r14
  std::pair<long int,int> SecondsAndNanos; // rax
  std::forward_iterator_tag v9; // cl
  __int64 first; // rbx
  int second; // ebp
  void *M_p; // rdi
  int v14; // eax
  const char *v15; // rsi
  std::forward_iterator_tag v16; // cl
  char *piece_data; // rdi
  const char *v18; // rbp
  size_t v19; // rax
  std::forward_iterator_tag v20; // cl
  __int64 v21; // [rsp+8h] [rbp-F0h]
  std::string v23; // [rsp+20h] [rbp-D8h] BYREF
  google::protobuf::StringPiece v24; // [rsp+40h] [rbp-B8h] BYREF
  char v25[16]; // [rsp+50h] [rbp-A8h] BYREF
  google::protobuf::strings::AlphaNum v26; // [rsp+60h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum dst[2]; // [rsp+90h] [rbp-68h] BYREF

  length = a4.length_;
  ptr = a4.ptr_;
  SecondsAndNanos = google::protobuf::util::converter::ProtoStreamObjectSource::ReadSecondsAndNanos(a2, type);
  first = SecondsAndNanos.first;
  v21 = SecondsAndNanos.first;
  second = SecondsAndNanos.second;
  if ( (unsigned __int64)(SecondsAndNanos.first + 315576000000LL) <= 0x92F3973C00LL )
  {
    if ( (unsigned int)(SecondsAndNanos.second + 999999999) > 0x773593FE )
    {
      dst[0].piece_data_ = ptr;
      dst[0].piece_size_ = length;
      v26.piece_data_ = "Duration nanos exceeds limit for field: ";
      v26.piece_size_ = 40LL;
      google::protobuf::StrCat[abi:cxx11]((__int64)&v24, &v26, dst);
      google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INTERNAL, v24);
      goto LABEL_4;
    }
    v23._M_dataplus._M_p = v23._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v23, &off_1B23A528[4], &off_1B23A528[4], v9);
    v14 = second;
    if ( first < 0 )
    {
      if ( second > 0 )
      {
        dst[0].piece_data_ = ptr;
        dst[0].piece_size_ = length;
        v26.piece_data_ = "Duration nanos is non-negative, but seconds is negative for field: ";
        v26.piece_size_ = 67LL;
        google::protobuf::StrCat[abi:cxx11]((__int64)&v24, &v26, dst);
        google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INTERNAL, v24);
        piece_data = (char *)v24.ptr_;
        if ( v24.ptr_ != v25 )
LABEL_20:
          operator delete(piece_data);
LABEL_21:
        M_p = v23._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23._M_dataplus._M_p == &v23._anon_0 )
          return this;
        goto LABEL_5;
      }
      std::string::_M_replace(&v23, 0LL, v23._M_string_length, "-", 1LL);
      v21 = -first;
      v14 = -second;
    }
    else if ( !first && second < 0 )
    {
      std::string::_M_replace(&v23, 0LL, v23._M_string_length, "-", 1LL);
      v21 = 0LL;
      v14 = -second;
      goto LABEL_11;
    }
    if ( !v14 )
    {
      v18 = ".000";
      if ( !a2->add_trailing_zeros_for_timestamp_and_duration_ )
        v18 = &off_1B23A528[4];
      v26.piece_data_ = v26.digits;
      v19 = strlen(v18);
      std::string::_M_construct<char const*>((std::string *const)&v26, v18, &v18[v19], v20);
LABEL_17:
      google::protobuf::StringPrintf[abi:cxx11](
        (std::string *)dst,
        "%s%lld%ss",
        v23._M_dataplus._M_p,
        v21,
        v26.piece_data_);
      if ( v26.piece_data_ != v26.digits )
        operator delete((void *)v26.piece_data_);
      (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, size_t, const char *, size_t))a5->_vptr_ObjectWriter
       + 13))(
        a5,
        ptr,
        length,
        dst[0].piece_data_,
        dst[0].piece_size_);
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      piece_data = (char *)dst[0].piece_data_;
      if ( dst[0].piece_data_ != dst[0].digits )
        goto LABEL_20;
      goto LABEL_21;
    }
LABEL_11:
    v15 = "%.9f";
    if ( __ROR4__(652835029 * v14, 3) <= 0x418937u )
    {
      v15 = "%.6f";
      if ( __ROR4__(1757569337 * v14, 6) <= 0x10C6u )
        v15 = "%.3f";
    }
    google::protobuf::StringPrintf[abi:cxx11]((std::string *)dst, v15, (double)v14 / 1000000000.0);
    if ( !dst[0].piece_size_ )
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        1uLL,
        0LL);
    v26.piece_data_ = v26.digits;
    std::string::_M_construct<char const*>(
      (std::string *const)&v26,
      dst[0].piece_data_ + 1,
      &dst[0].piece_data_[dst[0].piece_size_],
      v16);
    if ( dst[0].piece_data_ != dst[0].digits )
      operator delete((void *)dst[0].piece_data_);
    goto LABEL_17;
  }
  dst[0].piece_data_ = ptr;
  dst[0].piece_size_ = length;
  v26.piece_data_ = "Duration seconds exceeds limit for field: ";
  v26.piece_size_ = 42LL;
  google::protobuf::StrCat[abi:cxx11]((__int64)&v24, &v26, dst);
  google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INTERNAL, v24);
LABEL_4:
  M_p = (void *)v24.ptr_;
  if ( v24.ptr_ != v25 )
LABEL_5:
    operator delete(M_p);
  return this;
};

// Line 398: range 000000000C95CE20-000000000C95CF42
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderDouble(
        google::protobuf::util::Status *retstr,
        const google::protobuf::util::converter::ProtoStreamObjectSource *os,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece field_name,
        google::protobuf::util::converter::ObjectWriter *ow)
{
  const char *ptr; // r15
  google::protobuf::stringpiece_ssize_type length; // r14
  google::protobuf::io::CodedInputStream *stream; // rbx
  char *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  double v12; // xmm0_8
  google::protobuf::io::CodedInputStream *v14; // rbx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint64 *v16; // rdx
  google::protobuf::uint64 v17; // rcx
  char *v18; // rdx
  google::protobuf::uint32 v19; // esi
  google::protobuf::uint64 buffer64[8]; // [rsp+8h] [rbp-40h] BYREF

  ptr = field_name.ptr_;
  length = field_name.length_;
  stream = os->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_ >= stream->buffer_end_ )
  {
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, TagFallback);
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = TagFallback;
  v12 = 0.0;
  buffer64[0] = 0LL;
  if ( TagFallback )
  {
    v14 = os->stream_;
    buffer_end = v14->buffer_end_;
    v16 = (google::protobuf::uint64 *)v14->buffer_;
    if ( LODWORD(v14->buffer_end_) - LODWORD(v14->buffer_) <= 7 )
    {
      google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(os->stream_, buffer64);
      v14 = os->stream_;
      v18 = (char *)v14->buffer_;
      buffer_end = v14->buffer_end_;
    }
    else
    {
      v17 = *v16;
      v18 = (char *)(v16 + 1);
      buffer64[0] = v17;
      v14->buffer_ = (const google::protobuf::uint8 *)v18;
    }
    if ( v18 >= (char *)buffer_end )
    {
      v19 = 0;
    }
    else
    {
      v19 = (unsigned __int8)*v18;
      if ( *v18 >= 0 )
      {
        v14->buffer_ = (const google::protobuf::uint8 *)(v18 + 1);
        goto LABEL_11;
      }
    }
    v19 = google::protobuf::io::CodedInputStream::ReadTagFallback(v14, v19);
LABEL_11:
    v14->last_tag_ = v19;
    v12 = *(double *)buffer64;
  }
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, double))ow->_vptr_ObjectWriter
   + 11))(
    ow,
    ptr,
    length,
    v12);
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 412: range 000000000C95CF50-000000000C95D072
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderFloat(
        google::protobuf::util::Status *retstr,
        const google::protobuf::util::converter::ProtoStreamObjectSource *os,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece field_name,
        google::protobuf::util::converter::ObjectWriter *ow)
{
  const char *ptr; // r15
  google::protobuf::stringpiece_ssize_type length; // r14
  google::protobuf::io::CodedInputStream *stream; // rbx
  char *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  double v12; // xmm0_8
  google::protobuf::io::CodedInputStream *v14; // rbx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint32 *v16; // rdx
  google::protobuf::uint32 v17; // ecx
  char *v18; // rdx
  google::protobuf::uint32 v19; // esi
  google::protobuf::uint32 buffer32[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  ptr = field_name.ptr_;
  length = field_name.length_;
  stream = os->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_ >= stream->buffer_end_ )
  {
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, TagFallback);
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = TagFallback;
  v12 = 0.0;
  buffer32[0] = 0;
  if ( TagFallback )
  {
    v14 = os->stream_;
    buffer_end = v14->buffer_end_;
    v16 = (google::protobuf::uint32 *)v14->buffer_;
    if ( LODWORD(v14->buffer_end_) - LODWORD(v14->buffer_) <= 3 )
    {
      google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(os->stream_, buffer32);
      v14 = os->stream_;
      v18 = (char *)v14->buffer_;
      buffer_end = v14->buffer_end_;
    }
    else
    {
      v17 = *v16;
      v18 = (char *)(v16 + 1);
      buffer32[0] = v17;
      v14->buffer_ = (const google::protobuf::uint8 *)v18;
    }
    if ( v18 >= (char *)buffer_end )
    {
      v19 = 0;
    }
    else
    {
      v19 = (unsigned __int8)*v18;
      if ( *v18 >= 0 )
      {
        v14->buffer_ = (const google::protobuf::uint8 *)(v18 + 1);
        goto LABEL_11;
      }
    }
    v19 = google::protobuf::io::CodedInputStream::ReadTagFallback(v14, v19);
LABEL_11:
    v14->last_tag_ = v19;
    *(_QWORD *)&v12 = buffer32[0];
  }
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, double))ow->_vptr_ObjectWriter
   + 12))(
    ow,
    ptr,
    length,
    v12);
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 426: range 000000000C95D080-000000000C95D192
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderInt64(
        google::protobuf::util::Status *retstr,
        const google::protobuf::util::converter::ProtoStreamObjectSource *os,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece field_name,
        google::protobuf::util::converter::ObjectWriter *ow)
{
  google::protobuf::stringpiece_ssize_type length; // r15
  const char *ptr; // r14
  google::protobuf::io::CodedInputStream *stream; // rbx
  char *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v13; // rcx
  google::protobuf::io::CodedInputStream *v15; // rdi
  const google::protobuf::uint8 *v16; // rdx
  const google::protobuf::uint8 *buffer_end; // rsi
  unsigned __int8 v18; // cl
  unsigned __int64 first; // rax
  unsigned __int64 v20; // rbx
  char *v21; // rdx
  google::protobuf::uint32 v22; // esi

  length = field_name.length_;
  ptr = field_name.ptr_;
  stream = os->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_ >= stream->buffer_end_ )
  {
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, TagFallback);
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = TagFallback;
  v13 = 0LL;
  if ( TagFallback )
  {
    v15 = os->stream_;
    v16 = v15->buffer_;
    buffer_end = v15->buffer_end_;
    if ( v15->buffer_ < buffer_end && (v18 = *v16, *(char *)v16 >= 0) )
    {
      v21 = (char *)(v16 + 1);
      v20 = v18;
      v15->buffer_ = (const google::protobuf::uint8 *)v21;
    }
    else
    {
      first = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v15).first;
      v15 = os->stream_;
      v20 = first;
      v21 = (char *)v15->buffer_;
      buffer_end = v15->buffer_end_;
    }
    if ( v21 >= (char *)buffer_end )
    {
      v22 = 0;
    }
    else
    {
      v22 = (unsigned __int8)*v21;
      if ( *v21 >= 0 )
      {
        v15->buffer_ = (const google::protobuf::uint8 *)(v21 + 1);
        goto LABEL_12;
      }
    }
    v22 = google::protobuf::io::CodedInputStream::ReadTagFallback(v15, v22);
LABEL_12:
    v15->last_tag_ = v22;
    v13 = v20;
  }
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, unsigned __int64))ow->_vptr_ObjectWriter
   + 9))(
    ow,
    ptr,
    length,
    v13);
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 440: range 000000000C95D1A0-000000000C95D2C2
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderUInt64(
        google::protobuf::util::Status *retstr,
        const google::protobuf::util::converter::ProtoStreamObjectSource *os,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece field_name,
        google::protobuf::util::converter::ObjectWriter *ow)
{
  google::protobuf::stringpiece_ssize_type length; // r15
  const char *ptr; // r14
  google::protobuf::io::CodedInputStream *stream; // rbx
  char *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v12; // rcx
  google::protobuf::io::CodedInputStream *v14; // rbx
  const google::protobuf::uint8 *v15; // rdx
  const google::protobuf::uint8 *buffer_end; // rsi
  unsigned __int64 first; // rax
  char *v18; // rdx
  google::protobuf::uint32 v19; // esi
  google::protobuf::uint32 v20; // eax
  google::protobuf::uint64 buffer64; // [rsp+8h] [rbp-40h]

  length = field_name.length_;
  ptr = field_name.ptr_;
  stream = os->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_ >= stream->buffer_end_ )
  {
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, TagFallback);
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = TagFallback;
  v12 = 0LL;
  if ( TagFallback )
  {
    v14 = os->stream_;
    v15 = v14->buffer_;
    buffer_end = v14->buffer_end_;
    if ( v14->buffer_ < buffer_end && (v12 = *v15, (v12 & 0x80u) == 0LL) )
    {
      v18 = (char *)(v15 + 1);
      v14->buffer_ = (const google::protobuf::uint8 *)v18;
    }
    else
    {
      first = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(os->stream_).first;
      v14 = os->stream_;
      v12 = first;
      v18 = (char *)v14->buffer_;
      buffer_end = v14->buffer_end_;
    }
    if ( buffer_end <= (const google::protobuf::uint8 *)v18 )
    {
      v19 = 0;
    }
    else
    {
      v19 = (unsigned __int8)*v18;
      if ( *v18 >= 0 )
      {
        v14->buffer_ = (const google::protobuf::uint8 *)(v18 + 1);
        goto LABEL_12;
      }
    }
    buffer64 = v12;
    v20 = google::protobuf::io::CodedInputStream::ReadTagFallback(v14, v19);
    v12 = buffer64;
    v19 = v20;
LABEL_12:
    v14->last_tag_ = v19;
  }
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, unsigned __int64))ow->_vptr_ObjectWriter
   + 10))(
    ow,
    ptr,
    length,
    v12);
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 454: range 000000000C95D400-000000000C95D532
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderInt32(
        google::protobuf::util::Status *retstr,
        const google::protobuf::util::converter::ProtoStreamObjectSource *os,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece field_name,
        google::protobuf::util::converter::ObjectWriter *ow)
{
  google::protobuf::stringpiece_ssize_type length; // r15
  const char *ptr; // r14
  google::protobuf::io::CodedInputStream *stream; // rbx
  char *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  __int64 v13; // rcx
  google::protobuf::io::CodedInputStream *v15; // rdi
  char *v16; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint32 v18; // ebx
  google::protobuf::uint32 Varint32Fallback; // eax
  char *v20; // rdx
  google::protobuf::uint32 v21; // esi

  length = field_name.length_;
  ptr = field_name.ptr_;
  stream = os->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_ >= stream->buffer_end_ )
  {
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, TagFallback);
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = TagFallback;
  v13 = 0LL;
  if ( TagFallback )
  {
    v15 = os->stream_;
    v16 = (char *)v15->buffer_;
    buffer_end = v15->buffer_end_;
    if ( v15->buffer_ >= buffer_end )
    {
      v18 = 0;
    }
    else
    {
      v18 = (unsigned __int8)*v16;
      if ( *v16 >= 0 )
      {
        v20 = v16 + 1;
        v15->buffer_ = (const google::protobuf::uint8 *)v20;
LABEL_9:
        if ( v20 >= (char *)buffer_end )
        {
          v21 = 0;
        }
        else
        {
          v21 = (unsigned __int8)*v20;
          if ( *v20 >= 0 )
          {
            v15->buffer_ = (const google::protobuf::uint8 *)(v20 + 1);
            goto LABEL_12;
          }
        }
        v21 = google::protobuf::io::CodedInputStream::ReadTagFallback(v15, v21);
LABEL_12:
        v15->last_tag_ = v21;
        v13 = v18;
        goto LABEL_5;
      }
    }
    Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v15, v18);
    v15 = os->stream_;
    v18 = Varint32Fallback;
    v20 = (char *)v15->buffer_;
    buffer_end = v15->buffer_end_;
    goto LABEL_9;
  }
LABEL_5:
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, __int64))ow->_vptr_ObjectWriter
   + 7))(
    ow,
    ptr,
    length,
    v13);
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 468: range 000000000C95D540-000000000C95D682
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderUInt32(
        google::protobuf::util::Status *retstr,
        const google::protobuf::util::converter::ProtoStreamObjectSource *os,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece field_name,
        google::protobuf::util::converter::ObjectWriter *ow)
{
  google::protobuf::stringpiece_ssize_type length; // rdx
  const char *ptr; // r15
  google::protobuf::io::CodedInputStream *stream; // rbx
  char *buffer; // rax
  google::protobuf::uint32 v10; // ebp
  google::protobuf::stringpiece_ssize_type v11; // r8
  google::protobuf::uint32 TagFallback; // eax
  google::protobuf::io::CodedInputStream *v14; // rbx
  char *v15; // rcx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint32 Varint32Fallback; // eax
  char *v18; // rcx
  google::protobuf::uint32 v19; // esi
  google::protobuf::uint32 v20; // eax
  google::protobuf::stringpiece_ssize_type v21; // [rsp+8h] [rbp-40h]
  google::protobuf::stringpiece_ssize_type v22; // [rsp+8h] [rbp-40h]
  google::protobuf::stringpiece_ssize_type v23; // [rsp+8h] [rbp-40h]

  length = field_name.length_;
  ptr = field_name.ptr_;
  stream = os->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_ >= stream->buffer_end_ )
  {
    v10 = 0;
    goto LABEL_3;
  }
  v10 = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    v21 = v11;
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, v10);
    length = v21;
    v10 = TagFallback;
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = v10;
  if ( v10 )
  {
    v14 = os->stream_;
    v15 = (char *)v14->buffer_;
    buffer_end = v14->buffer_end_;
    if ( v14->buffer_ >= buffer_end )
    {
      v10 = 0;
    }
    else
    {
      v10 = (unsigned __int8)*v15;
      if ( *v15 >= 0 )
      {
        v18 = v15 + 1;
        v14->buffer_ = (const google::protobuf::uint8 *)v18;
LABEL_9:
        if ( buffer_end <= (const google::protobuf::uint8 *)v18 )
        {
          v19 = 0;
        }
        else
        {
          v19 = (unsigned __int8)*v18;
          if ( *v18 >= 0 )
          {
            v14->buffer_ = (const google::protobuf::uint8 *)(v18 + 1);
            goto LABEL_12;
          }
        }
        v23 = length;
        v20 = google::protobuf::io::CodedInputStream::ReadTagFallback(v14, v19);
        length = v23;
        v19 = v20;
LABEL_12:
        v14->last_tag_ = v19;
        goto LABEL_5;
      }
    }
    v22 = length;
    Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(os->stream_, v10);
    v14 = os->stream_;
    length = v22;
    v10 = Varint32Fallback;
    v18 = (char *)v14->buffer_;
    buffer_end = v14->buffer_end_;
    goto LABEL_9;
  }
LABEL_5:
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, _QWORD))ow->_vptr_ObjectWriter
   + 8))(
    ow,
    ptr,
    length,
    v10);
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 482: range 000000000C95D2D0-000000000C95D3F2
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderBool(
        google::protobuf::util::Status *retstr,
        const google::protobuf::util::converter::ProtoStreamObjectSource *os,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece field_name,
        google::protobuf::util::converter::ObjectWriter *ow)
{
  google::protobuf::stringpiece_ssize_type length; // r15
  const char *ptr; // r14
  google::protobuf::io::CodedInputStream *stream; // rbx
  char *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  _BOOL8 v12; // rcx
  google::protobuf::io::CodedInputStream *v14; // rbx
  const google::protobuf::uint8 *v15; // rdx
  const google::protobuf::uint8 *buffer_end; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 first; // rax
  char *v19; // rdx
  google::protobuf::uint32 v20; // esi
  google::protobuf::uint32 v21; // eax
  google::protobuf::uint64 buffer64; // [rsp+8h] [rbp-40h]

  length = field_name.length_;
  ptr = field_name.ptr_;
  stream = os->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_ >= stream->buffer_end_ )
  {
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, TagFallback);
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = TagFallback;
  v12 = 0LL;
  if ( TagFallback )
  {
    v14 = os->stream_;
    v15 = v14->buffer_;
    buffer_end = v14->buffer_end_;
    if ( v14->buffer_ < buffer_end && (v17 = *v15, (v17 & 0x80u) == 0LL) )
    {
      v19 = (char *)(v15 + 1);
      v14->buffer_ = (const google::protobuf::uint8 *)v19;
    }
    else
    {
      first = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(os->stream_).first;
      v14 = os->stream_;
      v17 = first;
      v19 = (char *)v14->buffer_;
      buffer_end = v14->buffer_end_;
    }
    if ( buffer_end <= (const google::protobuf::uint8 *)v19 )
    {
      v20 = 0;
    }
    else
    {
      v20 = (unsigned __int8)*v19;
      if ( *v19 >= 0 )
      {
        v14->buffer_ = (const google::protobuf::uint8 *)(v19 + 1);
        goto LABEL_12;
      }
    }
    buffer64 = v17;
    v21 = google::protobuf::io::CodedInputStream::ReadTagFallback(v14, v20);
    v17 = buffer64;
    v20 = v21;
LABEL_12:
    v14->last_tag_ = v20;
    v12 = v17 != 0;
  }
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, _BOOL8))ow->_vptr_ObjectWriter
   + 6))(
    ow,
    ptr,
    length,
    v12);
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 497: range 000000000C95D800-000000000C95D962
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderString(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        const google::protobuf::Type *a3,
        google::protobuf::StringPiece a4,
        google::protobuf::util::converter::ObjectWriter *a5)
{
  const char *ptr; // r15
  google::protobuf::stringpiece_ssize_type length; // r14
  google::protobuf::io::CodedInputStream *stream; // r13
  char *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  std::string::size_type M_string_length; // r8
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rcx
  google::protobuf::io::CodedInputStream *v16; // rdi
  char *v17; // rax
  google::protobuf::uint32 v18; // edx
  google::protobuf::uint32 Varint32Fallback; // eax
  google::protobuf::io::CodedInputStream *v20; // rbx
  char *v21; // rax
  google::protobuf::uint32 v22; // esi
  std::string v23[2]; // [rsp+0h] [rbp-58h] BYREF

  ptr = a4.ptr_;
  length = a4.length_;
  stream = a2->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_ >= stream->buffer_end_ )
  {
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, TagFallback);
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = TagFallback;
  M_string_length = 0LL;
  v23[0]._M_dataplus._M_p = v23[0]._anon_0._M_local_buf;
  p_anon_0 = &v23[0]._anon_0;
  v23[0]._M_string_length = 0LL;
  v23[0]._anon_0._M_local_buf[0] = 0;
  if ( !TagFallback )
    goto LABEL_5;
  v16 = a2->stream_;
  v17 = (char *)v16->buffer_;
  if ( v16->buffer_ >= v16->buffer_end_ )
  {
    v18 = 0;
    goto LABEL_10;
  }
  v18 = (unsigned __int8)*v17;
  if ( *v17 < 0 )
  {
LABEL_10:
    Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v16, v18);
    v16 = a2->stream_;
    v18 = Varint32Fallback;
    goto LABEL_11;
  }
  v16->buffer_ = (const google::protobuf::uint8 *)(v17 + 1);
LABEL_11:
  google::protobuf::io::CodedInputStream::ReadString(v16, v23, v18);
  v20 = a2->stream_;
  v21 = (char *)v20->buffer_;
  if ( v20->buffer_ >= v20->buffer_end_ )
  {
    v22 = 0;
  }
  else
  {
    v22 = (unsigned __int8)*v21;
    if ( *v21 >= 0 )
    {
      v20->buffer_ = (const google::protobuf::uint8 *)(v21 + 1);
      goto LABEL_14;
    }
  }
  v22 = google::protobuf::io::CodedInputStream::ReadTagFallback(v20, v22);
LABEL_14:
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23[0]._M_dataplus._M_p;
  M_string_length = v23[0]._M_string_length;
  v20->last_tag_ = v22;
LABEL_5:
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, std::string::$CFBEC286C7F52157F7E59FC354047095 *, std::string::size_type))a5->_vptr_ObjectWriter
   + 13))(
    a5,
    ptr,
    length,
    p_anon_0,
    M_string_length);
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23[0]._M_dataplus._M_p != &v23[0]._anon_0 )
    operator delete(v23[0]._M_dataplus._M_p);
  return this;
};

// Line 513: range 000000000C95D690-000000000C95D7F2
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderBytes(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        const google::protobuf::Type *a3,
        google::protobuf::StringPiece a4,
        google::protobuf::util::converter::ObjectWriter *a5)
{
  const char *ptr; // r15
  google::protobuf::stringpiece_ssize_type length; // r14
  google::protobuf::io::CodedInputStream *stream; // r13
  char *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  std::string::size_type M_string_length; // r8
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rcx
  google::protobuf::io::CodedInputStream *v16; // rdi
  char *v17; // rax
  google::protobuf::uint32 v18; // edx
  google::protobuf::uint32 Varint32Fallback; // eax
  google::protobuf::io::CodedInputStream *v20; // rbx
  char *v21; // rax
  google::protobuf::uint32 v22; // esi
  std::string v23[2]; // [rsp+0h] [rbp-58h] BYREF

  ptr = a4.ptr_;
  length = a4.length_;
  stream = a2->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_ >= stream->buffer_end_ )
  {
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, TagFallback);
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = TagFallback;
  M_string_length = 0LL;
  v23[0]._M_dataplus._M_p = v23[0]._anon_0._M_local_buf;
  p_anon_0 = &v23[0]._anon_0;
  v23[0]._M_string_length = 0LL;
  v23[0]._anon_0._M_local_buf[0] = 0;
  if ( !TagFallback )
    goto LABEL_5;
  v16 = a2->stream_;
  v17 = (char *)v16->buffer_;
  if ( v16->buffer_ >= v16->buffer_end_ )
  {
    v18 = 0;
    goto LABEL_10;
  }
  v18 = (unsigned __int8)*v17;
  if ( *v17 < 0 )
  {
LABEL_10:
    Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v16, v18);
    v16 = a2->stream_;
    v18 = Varint32Fallback;
    goto LABEL_11;
  }
  v16->buffer_ = (const google::protobuf::uint8 *)(v17 + 1);
LABEL_11:
  google::protobuf::io::CodedInputStream::ReadString(v16, v23, v18);
  v20 = a2->stream_;
  v21 = (char *)v20->buffer_;
  if ( v20->buffer_ >= v20->buffer_end_ )
  {
    v22 = 0;
  }
  else
  {
    v22 = (unsigned __int8)*v21;
    if ( *v21 >= 0 )
    {
      v20->buffer_ = (const google::protobuf::uint8 *)(v21 + 1);
      goto LABEL_14;
    }
  }
  v22 = google::protobuf::io::CodedInputStream::ReadTagFallback(v20, v22);
LABEL_14:
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23[0]._M_dataplus._M_p;
  M_string_length = v23[0]._M_string_length;
  v20->last_tag_ = v22;
LABEL_5:
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, std::string::$CFBEC286C7F52157F7E59FC354047095 *, std::string::size_type))a5->_vptr_ObjectWriter
   + 14))(
    a5,
    ptr,
    length,
    p_anon_0,
    M_string_length);
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23[0]._M_dataplus._M_p != &v23[0]._anon_0 )
    operator delete(v23[0]._M_dataplus._M_p);
  return this;
};

// Line 529: range 000000000C960E00-000000000C960F9A
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderStruct(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        const google::protobuf::Type *a3,
        google::protobuf::StringPiece a4,
        google::protobuf::util::converter::ObjectWriter *a5)
{
  __int64 length; // r15
  google::protobuf::io::CodedInputStream *stream; // rdx
  char *buffer; // rax
  google::protobuf::uint32 v10; // ebp
  google::protobuf::uint32 TagFallback; // eax
  int (**vptr_ObjectWriter)(...); // rax
  const google::protobuf::Field *v13; // r14
  google::protobuf::StringPiece v15; // rdx
  const char *ptr; // [rsp+10h] [rbp-A8h]
  google::protobuf::io::CodedInputStream *v17; // [rsp+18h] [rbp-A0h]
  google::protobuf::util::Status v18; // [rsp+20h] [rbp-98h] BYREF
  google::protobuf::util::converter::ProtoStreamObjectSource other; // [rsp+50h] [rbp-68h] BYREF

  length = a4.length_;
  stream = a2->stream_;
  ptr = a4.ptr_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_end_ <= stream->buffer_ )
  {
    v10 = 0;
  }
  else
  {
    v10 = (unsigned __int8)*buffer;
    if ( *buffer >= 0 )
    {
      stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
      goto LABEL_4;
    }
  }
  v17 = a2->stream_;
  TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, v10);
  stream = v17;
  v10 = TagFallback;
LABEL_4:
  vptr_ObjectWriter = a5->_vptr_ObjectWriter;
  stream->last_tag_ = v10;
  vptr_ObjectWriter[2](a5, ptr, length);
  while ( 1 )
  {
    do
    {
      if ( !v10 )
      {
        (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *))a5->_vptr_ObjectWriter + 3))(a5);
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
        return this;
      }
      v13 = google::protobuf::util::converter::ProtoStreamObjectSource::FindAndVerifyField(a2, a3, v10);
    }
    while ( !google::protobuf::util::converter::ProtoStreamObjectSource::IsMap(a2, v13) );
    v15.ptr_ = (const char *)v13;
    v15.length_ = (google::protobuf::stringpiece_ssize_type)ptr;
    google::protobuf::util::converter::ProtoStreamObjectSource::RenderMap(
      &other,
      a2,
      v15,
      length,
      (google::protobuf::util::converter::ObjectWriter *)v10,
      a5);
    if ( !LODWORD(other._vptr_ObjectSource) )
      v10 = *(_DWORD *)&other.use_lower_camel_for_enums_;
    google::protobuf::util::Status::Status(&v18, (const google::protobuf::util::Status *)&other);
    if ( (bool *)other.stream_ != &other.own_typeinfo_ )
      operator delete(other.stream_);
    if ( v18.error_code_ )
      break;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
      operator delete(v18.error_message_._M_dataplus._M_p);
  }
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &v18);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
    operator delete(v18.error_message_._M_dataplus._M_p);
  return this;
};

// Line 547: range 000000000C961350-000000000C9614D3
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderStructValue(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        const google::protobuf::Type *a3,
        google::protobuf::StringPiece a4,
        google::protobuf::util::converter::ObjectWriter *a5)
{
  google::protobuf::util::converter::ObjectWriter *length; // r13
  const char *ptr; // r12
  google::protobuf::io::CodedInputStream *stream; // rdx
  char *buffer; // rax
  google::protobuf::uint32 v10; // r9d
  google::protobuf::uint32 TagFallback; // eax
  const char *v12; // rcx
  google::protobuf::io::CodedInputStream *v13; // r15
  char *v14; // rax
  const google::protobuf::Field *v15; // rdx OVERLAPPED
  google::protobuf::uint32 v16; // r9d
  google::protobuf::io::CodedInputStream *v18; // [rsp+8h] [rbp-70h]
  google::protobuf::util::converter::ProtoStreamObjectSource other; // [rsp+10h] [rbp-68h] BYREF

  length = (google::protobuf::util::converter::ObjectWriter *)a4.length_;
  ptr = a4.ptr_;
  stream = a2->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_end_ <= stream->buffer_ )
  {
    v10 = 0;
    goto LABEL_3;
  }
  v10 = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    v18 = a2->stream_;
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, v10);
    stream = v18;
    v10 = TagFallback;
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = v10;
  if ( !v10 )
  {
LABEL_16:
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  while ( 1 )
  {
    v15 = google::protobuf::util::converter::ProtoStreamObjectSource::FindAndVerifyField(a2, a3, v10);
    if ( !v15 )
    {
      google::protobuf::internal::WireFormat::SkipField(a2->stream_, v16, 0LL);
      v13 = a2->stream_;
      v14 = (char *)v13->buffer_;
      if ( v13->buffer_ >= v13->buffer_end_ )
        goto LABEL_14;
      goto LABEL_10;
    }
    v12 = ptr;
    google::protobuf::util::converter::ProtoStreamObjectSource::RenderField(
      &other,
      (const google::protobuf::Field *)a2,
      *(google::protobuf::StringPiece *)&v15,
      length);
    if ( LODWORD(other._vptr_ObjectSource) )
      break;
    if ( (bool *)other.stream_ != &other.own_typeinfo_ )
      operator delete(other.stream_);
    v13 = a2->stream_;
    v14 = (char *)v13->buffer_;
    if ( v13->buffer_ >= v13->buffer_end_ )
    {
LABEL_14:
      v10 = 0;
      goto LABEL_11;
    }
LABEL_10:
    v10 = (unsigned __int8)*v14;
    if ( *v14 >= 0 )
    {
      v13->last_tag_ = v10;
      v13->buffer_ = (const google::protobuf::uint8 *)(v14 + 1);
      if ( !v10 )
        goto LABEL_16;
    }
    else
    {
LABEL_11:
      v10 = google::protobuf::io::CodedInputStream::ReadTagFallback(v13, v10);
      v13->last_tag_ = v10;
      if ( !v10 )
        goto LABEL_16;
    }
  }
  google::protobuf::util::Status::Status(
    (google::protobuf::util::Status *const)this,
    (const google::protobuf::util::Status *)&other);
  if ( (bool *)other.stream_ != &other.own_typeinfo_ )
    operator delete(other.stream_);
  return this;
};

// Line 564: range 000000000C95DB60-000000000C95DD4B
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderStructListValue(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        const google::protobuf::Type *a3,
        google::protobuf::StringPiece a4,
        google::protobuf::util::converter::ObjectWriter *a5)
{
  const char *ptr; // r14
  google::protobuf::stringpiece_ssize_type length; // r13
  google::protobuf::io::CodedInputStream *stream; // rdx
  char *buffer; // rax
  google::protobuf::uint32 v11; // ebp
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::Field *v14; // rdx
  google::protobuf::io::CodedInputStream *v15; // rdx
  char *v16; // rax
  google::protobuf::uint32 v17; // eax
  google::protobuf::io::CodedInputStream *v18; // [rsp+8h] [rbp-A0h]
  google::protobuf::io::CodedInputStream *v19; // [rsp+8h] [rbp-A0h]
  google::protobuf::util::Status v20; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+40h] [rbp-68h] BYREF
  google::protobuf::uint32 v22; // [rsp+68h] [rbp-40h]

  ptr = a4.ptr_;
  length = a4.length_;
  stream = a2->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_end_ <= stream->buffer_ )
  {
    v11 = 0;
    goto LABEL_3;
  }
  v11 = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    v18 = a2->stream_;
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, v11);
    stream = v18;
    v11 = TagFallback;
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = v11;
  if ( !v11 )
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))a5->_vptr_ObjectWriter
     + 4))(
      a5,
      ptr,
      length);
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *))a5->_vptr_ObjectWriter + 5))(a5);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = google::protobuf::util::converter::ProtoStreamObjectSource::FindAndVerifyField(a2, a3, v11);
      if ( v14 )
        break;
      google::protobuf::internal::WireFormat::SkipField(a2->stream_, v11, 0LL);
      v15 = a2->stream_;
      v16 = (char *)v15->buffer_;
      if ( v15->buffer_ >= v15->buffer_end_ )
      {
        v11 = 0;
      }
      else
      {
        v11 = (unsigned __int8)*v16;
        if ( *v16 >= 0 )
        {
          v15->buffer_ = (const google::protobuf::uint8 *)(v16 + 1);
          goto LABEL_19;
        }
      }
      v19 = a2->stream_;
      v17 = google::protobuf::io::CodedInputStream::ReadTagFallback(v19, v11);
      v15 = v19;
      v11 = v17;
LABEL_19:
      v15->last_tag_ = v11;
      if ( !v11 )
        goto LABEL_20;
    }
    (*((void (__fastcall **)(google::protobuf::util::Status *, const google::protobuf::util::converter::ProtoStreamObjectSource *, const google::protobuf::Field *, const char *, google::protobuf::stringpiece_ssize_type, _QWORD, google::protobuf::util::converter::ObjectWriter *))a2->_vptr_ObjectSource
     + 5))(
      &other,
      a2,
      v14,
      ptr,
      length,
      v11,
      a5);
    if ( other.error_code_ == OK )
      v11 = v22;
    google::protobuf::util::Status::Status(&v20, &other);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( v20.error_code_ )
      break;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20.error_message_._M_dataplus._M_p != &v20.error_message_._anon_0 )
      operator delete(v20.error_message_._M_dataplus._M_p);
    if ( !v11 )
    {
LABEL_20:
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      return this;
    }
  }
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &v20);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20.error_message_._M_dataplus._M_p != &v20.error_message_._anon_0 )
    operator delete(v20.error_message_._M_dataplus._M_p);
  return this;
};

// Line 589: range 000000000C961A70-000000000C961F8A
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderAny(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece a4,
        google::protobuf::util::converter::ObjectWriter *a5)
{
  google::protobuf::io::CodedInputStream *stream; // rdi
  char *v9; // rax
  google::protobuf::uint32 TagFallback; // r9d
  const google::protobuf::Field *v11; // rax
  google::protobuf::uint32 v12; // r9d
  google::protobuf::int32 number; // edx
  char *v14; // rcx
  const google::protobuf::uint8 *buffer_end; // rax
  int (**vptr_ObjectWriter)(...); // rax
  google::protobuf::uint32 v18; // edx
  google::protobuf::uint32 Varint32Fallback; // edx
  google::protobuf::Type *v20; // r12
  google::protobuf::StringPiece v21; // rdx
  google::protobuf::StringPiece v22; // rdx
  __int64 v23; // [rsp-8h] [rbp-1A8h]
  google::protobuf::stringpiece_ssize_type length; // [rsp+8h] [rbp-198h]
  const char *ptr; // [rsp+10h] [rbp-190h]
  google::protobuf::io::CodedInputStream *input; // [rsp+18h] [rbp-188h]
  std::string buffer; // [rsp+20h] [rbp-180h] BYREF
  std::string v28; // [rsp+40h] [rbp-160h] BYREF
  google::protobuf::io::ArrayInputStream v29; // [rsp+60h] [rbp-140h] BYREF
  google::protobuf::util::converter::ProtoStreamObjectSource other; // [rsp+80h] [rbp-120h] BYREF
  google::protobuf::StringPiece v31; // [rsp+B8h] [rbp-E8h]
  char v32; // [rsp+C8h] [rbp-D8h] BYREF
  google::protobuf::Type *v33; // [rsp+D8h] [rbp-C8h]
  google::protobuf::util::converter::ProtoStreamObjectSource v34; // [rsp+E0h] [rbp-C0h] BYREF
  google::protobuf::io::CodedInputStream v35; // [rsp+120h] [rbp-80h] BYREF

  stream = a2->stream_;
  buffer._M_dataplus._M_p = buffer._anon_0._M_local_buf;
  buffer._anon_0._M_local_buf[0] = 0;
  v28._anon_0._M_local_buf[0] = 0;
  v9 = (char *)stream->buffer_;
  ptr = a4.ptr_;
  length = a4.length_;
  buffer._M_string_length = 0LL;
  v28._M_dataplus._M_p = v28._anon_0._M_local_buf;
  v28._M_string_length = 0LL;
  input = stream;
  if ( stream->buffer_end_ <= (const google::protobuf::uint8 *)v9 )
  {
LABEL_25:
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*v9;
  if ( *v9 < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
    goto LABEL_4;
  }
  ++stream->buffer_;
LABEL_4:
  input->last_tag_ = TagFallback;
  if ( TagFallback )
  {
    while ( 1 )
    {
      v11 = google::protobuf::util::converter::ProtoStreamObjectSource::FindAndVerifyField(a2, type, TagFallback);
      input = a2->stream_;
      if ( !v11 )
      {
        google::protobuf::internal::WireFormat::SkipField(input, v12, 0LL);
        goto LABEL_24;
      }
      number = v11->number_;
      v14 = (char *)input->buffer_;
      buffer_end = input->buffer_end_;
      if ( number == 1 )
        break;
      if ( number == 2 )
      {
        if ( v14 >= (char *)buffer_end )
        {
          Varint32Fallback = 0;
LABEL_28:
          Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, Varint32Fallback);
          input = a2->stream_;
        }
        else
        {
          Varint32Fallback = (unsigned __int8)*v14;
          if ( *v14 < 0 )
            goto LABEL_28;
          input->buffer_ = (const google::protobuf::uint8 *)(v14 + 1);
        }
        google::protobuf::io::CodedInputStream::ReadString(input, &v28, Varint32Fallback);
LABEL_24:
        input = a2->stream_;
        v14 = (char *)input->buffer_;
        if ( input->buffer_end_ <= input->buffer_ )
          goto LABEL_25;
        goto LABEL_9;
      }
      if ( buffer_end <= (const google::protobuf::uint8 *)v14 )
        goto LABEL_25;
LABEL_9:
      TagFallback = (unsigned __int8)*v14;
      if ( *v14 < 0 )
        goto LABEL_3;
      input->buffer_ = (const google::protobuf::uint8 *)(v14 + 1);
      input->last_tag_ = TagFallback;
      if ( !TagFallback )
        goto LABEL_11;
    }
    if ( v14 >= (char *)buffer_end )
    {
      v18 = 0;
    }
    else
    {
      v18 = (unsigned __int8)*v14;
      if ( *v14 >= 0 )
      {
        input->buffer_ = (const google::protobuf::uint8 *)(v14 + 1);
        goto LABEL_23;
      }
    }
    v18 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v18);
    input = a2->stream_;
LABEL_23:
    google::protobuf::io::CodedInputStream::ReadString(input, &buffer, v18);
    goto LABEL_24;
  }
LABEL_11:
  if ( v28._M_string_length )
  {
    if ( buffer._M_string_length )
    {
      (*((void (__fastcall **)(int *, const google::protobuf::util::converter::TypeInfo *, std::string::pointer))a2->typeinfo_->_vptr_TypeInfo
       + 2))(
        &other.max_recursion_depth_,
        a2->typeinfo_,
        buffer._M_dataplus._M_p);
      if ( other.max_recursion_depth_ )
      {
        google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INTERNAL, v31);
      }
      else
      {
        v20 = v33;
        google::protobuf::io::ArrayInputStream::ArrayInputStream(&v29, v28._M_dataplus._M_p, v28._M_string_length, -1);
        v35.buffer_ = 0LL;
        v35.input_ = &v29;
        v35.buffer_end_ = 0LL;
        *(_QWORD *)&v35.total_bytes_read_ = 0LL;
        v35.last_tag_ = 0;
        *(_WORD *)&v35.legitimate_message_end_ = 0;
        *(_QWORD *)&v35.current_limit_ = 0x7FFFFFFFLL;
        v35.total_bytes_limit_ = 0x7FFFFFFF;
        v35.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
        v35.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
        v35.disable_strict_correctness_enforcement_ = 1;
        v35.extension_pool_ = 0LL;
        v35.extension_factory_ = 0LL;
        google::protobuf::io::CodedInputStream::Refresh(&v35);
        google::protobuf::util::converter::ProtoStreamObjectSource::ProtoStreamObjectSource(
          &v34,
          &v35,
          a2->typeinfo_,
          v20);
        (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))a5->_vptr_ObjectWriter
         + 2))(
          a5,
          ptr,
          length);
        (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, __int64, std::string::pointer, std::string::size_type))a5->_vptr_ObjectWriter
         + 13))(
          a5,
          "@type",
          5LL,
          buffer._M_dataplus._M_p,
          buffer._M_string_length);
        v21.length_ = 455333713LL;
        v21.ptr_ = (const char *)v34.type_;
        google::protobuf::util::converter::ProtoStreamObjectSource::WriteMessage(
          &other,
          &v34,
          v21,
          5LL,
          0,
          0LL,
          (__int64)a5);
        (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, google::protobuf::util::converter::ProtoStreamObjectSource *, __int64))a5->_vptr_ObjectWriter
         + 3))(
          a5,
          &v34,
          v23);
        google::protobuf::util::Status::Status(
          (google::protobuf::util::Status *const)this,
          (const google::protobuf::util::Status *)&other);
        if ( (bool *)other.stream_ != &other.own_typeinfo_ )
          operator delete(other.stream_);
        v34._vptr_ObjectSource = (int (**)(...))off_1A184BC8;
        if ( v34.own_typeinfo_ )
          google::protobuf::util::converter::ProtoStreamObjectSource::~ProtoStreamObjectSource(&v34);
        google::protobuf::io::CodedInputStream::~CodedInputStream(&v35);
      }
      if ( v31.ptr_ != &v32 )
        operator delete((void *)v31.ptr_);
    }
    else
    {
      v22.ptr_ = "Invalid Any, the type_url is missing.";
      v22.length_ = 37LL;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INTERNAL, v22);
    }
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))a5->_vptr_ObjectWriter
     + 2))(
      a5,
      ptr,
      length);
    vptr_ObjectWriter = a5->_vptr_ObjectWriter;
    if ( buffer._M_string_length )
    {
      vptr_ObjectWriter[13](a5, "@type", 5LL, buffer._M_dataplus._M_p);
      vptr_ObjectWriter = a5->_vptr_ObjectWriter;
    }
    vptr_ObjectWriter[3](a5);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28._M_dataplus._M_p != &v28._anon_0 )
    operator delete(v28._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer._M_dataplus._M_p != &buffer._anon_0 )
    operator delete(buffer._M_dataplus._M_p);
  return this;
};

// Line 664: range 000000000C95DD50-000000000C95E004
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderFieldMask(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::util::converter::ProtoStreamObjectSource *a2,
        const google::protobuf::Type *type,
        google::protobuf::StringPiece a4,
        google::protobuf::util::converter::ObjectWriter *a5)
{
  google::protobuf::io::CodedInputStream *stream; // rbx
  char *v9; // rax
  google::protobuf::uint32 TagFallback; // ebp
  google::protobuf::uint32 v11; // eax
  const google::protobuf::Field *v12; // rax
  google::protobuf::StringPiece v13; // rdx
  google::protobuf::io::CodedInputStream *v15; // rdi
  char *v16; // rax
  google::protobuf::uint32 v17; // edx
  google::protobuf::uint32 Varint32Fallback; // eax
  google::protobuf::io::CodedInputStream *v19; // rbx
  char *v20; // rax
  google::protobuf::uint32 v21; // esi
  const char *ptr; // [rsp+8h] [rbp-B0h]
  google::protobuf::stringpiece_ssize_type length; // [rsp+10h] [rbp-A8h]
  void *v25; // [rsp+20h] [rbp-98h] BYREF
  __int64 v26; // [rsp+28h] [rbp-90h]
  char v27[16]; // [rsp+30h] [rbp-88h] BYREF
  std::string buffer; // [rsp+40h] [rbp-78h] BYREF
  void *v29[2]; // [rsp+60h] [rbp-58h] BYREF
  char v30; // [rsp+70h] [rbp-48h] BYREF

  stream = a2->stream_;
  v27[0] = 0;
  v25 = v27;
  v9 = (char *)stream->buffer_;
  ptr = a4.ptr_;
  length = a4.length_;
  v26 = 0LL;
  if ( stream->buffer_end_ <= (const google::protobuf::uint8 *)v9 )
  {
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*v9;
  if ( *v9 < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(stream, TagFallback);
    goto LABEL_4;
  }
  ++stream->buffer_;
LABEL_4:
  stream->last_tag_ = TagFallback;
  v11 = 0;
  if ( TagFallback )
  {
    while ( 1 )
    {
      if ( v11 )
      {
        if ( TagFallback != v11 )
          goto LABEL_8;
      }
      else
      {
        v12 = google::protobuf::util::converter::ProtoStreamObjectSource::FindAndVerifyField(a2, type, TagFallback);
        if ( !v12 || v12->number_ != 1 || (unsigned int)std::string::compare(v12->name_.ptr_, "paths") )
        {
LABEL_8:
          v13.ptr_ = "Invalid FieldMask, unexpected field.";
          v13.length_ = 36LL;
          google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INTERNAL, v13);
          goto LABEL_9;
        }
      }
      v15 = a2->stream_;
      buffer._anon_0._M_local_buf[0] = 0;
      buffer._M_dataplus._M_p = buffer._anon_0._M_local_buf;
      buffer._M_string_length = 0LL;
      v16 = (char *)v15->buffer_;
      if ( v15->buffer_ >= v15->buffer_end_ )
        break;
      v17 = (unsigned __int8)*v16;
      if ( *v16 < 0 )
        goto LABEL_15;
      v15->buffer_ = (const google::protobuf::uint8 *)(v16 + 1);
LABEL_16:
      google::protobuf::io::CodedInputStream::ReadString(v15, &buffer, v17);
      if ( v26 )
      {
        if ( v26 == 0x3FFFFFFFFFFFFFFFLL )
          std::__throw_length_error("basic_string::append");
        std::string::_M_append(&v25, ",", 1LL);
      }
      google::protobuf::util::converter::ConvertFieldMaskPath(
        v29,
        buffer._M_dataplus._M_p,
        buffer._M_string_length,
        (void (__fastcall *)(void **, const char *, google::protobuf::stringpiece_ssize_type))google::protobuf::util::converter::ToCamelCase[abi:cxx11]);
      std::string::_M_append(&v25, (const char *)v29[0], v29[1]);
      if ( v29[0] != &v30 )
        operator delete(v29[0]);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer._M_dataplus._M_p != &buffer._anon_0 )
        operator delete(buffer._M_dataplus._M_p);
      v19 = a2->stream_;
      v20 = (char *)v19->buffer_;
      if ( v19->buffer_ >= v19->buffer_end_ )
      {
        v21 = 0;
LABEL_25:
        v21 = google::protobuf::io::CodedInputStream::ReadTagFallback(a2->stream_, v21);
        v11 = TagFallback;
        v19->last_tag_ = v21;
        if ( !v21 )
          goto LABEL_29;
        goto LABEL_26;
      }
      v21 = (unsigned __int8)*v20;
      if ( *v20 < 0 )
        goto LABEL_25;
      ++v19->buffer_;
      v11 = TagFallback;
      v19->last_tag_ = v21;
      if ( !v21 )
        goto LABEL_29;
LABEL_26:
      TagFallback = v21;
    }
    v17 = 0;
LABEL_15:
    Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v15, v17);
    v15 = a2->stream_;
    v17 = Varint32Fallback;
    goto LABEL_16;
  }
LABEL_29:
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, void *, __int64))a5->_vptr_ObjectWriter
   + 13))(
    a5,
    ptr,
    length,
    v25,
    v26);
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
LABEL_9:
  if ( v25 != v27 )
    operator delete(v25);
  return this;
};

// Line 698: range 000000000C961F90-000000000C962460
void __fastcall google::protobuf::util::converter::ProtoStreamObjectSource::InitRendererMap(
        google::protobuf::util::converter::ProtoStreamObjectSource *this)
{
  google::protobuf::hash_map<std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*),google::protobuf::hash<std::string >,std::equal_to<std::string >,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> > > *v1; // rax
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,true> > >::__bucket_type *p_M_single_bucket; // r12
  google::protobuf::hash_map<std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*),google::protobuf::hash<std::string >,std::equal_to<std::string >,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> > > *v3; // r13
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,true> > > *bkt; // rax
  std::forward_iterator_tag v5; // cl
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,true> > > *v6; // rbp
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v7; // rax
  std::forward_iterator_tag v8; // cl
  std::string *M_p; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v10; // rax
  std::forward_iterator_tag v11; // cl
  std::string *v12; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v13; // rax
  std::forward_iterator_tag v14; // cl
  std::string *v15; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v16; // rax
  std::forward_iterator_tag v17; // cl
  std::string *v18; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v19; // rax
  std::forward_iterator_tag v20; // cl
  std::string *v21; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v22; // rax
  std::forward_iterator_tag v23; // cl
  std::string *v24; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v25; // rax
  std::forward_iterator_tag v26; // cl
  std::string *v27; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v28; // rax
  std::forward_iterator_tag v29; // cl
  std::string *v30; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v31; // rax
  std::forward_iterator_tag v32; // cl
  std::string *v33; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v34; // rax
  std::forward_iterator_tag v35; // cl
  std::string *v36; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v37; // rax
  std::forward_iterator_tag v38; // cl
  std::string *v39; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v40; // rax
  std::forward_iterator_tag v41; // cl
  std::string *v42; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v43; // rax
  std::forward_iterator_tag v44; // cl
  std::string *v45; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v46; // rax
  std::forward_iterator_tag v47; // cl
  std::string *v48; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v49; // rax
  std::forward_iterator_tag v50; // cl
  std::string *v51; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v52; // rax
  std::string *v53; // rdi
  std::string v54[2]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (google::protobuf::hash_map<std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*),google::protobuf::hash<std::string >,std::equal_to<std::string >,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> > > *)operator new(0x38uLL);
  p_M_single_bucket = &v1->_M_h._M_single_bucket;
  v1->_M_h._M_bucket_count = 1LL;
  v3 = v1;
  v1->_M_h._M_buckets = &v1->_M_h._M_single_bucket;
  v1->_M_h._M_before_begin._M_nxt = 0LL;
  v1->_M_h._M_element_count = 0LL;
  v1->_M_h._M_rehash_policy._M_max_load_factor = 1.0;
  v1->_M_h._M_rehash_policy._M_next_resize = 0LL;
  v1->_M_h._M_single_bucket = 0LL;
  bkt = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,true> > > *)std::__detail::_Prime_rehash_policy::_M_next_bkt(&v1->_M_h._M_rehash_policy, 0LL);
  v6 = bkt;
  if ( (unsigned __int64)bkt > v3->_M_h._M_bucket_count )
  {
    if ( bkt == (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,true> > > *)1 )
      v3->_M_h._M_single_bucket = 0LL;
    else
      p_M_single_bucket = std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,true>>>::_M_allocate_buckets(
                            bkt,
                            0LL);
    v3->_M_h._M_buckets = p_M_single_bucket;
    v3->_M_h._M_bucket_count = (std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type)v6;
  }
  google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11] = v3;
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.Timestamp", "", v5);
  v7 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
         v54);
  M_p = (std::string *)v54[0]._M_dataplus._M_p;
  *v7 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderTimestamp;
  if ( M_p != (std::string *)&v54[0]._anon_0 )
    operator delete(M_p);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.Duration", "", v8);
  v10 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v12 = (std::string *)v54[0]._M_dataplus._M_p;
  *v10 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderDuration;
  if ( v12 != (std::string *)&v54[0]._anon_0 )
    operator delete(v12);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.DoubleValue", "", v11);
  v13 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v15 = (std::string *)v54[0]._M_dataplus._M_p;
  *v13 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderDouble;
  if ( v15 != (std::string *)&v54[0]._anon_0 )
    operator delete(v15);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.FloatValue", "", v14);
  v16 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v18 = (std::string *)v54[0]._M_dataplus._M_p;
  *v16 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderFloat;
  if ( v18 != (std::string *)&v54[0]._anon_0 )
    operator delete(v18);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.Int64Value", "", v17);
  v19 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v21 = (std::string *)v54[0]._M_dataplus._M_p;
  *v19 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderInt64;
  if ( v21 != (std::string *)&v54[0]._anon_0 )
    operator delete(v21);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.UInt64Value", "", v20);
  v22 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v24 = (std::string *)v54[0]._M_dataplus._M_p;
  *v22 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderUInt64;
  if ( v24 != (std::string *)&v54[0]._anon_0 )
    operator delete(v24);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.Int32Value", "", v23);
  v25 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v27 = (std::string *)v54[0]._M_dataplus._M_p;
  *v25 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderInt32;
  if ( v27 != (std::string *)&v54[0]._anon_0 )
    operator delete(v27);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.UInt32Value", "", v26);
  v28 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v30 = (std::string *)v54[0]._M_dataplus._M_p;
  *v28 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderUInt32;
  if ( v30 != (std::string *)&v54[0]._anon_0 )
    operator delete(v30);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.BoolValue", "", v29);
  v31 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v33 = (std::string *)v54[0]._M_dataplus._M_p;
  *v31 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderBool;
  if ( v33 != (std::string *)&v54[0]._anon_0 )
    operator delete(v33);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.StringValue", "", v32);
  v34 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v36 = (std::string *)v54[0]._M_dataplus._M_p;
  *v34 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderString;
  if ( v36 != (std::string *)&v54[0]._anon_0 )
    operator delete(v36);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.BytesValue", "", v35);
  v37 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v39 = (std::string *)v54[0]._M_dataplus._M_p;
  *v37 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderBytes;
  if ( v39 != (std::string *)&v54[0]._anon_0 )
    operator delete(v39);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.Any", "", v38);
  v40 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v42 = (std::string *)v54[0]._M_dataplus._M_p;
  *v40 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderAny;
  if ( v42 != (std::string *)&v54[0]._anon_0 )
    operator delete(v42);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.Struct", "", v41);
  v43 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v45 = (std::string *)v54[0]._M_dataplus._M_p;
  *v43 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderStruct;
  if ( v45 != (std::string *)&v54[0]._anon_0 )
    operator delete(v45);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.Value", "", v44);
  v46 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v48 = (std::string *)v54[0]._M_dataplus._M_p;
  *v46 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderStructValue;
  if ( v48 != (std::string *)&v54[0]._anon_0 )
    operator delete(v48);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.ListValue", "", v47);
  v49 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v51 = (std::string *)v54[0]._M_dataplus._M_p;
  *v49 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderStructListValue;
  if ( v51 != (std::string *)&v54[0]._anon_0 )
    operator delete(v51);
  v54[0]._M_dataplus._M_p = v54[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v54, "google.protobuf.FieldMask", "", v50);
  v52 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11],
          v54);
  v53 = (std::string *)v54[0]._M_dataplus._M_p;
  *v52 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectSource::RenderFieldMask;
  if ( v53 != (std::string *)&v54[0]._anon_0 )
    operator delete(v53);
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)google::protobuf::util::converter::ProtoStreamObjectSource::DeleteRendererMap,
    (void (*)(void))v54);
};

// Line 734: range 000000000C95FD80-000000000C95FDAE
void __cdecl google::protobuf::util::converter::ProtoStreamObjectSource::DeleteRendererMap()
{
  google::protobuf::hash_map<std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*),google::protobuf::hash<std::string >,std::equal_to<std::string >,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> > > *v0; // rbp

  v0 = google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11];
  if ( google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11] )
  {
    std::_Hashtable<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(&google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11]->_M_h);
    operator delete(v0, 0x38uLL);
  }
  google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11] = 0LL;
};

// Line 741: range 000000000C9601C0-000000000C96026B
std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::FindTypeRenderer(
        std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type *__k)
{
  std::string::pointer M_p; // rdx
  std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code v2; // rcx
  __int64 i; // rax
  std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *result; // rax
  google::protobuf::internal::FunctionClosure0 v5; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::util::converter::source_renderers_init_ != 2 )
  {
    v5._vptr_Closure = (int (**)(...))off_1A16E058;
    v5.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::util::converter::ProtoStreamObjectSource::InitRendererMap;
    v5.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::util::converter::source_renderers_init_, &v5);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v5);
  }
  M_p = __k->_M_dataplus._M_p;
  v2 = 0LL;
  for ( i = *__k->_M_dataplus._M_p; (_BYTE)i; i = *M_p )
  {
    ++M_p;
    v2 = i + 5 * v2;
  }
  result = std::_Hashtable<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectSource const*,google::protobuf::Type const&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter *)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node(
             &google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11]->_M_h,
             v2
           % google::protobuf::util::converter::ProtoStreamObjectSource::renderers_[abi:cxx11]->_M_h._M_bucket_count,
             __k,
             v2);
  if ( result )
  {
    result = result->_M_nxt;
    if ( result )
      result += 5;
  }
  return result;
};

// Line 748: range 000000000C960270-000000000C96052F
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderField(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::Field *a2,
        google::protobuf::StringPiece a3,
        google::protobuf::util::converter::ObjectWriter *a4,
        __int64 a5)
{
  const char *ptr; // r15
  google::protobuf::stringpiece_ssize_type length; // r13
  google::protobuf::io::CodedInputStream *v12; // rdi
  char *buffer; // rax
  google::protobuf::uint32 v14; // esi
  google::protobuf::uint32 Varint32Fallback; // eax
  __int64 v16; // rax
  std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *TypeRenderer; // rax
  google::protobuf::io::CodedInputStream *v18; // rdi
  google::protobuf::StringPiece v19; // rdx
  __int64 v20; // rax
  int (**v21)(...); // rdx
  google::protobuf::io::CodedInputStream *v22; // rax
  void *stream; // rdi
  __int64 v24; // r11
  __int64 v25; // [rsp+0h] [rbp-C8h]
  google::protobuf::io::CodedInputStream::Limit limit; // [rsp+Ch] [rbp-BCh]
  google::protobuf::StringPiece v27; // [rsp+10h] [rbp-B8h] BYREF
  char v28; // [rsp+20h] [rbp-A8h] BYREF
  google::protobuf::strings::AlphaNum v29; // [rsp+30h] [rbp-98h] BYREF
  google::protobuf::util::converter::ProtoStreamObjectSource other; // [rsp+60h] [rbp-68h] BYREF

  ptr = a3.ptr_;
  length = a3.length_;
  if ( *((_DWORD *)a3.ptr_ + 18) != 11 )
  {
    google::protobuf::util::converter::ProtoStreamObjectSource::RenderNonMessageField(this, a2, a3, a4);
    return this;
  }
  v12 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
  buffer = (char *)v12->buffer_;
  if ( v12->buffer_ >= v12->buffer_end_ )
  {
    v14 = 0;
    goto LABEL_6;
  }
  v14 = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_6:
    Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v12, v14);
    v12 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
    v14 = Varint32Fallback;
    goto LABEL_7;
  }
  v12->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_7:
  limit = google::protobuf::io::CodedInputStream::PushLimit(v12, v14);
  v16 = (*(__int64 (__fastcall **)(google::protobuf::Arena *, _QWORD, _QWORD))(a2->options_.arena_->impl_.blocks_ + 24))(
          a2->options_.arena_,
          **((_QWORD **)ptr + 6),
          *(_QWORD *)(*((_QWORD *)ptr + 6) + 8LL));
  if ( !v16 )
  {
    v20 = *((_QWORD *)ptr + 6);
    v21 = *(int (***)(...))v20;
    v22 = *(google::protobuf::io::CodedInputStream **)(v20 + 8);
    v29.piece_data_ = "Invalid configuration. Could not find the type: ";
    v29.piece_size_ = 48LL;
    other._vptr_ObjectSource = v21;
    other.stream_ = v22;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v27, &v29, (const google::protobuf::strings::AlphaNum *)&other);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INTERNAL, v27);
    stream = (void *)v27.ptr_;
    if ( v27.ptr_ == &v28 )
      return this;
    goto LABEL_17;
  }
  v25 = v16;
  TypeRenderer = google::protobuf::util::converter::ProtoStreamObjectSource::FindTypeRenderer(*(std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(const google::protobuf::util::converter::ProtoStreamObjectSource*,const google::protobuf::Type&,google::protobuf::StringPiece,google::protobuf::util::converter::ObjectWriter*)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type **)(v16 + 88));
  if ( !TypeRenderer )
  {
    google::protobuf::util::converter::ProtoStreamObjectSource::IncrementRecursionDepth(
      &other,
      (google::protobuf::StringPiece)__PAIR128__(**(_QWORD **)(v25 + 88), (unsigned __int64)a2),
      (google::protobuf::StringPiece)__PAIR128__(length, *(_QWORD *)(*(_QWORD *)(v25 + 88) + 8LL)));
    v24 = v25;
    if ( LODWORD(other._vptr_ObjectSource) )
    {
LABEL_26:
      google::protobuf::util::Status::Status(
        (google::protobuf::util::Status *const)this,
        (const google::protobuf::util::Status *)&other);
      stream = other.stream_;
      if ( (bool *)other.stream_ == &other.own_typeinfo_ )
        return this;
      goto LABEL_17;
    }
    if ( (bool *)other.stream_ != &other.own_typeinfo_ )
    {
      operator delete(other.stream_);
      v24 = v25;
    }
    (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectSource *, const google::protobuf::Field *, __int64, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, _QWORD, __int64, __int64))a2->_vptr_MessageLite
     + 4))(
      &other,
      a2,
      v24,
      length,
      a4,
      0LL,
      1LL,
      a5);
    if ( !LODWORD(other._vptr_ObjectSource) )
    {
      if ( (bool *)other.stream_ != &other.own_typeinfo_ )
        operator delete(other.stream_);
      --HIDWORD(a2->name_.ptr_);
      goto LABEL_12;
    }
    google::protobuf::util::Status::Status(
      (google::protobuf::util::Status *const)this,
      (const google::protobuf::util::Status *)&other);
    stream = other.stream_;
    if ( (bool *)other.stream_ == &other.own_typeinfo_ )
      return this;
LABEL_17:
    operator delete(stream);
    return this;
  }
  ((void (__fastcall *)(google::protobuf::util::converter::ProtoStreamObjectSource *, const google::protobuf::Field *, __int64, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, __int64))TypeRenderer->_M_nxt)(
    &other,
    a2,
    v25,
    length,
    a4,
    a5);
  if ( LODWORD(other._vptr_ObjectSource) )
    goto LABEL_26;
  if ( (bool *)other.stream_ != &other.own_typeinfo_ )
    operator delete(other.stream_);
LABEL_12:
  v18 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
  if ( v18->legitimate_message_end_ )
  {
    google::protobuf::io::CodedInputStream::PopLimit(v18, limit);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
  }
  else
  {
    v19.ptr_ = "Nested protocol message not parsed in its entirety.";
    v19.length_ = 51LL;
    google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v19);
  }
  return this;
};

// Line 791: range 000000000C95E010-000000000C95E77F
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::RenderNonMessageField(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        const google::protobuf::Field *a2,
        google::protobuf::StringPiece a3,
        google::protobuf::util::converter::ObjectWriter *a4,
        __int64 *a5)
{
  const char *ptr; // rbx
  google::protobuf::stringpiece_ssize_type length; // r13
  google::protobuf::io::CodedInputStream *v11; // rdi
  const google::protobuf::uint8 *v12; // rdx
  unsigned __int64 v13; // rax
  google::protobuf::uint64 v14; // rcx
  google::protobuf::uint64 **v15; // rdi
  google::protobuf::uint64 *v16; // rax
  google::protobuf::uint32 **v17; // rdi
  google::protobuf::uint32 *v18; // rax
  unsigned int v19; // edx
  google::protobuf::io::CodedInputStream *v20; // rdi
  char *v21; // rax
  google::protobuf::io::CodedInputStream *v22; // rdi
  char *v23; // rax
  google::protobuf::uint64 v24; // rcx
  google::protobuf::io::CodedInputStream *v25; // rdi
  char *v26; // rax
  __int64 v27; // rcx
  google::protobuf::io::CodedInputStream *v28; // rdi
  google::protobuf::uint64 *v29; // rax
  google::protobuf::uint32 **v30; // rdi
  google::protobuf::uint32 *v31; // rax
  google::protobuf::io::CodedInputStream *v32; // rdi
  char *v33; // rax
  unsigned __int64 first; // rax
  google::protobuf::io::CodedInputStream *v35; // rdi
  char *v36; // rax
  google::protobuf::uint32 v37; // edx
  google::protobuf::io::CodedInputStream *v38; // rdi
  char *v39; // rax
  google::protobuf::uint32 v40; // edx
  google::protobuf::io::CodedInputStream *v41; // rdi
  char *v42; // rax
  google::protobuf::uint32 v43; // ecx
  google::protobuf::io::CodedInputStream *v44; // rdi
  char *v45; // rax
  google::protobuf::uint32 v46; // esi
  google::protobuf::uint32 **v47; // rdi
  google::protobuf::uint32 *v48; // rax
  google::protobuf::io::CodedInputStream *v49; // rdi
  google::protobuf::uint64 *v50; // rax
  google::protobuf::io::CodedInputStream *v51; // rdi
  char *v52; // rax
  google::protobuf::uint32 v53; // esi
  __int64 v54; // rax
  int v55; // edx
  __int64 v56; // rsi
  __int64 *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rax
  void (__fastcall *v61)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, google::protobuf::uint64, google::protobuf::uint64); // rbx
  google::protobuf::uint64 *v62; // rax
  google::protobuf::uint64 v63; // rcx
  google::protobuf::uint64 v64; // r8
  google::protobuf::uint32 Varint32Fallback; // [rsp+1Ch] [rbp-7Ch] BYREF
  std::string buffer; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::uint64 value[2]; // [rsp+40h] [rbp-58h] BYREF
  char v69; // [rsp+50h] [rbp-48h] BYREF

  buffer._M_dataplus._M_p = buffer._anon_0._M_local_buf;
  buffer._M_string_length = 0LL;
  buffer._anon_0._M_local_buf[0] = 0;
  ptr = a3.ptr_;
  length = a3.length_;
  switch ( *((_DWORD *)a3.ptr_ + 18) )
  {
    case 1:
      v15 = (google::protobuf::uint64 **)a2->_internal_metadata_.ptr_;
      v16 = *v15;
      if ( *((_DWORD *)v15 + 2) - *(_DWORD *)v15 <= 7 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
          (google::protobuf::io::CodedInputStream *const)v15,
          value);
      }
      else
      {
        value[0] = *v16;
        *v15 = v16 + 1;
      }
      (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *))(*a5 + 88))(
        a5,
        length,
        a4);
      goto LABEL_4;
    case 2:
      v17 = (google::protobuf::uint32 **)a2->_internal_metadata_.ptr_;
      v18 = *v17;
      if ( *((_DWORD *)v17 + 2) - *(_DWORD *)v17 <= 3 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
          (google::protobuf::io::CodedInputStream *const)v17,
          &Varint32Fallback);
        v19 = Varint32Fallback;
      }
      else
      {
        v19 = *v18;
        Varint32Fallback = *v18;
        *v17 = v18 + 1;
      }
      (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, double))(*a5 + 96))(
        a5,
        length,
        a4,
        *(double *)_mm_cvtsi32_si128(v19).m128i_i64);
      goto LABEL_4;
    case 3:
      v20 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v21 = (char *)v20->buffer_;
      if ( v20->buffer_ < v20->buffer_end_ && *v21 >= 0 )
      {
        value[0] = (unsigned __int8)*v21;
        v20->buffer_ = (const google::protobuf::uint8 *)(v21 + 1);
        v14 = value[0];
      }
      else
      {
        value[0] = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v20).first;
        v14 = value[0];
      }
      goto LABEL_57;
    case 4:
      v22 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v23 = (char *)v22->buffer_;
      if ( v22->buffer_ < v22->buffer_end_ && *v23 >= 0 )
      {
        value[0] = (unsigned __int8)*v23;
        v22->buffer_ = (const google::protobuf::uint8 *)(v23 + 1);
        v24 = value[0];
      }
      else
      {
        value[0] = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v22).first;
        v24 = value[0];
      }
      goto LABEL_28;
    case 5:
      v25 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v26 = (char *)v25->buffer_;
      if ( v25->buffer_ >= v25->buffer_end_ )
      {
        LODWORD(v27) = 0;
        goto LABEL_25;
      }
      v27 = (unsigned __int8)*v26;
      if ( *v26 < 0 )
      {
LABEL_25:
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v25, v27);
        v27 = Varint32Fallback;
        goto LABEL_54;
      }
      Varint32Fallback = (unsigned __int8)*v26;
      v25->buffer_ = (const google::protobuf::uint8 *)(v26 + 1);
      goto LABEL_54;
    case 6:
      v28 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v29 = (google::protobuf::uint64 *)v28->buffer_;
      if ( LODWORD(v28->buffer_end_) - LODWORD(v28->buffer_) <= 7 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(v28, value);
        v24 = value[0];
      }
      else
      {
        v24 = *v29;
        value[0] = *v29;
        v28->buffer_ = (const google::protobuf::uint8 *)(v29 + 1);
      }
LABEL_28:
      (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, google::protobuf::uint64))(*a5 + 80))(
        a5,
        length,
        a4,
        v24);
      goto LABEL_4;
    case 7:
      v30 = (google::protobuf::uint32 **)a2->_internal_metadata_.ptr_;
      v31 = *v30;
      if ( *((_DWORD *)v30 + 2) - *(_DWORD *)v30 <= 3 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
          (google::protobuf::io::CodedInputStream *const)v30,
          &Varint32Fallback);
      }
      else
      {
        Varint32Fallback = *v31;
        *v30 = v31 + 1;
      }
      goto LABEL_31;
    case 8:
      v32 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v33 = (char *)v32->buffer_;
      if ( v32->buffer_ < v32->buffer_end_ && *v33 >= 0 )
      {
        value[0] = (unsigned __int8)*v33;
        v32->buffer_ = (const google::protobuf::uint8 *)(v33 + 1);
        first = value[0];
      }
      else
      {
        first = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v32).first;
        value[0] = first;
      }
      (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, bool))(*a5 + 48))(
        a5,
        length,
        a4,
        first != 0);
      goto LABEL_4;
    case 9:
      v35 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v36 = (char *)v35->buffer_;
      if ( v35->buffer_ >= v35->buffer_end_ )
      {
        v37 = 0;
        goto LABEL_38;
      }
      v37 = (unsigned __int8)*v36;
      if ( *v36 < 0 )
      {
LABEL_38:
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v35, v37);
        v37 = Varint32Fallback;
        v35 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
        goto LABEL_39;
      }
      Varint32Fallback = (unsigned __int8)*v36;
      v35->buffer_ = (const google::protobuf::uint8 *)(v36 + 1);
LABEL_39:
      google::protobuf::io::CodedInputStream::ReadString(v35, &buffer, v37);
      (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, std::string::pointer, std::string::size_type))(*a5 + 104))(
        a5,
        length,
        a4,
        buffer._M_dataplus._M_p,
        buffer._M_string_length);
      goto LABEL_4;
    case 0xC:
      v38 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v39 = (char *)v38->buffer_;
      if ( v38->buffer_ >= v38->buffer_end_ )
      {
        v40 = 0;
        goto LABEL_42;
      }
      v40 = (unsigned __int8)*v39;
      if ( *v39 < 0 )
      {
LABEL_42:
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v38, v40);
        v40 = Varint32Fallback;
        v38 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
        goto LABEL_43;
      }
      Varint32Fallback = (unsigned __int8)*v39;
      v38->buffer_ = (const google::protobuf::uint8 *)(v39 + 1);
LABEL_43:
      google::protobuf::io::CodedInputStream::ReadString(v38, &buffer, v40);
      (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, std::string::pointer, std::string::size_type))(*a5 + 112))(
        a5,
        length,
        a4,
        buffer._M_dataplus._M_p,
        buffer._M_string_length);
      goto LABEL_4;
    case 0xD:
      v41 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v42 = (char *)v41->buffer_;
      if ( v41->buffer_ >= v41->buffer_end_ )
      {
        v43 = 0;
        goto LABEL_46;
      }
      v43 = (unsigned __int8)*v42;
      if ( *v42 < 0 )
      {
LABEL_46:
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v41, v43);
        goto LABEL_31;
      }
      Varint32Fallback = (unsigned __int8)*v42;
      v41->buffer_ = (const google::protobuf::uint8 *)(v42 + 1);
LABEL_31:
      (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *))(*a5 + 64))(
        a5,
        length,
        a4);
      goto LABEL_4;
    case 0xE:
      v44 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v45 = (char *)v44->buffer_;
      if ( v44->buffer_ >= v44->buffer_end_ )
      {
        v46 = 0;
        goto LABEL_49;
      }
      v46 = (unsigned __int8)*v45;
      if ( *v45 < 0 )
      {
LABEL_49:
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v44, v46);
        goto LABEL_50;
      }
      Varint32Fallback = (unsigned __int8)*v45;
      v44->buffer_ = (const google::protobuf::uint8 *)(v45 + 1);
LABEL_50:
      if ( !(unsigned int)std::string::compare(*((_QWORD *)ptr + 6), "type.googleapis.com/google.protobuf.NullValue") )
      {
        (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *))(*a5 + 120))(
          a5,
          length,
          a4);
        goto LABEL_4;
      }
      v54 = (*(__int64 (__fastcall **)(google::protobuf::Arena *, _QWORD, _QWORD))(a2->options_.arena_->impl_.blocks_
                                                                                 + 32))(
              a2->options_.arena_,
              **((_QWORD **)ptr + 6),
              *(_QWORD *)(*((_QWORD *)ptr + 6) + 8LL));
      if ( !v54 )
      {
        if ( !BYTE5(a2->type_url_.ptr_) )
          goto LABEL_4;
        v60 = *a5;
        v27 = Varint32Fallback;
        goto LABEL_82;
      }
      v55 = *(_DWORD *)(v54 + 24);
      v27 = Varint32Fallback;
      if ( v55 <= 0 )
      {
LABEL_83:
        if ( !BYTE5(a2->type_url_.ptr_) )
          goto LABEL_4;
LABEL_54:
        (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, __int64))(*a5 + 56))(
          a5,
          length,
          a4,
          v27);
        goto LABEL_4;
      }
      v56 = *(_QWORD *)(v54 + 32);
      v57 = (__int64 *)(v56 + 8);
      v58 = v56 + 8LL * (unsigned int)(v55 - 1) + 16;
      while ( 1 )
      {
        v59 = *v57;
        if ( Varint32Fallback == *(_DWORD *)(*v57 + 48) )
          break;
        if ( (__int64 *)v58 == ++v57 )
          goto LABEL_83;
      }
      v60 = *a5;
      if ( BYTE1(a2->name_.ptr_) )
      {
LABEL_82:
        (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, __int64))(v60 + 56))(
          a5,
          length,
          a4,
          v27);
        goto LABEL_4;
      }
      v61 = *(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, google::protobuf::uint64, google::protobuf::uint64))(v60 + 104);
      v62 = *(google::protobuf::uint64 **)(v59 + 40);
      v63 = *v62;
      v64 = v62[1];
      if ( LOBYTE(a2->name_.ptr_) )
      {
        google::protobuf::util::converter::ToCamelCase[abi:cxx11](value, v63, v64);
        v61(a5, length, a4, value[0], value[1]);
        if ( (char *)value[0] != &v69 )
          operator delete((void *)value[0]);
      }
      else
      {
        v61(a5, length, a4, v63, v64);
      }
LABEL_4:
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer._M_dataplus._M_p != &buffer._anon_0 )
        operator delete(buffer._M_dataplus._M_p);
      return this;
    case 0xF:
      v47 = (google::protobuf::uint32 **)a2->_internal_metadata_.ptr_;
      v48 = *v47;
      if ( *((_DWORD *)v47 + 2) - *(_DWORD *)v47 <= 3 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
          (google::protobuf::io::CodedInputStream *const)v47,
          &Varint32Fallback);
        v27 = Varint32Fallback;
      }
      else
      {
        v27 = *v48;
        Varint32Fallback = *v48;
        *v47 = v48 + 1;
      }
      goto LABEL_54;
    case 0x10:
      v49 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v50 = (google::protobuf::uint64 *)v49->buffer_;
      if ( LODWORD(v49->buffer_end_) - LODWORD(v49->buffer_) <= 7 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(v49, value);
        v14 = value[0];
      }
      else
      {
        v14 = *v50;
        value[0] = *v50;
        v49->buffer_ = (const google::protobuf::uint8 *)(v50 + 1);
      }
      goto LABEL_57;
    case 0x11:
      v51 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v52 = (char *)v51->buffer_;
      if ( v51->buffer_ >= v51->buffer_end_ )
      {
        v53 = 0;
      }
      else
      {
        v53 = (unsigned __int8)*v52;
        if ( *v52 >= 0 )
        {
          Varint32Fallback = (unsigned __int8)*v52;
          v51->buffer_ = (const google::protobuf::uint8 *)(v52 + 1);
LABEL_61:
          v27 = (v53 >> 1) ^ -(v53 & 1);
          goto LABEL_54;
        }
      }
      Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v51, v53);
      v53 = Varint32Fallback;
      goto LABEL_61;
    case 0x12:
      v11 = (google::protobuf::io::CodedInputStream *)a2->_internal_metadata_.ptr_;
      v12 = v11->buffer_;
      if ( v11->buffer_ < v11->buffer_end_ && (v13 = *v12, (v13 & 0x80u) == 0LL) )
      {
        value[0] = *v12;
        v11->buffer_ = v12 + 1;
      }
      else
      {
        v13 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v11).first;
        value[0] = v13;
      }
      v14 = (v13 >> 1) ^ -(__int64)(v13 & 1);
LABEL_57:
      (*(void (__fastcall **)(__int64 *, google::protobuf::stringpiece_ssize_type, google::protobuf::util::converter::ObjectWriter *, google::protobuf::uint64))(*a5 + 72))(
        a5,
        length,
        a4,
        v14);
      goto LABEL_4;
    default:
      goto LABEL_4;
  }
};

// Line 917: range 000000000C95E790-000000000C95F90D
std::string *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::ReadFieldValueAsString[abi:cxx11](
        std::string *buffer,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r13
  google::protobuf::io::CodedInputStream *v8; // rdi
  char *v9; // rax
  google::protobuf::uint32 v10; // edx
  google::protobuf::uint32 v11; // eax
  google::protobuf::io::CodedInputStream *v13; // rdi
  char *v14; // rax
  google::protobuf::uint32 v15; // esi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v16; // rdi
  std::string::size_type v17; // rdx
  std::string::size_type v18; // rcx
  std::string::size_type v19; // rsi
  std::string::pointer v20; // rdi
  google::protobuf::io::CodedInputStream *v21; // rdi
  char *v22; // rax
  google::protobuf::uint32 v23; // r14d
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  int *v30; // rax
  int v31; // esi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v32; // rdi
  std::string::size_type v33; // rdx
  std::string::size_type v34; // rcx
  std::string::size_type v35; // rsi
  __int64 v36; // rdi
  std::string::pointer *v37; // rax
  std::string::pointer v38; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v39; // rdi
  std::string::size_type v40; // rdx
  std::string::size_type v41; // rcx
  std::string::size_type v42; // rsi
  google::protobuf::io::CodedInputStream *v43; // rdi
  char *v44; // rax
  google::protobuf::uint32 v45; // esi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v46; // rdi
  std::string::size_type v47; // rdx
  std::string::size_type v48; // rcx
  std::string::size_type v49; // rsi
  __int64 v50; // rdi
  std::string::pointer *v51; // rax
  std::string::pointer M_p; // xmm0_8
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v53; // rdi
  std::string::size_type M_string_length; // rdx
  std::string::size_type M_allocated_capacity; // rcx
  std::string::size_type v56; // rsi
  __int64 v57; // rdi
  unsigned int *v58; // rax
  unsigned int v59; // edx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v60; // rdi
  std::string::size_type v61; // rdx
  std::string::size_type v62; // rcx
  std::string::size_type v63; // rsi
  google::protobuf::io::CodedInputStream *v64; // rdi
  const google::protobuf::uint8 *v65; // rax
  __int64 first; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v67; // rdi
  std::string::size_type v68; // rdx
  std::string::size_type v69; // rcx
  std::string::size_type v70; // rsi
  google::protobuf::io::CodedInputStream *v71; // rdi
  const google::protobuf::uint8 *v72; // rax
  unsigned __int64 v73; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v74; // rdi
  std::string::size_type v75; // rdx
  std::string::size_type v76; // rcx
  std::string::size_type v77; // rsi
  google::protobuf::io::CodedInputStream *v78; // rdi
  char *v79; // rax
  google::protobuf::uint32 Varint32Fallback; // esi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v81; // rdi
  std::string::size_type v82; // rdx
  std::string::size_type v83; // rcx
  std::string::size_type v84; // rsi
  __int64 v85; // rdi
  std::string::pointer *v86; // rax
  std::string::pointer v87; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v88; // rdi
  std::string::size_type v89; // rdx
  std::string::size_type v90; // rcx
  std::string::size_type v91; // rsi
  __int64 v92; // rdi
  unsigned int *v93; // rax
  unsigned int v94; // esi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v95; // rdi
  std::string::size_type v96; // rdx
  std::string::size_type v97; // rcx
  std::string::size_type v98; // rsi
  google::protobuf::io::CodedInputStream *v99; // rdi
  const google::protobuf::uint8 *v100; // rdx
  unsigned __int64 v101; // rax
  const char *v102; // rcx
  google::protobuf::io::CodedInputStream *v103; // rdi
  const google::protobuf::uint8 *v104; // rdx
  unsigned __int64 v105; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v106; // rdi
  std::string::size_type v107; // rdx
  std::string::size_type v108; // rcx
  std::string::size_type v109; // rsi
  std::string v110; // [rsp+0h] [rbp-1A8h] BYREF
  std::string v111; // [rsp+20h] [rbp-188h] BYREF
  std::string v112; // [rsp+40h] [rbp-168h] BYREF
  std::string v113; // [rsp+60h] [rbp-148h] BYREF
  std::string v114; // [rsp+80h] [rbp-128h] BYREF
  std::string v115; // [rsp+A0h] [rbp-108h] BYREF
  std::string v116; // [rsp+C0h] [rbp-E8h] BYREF
  std::string v117; // [rsp+E0h] [rbp-C8h] BYREF
  std::string v118; // [rsp+100h] [rbp-A8h] BYREF
  std::string v119; // [rsp+120h] [rbp-88h] BYREF
  std::string v120; // [rsp+140h] [rbp-68h] BYREF
  std::string value[2]; // [rsp+160h] [rbp-48h] BYREF

  p_anon_0 = &buffer->_anon_0;
  buffer->_anon_0._M_local_buf[0] = 0;
  buffer->_M_dataplus._M_p = buffer->_anon_0._M_local_buf;
  buffer->_M_string_length = 0LL;
  switch ( *(_DWORD *)(a3 + 72) )
  {
    case 1:
      v50 = *(_QWORD *)(a2 + 8);
      v51 = *(std::string::pointer **)v50;
      if ( *(_DWORD *)(v50 + 8) - *(_DWORD *)v50 <= 7 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
          (google::protobuf::io::CodedInputStream *const)v50,
          (google::protobuf::uint64 *)&v120);
        M_p = v120._M_dataplus._M_p;
      }
      else
      {
        M_p = *v51;
        v120._M_dataplus._M_p = *v51;
        *(_QWORD *)v50 = v51 + 1;
      }
      google::protobuf::SimpleDtoa[abi:cxx11](value, *(double *)&M_p, a5);
      v53 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      M_string_length = value[0]._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value[0]._M_dataplus._M_p == &value[0]._anon_0 )
      {
        if ( value[0]._M_string_length )
        {
          if ( value[0]._M_string_length == 1 )
            v53->_M_local_buf[0] = value[0]._anon_0._M_local_buf[0];
          else
            memcpy(v53, &value[0]._anon_0, value[0]._M_string_length);
          M_string_length = value[0]._M_string_length;
          v53 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = M_string_length;
        v53->_M_local_buf[M_string_length] = 0;
        v53 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value[0]._M_dataplus._M_p;
      }
      else
      {
        M_allocated_capacity = value[0]._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v53 )
        {
          buffer->_M_dataplus._M_p = value[0]._M_dataplus._M_p;
          buffer->_M_string_length = M_string_length;
          buffer->_anon_0._M_allocated_capacity = M_allocated_capacity;
        }
        else
        {
          v56 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = value[0]._M_dataplus._M_p;
          buffer->_M_string_length = M_string_length;
          buffer->_anon_0._M_allocated_capacity = M_allocated_capacity;
          if ( v53 )
          {
            value[0]._M_dataplus._M_p = (std::string::pointer)v53;
            value[0]._anon_0._M_allocated_capacity = v56;
            goto LABEL_56;
          }
        }
        value[0]._M_dataplus._M_p = value[0]._anon_0._M_local_buf;
        v53 = &value[0]._anon_0;
      }
LABEL_56:
      value[0]._M_string_length = 0LL;
      v53->_M_local_buf[0] = 0;
      v20 = value[0]._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value[0]._M_dataplus._M_p != &value[0]._anon_0 )
        goto LABEL_108;
      return buffer;
    case 2:
      v57 = *(_QWORD *)(a2 + 8);
      v58 = *(unsigned int **)v57;
      if ( *(_DWORD *)(v57 + 8) - *(_DWORD *)v57 <= 3 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
          (google::protobuf::io::CodedInputStream *const)v57,
          (google::protobuf::uint32 *)value);
        v59 = (unsigned int)value[0]._M_dataplus._M_p;
      }
      else
      {
        v59 = *v58;
        LODWORD(value[0]._M_dataplus._M_p) = *v58;
        *(_QWORD *)v57 = v58 + 1;
      }
      google::protobuf::SimpleFtoa[abi:cxx11](&v120, *(double *)_mm_cvtsi32_si128(v59).m128i_i64, *(float *)&a5);
      v60 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v61 = v120._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v120._M_dataplus._M_p == &v120._anon_0 )
      {
        if ( v120._M_string_length )
        {
          if ( v120._M_string_length == 1 )
            v60->_M_local_buf[0] = v120._anon_0._M_local_buf[0];
          else
            memcpy(v60, &v120._anon_0, v120._M_string_length);
          v61 = v120._M_string_length;
          v60 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v61;
        v60->_M_local_buf[v61] = 0;
        v60 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v120._M_dataplus._M_p;
      }
      else
      {
        v62 = v120._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v60 )
        {
          buffer->_M_dataplus._M_p = v120._M_dataplus._M_p;
          buffer->_M_string_length = v61;
          buffer->_anon_0._M_allocated_capacity = v62;
        }
        else
        {
          v63 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v120._M_dataplus._M_p;
          buffer->_M_string_length = v61;
          buffer->_anon_0._M_allocated_capacity = v62;
          if ( v60 )
          {
            v120._M_dataplus._M_p = (std::string::pointer)v60;
            v120._anon_0._M_allocated_capacity = v63;
            goto LABEL_64;
          }
        }
        v120._M_dataplus._M_p = v120._anon_0._M_local_buf;
        v60 = &v120._anon_0;
      }
LABEL_64:
      v120._M_string_length = 0LL;
      v60->_M_local_buf[0] = 0;
      v20 = v120._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v120._M_dataplus._M_p != &v120._anon_0 )
        goto LABEL_108;
      return buffer;
    case 3:
      v64 = *(google::protobuf::io::CodedInputStream **)(a2 + 8);
      v65 = v64->buffer_;
      if ( v64->buffer_ < v64->buffer_end_ && (first = *v65, (first & 0x80u) == 0LL) )
        v64->buffer_ = v65 + 1;
      else
        first = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v64).first;
      google::protobuf::SimpleItoa[abi:cxx11](&v111, first);
      v67 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v68 = v111._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v111._M_dataplus._M_p == &v111._anon_0 )
      {
        if ( v111._M_string_length )
        {
          if ( v111._M_string_length == 1 )
            v67->_M_local_buf[0] = v111._anon_0._M_local_buf[0];
          else
            memcpy(v67, &v111._anon_0, v111._M_string_length);
          v68 = v111._M_string_length;
          v67 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v68;
        v67->_M_local_buf[v68] = 0;
        v67 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v111._M_dataplus._M_p;
      }
      else
      {
        v69 = v111._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v67 )
        {
          buffer->_M_dataplus._M_p = v111._M_dataplus._M_p;
          buffer->_M_string_length = v68;
          buffer->_anon_0._M_allocated_capacity = v69;
        }
        else
        {
          v70 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v111._M_dataplus._M_p;
          buffer->_M_string_length = v68;
          buffer->_anon_0._M_allocated_capacity = v69;
          if ( v67 )
          {
            v111._M_dataplus._M_p = (std::string::pointer)v67;
            v111._anon_0._M_allocated_capacity = v70;
            goto LABEL_73;
          }
        }
        v111._M_dataplus._M_p = v111._anon_0._M_local_buf;
        v67 = &v111._anon_0;
      }
LABEL_73:
      v111._M_string_length = 0LL;
      v67->_M_local_buf[0] = 0;
      v20 = v111._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v111._M_dataplus._M_p != &v111._anon_0 )
        goto LABEL_108;
      return buffer;
    case 4:
      v71 = *(google::protobuf::io::CodedInputStream **)(a2 + 8);
      v72 = v71->buffer_;
      if ( v71->buffer_ < v71->buffer_end_ && (v73 = *v72, (v73 & 0x80u) == 0LL) )
        v71->buffer_ = v72 + 1;
      else
        v73 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v71).first;
      google::protobuf::SimpleItoa[abi:cxx11](&v113, v73);
      v74 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v75 = v113._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v113._M_dataplus._M_p == &v113._anon_0 )
      {
        if ( v113._M_string_length )
        {
          if ( v113._M_string_length == 1 )
            v74->_M_local_buf[0] = v113._anon_0._M_local_buf[0];
          else
            memcpy(v74, &v113._anon_0, v113._M_string_length);
          v75 = v113._M_string_length;
          v74 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v75;
        v74->_M_local_buf[v75] = 0;
        v74 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v113._M_dataplus._M_p;
      }
      else
      {
        v76 = v113._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v74 )
        {
          buffer->_M_dataplus._M_p = v113._M_dataplus._M_p;
          buffer->_M_string_length = v75;
          buffer->_anon_0._M_allocated_capacity = v76;
        }
        else
        {
          v77 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v113._M_dataplus._M_p;
          buffer->_M_string_length = v75;
          buffer->_anon_0._M_allocated_capacity = v76;
          if ( v74 )
          {
            v113._M_dataplus._M_p = (std::string::pointer)v74;
            v113._anon_0._M_allocated_capacity = v77;
            goto LABEL_82;
          }
        }
        v113._M_dataplus._M_p = v113._anon_0._M_local_buf;
        v74 = &v113._anon_0;
      }
LABEL_82:
      v113._M_string_length = 0LL;
      v74->_M_local_buf[0] = 0;
      v20 = v113._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v113._M_dataplus._M_p != &v113._anon_0 )
        goto LABEL_108;
      return buffer;
    case 5:
      v78 = *(google::protobuf::io::CodedInputStream **)(a2 + 8);
      v79 = (char *)v78->buffer_;
      if ( v78->buffer_ >= v78->buffer_end_ )
      {
        Varint32Fallback = 0;
        goto LABEL_86;
      }
      Varint32Fallback = (unsigned __int8)*v79;
      if ( *v79 < 0 )
      {
LABEL_86:
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v78, Varint32Fallback);
        goto LABEL_87;
      }
      v78->buffer_ = (const google::protobuf::uint8 *)(v79 + 1);
LABEL_87:
      google::protobuf::SimpleItoa[abi:cxx11](&v110, Varint32Fallback);
      v81 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v82 = v110._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v110._M_dataplus._M_p == &v110._anon_0 )
      {
        if ( v110._M_string_length )
        {
          if ( v110._M_string_length == 1 )
            v81->_M_local_buf[0] = v110._anon_0._M_local_buf[0];
          else
            memcpy(v81, &v110._anon_0, v110._M_string_length);
          v82 = v110._M_string_length;
          v81 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v82;
        v81->_M_local_buf[v82] = 0;
        v81 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v110._M_dataplus._M_p;
      }
      else
      {
        v83 = v110._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v81 )
        {
          buffer->_M_dataplus._M_p = v110._M_dataplus._M_p;
          buffer->_M_string_length = v82;
          buffer->_anon_0._M_allocated_capacity = v83;
        }
        else
        {
          v84 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v110._M_dataplus._M_p;
          buffer->_M_string_length = v82;
          buffer->_anon_0._M_allocated_capacity = v83;
          if ( v81 )
          {
            v110._M_dataplus._M_p = (std::string::pointer)v81;
            v110._anon_0._M_allocated_capacity = v84;
            goto LABEL_91;
          }
        }
        v110._M_dataplus._M_p = v110._anon_0._M_local_buf;
        v81 = &v110._anon_0;
      }
LABEL_91:
      v110._M_string_length = 0LL;
      v81->_M_local_buf[0] = 0;
      v20 = v110._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v110._M_dataplus._M_p != &v110._anon_0 )
        goto LABEL_108;
      return buffer;
    case 6:
      v85 = *(_QWORD *)(a2 + 8);
      v86 = *(std::string::pointer **)v85;
      if ( *(_DWORD *)(v85 + 8) - *(_DWORD *)v85 <= 7 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
          (google::protobuf::io::CodedInputStream *const)v85,
          (google::protobuf::uint64 *)value);
        v87 = value[0]._M_dataplus._M_p;
      }
      else
      {
        v87 = *v86;
        value[0]._M_dataplus._M_p = *v86;
        *(_QWORD *)v85 = v86 + 1;
      }
      google::protobuf::SimpleItoa[abi:cxx11](&v119, (unsigned __int64)v87);
      v88 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v89 = v119._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v119._M_dataplus._M_p == &v119._anon_0 )
      {
        if ( v119._M_string_length )
        {
          if ( v119._M_string_length == 1 )
            v88->_M_local_buf[0] = v119._anon_0._M_local_buf[0];
          else
            memcpy(v88, &v119._anon_0, v119._M_string_length);
          v89 = v119._M_string_length;
          v88 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v89;
        v88->_M_local_buf[v89] = 0;
        v88 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v119._M_dataplus._M_p;
      }
      else
      {
        v90 = v119._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v88 )
        {
          buffer->_M_dataplus._M_p = v119._M_dataplus._M_p;
          buffer->_M_string_length = v89;
          buffer->_anon_0._M_allocated_capacity = v90;
        }
        else
        {
          v91 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v119._M_dataplus._M_p;
          buffer->_M_string_length = v89;
          buffer->_anon_0._M_allocated_capacity = v90;
          if ( v88 )
          {
            v119._M_dataplus._M_p = (std::string::pointer)v88;
            v119._anon_0._M_allocated_capacity = v91;
            goto LABEL_99;
          }
        }
        v119._M_dataplus._M_p = v119._anon_0._M_local_buf;
        v88 = &v119._anon_0;
      }
LABEL_99:
      v119._M_string_length = 0LL;
      v88->_M_local_buf[0] = 0;
      v20 = v119._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v119._M_dataplus._M_p != &v119._anon_0 )
        goto LABEL_108;
      return buffer;
    case 7:
      v92 = *(_QWORD *)(a2 + 8);
      v93 = *(unsigned int **)v92;
      if ( *(_DWORD *)(v92 + 8) - *(_DWORD *)v92 <= 3 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
          (google::protobuf::io::CodedInputStream *const)v92,
          (google::protobuf::uint32 *)value);
        v94 = (unsigned int)value[0]._M_dataplus._M_p;
      }
      else
      {
        v94 = *v93;
        LODWORD(value[0]._M_dataplus._M_p) = *v93;
        *(_QWORD *)v92 = v93 + 1;
      }
      google::protobuf::SimpleItoa[abi:cxx11](&v118, v94);
      v95 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v96 = v118._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v118._M_dataplus._M_p == &v118._anon_0 )
      {
        if ( v118._M_string_length )
        {
          if ( v118._M_string_length == 1 )
            v95->_M_local_buf[0] = v118._anon_0._M_local_buf[0];
          else
            memcpy(v95, &v118._anon_0, v118._M_string_length);
          v96 = v118._M_string_length;
          v95 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v96;
        v95->_M_local_buf[v96] = 0;
        v95 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v118._M_dataplus._M_p;
      }
      else
      {
        v97 = v118._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v95 )
        {
          buffer->_M_dataplus._M_p = v118._M_dataplus._M_p;
          buffer->_M_string_length = v96;
          buffer->_anon_0._M_allocated_capacity = v97;
        }
        else
        {
          v98 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v118._M_dataplus._M_p;
          buffer->_M_string_length = v96;
          buffer->_anon_0._M_allocated_capacity = v97;
          if ( v95 )
          {
            v118._M_dataplus._M_p = (std::string::pointer)v95;
            v118._anon_0._M_allocated_capacity = v98;
            goto LABEL_107;
          }
        }
        v118._M_dataplus._M_p = v118._anon_0._M_local_buf;
        v95 = &v118._anon_0;
      }
LABEL_107:
      v118._M_string_length = 0LL;
      v95->_M_local_buf[0] = 0;
      v20 = v118._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v118._M_dataplus._M_p != &v118._anon_0 )
        goto LABEL_108;
      return buffer;
    case 8:
      v99 = *(google::protobuf::io::CodedInputStream **)(a2 + 8);
      v100 = v99->buffer_;
      if ( v99->buffer_ < v99->buffer_end_ && (v101 = *v100, (v101 & 0x80u) == 0LL) )
        v99->buffer_ = v100 + 1;
      else
        v101 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v99).first;
      v102 = "true";
      if ( !v101 )
        v102 = "false";
      std::string::_M_replace(buffer, 0LL, buffer->_M_string_length, v102, 5LL - (v101 != 0));
      return buffer;
    case 9:
    case 0xC:
      v8 = *(google::protobuf::io::CodedInputStream **)(a2 + 8);
      v9 = (char *)v8->buffer_;
      if ( v8->buffer_ >= v8->buffer_end_ )
      {
        v10 = 0;
        goto LABEL_4;
      }
      v10 = (unsigned __int8)*v9;
      if ( *v9 < 0 )
      {
LABEL_4:
        v11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v8, v10);
        v8 = *(google::protobuf::io::CodedInputStream **)(a2 + 8);
        v10 = v11;
        goto LABEL_5;
      }
      v8->buffer_ = (const google::protobuf::uint8 *)(v9 + 1);
LABEL_5:
      google::protobuf::io::CodedInputStream::ReadString(v8, buffer, v10);
      return buffer;
    case 0xD:
      v13 = *(google::protobuf::io::CodedInputStream **)(a2 + 8);
      v14 = (char *)v13->buffer_;
      if ( v13->buffer_ >= v13->buffer_end_ )
      {
        v15 = 0;
        goto LABEL_9;
      }
      v15 = (unsigned __int8)*v14;
      if ( *v14 < 0 )
      {
LABEL_9:
        v15 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v13, v15);
        goto LABEL_10;
      }
      v13->buffer_ = (const google::protobuf::uint8 *)(v14 + 1);
LABEL_10:
      google::protobuf::SimpleItoa[abi:cxx11](&v112, v15);
      v16 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v17 = v112._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v112._M_dataplus._M_p == &v112._anon_0 )
      {
        if ( v112._M_string_length )
        {
          if ( v112._M_string_length == 1 )
            v16->_M_local_buf[0] = v112._anon_0._M_local_buf[0];
          else
            memcpy(v16, &v112._anon_0, v112._M_string_length);
          v17 = v112._M_string_length;
          v16 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v17;
        v16->_M_local_buf[v17] = 0;
        v16 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v112._M_dataplus._M_p;
      }
      else
      {
        v18 = v112._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v16 )
        {
          buffer->_M_dataplus._M_p = v112._M_dataplus._M_p;
          buffer->_M_string_length = v17;
          buffer->_anon_0._M_allocated_capacity = v18;
        }
        else
        {
          v19 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v112._M_dataplus._M_p;
          buffer->_M_string_length = v17;
          buffer->_anon_0._M_allocated_capacity = v18;
          if ( v16 )
          {
            v112._M_dataplus._M_p = (std::string::pointer)v16;
            v112._anon_0._M_allocated_capacity = v19;
            goto LABEL_14;
          }
        }
        v112._M_dataplus._M_p = v112._anon_0._M_local_buf;
        v16 = &v112._anon_0;
      }
LABEL_14:
      v112._M_string_length = 0LL;
      v16->_M_local_buf[0] = 0;
      v20 = v112._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v112._M_dataplus._M_p != &v112._anon_0 )
        goto LABEL_108;
      return buffer;
    case 0xE:
      v21 = *(google::protobuf::io::CodedInputStream **)(a2 + 8);
      v22 = (char *)v21->buffer_;
      if ( v21->buffer_ >= v21->buffer_end_ )
      {
        v23 = 0;
        goto LABEL_18;
      }
      v23 = (unsigned __int8)*v22;
      if ( *v22 < 0 )
      {
LABEL_18:
        v23 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v21, v23);
        goto LABEL_19;
      }
      v21->buffer_ = (const google::protobuf::uint8 *)(v22 + 1);
LABEL_19:
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 16) + 32LL))(
              *(_QWORD *)(a2 + 16),
              **(_QWORD **)(a3 + 48),
              *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL));
      if ( v24 )
      {
        v25 = *(_DWORD *)(v24 + 24);
        if ( v25 > 0 )
        {
          v26 = *(_QWORD *)(v24 + 32);
          v27 = v26 + 8;
          v28 = v26 + 8LL * (unsigned int)(v25 - 1) + 16;
          while ( v23 != *(_DWORD *)(*(_QWORD *)v27 + 48LL) )
          {
            v27 += 8LL;
            if ( v28 == v27 )
              return buffer;
          }
          std::string::_M_assign(buffer, *(_QWORD *)(*(_QWORD *)v27 + 40LL));
        }
      }
      return buffer;
    case 0xF:
      v29 = *(_QWORD *)(a2 + 8);
      v30 = *(int **)v29;
      if ( *(_DWORD *)(v29 + 8) - *(_DWORD *)v29 <= 3 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
          (google::protobuf::io::CodedInputStream *const)v29,
          (google::protobuf::uint32 *)value);
        v31 = (int)value[0]._M_dataplus._M_p;
      }
      else
      {
        v31 = *v30;
        LODWORD(value[0]._M_dataplus._M_p) = *v30;
        *(_QWORD *)v29 = v30 + 1;
      }
      google::protobuf::SimpleItoa[abi:cxx11](&v116, v31);
      v32 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v33 = v116._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v116._M_dataplus._M_p == &v116._anon_0 )
      {
        if ( v116._M_string_length )
        {
          if ( v116._M_string_length == 1 )
            v32->_M_local_buf[0] = v116._anon_0._M_local_buf[0];
          else
            memcpy(v32, &v116._anon_0, v116._M_string_length);
          v33 = v116._M_string_length;
          v32 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v33;
        v32->_M_local_buf[v33] = 0;
        v32 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v116._M_dataplus._M_p;
      }
      else
      {
        v34 = v116._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v32 )
        {
          buffer->_M_dataplus._M_p = v116._M_dataplus._M_p;
          buffer->_M_string_length = v33;
          buffer->_anon_0._M_allocated_capacity = v34;
        }
        else
        {
          v35 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v116._M_dataplus._M_p;
          buffer->_M_string_length = v33;
          buffer->_anon_0._M_allocated_capacity = v34;
          if ( v32 )
          {
            v116._M_dataplus._M_p = (std::string::pointer)v32;
            v116._anon_0._M_allocated_capacity = v35;
            goto LABEL_31;
          }
        }
        v116._M_dataplus._M_p = v116._anon_0._M_local_buf;
        v32 = &v116._anon_0;
      }
LABEL_31:
      v116._M_string_length = 0LL;
      v32->_M_local_buf[0] = 0;
      v20 = v116._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v116._M_dataplus._M_p != &v116._anon_0 )
        goto LABEL_108;
      return buffer;
    case 0x10:
      v36 = *(_QWORD *)(a2 + 8);
      v37 = *(std::string::pointer **)v36;
      if ( *(_DWORD *)(v36 + 8) - *(_DWORD *)v36 <= 7 )
      {
        google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
          (google::protobuf::io::CodedInputStream *const)v36,
          (google::protobuf::uint64 *)value);
        v38 = value[0]._M_dataplus._M_p;
      }
      else
      {
        v38 = *v37;
        value[0]._M_dataplus._M_p = *v37;
        *(_QWORD *)v36 = v37 + 1;
      }
      google::protobuf::SimpleItoa[abi:cxx11](&v117, (__int64)v38);
      v39 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v40 = v117._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v117._M_dataplus._M_p == &v117._anon_0 )
      {
        if ( v117._M_string_length )
        {
          if ( v117._M_string_length == 1 )
            v39->_M_local_buf[0] = v117._anon_0._M_local_buf[0];
          else
            memcpy(v39, &v117._anon_0, v117._M_string_length);
          v40 = v117._M_string_length;
          v39 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v40;
        v39->_M_local_buf[v40] = 0;
        v39 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v117._M_dataplus._M_p;
      }
      else
      {
        v41 = v117._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v39 )
        {
          buffer->_M_dataplus._M_p = v117._M_dataplus._M_p;
          buffer->_M_string_length = v40;
          buffer->_anon_0._M_allocated_capacity = v41;
        }
        else
        {
          v42 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v117._M_dataplus._M_p;
          buffer->_M_string_length = v40;
          buffer->_anon_0._M_allocated_capacity = v41;
          if ( v39 )
          {
            v117._M_dataplus._M_p = (std::string::pointer)v39;
            v117._anon_0._M_allocated_capacity = v42;
            goto LABEL_39;
          }
        }
        v117._M_dataplus._M_p = v117._anon_0._M_local_buf;
        v39 = &v117._anon_0;
      }
LABEL_39:
      v117._M_string_length = 0LL;
      v39->_M_local_buf[0] = 0;
      v20 = v117._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v117._M_dataplus._M_p != &v117._anon_0 )
        goto LABEL_108;
      return buffer;
    case 0x11:
      v43 = *(google::protobuf::io::CodedInputStream **)(a2 + 8);
      v44 = (char *)v43->buffer_;
      if ( v43->buffer_ >= v43->buffer_end_ )
      {
        v45 = 0;
        goto LABEL_43;
      }
      v45 = (unsigned __int8)*v44;
      if ( *v44 < 0 )
      {
LABEL_43:
        v45 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(v43, v45);
        goto LABEL_44;
      }
      v43->buffer_ = (const google::protobuf::uint8 *)(v44 + 1);
LABEL_44:
      google::protobuf::SimpleItoa[abi:cxx11](&v114, -(v45 & 1) ^ (v45 >> 1));
      v46 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v47 = v114._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v114._M_dataplus._M_p == &v114._anon_0 )
      {
        if ( v114._M_string_length )
        {
          if ( v114._M_string_length == 1 )
            v46->_M_local_buf[0] = v114._anon_0._M_local_buf[0];
          else
            memcpy(v46, &v114._anon_0, v114._M_string_length);
          v47 = v114._M_string_length;
          v46 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v47;
        v46->_M_local_buf[v47] = 0;
        v46 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v114._M_dataplus._M_p;
      }
      else
      {
        v48 = v114._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v46 )
        {
          buffer->_M_dataplus._M_p = v114._M_dataplus._M_p;
          buffer->_M_string_length = v47;
          buffer->_anon_0._M_allocated_capacity = v48;
        }
        else
        {
          v49 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v114._M_dataplus._M_p;
          buffer->_M_string_length = v47;
          buffer->_anon_0._M_allocated_capacity = v48;
          if ( v46 )
          {
            v114._M_dataplus._M_p = (std::string::pointer)v46;
            v114._anon_0._M_allocated_capacity = v49;
            goto LABEL_48;
          }
        }
        v114._M_dataplus._M_p = v114._anon_0._M_local_buf;
        v46 = &v114._anon_0;
      }
LABEL_48:
      v114._M_string_length = 0LL;
      v46->_M_local_buf[0] = 0;
      v20 = v114._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v114._M_dataplus._M_p != &v114._anon_0 )
        goto LABEL_108;
      return buffer;
    case 0x12:
      v103 = *(google::protobuf::io::CodedInputStream **)(a2 + 8);
      v104 = v103->buffer_;
      if ( v103->buffer_ < v103->buffer_end_ && (v105 = *v104, (v105 & 0x80u) == 0LL) )
        v103->buffer_ = v104 + 1;
      else
        v105 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(v103).first;
      google::protobuf::SimpleItoa[abi:cxx11](&v115, (v105 >> 1) ^ -(__int64)(v105 & 1));
      v106 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
      v107 = v115._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v115._M_dataplus._M_p == &v115._anon_0 )
      {
        if ( v115._M_string_length )
        {
          if ( v115._M_string_length == 1 )
            v106->_M_local_buf[0] = v115._anon_0._M_local_buf[0];
          else
            memcpy(v106, &v115._anon_0, v115._M_string_length);
          v107 = v115._M_string_length;
          v106 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer->_M_dataplus._M_p;
        }
        buffer->_M_string_length = v107;
        v106->_M_local_buf[v107] = 0;
        v106 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v115._M_dataplus._M_p;
      }
      else
      {
        v108 = v115._anon_0._M_allocated_capacity;
        if ( p_anon_0 == v106 )
        {
          buffer->_M_dataplus._M_p = v115._M_dataplus._M_p;
          buffer->_M_string_length = v107;
          buffer->_anon_0._M_allocated_capacity = v108;
        }
        else
        {
          v109 = buffer->_anon_0._M_allocated_capacity;
          buffer->_M_dataplus._M_p = v115._M_dataplus._M_p;
          buffer->_M_string_length = v107;
          buffer->_anon_0._M_allocated_capacity = v108;
          if ( v106 )
          {
            v115._M_dataplus._M_p = (std::string::pointer)v106;
            v115._anon_0._M_allocated_capacity = v109;
            goto LABEL_122;
          }
        }
        v115._M_dataplus._M_p = v115._anon_0._M_local_buf;
        v106 = &v115._anon_0;
      }
LABEL_122:
      v115._M_string_length = 0LL;
      v106->_M_local_buf[0] = 0;
      v20 = v115._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v115._M_dataplus._M_p != &v115._anon_0 )
LABEL_108:
        operator delete(v20);
      return buffer;
    default:
      return buffer;
  }
};

// Line 1037: range 000000000C95F920-000000000C95F94F
bool __fastcall google::protobuf::util::converter::ProtoStreamObjectSource::IsMap(
        const google::protobuf::util::converter::ProtoStreamObjectSource *const this,
        const google::protobuf::Field *field)
{
  const google::protobuf::Field *v2; // rax
  const google::protobuf::Type *v3; // rdx

  v2 = (const google::protobuf::Field *)(*((__int64 (__fastcall **)(const google::protobuf::util::converter::TypeInfo *, std::string::pointer, std::string::size_type))this->typeinfo_->_vptr_TypeInfo
                                         + 3))(
                                          this->typeinfo_,
                                          field->type_url_.ptr_->_M_dataplus._M_p,
                                          field->type_url_.ptr_->_M_string_length);
  if ( field->kind_ == 11 )
    return google::protobuf::util::converter::IsMap((google::protobuf::util::converter *)field, v2, v3);
  else
    return 0;
};

// Line 1045: range 000000000C95F960-000000000C95FAFB
std::pair<long int,int> __fastcall google::protobuf::util::converter::ProtoStreamObjectSource::ReadSecondsAndNanos(
        const google::protobuf::util::converter::ProtoStreamObjectSource *const this,
        const google::protobuf::Type *type)
{
  google::protobuf::io::CodedInputStream *stream; // r12
  char *buffer; // rax
  google::protobuf::uint32 TagFallback; // r9d
  int v7; // r13d
  __int64 v8; // r12
  const google::protobuf::Field *v9; // rax
  google::protobuf::uint32 v10; // r9d
  google::protobuf::io::CodedInputStream *v11; // r14
  google::protobuf::int32 number; // eax
  char *v13; // rcx
  const google::protobuf::uint8 *buffer_end; // rdi
  unsigned __int64 first; // rax
  google::protobuf::uint32 v16; // esi
  google::protobuf::uint32 Varint32Fallback; // eax
  std::pair<long int,int> result; // 0:rax.12

  stream = this->stream_;
  buffer = (char *)stream->buffer_;
  if ( stream->buffer_end_ <= stream->buffer_ )
  {
    TagFallback = 0;
    goto LABEL_3;
  }
  TagFallback = (unsigned __int8)*buffer;
  if ( *buffer < 0 )
  {
LABEL_3:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(this->stream_, TagFallback);
    goto LABEL_4;
  }
  stream->buffer_ = (const google::protobuf::uint8 *)(buffer + 1);
LABEL_4:
  stream->last_tag_ = TagFallback;
  v7 = 0;
  v8 = 0LL;
  if ( TagFallback )
  {
    while ( 1 )
    {
      v9 = google::protobuf::util::converter::ProtoStreamObjectSource::FindAndVerifyField(this, type, TagFallback);
      v11 = this->stream_;
      if ( !v9 )
      {
        google::protobuf::internal::WireFormat::SkipField(this->stream_, v10, 0LL);
        v11 = this->stream_;
        v13 = (char *)v11->buffer_;
        buffer_end = v11->buffer_end_;
        goto LABEL_7;
      }
      number = v9->number_;
      v13 = (char *)v11->buffer_;
      buffer_end = v11->buffer_end_;
      if ( number != 1 )
        break;
      if ( buffer_end > (const google::protobuf::uint8 *)v13 )
      {
        v8 = (unsigned __int8)*v13;
        if ( (v8 & 0x80u) == 0LL )
        {
          v11->buffer_ = (const google::protobuf::uint8 *)++v13;
LABEL_7:
          if ( v13 >= (char *)buffer_end )
            goto LABEL_15;
          goto LABEL_8;
        }
      }
      first = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this->stream_).first;
      v11 = this->stream_;
      v8 = first;
      v13 = (char *)v11->buffer_;
      if ( v11->buffer_ >= v11->buffer_end_ )
      {
LABEL_15:
        TagFallback = 0;
        goto LABEL_9;
      }
LABEL_8:
      TagFallback = (unsigned __int8)*v13;
      if ( *v13 >= 0 )
      {
        v11->last_tag_ = TagFallback;
        v11->buffer_ = (const google::protobuf::uint8 *)(v13 + 1);
        if ( !TagFallback )
          goto LABEL_17;
      }
      else
      {
LABEL_9:
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(v11, TagFallback);
        v11->last_tag_ = TagFallback;
        if ( !TagFallback )
          goto LABEL_17;
      }
    }
    if ( number != 2 )
      goto LABEL_7;
    if ( buffer_end <= (const google::protobuf::uint8 *)v13 )
    {
      v16 = 0;
    }
    else
    {
      v16 = (unsigned __int8)*v13;
      if ( *v13 >= 0 )
      {
        v11->buffer_ = (const google::protobuf::uint8 *)++v13;
        goto LABEL_21;
      }
    }
    Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this->stream_, v16);
    v11 = this->stream_;
    v16 = Varint32Fallback;
    v13 = (char *)v11->buffer_;
    buffer_end = v11->buffer_end_;
LABEL_21:
    v7 = v16;
    goto LABEL_7;
  }
LABEL_17:
  result.second = v7;
  result.first = v8;
  return result;
};

// Line 1074: range 000000000C95FC80-000000000C95FD75
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectSource *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::IncrementRecursionDepth(
        google::protobuf::util::converter::ProtoStreamObjectSource *this,
        google::protobuf::StringPiece a2,
        google::protobuf::StringPiece a3,
        size_t a4)
{
  __int64 v4; // rsi
  int v5; // eax
  google::protobuf::StringPiece v7; // [rsp+0h] [rbp-118h] BYREF
  char v8; // [rsp+10h] [rbp-108h] BYREF
  google::protobuf::strings::AlphaNum v9; // [rsp+20h] [rbp-F8h] BYREF
  google::protobuf::strings::AlphaNum v10; // [rsp+50h] [rbp-C8h] BYREF
  google::protobuf::strings::AlphaNum v11; // [rsp+80h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum v12; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v13[7]; // [rsp+E0h] [rbp-38h] BYREF

  v5 = *(_DWORD *)(v4 + 44) + 1;
  *(_DWORD *)(v4 + 44) = v5;
  if ( v5 <= *(_DWORD *)(v4 + 48) )
  {
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  else
  {
    v12.piece_data_ = (const char *)a3.length_;
    v12.piece_size_ = a4;
    v10.piece_data_ = (const char *)a2.length_;
    v10.piece_size_ = (size_t)a3.ptr_;
    v13[0] = 438709376LL;
    v13[1] = 1LL;
    v11.piece_data_ = "', field '";
    v11.piece_size_ = 10LL;
    v9.piece_data_ = "Message too deep. Max recursion depth reached for type '";
    v9.piece_size_ = 56LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v7, &v9, &v10, &v11, &v12, (__int64)v13);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v7);
    if ( v7.ptr_ != &v8 )
      operator delete((void *)v7.ptr_);
    return this;
  }
};

// Line 1136: range 000000000C747200-000000000C747221
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util9converter23ProtoStreamObjectSourceC2EPNS0_2io16CodedInputStreamEPNS1_12TypeResolverERKNS0_4TypeE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};

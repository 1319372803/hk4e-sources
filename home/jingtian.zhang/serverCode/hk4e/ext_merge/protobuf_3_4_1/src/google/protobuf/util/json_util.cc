// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/json_util.cc

// Line 52: range 000000000C8DF510-000000000C8DF531
void __fastcall google::protobuf::util::internal::ZeroCopyStreamByteSink::~ZeroCopyStreamByteSink(
        google::protobuf::util::internal::ZeroCopyStreamByteSink *const this)
{
  this->_vptr_ByteSink = (int (**)(...))off_1A176448;
  (*((void (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *, _QWORD))this->stream_->_vptr_ZeroCopyOutputStream
   + 3))(
    this->stream_,
    (unsigned int)this->buffer_size_);
  operator delete(this, 0x20uLL);
};

// Line 53: range 000000000C8DF4D0-000000000C8DF4E8
void __fastcall google::protobuf::util::internal::ZeroCopyStreamByteSink::~ZeroCopyStreamByteSink(
        google::protobuf::util::internal::ZeroCopyStreamByteSink *const this)
{
  google::protobuf::io::ZeroCopyOutputStream *stream; // r8
  __int64 buffer_size; // rsi

  stream = this->stream_;
  buffer_size = (unsigned int)this->buffer_size_;
  this->_vptr_ByteSink = (int (**)(...))off_1A176448;
  (*((void (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *, __int64))stream->_vptr_ZeroCopyOutputStream + 3))(
    stream,
    buffer_size);
};

// Line 56: range 000000000C8DF540-000000000C8DF5C9
void __fastcall google::protobuf::util::internal::ZeroCopyStreamByteSink::Append(
        google::protobuf::util::internal::ZeroCopyStreamByteSink *const this,
        const char *bytes,
        size_t len)
{
  int *p_buffer_size; // r13
  __int64 v7; // rax
  size_t buffer_size; // rdx
  void *buffer; // rdi

  p_buffer_size = &this->buffer_size_;
  do
  {
    buffer_size = this->buffer_size_;
    buffer = this->buffer_;
    if ( buffer_size >= len )
    {
      memcpy(buffer, bytes, len);
      this->buffer_ = (char *)this->buffer_ + len;
      this->buffer_size_ -= len;
      return;
    }
    memcpy(buffer, bytes, buffer_size);
    v7 = this->buffer_size_;
    bytes += v7;
    len -= v7;
  }
  while ( (*((unsigned __int8 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *, void **, int *))this->stream_->_vptr_ZeroCopyOutputStream
           + 2))(
            this->stream_,
            &this->buffer_,
            p_buffer_size) );
  this->buffer_size_ = 0;
};

// Line 80: range 000000000C8E06D0-000000000C8E09CF
google::protobuf::util::Status *__fastcall google::protobuf::util::BinaryToJsonStream(
        google::protobuf::util::Status *this,
        google::protobuf::util::TypeResolver *a2,
        __int64 a3,
        google::protobuf::io::ZeroCopyInputStream *a4,
        google::protobuf::io::ZeroCopyOutputStream *a5,
        __int64 a6)
{
  const char *v9; // r12
  size_t v10; // rax
  size_t v11; // r13
  google::protobuf::util::converter::JsonObjectWriter::Element *v12; // rax
  std::forward_iterator_tag v13; // cl
  bool v14; // zf
  google::protobuf::io::CodedOutputStream v16; // [rsp+0h] [rbp-268h] BYREF
  google::protobuf::util::converter::ProtoStreamObjectSource v17; // [rsp+20h] [rbp-248h] BYREF
  google::protobuf::io::CodedInputStream v18; // [rsp+60h] [rbp-208h] BYREF
  google::protobuf::util::converter::JsonObjectWriter v19; // [rsp+B0h] [rbp-1B8h] BYREF
  google::protobuf::Type v20; // [rsp+110h] [rbp-158h] BYREF
  google::protobuf::util::converter::DefaultValueObjectWriter ow; // [rsp+180h] [rbp-E8h] BYREF

  v18.input_ = a4;
  v18.buffer_ = 0LL;
  v18.buffer_end_ = 0LL;
  *(_QWORD *)&v18.total_bytes_read_ = 0LL;
  v18.last_tag_ = 0;
  *(_WORD *)&v18.legitimate_message_end_ = 0;
  *(_QWORD *)&v18.current_limit_ = 0x7FFFFFFFLL;
  v18.total_bytes_limit_ = 0x7FFFFFFF;
  v18.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v18.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v18.disable_strict_correctness_enforcement_ = 1;
  v18.extension_pool_ = 0LL;
  v18.extension_factory_ = 0LL;
  google::protobuf::io::CodedInputStream::Refresh(&v18);
  google::protobuf::Type::Type(&v20);
  (*((void (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter *, google::protobuf::util::TypeResolver *, __int64, google::protobuf::Type *))a2->_vptr_TypeResolver
   + 2))(
    &ow,
    a2,
    a3,
    &v20);
  if ( LODWORD(ow._vptr_ObjectWriter) )
  {
    google::protobuf::util::Status::Status(this, (const google::protobuf::util::Status *)&ow);
    if ( *(google::protobuf::util::converter::DefaultValueObjectWriter **)&ow.use_strict_base64_decoding_ != (google::protobuf::util::converter::DefaultValueObjectWriter *)&ow.own_typeinfo_ )
      operator delete(*(void **)&ow.use_strict_base64_decoding_);
  }
  else
  {
    if ( *(google::protobuf::util::converter::DefaultValueObjectWriter **)&ow.use_strict_base64_decoding_ != (google::protobuf::util::converter::DefaultValueObjectWriter *)&ow.own_typeinfo_ )
      operator delete(*(void **)&ow.use_strict_base64_decoding_);
    google::protobuf::util::converter::ProtoStreamObjectSource::ProtoStreamObjectSource(&v17, &v18, a2, &v20);
    *(_WORD *)&v17.use_ints_for_enums_ = *(_WORD *)(a6 + 2);
    google::protobuf::io::CodedOutputStream::CodedOutputStream(&v16, a5);
    v9 = "\n%*s            " + 15;
    if ( !*(_BYTE *)a6 )
      v9 = &off_1B23A528[4];
    v10 = strlen(v9);
    v19.use_strict_base64_decoding_ = 1;
    v19._vptr_ObjectWriter = (int (**)(...))off_1A183F20;
    v11 = v10;
    v12 = (google::protobuf::util::converter::JsonObjectWriter::Element *)operator new(0x18uLL);
    v12->parent_.ptr_ = 0LL;
    v12->level_ = 0;
    v12->_vptr_BaseElement = (int (**)(...))off_1A1763F0;
    v12->is_first_ = 1;
    v19.element_.ptr_ = v12;
    v19.stream_ = &v16;
    v19.sink_._vptr_ByteSink = (int (**)(...))off_1A176418;
    v19.sink_.stream_ = &v16;
    v19.indent_string_._M_dataplus._M_p = v19.indent_string_._anon_0._M_local_buf;
    std::string::_M_construct<char const*>((std::string *const)&v19.indent_string_, v9, &v9[v11], v13);
    v14 = *(_BYTE *)(a6 + 1) == 0;
    *(_WORD *)&v19.use_websafe_base64_for_bytes_ = 0;
    if ( v14 )
    {
      google::protobuf::util::converter::ProtoStreamObjectSource::NamedWriteTo(
        this,
        &v17,
        (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4],
        &v19);
    }
    else
    {
      google::protobuf::util::converter::DefaultValueObjectWriter::DefaultValueObjectWriter(&ow, a2, &v20, &v19);
      ow.preserve_proto_field_names_ = *(_BYTE *)(a6 + 3);
      google::protobuf::util::converter::ProtoStreamObjectSource::NamedWriteTo(
        this,
        &v17,
        (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4],
        &ow);
      google::protobuf::util::converter::DefaultValueObjectWriter::~DefaultValueObjectWriter(&ow);
    }
    google::protobuf::util::converter::JsonObjectWriter::~JsonObjectWriter(&v19);
    google::protobuf::io::CodedOutputStream::~CodedOutputStream(&v16);
    google::protobuf::util::converter::ProtoStreamObjectSource::~ProtoStreamObjectSource(&v17);
  }
  google::protobuf::Type::~Type(&v20);
  google::protobuf::io::CodedInputStream::~CodedInputStream(&v18);
  return this;
};

// Line 106: range 000000000C8E09E0-000000000C8E0A46
google::protobuf::util::Status *__fastcall google::protobuf::util::BinaryToJsonString(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::TypeResolver *resolver,
        const std::string *type_url,
        const std::string *binary_input,
        std::string *json_output,
        const google::protobuf::util::JsonPrintOptions *options)
{
  google::protobuf::io::StringOutputStream output_stream; // [rsp+0h] [rbp-58h] BYREF
  google::protobuf::io::ArrayInputStream input_stream; // [rsp+10h] [rbp-48h] BYREF

  google::protobuf::io::ArrayInputStream::ArrayInputStream(
    &input_stream,
    binary_input->_M_dataplus._M_p,
    binary_input->_M_string_length,
    -1);
  google::protobuf::io::StringOutputStream::StringOutputStream(&output_stream, json_output);
  google::protobuf::util::BinaryToJsonStream(
    retstr,
    resolver,
    (__int64)type_url,
    &input_stream,
    &output_stream,
    (__int64)options);
  return retstr;
};

// Line 117: range 000000000C8DF600-000000000C8DF626
void __fastcall google::protobuf::util::`anonymous namespace'::StatusErrorListener::~StatusErrorListener(
        google::protobuf::util::`anonymous namespace'::StatusErrorListener *const this)
{
  google::protobuf::util::`anonymous namespace'::StatusErrorListener *M_p; // rdi

  this->_vptr_ErrorListener = (int (**)(...))off_1A176390;
  M_p = (google::protobuf::util::`anonymous namespace'::StatusErrorListener *)this->status_.error_message_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::util::`anonymous namespace'::StatusErrorListener *)&this->status_.error_message_._anon_0 )
    operator delete(M_p);
  operator delete(this, 0x30uLL);
};

// Line 121: range 000000000C8DFD60-000000000C8DFFBC
void __fastcall google::protobuf::util::`anonymous namespace'::StatusErrorListener::InvalidName(
        google::protobuf::util::_anonymous_namespace_::StatusErrorListener *this,
        const google::protobuf::util::converter::LocationTrackerInterface *a2,
        google::protobuf::StringPiece a3,
        google::protobuf::StringPiece a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 *v7; // r9
  std::string::size_type M_allocated_capacity; // rax
  unsigned __int64 v9; // rdi
  std::string::size_type v10; // rcx
  __int64 v11; // rax
  google::protobuf::stringpiece_ssize_type v12; // rcx
  google::protobuf::StringPiece v13; // rdx
  void *v14; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-D0h]
  char v16; // [rsp+10h] [rbp-C8h] BYREF
  void *v17; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-B0h]
  __m128i v19; // [rsp+30h] [rbp-A8h] BYREF
  std::string v20; // [rsp+40h] [rbp-98h] BYREF
  google::protobuf::StringPiece v21; // [rsp+60h] [rbp-78h]
  __m128i v22; // [rsp+70h] [rbp-68h] BYREF
  google::protobuf::util::Status other; // [rsp+80h] [rbp-58h] BYREF

  v20._M_dataplus._M_p = v20._anon_0._M_local_buf;
  if ( a4.ptr_ )
  {
    std::string::_M_construct<char const*>(&v20, a4.ptr_, &a4.ptr_[a4.length_], (std::forward_iterator_tag)a3.length_);
  }
  else
  {
    v20._M_string_length = 0LL;
    v20._anon_0._M_local_buf[0] = 0;
  }
  (*((void (__fastcall **)(void **, const google::protobuf::util::converter::LocationTrackerInterface *))a2->_vptr_LocationTrackerInterface
   + 2))(
    &v14,
    a2);
  if ( v15 == 0x3FFFFFFFFFFFFFFFLL || v15 == 4611686018427387902LL )
    std::__throw_length_error("basic_string::append");
  v5 = std::string::_M_append(&v14, ptr, 2LL);
  v17 = &v19;
  if ( *(_QWORD *)v5 == v5 + 16 )
  {
    v19 = _mm_loadu_si128((const __m128i *)(v5 + 16));
  }
  else
  {
    v17 = *(void **)v5;
    v19.m128i_i64[0] = *(_QWORD *)(v5 + 16);
  }
  v6 = *(_QWORD *)(v5 + 8);
  *(_BYTE *)(v5 + 16) = 0;
  v18 = v6;
  *(_QWORD *)v5 = v5 + 16;
  v7 = (__int128 *)v17;
  *(_QWORD *)(v5 + 8) = 0LL;
  M_allocated_capacity = 15LL;
  v9 = 15LL;
  if ( v7 != (__int128 *)&v19 )
    v9 = v19.m128i_i64[0];
  v10 = v18 + v20._M_string_length;
  if ( v18 + v20._M_string_length <= v9 )
    goto LABEL_12;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p != &v20._anon_0 )
    M_allocated_capacity = v20._anon_0._M_allocated_capacity;
  if ( v10 <= M_allocated_capacity )
    v11 = std::string::_M_replace(&v20, 0LL, 0LL, (const char *)v7, v18);
  else
LABEL_12:
    v11 = std::string::_M_append(&v17, v20._M_dataplus._M_p, v20._M_string_length, v10, v18);
  v21.ptr_ = (const char *)&v22;
  if ( *(_QWORD *)v11 == v11 + 16 )
  {
    v22 = _mm_loadu_si128((const __m128i *)(v11 + 16));
  }
  else
  {
    v21.ptr_ = *(const char **)v11;
    v22.m128i_i64[0] = *(_QWORD *)(v11 + 16);
  }
  v12 = *(_QWORD *)(v11 + 8);
  *(_BYTE *)(v11 + 16) = 0;
  v21.length_ = v12;
  *(_QWORD *)v11 = v11 + 16;
  v13.ptr_ = v21.ptr_;
  *(_QWORD *)(v11 + 8) = 0LL;
  v13.length_ = v21.length_;
  google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v13);
  google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)((char *)this + 8), &other);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( (__m128i *)v21.ptr_ != &v22 )
    operator delete((void *)v21.ptr_);
  if ( v17 != &v19 )
    operator delete(v17);
  if ( v14 != &v16 )
    operator delete(v14);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p != &v20._anon_0 )
    operator delete(v20._M_dataplus._M_p);
};

// Line 127: range 000000000C8DF8A0-000000000C8DFD50
void __fastcall google::protobuf::util::`anonymous namespace'::StatusErrorListener::InvalidValue(
        google::protobuf::util::_anonymous_namespace_::StatusErrorListener *this,
        const google::protobuf::util::converter::LocationTrackerInterface *a2,
        google::protobuf::StringPiece a3,
        google::protobuf::StringPiece a4)
{
  const char *ptr; // rbp
  google::protobuf::stringpiece_ssize_type length; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 *v8; // r9
  std::string::size_type M_allocated_capacity; // rax
  unsigned __int64 v10; // rdi
  std::string::size_type v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 *v16; // r9
  std::string::size_type v17; // rax
  unsigned __int64 v18; // rdi
  std::string::size_type v19; // rcx
  __int64 v20; // rax
  google::protobuf::stringpiece_ssize_type v21; // rcx
  google::protobuf::StringPiece v22; // rdx
  void *v24[2]; // [rsp+10h] [rbp-148h] BYREF
  char v25; // [rsp+20h] [rbp-138h] BYREF
  void *v26; // [rsp+30h] [rbp-128h] BYREF
  __int64 v27; // [rsp+38h] [rbp-120h]
  __m128i v28; // [rsp+40h] [rbp-118h] BYREF
  std::string v29; // [rsp+50h] [rbp-108h] BYREF
  void *v30; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+78h] [rbp-E0h]
  __m128i v32; // [rsp+80h] [rbp-D8h] BYREF
  void *v33; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+98h] [rbp-C0h]
  __m128i v35; // [rsp+A0h] [rbp-B8h] BYREF
  std::string v36; // [rsp+B0h] [rbp-A8h] BYREF
  google::protobuf::StringPiece v37; // [rsp+D0h] [rbp-88h]
  __m128i v38; // [rsp+E0h] [rbp-78h] BYREF
  google::protobuf::util::Status other; // [rsp+F0h] [rbp-68h] BYREF

  ptr = a4.ptr_;
  length = a4.length_;
  if ( a3.ptr_ )
  {
    v36._M_dataplus._M_p = v36._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v36, a3.ptr_, &a3.ptr_[a3.length_], (std::forward_iterator_tag)a3.length_);
  }
  else
  {
    v36._anon_0._M_local_buf[0] = 0;
    v36._M_dataplus._M_p = v36._anon_0._M_local_buf;
    v36._M_string_length = 0LL;
  }
  v29._M_dataplus._M_p = v29._anon_0._M_local_buf;
  if ( ptr )
  {
    std::string::_M_construct<char const*>(&v29, ptr, &ptr[length], (std::forward_iterator_tag)a3.length_);
  }
  else
  {
    v29._M_string_length = 0LL;
    v29._anon_0._M_local_buf[0] = 0;
  }
  (*((void (__fastcall **)(void **, const google::protobuf::util::converter::LocationTrackerInterface *))a2->_vptr_LocationTrackerInterface
   + 2))(
    v24,
    a2);
  if ( 0x3FFFFFFFFFFFFFFFLL - (unsigned __int64)v24[1] <= 0xF )
    std::__throw_length_error("basic_string::append");
  v6 = std::string::_M_append(v24, ": invalid value ", 16LL);
  v26 = &v28;
  if ( *(_QWORD *)v6 == v6 + 16 )
  {
    v28 = _mm_loadu_si128((const __m128i *)(v6 + 16));
  }
  else
  {
    v26 = *(void **)v6;
    v28.m128i_i64[0] = *(_QWORD *)(v6 + 16);
  }
  v7 = *(_QWORD *)(v6 + 8);
  *(_BYTE *)(v6 + 16) = 0;
  v27 = v7;
  *(_QWORD *)v6 = v6 + 16;
  v8 = (__int128 *)v26;
  *(_QWORD *)(v6 + 8) = 0LL;
  M_allocated_capacity = 15LL;
  v10 = 15LL;
  if ( v8 != (__int128 *)&v28 )
    v10 = v28.m128i_i64[0];
  v11 = v27 + v29._M_string_length;
  if ( v27 + v29._M_string_length <= v10 )
    goto LABEL_14;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v29._M_dataplus._M_p != &v29._anon_0 )
    M_allocated_capacity = v29._anon_0._M_allocated_capacity;
  if ( v11 <= M_allocated_capacity )
    v12 = std::string::_M_replace(&v29, 0LL, 0LL, (const char *)v8, v27);
  else
LABEL_14:
    v12 = std::string::_M_append(&v26, v29._M_dataplus._M_p, v29._M_string_length, v11, v27);
  v30 = &v32;
  if ( *(_QWORD *)v12 == v12 + 16 )
  {
    v32 = _mm_loadu_si128((const __m128i *)(v12 + 16));
  }
  else
  {
    v30 = *(void **)v12;
    v32.m128i_i64[0] = *(_QWORD *)(v12 + 16);
  }
  v13 = *(_QWORD *)(v12 + 8);
  *(_BYTE *)(v12 + 16) = 0;
  v31 = v13;
  *(_QWORD *)(v12 + 8) = 0LL;
  *(_QWORD *)v12 = v12 + 16;
  if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - v31) <= 9 )
    std::__throw_length_error("basic_string::append");
  v14 = std::string::_M_append(&v30, " for type ", 10LL);
  v33 = &v35;
  if ( *(_QWORD *)v14 == v14 + 16 )
  {
    v35 = _mm_loadu_si128((const __m128i *)(v14 + 16));
  }
  else
  {
    v33 = *(void **)v14;
    v35.m128i_i64[0] = *(_QWORD *)(v14 + 16);
  }
  v15 = *(_QWORD *)(v14 + 8);
  *(_BYTE *)(v14 + 16) = 0;
  v34 = v15;
  *(_QWORD *)v14 = v14 + 16;
  v16 = (__int128 *)v33;
  *(_QWORD *)(v14 + 8) = 0LL;
  v17 = 15LL;
  v18 = 15LL;
  if ( v16 != (__int128 *)&v35 )
    v18 = v35.m128i_i64[0];
  v19 = v34 + v36._M_string_length;
  if ( v34 + v36._M_string_length <= v18 )
    goto LABEL_26;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p != &v36._anon_0 )
    v17 = v36._anon_0._M_allocated_capacity;
  if ( v19 <= v17 )
    v20 = std::string::_M_replace(&v36, 0LL, 0LL, (const char *)v16, v34);
  else
LABEL_26:
    v20 = std::string::_M_append(&v33, v36._M_dataplus._M_p, v36._M_string_length, v19, v34);
  v37.ptr_ = (const char *)&v38;
  if ( *(_QWORD *)v20 == v20 + 16 )
  {
    v38 = _mm_loadu_si128((const __m128i *)(v20 + 16));
  }
  else
  {
    v37.ptr_ = *(const char **)v20;
    v38.m128i_i64[0] = *(_QWORD *)(v20 + 16);
  }
  v21 = *(_QWORD *)(v20 + 8);
  *(_BYTE *)(v20 + 16) = 0;
  v37.length_ = v21;
  *(_QWORD *)v20 = v20 + 16;
  v22.ptr_ = v37.ptr_;
  *(_QWORD *)(v20 + 8) = 0LL;
  v22.length_ = v37.length_;
  google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v22);
  google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)((char *)this + 8), &other);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( (__m128i *)v37.ptr_ != &v38 )
    operator delete((void *)v37.ptr_);
  if ( v33 != &v35 )
    operator delete(v33);
  if ( v30 != &v32 )
    operator delete(v30);
  if ( v26 != &v28 )
    operator delete(v26);
  if ( v24[0] != &v25 )
    operator delete(v24[0]);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v29._M_dataplus._M_p != &v29._anon_0 )
    operator delete(v29._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p != &v36._anon_0 )
    operator delete(v36._M_dataplus._M_p);
};

// Line 135: range 000000000C8DF630-000000000C8DF88C
void __fastcall google::protobuf::util::`anonymous namespace'::StatusErrorListener::MissingField(
        google::protobuf::util::_anonymous_namespace_::StatusErrorListener *this,
        const google::protobuf::util::converter::LocationTrackerInterface *a2,
        google::protobuf::StringPiece a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 *v6; // r9
  std::string::size_type M_allocated_capacity; // rax
  unsigned __int64 v8; // rdi
  std::string::size_type v9; // rcx
  __int64 v10; // rax
  google::protobuf::stringpiece_ssize_type v11; // rcx
  google::protobuf::StringPiece v12; // rdx
  void *v13[2]; // [rsp+0h] [rbp-D8h] BYREF
  char v14; // [rsp+10h] [rbp-C8h] BYREF
  void *v15; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-B0h]
  __m128i v17; // [rsp+30h] [rbp-A8h] BYREF
  std::string v18; // [rsp+40h] [rbp-98h] BYREF
  google::protobuf::StringPiece v19; // [rsp+60h] [rbp-78h]
  __m128i v20; // [rsp+70h] [rbp-68h] BYREF
  google::protobuf::util::Status other; // [rsp+80h] [rbp-58h] BYREF

  if ( a3.ptr_ )
  {
    v18._M_dataplus._M_p = v18._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v18, a3.ptr_, &a3.ptr_[a3.length_], (std::forward_iterator_tag)a3.length_);
  }
  else
  {
    v18._anon_0._M_local_buf[0] = 0;
    v18._M_dataplus._M_p = v18._anon_0._M_local_buf;
    v18._M_string_length = 0LL;
  }
  (*((void (__fastcall **)(void **, const google::protobuf::util::converter::LocationTrackerInterface *))a2->_vptr_LocationTrackerInterface
   + 2))(
    v13,
    a2);
  if ( 0x3FFFFFFFFFFFFFFFLL - (unsigned __int64)v13[1] <= 0xF )
    std::__throw_length_error("basic_string::append");
  v4 = std::string::_M_append(v13, ": missing field ", 16LL);
  v15 = &v17;
  if ( *(_QWORD *)v4 == v4 + 16 )
  {
    v17 = _mm_loadu_si128((const __m128i *)(v4 + 16));
  }
  else
  {
    v15 = *(void **)v4;
    v17.m128i_i64[0] = *(_QWORD *)(v4 + 16);
  }
  v5 = *(_QWORD *)(v4 + 8);
  *(_BYTE *)(v4 + 16) = 0;
  v16 = v5;
  *(_QWORD *)v4 = v4 + 16;
  v6 = (__int128 *)v15;
  *(_QWORD *)(v4 + 8) = 0LL;
  M_allocated_capacity = 15LL;
  v8 = 15LL;
  if ( v6 != (__int128 *)&v17 )
    v8 = v17.m128i_i64[0];
  v9 = v16 + v18._M_string_length;
  if ( v16 + v18._M_string_length <= v8 )
    goto LABEL_12;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18._M_dataplus._M_p != &v18._anon_0 )
    M_allocated_capacity = v18._anon_0._M_allocated_capacity;
  if ( v9 <= M_allocated_capacity )
    v10 = std::string::_M_replace(&v18, 0LL, 0LL, (const char *)v6, v16);
  else
LABEL_12:
    v10 = std::string::_M_append(&v15, v18._M_dataplus._M_p, v18._M_string_length, v9, v16);
  v19.ptr_ = (const char *)&v20;
  if ( *(_QWORD *)v10 == v10 + 16 )
  {
    v20 = _mm_loadu_si128((const __m128i *)(v10 + 16));
  }
  else
  {
    v19.ptr_ = *(const char **)v10;
    v20.m128i_i64[0] = *(_QWORD *)(v10 + 16);
  }
  v11 = *(_QWORD *)(v10 + 8);
  *(_BYTE *)(v10 + 16) = 0;
  v19.length_ = v11;
  *(_QWORD *)v10 = v10 + 16;
  v12.ptr_ = v19.ptr_;
  *(_QWORD *)(v10 + 8) = 0LL;
  v12.length_ = v19.length_;
  google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v12);
  google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)((char *)this + 8), &other);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( (__m128i *)v19.ptr_ != &v20 )
    operator delete((void *)v19.ptr_);
  if ( v15 != &v17 )
    operator delete(v15);
  if ( v13[0] != &v14 )
    operator delete(v13[0]);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18._M_dataplus._M_p != &v18._anon_0 )
    operator delete(v18._M_dataplus._M_p);
};

// Line 153: range 000000000C8E01A0-000000000C8E0451
google::protobuf::util::Status *__fastcall google::protobuf::util::JsonToBinaryStream(
        google::protobuf::util::Status *this,
        google::protobuf::util::TypeResolver *type_resolver,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6)
{
  char v10; // al
  google::protobuf::util::converter::ProtoStreamObjectWriter::Options options; // [rsp+1h] [rbp-367h] BYREF
  int v13; // [rsp+4h] [rbp-364h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-360h] BYREF
  google::protobuf::strings::ByteSink output; // [rsp+10h] [rbp-358h] BYREF
  __int64 v16; // [rsp+18h] [rbp-350h]
  unsigned int v17; // [rsp+28h] [rbp-340h]
  google::protobuf::util::Status v18; // [rsp+30h] [rbp-338h] BYREF
  google::protobuf::util::converter::ErrorListener listener; // [rsp+60h] [rbp-308h] BYREF
  google::protobuf::util::Status other; // [rsp+68h] [rbp-300h] BYREF
  google::protobuf::Type type; // [rsp+90h] [rbp-2D8h] BYREF
  google::protobuf::util::converter::ProtoStreamObjectWriter v22; // [rsp+100h] [rbp-268h] BYREF
  google::protobuf::util::converter::JsonStreamParser v23; // [rsp+1F0h] [rbp-178h] BYREF

  google::protobuf::Type::Type(&type);
  (*((void (__fastcall **)(google::protobuf::util::converter::JsonStreamParser *, google::protobuf::util::TypeResolver *, __int64, google::protobuf::Type *))type_resolver->_vptr_TypeResolver
   + 2))(
    &v23,
    type_resolver,
    a3,
    &type);
  if ( LODWORD(v23._vptr_JsonStreamParser) )
  {
    google::protobuf::util::Status::Status(this, (const google::protobuf::util::Status *)&v23);
    if ( (std::size_t *)v23.ow_ != &v23.stack_.c._M_impl._M_map_size )
      operator delete(v23.ow_);
  }
  else
  {
    if ( (std::size_t *)v23.ow_ != &v23.stack_.c._M_impl._M_map_size )
      operator delete(v23.ow_);
    v16 = a5;
    output._vptr_ByteSink = (int (**)(...))off_1A176448;
    v17 = 0;
    listener._vptr_ErrorListener = (int (**)(...))off_1A176390;
    google::protobuf::util::Status::Status(&other);
    v10 = *a6;
    options.struct_integers_as_strings = 0;
    options.use_lower_camel_for_enums = 0;
    options.ignore_unknown_fields = v10;
    google::protobuf::util::converter::ProtoStreamObjectWriter::ProtoStreamObjectWriter(
      &v22,
      type_resolver,
      &type,
      &output,
      &listener,
      &options);
    google::protobuf::util::converter::JsonStreamParser::JsonStreamParser(&v23, &v22);
    while ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *, int *))(*(_QWORD *)a4 + 16LL))(
              a4,
              &v14,
              &v13) )
    {
      if ( v13 )
      {
        google::protobuf::util::converter::JsonStreamParser::Parse(
          (google::protobuf::util::converter::JsonStreamParser *)&v18,
          (google::protobuf::StringPiece)__PAIR128__(v14, &v23),
          v13);
        if ( v18.error_code_ )
          goto LABEL_18;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
          operator delete(v18.error_message_._M_dataplus._M_p);
      }
    }
    google::protobuf::util::converter::JsonStreamParser::FinishParse(
      (google::protobuf::util::converter::JsonStreamParser *)&v18,
      (unsigned __int64)&v23);
    if ( v18.error_code_ )
    {
LABEL_18:
      google::protobuf::util::Status::Status(this, &v18);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
        operator delete(v18.error_message_._M_dataplus._M_p);
      goto LABEL_14;
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.error_message_._M_dataplus._M_p != &v18.error_message_._anon_0 )
      operator delete(v18.error_message_._M_dataplus._M_p);
    google::protobuf::util::Status::Status(this, &other);
LABEL_14:
    google::protobuf::util::converter::JsonStreamParser::~JsonStreamParser(&v23);
    google::protobuf::util::converter::ProtoStreamObjectWriter::~ProtoStreamObjectWriter(&v22);
    listener._vptr_ErrorListener = (int (**)(...))off_1A176390;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    output._vptr_ByteSink = (int (**)(...))off_1A176448;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 24LL))(v16, v17);
  }
  google::protobuf::Type::~Type(&type);
  return this;
};

// Line 181: range 000000000C8E0460-000000000C8E04C6
google::protobuf::util::Status *__fastcall google::protobuf::util::JsonToBinaryString(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::TypeResolver *resolver,
        const std::string *type_url,
        const std::string *json_input,
        std::string *binary_output,
        const google::protobuf::util::JsonParseOptions *options)
{
  google::protobuf::io::StringOutputStream output_stream; // [rsp+0h] [rbp-58h] BYREF
  google::protobuf::io::ArrayInputStream input_stream; // [rsp+10h] [rbp-48h] BYREF

  google::protobuf::io::ArrayInputStream::ArrayInputStream(
    &input_stream,
    json_input->_M_dataplus._M_p,
    json_input->_M_string_length,
    -1);
  google::protobuf::io::StringOutputStream::StringOutputStream(&output_stream, binary_output);
  google::protobuf::util::JsonToBinaryStream(
    retstr,
    resolver,
    (__int64)type_url,
    (__int64)&input_stream,
    (__int64)&output_stream,
    (char *)&options->ignore_unknown_fields);
  return retstr;
};

// Line 193: range 000000000C8E0040-000000000C8E0192
__m128i *__fastcall google::protobuf::util::`anonymous namespace'::GetTypeUrl(
        __m128i *this,
        const google::protobuf::Message *a2)
{
  __int64 v3; // r13
  std::forward_iterator_tag v4; // cl
  __int64 v5; // rax
  void *v6; // rcx
  const char *v7; // rsi
  __m128i *v8; // rax
  __int64 v9; // rcx
  __int128 *v10; // rdi
  std::string v12; // [rsp+0h] [rbp-68h] BYREF
  void *v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14[3]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(_QWORD *)((*((__int64 (__fastcall **)(const google::protobuf::Message *))a2->_vptr_MessageLite + 24))(a2) + 8);
  v12._M_dataplus._M_p = v12._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v12, "type.googleapis.com", "", v4);
  if ( v12._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  v5 = std::string::_M_append(&v12, dirsep, 1LL);
  v13[0] = v14;
  if ( *(_QWORD *)v5 == v5 + 16 )
  {
    v14[0] = (__int128)_mm_loadu_si128((const __m128i *)(v5 + 16));
  }
  else
  {
    v13[0] = *(void **)v5;
    *(_QWORD *)&v14[0] = *(_QWORD *)(v5 + 16);
  }
  v6 = *(void **)(v5 + 8);
  *(_BYTE *)(v5 + 16) = 0;
  v13[1] = v6;
  *(_QWORD *)v5 = v5 + 16;
  v7 = *(const char **)v3;
  *(_QWORD *)(v5 + 8) = 0LL;
  v8 = (__m128i *)std::string::_M_append(v13, v7, *(_QWORD *)(v3 + 8));
  this->m128i_i64[0] = (__int64)this[1].m128i_i64;
  if ( (__m128i *)v8->m128i_i64[0] == &v8[1] )
  {
    this[1] = _mm_loadu_si128(v8 + 1);
  }
  else
  {
    this->m128i_i64[0] = v8->m128i_i64[0];
    this[1].m128i_i64[0] = v8[1].m128i_i64[0];
  }
  v9 = v8->m128i_i64[1];
  v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
  v10 = (__int128 *)v13[0];
  v8->m128i_i64[1] = 0LL;
  this->m128i_i64[1] = v9;
  v8[1].m128i_i8[0] = 0;
  if ( v10 != v14 )
    operator delete(v10);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p != &v12._anon_0 )
    operator delete(v12._M_dataplus._M_p);
  return this;
};

// Line 197: range 000000000C8DF4F0-000000000C8DF508
void __cdecl google::protobuf::util::`anonymous namespace'::DeleteGeneratedTypeResolver()
{
  if ( google::protobuf::util::`anonymous namespace'::generated_type_resolver_ )
    (*((void (__fastcall **)(google::protobuf::util::TypeResolver *))google::protobuf::util::`anonymous namespace'::generated_type_resolver_->_vptr_TypeResolver
     + 1))(google::protobuf::util::`anonymous namespace'::generated_type_resolver_);
};

// Line 199: range 000000000C8DFFD0-000000000C8E002D
void __fastcall google::protobuf::util::`anonymous namespace'::InitGeneratedTypeResolver(
        google::protobuf::DescriptorPool *this)
{
  void (*v1)(void); // rbp
  std::forward_iterator_tag v2; // cl
  std::string v3; // [rsp+0h] [rbp-38h] BYREF

  v1 = (void (*)(void))google::protobuf::DescriptorPool::generated_pool(this);
  v3._M_dataplus._M_p = v3._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v3, "type.googleapis.com", "", v2);
  google::protobuf::util::`anonymous namespace'::generated_type_resolver_ = (google::protobuf::util::TypeResolver *)google::protobuf::util::NewTypeResolverForDescriptorPool(&v3, v1);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v3._M_dataplus._M_p != &v3._anon_0 )
    operator delete(v3._M_dataplus._M_p);
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)google::protobuf::util::`anonymous namespace'::DeleteGeneratedTypeResolver,
    v1);
};

// Line 212: range 000000000C8E0A50-000000000C8E0BD8
google::protobuf::util::Status *__fastcall google::protobuf::util::MessageToJsonString(
        google::protobuf::util::Status *retstr,
        google::protobuf::DescriptorPool *a2,
        std::string *a3,
        const google::protobuf::util::JsonPrintOptions *a4)
{
  google::protobuf::DescriptorPool *v5; // r15
  std::forward_iterator_tag v6; // cl
  google::protobuf::util::TypeResolver *v7; // r12
  google::protobuf::DescriptorPool *M_p; // rdi
  google::protobuf::DescriptorPool *v9; // rax
  std::string type_url; // [rsp+10h] [rbp-78h] BYREF
  std::string binary_input; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(google::protobuf::DescriptorPool **)(*(_QWORD *)(((__int64 (__fastcall *)(google::protobuf::DescriptorPool *))a2->mutex_[24].mInternal)(a2)
                                                        + 16)
                                            + 16LL);
  if ( v5 == google::protobuf::DescriptorPool::generated_pool(a2) )
  {
    if ( google::protobuf::util::`anonymous namespace'::generated_type_resolver_init_ != 2 )
    {
      binary_input._M_dataplus._M_p = (std::string::pointer)off_1A16E058;
      binary_input._M_string_length = (std::string::size_type)google::protobuf::util::`anonymous namespace'::InitGeneratedTypeResolver;
      binary_input._anon_0._M_local_buf[0] = 0;
      google::protobuf::GoogleOnceInitImpl(
        &google::protobuf::util::`anonymous namespace'::generated_type_resolver_init_,
        (google::protobuf::Closure *)&binary_input);
      google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&binary_input);
    }
    v7 = google::protobuf::util::`anonymous namespace'::generated_type_resolver_;
  }
  else
  {
    binary_input._M_dataplus._M_p = binary_input._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&binary_input, "type.googleapis.com", "", v6);
    v7 = (google::protobuf::util::TypeResolver *)google::protobuf::util::NewTypeResolverForDescriptorPool(
                                                   &binary_input,
                                                   v5);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)binary_input._M_dataplus._M_p != &binary_input._anon_0 )
      operator delete(binary_input._M_dataplus._M_p);
  }
  google::protobuf::MessageLite::SerializeAsString[abi:cxx11](&binary_input, a2);
  google::protobuf::util::`anonymous namespace'::GetTypeUrl((__m128i *)&type_url, (const google::protobuf::Message *)a2);
  google::protobuf::util::BinaryToJsonString(retstr, v7, &type_url, &binary_input, a3, a4);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type_url._M_dataplus._M_p != &type_url._anon_0 )
    operator delete(type_url._M_dataplus._M_p);
  M_p = (google::protobuf::DescriptorPool *)binary_input._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)binary_input._M_dataplus._M_p != &binary_input._anon_0 )
    operator delete(binary_input._M_dataplus._M_p);
  v9 = google::protobuf::DescriptorPool::generated_pool(M_p);
  if ( v7 && v9 != v5 )
    (*((void (__fastcall **)(google::protobuf::util::TypeResolver *))v7->_vptr_TypeResolver + 1))(v7);
  return retstr;
};

// Line 228: range 000000000C8E04D0-000000000C8E06C3
google::protobuf::util::Status *__fastcall google::protobuf::util::JsonStringToMessage(
        google::protobuf::util::Status *this,
        const std::string *a2,
        google::protobuf::DescriptorPool *a3,
        const google::protobuf::util::JsonParseOptions *a4)
{
  google::protobuf::DescriptorPool *v7; // r15
  std::forward_iterator_tag v8; // cl
  google::protobuf::util::TypeResolver *v9; // r13
  google::protobuf::DescriptorPool *M_p; // rdi
  google::protobuf::DescriptorPool *v11; // rax
  google::protobuf::StringPiece v13; // rdx
  std::string binary_output; // [rsp+10h] [rbp-88h] BYREF
  google::protobuf::util::Status type_url[2]; // [rsp+30h] [rbp-68h] BYREF

  v7 = *(google::protobuf::DescriptorPool **)(*(_QWORD *)(((__int64 (__fastcall *)(google::protobuf::DescriptorPool *))a3->mutex_[24].mInternal)(a3)
                                                        + 16)
                                            + 16LL);
  if ( v7 == google::protobuf::DescriptorPool::generated_pool(a3) )
  {
    if ( google::protobuf::util::`anonymous namespace'::generated_type_resolver_init_ != 2 )
    {
      *(_QWORD *)&type_url[0].error_code_ = off_1A16E058;
      type_url[0].error_message_._M_dataplus._M_p = (std::string::pointer)google::protobuf::util::`anonymous namespace'::InitGeneratedTypeResolver;
      LOBYTE(type_url[0].error_message_._M_string_length) = 0;
      google::protobuf::GoogleOnceInitImpl(
        &google::protobuf::util::`anonymous namespace'::generated_type_resolver_init_,
        (google::protobuf::Closure *)type_url);
      google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)type_url);
    }
    v9 = google::protobuf::util::`anonymous namespace'::generated_type_resolver_;
  }
  else
  {
    *(_QWORD *)&type_url[0].error_code_ = &type_url[0].error_message_._M_string_length;
    std::string::_M_construct<char const*>((std::string *const)type_url, "type.googleapis.com", "", v8);
    v9 = (google::protobuf::util::TypeResolver *)google::protobuf::util::NewTypeResolverForDescriptorPool(type_url, v7);
    if ( *(google::protobuf::util::Status **)&type_url[0].error_code_ != (google::protobuf::util::Status *)&type_url[0].error_message_._M_string_length )
      operator delete(*(void **)&type_url[0].error_code_);
  }
  binary_output._anon_0._M_local_buf[0] = 0;
  binary_output._M_dataplus._M_p = binary_output._anon_0._M_local_buf;
  binary_output._M_string_length = 0LL;
  google::protobuf::util::`anonymous namespace'::GetTypeUrl((__m128i *)type_url, (const google::protobuf::Message *)a3);
  google::protobuf::util::JsonToBinaryString(this, v9, (const std::string *)type_url, a2, &binary_output, a4);
  M_p = *(google::protobuf::DescriptorPool **)&type_url[0].error_code_;
  if ( *(google::protobuf::util::Status **)&type_url[0].error_code_ != (google::protobuf::util::Status *)&type_url[0].error_message_._M_string_length )
    operator delete(*(void **)&type_url[0].error_code_);
  if ( this->error_code_ == OK )
  {
    M_p = a3;
    if ( !(unsigned __int8)google::protobuf::MessageLite::ParseFromString(
                             (const google::protobuf::MessageLite *)a3,
                             (__int64)&binary_output) )
    {
      v13.ptr_ = "JSON transcoder produced invalid protobuf output.";
      v13.length_ = 49LL;
      google::protobuf::util::Status::Status(type_url, INVALID_ARGUMENT, v13);
      google::protobuf::util::Status::operator=(this, type_url);
      M_p = (google::protobuf::DescriptorPool *)type_url[0].error_message_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type_url[0].error_message_._M_dataplus._M_p != &type_url[0].error_message_._anon_0 )
        operator delete(type_url[0].error_message_._M_dataplus._M_p);
    }
  }
  v11 = google::protobuf::DescriptorPool::generated_pool(M_p);
  if ( v9 && v11 != v7 )
    (*((void (__fastcall **)(google::protobuf::util::TypeResolver *))v9->_vptr_TypeResolver + 1))(v9);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)binary_output._M_dataplus._M_p != &binary_output._anon_0 )
    operator delete(binary_output._M_dataplus._M_p);
  return this;
};

// Line 250: range 000000000C746C10-000000000C746C31
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util8internal22ZeroCopyStreamByteSinkD2Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};

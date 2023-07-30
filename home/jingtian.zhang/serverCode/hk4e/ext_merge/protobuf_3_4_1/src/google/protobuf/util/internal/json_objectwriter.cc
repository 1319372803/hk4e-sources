// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/json_objectwriter.cc

// Line 51: range 000000000C958CE0-000000000C958D5F
void __fastcall google::protobuf::util::converter::JsonObjectWriter::~JsonObjectWriter(
        google::protobuf::util::converter::JsonObjectWriter *const this)
{
  google::protobuf::util::converter::JsonObjectWriter::Element *ptr; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rsi
  google::protobuf::util::converter::JsonObjectWriter *M_p; // rdi
  google::protobuf::util::converter::JsonObjectWriter::Element *v5; // rdi
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-49h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+10h] [rbp-48h] BYREF

  ptr = this->element_.ptr_;
  this->_vptr_ObjectWriter = (int (**)(...))off_1A183F20;
  if ( ptr->parent_.ptr_ )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v7,
      LOGLEVEL_WARNING_0,
      "google/protobuf/util/internal/json_objectwriter.cc",
      53);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v7, "JsonObjectWriter was not fully closed.");
    google::protobuf::internal::LogFinisher::operator=(&v6, v3);
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  }
  M_p = (google::protobuf::util::converter::JsonObjectWriter *)this->indent_string_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::util::converter::JsonObjectWriter *)&this->indent_string_._anon_0 )
    operator delete(M_p);
  v5 = this->element_.ptr_;
  if ( v5 )
    (*((void (__fastcall **)(google::protobuf::util::converter::JsonObjectWriter::Element *))v5->_vptr_BaseElement + 1))(v5);
};

// Line 51: range 000000000C958D60-000000000C958D72
void __fastcall google::protobuf::util::converter::JsonObjectWriter::~JsonObjectWriter(
        google::protobuf::util::converter::JsonObjectWriter *const this)
{
  google::protobuf::util::converter::JsonObjectWriter::~JsonObjectWriter(this);
  operator delete(this, 0x58uLL);
};

// Line 57: range 000000000C9592C0-000000000C959348
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::StartObject(
        google::protobuf::util::converter::JsonObjectWriter *const this,
        google::protobuf::StringPiece name)
{
  google::protobuf::io::CodedOutputStream *stream; // rdi
  google::protobuf::util::converter::JsonObjectWriter::Element *ptr; // rbp
  google::protobuf::util::converter::JsonObjectWriter::Element *v5; // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *v6; // rbx
  int v7; // eax
  google::protobuf::util::converter::JsonObjectWriter::Element *v8; // rdi
  char data[25]; // [rsp+Fh] [rbp-19h] BYREF

  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(this, name);
  stream = this->stream_;
  data[0] = 123;
  google::protobuf::io::CodedOutputStream::WriteRaw(stream, data, 1);
  ptr = this->element_.ptr_;
  this->element_.ptr_ = 0LL;
  v5 = (google::protobuf::util::converter::JsonObjectWriter::Element *)operator new(0x18uLL);
  v5->parent_.ptr_ = (google::protobuf::util::converter::StructuredObjectWriter::BaseElement *)ptr;
  v6 = v5;
  v7 = 0;
  if ( ptr )
    v7 = ptr->level_ + 1;
  v8 = this->element_.ptr_;
  v6->level_ = v7;
  v6->_vptr_BaseElement = (int (**)(...))off_1A1763F0;
  v6->is_first_ = 1;
  if ( v6 != v8 )
  {
    if ( v8 )
      (*((void (__fastcall **)(google::protobuf::util::converter::JsonObjectWriter::Element *))v8->_vptr_BaseElement + 1))(v8);
    this->element_.ptr_ = v6;
  }
  return this;
};

// Line 64: range 000000000C958D80-000000000C958F1A
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::EndObject(
        google::protobuf::util::converter::JsonObjectWriter *const this)
{
  google::protobuf::util::converter::JsonObjectWriter::Element *ptr; // rdi
  google::protobuf::util::converter::JsonObjectWriter::Element *v3; // rbx
  google::protobuf::io::CodedOutputStream *stream; // rdi
  google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *v5)(google::protobuf::util::converter::JsonObjectWriter *const); // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *v6; // rax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // ebx
  google::protobuf::util::converter::JsonObjectWriter::Element *v10; // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *v11)(google::protobuf::util::converter::JsonObjectWriter *const); // rax
  int v12; // ebx
  google::protobuf::util::converter::JsonObjectWriter::Element *v13; // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *v14)(google::protobuf::util::converter::JsonObjectWriter *const); // rax
  char data[25]; // [rsp+Fh] [rbp-19h] BYREF

  ptr = this->element_.ptr_;
  v3 = (google::protobuf::util::converter::JsonObjectWriter::Element *)ptr->parent_.ptr_;
  if ( ptr->is_first_ )
  {
    ptr->is_first_ = 0;
    ptr->parent_.ptr_ = 0LL;
    if ( ptr != v3 )
    {
      (*((void (__fastcall **)(google::protobuf::util::converter::JsonObjectWriter::Element *))ptr->_vptr_BaseElement + 1))(ptr);
      this->element_.ptr_ = v3;
    }
    stream = this->stream_;
  }
  else
  {
    ptr->parent_.ptr_ = 0LL;
    if ( ptr != v3 )
    {
      (*((void (__fastcall **)(google::protobuf::util::converter::JsonObjectWriter::Element *))ptr->_vptr_BaseElement + 1))(ptr);
      this->element_.ptr_ = v3;
    }
    stream = this->stream_;
    if ( this->indent_string_._M_string_length )
    {
      data[0] = 10;
      v12 = 0;
      google::protobuf::io::CodedOutputStream::WriteRaw(stream, data, 1);
      while ( 1 )
      {
        v14 = (google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *)(google::protobuf::util::converter::JsonObjectWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
        v13 = v14 == google::protobuf::util::converter::JsonObjectWriter::element ? this->element_.ptr_ : v14(this);
        stream = this->stream_;
        if ( v13->level_ <= v12 )
          break;
        ++v12;
        google::protobuf::io::CodedOutputStream::WriteRaw(
          stream,
          this->indent_string_._M_dataplus._M_p,
          this->indent_string_._M_string_length);
      }
    }
  }
  data[0] = 125;
  google::protobuf::io::CodedOutputStream::WriteRaw(stream, data, 1);
  v5 = (google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *)(google::protobuf::util::converter::JsonObjectWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
  if ( v5 == google::protobuf::util::converter::JsonObjectWriter::element )
    v6 = this->element_.ptr_;
  else
    v6 = v5(this);
  if ( !v6->parent_.ptr_ && this->indent_string_._M_string_length )
  {
    v8 = this->stream_;
    v9 = 0;
    data[0] = 10;
    google::protobuf::io::CodedOutputStream::WriteRaw(v8, data, 1);
    while ( 1 )
    {
      v11 = (google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *)(google::protobuf::util::converter::JsonObjectWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
      v10 = v11 == google::protobuf::util::converter::JsonObjectWriter::element ? this->element_.ptr_ : v11(this);
      if ( v10->level_ <= v9 )
        break;
      ++v9;
      google::protobuf::io::CodedOutputStream::WriteRaw(
        this->stream_,
        this->indent_string_._M_dataplus._M_p,
        this->indent_string_._M_string_length);
    }
  }
  return this;
};

// Line 71: range 000000000C959350-000000000C9593D8
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::StartList(
        google::protobuf::util::converter::JsonObjectWriter *const this,
        google::protobuf::StringPiece name)
{
  google::protobuf::io::CodedOutputStream *stream; // rdi
  google::protobuf::util::converter::JsonObjectWriter::Element *ptr; // rbp
  google::protobuf::util::converter::JsonObjectWriter::Element *v5; // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *v6; // rbx
  int v7; // eax
  google::protobuf::util::converter::JsonObjectWriter::Element *v8; // rdi
  char data[25]; // [rsp+Fh] [rbp-19h] BYREF

  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(this, name);
  stream = this->stream_;
  data[0] = 91;
  google::protobuf::io::CodedOutputStream::WriteRaw(stream, data, 1);
  ptr = this->element_.ptr_;
  this->element_.ptr_ = 0LL;
  v5 = (google::protobuf::util::converter::JsonObjectWriter::Element *)operator new(0x18uLL);
  v5->parent_.ptr_ = (google::protobuf::util::converter::StructuredObjectWriter::BaseElement *)ptr;
  v6 = v5;
  v7 = 0;
  if ( ptr )
    v7 = ptr->level_ + 1;
  v8 = this->element_.ptr_;
  v6->level_ = v7;
  v6->_vptr_BaseElement = (int (**)(...))off_1A1763F0;
  v6->is_first_ = 1;
  if ( v6 != v8 )
  {
    if ( v8 )
      (*((void (__fastcall **)(google::protobuf::util::converter::JsonObjectWriter::Element *))v8->_vptr_BaseElement + 1))(v8);
    this->element_.ptr_ = v6;
  }
  return this;
};

// Line 78: range 000000000C958F20-000000000C9590BA
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::EndList(
        google::protobuf::util::converter::JsonObjectWriter *const this)
{
  google::protobuf::util::converter::JsonObjectWriter::Element *ptr; // rdi
  google::protobuf::util::converter::JsonObjectWriter::Element *v3; // rbx
  google::protobuf::io::CodedOutputStream *stream; // rdi
  google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *v5)(google::protobuf::util::converter::JsonObjectWriter *const); // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *v6; // rax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // ebx
  google::protobuf::util::converter::JsonObjectWriter::Element *v10; // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *v11)(google::protobuf::util::converter::JsonObjectWriter *const); // rax
  int v12; // ebx
  google::protobuf::util::converter::JsonObjectWriter::Element *v13; // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *v14)(google::protobuf::util::converter::JsonObjectWriter *const); // rax
  char data[25]; // [rsp+Fh] [rbp-19h] BYREF

  ptr = this->element_.ptr_;
  v3 = (google::protobuf::util::converter::JsonObjectWriter::Element *)ptr->parent_.ptr_;
  if ( ptr->is_first_ )
  {
    ptr->is_first_ = 0;
    ptr->parent_.ptr_ = 0LL;
    if ( ptr != v3 )
    {
      (*((void (__fastcall **)(google::protobuf::util::converter::JsonObjectWriter::Element *))ptr->_vptr_BaseElement + 1))(ptr);
      this->element_.ptr_ = v3;
    }
    stream = this->stream_;
  }
  else
  {
    ptr->parent_.ptr_ = 0LL;
    if ( ptr != v3 )
    {
      (*((void (__fastcall **)(google::protobuf::util::converter::JsonObjectWriter::Element *))ptr->_vptr_BaseElement + 1))(ptr);
      this->element_.ptr_ = v3;
    }
    stream = this->stream_;
    if ( this->indent_string_._M_string_length )
    {
      data[0] = 10;
      v12 = 0;
      google::protobuf::io::CodedOutputStream::WriteRaw(stream, data, 1);
      while ( 1 )
      {
        v14 = (google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *)(google::protobuf::util::converter::JsonObjectWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
        v13 = v14 == google::protobuf::util::converter::JsonObjectWriter::element ? this->element_.ptr_ : v14(this);
        stream = this->stream_;
        if ( v13->level_ <= v12 )
          break;
        ++v12;
        google::protobuf::io::CodedOutputStream::WriteRaw(
          stream,
          this->indent_string_._M_dataplus._M_p,
          this->indent_string_._M_string_length);
      }
    }
  }
  data[0] = 93;
  google::protobuf::io::CodedOutputStream::WriteRaw(stream, data, 1);
  v5 = (google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *)(google::protobuf::util::converter::JsonObjectWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
  if ( v5 == google::protobuf::util::converter::JsonObjectWriter::element )
    v6 = this->element_.ptr_;
  else
    v6 = v5(this);
  if ( !v6->parent_.ptr_ && this->indent_string_._M_string_length )
  {
    v8 = this->stream_;
    v9 = 0;
    data[0] = 10;
    google::protobuf::io::CodedOutputStream::WriteRaw(v8, data, 1);
    while ( 1 )
    {
      v11 = (google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *)(google::protobuf::util::converter::JsonObjectWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
      v10 = v11 == google::protobuf::util::converter::JsonObjectWriter::element ? this->element_.ptr_ : v11(this);
      if ( v10->level_ <= v9 )
        break;
      ++v9;
      google::protobuf::io::CodedOutputStream::WriteRaw(
        this->stream_,
        this->indent_string_._M_dataplus._M_p,
        this->indent_string_._M_string_length);
    }
  }
  return this;
};

// Line 85: range 000000000C959A50-000000000C959AD7
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderBool(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2,
        char a3)
{
  google::protobuf::stringpiece_ssize_type length; // r13
  const char *v4; // rbp
  size_t v5; // rax
  std::forward_iterator_tag v6; // cl
  unsigned __int64 v7; // rsi
  std::string data[2]; // [rsp+0h] [rbp-48h] BYREF

  length = a2.length_;
  v4 = "true";
  if ( !a3 )
    v4 = "false";
  data[0]._M_dataplus._M_p = data[0]._anon_0._M_local_buf;
  v5 = strlen(v4);
  std::string::_M_construct<char const*>(data, v4, &v4[v5], v6);
  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(
    this,
    (google::protobuf::StringPiece)__PAIR128__(length, v7));
  google::protobuf::io::CodedOutputStream::WriteRaw(this->stream_, data[0]._M_dataplus._M_p, data[0]._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data[0]._M_dataplus._M_p != &data[0]._anon_0 )
    operator delete(data[0]._M_dataplus._M_p);
  return this;
};

// Line 89: range 000000000C9593E0-000000000C95943F
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderInt32(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2,
        int i)
{
  google::protobuf::stringpiece_ssize_type length; // r13
  std::string data; // [rsp+0h] [rbp-38h] BYREF

  length = a2.length_;
  google::protobuf::SimpleItoa[abi:cxx11](&data, i);
  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(
    this,
    (google::protobuf::StringPiece)__PAIR128__(length, (unsigned __int64)a2.ptr_));
  google::protobuf::io::CodedOutputStream::WriteRaw(this->stream_, data._M_dataplus._M_p, data._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data._M_dataplus._M_p != &data._anon_0 )
    operator delete(data._M_dataplus._M_p);
  return this;
};

// Line 94: range 000000000C959450-000000000C9594AF
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderUint32(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2,
        unsigned int i)
{
  google::protobuf::stringpiece_ssize_type length; // r13
  std::string data; // [rsp+0h] [rbp-38h] BYREF

  length = a2.length_;
  google::protobuf::SimpleItoa[abi:cxx11](&data, i);
  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(
    this,
    (google::protobuf::StringPiece)__PAIR128__(length, (unsigned __int64)a2.ptr_));
  google::protobuf::io::CodedOutputStream::WriteRaw(this->stream_, data._M_dataplus._M_p, data._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data._M_dataplus._M_p != &data._anon_0 )
    operator delete(data._M_dataplus._M_p);
  return this;
};

// Line 98: range 000000000C959680-000000000C959703
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderInt64(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2,
        __int64 a3)
{
  google::protobuf::io::CodedOutputStream *stream; // rdi
  google::protobuf::io::CodedOutputStream *v6; // r13
  google::protobuf::io::CodedOutputStream *v7; // rdi
  std::string data; // [rsp+0h] [rbp-38h] BYREF

  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(this, a2);
  stream = this->stream_;
  LOBYTE(data._M_dataplus._M_p) = 34;
  google::protobuf::io::CodedOutputStream::WriteRaw(stream, &data, 1);
  v6 = this->stream_;
  google::protobuf::SimpleItoa[abi:cxx11](&data, a3);
  google::protobuf::io::CodedOutputStream::WriteRaw(v6, data._M_dataplus._M_p, data._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data._M_dataplus._M_p != &data._anon_0 )
    operator delete(data._M_dataplus._M_p);
  v7 = this->stream_;
  LOBYTE(data._M_dataplus._M_p) = 34;
  google::protobuf::io::CodedOutputStream::WriteRaw(v7, &data, 1);
  return this;
};

// Line 107: range 000000000C959710-000000000C959793
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderUint64(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2,
        unsigned __int64 a3)
{
  google::protobuf::io::CodedOutputStream *stream; // rdi
  google::protobuf::io::CodedOutputStream *v6; // r13
  google::protobuf::io::CodedOutputStream *v7; // rdi
  std::string data; // [rsp+0h] [rbp-38h] BYREF

  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(this, a2);
  stream = this->stream_;
  LOBYTE(data._M_dataplus._M_p) = 34;
  google::protobuf::io::CodedOutputStream::WriteRaw(stream, &data, 1);
  v6 = this->stream_;
  google::protobuf::SimpleItoa[abi:cxx11](&data, a3);
  google::protobuf::io::CodedOutputStream::WriteRaw(v6, data._M_dataplus._M_p, data._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data._M_dataplus._M_p != &data._anon_0 )
    operator delete(data._M_dataplus._M_p);
  v7 = this->stream_;
  LOBYTE(data._M_dataplus._M_p) = 34;
  google::protobuf::io::CodedOutputStream::WriteRaw(v7, &data, 1);
  return this;
};

// Line 116: range 000000000C9594C0-000000000C95959B
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderDouble(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2,
        double a3,
        std::forward_iterator_tag a4)
{
  google::protobuf::stringpiece_ssize_type length; // r12
  double v5; // xmm1_8
  unsigned __int64 v6; // rsi
  google::protobuf::util::converter::JsonObjectWriter *result; // rax
  __int64 (__fastcall *v8)(google::protobuf::util::converter::JsonObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, std::string::pointer, std::string::size_type); // rbx
  google::protobuf::util::converter::JsonObjectWriter *v9; // [rsp+0h] [rbp-50h]
  std::string data[2]; // [rsp+8h] [rbp-48h] BYREF

  length = a2.length_;
  v5 = fabs(a3);
  if ( v5 > 1.797693134862316e308 )
  {
    v8 = (__int64 (__fastcall *)(google::protobuf::util::converter::JsonObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, std::string::pointer, std::string::size_type))*((_QWORD *)this->_vptr_ObjectWriter + 13);
    google::protobuf::util::converter::DoubleAsString[abi:cxx11](data, a3, (__int64)a2.ptr_, a2.length_, a4);
    result = (google::protobuf::util::converter::JsonObjectWriter *)v8(
                                                                      this,
                                                                      a2.ptr_,
                                                                      length,
                                                                      data[0]._M_dataplus._M_p,
                                                                      data[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data[0]._M_dataplus._M_p != &data[0]._anon_0 )
    {
      v9 = result;
      operator delete(data[0]._M_dataplus._M_p);
      return v9;
    }
  }
  else
  {
    google::protobuf::SimpleDtoa[abi:cxx11](data, a3, v5);
    google::protobuf::util::converter::JsonObjectWriter::WritePrefix(
      this,
      (google::protobuf::StringPiece)__PAIR128__(length, v6));
    google::protobuf::io::CodedOutputStream::WriteRaw(this->stream_, data[0]._M_dataplus._M_p, data[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data[0]._M_dataplus._M_p != &data[0]._anon_0 )
      operator delete(data[0]._M_dataplus._M_p);
    return this;
  }
  return result;
};

// Line 125: range 000000000C9595A0-000000000C95967B
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderFloat(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2,
        double a3)
{
  google::protobuf::stringpiece_ssize_type length; // r12
  float v4; // xmm1_4
  unsigned __int64 v5; // rsi
  google::protobuf::util::converter::JsonObjectWriter *result; // rax
  __int64 (__fastcall *v7)(google::protobuf::util::converter::JsonObjectWriter *, __int64, google::protobuf::stringpiece_ssize_type, std::string::pointer, std::string::size_type); // rbx
  __int64 v8; // rsi
  google::protobuf::util::converter::JsonObjectWriter *v9; // [rsp+8h] [rbp-50h]
  std::string data[2]; // [rsp+10h] [rbp-48h] BYREF

  length = a2.length_;
  v4 = fabs(*(float *)&a3);
  if ( v4 > 3.4028235e38 )
  {
    v7 = (__int64 (__fastcall *)(google::protobuf::util::converter::JsonObjectWriter *, __int64, google::protobuf::stringpiece_ssize_type, std::string::pointer, std::string::size_type))*((_QWORD *)this->_vptr_ObjectWriter + 13);
    google::protobuf::util::converter::FloatAsString[abi:cxx11](data);
    result = (google::protobuf::util::converter::JsonObjectWriter *)v7(
                                                                      this,
                                                                      v8,
                                                                      length,
                                                                      data[0]._M_dataplus._M_p,
                                                                      data[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data[0]._M_dataplus._M_p != &data[0]._anon_0 )
    {
      v9 = result;
      operator delete(data[0]._M_dataplus._M_p);
      return v9;
    }
  }
  else
  {
    google::protobuf::SimpleFtoa[abi:cxx11](data, a3, v4);
    google::protobuf::util::converter::JsonObjectWriter::WritePrefix(
      this,
      (google::protobuf::StringPiece)__PAIR128__(length, v5));
    google::protobuf::io::CodedOutputStream::WriteRaw(this->stream_, data[0]._M_dataplus._M_p, data[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data[0]._M_dataplus._M_p != &data[0]._anon_0 )
      operator delete(data[0]._M_dataplus._M_p);
    return this;
  }
  return result;
};

// Line 135: range 000000000C9597A0-000000000C959815
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderString(
        google::protobuf::util::converter::JsonObjectWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::StringPiece value)
{
  const char *ptr; // rbp
  google::protobuf::stringpiece_ssize_type length; // rbx
  google::protobuf::io::CodedOutputStream *stream; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  char data; // [rsp+Fh] [rbp-39h] BYREF
  google::protobuf::strings::ArrayByteSource source; // [rsp+10h] [rbp-38h] BYREF

  ptr = value.ptr_;
  length = value.length_;
  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(this, name);
  stream = this->stream_;
  LOBYTE(source._vptr_ByteSource) = 34;
  google::protobuf::io::CodedOutputStream::WriteRaw(stream, &source, 1);
  source.input_.ptr_ = ptr;
  source.input_.length_ = length;
  source._vptr_ByteSource = (int (**)(...))off_1A176AE8;
  google::protobuf::util::converter::JsonEscaping::Escape(&source, &this->sink_);
  v7 = this->stream_;
  data = 34;
  google::protobuf::io::CodedOutputStream::WriteRaw(v7, &data, 1);
  return this;
};

// Line 145: range 000000000C959820-000000000C959950
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderBytes(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2,
        google::protobuf::StringPiece a3)
{
  google::protobuf::stringpiece_ssize_type length; // r13
  const char *ptr; // rbp
  std::forward_iterator_tag v6; // cl
  bool v7; // zf
  google::protobuf::StringPiece v8; // rdi
  google::protobuf::io::CodedOutputStream *stream; // rdi
  google::protobuf::io::CodedOutputStream *v10; // rdi
  google::protobuf::StringPiece v12; // rdi
  char data; // [rsp+Fh] [rbp-69h] BYREF
  std::string dest; // [rsp+10h] [rbp-68h] BYREF
  std::string src[2]; // [rsp+30h] [rbp-48h] BYREF

  length = a3.length_;
  ptr = a3.ptr_;
  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(this, a2);
  v7 = !this->use_websafe_base64_for_bytes_;
  dest._M_string_length = 0LL;
  dest._M_dataplus._M_p = dest._anon_0._M_local_buf;
  dest._anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    v12.ptr_ = ptr;
    v12.length_ = length;
    google::protobuf::Base64Escape(v12, &dest);
  }
  else
  {
    src[0]._M_dataplus._M_p = src[0]._anon_0._M_local_buf;
    if ( ptr )
    {
      std::string::_M_construct<char const*>(src, ptr, &ptr[length], v6);
      v8 = *(google::protobuf::StringPiece *)&src[0]._M_dataplus._M_p;
    }
    else
    {
      src[0]._M_string_length = 0LL;
      v8.length_ = 0LL;
      v8.ptr_ = src[0]._anon_0._M_local_buf;
      src[0]._anon_0._M_local_buf[0] = 0;
    }
    google::protobuf::WebSafeBase64EscapeWithPadding(v8, &dest);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src[0]._M_dataplus._M_p != &src[0]._anon_0 )
      operator delete(src[0]._M_dataplus._M_p);
  }
  stream = this->stream_;
  data = 34;
  google::protobuf::io::CodedOutputStream::WriteRaw(stream, &data, 1);
  google::protobuf::io::CodedOutputStream::WriteRaw(this->stream_, dest._M_dataplus._M_p, dest._M_string_length);
  v10 = this->stream_;
  LOBYTE(src[0]._M_dataplus._M_p) = 34;
  google::protobuf::io::CodedOutputStream::WriteRaw(v10, src, 1);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)dest._M_dataplus._M_p != &dest._anon_0 )
    operator delete(dest._M_dataplus._M_p);
  return this;
};

// Line 163: range 000000000C959960-000000000C9599CD
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderNull(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2,
        std::forward_iterator_tag a3)
{
  google::protobuf::stringpiece_ssize_type length; // r13
  std::string data[2]; // [rsp+0h] [rbp-48h] BYREF

  length = a2.length_;
  data[0]._M_dataplus._M_p = data[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(data, "null", "", a3);
  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(
    this,
    (google::protobuf::StringPiece)__PAIR128__(length, (unsigned __int64)a2.ptr_));
  google::protobuf::io::CodedOutputStream::WriteRaw(this->stream_, data[0]._M_dataplus._M_p, data[0]._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data[0]._M_dataplus._M_p != &data[0]._anon_0 )
    operator delete(data[0]._M_dataplus._M_p);
  return this;
};

// Line 167: range 000000000C9599E0-000000000C959A4B
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonObjectWriter *__fastcall google::protobuf::util::converter::JsonObjectWriter::RenderNullAsEmpty(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2,
        std::forward_iterator_tag a3)
{
  google::protobuf::stringpiece_ssize_type length; // r13
  std::string data[2]; // [rsp+0h] [rbp-48h] BYREF

  length = a2.length_;
  data[0]._M_dataplus._M_p = data[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(data, &off_1B23A528[4], &off_1B23A528[4], a3);
  google::protobuf::util::converter::JsonObjectWriter::WritePrefix(
    this,
    (google::protobuf::StringPiece)__PAIR128__(length, (unsigned __int64)a2.ptr_));
  google::protobuf::io::CodedOutputStream::WriteRaw(this->stream_, data[0]._M_dataplus._M_p, data[0]._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data[0]._M_dataplus._M_p != &data[0]._anon_0 )
    operator delete(data[0]._M_dataplus._M_p);
  return this;
};

// Line 171: range 000000000C9590D0-000000000C9592AD
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::util::converter::JsonObjectWriter::WritePrefix(
        google::protobuf::util::converter::JsonObjectWriter *this,
        google::protobuf::StringPiece a2)
{
  std::string::size_type length; // rbp
  __int64 (*v4)(void); // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *ptr; // rax
  google::protobuf::io::CodedOutputStream *stream; // rdi
  bool empty_name_ok_for_next_key; // al
  google::protobuf::io::CodedOutputStream *v8; // rdi
  std::forward_iterator_tag v9; // cl
  google::protobuf::io::CodedOutputStream *v10; // r13
  google::protobuf::io::CodedOutputStream *v11; // rdi
  google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *v12)(google::protobuf::util::converter::JsonObjectWriter *const); // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *v13; // rax
  google::protobuf::io::CodedOutputStream *v14; // rdi
  int v15; // r12d
  google::protobuf::util::converter::JsonObjectWriter::Element *v16; // rax
  google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *v17)(google::protobuf::util::converter::JsonObjectWriter *const); // rax
  google::protobuf::io::CodedOutputStream *v18; // rdi
  std::string::size_type v19; // rsi
  std::string data[2]; // [rsp+0h] [rbp-48h] BYREF

  length = a2.length_;
  v4 = (__int64 (*)(void))*((_QWORD *)this->_vptr_ObjectWriter + 18);
  if ( (char *)v4 == (char *)google::protobuf::util::converter::JsonObjectWriter::element )
    ptr = this->element_.ptr_;
  else
    ptr = (google::protobuf::util::converter::JsonObjectWriter::Element *)v4();
  if ( ptr->is_first_ )
  {
    ptr->is_first_ = 0;
    v12 = (google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *)(google::protobuf::util::converter::JsonObjectWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
    if ( v12 == google::protobuf::util::converter::JsonObjectWriter::element )
      v13 = this->element_.ptr_;
    else
      v13 = v12(this);
    if ( !v13->parent_.ptr_ || !this->indent_string_._M_string_length )
      goto LABEL_5;
  }
  else
  {
    stream = this->stream_;
    LOBYTE(data[0]._M_dataplus._M_p) = 44;
    google::protobuf::io::CodedOutputStream::WriteRaw(stream, data, 1);
    if ( !this->indent_string_._M_string_length )
      goto LABEL_5;
  }
  v14 = this->stream_;
  LOBYTE(data[0]._M_dataplus._M_p) = 10;
  v15 = 0;
  google::protobuf::io::CodedOutputStream::WriteRaw(v14, data, 1);
  while ( 1 )
  {
    v17 = (google::protobuf::util::converter::JsonObjectWriter::Element *(__fastcall *)(google::protobuf::util::converter::JsonObjectWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
    v16 = v17 == google::protobuf::util::converter::JsonObjectWriter::element ? this->element_.ptr_ : v17(this);
    if ( v16->level_ <= v15 )
      break;
    ++v15;
    google::protobuf::io::CodedOutputStream::WriteRaw(
      this->stream_,
      this->indent_string_._M_dataplus._M_p,
      this->indent_string_._M_string_length);
  }
LABEL_5:
  empty_name_ok_for_next_key = this->empty_name_ok_for_next_key_;
  this->empty_name_ok_for_next_key_ = 0;
  if ( length )
  {
    v18 = this->stream_;
    LOBYTE(data[0]._M_dataplus._M_p) = 34;
    google::protobuf::io::CodedOutputStream::WriteRaw(v18, data, 1);
    data[0]._M_dataplus._M_p = (std::string::pointer)off_1A176AE8;
    data[0]._M_string_length = v19;
    data[0]._anon_0._M_allocated_capacity = length;
    google::protobuf::util::converter::JsonEscaping::Escape((google::protobuf::strings::ByteSource *)data, &this->sink_);
  }
  else
  {
    if ( !empty_name_ok_for_next_key )
      return;
    v8 = this->stream_;
    LOBYTE(data[0]._M_dataplus._M_p) = 34;
    google::protobuf::io::CodedOutputStream::WriteRaw(v8, data, 1);
  }
  v10 = this->stream_;
  data[0]._M_dataplus._M_p = data[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(data, "\":", "", v9);
  google::protobuf::io::CodedOutputStream::WriteRaw(v10, data[0]._M_dataplus._M_p, data[0]._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)data[0]._M_dataplus._M_p != &data[0]._anon_0 )
    operator delete(data[0]._M_dataplus._M_p);
  if ( this->indent_string_._M_string_length )
  {
    v11 = this->stream_;
    LOBYTE(data[0]._M_dataplus._M_p) = 32;
    google::protobuf::io::CodedOutputStream::WriteRaw(v11, data, 1);
  }
};

// Line 188: range 000000000C9590C0-000000000C9590C8
bool __fastcall google::protobuf::util::converter::JsonObjectWriter::GetAndResetEmptyKeyOk(
        google::protobuf::util::converter::JsonObjectWriter *const this)
{
  bool result; // al

  result = this->empty_name_ok_for_next_key_;
  this->empty_name_ok_for_next_key_ = 0;
  return result;
};

// Line 196: range 000000000C747170-000000000C747191
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util9converter16JsonObjectWriterD2Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};

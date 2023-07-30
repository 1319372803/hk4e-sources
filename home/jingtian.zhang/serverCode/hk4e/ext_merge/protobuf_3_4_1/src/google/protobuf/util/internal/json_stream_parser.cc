// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/json_stream_parser.cc

// Line 100: range 000000000C95B160-000000000C95B321
google::protobuf::util::converter::JsonStreamParser::ParseType *__fastcall google::protobuf::util::converter::JsonStreamParser::JsonStreamParser(
        google::protobuf::util::converter::JsonStreamParser *this,
        google::protobuf::util::converter::ObjectWriter *a2)
{
  google::protobuf::util::converter::JsonStreamParser::ParseType **v2; // rax
  std::size_t M_map_size; // rdx
  google::protobuf::util::converter::JsonStreamParser::ParseType **v4; // rbp
  google::protobuf::util::converter::JsonStreamParser::ParseType *v5; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType *result; // rax

  this->_vptr_JsonStreamParser = (int (**)(...))off_1A184418;
  this->ow_ = a2;
  this->stack_.c._M_impl._M_map = 0LL;
  this->stack_.c._M_impl._M_start._M_cur = 0LL;
  this->stack_.c._M_impl._M_start._M_first = 0LL;
  this->stack_.c._M_impl._M_start._M_last = 0LL;
  this->stack_.c._M_impl._M_start._M_node = 0LL;
  this->stack_.c._M_impl._M_finish._M_cur = 0LL;
  this->stack_.c._M_impl._M_finish._M_first = 0LL;
  this->stack_.c._M_impl._M_finish._M_last = 0LL;
  this->stack_.c._M_impl._M_finish._M_node = 0LL;
  this->stack_.c._M_impl._M_map_size = 8LL;
  v2 = (google::protobuf::util::converter::JsonStreamParser::ParseType **)operator new(0x40uLL);
  M_map_size = this->stack_.c._M_impl._M_map_size;
  this->stack_.c._M_impl._M_map = v2;
  v4 = (google::protobuf::util::converter::JsonStreamParser::ParseType **)((char *)v2
                                                                         + ((4 * M_map_size - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v5 = (google::protobuf::util::converter::JsonStreamParser::ParseType *)operator new(0x200uLL);
  *v4 = v5;
  this->stack_.c._M_impl._M_start._M_last = v5 + 128;
  this->stack_.c._M_impl._M_finish._M_last = v5 + 128;
  this->leftover_._M_dataplus._M_p = this->leftover_._anon_0._M_local_buf;
  this->key_storage_._M_dataplus._M_p = this->key_storage_._anon_0._M_local_buf;
  this->parsed_storage_._M_dataplus._M_p = this->parsed_storage_._anon_0._M_local_buf;
  this->chunk_storage_._M_dataplus._M_p = this->chunk_storage_._anon_0._M_local_buf;
  this->stack_.c._M_impl._M_start._M_node = v4;
  this->stack_.c._M_impl._M_start._M_first = v5;
  this->stack_.c._M_impl._M_finish._M_node = v4;
  this->stack_.c._M_impl._M_finish._M_first = v5;
  this->stack_.c._M_impl._M_start._M_cur = v5;
  result = v5 + 1;
  this->leftover_._M_string_length = 0LL;
  this->leftover_._anon_0._M_local_buf[0] = 0;
  this->json_.ptr_ = 0LL;
  this->json_.length_ = 0LL;
  this->p_.ptr_ = 0LL;
  this->p_.length_ = 0LL;
  this->key_.ptr_ = 0LL;
  this->key_.length_ = 0LL;
  this->key_storage_._M_string_length = 0LL;
  this->key_storage_._anon_0._M_local_buf[0] = 0;
  this->finishing_ = 0;
  this->parsed_.ptr_ = 0LL;
  this->parsed_.length_ = 0LL;
  this->parsed_storage_._M_string_length = 0LL;
  this->parsed_storage_._anon_0._M_local_buf[0] = 0;
  this->string_open_ = 0;
  this->chunk_storage_._M_string_length = 0LL;
  this->chunk_storage_._anon_0._M_local_buf[0] = 0;
  *(_WORD *)&this->coerce_to_utf8_ = 0;
  this->loose_float_number_conversion_ = 0;
  *((_DWORD *)result - 1) = 0;
  this->stack_.c._M_impl._M_finish._M_cur = result;
  return result;
};

// Line 120: range 000000000C95ACD0-000000000C95AD3A
void __fastcall google::protobuf::util::converter::JsonStreamParser::~JsonStreamParser(
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  google::protobuf::util::converter::JsonStreamParser *M_p; // rdi
  google::protobuf::util::converter::JsonStreamParser *v3; // rdi
  google::protobuf::util::converter::JsonStreamParser *v4; // rdi
  google::protobuf::util::converter::JsonStreamParser *v5; // rdi

  this->_vptr_JsonStreamParser = (int (**)(...))off_1A184418;
  M_p = (google::protobuf::util::converter::JsonStreamParser *)this->chunk_storage_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::util::converter::JsonStreamParser *)&this->chunk_storage_._anon_0 )
    operator delete(M_p);
  v3 = (google::protobuf::util::converter::JsonStreamParser *)this->parsed_storage_._M_dataplus._M_p;
  if ( v3 != (google::protobuf::util::converter::JsonStreamParser *)&this->parsed_storage_._anon_0 )
    operator delete(v3);
  v4 = (google::protobuf::util::converter::JsonStreamParser *)this->key_storage_._M_dataplus._M_p;
  if ( v4 != (google::protobuf::util::converter::JsonStreamParser *)&this->key_storage_._anon_0 )
    operator delete(v4);
  v5 = (google::protobuf::util::converter::JsonStreamParser *)this->leftover_._M_dataplus._M_p;
  if ( v5 != (google::protobuf::util::converter::JsonStreamParser *)&this->leftover_._anon_0 )
    operator delete(v5);
  std::_Deque_base<google::protobuf::util::converter::JsonStreamParser::ParseType>::~_Deque_base(&this->stack_.c);
};

// Line 120: range 000000000C95AD40-000000000C95AD52
void __fastcall google::protobuf::util::converter::JsonStreamParser::~JsonStreamParser(
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  google::protobuf::util::converter::JsonStreamParser::~JsonStreamParser(this);
  operator delete(this, 0x138uLL);
};

// Line 123: range 000000000C95C5C0-000000000C95C6EF
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::Parse(
        google::protobuf::util::converter::JsonStreamParser *this,
        google::protobuf::StringPiece a2,
        size_t a3)
{
  bool v3; // zf
  int v4; // eax
  google::protobuf::StringPiece::size_type v5; // rbp
  const char *ptr; // rax
  std::string *v7; // rsi
  google::protobuf::StringPiece v8; // rax
  __int64 v10; // rsi
  const char *length; // r13
  google::protobuf::StringPiece v13; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::util::Status other; // [rsp+10h] [rbp-88h] BYREF
  google::protobuf::strings::AlphaNum a; // [rsp+40h] [rbp-58h] BYREF

  v3 = *((_QWORD *)a2.ptr_ + 13) == 0LL;
  v13.ptr_ = (const char *)a2.length_;
  v13.length_ = a3;
  if ( !v3 )
  {
    length = (const char *)a2.length_;
    std::string::swap(a2.ptr_ + 272, a2.ptr_ + 96);
    a.piece_data_ = length;
    a.piece_size_ = a3;
    google::protobuf::StrAppend((std::string *)(a2.ptr_ + 272), &a);
    a2.length_ = *((_QWORD *)a2.ptr_ + 34);
    v13.length_ = *((_QWORD *)a2.ptr_ + 35);
    v13.ptr_ = (const char *)a2.length_;
  }
  v4 = google::protobuf::internal::UTF8SpnStructurallyValid(&v13);
  if ( v4 <= 0 )
  {
    std::string::_M_replace(v10 + 96, 0LL, *(_QWORD *)(v10 + 104), v13.ptr_, v13.length_);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  else
  {
    v5 = v4;
    ptr = google::protobuf::StringPiece::substr(&v13, 0LL, v4).ptr_;
    google::protobuf::util::converter::JsonStreamParser::ParseChunk(
      (google::protobuf::util::converter::JsonStreamParser *)&other,
      (google::protobuf::StringPiece)__PAIR128__((unsigned __int64)ptr, (unsigned __int64)v7));
    v8 = google::protobuf::StringPiece::substr(&v13, v5, google::protobuf::StringPiece::npos);
    a.piece_data_ = v8.ptr_;
    a.piece_size_ = v8.length_;
    google::protobuf::StrAppend(v7 + 3, &a);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &other);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    return this;
  }
};

// Line 152: range 000000000C95C1B0-000000000C95C3AC
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::FinishParse(
        google::protobuf::util::converter::JsonStreamParser *this,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  const char *v4; // r8
  char *v5; // r12
  char *v7; // rax
  __int64 v8; // rdx
  google::protobuf::util::Status v9; // [rsp+0h] [rbp-88h] BYREF
  google::protobuf::util::Status src_str[2]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  if ( *(_QWORD *)(a2 + 32) == *(_QWORD *)(a2 + 64) && !v3 )
  {
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  if ( *(_BYTE *)(a2 + 304) )
  {
    v5 = (char *)operator new[](v3);
    *(_QWORD *)&src_str[0].error_code_ = *(_QWORD *)(a2 + 96);
    src_str[0].error_message_._M_dataplus._M_p = *(std::string::pointer *)(a2 + 104);
    v7 = google::protobuf::internal::UTF8CoerceToStructurallyValid(
           (const google::protobuf::StringPiece *)src_str,
           v5,
           32);
    v8 = *(_QWORD *)(a2 + 104);
    *(_QWORD *)(a2 + 128) = v7;
    *(_BYTE *)(a2 + 208) = 1;
    *(_QWORD *)(a2 + 136) = v8;
    *(__m128i *)(a2 + 144) = _mm_loadu_si128((const __m128i *)(a2 + 128));
    google::protobuf::util::converter::JsonStreamParser::RunParser((google::protobuf::util::converter::JsonStreamParser *)&v9);
LABEL_5:
    if ( v9.error_code_ == OK )
    {
      google::protobuf::util::converter::JsonStreamParser::SkipWhitespace((google::protobuf::util::converter::JsonStreamParser *const)a2);
      if ( *(_QWORD *)(a2 + 152) )
      {
        google::protobuf::util::converter::JsonStreamParser::ReportFailure(
          (google::protobuf::util::converter::JsonStreamParser *)src_str,
          (google::protobuf::StringPiece)__PAIR128__("Parsing terminated before end of input.", a2));
        google::protobuf::util::Status::operator=(&v9, src_str);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src_str[0].error_message_._M_dataplus._M_p != &src_str[0].error_message_._anon_0 )
          operator delete(src_str[0].error_message_._M_dataplus._M_p);
      }
    }
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &v9);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9.error_message_._M_dataplus._M_p != &v9.error_message_._anon_0 )
      operator delete(v9.error_message_._M_dataplus._M_p);
    if ( v5 )
      operator delete[](v5);
    return this;
  }
  v4 = *(const char **)(a2 + 96);
  *(_QWORD *)(a2 + 136) = v3;
  *(_QWORD *)(a2 + 128) = v4;
  *(__m128i *)(a2 + 144) = _mm_loadu_si128((const __m128i *)(a2 + 128));
  if ( google::protobuf::internal::IsStructurallyValidUTF8(v4, v3) )
  {
    *(_BYTE *)(a2 + 208) = 1;
    google::protobuf::util::converter::JsonStreamParser::RunParser((google::protobuf::util::converter::JsonStreamParser *)&v9);
    v5 = 0LL;
    goto LABEL_5;
  }
  google::protobuf::util::converter::JsonStreamParser::ReportFailure(
    this,
    (google::protobuf::StringPiece)__PAIR128__("Encountered non UTF-8 code points.", a2));
  return this;
};

// Line 185: range 000000000C95C3C0-000000000C95C5AD
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseChunk(
        google::protobuf::util::converter::JsonStreamParser *this,
        google::protobuf::StringPiece a2,
        __int64 a3)
{
  const char *ptr; // rbp
  __m128i v6; // xmm0
  google::protobuf::util::converter::JsonStreamParser *const v7; // rsi
  std::forward_iterator_tag v8; // cl
  google::protobuf::stringpiece_ssize_type length; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi
  const char *v12; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v13; // rdi
  std::string::size_type M_string_length; // rdx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  std::string::size_type M_allocated_capacity; // rdi
  std::string::size_type v17; // rsi
  __int64 v18; // rsi
  _BYTE *v19; // rax
  unsigned __int64 v20; // rsi
  std::string v21; // [rsp+0h] [rbp-68h] BYREF
  google::protobuf::util::Status other; // [rsp+20h] [rbp-48h] BYREF

  if ( !a3 )
  {
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  *((_QWORD *)a2.ptr_ + 16) = a2.length_;
  ptr = a2.ptr_;
  *((_QWORD *)a2.ptr_ + 17) = a3;
  v6 = _mm_loadu_si128((const __m128i *)a2.ptr_ + 8);
  *((_BYTE *)a2.ptr_ + 208) = 0;
  *((__m128i *)a2.ptr_ + 9) = v6;
  google::protobuf::util::converter::JsonStreamParser::RunParser((google::protobuf::util::converter::JsonStreamParser *)&other);
  if ( other.error_code_ )
  {
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &other);
    goto LABEL_6;
  }
  google::protobuf::util::converter::JsonStreamParser::SkipWhitespace(v7);
  length = v7->p_.length_;
  if ( !length )
  {
    v19 = *(_BYTE **)(v18 + 96);
    *(_QWORD *)(v18 + 104) = 0LL;
    *v19 = 0;
LABEL_18:
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    goto LABEL_6;
  }
  if ( *(_QWORD *)(v10 + 64) != *(_QWORD *)(v10 + 32) )
  {
    v12 = *(const char **)(v11 + 144);
    v21._M_dataplus._M_p = v21._anon_0._M_local_buf;
    if ( v12 )
    {
      std::string::_M_construct<char const*>(&v21, v12, &v12[length], v8);
      v13 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)*((_QWORD *)ptr + 12);
      M_string_length = v21._M_string_length;
      p_anon_0 = v13;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
      {
        M_allocated_capacity = v21._anon_0._M_allocated_capacity;
        if ( p_anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(ptr + 112) )
        {
          *((_QWORD *)ptr + 12) = v21._M_dataplus._M_p;
          *((_QWORD *)ptr + 13) = M_string_length;
          *((_QWORD *)ptr + 14) = M_allocated_capacity;
        }
        else
        {
          v17 = *((_QWORD *)ptr + 14);
          *((_QWORD *)ptr + 12) = v21._M_dataplus._M_p;
          *((_QWORD *)ptr + 13) = M_string_length;
          *((_QWORD *)ptr + 14) = M_allocated_capacity;
          if ( p_anon_0 )
          {
            v21._M_dataplus._M_p = (std::string::pointer)p_anon_0;
            v21._anon_0._M_allocated_capacity = v17;
            goto LABEL_15;
          }
        }
        v21._M_dataplus._M_p = v21._anon_0._M_local_buf;
        p_anon_0 = &v21._anon_0;
LABEL_15:
        v21._M_string_length = 0LL;
        p_anon_0->_M_local_buf[0] = 0;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
          operator delete(v21._M_dataplus._M_p);
        goto LABEL_18;
      }
      if ( v21._M_string_length )
      {
        if ( v21._M_string_length == 1 )
          v13->_M_local_buf[0] = v21._anon_0._M_local_buf[0];
        else
          memcpy(v13, &v21._anon_0, v21._M_string_length);
        M_string_length = v21._M_string_length;
        v13 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)*((_QWORD *)ptr + 12);
      }
    }
    else
    {
      v21._anon_0._M_local_buf[0] = 0;
      v13 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)*((_QWORD *)ptr + 12);
      M_string_length = 0LL;
    }
    *((_QWORD *)ptr + 13) = M_string_length;
    v13->_M_local_buf[M_string_length] = 0;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p;
    goto LABEL_15;
  }
  google::protobuf::util::converter::JsonStreamParser::ReportFailure(
    this,
    (google::protobuf::StringPiece)__PAIR128__("Parsing terminated before end of input.", v20));
LABEL_6:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p == &other.error_message_._anon_0 )
    return this;
  operator delete(other.error_message_._M_dataplus._M_p);
  return this;
};

// Line 212: range 000000000C95BCA0-000000000C95C1A2
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::RunParser(
        google::protobuf::util::converter::JsonStreamParser *this,
        google::protobuf::util::converter::JsonStreamParser *a2)
{
  __int64 M_cur; // rax
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_first; // rdi
  google::protobuf::util::converter::JsonStreamParser::TokenType v5; // r15d
  google::protobuf::int32 v6; // ebp
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer v7; // rcx
  void *piece_size; // rdi
  google::protobuf::util::converter::JsonStreamParser::TokenType NextTokenType; // eax
  google::protobuf::util::converter::JsonStreamParser::ParseType **v11; // rdx
  google::protobuf::util::converter::JsonStreamParser::ParseType *v12; // rax
  char *v13; // rax
  bool v14; // al
  void *v15; // rdi
  _DWORD *v16; // rax
  const char *ptr; // rdx
  const char *M_p; // rdx
  google::protobuf::util::converter::JsonStreamParser::ParseType **v19; // rdx
  google::protobuf::util::converter::JsonStreamParser::ParseType *v20; // rax
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Map_pointer M_node; // [rsp+8h] [rbp-120h]
  google::protobuf::StringPiece v22; // [rsp+10h] [rbp-118h] BYREF
  char v23; // [rsp+20h] [rbp-108h] BYREF
  google::protobuf::util::Status v24; // [rsp+30h] [rbp-F8h] BYREF
  google::protobuf::util::Status v25; // [rsp+60h] [rbp-C8h] BYREF
  google::protobuf::strings::AlphaNum v26; // [rsp+90h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum other[2]; // [rsp+C0h] [rbp-68h] BYREF

  M_cur = (__int64)a2->stack_.c._M_impl._M_finish._M_cur;
  if ( (std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer)M_cur == a2->stack_.c._M_impl._M_start._M_cur )
  {
LABEL_15:
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  while ( 2 )
  {
    M_first = a2->stack_.c._M_impl._M_finish._M_first;
    if ( M_first == (std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer)M_cur )
      M_cur = *((_QWORD *)a2->stack_.c._M_impl._M_finish._M_node - 1) + 512LL;
    v5 = BEGIN_STRING;
    v6 = *(_DWORD *)(M_cur - 4);
    if ( a2->string_open_ )
    {
      v7 = a2->stack_.c._M_impl._M_finish._M_cur;
      if ( M_first != v7 )
        goto LABEL_6;
    }
    else
    {
      NextTokenType = google::protobuf::util::converter::JsonStreamParser::GetNextTokenType(a2);
      M_first = a2->stack_.c._M_impl._M_finish._M_first;
      v7 = a2->stack_.c._M_impl._M_finish._M_cur;
      v5 = NextTokenType;
      if ( M_first != v7 )
      {
LABEL_6:
        a2->stack_.c._M_impl._M_finish._M_cur = v7 - 1;
        goto LABEL_7;
      }
    }
    operator delete(M_first);
    v11 = a2->stack_.c._M_impl._M_finish._M_node - 1;
    v12 = *v11;
    a2->stack_.c._M_impl._M_finish._M_node = v11;
    a2->stack_.c._M_impl._M_finish._M_first = v12;
    a2->stack_.c._M_impl._M_finish._M_last = v12 + 128;
    a2->stack_.c._M_impl._M_finish._M_cur = v12 + 127;
LABEL_7:
    google::protobuf::util::Status::Status(&v24);
    switch ( v6 )
    {
      case 0:
        google::protobuf::util::converter::JsonStreamParser::ParseValue((google::protobuf::util::Status *)other, a2, v5);
        google::protobuf::util::Status::operator=(&v24, (const google::protobuf::util::Status *)other);
        goto LABEL_9;
      case 1:
        google::protobuf::util::converter::JsonStreamParser::ParseObjectMid(
          (google::protobuf::util::Status *)other,
          a2,
          v5);
        google::protobuf::util::Status::operator=(&v24, (const google::protobuf::util::Status *)other);
        goto LABEL_9;
      case 2:
        google::protobuf::util::converter::JsonStreamParser::ParseEntry(
          (google::protobuf::util::converter::JsonStreamParser *)other,
          (google::protobuf::util::converter::JsonStreamParser::TokenType)a2);
        google::protobuf::util::Status::operator=(&v24, (const google::protobuf::util::Status *)other);
        goto LABEL_9;
      case 3:
        google::protobuf::util::converter::JsonStreamParser::ParseEntryMid(
          (google::protobuf::util::Status *)other,
          a2,
          v5);
        google::protobuf::util::Status::operator=(&v24, (const google::protobuf::util::Status *)other);
        goto LABEL_9;
      case 4:
        google::protobuf::util::converter::JsonStreamParser::ParseArrayValue(
          (google::protobuf::util::converter::JsonStreamParser *)other,
          (google::protobuf::util::converter::JsonStreamParser::TokenType)a2);
        google::protobuf::util::Status::operator=(&v24, (const google::protobuf::util::Status *)other);
        goto LABEL_9;
      case 5:
        google::protobuf::util::converter::JsonStreamParser::ParseArrayMid(
          (google::protobuf::util::Status *)other,
          a2,
          v5);
        google::protobuf::util::Status::operator=(&v24, (const google::protobuf::util::Status *)other);
LABEL_9:
        piece_size = (void *)other[0].piece_size_;
        if ( (char *)other[0].piece_size_ != &other[0].digits[8] )
          goto LABEL_10;
        goto LABEL_11;
      default:
        other[0].piece_data_ = other[0].digits;
        v13 = google::protobuf::FastInt32ToBufferLeft(v6, other[0].digits);
        v26.piece_data_ = "Unknown parse type: ";
        other[0].piece_size_ = v13 - other[0].digits;
        v26.piece_size_ = 20LL;
        google::protobuf::StrCat[abi:cxx11]((__int64)&v22, &v26, other);
        google::protobuf::util::Status::Status(&v25, INTERNAL, v22);
        google::protobuf::util::Status::operator=(&v24, &v25);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v25.error_message_._M_dataplus._M_p != &v25.error_message_._anon_0 )
          operator delete(v25.error_message_._M_dataplus._M_p);
        piece_size = (void *)v22.ptr_;
        if ( v22.ptr_ == &v23 )
        {
          if ( v24.error_code_ )
            goto LABEL_28;
          goto LABEL_12;
        }
LABEL_10:
        operator delete(piece_size);
LABEL_11:
        if ( v24.error_code_ == OK )
        {
LABEL_12:
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24.error_message_._M_dataplus._M_p != &v24.error_message_._anon_0 )
            operator delete(v24.error_message_._M_dataplus._M_p);
          M_cur = (__int64)a2->stack_.c._M_impl._M_finish._M_cur;
          if ( a2->stack_.c._M_impl._M_start._M_cur == (std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer)M_cur )
            goto LABEL_15;
          continue;
        }
LABEL_28:
        if ( a2->finishing_ )
          goto LABEL_29;
        google::protobuf::util::Status::Status(
          (google::protobuf::util::Status *)other,
          CANCELLED,
          (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
        v14 = google::protobuf::util::Status::operator==(&v24, (const google::protobuf::util::Status *)other);
        v15 = (void *)other[0].piece_size_;
        if ( !v14 )
        {
          if ( (char *)other[0].piece_size_ == &other[0].digits[8] )
            goto LABEL_29;
          goto LABEL_40;
        }
        if ( (char *)other[0].piece_size_ != &other[0].digits[8] )
          operator delete((void *)other[0].piece_size_);
        v16 = a2->stack_.c._M_impl._M_finish._M_cur;
        if ( v16 == (_DWORD *)a2->stack_.c._M_impl._M_finish._M_last - 1 )
        {
          M_node = a2->stack_.c._M_impl._M_finish._M_node;
          if ( a2->stack_.c._M_impl._M_start._M_last
             - a2->stack_.c._M_impl._M_start._M_cur
             + ((M_node - a2->stack_.c._M_impl._M_start._M_node - 1) << 7)
             + (((char *)v16 - (char *)a2->stack_.c._M_impl._M_finish._M_first) >> 2) == 0x1FFFFFFFFFFFFFFFLL )
            std::__throw_length_error("cannot create std::deque larger than max_size()");
          if ( a2->stack_.c._M_impl._M_map_size - (M_node - a2->stack_.c._M_impl._M_map) <= 1 )
          {
            std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_reallocate_map(
              &a2->stack_.c,
              1uLL,
              0);
            M_node = a2->stack_.c._M_impl._M_finish._M_node;
          }
          M_node[1] = (google::protobuf::util::converter::JsonStreamParser::ParseType *)operator new(0x200uLL);
          *a2->stack_.c._M_impl._M_finish._M_cur = v6;
          v19 = a2->stack_.c._M_impl._M_finish._M_node + 1;
          v20 = *v19;
          a2->stack_.c._M_impl._M_finish._M_node = v19;
          a2->stack_.c._M_impl._M_finish._M_first = v20;
          a2->stack_.c._M_impl._M_finish._M_last = v20 + 128;
          a2->stack_.c._M_impl._M_finish._M_cur = v20;
        }
        else
        {
          *v16 = v6;
          a2->stack_.c._M_impl._M_finish._M_cur = (std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer)(v16 + 1);
        }
        if ( a2->key_.length_ && !a2->key_storage_._M_string_length )
        {
          ptr = a2->key_.ptr_;
          other[0].piece_size_ = a2->key_.length_;
          other[0].piece_data_ = ptr;
          google::protobuf::StrAppend(&a2->key_storage_, other);
          M_p = a2->key_storage_._M_dataplus._M_p;
          a2->key_.length_ = a2->key_storage_._M_string_length;
          a2->key_.ptr_ = M_p;
        }
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)other);
        google::protobuf::util::Status::operator=(&v24, (const google::protobuf::util::Status *)other);
        v15 = (void *)other[0].piece_size_;
        if ( (char *)other[0].piece_size_ != &other[0].digits[8] )
LABEL_40:
          operator delete(v15);
LABEL_29:
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &v24);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24.error_message_._M_dataplus._M_p != &v24.error_message_._anon_0 )
          operator delete(v24.error_message_._M_dataplus._M_p);
        return this;
    }
  }
};

// Line 266: range 000000000C95B860-000000000C95B9FE
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseValue(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this,
        google::protobuf::util::converter::JsonStreamParser::TokenType type)
{
  google::protobuf::util::converter::JsonStreamParser::ParseType *M_cur; // rax
  int v4; // eax

  switch ( type )
  {
    case BEGIN_STRING:
      google::protobuf::util::converter::JsonStreamParser::ParseString((google::protobuf::util::converter::JsonStreamParser *)retstr);
      return retstr;
    case BEGIN_NUMBER:
      google::protobuf::util::converter::JsonStreamParser::ParseNumber((google::protobuf::util::converter::JsonStreamParser *)retstr);
      return retstr;
    case BEGIN_TRUE:
      google::protobuf::util::converter::JsonStreamParser::ParseTrue(retstr, this);
      return retstr;
    case BEGIN_FALSE:
      google::protobuf::util::converter::JsonStreamParser::ParseFalse(retstr, this);
      return retstr;
    case BEGIN_NULL:
      google::protobuf::util::converter::JsonStreamParser::ParseNull(retstr, this);
      return retstr;
    case BEGIN_OBJECT:
      google::protobuf::util::converter::JsonStreamParser::HandleBeginObject(retstr, this);
      return retstr;
    case BEGIN_ARRAY:
      google::protobuf::util::converter::JsonStreamParser::HandleBeginArray(retstr, this);
      return retstr;
    case UNKNOWN_1:
      google::protobuf::util::converter::JsonStreamParser::ReportUnknown(
        (google::protobuf::util::converter::JsonStreamParser *)retstr,
        (google::protobuf::StringPiece)__PAIR128__("Expected a value.", (unsigned __int64)this));
      return retstr;
    default:
      if ( !this->allow_empty_null_ )
        goto LABEL_19;
      M_cur = this->stack_.c._M_impl._M_finish._M_cur;
      if ( M_cur == this->stack_.c._M_impl._M_start._M_cur )
        goto LABEL_19;
      if ( M_cur == this->stack_.c._M_impl._M_finish._M_first )
        M_cur = (google::protobuf::util::converter::JsonStreamParser::ParseType *)(*((_QWORD *)this->stack_.c._M_impl._M_finish._M_node
                                                                                   - 1)
                                                                                 + 512LL);
      v4 = *((_DWORD *)M_cur - 1);
      if ( v4 == 5 )
      {
        if ( type == VALUE_SEPARATOR )
          goto LABEL_8;
      }
      else if ( v4 == 1 )
      {
LABEL_8:
        (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))this->ow_->_vptr_ObjectWriter
         + 15))(
          this->ow_,
          this->key_.ptr_,
          this->key_.length_);
        this->key_.ptr_ = 0LL;
        this->key_.length_ = 0LL;
        google::protobuf::util::Status::Status(retstr);
        return retstr;
      }
LABEL_19:
      if ( this->finishing_ || this->p_.length_ > 4 )
        google::protobuf::util::converter::JsonStreamParser::ReportFailure(
          (google::protobuf::util::converter::JsonStreamParser *)retstr,
          (google::protobuf::StringPiece)__PAIR128__("Unexpected token.", (unsigned __int64)this));
      else
        google::protobuf::util::Status::Status(
          retstr,
          CANCELLED,
          (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
      return retstr;
  }
};

// Line 301: range 000000000C95A910-000000000C95A999
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseString(
        google::protobuf::util::converter::JsonStreamParser *this,
        __int64 a2)
{
  _BYTE *v2; // rax

  google::protobuf::util::converter::JsonStreamParser::ParseStringHelper(this);
  if ( !LODWORD(this->_vptr_JsonStreamParser) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 104LL))(
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 160),
      *(_QWORD *)(a2 + 168),
      *(_QWORD *)(a2 + 216),
      *(_QWORD *)(a2 + 224));
    v2 = *(_BYTE **)(a2 + 232);
    *(_QWORD *)(a2 + 160) = 0LL;
    *(_QWORD *)(a2 + 168) = 0LL;
    *(_QWORD *)(a2 + 216) = 0LL;
    *(_QWORD *)(a2 + 224) = 0LL;
    *(_QWORD *)(a2 + 240) = 0LL;
    *v2 = 0;
  }
  return this;
};

// Line 312: range 000000000C95A2D0-000000000C95A903
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseStringHelper(
        google::protobuf::util::converter::JsonStreamParser *this,
        google::protobuf::util::converter::JsonStreamParser *a2)
{
  char *ptr; // rbx
  const char *v4; // r14
  google::protobuf::stringpiece_ssize_type length; // rax
  char v6; // bl
  std::string *p_parsed_storage; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  std::string::size_type v10; // r14
  std::string::pointer v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  std::string::pointer v14; // rax
  google::protobuf::stringpiece_ssize_type v15; // rax
  std::string::size_type v16; // rbx
  std::string::pointer v17; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdx
  std::string::pointer v20; // rax
  std::string::size_type v21; // rbx
  std::string::pointer v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  std::string::pointer v25; // rax
  std::string::size_type v26; // rbx
  std::string::pointer v27; // rax
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rdx
  std::string::pointer v30; // rax
  std::string::size_type v31; // rbx
  std::string::pointer v32; // rax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rdx
  std::string::pointer v35; // rax
  std::string::size_type v36; // rbx
  std::string::pointer v37; // rax
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rdx
  std::string::pointer v40; // rax
  std::string::size_type v41; // rbx
  std::string::pointer v42; // rax
  unsigned __int64 v43; // r14
  unsigned __int64 M_allocated_capacity; // rdx
  std::string::pointer v45; // rax
  std::string::size_type M_string_length; // rax
  const char *M_p; // rdx
  google::protobuf::util::Status v48[2]; // [rsp+0h] [rbp-68h] BYREF

  ptr = (char *)a2->p_.ptr_;
  if ( !a2->string_open_ )
  {
    a2->string_open_ = *ptr;
    google::protobuf::util::converter::JsonStreamParser::Advance(a2);
    ptr = (char *)a2->p_.ptr_;
  }
  v4 = ptr;
  if ( !a2->p_.length_ )
    goto LABEL_23;
  while ( 1 )
  {
    while ( *ptr != 92 )
    {
      if ( *ptr == a2->string_open_ )
      {
        M_string_length = a2->parsed_storage_._M_string_length;
        if ( M_string_length )
        {
          if ( v4 < ptr )
          {
            if ( ptr - v4 > 0x3FFFFFFFFFFFFFFFLL - M_string_length )
              goto LABEL_80;
            std::string::_M_append(&a2->parsed_storage_, v4);
            M_string_length = a2->parsed_storage_._M_string_length;
          }
          M_p = a2->parsed_storage_._M_dataplus._M_p;
          a2->parsed_.length_ = M_string_length;
          a2->parsed_.ptr_ = M_p;
        }
        else
        {
          a2->parsed_.ptr_ = v4;
          a2->parsed_.length_ = ptr - v4;
        }
        a2->string_open_ = 0;
        google::protobuf::util::converter::JsonStreamParser::Advance(a2);
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
        return this;
      }
      google::protobuf::util::converter::JsonStreamParser::Advance(a2);
      ptr = (char *)a2->p_.ptr_;
      length = a2->p_.length_;
LABEL_7:
      if ( !length )
        goto LABEL_22;
    }
    if ( v4 < ptr )
    {
      if ( ptr - v4 > 0x3FFFFFFFFFFFFFFFLL - a2->parsed_storage_._M_string_length )
        goto LABEL_80;
      std::string::_M_append(&a2->parsed_storage_, v4);
    }
    if ( a2->p_.length_ == 1 )
      break;
    v6 = ptr[1];
    if ( v6 != 117 )
    {
      p_parsed_storage = &a2->parsed_storage_;
      p_anon_0 = &a2->parsed_storage_._anon_0;
      switch ( v6 )
      {
        case 'b':
          v41 = a2->parsed_storage_._M_string_length;
          v42 = a2->parsed_storage_._M_dataplus._M_p;
          v43 = v41 + 1;
          if ( v42 == (std::string::pointer)p_anon_0 )
            M_allocated_capacity = 15LL;
          else
            M_allocated_capacity = a2->parsed_storage_._anon_0._M_allocated_capacity;
          if ( v43 > M_allocated_capacity )
          {
            std::string::_M_mutate(p_parsed_storage, a2->parsed_storage_._M_string_length, 0LL, 0LL, 1LL);
            v42 = a2->parsed_storage_._M_dataplus._M_p;
          }
          v42[v41] = 8;
          v45 = a2->parsed_storage_._M_dataplus._M_p;
          a2->parsed_storage_._M_string_length = v43;
          v45[v41 + 1] = 0;
          break;
        case 'f':
          v36 = a2->parsed_storage_._M_string_length;
          v37 = a2->parsed_storage_._M_dataplus._M_p;
          v38 = v36 + 1;
          if ( v37 == (std::string::pointer)p_anon_0 )
            v39 = 15LL;
          else
            v39 = a2->parsed_storage_._anon_0._M_allocated_capacity;
          if ( v38 > v39 )
          {
            std::string::_M_mutate(p_parsed_storage, a2->parsed_storage_._M_string_length, 0LL, 0LL, 1LL);
            v37 = a2->parsed_storage_._M_dataplus._M_p;
          }
          v37[v36] = 12;
          v40 = a2->parsed_storage_._M_dataplus._M_p;
          a2->parsed_storage_._M_string_length = v38;
          v40[v36 + 1] = 0;
          break;
        case 'n':
          v31 = a2->parsed_storage_._M_string_length;
          v32 = a2->parsed_storage_._M_dataplus._M_p;
          v33 = v31 + 1;
          if ( v32 == (std::string::pointer)p_anon_0 )
            v34 = 15LL;
          else
            v34 = a2->parsed_storage_._anon_0._M_allocated_capacity;
          if ( v33 > v34 )
          {
            std::string::_M_mutate(p_parsed_storage, a2->parsed_storage_._M_string_length, 0LL, 0LL, 1LL);
            v32 = a2->parsed_storage_._M_dataplus._M_p;
          }
          v32[v31] = 10;
          v35 = a2->parsed_storage_._M_dataplus._M_p;
          a2->parsed_storage_._M_string_length = v33;
          v35[v31 + 1] = 0;
          break;
        case 'r':
          v26 = a2->parsed_storage_._M_string_length;
          v27 = a2->parsed_storage_._M_dataplus._M_p;
          v28 = v26 + 1;
          if ( v27 == (std::string::pointer)p_anon_0 )
            v29 = 15LL;
          else
            v29 = a2->parsed_storage_._anon_0._M_allocated_capacity;
          if ( v28 > v29 )
          {
            std::string::_M_mutate(p_parsed_storage, a2->parsed_storage_._M_string_length, 0LL, 0LL, 1LL);
            v27 = a2->parsed_storage_._M_dataplus._M_p;
          }
          v27[v26] = 13;
          v30 = a2->parsed_storage_._M_dataplus._M_p;
          a2->parsed_storage_._M_string_length = v28;
          v30[v26 + 1] = 0;
          break;
        case 't':
          v21 = a2->parsed_storage_._M_string_length;
          v22 = a2->parsed_storage_._M_dataplus._M_p;
          v23 = v21 + 1;
          if ( v22 == (std::string::pointer)p_anon_0 )
            v24 = 15LL;
          else
            v24 = a2->parsed_storage_._anon_0._M_allocated_capacity;
          if ( v23 > v24 )
          {
            std::string::_M_mutate(p_parsed_storage, a2->parsed_storage_._M_string_length, 0LL, 0LL, 1LL);
            v22 = a2->parsed_storage_._M_dataplus._M_p;
          }
          v22[v21] = 9;
          v25 = a2->parsed_storage_._M_dataplus._M_p;
          a2->parsed_storage_._M_string_length = v23;
          v25[v21 + 1] = 0;
          break;
        case 'v':
          v16 = a2->parsed_storage_._M_string_length;
          v17 = a2->parsed_storage_._M_dataplus._M_p;
          v18 = v16 + 1;
          if ( v17 == (std::string::pointer)p_anon_0 )
            v19 = 15LL;
          else
            v19 = a2->parsed_storage_._anon_0._M_allocated_capacity;
          if ( v18 > v19 )
          {
            std::string::_M_mutate(p_parsed_storage, a2->parsed_storage_._M_string_length, 0LL, 0LL, 1LL);
            v17 = a2->parsed_storage_._M_dataplus._M_p;
          }
          v17[v16] = 11;
          v20 = a2->parsed_storage_._M_dataplus._M_p;
          a2->parsed_storage_._M_string_length = v18;
          v20[v16 + 1] = 0;
          break;
        default:
          v10 = a2->parsed_storage_._M_string_length;
          v11 = a2->parsed_storage_._M_dataplus._M_p;
          v12 = v10 + 1;
          if ( v11 == (std::string::pointer)p_anon_0 )
            v13 = 15LL;
          else
            v13 = a2->parsed_storage_._anon_0._M_allocated_capacity;
          if ( v12 > v13 )
          {
            std::string::_M_mutate(p_parsed_storage, a2->parsed_storage_._M_string_length, 0LL, 0LL, 1LL);
            v11 = a2->parsed_storage_._M_dataplus._M_p;
          }
          v11[v10] = v6;
          v14 = a2->parsed_storage_._M_dataplus._M_p;
          a2->parsed_storage_._M_string_length = v12;
          v14[v10 + 1] = 0;
          break;
      }
      v4 = a2->p_.ptr_ + 2;
      v15 = a2->p_.length_;
      a2->p_.ptr_ = v4;
      ptr = (char *)v4;
      length = v15 - 2;
      a2->p_.length_ = length;
      goto LABEL_7;
    }
    google::protobuf::util::converter::JsonStreamParser::ParseUnicodeEscape(v48, a2);
    if ( v48[0].error_code_ )
    {
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, v48);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v48[0].error_message_._M_dataplus._M_p != &v48[0].error_message_._anon_0 )
        operator delete(v48[0].error_message_._M_dataplus._M_p);
      return this;
    }
    v4 = a2->p_.ptr_;
    ptr = (char *)v4;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v48[0].error_message_._M_dataplus._M_p != &v48[0].error_message_._anon_0 )
    {
      operator delete(v48[0].error_message_._M_dataplus._M_p);
      ptr = (char *)a2->p_.ptr_;
    }
    if ( !a2->p_.length_ )
    {
LABEL_22:
      if ( v4 >= ptr )
      {
LABEL_23:
        if ( !a2->finishing_ )
          goto LABEL_63;
        a2->string_open_ = 0;
        goto LABEL_25;
      }
      if ( ptr - v4 <= 0x3FFFFFFFFFFFFFFFLL - a2->parsed_storage_._M_string_length )
      {
        std::string::_M_append(&a2->parsed_storage_, v4);
        goto LABEL_23;
      }
LABEL_80:
      std::__throw_length_error("basic_string::append");
    }
  }
  if ( !a2->finishing_ )
  {
LABEL_63:
    google::protobuf::util::Status::Status(
      (google::protobuf::util::Status *)this,
      CANCELLED,
      (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
    return this;
  }
LABEL_25:
  google::protobuf::util::converter::JsonStreamParser::ReportFailure(
    this,
    (google::protobuf::StringPiece)__PAIR128__("Closing quote expected in string.", (unsigned __int64)a2));
  return this;
};

// Line 414: range 000000000C959EA0-000000000C95A167
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseUnicodeEscape(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  google::protobuf::stringpiece_ssize_type length; // rbx
  google::protobuf::uint32 v4; // r14d
  const char *v5; // r13
  char v6; // bp
  char v7; // al
  int v8; // r14d
  int v9; // r13d
  char *v10; // rcx
  const char *v11; // rbp
  unsigned __int8 v12; // al
  int v13; // eax
  const char *v14; // [rsp+8h] [rbp-60h]
  const char *ptr; // [rsp+10h] [rbp-58h]
  unsigned __int8 v16; // [rsp+10h] [rbp-58h]
  char *v17; // [rsp+18h] [rbp-50h]
  char buf[4]; // [rsp+2Ch] [rbp-3Ch] BYREF

  length = this->p_.length_;
  if ( length > 5 )
  {
    v4 = 0;
    ptr = this->p_.ptr_;
    v5 = ptr + 2;
    v14 = ptr + 6;
    do
    {
      v6 = *v5;
      if ( !isxdigit(*v5) )
        goto LABEL_32;
      v7 = v6;
      v8 = 16 * v4;
      if ( (unsigned __int8)v6 > 0x39u )
        v7 = v6 + 9;
      ++v5;
      v4 = (v7 & 0xF) + v8;
    }
    while ( v14 != v5 );
    if ( v4 - 55296 > 0x3FF )
    {
      if ( !this->coerce_to_utf8_ && v4 - 57344 > 0x101FFF && v4 > 0xD7FF )
      {
        google::protobuf::util::converter::JsonStreamParser::ReportFailure(
          (google::protobuf::util::converter::JsonStreamParser *)retstr,
          (google::protobuf::StringPiece)__PAIR128__("Invalid unicode code point.", (unsigned __int64)this));
        return retstr;
      }
    }
    else
    {
      if ( length <= 11 )
      {
        if ( !this->finishing_ )
          goto LABEL_3;
      }
      else if ( ptr[6] == 92 && ptr[7] == 117 )
      {
        v9 = 0;
        v10 = (char *)(ptr + 8);
        v11 = ptr + 12;
        while ( 1 )
        {
          v17 = v10;
          v16 = *v10;
          if ( !isxdigit(*v10) )
            break;
          v12 = v16;
          if ( v16 > 0x39u )
            v12 = v16 + 9;
          v10 = v17 + 1;
          v9 = (v12 & 0xF) + 16 * v9;
          if ( v11 == v17 + 1 )
          {
            if ( (unsigned int)(v9 - 56320) <= 0x3FF )
            {
              this->p_.length_ = length - 6;
              v4 = ((v4 << 10) & 0xFFC00 | v9 & 0x3FF) + 0x10000;
              this->p_.ptr_ = v14;
              goto LABEL_28;
            }
            if ( !this->coerce_to_utf8_ )
            {
              google::protobuf::util::converter::JsonStreamParser::ReportFailure(
                (google::protobuf::util::converter::JsonStreamParser *)retstr,
                (google::protobuf::StringPiece)__PAIR128__("Invalid low surrogate.", (unsigned __int64)this));
              return retstr;
            }
            goto LABEL_28;
          }
        }
LABEL_32:
        google::protobuf::util::converter::JsonStreamParser::ReportFailure(
          (google::protobuf::util::converter::JsonStreamParser *)retstr,
          (google::protobuf::StringPiece)__PAIR128__("Invalid escape sequence.", (unsigned __int64)this));
        return retstr;
      }
      if ( !this->coerce_to_utf8_ )
      {
        google::protobuf::util::converter::JsonStreamParser::ReportFailure(
          (google::protobuf::util::converter::JsonStreamParser *)retstr,
          (google::protobuf::StringPiece)__PAIR128__("Missing low surrogate.", (unsigned __int64)this));
        return retstr;
      }
    }
LABEL_28:
    v13 = google::protobuf::EncodeAsUTF8Char(v4, buf);
    this->p_.ptr_ += 6;
    this->p_.length_ -= 6LL;
    if ( v13 > 0x3FFFFFFFFFFFFFFFLL - this->parsed_storage_._M_string_length )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&this->parsed_storage_, buf);
    google::protobuf::util::Status::Status(retstr);
  }
  else if ( this->finishing_ )
  {
    google::protobuf::util::converter::JsonStreamParser::ReportFailure(
      (google::protobuf::util::converter::JsonStreamParser *)retstr,
      (google::protobuf::StringPiece)__PAIR128__("Illegal hex string.", (unsigned __int64)this));
  }
  else
  {
LABEL_3:
    google::protobuf::util::Status::Status(
      retstr,
      CANCELLED,
      (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
  }
  return retstr;
};

// Line 474: range 000000000C95B060-000000000C95B155
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseNumber(
        google::protobuf::util::converter::JsonStreamParser *this,
        unsigned __int64 a2)
{
  int v3; // [rsp+0h] [rbp-58h]
  google::protobuf::util::Status other; // [rsp+10h] [rbp-48h] BYREF

  google::protobuf::util::converter::JsonStreamParser::ParseNumberHelper(
    (google::protobuf::util::converter::JsonStreamParser *)&other,
    (google::protobuf::util::converter::JsonStreamParser::NumberResult *)a2);
  if ( other.error_code_ == OK )
  {
    if ( v3 == 1 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 72LL))(
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 160),
        *(_QWORD *)(a2 + 168));
    }
    else if ( v3 == 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 80LL))(
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 160),
        *(_QWORD *)(a2 + 168));
    }
    else
    {
      if ( v3 )
      {
        google::protobuf::util::converter::JsonStreamParser::ReportFailure(
          this,
          (google::protobuf::StringPiece)__PAIR128__("Unable to parse number.", a2));
        goto LABEL_9;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 88LL))(
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 160),
        *(_QWORD *)(a2 + 168));
    }
    *(_QWORD *)(a2 + 160) = 0LL;
    *(_QWORD *)(a2 + 168) = 0LL;
  }
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &other);
LABEL_9:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  return this;
};

// Line 501: range 000000000C95AD60-000000000C95B055
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseNumberHelper(
        google::protobuf::util::converter::JsonStreamParser *this,
        google::protobuf::util::converter::JsonStreamParser::NumberResult *a2,
        __int64 a3)
{
  char *v4; // rsi
  google::protobuf::int64 int_val; // r9
  char v6; // r13
  char v7; // cl
  __int64 v8; // rax
  bool v9; // bl
  google::protobuf::StringPiece::size_type v10; // r14
  google::protobuf::StringPiece v11; // rax
  std::forward_iterator_tag v12; // cl
  std::string v15; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(char **)&a2[9].type;
  int_val = a2[9]._anon_0.int_val;
  v6 = *v4;
  if ( (int)int_val > 0 )
  {
    v7 = *v4;
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      v10 = (int)v8;
      if ( (unsigned int)(v7 - 48) > 9 )
      {
        if ( v7 == 46 || (v7 & 0xDF) == 69 )
        {
          v9 = v7 == 46 || (v7 & 0xDF) == 69;
        }
        else if ( ((v7 - 43) & 0xFD) != 0 && v7 != 120 )
        {
          goto LABEL_7;
        }
      }
      LODWORD(v10) = v8 + 1;
      if ( v8 == (_DWORD)int_val - 1 )
        goto LABEL_21;
      v7 = v4[++v8];
    }
  }
  v9 = 0;
  LODWORD(v10) = 0;
LABEL_21:
  if ( (_DWORD)int_val == (_DWORD)v10 && !LOBYTE(a2[13].type) )
  {
    google::protobuf::util::Status::Status(
      (google::protobuf::util::Status *)this,
      CANCELLED,
      (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
    return this;
  }
  v10 = (int)v10;
LABEL_7:
  v11 = google::protobuf::StringPiece::substr((const google::protobuf::StringPiece *const)&a2[9], 0LL, v10);
  v15._M_dataplus._M_p = v15._anon_0._M_local_buf;
  if ( v11.ptr_ )
  {
    std::string::_M_construct<char const*>(&v15, v11.ptr_, &v11.ptr_[v11.length_], v12);
    if ( !v9 )
      goto LABEL_9;
LABEL_25:
    if ( google::protobuf::safe_strtod(v15._M_dataplus._M_p, (double *)(a3 + 8)) )
    {
      if ( BYTE2(a2[19].type) || fabs(*(double *)(a3 + 8)) <= 1.797693134862316e308 )
      {
        *(_DWORD *)a3 = 0;
        *(_QWORD *)&a2[9].type += v10;
        a2[9]._anon_0.int_val -= v10;
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      }
      else
      {
        google::protobuf::util::converter::JsonStreamParser::ReportFailure(
          this,
          (google::protobuf::StringPiece)__PAIR128__("Number exceeds the range of double.", (unsigned __int64)a2));
      }
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v15._M_string_length = 0LL;
  v15._anon_0._M_local_buf[0] = 0;
  if ( v9 )
    goto LABEL_25;
LABEL_9:
  if ( v6 == 45 )
  {
    if ( v15._M_string_length <= 2 || v15._M_dataplus._M_p[1] != 48 )
    {
      if ( !(unsigned __int8)google::protobuf::safe_strto64((__int64)&v15, (signed __int64 *)(a3 + 8), v11.length_, v12) )
        goto LABEL_13;
      *(_DWORD *)a3 = 1;
      *(_QWORD *)&a2[9].type += v10;
      a2[9]._anon_0.int_val -= v10;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      goto LABEL_14;
    }
LABEL_35:
    google::protobuf::util::converter::JsonStreamParser::ReportFailure(
      this,
      (google::protobuf::StringPiece)__PAIR128__("Octal/hex numbers are not valid JSON values.", (unsigned __int64)a2));
    goto LABEL_14;
  }
  if ( v15._M_string_length > 1 && *v15._M_dataplus._M_p == 48 )
    goto LABEL_35;
  if ( !(unsigned __int8)google::protobuf::safe_strtou64((__int64)&v15, (unsigned __int64 *)(a3 + 8), v11.length_, v12) )
  {
LABEL_13:
    google::protobuf::util::converter::JsonStreamParser::ReportFailure(
      this,
      (google::protobuf::StringPiece)__PAIR128__("Unable to parse number.", (unsigned __int64)a2));
    goto LABEL_14;
  }
  *(_DWORD *)a3 = 2;
  *(_QWORD *)&a2[9].type += v10;
  a2[9]._anon_0.int_val -= v10;
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
LABEL_14:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p != &v15._anon_0 )
    operator delete(v15._M_dataplus._M_p);
  return this;
};

// Line 575: range 000000000C95B330-000000000C95B3BE
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::HandleBeginObject(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_last; // rcx
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_cur; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType v5[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  google::protobuf::util::converter::JsonStreamParser::Advance(this);
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))this->ow_->_vptr_ObjectWriter
   + 2))(
    this->ow_,
    this->key_.ptr_,
    this->key_.length_);
  M_last = this->stack_.c._M_impl._M_finish._M_last;
  M_cur = this->stack_.c._M_impl._M_finish._M_cur;
  this->key_.ptr_ = 0LL;
  this->key_.length_ = 0LL;
  v5[0] = ENTRY;
  if ( M_cur == M_last - 1 )
  {
    std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_push_back_aux<google::protobuf::util::converter::JsonStreamParser::ParseType>(
      &this->stack_.c,
      v5,
      M_last - 1);
  }
  else
  {
    *M_cur = ENTRY;
    this->stack_.c._M_impl._M_finish._M_cur = M_cur + 1;
  }
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 584: range 000000000C95B3C0-000000000C95B49E
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseObjectMid(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this,
        google::protobuf::util::converter::JsonStreamParser::TokenType type)
{
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_last; // rcx
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_cur; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType v6[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  switch ( type )
  {
    case UNKNOWN_1:
      google::protobuf::util::converter::JsonStreamParser::ReportUnknown(
        (google::protobuf::util::converter::JsonStreamParser *)retstr,
        (google::protobuf::StringPiece)__PAIR128__("Expected , or } after key:value pair.", (unsigned __int64)this));
      return retstr;
    case END_OBJECT_0:
      google::protobuf::util::converter::JsonStreamParser::Advance(this);
      (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *))this->ow_->_vptr_ObjectWriter + 3))(this->ow_);
      google::protobuf::util::Status::Status(retstr);
      return retstr;
    case VALUE_SEPARATOR:
      google::protobuf::util::converter::JsonStreamParser::Advance(this);
      M_last = this->stack_.c._M_impl._M_finish._M_last;
      M_cur = this->stack_.c._M_impl._M_finish._M_cur;
      v6[0] = ENTRY;
      if ( M_cur == M_last - 1 )
      {
        std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_push_back_aux<google::protobuf::util::converter::JsonStreamParser::ParseType>(
          &this->stack_.c,
          v6,
          M_last - 1);
      }
      else
      {
        *M_cur = ENTRY;
        this->stack_.c._M_impl._M_finish._M_cur = M_cur + 1;
      }
      google::protobuf::util::Status::Status(retstr);
      return retstr;
    default:
      google::protobuf::util::converter::JsonStreamParser::ReportFailure(
        (google::protobuf::util::converter::JsonStreamParser *)retstr,
        (google::protobuf::StringPiece)__PAIR128__("Expected , or } after key:value pair.", (unsigned __int64)this));
      return retstr;
  }
};

// Line 605: range 000000000C95B4A0-000000000C95B717
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseEntry(
        google::protobuf::util::converter::JsonStreamParser *this,
        unsigned __int64 a2,
        int a3)
{
  __int64 v5; // rcx
  _DWORD *v6; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType *v7; // rdx
  google::protobuf::util::converter::JsonStreamParser::ParseType *v8; // rax
  _BYTE *v9; // rax
  __int64 v10; // rdx
  google::protobuf::util::Status v11; // [rsp+0h] [rbp-88h] BYREF
  google::protobuf::util::Status other; // [rsp+30h] [rbp-58h] BYREF

  if ( a3 == 12 )
  {
    google::protobuf::util::converter::JsonStreamParser::ReportUnknown(
      this,
      (google::protobuf::StringPiece)__PAIR128__("Expected an object key or }.", a2));
    return this;
  }
  if ( a3 == 6 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 24LL))(*(_QWORD *)(a2 + 8));
    google::protobuf::util::converter::JsonStreamParser::Advance((google::protobuf::util::converter::JsonStreamParser *const)a2);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  google::protobuf::util::Status::Status(&v11);
  if ( a3 )
  {
    if ( a3 == 11 )
      google::protobuf::util::converter::JsonStreamParser::ParseKey(
        &other,
        (google::protobuf::util::converter::JsonStreamParser *const)a2);
    else
      google::protobuf::util::converter::JsonStreamParser::ReportFailure(
        (google::protobuf::util::converter::JsonStreamParser *)&other,
        (google::protobuf::StringPiece)__PAIR128__("Expected an object key or }.", a2));
    google::protobuf::util::Status::operator=(&v11, &other);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
  }
  else
  {
    google::protobuf::util::converter::JsonStreamParser::ParseStringHelper(
      (google::protobuf::util::converter::JsonStreamParser *)&other,
      (google::protobuf::util::converter::JsonStreamParser *)a2);
    google::protobuf::util::Status::operator=(&v11, &other);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    if ( v11.error_code_ )
      goto LABEL_15;
    v9 = *(_BYTE **)(a2 + 176);
    *(_QWORD *)(a2 + 184) = 0LL;
    *v9 = 0;
    if ( *(_QWORD *)(a2 + 240) )
    {
      std::string::swap(a2 + 232, a2 + 176);
      v10 = *(_QWORD *)(a2 + 176);
      *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 184);
      *(_QWORD *)(a2 + 160) = v10;
    }
    else
    {
      *(__m128i *)(a2 + 160) = _mm_loadu_si128((const __m128i *)(a2 + 216));
    }
    *(_QWORD *)(a2 + 216) = 0LL;
    *(_QWORD *)(a2 + 224) = 0LL;
  }
  if ( v11.error_code_ == OK )
  {
    v5 = *(_QWORD *)(a2 + 80);
    v6 = *(_DWORD **)(a2 + 64);
    other.error_code_ = CANCELLED;
    v7 = (google::protobuf::util::converter::JsonStreamParser::ParseType *)(v5 - 4);
    if ( v6 == (_DWORD *)(v5 - 4) )
    {
      std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_push_back_aux<google::protobuf::util::converter::JsonStreamParser::ParseType>(
        (std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType> *const)(a2 + 16),
        (google::protobuf::util::converter::JsonStreamParser::ParseType *)&other,
        v7);
      v8 = *(google::protobuf::util::converter::JsonStreamParser::ParseType **)(a2 + 64);
      v7 = (google::protobuf::util::converter::JsonStreamParser::ParseType *)(*(_QWORD *)(a2 + 80) - 4LL);
    }
    else
    {
      *v6 = 1;
      v8 = (google::protobuf::util::converter::JsonStreamParser::ParseType *)(v6 + 1);
      *(_QWORD *)(a2 + 64) = v8;
    }
    other.error_code_ = INVALID_ARGUMENT;
    if ( v7 == v8 )
    {
      std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_push_back_aux<google::protobuf::util::converter::JsonStreamParser::ParseType>(
        (std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType> *const)(a2 + 16),
        (google::protobuf::util::converter::JsonStreamParser::ParseType *)&other,
        v7);
    }
    else
    {
      *v8 = ENTRY_MID;
      *(_QWORD *)(a2 + 64) = v8 + 1;
    }
  }
LABEL_15:
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &v11);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11.error_message_._M_dataplus._M_p == &v11.error_message_._anon_0 )
    return this;
  operator delete(v11.error_message_._M_dataplus._M_p);
  return this;
};

// Line 646: range 000000000C95B720-000000000C95B7CE
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseEntryMid(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this,
        google::protobuf::util::converter::JsonStreamParser::TokenType type)
{
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_cur; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType *v5; // rdx
  google::protobuf::util::converter::JsonStreamParser::ParseType v6[3]; // [rsp+1Ch] [rbp-Ch] BYREF

  if ( type == UNKNOWN_1 )
  {
    google::protobuf::util::converter::JsonStreamParser::ReportUnknown(
      (google::protobuf::util::converter::JsonStreamParser *)retstr,
      (google::protobuf::StringPiece)__PAIR128__("Expected : between key:value pair.", (unsigned __int64)this));
    return retstr;
  }
  else if ( type == ENTRY_SEPARATOR )
  {
    google::protobuf::util::converter::JsonStreamParser::Advance(this);
    v6[0] = VALUE;
    M_cur = this->stack_.c._M_impl._M_finish._M_cur;
    v5 = this->stack_.c._M_impl._M_finish._M_last - 1;
    if ( M_cur == v5 )
    {
      std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_push_back_aux<google::protobuf::util::converter::JsonStreamParser::ParseType>(
        &this->stack_.c,
        v6,
        v5);
    }
    else
    {
      *M_cur = VALUE;
      this->stack_.c._M_impl._M_finish._M_cur = M_cur + 1;
    }
    google::protobuf::util::Status::Status(retstr);
    return retstr;
  }
  else
  {
    google::protobuf::util::converter::JsonStreamParser::ReportFailure(
      (google::protobuf::util::converter::JsonStreamParser *)retstr,
      (google::protobuf::StringPiece)__PAIR128__("Expected : between key:value pair.", (unsigned __int64)this));
    return retstr;
  }
};

// Line 658: range 000000000C95B7D0-000000000C95B85E
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::HandleBeginArray(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_last; // rcx
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_cur; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType v5[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  google::protobuf::util::converter::JsonStreamParser::Advance(this);
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))this->ow_->_vptr_ObjectWriter
   + 4))(
    this->ow_,
    this->key_.ptr_,
    this->key_.length_);
  M_last = this->stack_.c._M_impl._M_finish._M_last;
  M_cur = this->stack_.c._M_impl._M_finish._M_cur;
  this->key_.ptr_ = 0LL;
  this->key_.length_ = 0LL;
  v5[0] = ARRAY_VALUE;
  if ( M_cur == M_last - 1 )
  {
    std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_push_back_aux<google::protobuf::util::converter::JsonStreamParser::ParseType>(
      &this->stack_.c,
      v5,
      M_last - 1);
  }
  else
  {
    *M_cur = ARRAY_VALUE;
    this->stack_.c._M_impl._M_finish._M_cur = M_cur + 1;
  }
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 667: range 000000000C95BA10-000000000C95BBAE
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseArrayValue(
        google::protobuf::util::converter::JsonStreamParser *this,
        google::protobuf::util::converter::JsonStreamParser *a2,
        google::protobuf::util::converter::JsonStreamParser::ParseType *a3)
{
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_last; // rbx
  _DWORD *M_cur; // rax
  bool v6; // bl
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer v8; // rdi
  google::protobuf::util::converter::JsonStreamParser::ParseType **v9; // rdx
  google::protobuf::util::converter::JsonStreamParser::ParseType *v10; // rax
  int v11; // [rsp+Ch] [rbp-8Ch]
  google::protobuf::util::Status other; // [rsp+10h] [rbp-88h] BYREF
  google::protobuf::util::Status v13; // [rsp+40h] [rbp-58h] BYREF

  if ( (_DWORD)a3 == 12 )
  {
    google::protobuf::util::converter::JsonStreamParser::ReportUnknown(
      this,
      (google::protobuf::StringPiece)__PAIR128__("Expected a value or ] within an array.", (unsigned __int64)a2));
    return this;
  }
  else if ( (_DWORD)a3 == 8 )
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *))a2->ow_->_vptr_ObjectWriter + 5))(a2->ow_);
    google::protobuf::util::converter::JsonStreamParser::Advance(a2);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  else
  {
    M_last = a2->stack_.c._M_impl._M_finish._M_last;
    M_cur = a2->stack_.c._M_impl._M_finish._M_cur;
    v13.error_code_ = NOT_FOUND;
    if ( M_cur == (_DWORD *)(M_last - 1) )
    {
      v11 = (int)a3;
      std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_push_back_aux<google::protobuf::util::converter::JsonStreamParser::ParseType>(
        &a2->stack_.c,
        (google::protobuf::util::converter::JsonStreamParser::ParseType *)&v13,
        a3);
      LODWORD(a3) = v11;
    }
    else
    {
      *M_cur = 5;
      a2->stack_.c._M_impl._M_finish._M_cur = (std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer)(M_cur + 1);
    }
    google::protobuf::util::converter::JsonStreamParser::ParseValue(
      &other,
      a2,
      (google::protobuf::util::converter::JsonStreamParser::TokenType)a3);
    google::protobuf::util::Status::Status(
      &v13,
      CANCELLED,
      (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
    v6 = google::protobuf::util::Status::operator==(&other, &v13);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13.error_message_._M_dataplus._M_p != &v13.error_message_._anon_0 )
      operator delete(v13.error_message_._M_dataplus._M_p);
    if ( v6 )
    {
      v8 = a2->stack_.c._M_impl._M_finish._M_cur;
      if ( v8 == a2->stack_.c._M_impl._M_finish._M_first )
      {
        operator delete(v8);
        v9 = a2->stack_.c._M_impl._M_finish._M_node - 1;
        v10 = *v9;
        a2->stack_.c._M_impl._M_finish._M_node = v9;
        a2->stack_.c._M_impl._M_finish._M_first = v10;
        a2->stack_.c._M_impl._M_finish._M_last = v10 + 128;
        a2->stack_.c._M_impl._M_finish._M_cur = v10 + 127;
      }
      else
      {
        a2->stack_.c._M_impl._M_finish._M_cur = v8 - 1;
      }
    }
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this, &other);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
      operator delete(other.error_message_._M_dataplus._M_p);
    return this;
  }
};

// Line 691: range 000000000C95BBC0-000000000C95BC9E
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseArrayMid(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this,
        google::protobuf::util::converter::JsonStreamParser::TokenType type)
{
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_last; // rcx
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Elt_pointer M_cur; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType v6[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  switch ( type )
  {
    case UNKNOWN_1:
      google::protobuf::util::converter::JsonStreamParser::ReportUnknown(
        (google::protobuf::util::converter::JsonStreamParser *)retstr,
        (google::protobuf::StringPiece)__PAIR128__("Expected , or ] after array value.", (unsigned __int64)this));
      return retstr;
    case END_ARRAY:
      (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *))this->ow_->_vptr_ObjectWriter + 5))(this->ow_);
      google::protobuf::util::converter::JsonStreamParser::Advance(this);
      google::protobuf::util::Status::Status(retstr);
      return retstr;
    case VALUE_SEPARATOR:
      google::protobuf::util::converter::JsonStreamParser::Advance(this);
      M_last = this->stack_.c._M_impl._M_finish._M_last;
      M_cur = this->stack_.c._M_impl._M_finish._M_cur;
      v6[0] = ARRAY_VALUE;
      if ( M_cur == M_last - 1 )
      {
        std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_push_back_aux<google::protobuf::util::converter::JsonStreamParser::ParseType>(
          &this->stack_.c,
          v6,
          M_last - 1);
      }
      else
      {
        *M_cur = ARRAY_VALUE;
        this->stack_.c._M_impl._M_finish._M_cur = M_cur + 1;
      }
      google::protobuf::util::Status::Status(retstr);
      return retstr;
    default:
      google::protobuf::util::converter::JsonStreamParser::ReportFailure(
        (google::protobuf::util::converter::JsonStreamParser *)retstr,
        (google::protobuf::StringPiece)__PAIR128__("Expected , or ] after array value.", (unsigned __int64)this));
      return retstr;
  }
};

// Line 712: range 000000000C959B00-000000000C959B62
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseTrue(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, __int64))this->ow_->_vptr_ObjectWriter
   + 6))(
    this->ow_,
    this->key_.ptr_,
    this->key_.length_,
    1LL);
  this->p_.ptr_ += 4;
  this->p_.length_ -= 4LL;
  this->key_.ptr_ = 0LL;
  this->key_.length_ = 0LL;
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 719: range 000000000C959B70-000000000C959BCF
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseFalse(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, _QWORD))this->ow_->_vptr_ObjectWriter
   + 6))(
    this->ow_,
    this->key_.ptr_,
    this->key_.length_,
    0LL);
  this->p_.ptr_ += 5;
  this->p_.length_ -= 5LL;
  this->key_.ptr_ = 0LL;
  this->key_.length_ = 0LL;
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 726: range 000000000C959BD0-000000000C959C2D
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseNull(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))this->ow_->_vptr_ObjectWriter
   + 15))(
    this->ow_,
    this->key_.ptr_,
    this->key_.length_);
  this->p_.ptr_ += 4;
  this->p_.length_ -= 4LL;
  this->key_.ptr_ = 0LL;
  this->key_.length_ = 0LL;
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 733: range 000000000C959C30-000000000C959C7D
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseEmptyNull(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))this->ow_->_vptr_ObjectWriter
   + 15))(
    this->ow_,
    this->key_.ptr_,
    this->key_.length_);
  this->key_.ptr_ = 0LL;
  this->key_.length_ = 0LL;
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 745: range 000000000C959CD0-000000000C959E8C
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::ReportFailure(
        google::protobuf::util::converter::JsonStreamParser *this,
        google::protobuf::StringPiece a2,
        size_t a3)
{
  const char *length; // r14
  const char *ptr; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  const char *v8; // rbx
  unsigned __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rbp
  unsigned __int64 v12; // rax
  size_t v14; // [rsp+0h] [rbp-178h]
  void *v16; // [rsp+10h] [rbp-168h] BYREF
  __int64 v17; // [rsp+18h] [rbp-160h]
  __int64 v18[2]; // [rsp+20h] [rbp-158h] BYREF
  google::protobuf::StringPiece v19; // [rsp+30h] [rbp-148h] BYREF
  char v20; // [rsp+40h] [rbp-138h] BYREF
  google::protobuf::strings::AlphaNum v21; // [rsp+50h] [rbp-128h] BYREF
  google::protobuf::strings::AlphaNum v22; // [rsp+80h] [rbp-F8h] BYREF
  google::protobuf::strings::AlphaNum v23; // [rsp+B0h] [rbp-C8h] BYREF
  google::protobuf::strings::AlphaNum v24; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v25[13]; // [rsp+110h] [rbp-68h] BYREF

  length = (const char *)a2.length_;
  ptr = a2.ptr_;
  v6 = *((_QWORD *)a2.ptr_ + 18);
  v7 = *((_QWORD *)ptr + 16);
  v8 = (const char *)(v6 - 20);
  v16 = v18;
  if ( v7 > v6 - 20 )
    v8 = (const char *)v7;
  v9 = *((_QWORD *)ptr + 17) + v7;
  if ( v9 > v6 + 20 )
    v9 = v6 + 20;
  v14 = v9 - (_QWORD)v8;
  std::string::_M_construct(&v16, v6 - (_QWORD)v8, 32LL);
  v10 = v16;
  v11 = v17;
  v12 = 15LL;
  if ( v16 != v18 )
    v12 = v18[0];
  if ( v17 + 1 > v12 )
  {
    std::string::_M_mutate(&v16, v17, 0LL, 0LL, 1LL);
    v10 = v16;
  }
  v10[v11] = 94;
  v17 = v11 + 1;
  *((_BYTE *)v16 + v11 + 1) = 0;
  v24.piece_data_ = "syntax = \"$0\";\n\n" + 15;
  v25[0] = (__int64)v16;
  v24.piece_size_ = 1LL;
  v25[1] = v17;
  v23.piece_data_ = v8;
  v23.piece_size_ = v14;
  v22.piece_data_ = "syntax = \"$0\";\n\n" + 15;
  v22.piece_size_ = 1LL;
  v21.piece_data_ = length;
  v21.piece_size_ = a3;
  google::protobuf::StrCat[abi:cxx11]((__int64)&v19, &v21, &v22, &v23, &v24, (__int64)v25);
  google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v19);
  if ( v19.ptr_ != &v20 )
    operator delete((void *)v19.ptr_);
  if ( v16 != v18 )
    operator delete(v16);
  return this;
};

// Line 759: range 000000000C95A170-000000000C95A23A
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::JsonStreamParser *__fastcall google::protobuf::util::converter::JsonStreamParser::ReportUnknown(
        google::protobuf::util::converter::JsonStreamParser *this,
        google::protobuf::StringPiece a2,
        size_t a3)
{
  __int64 v3; // rsi
  __int64 v4; // rsi
  google::protobuf::util::Status *v6[2]; // [rsp+0h] [rbp-98h] BYREF
  char v7; // [rsp+10h] [rbp-88h] BYREF
  google::protobuf::strings::AlphaNum v8; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::strings::AlphaNum v9; // [rsp+50h] [rbp-48h] BYREF

  if ( *(_BYTE *)(v3 + 208) )
  {
    if ( *(_QWORD *)(v4 + 152) )
    {
      google::protobuf::util::converter::JsonStreamParser::ReportFailure(this, a2, a3);
    }
    else
    {
      v9.piece_data_ = (const char *)a2.length_;
      v9.piece_size_ = a3;
      v8.piece_data_ = "Unexpected end of string. ";
      v8.piece_size_ = 26LL;
      google::protobuf::StrCat[abi:cxx11]((__int64)v6, &v8, &v9);
      google::protobuf::util::converter::JsonStreamParser::ReportFailure(
        this,
        (google::protobuf::StringPiece)__PAIR128__((unsigned __int64)v6[0], (unsigned __int64)a2.ptr_),
        (size_t)v6[1]);
      if ( (char *)v6[0] != &v7 )
      {
        operator delete(v6[0]);
        return this;
      }
    }
    return this;
  }
  else
  {
    google::protobuf::util::Status::Status(
      (google::protobuf::util::Status *)this,
      CANCELLED,
      (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
    return this;
  }
};

// Line 771: range 000000000C95A280-000000000C95A2C8
void __fastcall google::protobuf::util::converter::JsonStreamParser::SkipWhitespace(
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  char v1; // al

  while ( this->p_.length_ )
  {
    v1 = *this->p_.ptr_;
    if ( (unsigned __int8)(v1 - 9) > 4u && v1 != 32 )
      break;
    google::protobuf::util::converter::JsonStreamParser::Advance(this);
  }
};

// Line 776: range 000000000C95A240-000000000C95A276
void __fastcall google::protobuf::util::converter::JsonStreamParser::Advance(
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  int LetterNumBytes; // eax
  google::protobuf::stringpiece_ssize_type length; // rdx

  LetterNumBytes = google::protobuf::UTF8FirstLetterNumBytes(this->p_.ptr_, this->p_.length_);
  length = this->p_.length_;
  if ( LetterNumBytes >= (int)length )
    LetterNumBytes = this->p_.length_;
  this->p_.ptr_ += LetterNumBytes;
  this->p_.length_ = length - LetterNumBytes;
};

// Line 783: range 000000000C95A9A0-000000000C95AB1C
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::JsonStreamParser::ParseKey(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  __int64 length; // r8
  const char *ptr; // r9
  char v5; // al
  __int64 v6; // rdi
  google::protobuf::stringpiece_ssize_type v7; // rdx
  const char *v8; // rax
  bool v9; // zf
  std::string::pointer M_p; // rax
  int v12; // eax

  length = this->p_.length_;
  if ( length
    && ((ptr = this->p_.ptr_, v5 = *ptr, (unsigned __int8)((*ptr & 0xDF) - 65) <= 0x19u) || v5 == 95 || v5 == 36) )
  {
    v6 = 0x8000000003FF001LL;
    v7 = 1LL;
    if ( length <= 1 )
    {
      v8 = ptr + 1;
    }
    else
    {
      while ( 1 )
      {
        v8 = &ptr[v7];
        if ( (unsigned __int8)((ptr[v7] & 0xDF) - 65) > 0x19u
          && ((unsigned __int8)(ptr[v7] - 36) > 0x3Bu || !_bittest64(&v6, (unsigned int)(unsigned __int8)ptr[v7] - 36)) )
        {
          break;
        }
        v12 = ++v7;
        if ( length == v7 )
        {
          this->key_.ptr_ = ptr;
          v9 = !this->finishing_;
          this->key_.length_ = length;
          this->p_.ptr_ = &ptr[v12];
          this->p_.length_ = 0LL;
          if ( !v9 )
            goto LABEL_8;
          goto LABEL_15;
        }
      }
    }
    this->key_.ptr_ = ptr;
    v9 = !this->finishing_;
    this->key_.length_ = v7;
    this->p_.ptr_ = v8;
    this->p_.length_ = length - v7;
    if ( v9 && length == v7 )
    {
LABEL_15:
      this->p_.ptr_ = ptr;
      this->p_.length_ = length;
      google::protobuf::util::Status::Status(
        retstr,
        CANCELLED,
        (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
      return retstr;
    }
    else
    {
LABEL_8:
      M_p = this->key_storage_._M_dataplus._M_p;
      this->key_storage_._M_string_length = 0LL;
      *M_p = 0;
      google::protobuf::util::Status::Status(retstr);
      return retstr;
    }
  }
  else
  {
    google::protobuf::util::converter::JsonStreamParser::ReportFailure(
      (google::protobuf::util::converter::JsonStreamParser *)retstr,
      (google::protobuf::StringPiece)__PAIR128__("Invalid key or variable name.", (unsigned __int64)this),
      0x1DuLL);
    return retstr;
  }
};

// Line 799: range 000000000C95AB30-000000000C95ACC6
google::protobuf::util::converter::JsonStreamParser::TokenType __fastcall google::protobuf::util::converter::JsonStreamParser::GetNextTokenType(
        google::protobuf::util::converter::JsonStreamParser *const this)
{
  google::protobuf::stringpiece_ssize_type length; // rdx
  google::protobuf::util::converter::JsonStreamParser::TokenType v3; // r8d
  char v4; // al

  google::protobuf::util::converter::JsonStreamParser::SkipWhitespace(this);
  length = this->p_.length_;
  v3 = UNKNOWN_1;
  if ( !(_DWORD)length )
    return v3;
  v4 = *this->p_.ptr_;
  if ( v4 == 34 || v4 == 39 )
    return 0;
  if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
  {
    if ( (int)length <= 3
      || (v3 = BEGIN_TRUE, memcmp(this->p_.ptr_, "true", 4uLL))
      && ((_DWORD)length == 4 || (v3 = BEGIN_FALSE, memcmp(this->p_.ptr_, "false", 5uLL)))
      && (v3 = BEGIN_NULL, memcmp(this->p_.ptr_, "null", 4uLL)) )
    {
      switch ( v4 )
      {
        case '{':
          return 5;
        case '}':
          return 6;
        case '[':
          return 7;
        case ']':
          return 8;
        case ':':
          return 9;
        case ',':
          return 10;
        default:
          v3 = UNKNOWN_1;
          if ( length )
          {
            v3 = BEGIN_KEY;
            if ( (unsigned __int8)((v4 & 0xDF) - 65) > 0x19u )
            {
              if ( v4 == 95 )
                return 11;
              v3 = UNKNOWN_1;
              if ( v4 == 36 )
                return 11;
            }
          }
          break;
      }
    }
    return v3;
  }
  return 1;
};

// Line 844: range 000000000C7471A0-000000000C7471C1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util9converter16JsonStreamParserC2EPNS2_12ObjectWriterE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};

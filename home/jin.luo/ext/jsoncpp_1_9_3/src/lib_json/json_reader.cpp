// File: /home/jin.luo/ext/jsoncpp_1_9_3/src/lib_json/json_reader.cpp

// Line 66: range 00000000152D9300-00000000152D9316
Json::Features __cdecl Json::Features::all()
{
  Json::Features v1; // [rsp+Ch] [rbp-Ch] BYREF

  Json::Features::Features(&v1);
  return v1;
};

// Line 68: range 00000000152D9320-00000000152D9337
Json::Features __cdecl Json::Features::strictMode()
{
  Json::Features features; // [rsp+Ch] [rbp-Ch] BYREF

  Json::Features::Features(&features);
  return (Json::Features)256;
};

// Line 87: range 00000000152DBD70-00000000152DBE68
_QWORD Json::Reader::Reader(Json::Reader *__hidden this);

// Line 89: range 00000000152DBE70-00000000152DBF4D
__int64 __fastcall Json::Reader::Reader(Json::Reader *this, const Json::Features *a2)
{
  __int64 result; // rax

  this->nodes_.c._M_impl._M_map = 0LL;
  this->nodes_.c._M_impl._M_map_size = 0LL;
  *(_OWORD *)&this->nodes_.c._M_impl._M_start._M_cur = 0LL;
  *(_OWORD *)&this->nodes_.c._M_impl._M_start._M_last = 0LL;
  *(_OWORD *)&this->nodes_.c._M_impl._M_finish._M_cur = 0LL;
  *(_OWORD *)&this->nodes_.c._M_impl._M_finish._M_last = 0LL;
  std::_Deque_base<Json::Value *>::_M_initialize_map(&this->nodes_.c, 0LL);
  this->errors_._M_impl._M_map = 0LL;
  this->errors_._M_impl._M_map_size = 0LL;
  *(_OWORD *)&this->errors_._M_impl._M_start._M_cur = 0LL;
  *(_OWORD *)&this->errors_._M_impl._M_start._M_last = 0LL;
  *(_OWORD *)&this->errors_._M_impl._M_finish._M_cur = 0LL;
  *(_OWORD *)&this->errors_._M_impl._M_finish._M_last = 0LL;
  std::_Deque_base<Json::Reader::ErrorInfo>::_M_initialize_map(&this->errors_, 0LL);
  this->document_._M_string_length = 0LL;
  this->document_._M_dataplus._M_p = this->document_._anon_0._M_local_buf;
  this->commentsBefore_._M_dataplus._M_p = this->commentsBefore_._anon_0._M_local_buf;
  result = (__int64)*a2;
  this->document_._anon_0._M_local_buf[0] = 0;
  this->lastValue_ = 0LL;
  this->commentsBefore_._M_string_length = 0LL;
  this->commentsBefore_._anon_0._M_local_buf[0] = 0;
  this->features_ = (Json::Features)result;
  this->collectComments_ = 0;
  *(_OWORD *)&this->begin_ = 0LL;
  *(_OWORD *)&this->current_ = 0LL;
  return result;
};

// Line 92: range 00000000152DF8A0-00000000152DF8E4
bool __fastcall Json::Reader::parse(
        Json::Reader *const this,
        const std::string *document,
        Json::Value *root,
        bool collectComments)
{
  std::string::_M_replace(
    &this->document_,
    0LL,
    this->document_._M_string_length,
    document->_M_dataplus._M_p,
    document->_M_string_length);
  return Json::Reader::parse(
           this,
           this->document_._M_dataplus._M_p,
           &this->document_._M_dataplus._M_p[this->document_._M_string_length],
           root,
           collectComments);
};

// Line 99: range 00000000152DF8F0-00000000152DF966
__int64 __fastcall Json::Reader::parse(Json::Reader *this, std::istream *a2, Json::Value *a3, bool a4)
{
  unsigned int v6; // r12d
  char *v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]
  char v10[56]; // [rsp+10h] [rbp-38h] BYREF

  v10[0] = 0;
  v8 = v10;
  v9 = 0LL;
  std::getline<char,std::char_traits<char>,std::allocator<char>>(a2, &v8, 0xFFFFFFFFLL);
  v6 = Json::Reader::parse(this, v8, &v8[v9], a3, a4);
  if ( v8 != v10 )
    operator delete(v8);
  return v6;
};

// Line 113: range 00000000152DF490-00000000152DF890
__int64 __fastcall Json::Reader::parse(Json::Reader *this, const char *a2, const char *a3, Json::Value *a4, char a5)
{
  __m128i v5; // xmm1
  bool v8; // zf
  std::string::pointer M_p; // rax
  Json::Reader::Errors *p_errors; // rdi
  __int64 M_first; // rax
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer M_node; // r15
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_last; // r14
  void **v14; // r13
  Json::Value **v15; // rdx
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v16; // rbx
  void *v17; // rdi
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer M_cur; // rdi
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer v19; // rax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer v20; // rax
  unsigned int Value; // r13d
  Json::Value *M_string_length; // r15
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v24; // rdx
  __m128i v25; // xmm6
  __int64 v26; // rax
  __m128i si128; // xmm0
  std::string::pointer v28; // r8
  __int128 *v29; // rax
  __int128 *p_int; // rdi
  Json::Value *v31; // rax
  char *v32; // [rsp+8h] [rbp-A0h] BYREF
  __m128i v33; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-80h] BYREF
  __m256 token; // [rsp+30h] [rbp-78h] BYREF
  Json::Value *v36[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 dest[4]; // [rsp+60h] [rbp-48h] BYREF

  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a3);
  v8 = !this->features_.allowComments_;
  this->current_ = a2;
  if ( v8 )
    a5 = 0;
  v33 = v5;
  M_p = this->commentsBefore_._M_dataplus._M_p;
  p_errors = &this->errors_;
  *(__m128i *)&p_errors[1]._M_impl._M_start._M_last = v5;
  BYTE4(p_errors[2]._M_impl._M_start._M_first) = a5;
  p_errors[1]._M_impl._M_finish._M_first = 0LL;
  p_errors[1]._M_impl._M_finish._M_last = 0LL;
  p_errors[2]._M_impl._M_map = 0LL;
  *M_p = 0;
  M_first = (__int64)p_errors->_M_impl._M_start._M_first;
  *(__m128i *)v36 = _mm_loadu_si128((const __m128i *)&p_errors->_M_impl._M_start);
  M_node = p_errors->_M_impl._M_start._M_node;
  dest[0] = (__int128)_mm_loadu_si128((const __m128i *)&p_errors->_M_impl._M_start._M_last);
  M_last = p_errors->_M_impl._M_start._M_last;
  v32 = (char *)M_first;
  v14 = (void **)(M_node + 1);
  *(__m128i *)token.m256_f32 = _mm_loadu_si128((const __m128i *)&p_errors->_M_impl._M_finish);
  *(__m128i *)&token.m256_f32[4] = _mm_loadu_si128((const __m128i *)&p_errors->_M_impl._M_finish._M_last);
  std::deque<Json::Reader::ErrorInfo>::_M_destroy_data_aux(
    p_errors,
    this->errors_._M_impl._M_start,
    this->errors_._M_impl._M_finish);
  v16 = this->errors_._M_impl._M_finish._M_node + 1;
  if ( v16 > M_node + 1 )
  {
    do
    {
      v17 = *v14++;
      operator delete(v17);
    }
    while ( v16 > (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer)v14 );
  }
  M_cur = this->nodes_.c._M_impl._M_finish._M_cur;
  *(__m128 *)&this->errors_._M_impl._M_finish._M_cur = _mm_loadh_ps((const double *)&v32);
  *(__m128i *)&this->errors_._M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                           (__m128i)(unsigned __int64)M_last,
                                                           (__m128i)(unsigned __int64)M_node);
  if ( M_cur != this->nodes_.c._M_impl._M_start._M_cur )
  {
    v19 = this->nodes_.c._M_impl._M_finish._M_first;
    do
    {
      while ( M_cur != v19 )
      {
        this->nodes_.c._M_impl._M_finish._M_cur = --M_cur;
        if ( this->nodes_.c._M_impl._M_start._M_cur == M_cur )
          goto LABEL_9;
      }
      operator delete(M_cur);
      v24 = this->nodes_.c._M_impl._M_finish._M_node;
      v19 = *(v24 - 1);
      v15 = (Json::Value **)(v24 - 1);
      M_cur = v19 + 63;
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_cur = _mm_unpacklo_epi64(
                                                               (__m128i)(unsigned __int64)(v19 + 63),
                                                               (__m128i)(unsigned __int64)v19);
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                                (__m128i)(unsigned __int64)(v19 + 64),
                                                                (__m128i)(unsigned __int64)v15);
    }
    while ( v19 + 63 != this->nodes_.c._M_impl._M_start._M_cur );
  }
LABEL_9:
  v20 = this->nodes_.c._M_impl._M_finish._M_last;
  v36[0] = a4;
  if ( M_cur == v20 - 1 )
  {
    std::deque<Json::Value *>::_M_push_back_aux<Json::Value *>(&this->nodes_.c, v36, v15);
  }
  else
  {
    *M_cur = a4;
    this->nodes_.c._M_impl._M_finish._M_cur = M_cur + 1;
  }
  Value = Json::Reader::readValue(this);
  Json::Reader::skipCommentTokens(this, (Json::Reader::Token *)&token);
  if ( this->collectComments_ )
  {
    M_string_length = (Json::Value *)this->commentsBefore_._M_string_length;
    if ( M_string_length )
    {
      v28 = this->commentsBefore_._M_dataplus._M_p;
      v36[0] = (Json::Value *)dest;
      if ( !v28 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v34 = (unsigned __int64)M_string_length;
      if ( (unsigned __int64)M_string_length > 0xF )
      {
        v32 = v28;
        v31 = (Json::Value *)std::string::_M_create(v36, &v34, 0LL);
        v28 = v32;
        v36[0] = v31;
        p_int = (__int128 *)&v31->value_.int_;
        *(_QWORD *)&dest[0] = v34;
      }
      else
      {
        if ( M_string_length == (Json::Value *)1 )
        {
          LOBYTE(dest[0]) = *v28;
          v29 = dest;
          goto LABEL_26;
        }
        p_int = dest;
      }
      memcpy(p_int, v28, (size_t)M_string_length);
      M_string_length = (Json::Value *)v34;
      v29 = (__int128 *)&v36[0]->value_.int_;
LABEL_26:
      v36[1] = M_string_length;
      *(&M_string_length->value_.bool_ + (_QWORD)v29) = 0;
      Json::Value::setComment(a4, v36, 2LL);
      if ( (__int128 *)v36[0] != dest )
        operator delete(v36[0]);
    }
  }
  if ( this->features_.strictRoot_
    && !Json::Value::isArray((const Json::Value_0 *const)a4)
    && !Json::Value::isObject((const Json::Value_0 *const)a4) )
  {
    v25 = _mm_load_si128(&v33);
    LODWORD(token.m256_f32[0]) = 13;
    v36[0] = (Json::Value *)dest;
    v34 = 65LL;
    *(__m128i *)&token.m256_f32[2] = v25;
    v26 = std::string::_M_create(v36, &v34, 0LL);
    v36[0] = (Json::Value *)v26;
    *(_QWORD *)&dest[0] = v34;
    *(__m128i *)v26 = _mm_load_si128((const __m128i *)&xmmword_1B234480);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B234490);
    *(_BYTE *)(v26 + 64) = 46;
    *(__m128i *)(v26 + 16) = si128;
    *(__m128i *)(v26 + 32) = _mm_load_si128((const __m128i *)&xmmword_1B2344A0);
    *(__m128i *)(v26 + 48) = _mm_load_si128((const __m128i *)&xmmword_1B2344B0);
    v36[1] = (Json::Value *)v34;
    *(&v36[0]->value_.bool_ + v34) = 0;
    Json::Reader::addError(this, v36, &token, 0LL);
    if ( (__int128 *)v36[0] != dest )
      operator delete(v36[0]);
    return 0;
  }
  return Value;
};

// Line 151: range 00000000152DE8C0-00000000152DEE1F
__int64 __fastcall Json::Reader::readValue(Json::Reader *this)
{
  const std::allocator<char> *v1; // rdx
  Json::Value *v3; // rax
  std::string::pointer M_p; // r8
  std::string::size_type M_string_length; // r12
  Json::Value *v6; // r15
  Json::Value::Comments *p_comments; // rax
  std::string::pointer v8; // rax
  unsigned int allowDroppedNullPlaceholders; // r12d
  Json::Value *v10; // rax
  Json::Value *v11; // rax
  Json::Value::ValueHolder v12; // rax
  __m128i si128; // xmm0
  Json::Value *v15; // rax
  Json::Value *v16; // rax
  Json::Value *v17; // rax
  Json::Value *v18; // rax
  Json::Value *v19; // rax
  Json::Value *v20; // rax
  unsigned int v21; // eax
  Json::Value *v22; // rax
  Json::Value *v23; // rax
  Json::Value *v24; // rax
  Json::Value *v25; // rax
  Json::Value::ValueHolder v26; // rax
  Json::Value::Comments *v27; // rdi
  Json::Value *v28; // rax
  Json::Value *v29; // rax
  Json::Value *v30; // rax
  char *src; // [rsp+8h] [rbp-A0h]
  std::string::size_type v32; // [rsp+18h] [rbp-90h] BYREF
  Json::Reader::Token token; // [rsp+20h] [rbp-88h] BYREF
  Json::Value_0 other; // [rsp+40h] [rbp-68h] BYREF

  v1 = (const std::allocator<char> *)(((this->nodes_.c._M_impl._M_finish._M_node
                                      - this->nodes_.c._M_impl._M_start._M_node
                                      - 1) << 6)
                                    + this->nodes_.c._M_impl._M_finish._M_cur
                                    - this->nodes_.c._M_impl._M_finish._M_first);
  if ( (unsigned __int64)&v1[this->nodes_.c._M_impl._M_start._M_last - this->nodes_.c._M_impl._M_start._M_cur] > 0x3E8 )
  {
    std::string::basic_string((std::string *const)&other, "Exceeded stackLimit in readValue().", v1);
    Json::throwRuntimeError((const Json::String *)&other);
  }
  Json::Reader::skipCommentTokens(this, &token);
  if ( this->collectComments_ && this->commentsBefore_._M_string_length )
  {
    v3 = Json::Reader::currentValue(this);
    M_p = this->commentsBefore_._M_dataplus._M_p;
    other.value_.int_ = (Json::Value::LargestInt)&other.comments_;
    M_string_length = this->commentsBefore_._M_string_length;
    v6 = v3;
    if ( &M_p[M_string_length] && !M_p )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v32 = this->commentsBefore_._M_string_length;
    if ( M_string_length > 0xF )
    {
      src = M_p;
      v26.int_ = std::string::_M_create(&other, &v32, 0LL);
      M_p = src;
      other.value_ = v26;
      v27 = (Json::Value::Comments *)v26.int_;
      other.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)v32;
    }
    else
    {
      if ( M_string_length == 1 )
      {
        LOBYTE(other.comments_.ptr_._M_t._M_t._M_head_impl) = *M_p;
        p_comments = &other.comments_;
LABEL_10:
        *(_QWORD *)&other.bits_ = M_string_length;
        *((_BYTE *)&p_comments->ptr_._M_t._M_t._M_head_impl + M_string_length) = 0;
        Json::Value::setComment(v6, &other, 0LL);
        if ( (Json::Value::Comments *)other.value_.int_ != &other.comments_ )
          operator delete(other.value_.string_);
        v8 = this->commentsBefore_._M_dataplus._M_p;
        this->commentsBefore_._M_string_length = 0LL;
        *v8 = 0;
        goto LABEL_3;
      }
      if ( !M_string_length )
      {
        p_comments = &other.comments_;
        goto LABEL_10;
      }
      v27 = &other.comments_;
    }
    memcpy(v27, M_p, M_string_length);
    M_string_length = v32;
    p_comments = (Json::Value::Comments *)other.value_.int_;
    goto LABEL_10;
  }
LABEL_3:
  switch ( token.type_ )
  {
    case tokenObjectBegin:
      v21 = Json::Reader::readObject(this, &token);
      goto LABEL_25;
    case tokenObjectEnd:
    case tokenArrayEnd:
    case tokenArraySeparator:
      allowDroppedNullPlaceholders = this->features_.allowDroppedNullPlaceholders_;
      if ( !(_BYTE)allowDroppedNullPlaceholders )
        goto LABEL_14;
      --this->current_;
      Json::Value::Value(&other, 0LL);
      v28 = Json::Reader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v28, &other);
      v29 = Json::Reader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v29, this->current_ - this->begin_ - 1);
      v30 = Json::Reader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v30, this->current_ - this->begin_);
      Json::Value::~Value(&other);
      goto LABEL_18;
    case tokenArrayBegin:
      v21 = Json::Reader::readArray(this, &token);
LABEL_25:
      allowDroppedNullPlaceholders = v21;
      v22 = Json::Reader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v22, this->current_ - this->begin_);
      goto LABEL_18;
    case tokenString:
      allowDroppedNullPlaceholders = Json::Reader::decodeString(this, &token);
      goto LABEL_18;
    case tokenNumber:
      allowDroppedNullPlaceholders = Json::Reader::decodeNumber(this, &token);
      goto LABEL_18;
    case tokenTrue:
      Json::Value::Value((Json::Value *)&other, 1);
      v15 = Json::Reader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v15, &other);
      v16 = Json::Reader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v16, token.start_ - this->begin_);
      v17 = Json::Reader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v17, token.end_ - this->begin_);
      goto LABEL_22;
    case tokenFalse:
      Json::Value::Value((Json::Value *)&other, 0);
      v18 = Json::Reader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v18, &other);
      v19 = Json::Reader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v19, token.start_ - this->begin_);
      v20 = Json::Reader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v20, token.end_ - this->begin_);
      goto LABEL_22;
    case tokenNull:
      Json::Value::Value(&other, 0LL);
      v23 = Json::Reader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v23, &other);
      v24 = Json::Reader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v24, token.start_ - this->begin_);
      v25 = Json::Reader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v25, token.end_ - this->begin_);
LABEL_22:
      allowDroppedNullPlaceholders = 1;
      Json::Value::~Value(&other);
LABEL_18:
      if ( this->collectComments_ )
      {
        this->lastValueEnd_ = this->current_;
        this->lastValue_ = Json::Reader::currentValue(this);
      }
      break;
    default:
LABEL_14:
      v10 = Json::Reader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v10, token.start_ - this->begin_);
      v11 = Json::Reader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v11, token.end_ - this->begin_);
      other.value_.int_ = (Json::Value::LargestInt)&other.comments_;
      v32 = 46LL;
      v12.int_ = std::string::_M_create(&other, &v32, 0LL);
      other.value_ = v12;
      other.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)v32;
      *(__m128i *)v12.int_ = _mm_load_si128((const __m128i *)&xmmword_1B234410);
      si128 = _mm_load_si128((const __m128i *)&xmmword_1B234420);
      qmemcpy((void *)(v12.int_ + 32), "rray expected.", 14);
      *(__m128i *)(v12.int_ + 16) = si128;
      *(_QWORD *)&other.bits_ = v32;
      *(_BYTE *)(other.value_.int_ + v32) = 0;
      allowDroppedNullPlaceholders = Json::Reader::addError(this, &other, &token, 0LL);
      if ( (Json::Value::Comments *)other.value_.int_ != &other.comments_ )
        operator delete(other.value_.string_);
      break;
  }
  return allowDroppedNullPlaceholders;
};

// Line 208: range 000000000C73B414-000000000C73B41F
void __fastcall __noreturn Json::Reader::readValue()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0 *v1; // r14

  Json::Value::~Value(v1);
  _Unwind_Resume(v0);
};

// Line 228: range 00000000152D9C30-00000000152D9C77
void __fastcall Json::Reader::skipCommentTokens(Json::Reader *const this, Json::Reader::Token *token)
{
  if ( this->features_.allowComments_ )
  {
    do
      Json::Reader::readToken(this, token);
    while ( token->type_ == tokenComment );
  }
  else
  {
    Json::Reader::readToken(this, token);
  }
};

// Line 238: range 00000000152D9AA0-00000000152D9C22
bool __fastcall Json::Reader::readToken(Json::Reader *const this, Json::Reader::Token *token)
{
  Json::Reader::Char NextChar; // al
  bool result; // al

  Json::Reader::skipSpaces(this);
  token->start_ = this->current_;
  NextChar = Json::Reader::getNextChar(this);
  if ( NextChar <= 58 )
  {
    if ( NextChar >= 0 )
    {
      switch ( NextChar )
      {
        case 0:
          token->type_ = tokenEndOfStream;
          result = 1;
          goto LABEL_5;
        case 34:
          token->type_ = tokenString;
          result = Json::Reader::readString(this);
          goto LABEL_11;
        case 44:
          token->type_ = tokenArraySeparator;
          result = 1;
          goto LABEL_5;
        case 45:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
          token->type_ = tokenNumber;
          Json::Reader::readNumber(this);
          result = 1;
          goto LABEL_5;
        case 47:
          token->type_ = tokenComment;
          result = Json::Reader::readComment(this);
LABEL_11:
          if ( !result )
            break;
          goto LABEL_5;
        case 58:
          token->type_ = tokenMemberSeparator;
          result = 1;
          goto LABEL_5;
        default:
          break;
      }
    }
LABEL_4:
    token->type_ = tokenError;
    result = 0;
  }
  else
  {
    switch ( NextChar )
    {
      case '[':
        token->type_ = tokenArrayBegin;
        result = 1;
        break;
      case ']':
        token->type_ = tokenArrayEnd;
        result = 1;
        break;
      case 'f':
        token->type_ = tokenFalse;
        result = Json::Reader::match(this, "alse", 4);
        goto LABEL_11;
      case 'n':
        token->type_ = tokenNull;
        result = Json::Reader::match(this, off_1A1ADCBD, 3);
        goto LABEL_11;
      case 't':
        token->type_ = tokenTrue;
        result = Json::Reader::match(this, off_1A173E76, 3);
        goto LABEL_11;
      case '{':
        token->type_ = tokenObjectBegin;
        result = 1;
        break;
      case '}':
        token->type_ = tokenObjectEnd;
        result = 1;
        break;
      default:
        goto LABEL_4;
    }
  }
LABEL_5:
  token->end_ = this->current_;
  return result;
};

// Line 310: range 00000000152D9350-00000000152D938E
void __fastcall Json::Reader::skipSpaces(Json::Reader *const this)
{
  Json::Reader::Location current; // rax
  Json::Reader::Location end; // rcx
  __int64 i; // rsi
  unsigned __int64 v4; // rdx

  current = this->current_;
  end = this->end_;
  for ( i = 0x100002600LL; current != end; this->current_ = ++current )
  {
    v4 = *(unsigned __int8 *)current;
    if ( (unsigned __int8)v4 > 0x20u )
      break;
    if ( !_bittest64(&i, v4) )
      break;
  }
};

// Line 320: range 00000000152D9390-00000000152D93F6
bool __fastcall Json::Reader::match(Json::Reader *const this, const Json::Reader::Char *pattern, int patternLength)
{
  Json::Reader::Location current; // rcx
  __int64 v4; // r9
  bool v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  Json::Reader::Char v8; // dl

  current = this->current_;
  v4 = patternLength;
  v5 = 0;
  if ( this->end_ - current < patternLength )
    return v5;
  v6 = patternLength;
  v7 = patternLength - (unsigned __int64)(unsigned int)patternLength;
  do
  {
    if ( v6 == v7 )
    {
      v5 = 1;
      this->current_ = &current[v4];
      return v5;
    }
    v8 = current[--v6];
  }
  while ( v8 == pattern[v6] );
  return 0;
};

// Line 330: range 00000000152D99C0-00000000152D9A91
bool __fastcall Json::Reader::readComment(Json::Reader *const this)
{
  Json::Reader::Location current; // r12
  Json::Reader::Char NextChar; // al
  Json::Reader::Char v4; // bl
  bool result; // al
  bool collectComments; // r13
  const Json::Reader::Char *lastValueEnd; // rdi
  const Json::Reader::Char *v8; // r12
  bool v9; // al
  const char *v10; // rdx
  int v11; // ecx
  bool v12; // al

  current = this->current_;
  NextChar = Json::Reader::getNextChar(this);
  v4 = NextChar;
  if ( NextChar == 42 )
  {
    result = Json::Reader::readCStyleComment(this);
  }
  else
  {
    if ( NextChar != 47 )
      return 0;
    result = Json::Reader::readCppStyleComment(this);
  }
  if ( !result )
    return 0;
  collectComments = this->collectComments_;
  if ( collectComments )
  {
    lastValueEnd = this->lastValueEnd_;
    v8 = current - 1;
    if ( lastValueEnd )
    {
      v9 = Json::Reader::containsNewLine(lastValueEnd, v8);
      v10 = this->current_;
      v11 = 0;
      if ( !v9 )
      {
        v11 = 1;
        if ( v4 == 42 )
        {
          v12 = Json::Reader::containsNewLine(v8, this->current_);
          v10 = this->current_;
          v11 = !v12;
        }
      }
    }
    else
    {
      v10 = this->current_;
      v11 = 0;
    }
    Json::Reader::addComment(this, v8, v10, (Json::CommentPlacement)v11);
    return collectComments;
  }
  return result;
};

// Line 353: range 00000000152D9400-00000000152D954D
_QWORD *__fastcall Json::Reader::normalizeEOL[abi:cxx11](_QWORD *a1, char *a2, char *a3)
{
  char *v3; // rbp
  char *v5; // r13
  unsigned __int64 v6; // rdx
  _BYTE *v7; // rax
  __int64 v8; // rbx
  char v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdx
  _BYTE *v12; // rax
  _QWORD *v14; // rax
  _QWORD *v16; // [rsp+8h] [rbp-40h]

  v3 = a2;
  *a1 = a1 + 2;
  a1[1] = 0LL;
  *((_BYTE *)a1 + 16) = 0;
  v16 = a1 + 2;
  std::string::reserve(a1, a3 - a2);
  if ( a3 != a2 )
  {
    do
    {
      while ( 1 )
      {
        v8 = a1[1];
        v9 = *v3;
        v5 = v3 + 1;
        v14 = (_QWORD *)*a1;
        v10 = v8 + 1;
        if ( *v3 == 13 )
          break;
        if ( v16 == v14 )
          v11 = 15LL;
        else
          v11 = a1[2];
        if ( v11 < v10 )
        {
          std::string::_M_mutate(a1, a1[1], 0LL, 0LL, 1LL);
          v14 = (_QWORD *)*a1;
        }
        *((_BYTE *)v14 + v8) = v9;
        v12 = (_BYTE *)*a1;
        ++v3;
        a1[1] = v10;
        v12[v8 + 1] = 0;
        if ( a3 == v5 )
          return a1;
      }
      if ( a3 != v5 && v3[1] == 10 )
        v5 = v3 + 2;
      if ( v16 == v14 )
        v6 = 15LL;
      else
        v6 = a1[2];
      if ( v6 < v10 )
      {
        std::string::_M_mutate(a1, a1[1], 0LL, 0LL, 1LL);
        v14 = (_QWORD *)*a1;
      }
      *((_BYTE *)v14 + v8) = 10;
      v7 = (_BYTE *)*a1;
      v3 = v5;
      a1[1] = v10;
      v7[v8 + 1] = 0;
    }
    while ( a3 != v5 );
  }
  return a1;
};

// Line 373: range 00000000152D9560-00000000152D971F
void __fastcall Json::Reader::addComment(Json::Reader *this, char *a2, char *a3, Json::CommentPlacement a4)
{
  Json::Value *lastValue; // r13
  void *v6; // rbp
  void *v7; // r12
  __int64 *v8; // rax
  __int64 *v9; // rdi
  size_t v10; // [rsp+8h] [rbp-70h] BYREF
  void *src; // [rsp+10h] [rbp-68h] BYREF
  size_t n; // [rsp+18h] [rbp-60h]
  char v13; // [rsp+20h] [rbp-58h] BYREF
  void *v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( !this->collectComments_ )
    __assert_fail(
      "collectComments_",
      "src/lib_json/json_reader.cpp",
      0x176u,
      "void Json::Reader::addComment(Json::Reader::Location, Json::Reader::Location, Json::CommentPlacement)");
  Json::Reader::normalizeEOL[abi:cxx11](&src, a2, a3);
  if ( a4 != commentAfterOnSameLine )
  {
    std::string::_M_append(&this->commentsBefore_, (const char *)src, n);
    goto LABEL_12;
  }
  lastValue = this->lastValue_;
  if ( !lastValue )
    __assert_fail(
      "lastValue_ != nullptr",
      "src/lib_json/json_reader.cpp",
      0x179u,
      "void Json::Reader::addComment(Json::Reader::Location, Json::Reader::Location, Json::CommentPlacement)");
  v6 = src;
  v7 = (void *)n;
  v14[0] = v15;
  if ( (char *)src + n && !src )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v10 = n;
  if ( n > 0xF )
  {
    v14[0] = (void *)std::string::_M_create(v14, &v10, 0LL);
    v9 = (__int64 *)v14[0];
    v15[0] = v10;
  }
  else
  {
    if ( n == 1 )
    {
      LOBYTE(v15[0]) = *(_BYTE *)src;
      v8 = v15;
      goto LABEL_9;
    }
    if ( !n )
    {
      v8 = v15;
      goto LABEL_9;
    }
    v9 = v15;
  }
  memcpy(v9, v6, (size_t)v7);
  v7 = (void *)v10;
  v8 = (__int64 *)v14[0];
LABEL_9:
  v14[1] = v7;
  *((_BYTE *)v7 + (_QWORD)v8) = 0;
  Json::Value::setComment(lastValue, v14, 1LL);
  if ( v14[0] != v15 )
    operator delete(v14[0]);
LABEL_12:
  if ( src != &v13 )
    operator delete(src);
};

// Line 384: range 00000000152D9890-00000000152D98E3
bool __fastcall Json::Reader::readCStyleComment(Json::Reader *const this)
{
  bool v1; // zf
  Json::Reader::Location current; // rax

  if ( this->end_ > this->current_ + 1 )
  {
    do
    {
      v1 = Json::Reader::getNextChar(this) == 42;
      current = this->current_;
    }
    while ( (!v1 || *current != 47) && this->end_ > current + 1 );
  }
  return Json::Reader::getNextChar(this) == 47;
};

// Line 393: range 00000000152D98F0-00000000152D994D
bool __fastcall Json::Reader::readCppStyleComment(Json::Reader *const this)
{
  Json::Reader::Char NextChar; // al
  const Json::Reader::Char *current; // rax

  while ( this->current_ != this->end_ )
  {
    NextChar = Json::Reader::getNextChar(this);
    if ( NextChar == 10 )
      break;
    if ( NextChar == 13 )
    {
      current = this->current_;
      if ( current != this->end_ && *current == 10 )
        Json::Reader::getNextChar(this);
      return 1;
    }
  }
  return 1;
};

// Line 410: range 00000000152D9730-00000000152D9823
void __fastcall Json::Reader::readNumber(Json::Reader *const this)
{
  Json::Reader::Location current; // rax
  Json::Reader::Location end; // rsi
  Json::Reader::Char v3; // dl
  Json::Reader::Char v4; // cl
  const Json::Reader::Char *v5; // rdx
  char v6; // al
  const Json::Reader::Char *v7; // rcx

  current = this->current_;
  end = this->end_;
  while ( 1 )
  {
    this->current_ = current;
    if ( end <= current )
    {
      v3 = 0;
      goto LABEL_4;
    }
    v3 = *current;
    v7 = current + 1;
    if ( (unsigned __int8)(*current - 48) > 9u )
      break;
    ++current;
  }
  if ( v3 == 46 )
  {
    this->current_ = v7;
    if ( end <= v7 )
      return;
    v3 = *v7;
    current += 2;
    if ( (unsigned __int8)(*v7 - 48) <= 9u )
    {
      do
      {
        this->current_ = current;
        if ( end == current )
          return;
        v3 = *current++;
      }
      while ( (unsigned __int8)(v3 - 48) <= 9u );
    }
  }
  else
  {
    ++current;
  }
LABEL_4:
  if ( (v3 & 0xDF) == 69 )
  {
    this->current_ = current;
    if ( end > current )
    {
      v4 = *current;
      v5 = current + 1;
      if ( ((*current - 43) & 0xFD) == 0 )
      {
        this->current_ = v5;
        if ( end <= v5 )
          return;
        v4 = current[1];
        v5 = current + 2;
      }
      if ( (unsigned __int8)(v4 - 48) <= 9u )
      {
        do
        {
          this->current_ = v5;
          if ( end <= v5 )
            break;
          v6 = *v5++;
        }
        while ( (unsigned __int8)(v6 - 48) <= 9u );
      }
    }
  }
};

// Line 433: range 00000000152D9950-00000000152D99B9
bool __fastcall Json::Reader::readString(Json::Reader *const this)
{
  Json::Reader::Char NextChar; // al

  if ( this->end_ == this->current_ )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      NextChar = Json::Reader::getNextChar(this);
      if ( NextChar != 92 )
        break;
      Json::Reader::getNextChar(this);
      if ( this->current_ == this->end_ )
        return 0;
    }
    if ( NextChar == 34 )
      break;
    if ( this->current_ == this->end_ )
      return 0;
  }
  return 1;
};

// Line 443: range 00000000152DEE30-00000000152DF485
__int64 __fastcall Json::Reader::readObject(Json::Reader *this, Json::Reader::Token *a2)
{
  Json::Value *v3; // rax
  Json::Value *v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // r12d
  unsigned int v7; // eax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::size_type M_string_length; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  Json::Value *v11; // rax
  Json::Value_0 *v12; // rax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer M_last; // rcx
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer M_cur; // rdx
  char Value; // al
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer v16; // rdi
  char v17; // r14
  bool v18; // al
  int v19; // edx
  unsigned int v21; // eax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer M_node; // rdx
  unsigned __int64 v23; // rax
  Json::Value::ValueHolder v24; // rax
  __m128i si128; // xmm0
  unsigned int v26; // eax
  Json::Value::ValueHolder v27; // rax
  __m128i v28; // xmm0
  Json::Value::ValueHolder v29; // rax
  __m128i v30; // xmm0
  unsigned int v31; // eax
  __int64 v32; // [rsp+18h] [rbp-120h] BYREF
  Json::Reader::Token token; // [rsp+20h] [rbp-118h] BYREF
  Json::Reader::Token v34; // [rsp+40h] [rbp-F8h] BYREF
  Json::String key; // [rsp+60h] [rbp-D8h] BYREF
  Json::String src; // [rsp+80h] [rbp-B8h] BYREF
  Json::Value_0 other; // [rsp+A0h] [rbp-98h] BYREF
  Json::Value_0 v38; // [rsp+D0h] [rbp-68h] BYREF

  key._anon_0._M_local_buf[0] = 0;
  key._M_dataplus._M_p = key._anon_0._M_local_buf;
  key._M_string_length = 0LL;
  Json::Value::Value(&other, 7LL);
  v3 = Json::Reader::currentValue(this);
  Json::Value::swapPayload((Json::Value_0 *const)v3, &other);
  v4 = Json::Reader::currentValue(this);
  Json::Value::setOffsetStart((Json::Value_0 *const)v4, a2->start_ - this->begin_);
  while ( 1 )
  {
LABEL_2:
    LOBYTE(v5) = Json::Reader::readToken(this, &token);
    v6 = v5;
    if ( !(_BYTE)v5 )
      goto LABEL_50;
    while ( token.type_ == tokenComment )
    {
      if ( !(_BYTE)v6 )
        goto LABEL_50;
      LOBYTE(v7) = Json::Reader::readToken(this, &token);
      v6 = v7;
    }
    if ( !(_BYTE)v6 )
    {
LABEL_50:
      src._M_dataplus._M_p = (std::string::pointer)33;
      v38.value_.int_ = (Json::Value::LargestInt)&v38.comments_;
      v24.int_ = std::string::_M_create(&v38, &src, 0LL);
      v38.value_ = v24;
      v38.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)src._M_dataplus._M_p;
      *(__m128i *)v24.int_ = _mm_load_si128((const __m128i *)&xmmword_1B234460);
      si128 = _mm_load_si128((const __m128i *)&xmmword_1B234470);
      *(_BYTE *)(v24.int_ + 32) = 101;
      *(__m128i *)(v24.int_ + 16) = si128;
      *(_QWORD *)&v38.bits_ = src._M_dataplus._M_p;
      src._M_dataplus._M_p[v38.value_.int_] = 0;
      LOBYTE(v26) = Json::Reader::addErrorAndRecover(this, (const Json::String *)&v38, &token, tokenObjectEnd);
      goto LABEL_51;
    }
    if ( token.type_ == tokenObjectEnd && !key._M_string_length )
      goto LABEL_34;
    key._M_string_length = 0LL;
    *key._M_dataplus._M_p = 0;
    if ( token.type_ != tokenString )
    {
      if ( token.type_ != tokenNumber || !this->features_.allowNumericKeys_ )
        goto LABEL_50;
      Json::Value::Value(&v38, 0LL);
      if ( !(unsigned __int8)Json::Reader::decodeNumber(this, &token, (Json::Value *)&v38) )
      {
        LOBYTE(v31) = Json::Reader::recoverFromError(this, tokenObjectEnd);
        v6 = v31;
        Json::Value::~Value(&v38);
        goto LABEL_34;
      }
      Json::Value::asString[abi:cxx11](&src, &v38);
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p;
      M_string_length = src._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p == &src._anon_0 )
      {
        if ( src._M_string_length )
        {
          if ( src._M_string_length == 1 )
            *key._M_dataplus._M_p = src._anon_0._M_local_buf[0];
          else
            memcpy(key._M_dataplus._M_p, &src._anon_0, src._M_string_length);
          M_string_length = src._M_string_length;
          M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p;
        }
        key._M_string_length = M_string_length;
        M_p->_M_local_buf[M_string_length] = 0;
        M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p;
        goto LABEL_17;
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p == &key._anon_0 )
      {
        key._M_dataplus._M_p = src._M_dataplus._M_p;
        *(__m128i *)&key._M_string_length = _mm_unpacklo_epi64(
                                              (__m128i)src._M_string_length,
                                              (__m128i)src._anon_0._M_allocated_capacity);
      }
      else
      {
        M_allocated_capacity = key._anon_0._M_allocated_capacity;
        key._M_dataplus._M_p = src._M_dataplus._M_p;
        *(__m128i *)&key._M_string_length = _mm_unpacklo_epi64(
                                              (__m128i)src._M_string_length,
                                              (__m128i)src._anon_0._M_allocated_capacity);
        if ( M_p )
        {
          src._M_dataplus._M_p = (std::string::pointer)M_p;
          src._anon_0._M_allocated_capacity = M_allocated_capacity;
LABEL_17:
          src._M_string_length = 0LL;
          M_p->_M_local_buf[0] = 0;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
            operator delete(src._M_dataplus._M_p);
          Json::Value::~Value(&v38);
          goto LABEL_20;
        }
      }
      src._M_dataplus._M_p = src._anon_0._M_local_buf;
      M_p = &src._anon_0;
      goto LABEL_17;
    }
    if ( !(unsigned __int8)Json::Reader::decodeString(this, &token, &key) )
      goto LABEL_45;
LABEL_20:
    if ( !Json::Reader::readToken(this, &v34) || v34.type_ != tokenMemberSeparator )
    {
      src._M_dataplus._M_p = (std::string::pointer)36;
      v38.value_.int_ = (Json::Value::LargestInt)&v38.comments_;
      v27.int_ = std::string::_M_create(&v38, &src, 0LL);
      v38.value_ = v27;
      v38.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)src._M_dataplus._M_p;
      *(__m128i *)v27.int_ = _mm_load_si128((const __m128i *)&xmmword_1B234430);
      v28 = _mm_load_si128((const __m128i *)&xmmword_1B234440);
      *(_DWORD *)(v27.int_ + 32) = 1701667182;
      *(__m128i *)(v27.int_ + 16) = v28;
      *(_QWORD *)&v38.bits_ = src._M_dataplus._M_p;
      src._M_dataplus._M_p[v38.value_.int_] = 0;
      LOBYTE(v26) = Json::Reader::addErrorAndRecover(this, (const Json::String *)&v38, &v34, tokenObjectEnd);
      goto LABEL_51;
    }
    v11 = Json::Reader::currentValue(this);
    v12 = Json::Value::operator[]((Json::Value_0 *const)v11, &key);
    M_last = this->nodes_.c._M_impl._M_finish._M_last;
    M_cur = this->nodes_.c._M_impl._M_finish._M_cur;
    v38.value_.int_ = (Json::Value::LargestInt)v12;
    if ( M_cur == M_last - 1 )
    {
      std::deque<Json::Value *>::_M_push_back_aux<Json::Value *>(&this->nodes_.c, (Json::Value **)&v38, M_cur);
    }
    else
    {
      *M_cur = (Json::Value *)v12;
      this->nodes_.c._M_impl._M_finish._M_cur = M_cur + 1;
    }
    Value = Json::Reader::readValue(this);
    v16 = this->nodes_.c._M_impl._M_finish._M_cur;
    v17 = Value;
    if ( v16 == this->nodes_.c._M_impl._M_finish._M_first )
    {
      operator delete(v16);
      M_node = this->nodes_.c._M_impl._M_finish._M_node;
      v23 = (unsigned __int64)*(M_node - 1);
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_cur = _mm_unpacklo_epi64((__m128i)(v23 + 504), (__m128i)v23);
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                                (__m128i)(v23 + 512),
                                                                (__m128i)(unsigned __int64)(M_node - 1));
    }
    else
    {
      this->nodes_.c._M_impl._M_finish._M_cur = v16 - 1;
    }
    if ( !v17 )
    {
LABEL_45:
      LOBYTE(v21) = Json::Reader::recoverFromError(this, tokenObjectEnd);
      v6 = v21;
      goto LABEL_34;
    }
    v18 = Json::Reader::readToken(this, (Json::Reader::Token *)&src);
    if ( !v18 )
      goto LABEL_55;
    v19 = (int)src._M_dataplus._M_p;
    if ( ((__int64)src._M_dataplus._M_p & 0xFFFFFFF7) != 2 )
      break;
    while ( v19 == 12 )
    {
LABEL_30:
      if ( !v18 )
        goto LABEL_2;
      v18 = Json::Reader::readToken(this, (Json::Reader::Token *)&src);
      v19 = (int)src._M_dataplus._M_p;
    }
    if ( v19 == 2 )
      goto LABEL_34;
  }
  if ( LODWORD(src._M_dataplus._M_p) == 12 )
    goto LABEL_30;
LABEL_55:
  v32 = 40LL;
  v38.value_.int_ = (Json::Value::LargestInt)&v38.comments_;
  v29.int_ = std::string::_M_create(&v38, &v32, 0LL);
  v38.value_ = v29;
  v38.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)v32;
  *(__m128i *)v29.int_ = _mm_load_si128((const __m128i *)&xmmword_1B2343F0);
  v30 = _mm_load_si128((const __m128i *)&xmmword_1B234450);
  *(_QWORD *)(v29.int_ + 32) = 0x6E6F69746172616CLL;
  *(__m128i *)(v29.int_ + 16) = v30;
  *(_QWORD *)&v38.bits_ = v32;
  *(_BYTE *)(v38.value_.int_ + v32) = 0;
  LOBYTE(v26) = Json::Reader::addErrorAndRecover(
                  this,
                  (const Json::String *)&v38,
                  (Json::Reader::Token *)&src,
                  tokenObjectEnd);
LABEL_51:
  v6 = v26;
  if ( (Json::Value::Comments *)v38.value_.int_ != &v38.comments_ )
    operator delete(v38.value_.string_);
LABEL_34:
  Json::Value::~Value(&other);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p != &key._anon_0 )
    operator delete(key._M_dataplus._M_p);
  return v6;
};

// Line 499: range 00000000152DE620-00000000152DE8B5
__int64 __fastcall Json::Reader::readArray(Json::Reader *this, Json::Reader::Token *a2)
{
  Json::Value *v3; // rax
  Json::Value *v4; // rax
  const Json::Reader::Char *current; // rax
  int v6; // r12d
  Json::Value *v7; // rax
  char *v8; // rax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer M_last; // rcx
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer M_cur; // rdx
  unsigned int Value; // eax
  Json::Value **v12; // rdi
  unsigned int v13; // r13d
  bool v14; // al
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer M_node; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v19; // rax
  __m128i si128; // xmm0
  unsigned int v21; // eax
  std::string::size_type v22; // [rsp+8h] [rbp-B0h] BYREF
  Json::Reader::Token token; // [rsp+10h] [rbp-A8h] BYREF
  Json::String message; // [rsp+30h] [rbp-88h] BYREF
  Json::Value_0 other; // [rsp+50h] [rbp-68h] BYREF

  Json::Value::Value(&other, 6LL);
  v3 = Json::Reader::currentValue(this);
  Json::Value::swapPayload((Json::Value_0 *const)v3, &other);
  v4 = Json::Reader::currentValue(this);
  Json::Value::setOffsetStart((Json::Value_0 *const)v4, a2->start_ - this->begin_);
  Json::Reader::skipSpaces(this);
  current = this->current_;
  v6 = 0;
  if ( current != this->end_ && *current == 93 )
  {
    Json::Reader::readToken(this, (Json::Reader::Token *)&message);
    v13 = 1;
  }
  else
  {
    while ( 1 )
    {
      v7 = Json::Reader::currentValue(this);
      v8 = (char *)Json::Value::operator[](v7);
      M_last = this->nodes_.c._M_impl._M_finish._M_last;
      M_cur = this->nodes_.c._M_impl._M_finish._M_cur;
      message._M_dataplus._M_p = v8;
      if ( M_cur == M_last - 1 )
      {
        std::deque<Json::Value *>::_M_push_back_aux<Json::Value *>(&this->nodes_.c, (Json::Value **)&message, M_cur);
      }
      else
      {
        *M_cur = (Json::Value *)v8;
        this->nodes_.c._M_impl._M_finish._M_cur = M_cur + 1;
      }
      Value = Json::Reader::readValue(this);
      v12 = this->nodes_.c._M_impl._M_finish._M_cur;
      v13 = Value;
      if ( v12 != this->nodes_.c._M_impl._M_finish._M_first )
        break;
      operator delete(v12);
      M_node = this->nodes_.c._M_impl._M_finish._M_node;
      v16 = (unsigned __int64)*(M_node - 1);
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_cur = _mm_unpacklo_epi64((__m128i)(v16 + 504), (__m128i)v16);
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                                (__m128i)(v16 + 512),
                                                                (__m128i)(unsigned __int64)(M_node - 1));
      if ( !(_BYTE)v13 )
        goto LABEL_15;
LABEL_9:
      while ( 1 )
      {
        v14 = Json::Reader::readToken(this, &token);
        if ( token.type_ != tokenComment )
          break;
        if ( !v14 )
          goto LABEL_18;
      }
      if ( token.type_ != tokenArrayEnd && token.type_ != tokenArraySeparator || !v14 )
      {
LABEL_18:
        v22 = 39LL;
        message._M_dataplus._M_p = message._anon_0._M_local_buf;
        v19 = std::string::_M_create(&message, &v22, 0LL);
        message._M_dataplus._M_p = (std::string::pointer)v19;
        message._anon_0._M_allocated_capacity = v22;
        *(__m128i *)v19 = _mm_load_si128((const __m128i *)&xmmword_1B2343F0);
        si128 = _mm_load_si128((const __m128i *)&xmmword_1B234400);
        *(_DWORD *)(v19 + 32) = 1952543329;
        *(_WORD *)(v19 + 36) = 28521;
        *(_BYTE *)(v19 + 38) = 110;
        *(__m128i *)(v19 + 16) = si128;
        message._M_string_length = v22;
        message._M_dataplus._M_p[v22] = 0;
        LOBYTE(v21) = Json::Reader::addErrorAndRecover(this, &message, &token, tokenArrayEnd);
        v13 = v21;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
          operator delete(message._M_dataplus._M_p);
        goto LABEL_16;
      }
      if ( token.type_ == tokenArrayEnd )
        goto LABEL_16;
      ++v6;
    }
    this->nodes_.c._M_impl._M_finish._M_cur = v12 - 1;
    if ( (_BYTE)Value )
      goto LABEL_9;
LABEL_15:
    LOBYTE(v17) = Json::Reader::recoverFromError(this, tokenArrayEnd);
    v13 = v17;
  }
LABEL_16:
  Json::Value::~Value(&other);
  return v13;
};

// Line 537: range 00000000152DCF40-00000000152DCFDE
__int64 __fastcall Json::Reader::decodeNumber(Json::Reader *this, Json::Reader::Token *a2)
{
  unsigned int v2; // r12d
  Json::Value *v4; // rax
  Json::Value *v5; // rax
  Json::Value *v6; // rax
  Json::Value v7[2]; // [rsp+0h] [rbp-58h] BYREF

  Json::Value::Value(v7, 0LL);
  v2 = Json::Reader::decodeNumber(this, a2, v7);
  if ( (_BYTE)v2 )
  {
    v4 = Json::Reader::currentValue(this);
    Json::Value::swapPayload((Json::Value_0 *const)v4, (Json::Value_0 *)v7);
    v5 = Json::Reader::currentValue(this);
    Json::Value::setOffsetStart((Json::Value_0 *const)v5, a2->start_ - this->begin_);
    v6 = Json::Reader::currentValue(this);
    Json::Value::setOffsetLimit((Json::Value_0 *const)v6, a2->end_ - this->begin_);
  }
  Json::Value::~Value((Json::Value_0 *const)v7);
  return v2;
};

// Line 538: range 000000000C73B2E6-000000000C73B2F1
void __fastcall __noreturn Json::Reader::decodeNumber()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0 *v1; // r13

  Json::Value::~Value(v1);
  _Unwind_Resume(v0);
};

// Line 547: range 00000000152DCD50-00000000152DCF34
__int64 __fastcall Json::Reader::decodeNumber(Json::Reader *this, Json::Reader::Token *a2, Json::Value *a3)
{
  unsigned int v3; // r13d
  Json::Reader::Location start; // rcx
  Json::Reader::Char v7; // dl
  Json::Reader::Location end; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  Json::Value v16[2]; // [rsp+0h] [rbp-58h] BYREF

  start = a2->start_;
  v7 = *start;
  if ( *start == 45 )
  {
    end = a2->end_;
    if ( ++start >= end )
    {
      v12 = 0LL;
      goto LABEL_24;
    }
    v10 = 0x8000000000000000LL;
    v9 = 8LL;
    v11 = 0xCCCCCCCCCCCCCCCLL;
  }
  else
  {
    end = a2->end_;
    if ( end <= start )
    {
      v12 = 0LL;
      goto LABEL_24;
    }
    v9 = 5LL;
    v10 = -1LL;
    v11 = 0x1999999999999999LL;
  }
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *start++;
    if ( (unsigned __int8)(v13 - 48) > 9u )
      return (unsigned int)Json::Reader::decodeDouble(this, a2, a3);
    v14 = v13 - 48;
    if ( v11 <= v12 )
      break;
    v12 = v14 + 10 * v12;
    if ( end == start )
      goto LABEL_11;
  }
  if ( v11 < v12 || end != start || v14 > v9 )
    return (unsigned int)Json::Reader::decodeDouble(this, a2, a3);
  v12 = v14 + 10 * v12;
LABEL_11:
  LOBYTE(v3) = v7 == 45 && v10 == v12;
  if ( (_BYTE)v3 )
  {
    Json::Value::Value(v16, 0x8000000000000000LL);
    Json::Value::operator=((Json::Value_0 *const)a3, (Json::Value_0 *)v16);
    Json::Value::~Value((Json::Value_0 *const)v16);
    return v3;
  }
  if ( v7 != 45 )
  {
    if ( v12 <= 0x7FFFFFFF )
      goto LABEL_24;
    Json::Value::Value(v16, v12);
    Json::Value::operator=((Json::Value_0 *const)a3, (Json::Value_0 *)v16);
    goto LABEL_15;
  }
  v12 = -(__int64)v12;
LABEL_24:
  Json::Value::Value(v16, v12);
  Json::Value::operator=((Json::Value_0 *const)a3, (Json::Value_0 *)v16);
LABEL_15:
  Json::Value::~Value((Json::Value_0 *const)v16);
  return 1LL;
};

// Line 580: range 000000000C73B2A6-000000000C73B2B1
void __fastcall __noreturn Json::Reader::decodeNumber()
{
  Json::Value_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::~Value(v0);
  _Unwind_Resume(v1);
};

// Line 590: range 00000000152DCFF0-00000000152DD08E
__int64 __fastcall Json::Reader::decodeDouble(Json::Reader *this, Json::Reader::Token *a2)
{
  unsigned int v2; // r12d
  Json::Value *v4; // rax
  Json::Value *v5; // rax
  Json::Value *v6; // rax
  Json::Value v7[2]; // [rsp+0h] [rbp-58h] BYREF

  Json::Value::Value(v7, 0LL);
  v2 = Json::Reader::decodeDouble(this, a2, v7);
  if ( (_BYTE)v2 )
  {
    v4 = Json::Reader::currentValue(this);
    Json::Value::swapPayload((Json::Value_0 *const)v4, (Json::Value_0 *)v7);
    v5 = Json::Reader::currentValue(this);
    Json::Value::setOffsetStart((Json::Value_0 *const)v5, a2->start_ - this->begin_);
    v6 = Json::Reader::currentValue(this);
    Json::Value::setOffsetLimit((Json::Value_0 *const)v6, a2->end_ - this->begin_);
  }
  Json::Value::~Value((Json::Value_0 *const)v7);
  return v2;
};

// Line 591: range 000000000C73B2F6-000000000C73B301
void __fastcall __noreturn Json::Reader::decodeDouble()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0 *v1; // r13

  Json::Value::~Value(v1);
  _Unwind_Resume(v0);
};

// Line 600: range 00000000152DC5D0-00000000152DCD40
__int64 __fastcall Json::Reader::decodeDouble(Json::Reader *this, Json::Reader::Token *a2, Json::Value_0 *a3)
{
  Json::Reader::Location start; // rbp
  Json::Reader::Location end; // r12
  size_t v6; // r12
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  void *v10; // r15
  void *v11; // r12
  __int64 *v12; // rax
  _QWORD *v13; // rax
  Json::Reader::Location v14; // r14
  Json::Reader::Location v15; // r12
  void *v16; // r12
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r13d
  __int64 v22; // rax
  __int64 *v24; // rdi
  __int64 *v25; // rdi
  __int64 *v26; // rdi
  __int64 v27; // [rsp+20h] [rbp-278h]
  double v29; // [rsp+48h] [rbp-250h] BYREF
  void *src; // [rsp+50h] [rbp-248h] BYREF
  size_t n; // [rsp+58h] [rbp-240h]
  __int64 v32[2]; // [rsp+60h] [rbp-238h] BYREF
  void *v33[2]; // [rsp+70h] [rbp-228h] BYREF
  __int64 v34[2]; // [rsp+80h] [rbp-218h] BYREF
  void *v35; // [rsp+90h] [rbp-208h] BYREF
  __int64 v36; // [rsp+98h] [rbp-200h]
  __m128i v37; // [rsp+A0h] [rbp-1F8h] BYREF
  Json::Value_0 other; // [rsp+B0h] [rbp-1E8h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-1B8h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-1B0h]
  __int64 v41[7]; // [rsp+F0h] [rbp-1A8h] BYREF
  std::locale v42; // [rsp+128h] [rbp-170h] BYREF
  int v43; // [rsp+130h] [rbp-168h]
  void *v44[2]; // [rsp+138h] [rbp-160h] BYREF
  __int64 v45[2]; // [rsp+148h] [rbp-150h] BYREF
  __int64 v46[28]; // [rsp+158h] [rbp-140h] BYREF
  __int16 v47; // [rsp+238h] [rbp-60h]
  __int128 v48; // [rsp+240h] [rbp-58h]
  __int128 v49; // [rsp+250h] [rbp-48h]

  start = a2->start_;
  end = a2->end_;
  v29 = 0.0;
  src = v32;
  if ( !start && end )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v6 = end - start;
  v39 = v6;
  if ( v6 > 0xF )
  {
    src = (void *)std::string::_M_create(&src, &v39, 0LL);
    v24 = (__int64 *)src;
    v32[0] = v39;
    goto LABEL_39;
  }
  if ( v6 != 1 )
  {
    if ( !v6 )
    {
      v7 = v32;
      goto LABEL_6;
    }
    v24 = v32;
LABEL_39:
    memcpy(v24, start, v6);
    v6 = v39;
    v7 = (__int64 *)src;
    goto LABEL_6;
  }
  LOBYTE(v32[0]) = *start;
  v7 = v32;
LABEL_6:
  n = v6;
  *((_BYTE *)v7 + v6) = 0;
  std::ios_base::ios_base((std::ios_base *)v46);
  v48 = 0LL;
  v49 = 0LL;
  v46[27] = 0LL;
  v46[0] = (__int64)&`vtable for'std::ios + 16;
  v47 = 0;
  v8 = `VTT for'std::istringstream[1];
  v27 = `VTT for'std::istringstream[2];
  v9 = *(_QWORD *)(v8 - 24);
  v39 = v8;
  *(__int64 *)((char *)&v39 + v9) = v27;
  v40 = 0LL;
  std::ios::init((char *)&v39 + *(_QWORD *)(v8 - 24), 0LL);
  memset(&v41[1], 0, 48);
  v39 = (__int64)&`vtable for'std::istringstream + 24;
  v46[0] = (__int64)&`vtable for'std::istringstream + 64;
  v41[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v42);
  v10 = src;
  v11 = (void *)n;
  v43 = 0;
  v41[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v44[0] = v45;
  if ( (char *)src + n && !src )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  other.value_.int_ = n;
  if ( n > 0xF )
  {
    v44[0] = (void *)std::string::_M_create(v44, &other, 0LL);
    v25 = (__int64 *)v44[0];
    v45[0] = other.value_.int_;
  }
  else
  {
    if ( n == 1 )
    {
      LOBYTE(v45[0]) = *(_BYTE *)src;
      v12 = v45;
      goto LABEL_11;
    }
    if ( !n )
    {
      v12 = v45;
      goto LABEL_11;
    }
    v25 = v45;
  }
  memcpy(v25, v10, (size_t)v11);
  v11 = (void *)other.value_.int_;
  v12 = (__int64 *)v44[0];
LABEL_11:
  v44[1] = v11;
  *((_BYTE *)v11 + (_QWORD)v12) = 0;
  v43 = 8;
  std::stringbuf::_M_sync(v41, v44[0], 0LL, 0LL);
  std::ios::init(v46, v41);
  v13 = (_QWORD *)std::istream::_M_extract<double>(&v39, &v29);
  if ( (*((_BYTE *)v13 + *(_QWORD *)(*v13 - 24LL) + 32) & 5) == 0 )
  {
    Json::Value::Value((Json::Value *)&other, v29);
    Json::Value::operator=(a3, &other);
    v21 = 1;
    Json::Value::~Value(&other);
    goto LABEL_31;
  }
  v14 = a2->start_;
  v15 = a2->end_;
  v33[0] = v34;
  if ( !v14 && v15 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v16 = (void *)(v15 - v14);
  other.value_.int_ = (Json::Value::LargestInt)v16;
  if ( (unsigned __int64)v16 > 0xF )
  {
    v33[0] = (void *)std::string::_M_create(v33, &other, 0LL);
    v26 = (__int64 *)v33[0];
    v34[0] = other.value_.int_;
    goto LABEL_45;
  }
  if ( v16 != (void *)1 )
  {
    if ( !v16 )
    {
      v17 = v34;
      goto LABEL_17;
    }
    v26 = v34;
LABEL_45:
    memcpy(v26, v14, (size_t)v16);
    v16 = (void *)other.value_.int_;
    v17 = (__int64 *)v33[0];
    goto LABEL_17;
  }
  LOBYTE(v34[0]) = *v14;
  v17 = v34;
LABEL_17:
  v33[1] = v16;
  *((_BYTE *)v16 + (_QWORD)v17) = 0;
  v18 = std::string::_M_replace(v33, 0LL, 0LL, "'", 1LL);
  v35 = &v37;
  if ( *(_QWORD *)v18 == v18 + 16 )
  {
    v37 = _mm_loadu_si128((const __m128i *)(v18 + 16));
  }
  else
  {
    v35 = *(void **)v18;
    v37.m128i_i64[0] = *(_QWORD *)(v18 + 16);
  }
  v19 = *(_QWORD *)(v18 + 8);
  *(_BYTE *)(v18 + 16) = 0;
  v36 = v19;
  *(_QWORD *)(v18 + 8) = 0LL;
  *(_QWORD *)v18 = v18 + 16;
  if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - v36) <= 0x11 )
    std::__throw_length_error("basic_string::append");
  v20 = std::string::_M_append(&v35, "' is not a number.", 18LL);
  other.value_.int_ = (Json::Value::LargestInt)&other.comments_;
  if ( *(_QWORD *)v20 == v20 + 16 )
  {
    *(__m128i *)&other.comments_.ptr_._M_t._M_t._M_head_impl = _mm_loadu_si128((const __m128i *)(v20 + 16));
  }
  else
  {
    other.value_.int_ = *(_QWORD *)v20;
    other.comments_.ptr_._M_t._M_t._M_head_impl = *(std::array<std::string,3> **)(v20 + 16);
  }
  *(_QWORD *)&other.bits_ = *(_QWORD *)(v20 + 8);
  *(_QWORD *)v20 = v20 + 16;
  *(_QWORD *)(v20 + 8) = 0LL;
  *(_BYTE *)(v20 + 16) = 0;
  v21 = Json::Reader::addError(this, &other, a2, 0LL);
  if ( (Json::Value::Comments *)other.value_.int_ != &other.comments_ )
    operator delete(other.value_.string_);
  if ( v35 != &v37 )
    operator delete(v35);
  if ( v33[0] != v34 )
    operator delete(v33[0]);
LABEL_31:
  v39 = (__int64)&`vtable for'std::istringstream + 24;
  v46[0] = (__int64)&`vtable for'std::istringstream + 64;
  v41[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v44[0] != v45 )
    operator delete(v44[0]);
  v41[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v42);
  v22 = *(_QWORD *)(v8 - 24);
  v39 = v8;
  *(__int64 *)((char *)&v39 + v22) = v27;
  v40 = 0LL;
  v46[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v46);
  if ( src != v32 )
    operator delete(src);
  return v21;
};

// Line 611: range 00000000152DDD90-00000000152DDE61
__int64 __fastcall Json::Reader::decodeString(Json::Reader *this, Json::Reader::Token *a2)
{
  unsigned int v2; // r12d
  Json::Value *v4; // rax
  Json::Value *v5; // rax
  Json::Value *v6; // rax
  void *v7[2]; // [rsp+0h] [rbp-88h] BYREF
  char v8[16]; // [rsp+10h] [rbp-78h] BYREF
  Json::Value_0 other; // [rsp+20h] [rbp-68h] BYREF

  v8[0] = 0;
  v7[0] = v8;
  v7[1] = 0LL;
  v2 = Json::Reader::decodeString(this, a2, v7);
  if ( (_BYTE)v2 )
  {
    Json::Value::Value(&other, v7);
    v4 = Json::Reader::currentValue(this);
    Json::Value::swapPayload((Json::Value_0 *const)v4, &other);
    v5 = Json::Reader::currentValue(this);
    Json::Value::setOffsetStart((Json::Value_0 *const)v5, a2->start_ - this->begin_);
    v6 = Json::Reader::currentValue(this);
    Json::Value::setOffsetLimit((Json::Value_0 *const)v6, a2->end_ - this->begin_);
    Json::Value::~Value(&other);
  }
  if ( v7[0] != v8 )
    operator delete(v7[0]);
  return v2;
};

// Line 622: range 00000000152DD5E0-00000000152DDD7F
__int64 __fastcall Json::Reader::decodeString(Json::Reader *a1, Json::Reader::Token *a2, _QWORD *a3)
{
  char *v4; // rax
  const char *v5; // r12
  char v6; // r15
  char *v7; // r14
  char v8; // al
  __int64 v9; // r15
  _QWORD *v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 v15; // r14
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rdx
  unsigned int v20; // r14d
  __int64 v21; // r15
  _QWORD *v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r15
  _QWORD *v27; // rax
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // r15
  _QWORD *v32; // rax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // r15
  _QWORD *v37; // rax
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // r15
  _QWORD *v42; // rax
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // r15
  _QWORD *v47; // rax
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rax
  __m128i *v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // r15
  _QWORD *v54; // rax
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rdx
  _QWORD *v57; // rax
  __m128i *v58; // rax
  __m128i si128; // xmm0
  unsigned __int8 v60; // [rsp+0h] [rbp-78h]
  char *v61; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v62[2]; // [rsp+18h] [rbp-60h] BYREF
  void *v63; // [rsp+20h] [rbp-58h] BYREF
  __int64 v64; // [rsp+28h] [rbp-50h]
  __int64 v65[9]; // [rsp+30h] [rbp-48h] BYREF

  std::string::reserve(a3, a2->end_ - a2->start_ - 2);
  v4 = (char *)(a2->start_ + 1);
  v5 = a2->end_ - 1;
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v61 = v4 + 1;
        v6 = *v4;
        if ( *v4 == 34 )
          return 1LL;
        if ( v6 != 92 )
        {
          v15 = a3[1];
          v16 = (_QWORD *)*a3;
          v17 = v15 + 1;
          if ( (_QWORD *)*a3 == a3 + 2 )
            v18 = 15LL;
          else
            v18 = a3[2];
          if ( v17 > v18 )
          {
            std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
            v16 = (_QWORD *)*a3;
            v17 = v15 + 1;
          }
          *((_BYTE *)v16 + v15) = v6;
          v19 = (_QWORD *)*a3;
          a3[1] = v17;
          *((_BYTE *)v19 + v15 + 1) = 0;
          goto LABEL_21;
        }
        if ( v4 + 1 == v5 )
        {
          *(_QWORD *)v62 = 31LL;
          v63 = v65;
          v58 = (__m128i *)std::string::_M_create(&v63, v62, 0LL);
          si128 = _mm_load_si128((const __m128i *)&xmmword_1B2343D0);
          v63 = v58;
          v65[0] = *(_QWORD *)v62;
          qmemcpy(&v58[1], "uence in string", 15);
          *v58 = si128;
          v64 = *(_QWORD *)v62;
          *((_BYTE *)v63 + *(_QWORD *)v62) = 0;
          result = Json::Reader::addError(a1, &v63, a2, v5);
LABEL_63:
          if ( v63 != v65 )
          {
            v60 = result;
            operator delete(v63);
            return v60;
          }
          return result;
        }
        v7 = v4 + 2;
        v61 = v4 + 2;
        v8 = v4[1];
        if ( v8 > 117 )
          goto LABEL_62;
        if ( v8 <= 91 )
          break;
        switch ( v8 )
        {
          case '\\':
            v46 = a3[1];
            v47 = (_QWORD *)*a3;
            v48 = v46 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v49 = 15LL;
            else
              v49 = a3[2];
            if ( v48 > v49 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v47 = (_QWORD *)*a3;
            }
            *((_BYTE *)v47 + v46) = 92;
            v50 = (_QWORD *)*a3;
            a3[1] = v48;
            *((_BYTE *)v50 + v46 + 1) = 0;
            break;
          case 'b':
            v41 = a3[1];
            v42 = (_QWORD *)*a3;
            v43 = v41 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v44 = 15LL;
            else
              v44 = a3[2];
            if ( v43 > v44 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v42 = (_QWORD *)*a3;
            }
            *((_BYTE *)v42 + v41) = 8;
            v45 = (_QWORD *)*a3;
            a3[1] = v43;
            *((_BYTE *)v45 + v41 + 1) = 0;
            break;
          case 'f':
            v31 = a3[1];
            v32 = (_QWORD *)*a3;
            v33 = v31 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v34 = 15LL;
            else
              v34 = a3[2];
            if ( v33 > v34 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v32 = (_QWORD *)*a3;
            }
            *((_BYTE *)v32 + v31) = 12;
            v35 = (_QWORD *)*a3;
            a3[1] = v33;
            *((_BYTE *)v35 + v31 + 1) = 0;
            break;
          case 'n':
            v26 = a3[1];
            v27 = (_QWORD *)*a3;
            v28 = v26 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v29 = 15LL;
            else
              v29 = a3[2];
            if ( v28 > v29 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v27 = (_QWORD *)*a3;
            }
            *((_BYTE *)v27 + v26) = 10;
            v30 = (_QWORD *)*a3;
            a3[1] = v28;
            *((_BYTE *)v30 + v26 + 1) = 0;
            break;
          case 'r':
            v36 = a3[1];
            v37 = (_QWORD *)*a3;
            v38 = v36 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v39 = 15LL;
            else
              v39 = a3[2];
            if ( v38 > v39 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v37 = (_QWORD *)*a3;
            }
            *((_BYTE *)v37 + v36) = 13;
            v40 = (_QWORD *)*a3;
            a3[1] = v38;
            *((_BYTE *)v40 + v36 + 1) = 0;
            break;
          case 't':
            v21 = a3[1];
            v22 = (_QWORD *)*a3;
            v23 = v21 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v24 = 15LL;
            else
              v24 = a3[2];
            if ( v23 > v24 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v22 = (_QWORD *)*a3;
            }
            *((_BYTE *)v22 + v21) = 9;
            v25 = (_QWORD *)*a3;
            a3[1] = v23;
            *((_BYTE *)v25 + v21 + 1) = 0;
            break;
          case 'u':
            result = Json::Reader::decodeUnicodeCodePoint(a1, a2, (const char **)&v61, v5, v62);
            if ( !(_BYTE)result )
              return result;
            v20 = v62[0];
            LOBYTE(v65[0]) = 0;
            v63 = v65;
            v64 = 0LL;
            if ( v62[0] <= 0x7F )
            {
              std::string::resize(&v63, 1LL, 0LL);
              *(_BYTE *)v63 = v20;
              std::string::_M_append(a3, (const char *)v63, v64);
            }
            else if ( v62[0] <= 0x7FF )
            {
              std::string::resize(&v63, 2LL, 0LL);
              *((_BYTE *)v63 + 1) = v20 & 0x3F | 0x80;
              *(_BYTE *)v63 = (v20 >> 6) | 0xC0;
              std::string::_M_append(a3, (const char *)v63, v64);
            }
            else if ( v62[0] <= 0xFFFF )
            {
              std::string::resize(&v63, 3LL, 0LL);
              *((_BYTE *)v63 + 2) = v20 & 0x3F | 0x80;
              *((_BYTE *)v63 + 1) = (v20 >> 6) & 0x3F | 0x80;
              *(_BYTE *)v63 = (v20 >> 12) | 0xE0;
              std::string::_M_append(a3, (const char *)v63, v64);
            }
            else if ( v62[0] <= 0x10FFFF )
            {
              std::string::resize(&v63, 4LL, 0LL);
              *((_BYTE *)v63 + 3) = v20 & 0x3F | 0x80;
              *((_BYTE *)v63 + 2) = (v20 >> 6) & 0x3F | 0x80;
              *((_BYTE *)v63 + 1) = (v20 >> 12) & 0x3F | 0x80;
              *(_BYTE *)v63 = (v20 >> 18) | 0xF0;
              std::string::_M_append(a3, (const char *)v63, v64);
            }
            else
            {
              std::string::_M_append(a3, (const char *)v65, 0LL);
            }
            if ( v63 != v65 )
              operator delete(v63);
            break;
          default:
            goto LABEL_62;
        }
LABEL_21:
        v4 = v61;
        if ( v61 == v5 )
          return 1LL;
      }
      if ( v8 == 34 )
      {
        v53 = a3[1];
        v54 = (_QWORD *)*a3;
        v55 = v53 + 1;
        if ( (_QWORD *)*a3 == a3 + 2 )
          v56 = 15LL;
        else
          v56 = a3[2];
        if ( v55 > v56 )
        {
          std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
          v54 = (_QWORD *)*a3;
        }
        *((_BYTE *)v54 + v53) = 34;
        v57 = (_QWORD *)*a3;
        a3[1] = v55;
        *((_BYTE *)v57 + v53 + 1) = 0;
        goto LABEL_21;
      }
      if ( v8 != 47 )
      {
LABEL_62:
        *(_QWORD *)v62 = 29LL;
        v63 = v65;
        v51 = (__m128i *)std::string::_M_create(&v63, v62, 0LL);
        v52 = _mm_load_si128((const __m128i *)&xmmword_1B2343E0);
        v63 = v51;
        v65[0] = *(_QWORD *)v62;
        qmemcpy(&v51[1], "nce in string", 13);
        *v51 = v52;
        v64 = *(_QWORD *)v62;
        *((_BYTE *)v63 + *(_QWORD *)v62) = 0;
        result = Json::Reader::addError(a1, &v63, a2, v7);
        goto LABEL_63;
      }
      v9 = a3[1];
      v10 = (_QWORD *)*a3;
      v11 = v9 + 1;
      if ( (_QWORD *)*a3 == a3 + 2 )
        v12 = 15LL;
      else
        v12 = a3[2];
      if ( v11 > v12 )
      {
        std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
        v10 = (_QWORD *)*a3;
      }
      *((_BYTE *)v10 + v9) = 47;
      v13 = (_QWORD *)*a3;
      a3[1] = v11;
      *((_BYTE *)v13 + v9 + 1) = 0;
      v4 = v61;
    }
    while ( v61 != v5 );
  }
  return 1LL;
};

// Line 676: range 00000000152DD390-00000000152DD5CD
__int64 __fastcall Json::Reader::decodeUnicodeCodePoint(
        Json::Reader *this,
        Json::Reader::Token *a2,
        const char **a3,
        const char *a4,
        unsigned int *a5)
{
  __int64 result; // rax
  const char *v9; // rcx
  const char *v10; // r15
  __m128i *v11; // rax
  __m128i v12; // xmm0
  __m128i *v13; // rax
  __m128i si128; // xmm0
  __m128i v15; // xmm0
  unsigned __int8 v16; // [rsp+8h] [rbp-70h]
  const char *v17; // [rsp+8h] [rbp-70h]
  __int64 v18; // [rsp+18h] [rbp-60h] BYREF
  void *v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h]
  __int64 v21[9]; // [rsp+30h] [rbp-48h] BYREF

  result = Json::Reader::decodeUnicodeEscapeSequence(this, a2, a3, a4, a5);
  if ( (_BYTE)result && *a5 - 55296 <= 0x3FF )
  {
    v9 = *a3;
    if ( a4 - *a3 <= 5 )
    {
      v17 = *a3;
      v18 = 67LL;
      v19 = v21;
      v13 = (__m128i *)std::string::_M_create(&v19, &v18, 0LL);
      v19 = v13;
      v21[0] = v18;
      *v13 = _mm_load_si128((const __m128i *)&xmmword_1B234350);
      si128 = _mm_load_si128((const __m128i *)&xmmword_1B234360);
      v13[4].m128i_i16[0] = 29289;
      v13[1] = si128;
      v15 = _mm_load_si128((const __m128i *)&xmmword_1B234370);
      v13[4].m128i_i8[2] = 46;
      v13[2] = v15;
      v13[3] = _mm_load_si128((const __m128i *)&xmmword_1B234380);
      v20 = v18;
      *((_BYTE *)v19 + v18) = 0;
      result = Json::Reader::addError(this, &v19, a2, v17);
LABEL_7:
      if ( v19 != v21 )
      {
        v16 = result;
        operator delete(v19);
        return v16;
      }
      return result;
    }
    v10 = v9 + 1;
    *a3 = v9 + 1;
    if ( *v9 != 92 || (v10 = v9 + 2, *a3 = v9 + 2, v9[1] != 117) )
    {
      v18 = 79LL;
      v19 = v21;
      v11 = (__m128i *)std::string::_M_create(&v19, &v18, 0LL);
      v19 = v11;
      v21[0] = v18;
      *v11 = _mm_load_si128((const __m128i *)&xmmword_1B234390);
      v12 = _mm_load_si128((const __m128i *)&xmmword_1B2343A0);
      qmemcpy(&v11[4], " surrogate pair", 15);
      v11[1] = v12;
      v11[2] = _mm_load_si128((const __m128i *)&xmmword_1B2343B0);
      v11[3] = _mm_load_si128((const __m128i *)&xmmword_1B2343C0);
      v20 = v18;
      *((_BYTE *)v19 + v18) = 0;
      result = Json::Reader::addError(this, &v19, a2, v10);
      goto LABEL_7;
    }
    result = Json::Reader::decodeUnicodeEscapeSequence(this, a2, a3, a4, (unsigned int *)&v19);
    if ( (_BYTE)result )
      *a5 = ((unsigned __int16)v19 & 0x3FF | (*a5 << 10) & 0xFFC00) + 0x10000;
  }
  return result;
};

// Line 702: range 00000000152DD0A0-00000000152DD382
__int64 __fastcall Json::Reader::decodeUnicodeEscapeSequence(
        Json::Reader *this,
        Json::Reader::Token *a2,
        const char **a3,
        const char *a4,
        unsigned int *a5)
{
  const char *v5; // r12
  char *v6; // r14
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  __m128i *v15; // rax
  __m128i si128; // xmm0
  __int64 result; // rax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  __m128i *v21; // rax
  __m128i v22; // xmm0
  unsigned __int8 v23; // [rsp+Fh] [rbp-59h]
  __int64 v24; // [rsp+18h] [rbp-50h] BYREF
  void *v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h]
  __int64 v27[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = *a3;
  if ( a4 - *a3 <= 3 )
  {
    v24 = 60LL;
    v25 = v27;
    v15 = (__m128i *)std::string::_M_create(&v25, &v24, 0LL);
    v25 = v15;
    v27[0] = v24;
    *v15 = _mm_load_si128((const __m128i *)&xmmword_1B234300);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B234310);
    qmemcpy(&v15[3], "ts expected.", 12);
    v15[1] = si128;
    v15[2] = _mm_load_si128((const __m128i *)&xmmword_1B234320);
    v26 = v24;
    *((_BYTE *)v25 + v24) = 0;
    result = Json::Reader::addError(this, &v25, a2, v5);
    goto LABEL_17;
  }
  v6 = (char *)(v5 + 1);
  *a3 = v5 + 1;
  v7 = *v5;
  if ( (unsigned __int8)(*v5 - 48) > 9u )
  {
    if ( (unsigned __int8)(v7 - 97) <= 5u )
    {
      v8 = v7 - 87;
    }
    else
    {
      if ( (unsigned __int8)(v7 - 65) > 5u )
        goto LABEL_31;
      v8 = v7 - 55;
    }
  }
  else
  {
    v8 = v7 - 48;
  }
  v6 = (char *)(v5 + 2);
  v9 = 16 * v8;
  *a3 = v5 + 2;
  v10 = v5[1];
  if ( (unsigned __int8)(v5[1] - 48) <= 9u )
  {
    v11 = v9 + v10 - 48;
  }
  else if ( (unsigned __int8)(v10 - 97) <= 5u )
  {
    v11 = v9 + v10 - 87;
  }
  else
  {
    if ( (unsigned __int8)(v10 - 65) > 5u )
      goto LABEL_31;
    v11 = v9 + v10 - 55;
  }
  v6 = (char *)(v5 + 3);
  v12 = 16 * v11;
  *a3 = v5 + 3;
  v13 = v5[2];
  if ( (unsigned __int8)(v5[2] - 48) <= 9u )
  {
    v14 = v12 + v13 - 48;
    goto LABEL_21;
  }
  if ( (unsigned __int8)(v13 - 97) <= 5u )
  {
    v14 = v12 + v13 - 87;
    goto LABEL_21;
  }
  if ( (unsigned __int8)(v13 - 65) <= 5u )
  {
    v14 = v12 + v13 - 55;
LABEL_21:
    v6 = (char *)(v5 + 4);
    v18 = 16 * v14;
    *a3 = v5 + 4;
    v19 = v5[3];
    if ( (unsigned __int8)(v5[3] - 48) <= 9u )
    {
      v20 = v18 + v19 - 48;
LABEL_23:
      *a5 = v20;
      return 1LL;
    }
    if ( (unsigned __int8)(v19 - 97) <= 5u )
    {
      v20 = v18 + v19 - 87;
      goto LABEL_23;
    }
    if ( (unsigned __int8)(v19 - 65) <= 5u )
    {
      v20 = v18 + v19 - 55;
      goto LABEL_23;
    }
  }
LABEL_31:
  v24 = 66LL;
  v25 = v27;
  v21 = (__m128i *)std::string::_M_create(&v25, &v24, 0LL);
  v25 = v21;
  v27[0] = v24;
  *v21 = _mm_load_si128((const __m128i *)&xmmword_1B234300);
  v22 = _mm_load_si128((const __m128i *)&xmmword_1B234310);
  v21[4].m128i_i16[0] = 11876;
  v21[1] = v22;
  v21[2] = _mm_load_si128((const __m128i *)&xmmword_1B234330);
  v21[3] = _mm_load_si128((const __m128i *)&xmmword_1B234340);
  v26 = v24;
  *((_BYTE *)v25 + v24) = 0;
  result = Json::Reader::addError(this, &v25, a2, v6);
LABEL_17:
  if ( v25 != v27 )
  {
    v23 = result;
    operator delete(v25);
    return v23;
  }
  return result;
};

// Line 726: range 00000000152DC470-00000000152DC5CA
__int64 __fastcall Json::Reader::addError(
        std::deque<Json::Reader::ErrorInfo> *a1,
        __int64 a2,
        const __m128i *a3,
        const Json::Reader::Char *a4)
{
  __m128i v6; // xmm0
  const Json::Reader::Char *v7; // rax
  const Json::Reader::ErrorInfo *v8; // rdx
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_last; // rax
  __m128i *M_cur; // rbx
  unsigned __int64 *v11; // rdi
  std::string::size_type M_string_length; // r12
  Json::Reader::Location end; // rax
  std::string::pointer M_p; // r14
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-70h] BYREF
  Json::Reader::ErrorInfo v18; // [rsp+10h] [rbp-68h] BYREF

  v6 = _mm_loadu_si128(a3);
  v7 = (const Json::Reader::Char *)a3[1].m128i_i64[0];
  v18.message_._anon_0._M_local_buf[0] = 0;
  v18.message_._M_dataplus._M_p = v18.message_._anon_0._M_local_buf;
  v18.message_._M_string_length = 0LL;
  v18.token_.end_ = v7;
  *(__m128i *)&v18.token_.type_ = v6;
  std::string::_M_assign(&v18.message_, a2);
  M_last = a1[1]._M_impl._M_finish._M_last;
  v18.extra_ = a4;
  M_cur = (__m128i *)a1[1]._M_impl._M_finish._M_cur;
  if ( M_cur != (__m128i *)&M_last[-1] )
  {
    v11 = &M_cur[2].m128i_u64[1];
    M_string_length = v18.message_._M_string_length;
    *M_cur = _mm_load_si128((const __m128i *)&v18);
    end = v18.token_.end_;
    M_cur[1].m128i_i64[1] = (__int64)&M_cur[2].m128i_i64[1];
    M_cur[1].m128i_i64[0] = (__int64)end;
    M_p = v18.message_._M_dataplus._M_p;
    if ( &v18.message_._M_dataplus._M_p[M_string_length] && !v18.message_._M_dataplus._M_p )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v17 = M_string_length;
    if ( M_string_length > 0xF )
    {
      v16 = std::string::_M_create(&M_cur[1].m128i_u64[1], &v17, 0LL);
      M_cur[1].m128i_i64[1] = v16;
      v11 = (unsigned __int64 *)v16;
      M_cur[2].m128i_i64[1] = v17;
    }
    else
    {
      if ( M_string_length == 1 )
      {
        M_cur[2].m128i_i8[8] = *v18.message_._M_dataplus._M_p;
LABEL_7:
        M_cur[2].m128i_i64[0] = M_string_length;
        *((_BYTE *)v11 + M_string_length) = 0;
        M_cur[3].m128i_i64[1] = (__int64)v18.extra_;
        ++a1[1]._M_impl._M_finish._M_cur;
        goto LABEL_8;
      }
      if ( !M_string_length )
        goto LABEL_7;
    }
    memcpy(v11, M_p, M_string_length);
    M_string_length = v17;
    v11 = (unsigned __int64 *)M_cur[1].m128i_i64[1];
    goto LABEL_7;
  }
  std::deque<Json::Reader::ErrorInfo>::_M_push_back_aux<Json::Reader::ErrorInfo const&>(a1 + 1, &v18, v8);
LABEL_8:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.message_._M_dataplus._M_p != &v18.message_._anon_0 )
    operator delete(v18.message_._M_dataplus._M_p);
  return 0LL;
};

// Line 735: range 00000000152DE190-00000000152DE5E1
bool __fastcall Json::Reader::recoverFromError(Json::Reader *const this, Json::Reader::TokenType skipUntilToken)
{
  unsigned __int64 v4; // rbx
  Json::Reader::TokenType type; // eax
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_cur; // r8
  Json::Reader::ErrorInfo **M_node; // r10
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_first; // r11
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v9; // r14
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_last; // rdi
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v11; // r9
  unsigned __int64 v12; // rcx
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v13; // r8
  Json::Reader::ErrorInfo **v14; // r9
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v15; // r10
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v16; // rbp
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v17; // rdi
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v18; // rsi
  unsigned __int64 v19; // rax
  std::deque<Json::Reader::ErrorInfo>::size_type v20; // rbx
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // r9
  Json::Reader::ErrorInfo *v26; // r9
  Json::Reader::ErrorInfo *v27; // rsi
  __m128i v28; // xmm1
  void **v29; // r14
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v30; // r13
  void *v31; // rdi
  __m128i si128; // xmm6
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  Json::Reader::ErrorInfo *v37; // rsi
  __m128i v38; // xmm7
  void **v39; // rbp
  Json::Reader::ErrorInfo *v40; // rax
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v41; // r12
  void *v42; // rdi
  __m128i v43; // xmm5
  std::deque<Json::Reader::ErrorInfo>::iterator v44; // [rsp-40h] [rbp-128h]
  std::deque<Json::Reader::ErrorInfo>::iterator v45; // [rsp-40h] [rbp-128h]
  std::deque<Json::Reader::ErrorInfo>::iterator v46; // [rsp-20h] [rbp-108h]
  std::deque<Json::Reader::ErrorInfo>::iterator v47; // [rsp-20h] [rbp-108h]
  Json::Reader::Errors *p_errors; // [rsp+8h] [rbp-E0h]
  __m128i v49; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v50; // [rsp+20h] [rbp-C8h] BYREF
  std::deque<Json::Reader::ErrorInfo>::iterator __first; // [rsp+30h] [rbp-B8h] BYREF
  Json::Reader::Token v52; // [rsp+50h] [rbp-98h] BYREF
  __m128i v53; // [rsp+70h] [rbp-78h]
  Json::Reader::ErrorInfo *v54; // [rsp+80h] [rbp-68h]
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v55; // [rsp+88h] [rbp-60h]
  __m128i v56; // [rsp+90h] [rbp-58h]
  __m128i v57; // [rsp+A0h] [rbp-48h]

  v4 = (char *)this->errors_._M_impl._M_finish._M_node
     - (char *)this->errors_._M_impl._M_start._M_node
     + this->errors_._M_impl._M_finish._M_cur
     - this->errors_._M_impl._M_finish._M_first
     - 8
     + this->errors_._M_impl._M_start._M_last
     - this->errors_._M_impl._M_start._M_cur;
  v49.m128i_i64[0] = v4 << 6;
  p_errors = &this->errors_;
  do
  {
    if ( Json::Reader::readToken(this, &v52) )
      goto LABEL_2;
    M_cur = this->errors_._M_impl._M_finish._M_cur;
    M_node = this->errors_._M_impl._M_finish._M_node;
    M_first = this->errors_._M_impl._M_finish._M_first;
    v9 = this->errors_._M_impl._M_start._M_node;
    M_last = this->errors_._M_impl._M_start._M_last;
    v11 = this->errors_._M_impl._M_start._M_cur;
    v12 = (char *)M_node - (char *)v9 + M_cur - M_first - 8 + M_last - v11;
    if ( v4 <= v12 )
    {
      if ( v4 >= v12 )
        goto LABEL_2;
      v22 = this->errors_._M_impl._M_start._M_first;
      v23 = v4 + v11 - v22;
      if ( v23 < 0 )
      {
        v24 = ~((unsigned __int64)~v23 >> 3);
      }
      else
      {
        if ( v23 <= 7 )
        {
          v26 = (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer)((char *)v11 + v49.m128i_i64[0]);
          goto LABEL_16;
        }
        v24 = v23 >> 3;
      }
      v25 = 8 * v24;
      v9 = (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer)((char *)v9 + v25);
      v22 = *v9;
      M_last = *v9 + 8;
      v26 = &(*v9)[v23 - v25];
LABEL_16:
      v27 = this->errors_._M_impl._M_finish._M_last;
      v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)M_last, (__m128i)(unsigned __int64)v9);
      v55 = this->errors_._M_impl._M_finish._M_node;
      v54 = v27;
      v29 = (void **)(v9 + 1);
      *(__m128i *)&__first._M_cur = v28;
      v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)M_cur, (__m128i)(unsigned __int64)M_first);
      v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v22);
      v56 = v50;
      v57 = v28;
      v46._M_node = M_node;
      v46._M_last = v27;
      *(__m128i *)&v46._M_cur = v53;
      *(__m128i *)&v44._M_last = v28;
      *(__m128i *)&__first._M_last = v50;
      *(__m128i *)&v44._M_cur = v50;
      std::deque<Json::Reader::ErrorInfo>::_M_destroy_data_aux(p_errors, v44, v46);
      v30 = this->errors_._M_impl._M_finish._M_node + 1;
      while ( v30 > (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer)v29 )
      {
        v31 = *v29++;
        operator delete(v31);
      }
      si128 = _mm_load_si128((const __m128i *)&__first);
      *(__m128i *)&this->errors_._M_impl._M_finish._M_cur = _mm_load_si128(&v50);
      *(__m128i *)&this->errors_._M_impl._M_finish._M_last = si128;
LABEL_2:
      type = v52.type_;
      if ( v52.type_ == skipUntilToken )
        break;
      continue;
    }
    std::deque<Json::Reader::ErrorInfo>::_M_default_append(p_errors, v4 - v12);
    type = v52.type_;
    if ( v52.type_ == skipUntilToken )
      break;
  }
  while ( type );
  v13 = this->errors_._M_impl._M_finish._M_cur;
  v14 = this->errors_._M_impl._M_finish._M_node;
  v15 = this->errors_._M_impl._M_finish._M_first;
  v16 = this->errors_._M_impl._M_start._M_node;
  v17 = this->errors_._M_impl._M_start._M_last;
  v18 = this->errors_._M_impl._M_start._M_cur;
  v19 = (char *)v14 - (char *)v16 + v13 - v15 - 8 + v17 - v18;
  if ( v4 > v19 )
  {
    v20 = v4 - v19;
    if ( v20 )
      std::deque<Json::Reader::ErrorInfo>::_M_default_append(p_errors, v20);
    return 0;
  }
  if ( v4 >= v19 )
    return 0;
  v33 = this->errors_._M_impl._M_start._M_first;
  v34 = v18 - v33 + v4;
  if ( v34 < 0 )
  {
    v35 = ~((unsigned __int64)~v34 >> 3);
LABEL_23:
    v36 = 8 * v35;
    v16 = (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer)((char *)v16 + v36);
    v33 = *v16;
    v17 = *v16 + 8;
    v37 = &(*v16)[v34 - v36];
  }
  else
  {
    if ( v34 > 7 )
    {
      v35 = v34 >> 3;
      goto LABEL_23;
    }
    v37 = (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer)((char *)v18 + v49.m128i_i64[0]);
  }
  v38 = (__m128i)(unsigned __int64)v16;
  v39 = (void **)(v16 + 1);
  v40 = this->errors_._M_impl._M_finish._M_last;
  v55 = this->errors_._M_impl._M_finish._M_node;
  v54 = v40;
  v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, v38);
  v49 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v33);
  v56 = v49;
  v57 = v50;
  v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v15);
  v47._M_node = v14;
  v47._M_last = v40;
  *(__m128i *)&v47._M_cur = v53;
  *(__m128i *)&v45._M_last = v50;
  *(__m128i *)&__first._M_cur = v49;
  *(__m128i *)&v45._M_cur = v49;
  std::deque<Json::Reader::ErrorInfo>::_M_destroy_data_aux(p_errors, v45, v47);
  v41 = this->errors_._M_impl._M_finish._M_node + 1;
  while ( v41 > (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer)v39 )
  {
    v42 = *v39++;
    operator delete(v42);
  }
  v43 = _mm_load_si128(&v50);
  *(__m128i *)&this->errors_._M_impl._M_finish._M_cur = _mm_load_si128(&v49);
  *(__m128i *)&this->errors_._M_impl._M_finish._M_last = v43;
  return 0;
};

// Line 749: range 00000000152DE5F0-00000000152DE611
bool __fastcall Json::Reader::addErrorAndRecover(
        Json::Reader *const this,
        const Json::String *message,
        Json::Reader::Token *token,
        Json::Reader::TokenType skipUntilToken)
{
  Json::Reader::addError((std::deque<Json::Reader::ErrorInfo> *)this, (__int64)message, (const __m128i *)token, 0LL);
  return Json::Reader::recoverFromError(this, skipUntilToken);
};

// Line 757: range 00000000152D9860-00000000152D9882
Json::Reader::Char __fastcall Json::Reader::getNextChar(Json::Reader *const this)
{
  Json::Reader::Location current; // rax

  current = this->current_;
  if ( current == this->end_ )
    return 0;
  this->current_ = current + 1;
  return *current;
};

// Line 764: range 00000000152D9C80-00000000152D9CEE
void __fastcall Json::Reader::getLocationLineAndColumn(
        const Json::Reader *const this,
        Json::Reader::Location location,
        int *line,
        int *column)
{
  Json::Reader::Location begin; // rax
  Json::Reader::Location end; // r9
  int v6; // r10d
  Json::Reader::Char v7; // r8
  unsigned __int64 v8; // rdi

  begin = this->begin_;
  *line = 0;
  if ( begin >= location )
  {
    v6 = (int)begin;
  }
  else
  {
    end = this->end_;
    v6 = (int)begin;
    while ( end != begin )
    {
      v7 = *begin;
      v8 = (unsigned __int64)(begin + 1);
      if ( *begin == 13 )
      {
        if ( begin[1] == 10 )
          v8 = (unsigned __int64)(begin + 2);
        ++*line;
        v6 = v8;
        begin = (Json::Reader::Location)v8;
        if ( (unsigned __int64)location <= v8 )
          break;
      }
      else
      {
        ++begin;
        if ( v7 == 10 )
        {
          ++*line;
          v6 = v8;
        }
        if ( (unsigned __int64)location <= v8 )
          break;
      }
    }
  }
  *column = (_DWORD)location - v6 + 1;
  ++*line;
};

// Line 784: range 00000000152D9CF0-00000000152D9E69
Json::String *__fastcall Json::Reader::getLocationLineAndColumn[abi:cxx11](
        Json::String *retstr,
        const Json::Reader *const this,
        Json::Reader::Location location)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  std::string::size_type v4; // rbx
  std::string::size_type v6; // rdx
  unsigned __int64 v7; // rsi
  char *v8; // rax
  char *v9; // rbp
  unsigned int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int line; // [rsp+0h] [rbp-68h] BYREF
  int column; // [rsp+4h] [rbp-64h] BYREF
  std::string::size_type v15; // [rsp+8h] [rbp-60h] BYREF
  char buffer[51]; // [rsp+10h] [rbp-58h] BYREF

  Json::Reader::getLocationLineAndColumn(this, location, &line, &column);
  snprintf(buffer, 0x33uLL, "Line %d, Column %d", (unsigned int)line, (unsigned int)column);
  p_anon_0 = &retstr->_anon_0;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  v4 = strlen(buffer);
  v15 = v4;
  if ( v4 > 0xF )
  {
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)std::string::_M_create(retstr, &v15, 0LL);
    v6 = v15;
    retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
    retstr->_anon_0._M_allocated_capacity = v6;
  }
  else
  {
    if ( v4 == 1 )
    {
      retstr->_anon_0._M_local_buf[0] = buffer[0];
      goto LABEL_4;
    }
    if ( !v4 )
      goto LABEL_4;
  }
  if ( (unsigned int)v4 >= 8 )
  {
    v7 = (unsigned __int64)(&p_anon_0->_M_allocated_capacity + 1) & 0xFFFFFFFFFFFFFFF8LL;
    p_anon_0->_M_allocated_capacity = *(_QWORD *)buffer;
    *(_QWORD *)&p_anon_0->_M_local_buf[(unsigned int)v4 - 8] = *(_QWORD *)&buffer[(unsigned int)v4 - 8];
    v8 = &p_anon_0->_M_local_buf[-v7];
    v9 = (char *)(buffer - v8);
    if ( (((_DWORD)v4 + (_DWORD)v8) & 0xFFFFFFF8) >= 8 )
    {
      v10 = (v4 + (_DWORD)v8) & 0xFFFFFFF8;
      v11 = 0;
      do
      {
        v12 = v11;
        v11 += 8;
        *(_QWORD *)(v7 + v12) = *(_QWORD *)&v9[v12];
      }
      while ( v11 < v10 );
    }
  }
  else if ( (v4 & 4) != 0 )
  {
    *(_DWORD *)p_anon_0->_M_local_buf = *(_DWORD *)buffer;
    *(_DWORD *)&p_anon_0->_M_local_buf[(unsigned int)v4 - 4] = *(_DWORD *)&buffer[(unsigned int)v4 - 4];
  }
  else if ( (_DWORD)v4 )
  {
    p_anon_0->_M_local_buf[0] = buffer[0];
    if ( (v4 & 2) != 0 )
      *(_WORD *)&p_anon_0->_M_local_buf[(unsigned int)v4 - 2] = *(_WORD *)&buffer[(unsigned int)v4 - 2];
  }
  v4 = v15;
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
LABEL_4:
  retstr->_M_string_length = v4;
  p_anon_0->_M_local_buf[v4] = 0;
  return retstr;
};

// Line 793: range 00000000152DA350-00000000152DA35F
Json::String *__fastcall Json::Reader::getFormatedErrorMessages[abi:cxx11](Json::String *__return_ptr __struct_ptr retstr, const Json::Reader *const this);

// Line 797: range 00000000152D9E70-00000000152DA342
__int64 __fastcall Json::Reader::getFormattedErrorMessages[abi:cxx11](__int64 a1, const Json::Reader *a2)
{
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_cur; // rbx
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_last; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  const char *v7; // rsi
  std::string::size_type M_string_length; // rax
  __int64 v9; // rax
  const char *v10; // rsi
  const Json::Reader::Char *extra; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  const char *v14; // rsi
  __int64 v17; // [rsp+10h] [rbp-B8h]
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v18; // [rsp+18h] [rbp-B0h]
  _QWORD *M_node; // [rsp+20h] [rbp-A8h]
  Json::String v20; // [rsp+30h] [rbp-98h] BYREF
  void *v21; // [rsp+50h] [rbp-78h] BYREF
  __int64 v22; // [rsp+58h] [rbp-70h]
  __m128i v23; // [rsp+60h] [rbp-68h] BYREF
  void *v24; // [rsp+70h] [rbp-58h]
  __int64 v25; // [rsp+78h] [rbp-50h]
  __int128 v26[4]; // [rsp+80h] [rbp-48h] BYREF

  *(_BYTE *)(a1 + 16) = 0;
  M_cur = a2->errors_._M_impl._M_start._M_cur;
  *(_QWORD *)a1 = a1 + 16;
  M_last = a2->errors_._M_impl._M_start._M_last;
  *(_QWORD *)(a1 + 8) = 0LL;
  v17 = (__int64)M_last;
  M_node = a2->errors_._M_impl._M_start._M_node;
  v18 = a2->errors_._M_impl._M_finish._M_cur;
  while ( v18 != M_cur )
  {
    while ( 1 )
    {
      Json::Reader::getLocationLineAndColumn[abi:cxx11](&v20, a2, M_cur->token_.start_);
      v5 = std::string::_M_replace(&v20, 0LL, 0LL, "* ", 2LL);
      v21 = &v23;
      if ( *(_QWORD *)v5 == v5 + 16 )
      {
        v23 = _mm_loadu_si128((const __m128i *)(v5 + 16));
      }
      else
      {
        v21 = *(void **)v5;
        v23.m128i_i64[0] = *(_QWORD *)(v5 + 16);
      }
      v22 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)v5 = v5 + 16;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_BYTE *)(v5 + 16) = 0;
      if ( v22 == 0x3FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      v6 = std::string::_M_append(&v21, "\n", 1LL);
      v24 = v26;
      if ( *(_QWORD *)v6 == v6 + 16 )
      {
        v26[0] = (__int128)_mm_loadu_si128((const __m128i *)(v6 + 16));
      }
      else
      {
        v24 = *(void **)v6;
        *(_QWORD *)&v26[0] = *(_QWORD *)(v6 + 16);
      }
      v25 = *(_QWORD *)(v6 + 8);
      *(_QWORD *)v6 = v6 + 16;
      *(_BYTE *)(v6 + 16) = 0;
      v7 = (const char *)v24;
      *(_QWORD *)(v6 + 8) = 0LL;
      std::string::_M_append(a1, v7, v25);
      if ( v24 != v26 )
        operator delete(v24);
      if ( v21 != &v23 )
        operator delete(v21);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p != &v20._anon_0 )
        operator delete(v20._M_dataplus._M_p);
      v22 = 0LL;
      v23.m128i_i8[0] = 0;
      M_string_length = M_cur->message_._M_string_length;
      v21 = &v23;
      std::string::reserve(&v21, M_string_length + 2);
      if ( v22 == 0x3FFFFFFFFFFFFFFFLL || v22 == 4611686018427387902LL )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(&v21, "  ", 2LL);
      std::string::_M_append(&v21, M_cur->message_._M_dataplus._M_p, M_cur->message_._M_string_length);
      if ( v22 == 0x3FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      v9 = std::string::_M_append(&v21, "\n", 1LL);
      v24 = v26;
      if ( *(_QWORD *)v9 == v9 + 16 )
      {
        v26[0] = (__int128)_mm_loadu_si128((const __m128i *)(v9 + 16));
      }
      else
      {
        v24 = *(void **)v9;
        *(_QWORD *)&v26[0] = *(_QWORD *)(v9 + 16);
      }
      v25 = *(_QWORD *)(v9 + 8);
      *(_QWORD *)v9 = v9 + 16;
      *(_BYTE *)(v9 + 16) = 0;
      v10 = (const char *)v24;
      *(_QWORD *)(v9 + 8) = 0LL;
      std::string::_M_append(a1, v10, v25);
      if ( v24 != v26 )
        operator delete(v24);
      if ( v21 != &v23 )
        operator delete(v21);
      extra = M_cur->extra_;
      if ( extra )
      {
        Json::Reader::getLocationLineAndColumn[abi:cxx11](&v20, a2, extra);
        v12 = std::string::_M_replace(&v20, 0LL, 0LL, "See ", 4LL);
        v21 = &v23;
        if ( *(_QWORD *)v12 == v12 + 16 )
        {
          v23 = _mm_loadu_si128((const __m128i *)(v12 + 16));
        }
        else
        {
          v21 = *(void **)v12;
          v23.m128i_i64[0] = *(_QWORD *)(v12 + 16);
        }
        v22 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_BYTE *)(v12 + 16) = 0;
        *(_QWORD *)v12 = v12 + 16;
        if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - v22) <= 0xC )
          std::__throw_length_error("basic_string::append");
        v13 = std::string::_M_append(&v21, " for detail.\n", 13LL);
        v24 = v26;
        if ( *(_QWORD *)v13 == v13 + 16 )
        {
          v26[0] = (__int128)_mm_loadu_si128((const __m128i *)(v13 + 16));
        }
        else
        {
          v24 = *(void **)v13;
          *(_QWORD *)&v26[0] = *(_QWORD *)(v13 + 16);
        }
        v25 = *(_QWORD *)(v13 + 8);
        *(_QWORD *)v13 = v13 + 16;
        *(_BYTE *)(v13 + 16) = 0;
        v14 = (const char *)v24;
        *(_QWORD *)(v13 + 8) = 0LL;
        std::string::_M_append(a1, v14, v25);
        if ( v24 != v26 )
          operator delete(v24);
        if ( v21 != &v23 )
          operator delete(v21);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p != &v20._anon_0 )
          operator delete(v20._M_dataplus._M_p);
      }
      if ( (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer)v17 != ++M_cur )
        break;
      M_cur = (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer)*++M_node;
      v17 = *M_node + 512LL;
      if ( v18 == (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer)*M_node )
        return a1;
    }
  }
  return a1;
};

// Line 810: range 00000000152DB970-00000000152DBB60
Json::Reader *__fastcall Json::Reader::getStructuredErrors(Json::Reader *this, const __m128i *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  const Json::Reader::StructuredError *v9; // rcx
  std::size_t M_map_size; // rbp
  ptrdiff_t offset_start; // rax
  _BYTE *v12; // rdi
  std::string::pointer M_p; // r14
  std::string::size_type M_string_length; // r12
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-98h]
  __int64 v18; // [rsp+8h] [rbp-90h]
  __int64 *v19; // [rsp+18h] [rbp-80h]
  std::string::size_type v20; // [rsp+28h] [rbp-70h] BYREF
  Json::Reader::StructuredError v21; // [rsp+30h] [rbp-68h] BYREF

  v3 = a2[7].m128i_i64[0];
  v4 = a2[7].m128i_i64[1];
  *(_OWORD *)&this->nodes_.c._M_impl._M_map = 0LL;
  v5 = a2[6].m128i_i64[0];
  v17 = v3;
  v6 = a2[8].m128i_i64[0];
  this->nodes_.c._M_impl._M_start._M_cur = 0LL;
  v18 = v6;
  v19 = (__int64 *)(v4 + 8);
LABEL_2:
  if ( v18 != v5 )
  {
    while ( 1 )
    {
      v21.message._M_dataplus._M_p = v21.message._anon_0._M_local_buf;
      v21.message._anon_0._M_local_buf[0] = 0;
      v7 = _mm_loadu_si128((const __m128i *)(v5 + 8));
      v8 = _mm_loadl_epi64(a2 + 12);
      v21.message._M_string_length = 0LL;
      *(__m128i *)&v21.offset_start = _mm_sub_epi64(v7, _mm_unpacklo_epi64(v8, v8));
      std::string::_M_assign(&v21.message, v5 + 24);
      M_map_size = this->nodes_.c._M_impl._M_map_size;
      if ( (std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer)M_map_size != this->nodes_.c._M_impl._M_start._M_cur )
        break;
      std::vector<Json::Reader::StructuredError>::_M_realloc_insert<Json::Reader::StructuredError const&>(
        (std::vector<Json::Reader::StructuredError> *const)this,
        (std::vector<Json::Reader::StructuredError>::iterator)this->nodes_.c._M_impl._M_map_size,
        &v21,
        v9);
LABEL_10:
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21.message._M_dataplus._M_p == &v21.message._anon_0 )
      {
        v5 += 64LL;
        if ( v17 != v5 )
          goto LABEL_2;
      }
      else
      {
        operator delete(v21.message._M_dataplus._M_p);
        v5 += 64LL;
        if ( v17 != v5 )
          goto LABEL_2;
      }
      v5 = *v19++;
      v17 = v5 + 512;
      if ( v18 == v5 )
        return this;
    }
    offset_start = v21.offset_start;
    v12 = (_BYTE *)(M_map_size + 32);
    *(_QWORD *)(M_map_size + 16) = M_map_size + 32;
    M_p = v21.message._M_dataplus._M_p;
    *(_QWORD *)M_map_size = offset_start;
    *(_QWORD *)(M_map_size + 8) = v21.offset_limit;
    M_string_length = v21.message._M_string_length;
    if ( &M_p[v21.message._M_string_length] && !M_p )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v20 = v21.message._M_string_length;
    if ( v21.message._M_string_length > 0xF )
    {
      v16 = std::string::_M_create(M_map_size + 16, &v20, 0LL);
      *(_QWORD *)(M_map_size + 16) = v16;
      v12 = (_BYTE *)v16;
      *(_QWORD *)(M_map_size + 32) = v20;
    }
    else
    {
      if ( v21.message._M_string_length == 1 )
      {
        *(_BYTE *)(M_map_size + 32) = *M_p;
LABEL_9:
        *(_QWORD *)(M_map_size + 24) = M_string_length;
        v12[M_string_length] = 0;
        this->nodes_.c._M_impl._M_map_size += 48LL;
        goto LABEL_10;
      }
      if ( !v21.message._M_string_length )
        goto LABEL_9;
    }
    memcpy(v12, M_p, M_string_length);
    M_string_length = v20;
    v12 = *(_BYTE **)(M_map_size + 16);
    goto LABEL_9;
  }
  return this;
};

// Line 822: range 00000000152DDE70-00000000152DE048
__int64 __fastcall Json::Reader::pushError(
        std::deque<Json::Reader::ErrorInfo> *a1,
        const Json::Value_0 *a2,
        __int64 a3)
{
  ptrdiff_t v5; // r12
  __int64 result; // rax
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_last; // r15
  ptrdiff_t OffsetStart; // rax
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v9; // r14
  const Json::Reader::ErrorInfo *v10; // rdx
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v11; // rax
  __m128i *M_cur; // rbp
  unsigned __int64 *v13; // rdi
  std::string::size_type M_string_length; // r13
  Json::Reader::Location end; // rax
  std::string::pointer M_p; // r14
  __int64 v17; // rax
  __int64 v18; // [rsp+18h] [rbp-80h] BYREF
  Json::Reader::ErrorInfo v19; // [rsp+20h] [rbp-78h] BYREF

  v5 = (char *)a1[2]._M_impl._M_start._M_node - (char *)a1[2]._M_impl._M_start._M_last;
  if ( v5 < Json::Value::getOffsetStart(a2) || v5 < Json::Value::getOffsetLimit(a2) )
    return 0LL;
  M_last = a1[2]._M_impl._M_start._M_last;
  OffsetStart = Json::Value::getOffsetStart(a2);
  v9 = a1[2]._M_impl._M_start._M_last;
  v19.message_._M_dataplus._M_p = v19.message_._anon_0._M_local_buf;
  v19.message_._anon_0._M_local_buf[0] = 0;
  v19.message_._M_string_length = 0LL;
  v19.token_.type_ = tokenError;
  v19.token_.start_ = (char *)M_last + OffsetStart;
  v19.token_.end_ = (char *)v9 + Json::Value::getOffsetLimit(a2);
  std::string::_M_assign(&v19.message_, a3);
  v11 = a1[1]._M_impl._M_finish._M_last;
  M_cur = (__m128i *)a1[1]._M_impl._M_finish._M_cur;
  v19.extra_ = 0LL;
  if ( M_cur != (__m128i *)&v11[-1] )
  {
    v13 = &M_cur[2].m128i_u64[1];
    M_string_length = v19.message_._M_string_length;
    *M_cur = _mm_load_si128((const __m128i *)&v19);
    end = v19.token_.end_;
    M_cur[1].m128i_i64[1] = (__int64)&M_cur[2].m128i_i64[1];
    M_cur[1].m128i_i64[0] = (__int64)end;
    M_p = v19.message_._M_dataplus._M_p;
    if ( &v19.message_._M_dataplus._M_p[M_string_length] && !v19.message_._M_dataplus._M_p )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v18 = M_string_length;
    if ( M_string_length > 0xF )
    {
      v17 = std::string::_M_create(&M_cur[1].m128i_u64[1], &v18, 0LL);
      M_cur[1].m128i_i64[1] = v17;
      v13 = (unsigned __int64 *)v17;
      M_cur[2].m128i_i64[1] = v18;
    }
    else
    {
      if ( M_string_length == 1 )
      {
        M_cur[2].m128i_i8[8] = *v19.message_._M_dataplus._M_p;
LABEL_11:
        M_cur[2].m128i_i64[0] = M_string_length;
        *((_BYTE *)v13 + M_string_length) = 0;
        M_cur[3].m128i_i64[1] = (__int64)v19.extra_;
        ++a1[1]._M_impl._M_finish._M_cur;
        goto LABEL_12;
      }
      if ( !M_string_length )
        goto LABEL_11;
    }
    memcpy(v13, M_p, M_string_length);
    M_string_length = v18;
    v13 = (unsigned __int64 *)M_cur[1].m128i_i64[1];
    goto LABEL_11;
  }
  std::deque<Json::Reader::ErrorInfo>::_M_push_back_aux<Json::Reader::ErrorInfo const&>(a1 + 1, &v19, v10);
LABEL_12:
  result = 1LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19.message_._M_dataplus._M_p != &v19.message_._anon_0 )
  {
    operator delete(v19.message_._M_dataplus._M_p);
    return 1LL;
  }
  return result;
};

// Line 839: range 00000000152DC270-00000000152DC465
__int64 __fastcall Json::Reader::pushError(
        std::deque<Json::Reader::ErrorInfo> *a1,
        const Json::Value_0 *a2,
        __int64 a3,
        const Json::Value_0 *a4)
{
  ptrdiff_t v7; // rbp
  __int64 result; // rax
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_last; // r15
  ptrdiff_t OffsetStart; // rax
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v11; // rbp
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v12; // rbp
  const Json::Reader::ErrorInfo *v13; // rdx
  const Json::Reader::Char *v14; // rbp
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer v15; // rax
  __m128i *M_cur; // rbp
  unsigned __int64 *v17; // rdi
  std::string::size_type M_string_length; // r12
  Json::Reader::Location end; // rax
  std::string::pointer M_p; // r13
  __int64 v21; // rax
  __int64 v22; // [rsp+18h] [rbp-80h] BYREF
  Json::Reader::ErrorInfo v23; // [rsp+20h] [rbp-78h] BYREF

  v7 = (char *)a1[2]._M_impl._M_start._M_node - (char *)a1[2]._M_impl._M_start._M_last;
  if ( v7 < Json::Value::getOffsetStart(a2)
    || v7 < Json::Value::getOffsetLimit(a2)
    || v7 < Json::Value::getOffsetLimit(a4) )
  {
    return 0LL;
  }
  M_last = a1[2]._M_impl._M_start._M_last;
  OffsetStart = Json::Value::getOffsetStart(a2);
  v11 = a1[2]._M_impl._M_start._M_last;
  v23.message_._M_dataplus._M_p = v23.message_._anon_0._M_local_buf;
  v23.message_._anon_0._M_local_buf[0] = 0;
  v23.message_._M_string_length = 0LL;
  v23.token_.type_ = tokenError;
  v23.token_.start_ = (char *)M_last + OffsetStart;
  v23.token_.end_ = (char *)v11 + Json::Value::getOffsetLimit(a2);
  std::string::_M_assign(&v23.message_, a3);
  v12 = a1[2]._M_impl._M_start._M_last;
  v14 = (char *)v12 + Json::Value::getOffsetStart(a4);
  v15 = a1[1]._M_impl._M_finish._M_last;
  v23.extra_ = v14;
  M_cur = (__m128i *)a1[1]._M_impl._M_finish._M_cur;
  if ( M_cur != (__m128i *)&v15[-1] )
  {
    v17 = &M_cur[2].m128i_u64[1];
    M_string_length = v23.message_._M_string_length;
    *M_cur = _mm_load_si128((const __m128i *)&v23);
    end = v23.token_.end_;
    M_cur[1].m128i_i64[1] = (__int64)&M_cur[2].m128i_i64[1];
    M_cur[1].m128i_i64[0] = (__int64)end;
    M_p = v23.message_._M_dataplus._M_p;
    if ( &v23.message_._M_dataplus._M_p[M_string_length] && !v23.message_._M_dataplus._M_p )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v22 = M_string_length;
    if ( M_string_length > 0xF )
    {
      v21 = std::string::_M_create(&M_cur[1].m128i_u64[1], &v22, 0LL);
      M_cur[1].m128i_i64[1] = v21;
      v17 = (unsigned __int64 *)v21;
      M_cur[2].m128i_i64[1] = v22;
    }
    else
    {
      if ( M_string_length == 1 )
      {
        M_cur[2].m128i_i8[8] = *v23.message_._M_dataplus._M_p;
LABEL_13:
        M_cur[2].m128i_i64[0] = M_string_length;
        *((_BYTE *)v17 + M_string_length) = 0;
        M_cur[3].m128i_i64[1] = (__int64)v23.extra_;
        ++a1[1]._M_impl._M_finish._M_cur;
        goto LABEL_14;
      }
      if ( !M_string_length )
        goto LABEL_13;
    }
    memcpy(v17, M_p, M_string_length);
    M_string_length = v22;
    v17 = (unsigned __int64 *)M_cur[1].m128i_i64[1];
    goto LABEL_13;
  }
  std::deque<Json::Reader::ErrorInfo>::_M_push_back_aux<Json::Reader::ErrorInfo const&>(a1 + 1, &v23, v13);
LABEL_14:
  result = 1LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23.message_._M_dataplus._M_p != &v23.message_._anon_0 )
  {
    operator delete(v23.message_._M_dataplus._M_p);
    return 1LL;
  }
  return result;
};

// Line 876: range 00000000152DA370-00000000152DA382
Json::OurFeatures *__cdecl Json::OurFeatures::all(Json::OurFeatures *retstr)
{
  Json::OurFeatures *result; // rax

  retstr->stackLimit_ = 0LL;
  result = retstr;
  *(_OWORD *)&retstr->allowComments_ = 0LL;
  return result;
};

// Line 1002: range 00000000152DBF60-00000000152DC0B8
size_t __fastcall Json::OurReader::OurReader(Json::OurReader *this, const __m128i *a2)
{
  Json::OurReader::ErrorInfo **v2; // rax
  std::size_t M_map_size; // rdx
  Json::OurReader::ErrorInfo **v4; // rbx
  Json::OurReader::ErrorInfo *v5; // rax
  Json::OurReader::ErrorInfo *v6; // rdx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  size_t result; // rax

  this->nodes_.c._M_impl._M_map = 0LL;
  this->nodes_.c._M_impl._M_map_size = 0LL;
  *(_OWORD *)&this->nodes_.c._M_impl._M_start._M_cur = 0LL;
  *(_OWORD *)&this->nodes_.c._M_impl._M_start._M_last = 0LL;
  *(_OWORD *)&this->nodes_.c._M_impl._M_finish._M_cur = 0LL;
  *(_OWORD *)&this->nodes_.c._M_impl._M_finish._M_last = 0LL;
  std::_Deque_base<Json::Value *>::_M_initialize_map(&this->nodes_.c, 0LL);
  this->errors_._M_impl._M_map = 0LL;
  this->errors_._M_impl._M_map_size = 8LL;
  *(_OWORD *)&this->errors_._M_impl._M_start._M_cur = 0LL;
  *(_OWORD *)&this->errors_._M_impl._M_start._M_last = 0LL;
  *(_OWORD *)&this->errors_._M_impl._M_finish._M_cur = 0LL;
  *(_OWORD *)&this->errors_._M_impl._M_finish._M_last = 0LL;
  v2 = (Json::OurReader::ErrorInfo **)operator new(0x40uLL);
  M_map_size = this->errors_._M_impl._M_map_size;
  this->errors_._M_impl._M_map = v2;
  v4 = (Json::OurReader::ErrorInfo **)((char *)v2 + ((4 * M_map_size - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v5 = (Json::OurReader::ErrorInfo *)operator new(0x200uLL);
  *v4 = v5;
  v6 = v5 + 8;
  this->errors_._M_impl._M_finish._M_first = v5;
  v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
  this->errors_._M_impl._M_finish._M_cur = v5;
  this->document_._M_dataplus._M_p = this->document_._anon_0._M_local_buf;
  this->document_._M_string_length = 0LL;
  this->commentsBefore_._M_string_length = 0LL;
  v8 = _mm_loadu_si128(a2);
  this->commentsBefore_._M_dataplus._M_p = this->commentsBefore_._anon_0._M_local_buf;
  result = a2[1].m128i_u64[0];
  *(__m128i *)&this->errors_._M_impl._M_start._M_cur = v7;
  this->errors_._M_impl._M_start._M_node = v4;
  this->errors_._M_impl._M_finish._M_node = v4;
  this->errors_._M_impl._M_start._M_last = v6;
  this->errors_._M_impl._M_finish._M_last = v6;
  this->document_._anon_0._M_local_buf[0] = 0;
  this->lastValue_ = 0LL;
  this->lastValueHasAComment_ = 0;
  this->commentsBefore_._anon_0._M_local_buf[0] = 0;
  this->features_.stackLimit_ = result;
  this->collectComments_ = 0;
  *(_OWORD *)&this->begin_ = 0LL;
  *(_OWORD *)&this->current_ = 0LL;
  *(__m128i *)&this->features_.allowComments_ = v8;
  return result;
};

// Line 1005: range 00000000152E2B10-00000000152E3038
__int64 __fastcall Json::OurReader::parse(
        Json::OurReader *this,
        const char *a2,
        const char *a3,
        Json::Value *a4,
        char a5)
{
  __m128i v5; // xmm1
  bool v8; // zf
  std::string::pointer M_p; // rax
  Json::OurReader::Errors *p_errors; // rdi
  __int64 M_first; // rax
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer M_node; // r15
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_last; // r14
  void **v14; // r13
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v15; // rbx
  void *v16; // rdi
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer M_cur; // rax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer v18; // rdi
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer v19; // rcx
  unsigned int Value; // eax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer v21; // rdi
  unsigned int v22; // r13d
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v24; // rdx
  Json::Value *M_string_length; // r15
  std::string::pointer v26; // r8
  __int128 *v27; // rax
  __m128i v28; // xmm6
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i si128; // xmm0
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v33; // rdx
  unsigned __int64 v34; // rax
  __int128 *p_int; // rdi
  Json::Value *v36; // rax
  char *v37; // [rsp+8h] [rbp-A0h] BYREF
  __m128i v38; // [rsp+10h] [rbp-98h] BYREF
  __int64 v39; // [rsp+28h] [rbp-80h] BYREF
  __m256 token; // [rsp+30h] [rbp-78h] BYREF
  Json::Value *v41[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 dest[4]; // [rsp+60h] [rbp-48h] BYREF

  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a3);
  v8 = !this->features_.allowComments_;
  this->current_ = a2;
  if ( v8 )
    a5 = 0;
  v38 = v5;
  M_p = this->commentsBefore_._M_dataplus._M_p;
  p_errors = &this->errors_;
  *(__m128i *)&p_errors[1]._M_impl._M_start._M_last = v5;
  LOBYTE(p_errors[2]._M_impl._M_finish._M_first) = a5;
  p_errors[1]._M_impl._M_finish._M_first = 0LL;
  p_errors[1]._M_impl._M_finish._M_last = 0LL;
  p_errors[2]._M_impl._M_map_size = 0LL;
  *M_p = 0;
  M_first = (__int64)p_errors->_M_impl._M_start._M_first;
  *(__m128i *)v41 = _mm_loadu_si128((const __m128i *)&p_errors->_M_impl._M_start);
  M_node = p_errors->_M_impl._M_start._M_node;
  dest[0] = (__int128)_mm_loadu_si128((const __m128i *)&p_errors->_M_impl._M_start._M_last);
  M_last = p_errors->_M_impl._M_start._M_last;
  v37 = (char *)M_first;
  v14 = (void **)(M_node + 1);
  *(__m128i *)token.m256_f32 = _mm_loadu_si128((const __m128i *)&p_errors->_M_impl._M_finish);
  *(__m128i *)&token.m256_f32[4] = _mm_loadu_si128((const __m128i *)&p_errors->_M_impl._M_finish._M_last);
  std::deque<Json::OurReader::ErrorInfo>::_M_destroy_data_aux(
    p_errors,
    this->errors_._M_impl._M_start,
    this->errors_._M_impl._M_finish);
  v15 = this->errors_._M_impl._M_finish._M_node + 1;
  if ( v15 > M_node + 1 )
  {
    do
    {
      v16 = *v14++;
      operator delete(v16);
    }
    while ( v15 > (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer)v14 );
  }
  M_cur = this->nodes_.c._M_impl._M_finish._M_cur;
  *(__m128 *)&this->errors_._M_impl._M_finish._M_cur = _mm_loadh_ps((const double *)&v37);
  *(__m128i *)&this->errors_._M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                           (__m128i)(unsigned __int64)M_last,
                                                           (__m128i)(unsigned __int64)M_node);
  if ( M_cur != this->nodes_.c._M_impl._M_start._M_cur )
  {
    v18 = this->nodes_.c._M_impl._M_finish._M_first;
    do
    {
      while ( v18 != M_cur )
      {
        this->nodes_.c._M_impl._M_finish._M_cur = --M_cur;
        if ( this->nodes_.c._M_impl._M_start._M_cur == M_cur )
          goto LABEL_9;
      }
      operator delete(v18);
      v24 = this->nodes_.c._M_impl._M_finish._M_node;
      v18 = *(v24 - 1);
      M_cur = v18 + 63;
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_cur = _mm_unpacklo_epi64(
                                                               (__m128i)(unsigned __int64)(v18 + 63),
                                                               (__m128i)(unsigned __int64)v18);
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                                (__m128i)(unsigned __int64)(v18 + 64),
                                                                (__m128i)(unsigned __int64)(v24 - 1));
    }
    while ( v18 + 63 != this->nodes_.c._M_impl._M_start._M_cur );
  }
LABEL_9:
  v19 = this->nodes_.c._M_impl._M_finish._M_last;
  v41[0] = a4;
  if ( M_cur == v19 - 1 )
  {
    std::deque<Json::Value *>::_M_push_back_aux<Json::Value *>(&this->nodes_.c, v41, v19 - 1);
  }
  else
  {
    *M_cur = a4;
    this->nodes_.c._M_impl._M_finish._M_cur = M_cur + 1;
  }
  Json::OurReader::skipBom(this, this->features_.skipBom_);
  Value = Json::OurReader::readValue(this);
  v21 = this->nodes_.c._M_impl._M_finish._M_cur;
  v22 = Value;
  if ( v21 == this->nodes_.c._M_impl._M_finish._M_first )
  {
    operator delete(v21);
    v33 = this->nodes_.c._M_impl._M_finish._M_node;
    v34 = (unsigned __int64)*(v33 - 1);
    *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_cur = _mm_unpacklo_epi64((__m128i)(v34 + 504), (__m128i)v34);
    *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                              (__m128i)(v34 + 512),
                                                              (__m128i)(unsigned __int64)(v33 - 1));
  }
  else
  {
    this->nodes_.c._M_impl._M_finish._M_cur = v21 - 1;
  }
  Json::OurReader::skipCommentTokens(this, (Json::OurReader::Token *)&token);
  if ( this->features_.failIfExtra_ && LODWORD(token.m256_f32[0]) )
  {
    v39 = 38LL;
    v41[0] = (Json::Value *)dest;
    v31 = std::string::_M_create(v41, &v39, 0LL);
    v41[0] = (Json::Value *)v31;
    *(_QWORD *)&dest[0] = v39;
    *(__m128i *)v31 = _mm_load_si128((const __m128i *)&xmmword_1B2344D0);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B2344E0);
    *(_DWORD *)(v31 + 32) = 1970037110;
    *(_WORD *)(v31 + 36) = 11877;
    *(__m128i *)(v31 + 16) = si128;
    v41[1] = (Json::Value *)v39;
    *(&v41[0]->value_.bool_ + v39) = 0;
    Json::OurReader::addError(this, v41, &token, 0LL);
    goto LABEL_31;
  }
  if ( this->collectComments_ )
  {
    M_string_length = (Json::Value *)this->commentsBefore_._M_string_length;
    if ( M_string_length )
    {
      v26 = this->commentsBefore_._M_dataplus._M_p;
      v41[0] = (Json::Value *)dest;
      if ( !v26 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v39 = (__int64)M_string_length;
      if ( (unsigned __int64)M_string_length > 0xF )
      {
        v37 = v26;
        v36 = (Json::Value *)std::string::_M_create(v41, &v39, 0LL);
        v26 = v37;
        v41[0] = v36;
        p_int = (__int128 *)&v36->value_.int_;
        *(_QWORD *)&dest[0] = v39;
      }
      else
      {
        if ( M_string_length == (Json::Value *)1 )
        {
          LOBYTE(dest[0]) = *v26;
          v27 = dest;
          goto LABEL_25;
        }
        p_int = dest;
      }
      memcpy(p_int, v26, (size_t)M_string_length);
      M_string_length = (Json::Value *)v39;
      v27 = (__int128 *)&v41[0]->value_.int_;
LABEL_25:
      v41[1] = M_string_length;
      *(&M_string_length->value_.bool_ + (_QWORD)v27) = 0;
      Json::Value::setComment(a4, v41, 2LL);
      if ( (__int128 *)v41[0] != dest )
        operator delete(v41[0]);
    }
  }
  if ( !this->features_.strictRoot_
    || Json::Value::isArray((const Json::Value_0 *const)a4)
    || Json::Value::isObject((const Json::Value_0 *const)a4) )
  {
    return v22;
  }
  v28 = _mm_load_si128(&v38);
  LODWORD(token.m256_f32[0]) = 16;
  v41[0] = (Json::Value *)dest;
  v39 = 65LL;
  *(__m128i *)&token.m256_f32[2] = v28;
  v29 = std::string::_M_create(v41, &v39, 0LL);
  v41[0] = (Json::Value *)v29;
  *(_QWORD *)&dest[0] = v39;
  *(__m128i *)v29 = _mm_load_si128((const __m128i *)&xmmword_1B234480);
  v30 = _mm_load_si128((const __m128i *)&xmmword_1B234490);
  *(_BYTE *)(v29 + 64) = 46;
  *(__m128i *)(v29 + 16) = v30;
  *(__m128i *)(v29 + 32) = _mm_load_si128((const __m128i *)&xmmword_1B2344A0);
  *(__m128i *)(v29 + 48) = _mm_load_si128((const __m128i *)&xmmword_1B2344B0);
  v41[1] = (Json::Value *)v39;
  *(&v41[0]->value_.bool_ + v39) = 0;
  Json::OurReader::addError(this, v41, &token, 0LL);
LABEL_31:
  if ( (__int128 *)v41[0] != dest )
    operator delete(v41[0]);
  return 0;
};

// Line 1050: range 00000000152E1BB0-00000000152E2257
__int64 __fastcall Json::OurReader::readValue(Json::OurReader *this)
{
  const std::allocator<char> *v1; // rdx
  Json::Value *v3; // rax
  std::string::pointer M_p; // r8
  std::string::size_type M_string_length; // r12
  Json::Value *v6; // r15
  Json::Value::Comments *p_comments; // rax
  std::string::pointer v8; // rax
  unsigned int allowDroppedNullPlaceholders; // r12d
  Json::Value *v10; // rax
  Json::Value *v11; // rax
  Json::Value::ValueHolder v12; // rax
  __m128i si128; // xmm0
  const Json::OurReader::Char *current; // rax
  Json::Value *v16; // rax
  Json::Value *v17; // rax
  Json::Value *v18; // rax
  Json::Value *v19; // rax
  Json::Value *v20; // rax
  Json::Value *v21; // rax
  unsigned int v22; // eax
  Json::Value *v23; // rax
  Json::Value *v24; // rax
  Json::Value *v25; // rax
  Json::Value *v26; // rax
  Json::Value *v27; // rax
  Json::Value *v28; // rax
  Json::Value *v29; // rax
  Json::Value *v30; // rax
  Json::Value *v31; // rax
  Json::Value *v32; // rax
  Json::Value *v33; // rax
  Json::Value *v34; // rax
  Json::Value *v35; // rax
  Json::Value::ValueHolder v36; // rax
  Json::Value::Comments *v37; // rdi
  Json::Value *v38; // rax
  Json::Value *v39; // rax
  Json::Value *v40; // rax
  char *src; // [rsp+8h] [rbp-A0h]
  std::string::size_type v42; // [rsp+18h] [rbp-90h] BYREF
  Json::OurReader::Token token; // [rsp+20h] [rbp-88h] BYREF
  Json::Value_0 other; // [rsp+40h] [rbp-68h] BYREF

  v1 = (const std::allocator<char> *)(((this->nodes_.c._M_impl._M_finish._M_node
                                      - this->nodes_.c._M_impl._M_start._M_node
                                      - 1) << 6)
                                    + this->nodes_.c._M_impl._M_finish._M_cur
                                    - this->nodes_.c._M_impl._M_finish._M_first);
  if ( this->features_.stackLimit_ < (unsigned __int64)&v1[this->nodes_.c._M_impl._M_start._M_last
                                                         - this->nodes_.c._M_impl._M_start._M_cur] )
  {
    std::string::basic_string((std::string *const)&other, "Exceeded stackLimit in readValue().", v1);
    Json::throwRuntimeError((const Json::String *)&other);
  }
  Json::OurReader::skipCommentTokens(this, &token);
  if ( this->collectComments_ && this->commentsBefore_._M_string_length )
  {
    v3 = Json::OurReader::currentValue(this);
    M_p = this->commentsBefore_._M_dataplus._M_p;
    other.value_.int_ = (Json::Value::LargestInt)&other.comments_;
    M_string_length = this->commentsBefore_._M_string_length;
    v6 = v3;
    if ( &M_p[M_string_length] && !M_p )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v42 = this->commentsBefore_._M_string_length;
    if ( M_string_length > 0xF )
    {
      src = M_p;
      v36.int_ = std::string::_M_create(&other, &v42, 0LL);
      M_p = src;
      other.value_ = v36;
      v37 = (Json::Value::Comments *)v36.int_;
      other.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)v42;
    }
    else
    {
      if ( M_string_length == 1 )
      {
        LOBYTE(other.comments_.ptr_._M_t._M_t._M_head_impl) = *M_p;
        p_comments = &other.comments_;
LABEL_10:
        *(_QWORD *)&other.bits_ = M_string_length;
        *((_BYTE *)&p_comments->ptr_._M_t._M_t._M_head_impl + M_string_length) = 0;
        Json::Value::setComment(v6, &other, 0LL);
        if ( (Json::Value::Comments *)other.value_.int_ != &other.comments_ )
          operator delete(other.value_.string_);
        v8 = this->commentsBefore_._M_dataplus._M_p;
        this->commentsBefore_._M_string_length = 0LL;
        *v8 = 0;
        goto LABEL_3;
      }
      if ( !M_string_length )
      {
        p_comments = &other.comments_;
        goto LABEL_10;
      }
      v37 = &other.comments_;
    }
    memcpy(v37, M_p, M_string_length);
    M_string_length = v42;
    p_comments = (Json::Value::Comments *)other.value_.int_;
    goto LABEL_10;
  }
LABEL_3:
  switch ( token.type_ )
  {
    case tokenObjectBegin_0:
      v22 = Json::OurReader::readObject(this, &token);
      goto LABEL_25;
    case tokenObjectEnd_0:
    case tokenArrayEnd_0:
    case tokenArraySeparator_0:
      allowDroppedNullPlaceholders = this->features_.allowDroppedNullPlaceholders_;
      if ( !(_BYTE)allowDroppedNullPlaceholders )
        goto LABEL_14;
      --this->current_;
      Json::Value::Value(&other, 0LL);
      v38 = Json::OurReader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v38, &other);
      v39 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v39, this->current_ - this->begin_ - 1);
      v40 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v40, this->current_ - this->begin_);
      Json::Value::~Value(&other);
      goto LABEL_18;
    case tokenArrayBegin_0:
      v22 = Json::OurReader::readArray(this, &token);
LABEL_25:
      allowDroppedNullPlaceholders = v22;
      v23 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v23, this->current_ - this->begin_);
      goto LABEL_18;
    case tokenString_0:
      allowDroppedNullPlaceholders = Json::OurReader::decodeString(this, &token);
      goto LABEL_18;
    case tokenNumber_0:
      allowDroppedNullPlaceholders = Json::OurReader::decodeNumber(this, &token);
      goto LABEL_18;
    case tokenTrue_0:
      Json::Value::Value((Json::Value *)&other, 1);
      v16 = Json::OurReader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v16, &other);
      v17 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v17, token.start_ - this->begin_);
      v18 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v18, token.end_ - this->begin_);
      goto LABEL_22;
    case tokenFalse_0:
      Json::Value::Value((Json::Value *)&other, 0);
      v19 = Json::OurReader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v19, &other);
      v20 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v20, token.start_ - this->begin_);
      v21 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v21, token.end_ - this->begin_);
      goto LABEL_22;
    case tokenNull_0:
      Json::Value::Value(&other, 0LL);
      v24 = Json::OurReader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v24, &other);
      v25 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v25, token.start_ - this->begin_);
      v26 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v26, token.end_ - this->begin_);
      goto LABEL_22;
    case tokenNaN:
      Json::Value::Value((Json::Value *)&other, NAN);
      v27 = Json::OurReader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v27, &other);
      v28 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v28, token.start_ - this->begin_);
      v29 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v29, token.end_ - this->begin_);
      goto LABEL_22;
    case tokenPosInf:
      Json::Value::Value((Json::Value *)&other, INFINITY);
      v30 = Json::OurReader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v30, &other);
      v31 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v31, token.start_ - this->begin_);
      v32 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v32, token.end_ - this->begin_);
      goto LABEL_22;
    case tokenNegInf:
      Json::Value::Value((Json::Value *)&other, -INFINITY);
      v33 = Json::OurReader::currentValue(this);
      Json::Value::swapPayload((Json::Value_0 *const)v33, &other);
      v34 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v34, token.start_ - this->begin_);
      v35 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v35, token.end_ - this->begin_);
LABEL_22:
      allowDroppedNullPlaceholders = 1;
      Json::Value::~Value(&other);
LABEL_18:
      if ( this->collectComments_ )
      {
        current = this->current_;
        this->lastValueHasAComment_ = 0;
        this->lastValueEnd_ = current;
        this->lastValue_ = Json::OurReader::currentValue(this);
      }
      break;
    default:
LABEL_14:
      v10 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetStart((Json::Value_0 *const)v10, token.start_ - this->begin_);
      v11 = Json::OurReader::currentValue(this);
      Json::Value::setOffsetLimit((Json::Value_0 *const)v11, token.end_ - this->begin_);
      other.value_.int_ = (Json::Value::LargestInt)&other.comments_;
      v42 = 46LL;
      v12.int_ = std::string::_M_create(&other, &v42, 0LL);
      other.value_ = v12;
      other.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)v42;
      *(__m128i *)v12.int_ = _mm_load_si128((const __m128i *)&xmmword_1B234410);
      si128 = _mm_load_si128((const __m128i *)&xmmword_1B234420);
      qmemcpy((void *)(v12.int_ + 32), "rray expected.", 14);
      *(__m128i *)(v12.int_ + 16) = si128;
      *(_QWORD *)&other.bits_ = v42;
      *(_BYTE *)(other.value_.int_ + v42) = 0;
      allowDroppedNullPlaceholders = Json::OurReader::addError(this, &other, &token, 0LL);
      if ( (Json::Value::Comments *)other.value_.int_ != &other.comments_ )
        operator delete(other.value_.string_);
      break;
  }
  return allowDroppedNullPlaceholders;
};

// Line 1121: range 000000000C73B734-000000000C73B73F
void __fastcall __noreturn Json::OurReader::readValue()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0 *v1; // r14

  Json::Value::~Value(v1);
  _Unwind_Resume(v0);
};

// Line 1142: range 00000000152DAD00-00000000152DAD47
void __fastcall Json::OurReader::skipCommentTokens(Json::OurReader *const this, Json::OurReader::Token *token)
{
  if ( this->features_.allowComments_ )
  {
    do
      Json::OurReader::readToken(this, token);
    while ( token->type_ == tokenComment_0 );
  }
  else
  {
    Json::OurReader::readToken(this, token);
  }
};

// Line 1152: range 00000000152DAA90-00000000152DACF7
bool __fastcall Json::OurReader::readToken(Json::OurReader *const this, Json::OurReader::Token *token)
{
  bool v2; // zf
  bool result; // al
  bool String; // al

  Json::OurReader::skipSpaces(this);
  token->start_ = this->current_;
  switch ( Json::OurReader::getNextChar(this) )
  {
    case 0:
      token->type_ = tokenEndOfStream_0;
      result = 1;
      goto LABEL_5;
    case 34:
      token->type_ = tokenString_0;
      String = Json::OurReader::readString(this);
      goto LABEL_9;
    case 39:
      if ( !this->features_.allowSingleQuotes_ )
        goto LABEL_8;
      token->type_ = tokenString_0;
      String = Json::OurReader::readStringSingleQuote(this);
      goto LABEL_9;
    case 43:
      if ( Json::OurReader::readNumber(this, 1) )
        goto LABEL_14;
      v2 = !this->features_.allowSpecialFloats_;
      token->type_ = tokenPosInf;
      if ( !v2 )
        goto LABEL_29;
      goto LABEL_4;
    case 44:
      token->type_ = tokenArraySeparator_0;
      result = 1;
      goto LABEL_5;
    case 45:
      if ( Json::OurReader::readNumber(this, 1) )
      {
LABEL_14:
        token->type_ = tokenNumber_0;
        result = 1;
      }
      else
      {
        v2 = !this->features_.allowSpecialFloats_;
        token->type_ = tokenNegInf;
        if ( v2 )
        {
LABEL_4:
          token->type_ = tokenError_0;
          result = 0;
          goto LABEL_5;
        }
LABEL_29:
        String = Json::OurReader::match(this, "nfinity", 7);
LABEL_9:
        if ( !String )
          goto LABEL_4;
LABEL_10:
        result = 1;
      }
LABEL_5:
      token->end_ = this->current_;
      return result;
    case 47:
LABEL_8:
      token->type_ = tokenComment_0;
      String = Json::OurReader::readComment(this);
      goto LABEL_9;
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
      token->type_ = tokenNumber_0;
      Json::OurReader::readNumber(this, 0);
      result = 1;
      goto LABEL_5;
    case 58:
      token->type_ = tokenMemberSeparator_0;
      goto LABEL_10;
    case 73:
      if ( !this->features_.allowSpecialFloats_ )
        goto LABEL_4;
      token->type_ = tokenPosInf;
      String = Json::OurReader::match(this, "nfinity", 7);
      goto LABEL_9;
    case 78:
      if ( !this->features_.allowSpecialFloats_ )
        goto LABEL_4;
      token->type_ = tokenNaN;
      String = Json::OurReader::match(this, "aN", 2);
      goto LABEL_9;
    case 91:
      token->type_ = tokenArrayBegin_0;
      result = 1;
      goto LABEL_5;
    case 93:
      token->type_ = tokenArrayEnd_0;
      result = 1;
      goto LABEL_5;
    case 102:
      token->type_ = tokenFalse_0;
      String = Json::OurReader::match(this, "alse", 4);
      goto LABEL_9;
    case 110:
      token->type_ = tokenNull_0;
      String = Json::OurReader::match(this, off_1A1ADCBD, 3);
      goto LABEL_9;
    case 116:
      token->type_ = tokenTrue_0;
      String = Json::OurReader::match(this, off_1A173E76, 3);
      goto LABEL_9;
    case 123:
      token->type_ = tokenObjectBegin_0;
      result = 1;
      goto LABEL_5;
    case 125:
      token->type_ = tokenObjectEnd_0;
      result = 1;
      goto LABEL_5;
    default:
      goto LABEL_4;
  }
};

// Line 1261: range 00000000152DA3A0-00000000152DA3DE
void __fastcall Json::OurReader::skipSpaces(Json::OurReader *const this)
{
  Json::OurReader::Location current; // rax
  Json::OurReader::Location end; // rcx
  __int64 i; // rsi
  unsigned __int64 v4; // rdx

  current = this->current_;
  end = this->end_;
  for ( i = 0x100002600LL; current != end; this->current_ = ++current )
  {
    v4 = *(unsigned __int8 *)current;
    if ( (unsigned __int8)v4 > 0x20u )
      break;
    if ( !_bittest64(&i, v4) )
      break;
  }
};

// Line 1272: range 00000000152DA3E0-00000000152DA41F
void __fastcall Json::OurReader::skipBom(Json::OurReader *const this, bool skipBom)
{
  Json::OurReader::Location begin; // rdx
  const Json::OurReader::Char *v3; // rdx

  if ( skipBom )
  {
    begin = this->begin_;
    if ( this->end_ - begin > 2 && *begin == -17 && begin[1] == -69 && begin[2] == -65 )
    {
      v3 = begin + 3;
      this->begin_ = v3;
      this->current_ = v3;
    }
  }
};

// Line 1281: range 00000000152DA420-00000000152DA486
bool __fastcall Json::OurReader::match(
        Json::OurReader *const this,
        const Json::OurReader::Char *pattern,
        int patternLength)
{
  Json::OurReader::Location current; // rcx
  __int64 v4; // r9
  bool v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  Json::OurReader::Char v8; // dl

  current = this->current_;
  v4 = patternLength;
  v5 = 0;
  if ( this->end_ - current < patternLength )
    return v5;
  v6 = patternLength;
  v7 = patternLength - (unsigned __int64)(unsigned int)patternLength;
  do
  {
    if ( v6 == v7 )
    {
      v5 = 1;
      this->current_ = &current[v4];
      return v5;
    }
    v8 = current[--v6];
  }
  while ( v8 == pattern[v6] );
  return 0;
};

// Line 1291: range 00000000152DA9C0-00000000152DAA81
bool __fastcall Json::OurReader::readComment(Json::OurReader *const this)
{
  Json::OurReader::Location current; // r12
  Json::OurReader::Char NextChar; // al
  Json::OurReader::Char v4; // bl
  bool result; // al
  bool collectComments; // r13
  const Json::OurReader::Char *v7; // r12
  const Json::OurReader::Char *lastValueEnd; // rdi
  Json::CommentPlacement v9; // ecx
  bool cStyleWithEmbeddedNewline; // [rsp+Fh] [rbp-29h] BYREF

  current = this->current_;
  NextChar = Json::OurReader::getNextChar(this);
  cStyleWithEmbeddedNewline = 0;
  v4 = NextChar;
  if ( NextChar == 42 )
  {
    result = Json::OurReader::readCStyleComment(this, &cStyleWithEmbeddedNewline);
  }
  else
  {
    if ( NextChar != 47 )
      return 0;
    result = Json::OurReader::readCppStyleComment(this);
  }
  if ( !result )
    return 0;
  collectComments = this->collectComments_;
  if ( collectComments )
  {
    v7 = current - 1;
    if ( this->lastValueHasAComment_
      || (lastValueEnd = this->lastValueEnd_) == 0LL
      || Json::OurReader::containsNewLine(lastValueEnd, v7)
      || v4 != 47 && cStyleWithEmbeddedNewline )
    {
      v9 = commentBefore;
    }
    else
    {
      this->lastValueHasAComment_ = 1;
      v9 = commentAfterOnSameLine;
    }
    Json::OurReader::addComment(this, v7, this->current_, v9);
    return collectComments;
  }
  return result;
};

// Line 1346: range 00000000152DA4A0-00000000152DA65F
void __fastcall Json::OurReader::addComment(
        Json::OurReader *this,
        const char *a2,
        const char *a3,
        Json::CommentPlacement a4)
{
  Json::Value *lastValue; // r13
  void *v6; // rbp
  void *v7; // r12
  __int64 *v8; // rax
  __int64 *v9; // rdi
  size_t v10; // [rsp+8h] [rbp-70h] BYREF
  void *src; // [rsp+10h] [rbp-68h] BYREF
  size_t n; // [rsp+18h] [rbp-60h]
  char v13; // [rsp+20h] [rbp-58h] BYREF
  void *v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( !this->collectComments_ )
    __assert_fail(
      "collectComments_",
      "src/lib_json/json_reader.cpp",
      0x543u,
      "void Json::OurReader::addComment(Json::OurReader::Location, Json::OurReader::Location, Json::CommentPlacement)");
  Json::OurReader::normalizeEOL[abi:cxx11](&src, a2, a3);
  if ( a4 != commentAfterOnSameLine )
  {
    std::string::_M_append(&this->commentsBefore_, (const char *)src, n);
    goto LABEL_12;
  }
  lastValue = this->lastValue_;
  if ( !lastValue )
    __assert_fail(
      "lastValue_ != nullptr",
      "src/lib_json/json_reader.cpp",
      0x546u,
      "void Json::OurReader::addComment(Json::OurReader::Location, Json::OurReader::Location, Json::CommentPlacement)");
  v6 = src;
  v7 = (void *)n;
  v14[0] = v15;
  if ( (char *)src + n && !src )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v10 = n;
  if ( n > 0xF )
  {
    v14[0] = (void *)std::string::_M_create(v14, &v10, 0LL);
    v9 = (__int64 *)v14[0];
    v15[0] = v10;
  }
  else
  {
    if ( n == 1 )
    {
      LOBYTE(v15[0]) = *(_BYTE *)src;
      v8 = v15;
      goto LABEL_9;
    }
    if ( !n )
    {
      v8 = v15;
      goto LABEL_9;
    }
    v9 = v15;
  }
  memcpy(v9, v6, (size_t)v7);
  v7 = (void *)v10;
  v8 = (__int64 *)v14[0];
LABEL_9:
  v14[1] = v7;
  *((_BYTE *)v7 + (_QWORD)v8) = 0;
  Json::Value::setComment(lastValue, v14, 1LL);
  if ( v14[0] != v15 )
    operator delete(v14[0]);
LABEL_12:
  if ( src != &v13 )
    operator delete(src);
};

// Line 1357: range 00000000152DA800-00000000152DA875
bool __fastcall Json::OurReader::readCStyleComment(Json::OurReader *const this, bool *containsNewLineResult)
{
  Json::OurReader::Location current; // rdx
  Json::OurReader::Char NextChar; // al

  *containsNewLineResult = 0;
  current = this->current_;
  do
  {
LABEL_2:
    if ( this->end_ <= current + 1 )
      break;
    while ( 1 )
    {
      NextChar = Json::OurReader::getNextChar(this);
      current = this->current_;
      if ( NextChar == 42 )
        break;
      if ( NextChar != 10 )
        goto LABEL_2;
      *containsNewLineResult = 1;
      if ( this->end_ <= current + 1 )
        return Json::OurReader::getNextChar(this) == 47;
    }
  }
  while ( *current != 47 );
  return Json::OurReader::getNextChar(this) == 47;
};

// Line 1371: range 00000000152DA880-00000000152DA8DD
bool __fastcall Json::OurReader::readCppStyleComment(Json::OurReader *const this)
{
  Json::OurReader::Char NextChar; // al
  const Json::OurReader::Char *current; // rax

  while ( this->current_ != this->end_ )
  {
    NextChar = Json::OurReader::getNextChar(this);
    if ( NextChar == 10 )
      break;
    if ( NextChar == 13 )
    {
      current = this->current_;
      if ( current != this->end_ && *current == 10 )
        Json::OurReader::getNextChar(this);
      return 1;
    }
  }
  return 1;
};

// Line 1387: range 00000000152DA670-00000000152DA78E
bool __fastcall Json::OurReader::readNumber(Json::OurReader *const this, bool checkInf)
{
  Json::OurReader::Location current; // rax
  Json::OurReader::Location end; // rsi
  Json::OurReader::Char v5; // dl
  const Json::OurReader::Char *v6; // rcx
  Json::OurReader::Char v7; // cl
  const Json::OurReader::Char *v8; // rdx
  char v9; // al

  current = this->current_;
  end = this->end_;
  if ( checkInf )
  {
    if ( current == end )
    {
LABEL_7:
      v5 = 0;
      goto LABEL_8;
    }
    if ( *current == 73 )
    {
      this->current_ = current + 1;
      return 0;
    }
  }
  this->current_ = current;
  if ( end <= current )
    goto LABEL_7;
  while ( 1 )
  {
    v5 = *current;
    v6 = current + 1;
    if ( (unsigned __int8)(*current - 48) > 9u )
      break;
    ++current;
    this->current_ = v6;
    if ( end <= v6 )
      goto LABEL_7;
  }
  if ( v5 != 46 )
  {
    ++current;
    goto LABEL_8;
  }
  this->current_ = v6;
  if ( v6 >= end )
    return 1;
  v5 = *v6;
  current += 2;
  if ( (unsigned __int8)(*v6 - 48) > 9u )
  {
LABEL_8:
    if ( (v5 & 0xDF) == 69 )
    {
      this->current_ = current;
      if ( current < end )
      {
        v7 = *current;
        v8 = current + 1;
        if ( ((*current - 43) & 0xFD) != 0 )
          goto LABEL_13;
        this->current_ = v8;
        if ( v8 < end )
        {
          v7 = current[1];
          v8 = current + 2;
LABEL_13:
          if ( (unsigned __int8)(v7 - 48) <= 9u )
          {
            do
            {
              this->current_ = v8;
              if ( v8 >= end )
                break;
              v9 = *v8++;
            }
            while ( (unsigned __int8)(v9 - 48) <= 9u );
          }
        }
      }
    }
    return 1;
  }
  while ( 1 )
  {
    this->current_ = current;
    if ( current == end )
      return 1;
    v5 = *current++;
    if ( (unsigned __int8)(v5 - 48) > 9u )
      goto LABEL_8;
  }
};

// Line 1415: range 00000000152DA8E0-00000000152DA949
bool __fastcall Json::OurReader::readString(Json::OurReader *const this)
{
  Json::OurReader::Char NextChar; // al

  if ( this->end_ == this->current_ )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      NextChar = Json::OurReader::getNextChar(this);
      if ( NextChar != 92 )
        break;
      Json::OurReader::getNextChar(this);
      if ( this->current_ == this->end_ )
        return 0;
    }
    if ( NextChar == 34 )
      break;
    if ( this->current_ == this->end_ )
      return 0;
  }
  return 1;
};

// Line 1427: range 00000000152DA950-00000000152DA9B9
bool __fastcall Json::OurReader::readStringSingleQuote(Json::OurReader *const this)
{
  Json::OurReader::Char NextChar; // al

  if ( this->end_ == this->current_ )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      NextChar = Json::OurReader::getNextChar(this);
      if ( NextChar != 92 )
        break;
      Json::OurReader::getNextChar(this);
      if ( this->current_ == this->end_ )
        return 0;
    }
    if ( NextChar == 39 )
      break;
    if ( this->current_ == this->end_ )
      return 0;
  }
  return 1;
};

// Line 1437: range 00000000152E2260-00000000152E2AFC
__int64 __fastcall Json::OurReader::readObject(Json::OurReader *this, Json::OurReader::Token *a2)
{
  Json::Value *v3; // rax
  Json::Value *v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // r12d
  unsigned int v7; // eax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::size_type M_string_length; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  Json::Value *v11; // rax
  Json::Value *v12; // rax
  Json::Value_0 *v13; // rax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer M_last; // rcx
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer M_cur; // rdx
  char Value; // al
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer v17; // rdi
  char v18; // r14
  bool v19; // al
  int v20; // edx
  unsigned int v22; // eax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer M_node; // rdx
  unsigned __int64 v24; // rax
  Json::Value::ValueHolder v25; // rax
  __m128i si128; // xmm0
  unsigned int v27; // eax
  std::string::pointer v28; // rdi
  Json::Value::ValueHolder v29; // rax
  __m128i v30; // xmm0
  Json::Value::ValueHolder v31; // rax
  __m128i v32; // xmm0
  unsigned int v33; // eax
  __int64 v34; // rax
  Json::Value_0 *v35; // rdi
  unsigned int v36; // eax
  Json::Value::ValueHolder v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // [rsp+18h] [rbp-120h] BYREF
  Json::OurReader::Token token; // [rsp+20h] [rbp-118h] BYREF
  Json::OurReader::Token v41; // [rsp+40h] [rbp-F8h] BYREF
  Json::String key; // [rsp+60h] [rbp-D8h] BYREF
  Json::String src; // [rsp+80h] [rbp-B8h] BYREF
  Json::Value_0 other; // [rsp+A0h] [rbp-98h] BYREF
  Json::Value_0 v45; // [rsp+D0h] [rbp-68h] BYREF

  key._anon_0._M_local_buf[0] = 0;
  key._M_dataplus._M_p = key._anon_0._M_local_buf;
  key._M_string_length = 0LL;
  Json::Value::Value(&other, 7LL);
  v3 = Json::OurReader::currentValue(this);
  Json::Value::swapPayload((Json::Value_0 *const)v3, &other);
  v4 = Json::OurReader::currentValue(this);
  Json::Value::setOffsetStart((Json::Value_0 *const)v4, a2->start_ - this->begin_);
  while ( 1 )
  {
LABEL_2:
    LOBYTE(v5) = Json::OurReader::readToken(this, &token);
    v6 = v5;
    if ( !(_BYTE)v5 )
      goto LABEL_55;
    while ( token.type_ == tokenComment_0 )
    {
      if ( !(_BYTE)v6 )
        goto LABEL_55;
      LOBYTE(v7) = Json::OurReader::readToken(this, &token);
      v6 = v7;
    }
    if ( !(_BYTE)v6 )
    {
LABEL_55:
      src._M_dataplus._M_p = (std::string::pointer)33;
      v45.value_.int_ = (Json::Value::LargestInt)&v45.comments_;
      v25.int_ = std::string::_M_create(&v45, &src, 0LL);
      v45.value_ = v25;
      v45.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)src._M_dataplus._M_p;
      *(__m128i *)v25.int_ = _mm_load_si128((const __m128i *)&xmmword_1B234460);
      si128 = _mm_load_si128((const __m128i *)&xmmword_1B234470);
      *(_BYTE *)(v25.int_ + 32) = 101;
      *(__m128i *)(v25.int_ + 16) = si128;
      *(_QWORD *)&v45.bits_ = src._M_dataplus._M_p;
      src._M_dataplus._M_p[v45.value_.int_] = 0;
      LOBYTE(v27) = Json::OurReader::addErrorAndRecover(this, (const Json::String *)&v45, &token, tokenObjectEnd_0);
      goto LABEL_56;
    }
    if ( token.type_ == tokenObjectEnd_0 && (!key._M_string_length || this->features_.allowTrailingCommas_) )
      goto LABEL_38;
    key._M_string_length = 0LL;
    *key._M_dataplus._M_p = 0;
    if ( token.type_ != tokenString_0 )
    {
      if ( token.type_ != tokenNumber_0 || !this->features_.allowNumericKeys_ )
        goto LABEL_55;
      Json::Value::Value(&v45, 0LL);
      if ( !(unsigned __int8)Json::OurReader::decodeNumber(this, &token, (Json::Value *)&v45) )
      {
        LOBYTE(v33) = Json::OurReader::recoverFromError(this, tokenObjectEnd_0);
        v6 = v33;
        Json::Value::~Value(&v45);
        goto LABEL_38;
      }
      Json::Value::asString[abi:cxx11](&src, &v45);
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p;
      M_string_length = src._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p == &src._anon_0 )
      {
        if ( src._M_string_length )
        {
          if ( src._M_string_length == 1 )
            *key._M_dataplus._M_p = src._anon_0._M_local_buf[0];
          else
            memcpy(key._M_dataplus._M_p, &src._anon_0, src._M_string_length);
          M_string_length = src._M_string_length;
          M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p;
        }
        key._M_string_length = M_string_length;
        M_p->_M_local_buf[M_string_length] = 0;
        M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p;
        goto LABEL_17;
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p == &key._anon_0 )
      {
        key._M_dataplus._M_p = src._M_dataplus._M_p;
        *(__m128i *)&key._M_string_length = _mm_unpacklo_epi64(
                                              (__m128i)src._M_string_length,
                                              (__m128i)src._anon_0._M_allocated_capacity);
      }
      else
      {
        M_allocated_capacity = key._anon_0._M_allocated_capacity;
        key._M_dataplus._M_p = src._M_dataplus._M_p;
        *(__m128i *)&key._M_string_length = _mm_unpacklo_epi64(
                                              (__m128i)src._M_string_length,
                                              (__m128i)src._anon_0._M_allocated_capacity);
        if ( M_p )
        {
          src._M_dataplus._M_p = (std::string::pointer)M_p;
          src._anon_0._M_allocated_capacity = M_allocated_capacity;
LABEL_17:
          src._M_string_length = 0LL;
          M_p->_M_local_buf[0] = 0;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
            operator delete(src._M_dataplus._M_p);
          Json::Value::~Value(&v45);
          goto LABEL_20;
        }
      }
      src._M_dataplus._M_p = src._anon_0._M_local_buf;
      M_p = &src._anon_0;
      goto LABEL_17;
    }
    if ( !(unsigned __int8)Json::OurReader::decodeString(this, &token, &key) )
      goto LABEL_50;
LABEL_20:
    if ( key._M_string_length > 0x3FFFFFFF )
    {
      src._M_dataplus._M_p = (std::string::pointer)17;
      v45.value_.int_ = (Json::Value::LargestInt)&v45.comments_;
      v37.int_ = std::string::_M_create(&v45, &src, 0LL);
      v38 = _mm_load_si128((const __m128i *)&xmmword_1B2344C0);
      v45.value_ = v37;
      v45.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)src._M_dataplus._M_p;
      *(_BYTE *)(v37.int_ + 16) = 48;
      *(__m128i *)v37.int_ = v38;
      *(_QWORD *)&v45.bits_ = src._M_dataplus._M_p;
      src._M_dataplus._M_p[v45.value_.int_] = 0;
      Json::throwRuntimeError((const Json::String *)&v45);
    }
    if ( this->features_.rejectDupKeys_ )
    {
      v11 = Json::OurReader::currentValue(this);
      if ( Json::Value::isMember((const Json::Value_0 *const)v11, &key) )
        break;
    }
    if ( !Json::OurReader::readToken(this, &v41) || v41.type_ != tokenMemberSeparator_0 )
    {
      src._M_dataplus._M_p = (std::string::pointer)36;
      v45.value_.int_ = (Json::Value::LargestInt)&v45.comments_;
      v29.int_ = std::string::_M_create(&v45, &src, 0LL);
      v45.value_ = v29;
      v45.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)src._M_dataplus._M_p;
      *(__m128i *)v29.int_ = _mm_load_si128((const __m128i *)&xmmword_1B234430);
      v30 = _mm_load_si128((const __m128i *)&xmmword_1B234440);
      *(_DWORD *)(v29.int_ + 32) = 1701667182;
      *(__m128i *)(v29.int_ + 16) = v30;
      *(_QWORD *)&v45.bits_ = src._M_dataplus._M_p;
      src._M_dataplus._M_p[v45.value_.int_] = 0;
      LOBYTE(v27) = Json::OurReader::addErrorAndRecover(this, (const Json::String *)&v45, &v41, tokenObjectEnd_0);
LABEL_56:
      v28 = (std::string::pointer)v45.value_.int_;
      v6 = v27;
      if ( (Json::Value::Comments *)v45.value_.int_ == &v45.comments_ )
        goto LABEL_38;
      goto LABEL_57;
    }
    v12 = Json::OurReader::currentValue(this);
    v13 = Json::Value::operator[]((Json::Value_0 *const)v12, &key);
    M_last = this->nodes_.c._M_impl._M_finish._M_last;
    M_cur = this->nodes_.c._M_impl._M_finish._M_cur;
    v45.value_.int_ = (Json::Value::LargestInt)v13;
    if ( M_cur == M_last - 1 )
    {
      std::deque<Json::Value *>::_M_push_back_aux<Json::Value *>(&this->nodes_.c, (Json::Value **)&v45, M_cur);
    }
    else
    {
      *M_cur = (Json::Value *)v13;
      this->nodes_.c._M_impl._M_finish._M_cur = M_cur + 1;
    }
    Value = Json::OurReader::readValue(this);
    v17 = this->nodes_.c._M_impl._M_finish._M_cur;
    v18 = Value;
    if ( v17 == this->nodes_.c._M_impl._M_finish._M_first )
    {
      operator delete(v17);
      M_node = this->nodes_.c._M_impl._M_finish._M_node;
      v24 = (unsigned __int64)*(M_node - 1);
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_cur = _mm_unpacklo_epi64((__m128i)(v24 + 504), (__m128i)v24);
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                                (__m128i)(v24 + 512),
                                                                (__m128i)(unsigned __int64)(M_node - 1));
    }
    else
    {
      this->nodes_.c._M_impl._M_finish._M_cur = v17 - 1;
    }
    if ( !v18 )
    {
LABEL_50:
      LOBYTE(v22) = Json::OurReader::recoverFromError(this, tokenObjectEnd_0);
      v6 = v22;
      goto LABEL_38;
    }
    v19 = Json::OurReader::readToken(this, (Json::OurReader::Token *)&src);
    if ( !v19
      || (v20 = (int)src._M_dataplus._M_p, ((__int64)src._M_dataplus._M_p & 0xFFFFFFFD) != 13)
      && LODWORD(src._M_dataplus._M_p) != 2 )
    {
      v39 = 40LL;
      v45.value_.int_ = (Json::Value::LargestInt)&v45.comments_;
      v31.int_ = std::string::_M_create(&v45, &v39, 0LL);
      v45.value_ = v31;
      v45.comments_.ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)v39;
      *(__m128i *)v31.int_ = _mm_load_si128((const __m128i *)&xmmword_1B2343F0);
      v32 = _mm_load_si128((const __m128i *)&xmmword_1B234450);
      *(_QWORD *)(v31.int_ + 32) = 0x6E6F69746172616CLL;
      *(__m128i *)(v31.int_ + 16) = v32;
      *(_QWORD *)&v45.bits_ = v39;
      *(_BYTE *)(v45.value_.int_ + v39) = 0;
      LOBYTE(v27) = Json::OurReader::addErrorAndRecover(
                      this,
                      (const Json::String *)&v45,
                      (Json::OurReader::Token *)&src,
                      tokenObjectEnd_0);
      goto LABEL_56;
    }
    while ( v20 == 15 )
    {
      if ( !v19 )
        goto LABEL_2;
      v19 = Json::OurReader::readToken(this, (Json::OurReader::Token *)&src);
      v20 = (int)src._M_dataplus._M_p;
    }
    if ( v20 == 2 )
      goto LABEL_38;
  }
  *(_QWORD *)&v45.bits_ = 0LL;
  v45.value_.int_ = (Json::Value::LargestInt)&v45.comments_;
  LOBYTE(v45.comments_.ptr_._M_t._M_t._M_head_impl) = 0;
  std::string::reserve(&v45, key._M_string_length + 16);
  if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)&v45.bits_) <= 0xF )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v45, "Duplicate key: '", 16LL);
  std::string::_M_append(&v45, key._M_dataplus._M_p, key._M_string_length);
  if ( *(_QWORD *)&v45.bits_ == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  v34 = std::string::_M_append(&v45, "'", 1LL);
  src._M_dataplus._M_p = src._anon_0._M_local_buf;
  if ( *(_QWORD *)v34 == v34 + 16 )
  {
    src._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v34 + 16));
  }
  else
  {
    src._M_dataplus._M_p = *(std::string::pointer *)v34;
    src._anon_0._M_allocated_capacity = *(_QWORD *)(v34 + 16);
  }
  src._M_string_length = *(_QWORD *)(v34 + 8);
  *(_QWORD *)v34 = v34 + 16;
  *(_BYTE *)(v34 + 16) = 0;
  v35 = (Json::Value_0 *)v45.value_.int_;
  *(_QWORD *)(v34 + 8) = 0LL;
  if ( v35 != (Json::Value_0 *)&v45.comments_ )
    operator delete(v35);
  LOBYTE(v36) = Json::OurReader::addErrorAndRecover(this, &src, &token, tokenObjectEnd_0);
  v28 = src._M_dataplus._M_p;
  v6 = v36;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
LABEL_57:
    operator delete(v28);
LABEL_38:
  Json::Value::~Value(&other);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p != &key._anon_0 )
    operator delete(key._M_dataplus._M_p);
  return v6;
};

// Line 1501: range 00000000152E1900-00000000152E1BA6
__int64 __fastcall Json::OurReader::readArray(Json::OurReader *this, Json::OurReader::Token *a2)
{
  Json::Value *v3; // rax
  Json::Value *v4; // rax
  int i; // r12d
  const Json::OurReader::Char *current; // rax
  Json::Value *v7; // rax
  char *v8; // rax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer M_last; // rcx
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer M_cur; // rdx
  unsigned int Value; // eax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer v12; // rdi
  unsigned int v13; // r13d
  bool v14; // al
  __int64 v15; // rax
  __m128i si128; // xmm0
  unsigned int v17; // eax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer M_node; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  std::string::size_type v22; // [rsp+8h] [rbp-B0h] BYREF
  Json::OurReader::Token token; // [rsp+10h] [rbp-A8h] BYREF
  Json::String message; // [rsp+30h] [rbp-88h] BYREF
  Json::Value_0 other; // [rsp+50h] [rbp-68h] BYREF

  Json::Value::Value(&other, 6LL);
  v3 = Json::OurReader::currentValue(this);
  Json::Value::swapPayload((Json::Value_0 *const)v3, &other);
  v4 = Json::OurReader::currentValue(this);
  Json::Value::setOffsetStart((Json::Value_0 *const)v4, a2->start_ - this->begin_);
  for ( i = 0; ; ++i )
  {
    Json::OurReader::skipSpaces(this);
    current = this->current_;
    if ( current != this->end_
      && *current == 93
      && (!i || this->features_.allowTrailingCommas_ && !this->features_.allowDroppedNullPlaceholders_) )
    {
      Json::OurReader::readToken(this, (Json::OurReader::Token *)&message);
      v13 = 1;
      goto LABEL_18;
    }
    v7 = Json::OurReader::currentValue(this);
    v8 = (char *)Json::Value::operator[](v7);
    M_last = this->nodes_.c._M_impl._M_finish._M_last;
    M_cur = this->nodes_.c._M_impl._M_finish._M_cur;
    message._M_dataplus._M_p = v8;
    if ( M_cur == M_last - 1 )
    {
      std::deque<Json::Value *>::_M_push_back_aux<Json::Value *>(&this->nodes_.c, (Json::Value **)&message, M_cur);
    }
    else
    {
      *M_cur = (Json::Value *)v8;
      this->nodes_.c._M_impl._M_finish._M_cur = M_cur + 1;
    }
    Value = Json::OurReader::readValue(this);
    v12 = this->nodes_.c._M_impl._M_finish._M_cur;
    v13 = Value;
    if ( v12 == this->nodes_.c._M_impl._M_finish._M_first )
    {
      operator delete(v12);
      M_node = this->nodes_.c._M_impl._M_finish._M_node;
      v20 = (unsigned __int64)*(M_node - 1);
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_cur = _mm_unpacklo_epi64((__m128i)(v20 + 504), (__m128i)v20);
      *(__m128i *)&this->nodes_.c._M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                                (__m128i)(v20 + 512),
                                                                (__m128i)(unsigned __int64)(M_node - 1));
    }
    else
    {
      this->nodes_.c._M_impl._M_finish._M_cur = v12 - 1;
    }
    if ( !(_BYTE)v13 )
      break;
    while ( 1 )
    {
      v14 = Json::OurReader::readToken(this, &token);
      if ( token.type_ != tokenComment_0 )
        break;
      if ( !v14 )
        goto LABEL_16;
    }
    if ( token.type_ != tokenArrayEnd_0 && token.type_ != tokenArraySeparator_0 || !v14 )
    {
LABEL_16:
      v22 = 39LL;
      message._M_dataplus._M_p = message._anon_0._M_local_buf;
      v15 = std::string::_M_create(&message, &v22, 0LL);
      message._M_dataplus._M_p = (std::string::pointer)v15;
      message._anon_0._M_allocated_capacity = v22;
      *(__m128i *)v15 = _mm_load_si128((const __m128i *)&xmmword_1B2343F0);
      si128 = _mm_load_si128((const __m128i *)&xmmword_1B234400);
      *(_DWORD *)(v15 + 32) = 1952543329;
      *(_WORD *)(v15 + 36) = 28521;
      *(_BYTE *)(v15 + 38) = 110;
      *(__m128i *)(v15 + 16) = si128;
      message._M_string_length = v22;
      message._M_dataplus._M_p[v22] = 0;
      LOBYTE(v17) = Json::OurReader::addErrorAndRecover(this, &message, &token, tokenArrayEnd_0);
      v13 = v17;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
        operator delete(message._M_dataplus._M_p);
      goto LABEL_18;
    }
    if ( token.type_ == tokenArrayEnd_0 )
      goto LABEL_18;
  }
  LOBYTE(v21) = Json::OurReader::recoverFromError(this, tokenArrayEnd_0);
  v13 = v21;
LABEL_18:
  Json::Value::~Value(&other);
  return v13;
};

// Line 1543: range 00000000152E0400-00000000152E049E
__int64 __fastcall Json::OurReader::decodeNumber(Json::OurReader *this, Json::OurReader::Token *a2)
{
  unsigned int v2; // r12d
  Json::Value *v4; // rax
  Json::Value *v5; // rax
  Json::Value *v6; // rax
  Json::Value v7[2]; // [rsp+0h] [rbp-58h] BYREF

  Json::Value::Value(v7, 0LL);
  v2 = Json::OurReader::decodeNumber(this, a2, v7);
  if ( (_BYTE)v2 )
  {
    v4 = Json::OurReader::currentValue(this);
    Json::Value::swapPayload((Json::Value_0 *const)v4, (Json::Value_0 *)v7);
    v5 = Json::OurReader::currentValue(this);
    Json::Value::setOffsetStart((Json::Value_0 *const)v5, a2->start_ - this->begin_);
    v6 = Json::OurReader::currentValue(this);
    Json::Value::setOffsetLimit((Json::Value_0 *const)v6, a2->end_ - this->begin_);
  }
  Json::Value::~Value((Json::Value_0 *const)v7);
  return v2;
};

// Line 1544: range 000000000C73B61E-000000000C73B629
void __fastcall __noreturn Json::OurReader::decodeNumber()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0 *v1; // r13

  Json::Value::~Value(v1);
  _Unwind_Resume(v0);
};

// Line 1553: range 00000000152E0250-00000000152E03EE
__int64 __fastcall Json::OurReader::decodeNumber(Json::OurReader *this, Json::OurReader::Token *a2, Json::Value_0 *a3)
{
  Json::OurReader::Location start; // rdx
  Json::OurReader::Char v6; // r11
  Json::OurReader::Location end; // r8
  unsigned __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // eax
  char *v11; // rdx
  unsigned __int64 v12; // rsi
  signed int v13; // eax
  __int64 v14; // r8
  __int64 v16; // rsi
  Json::Value v17; // [rsp+0h] [rbp-48h] BYREF

  start = a2->start_;
  v6 = *start;
  if ( *start != 45 )
  {
    end = a2->end_;
    if ( start < end )
    {
      v8 = 0x1999999999999999LL;
      v9 = 5;
      goto LABEL_4;
    }
    v14 = 0LL;
LABEL_11:
    Json::Value::Value(&v17, v14);
    Json::Value::operator=(a3, (Json::Value_0 *)&v17);
LABEL_12:
    Json::Value::~Value((Json::Value_0 *const)&v17);
    return 1LL;
  }
  end = a2->end_;
  if ( ++start >= end )
  {
    v16 = 0LL;
LABEL_20:
    Json::Value::Value(&v17, v16);
    Json::Value::operator=(a3, (Json::Value_0 *)&v17);
    goto LABEL_12;
  }
  v8 = 0xCCCCCCCCCCCCCCCLL;
  v9 = 8;
LABEL_4:
  v10 = *start;
  v11 = (char *)(start + 1);
  v12 = 0LL;
  if ( (unsigned __int8)(v10 - 48) <= 9u )
  {
    while ( 1 )
    {
      v13 = v10 - 48;
      if ( v8 <= v12 )
        break;
      v12 = v13 + 10 * v12;
      if ( v11 == end )
        goto LABEL_9;
      v10 = *v11++;
      if ( (unsigned __int8)(v10 - 48) > 9u )
        return Json::OurReader::decodeDouble(this, a2, (Json::Value *)a3);
    }
    if ( v11 != end || v13 > v9 || v8 < v12 )
      return Json::OurReader::decodeDouble(this, a2, (Json::Value *)a3);
    v12 = v13 + 10 * v12;
LABEL_9:
    if ( v6 == 45 )
    {
      v16 = -10LL * (v12 / 0xA) - v12 % 0xA;
      goto LABEL_20;
    }
    v14 = v12;
    if ( (v12 & 0x8000000000000000LL) == 0LL )
      goto LABEL_11;
    Json::Value::Value(&v17, v12);
    Json::Value::operator=(a3, (Json::Value_0 *)&v17);
    goto LABEL_12;
  }
  return Json::OurReader::decodeDouble(this, a2, (Json::Value *)a3);
};

// Line 1625: range 000000000C73B5EE-000000000C73B5F9
void __fastcall __noreturn Json::OurReader::decodeNumber()
{
  Json::Value_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::~Value(v0);
  _Unwind_Resume(v1);
};

// Line 1633: range 00000000152E04B0-00000000152E054E
__int64 __fastcall Json::OurReader::decodeDouble(Json::OurReader *this, Json::OurReader::Token *a2)
{
  unsigned int v2; // r12d
  Json::Value *v4; // rax
  Json::Value *v5; // rax
  Json::Value *v6; // rax
  Json::Value v7[2]; // [rsp+0h] [rbp-58h] BYREF

  Json::Value::Value(v7, 0LL);
  v2 = Json::OurReader::decodeDouble(this, a2, v7);
  if ( (_BYTE)v2 )
  {
    v4 = Json::OurReader::currentValue(this);
    Json::Value::swapPayload((Json::Value_0 *const)v4, (Json::Value_0 *)v7);
    v5 = Json::OurReader::currentValue(this);
    Json::Value::setOffsetStart((Json::Value_0 *const)v5, a2->start_ - this->begin_);
    v6 = Json::OurReader::currentValue(this);
    Json::Value::setOffsetLimit((Json::Value_0 *const)v6, a2->end_ - this->begin_);
  }
  Json::Value::~Value((Json::Value_0 *const)v7);
  return v2;
};

// Line 1634: range 000000000C73B62E-000000000C73B639
void __fastcall __noreturn Json::OurReader::decodeDouble()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0 *v1; // r13

  Json::Value::~Value(v1);
  _Unwind_Resume(v0);
};

// Line 1643: range 00000000152DFAD0-00000000152E0240
__int64 __fastcall Json::OurReader::decodeDouble(Json::OurReader *this, Json::OurReader::Token *a2, Json::Value_0 *a3)
{
  Json::OurReader::Location start; // rbp
  Json::OurReader::Location end; // r12
  size_t v6; // r12
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  void *v10; // r15
  void *v11; // r12
  __int64 *v12; // rax
  _QWORD *v13; // rax
  Json::OurReader::Location v14; // r14
  Json::OurReader::Location v15; // r12
  void *v16; // r12
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r13d
  __int64 v22; // rax
  __int64 *v24; // rdi
  __int64 *v25; // rdi
  __int64 *v26; // rdi
  __int64 v27; // [rsp+20h] [rbp-278h]
  double v29; // [rsp+48h] [rbp-250h] BYREF
  void *src; // [rsp+50h] [rbp-248h] BYREF
  size_t n; // [rsp+58h] [rbp-240h]
  __int64 v32[2]; // [rsp+60h] [rbp-238h] BYREF
  void *v33[2]; // [rsp+70h] [rbp-228h] BYREF
  __int64 v34[2]; // [rsp+80h] [rbp-218h] BYREF
  void *v35; // [rsp+90h] [rbp-208h] BYREF
  __int64 v36; // [rsp+98h] [rbp-200h]
  __m128i v37; // [rsp+A0h] [rbp-1F8h] BYREF
  Json::Value_0 other; // [rsp+B0h] [rbp-1E8h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-1B8h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-1B0h]
  __int64 v41[7]; // [rsp+F0h] [rbp-1A8h] BYREF
  std::locale v42; // [rsp+128h] [rbp-170h] BYREF
  int v43; // [rsp+130h] [rbp-168h]
  void *v44[2]; // [rsp+138h] [rbp-160h] BYREF
  __int64 v45[2]; // [rsp+148h] [rbp-150h] BYREF
  __int64 v46[28]; // [rsp+158h] [rbp-140h] BYREF
  __int16 v47; // [rsp+238h] [rbp-60h]
  __int128 v48; // [rsp+240h] [rbp-58h]
  __int128 v49; // [rsp+250h] [rbp-48h]

  start = a2->start_;
  end = a2->end_;
  v29 = 0.0;
  src = v32;
  if ( !start && end )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v6 = end - start;
  v39 = v6;
  if ( v6 > 0xF )
  {
    src = (void *)std::string::_M_create(&src, &v39, 0LL);
    v24 = (__int64 *)src;
    v32[0] = v39;
    goto LABEL_39;
  }
  if ( v6 != 1 )
  {
    if ( !v6 )
    {
      v7 = v32;
      goto LABEL_6;
    }
    v24 = v32;
LABEL_39:
    memcpy(v24, start, v6);
    v6 = v39;
    v7 = (__int64 *)src;
    goto LABEL_6;
  }
  LOBYTE(v32[0]) = *start;
  v7 = v32;
LABEL_6:
  n = v6;
  *((_BYTE *)v7 + v6) = 0;
  std::ios_base::ios_base((std::ios_base *)v46);
  v48 = 0LL;
  v49 = 0LL;
  v46[27] = 0LL;
  v46[0] = (__int64)&`vtable for'std::ios + 16;
  v47 = 0;
  v8 = `VTT for'std::istringstream[1];
  v27 = `VTT for'std::istringstream[2];
  v9 = *(_QWORD *)(v8 - 24);
  v39 = v8;
  *(__int64 *)((char *)&v39 + v9) = v27;
  v40 = 0LL;
  std::ios::init((char *)&v39 + *(_QWORD *)(v8 - 24), 0LL);
  memset(&v41[1], 0, 48);
  v39 = (__int64)&`vtable for'std::istringstream + 24;
  v46[0] = (__int64)&`vtable for'std::istringstream + 64;
  v41[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v42);
  v10 = src;
  v11 = (void *)n;
  v43 = 0;
  v41[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v44[0] = v45;
  if ( (char *)src + n && !src )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  other.value_.int_ = n;
  if ( n > 0xF )
  {
    v44[0] = (void *)std::string::_M_create(v44, &other, 0LL);
    v25 = (__int64 *)v44[0];
    v45[0] = other.value_.int_;
  }
  else
  {
    if ( n == 1 )
    {
      LOBYTE(v45[0]) = *(_BYTE *)src;
      v12 = v45;
      goto LABEL_11;
    }
    if ( !n )
    {
      v12 = v45;
      goto LABEL_11;
    }
    v25 = v45;
  }
  memcpy(v25, v10, (size_t)v11);
  v11 = (void *)other.value_.int_;
  v12 = (__int64 *)v44[0];
LABEL_11:
  v44[1] = v11;
  *((_BYTE *)v11 + (_QWORD)v12) = 0;
  v43 = 8;
  std::stringbuf::_M_sync(v41, v44[0], 0LL, 0LL);
  std::ios::init(v46, v41);
  v13 = (_QWORD *)std::istream::_M_extract<double>(&v39, &v29);
  if ( (*((_BYTE *)v13 + *(_QWORD *)(*v13 - 24LL) + 32) & 5) == 0 )
  {
    Json::Value::Value((Json::Value *)&other, v29);
    Json::Value::operator=(a3, &other);
    v21 = 1;
    Json::Value::~Value(&other);
    goto LABEL_31;
  }
  v14 = a2->start_;
  v15 = a2->end_;
  v33[0] = v34;
  if ( !v14 && v15 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v16 = (void *)(v15 - v14);
  other.value_.int_ = (Json::Value::LargestInt)v16;
  if ( (unsigned __int64)v16 > 0xF )
  {
    v33[0] = (void *)std::string::_M_create(v33, &other, 0LL);
    v26 = (__int64 *)v33[0];
    v34[0] = other.value_.int_;
    goto LABEL_45;
  }
  if ( v16 != (void *)1 )
  {
    if ( !v16 )
    {
      v17 = v34;
      goto LABEL_17;
    }
    v26 = v34;
LABEL_45:
    memcpy(v26, v14, (size_t)v16);
    v16 = (void *)other.value_.int_;
    v17 = (__int64 *)v33[0];
    goto LABEL_17;
  }
  LOBYTE(v34[0]) = *v14;
  v17 = v34;
LABEL_17:
  v33[1] = v16;
  *((_BYTE *)v16 + (_QWORD)v17) = 0;
  v18 = std::string::_M_replace(v33, 0LL, 0LL, "'", 1LL);
  v35 = &v37;
  if ( *(_QWORD *)v18 == v18 + 16 )
  {
    v37 = _mm_loadu_si128((const __m128i *)(v18 + 16));
  }
  else
  {
    v35 = *(void **)v18;
    v37.m128i_i64[0] = *(_QWORD *)(v18 + 16);
  }
  v19 = *(_QWORD *)(v18 + 8);
  *(_BYTE *)(v18 + 16) = 0;
  v36 = v19;
  *(_QWORD *)(v18 + 8) = 0LL;
  *(_QWORD *)v18 = v18 + 16;
  if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - v36) <= 0x11 )
    std::__throw_length_error("basic_string::append");
  v20 = std::string::_M_append(&v35, "' is not a number.", 18LL);
  other.value_.int_ = (Json::Value::LargestInt)&other.comments_;
  if ( *(_QWORD *)v20 == v20 + 16 )
  {
    *(__m128i *)&other.comments_.ptr_._M_t._M_t._M_head_impl = _mm_loadu_si128((const __m128i *)(v20 + 16));
  }
  else
  {
    other.value_.int_ = *(_QWORD *)v20;
    other.comments_.ptr_._M_t._M_t._M_head_impl = *(std::array<std::string,3> **)(v20 + 16);
  }
  *(_QWORD *)&other.bits_ = *(_QWORD *)(v20 + 8);
  *(_QWORD *)v20 = v20 + 16;
  *(_QWORD *)(v20 + 8) = 0LL;
  *(_BYTE *)(v20 + 16) = 0;
  v21 = Json::OurReader::addError(this, &other, a2, 0LL);
  if ( (Json::Value::Comments *)other.value_.int_ != &other.comments_ )
    operator delete(other.value_.string_);
  if ( v35 != &v37 )
    operator delete(v35);
  if ( v33[0] != v34 )
    operator delete(v33[0]);
LABEL_31:
  v39 = (__int64)&`vtable for'std::istringstream + 24;
  v46[0] = (__int64)&`vtable for'std::istringstream + 64;
  v41[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v44[0] != v45 )
    operator delete(v44[0]);
  v41[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v42);
  v22 = *(_QWORD *)(v8 - 24);
  v39 = v8;
  *(__int64 *)((char *)&v39 + v22) = v27;
  v40 = 0LL;
  v46[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v46);
  if ( src != v32 )
    operator delete(src);
  return v21;
};

// Line 1655: range 00000000152E1250-00000000152E1321
__int64 __fastcall Json::OurReader::decodeString(Json::OurReader *this, Json::OurReader::Token *a2)
{
  unsigned int v2; // r12d
  Json::Value *v4; // rax
  Json::Value *v5; // rax
  Json::Value *v6; // rax
  void *v7[2]; // [rsp+0h] [rbp-88h] BYREF
  char v8[16]; // [rsp+10h] [rbp-78h] BYREF
  Json::Value_0 other; // [rsp+20h] [rbp-68h] BYREF

  v8[0] = 0;
  v7[0] = v8;
  v7[1] = 0LL;
  v2 = Json::OurReader::decodeString(this, a2, v7);
  if ( (_BYTE)v2 )
  {
    Json::Value::Value(&other, v7);
    v4 = Json::OurReader::currentValue(this);
    Json::Value::swapPayload((Json::Value_0 *const)v4, &other);
    v5 = Json::OurReader::currentValue(this);
    Json::Value::setOffsetStart((Json::Value_0 *const)v5, a2->start_ - this->begin_);
    v6 = Json::OurReader::currentValue(this);
    Json::Value::setOffsetLimit((Json::Value_0 *const)v6, a2->end_ - this->begin_);
    Json::Value::~Value(&other);
  }
  if ( v7[0] != v8 )
    operator delete(v7[0]);
  return v2;
};

// Line 1666: range 00000000152E0AA0-00000000152E123F
__int64 __fastcall Json::OurReader::decodeString(Json::OurReader *a1, Json::OurReader::Token *a2, _QWORD *a3)
{
  char *v4; // rax
  const char *v5; // r12
  char v6; // r15
  char *v7; // r14
  char v8; // al
  __int64 v9; // r15
  _QWORD *v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 v15; // r14
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rdx
  unsigned int v20; // r14d
  __int64 v21; // r15
  _QWORD *v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r15
  _QWORD *v27; // rax
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // r15
  _QWORD *v32; // rax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // r15
  _QWORD *v37; // rax
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // r15
  _QWORD *v42; // rax
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // r15
  _QWORD *v47; // rax
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rax
  __m128i *v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // r15
  _QWORD *v54; // rax
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rdx
  _QWORD *v57; // rax
  __m128i *v58; // rax
  __m128i si128; // xmm0
  unsigned __int8 v60; // [rsp+0h] [rbp-78h]
  char *v61; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v62[2]; // [rsp+18h] [rbp-60h] BYREF
  void *v63; // [rsp+20h] [rbp-58h] BYREF
  __int64 v64; // [rsp+28h] [rbp-50h]
  __int64 v65[9]; // [rsp+30h] [rbp-48h] BYREF

  std::string::reserve(a3, a2->end_ - a2->start_ - 2);
  v4 = (char *)(a2->start_ + 1);
  v5 = a2->end_ - 1;
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v61 = v4 + 1;
        v6 = *v4;
        if ( *v4 == 34 )
          return 1LL;
        if ( v6 != 92 )
        {
          v15 = a3[1];
          v16 = (_QWORD *)*a3;
          v17 = v15 + 1;
          if ( (_QWORD *)*a3 == a3 + 2 )
            v18 = 15LL;
          else
            v18 = a3[2];
          if ( v17 > v18 )
          {
            std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
            v16 = (_QWORD *)*a3;
            v17 = v15 + 1;
          }
          *((_BYTE *)v16 + v15) = v6;
          v19 = (_QWORD *)*a3;
          a3[1] = v17;
          *((_BYTE *)v19 + v15 + 1) = 0;
          goto LABEL_21;
        }
        if ( v4 + 1 == v5 )
        {
          *(_QWORD *)v62 = 31LL;
          v63 = v65;
          v58 = (__m128i *)std::string::_M_create(&v63, v62, 0LL);
          si128 = _mm_load_si128((const __m128i *)&xmmword_1B2343D0);
          v63 = v58;
          v65[0] = *(_QWORD *)v62;
          qmemcpy(&v58[1], "uence in string", 15);
          *v58 = si128;
          v64 = *(_QWORD *)v62;
          *((_BYTE *)v63 + *(_QWORD *)v62) = 0;
          result = Json::OurReader::addError(a1, &v63, a2, v5);
LABEL_63:
          if ( v63 != v65 )
          {
            v60 = result;
            operator delete(v63);
            return v60;
          }
          return result;
        }
        v7 = v4 + 2;
        v61 = v4 + 2;
        v8 = v4[1];
        if ( v8 > 117 )
          goto LABEL_62;
        if ( v8 <= 91 )
          break;
        switch ( v8 )
        {
          case '\\':
            v46 = a3[1];
            v47 = (_QWORD *)*a3;
            v48 = v46 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v49 = 15LL;
            else
              v49 = a3[2];
            if ( v48 > v49 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v47 = (_QWORD *)*a3;
            }
            *((_BYTE *)v47 + v46) = 92;
            v50 = (_QWORD *)*a3;
            a3[1] = v48;
            *((_BYTE *)v50 + v46 + 1) = 0;
            break;
          case 'b':
            v41 = a3[1];
            v42 = (_QWORD *)*a3;
            v43 = v41 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v44 = 15LL;
            else
              v44 = a3[2];
            if ( v43 > v44 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v42 = (_QWORD *)*a3;
            }
            *((_BYTE *)v42 + v41) = 8;
            v45 = (_QWORD *)*a3;
            a3[1] = v43;
            *((_BYTE *)v45 + v41 + 1) = 0;
            break;
          case 'f':
            v31 = a3[1];
            v32 = (_QWORD *)*a3;
            v33 = v31 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v34 = 15LL;
            else
              v34 = a3[2];
            if ( v33 > v34 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v32 = (_QWORD *)*a3;
            }
            *((_BYTE *)v32 + v31) = 12;
            v35 = (_QWORD *)*a3;
            a3[1] = v33;
            *((_BYTE *)v35 + v31 + 1) = 0;
            break;
          case 'n':
            v26 = a3[1];
            v27 = (_QWORD *)*a3;
            v28 = v26 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v29 = 15LL;
            else
              v29 = a3[2];
            if ( v28 > v29 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v27 = (_QWORD *)*a3;
            }
            *((_BYTE *)v27 + v26) = 10;
            v30 = (_QWORD *)*a3;
            a3[1] = v28;
            *((_BYTE *)v30 + v26 + 1) = 0;
            break;
          case 'r':
            v36 = a3[1];
            v37 = (_QWORD *)*a3;
            v38 = v36 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v39 = 15LL;
            else
              v39 = a3[2];
            if ( v38 > v39 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v37 = (_QWORD *)*a3;
            }
            *((_BYTE *)v37 + v36) = 13;
            v40 = (_QWORD *)*a3;
            a3[1] = v38;
            *((_BYTE *)v40 + v36 + 1) = 0;
            break;
          case 't':
            v21 = a3[1];
            v22 = (_QWORD *)*a3;
            v23 = v21 + 1;
            if ( (_QWORD *)*a3 == a3 + 2 )
              v24 = 15LL;
            else
              v24 = a3[2];
            if ( v23 > v24 )
            {
              std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
              v22 = (_QWORD *)*a3;
            }
            *((_BYTE *)v22 + v21) = 9;
            v25 = (_QWORD *)*a3;
            a3[1] = v23;
            *((_BYTE *)v25 + v21 + 1) = 0;
            break;
          case 'u':
            result = Json::OurReader::decodeUnicodeCodePoint(a1, a2, (const char **)&v61, v5, v62);
            if ( !(_BYTE)result )
              return result;
            v20 = v62[0];
            LOBYTE(v65[0]) = 0;
            v63 = v65;
            v64 = 0LL;
            if ( v62[0] <= 0x7F )
            {
              std::string::resize(&v63, 1LL, 0LL);
              *(_BYTE *)v63 = v20;
              std::string::_M_append(a3, (const char *)v63, v64);
            }
            else if ( v62[0] <= 0x7FF )
            {
              std::string::resize(&v63, 2LL, 0LL);
              *((_BYTE *)v63 + 1) = v20 & 0x3F | 0x80;
              *(_BYTE *)v63 = (v20 >> 6) | 0xC0;
              std::string::_M_append(a3, (const char *)v63, v64);
            }
            else if ( v62[0] <= 0xFFFF )
            {
              std::string::resize(&v63, 3LL, 0LL);
              *((_BYTE *)v63 + 2) = v20 & 0x3F | 0x80;
              *((_BYTE *)v63 + 1) = (v20 >> 6) & 0x3F | 0x80;
              *(_BYTE *)v63 = (v20 >> 12) | 0xE0;
              std::string::_M_append(a3, (const char *)v63, v64);
            }
            else if ( v62[0] <= 0x10FFFF )
            {
              std::string::resize(&v63, 4LL, 0LL);
              *((_BYTE *)v63 + 3) = v20 & 0x3F | 0x80;
              *((_BYTE *)v63 + 2) = (v20 >> 6) & 0x3F | 0x80;
              *((_BYTE *)v63 + 1) = (v20 >> 12) & 0x3F | 0x80;
              *(_BYTE *)v63 = (v20 >> 18) | 0xF0;
              std::string::_M_append(a3, (const char *)v63, v64);
            }
            else
            {
              std::string::_M_append(a3, (const char *)v65, 0LL);
            }
            if ( v63 != v65 )
              operator delete(v63);
            break;
          default:
            goto LABEL_62;
        }
LABEL_21:
        v4 = v61;
        if ( v61 == v5 )
          return 1LL;
      }
      if ( v8 == 34 )
      {
        v53 = a3[1];
        v54 = (_QWORD *)*a3;
        v55 = v53 + 1;
        if ( (_QWORD *)*a3 == a3 + 2 )
          v56 = 15LL;
        else
          v56 = a3[2];
        if ( v55 > v56 )
        {
          std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
          v54 = (_QWORD *)*a3;
        }
        *((_BYTE *)v54 + v53) = 34;
        v57 = (_QWORD *)*a3;
        a3[1] = v55;
        *((_BYTE *)v57 + v53 + 1) = 0;
        goto LABEL_21;
      }
      if ( v8 != 47 )
      {
LABEL_62:
        *(_QWORD *)v62 = 29LL;
        v63 = v65;
        v51 = (__m128i *)std::string::_M_create(&v63, v62, 0LL);
        v52 = _mm_load_si128((const __m128i *)&xmmword_1B2343E0);
        v63 = v51;
        v65[0] = *(_QWORD *)v62;
        qmemcpy(&v51[1], "nce in string", 13);
        *v51 = v52;
        v64 = *(_QWORD *)v62;
        *((_BYTE *)v63 + *(_QWORD *)v62) = 0;
        result = Json::OurReader::addError(a1, &v63, a2, v7);
        goto LABEL_63;
      }
      v9 = a3[1];
      v10 = (_QWORD *)*a3;
      v11 = v9 + 1;
      if ( (_QWORD *)*a3 == a3 + 2 )
        v12 = 15LL;
      else
        v12 = a3[2];
      if ( v11 > v12 )
      {
        std::string::_M_mutate(a3, a3[1], 0LL, 0LL, 1LL);
        v10 = (_QWORD *)*a3;
      }
      *((_BYTE *)v10 + v9) = 47;
      v13 = (_QWORD *)*a3;
      a3[1] = v11;
      *((_BYTE *)v13 + v9 + 1) = 0;
      v4 = v61;
    }
    while ( v61 != v5 );
  }
  return 1LL;
};

// Line 1720: range 00000000152E0850-00000000152E0A8D
__int64 __fastcall Json::OurReader::decodeUnicodeCodePoint(
        Json::OurReader *this,
        Json::OurReader::Token *a2,
        const char **a3,
        const char *a4,
        unsigned int *a5)
{
  __int64 result; // rax
  const char *v9; // rcx
  const char *v10; // r15
  __m128i *v11; // rax
  __m128i v12; // xmm0
  __m128i *v13; // rax
  __m128i si128; // xmm0
  __m128i v15; // xmm0
  unsigned __int8 v16; // [rsp+8h] [rbp-70h]
  const char *v17; // [rsp+8h] [rbp-70h]
  __int64 v18; // [rsp+18h] [rbp-60h] BYREF
  void *v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h]
  __int64 v21[9]; // [rsp+30h] [rbp-48h] BYREF

  result = Json::OurReader::decodeUnicodeEscapeSequence(this, a2, a3, a4, a5);
  if ( (_BYTE)result && *a5 - 55296 <= 0x3FF )
  {
    v9 = *a3;
    if ( a4 - *a3 <= 5 )
    {
      v17 = *a3;
      v18 = 67LL;
      v19 = v21;
      v13 = (__m128i *)std::string::_M_create(&v19, &v18, 0LL);
      v19 = v13;
      v21[0] = v18;
      *v13 = _mm_load_si128((const __m128i *)&xmmword_1B234350);
      si128 = _mm_load_si128((const __m128i *)&xmmword_1B234360);
      v13[4].m128i_i16[0] = 29289;
      v13[1] = si128;
      v15 = _mm_load_si128((const __m128i *)&xmmword_1B234370);
      v13[4].m128i_i8[2] = 46;
      v13[2] = v15;
      v13[3] = _mm_load_si128((const __m128i *)&xmmword_1B234380);
      v20 = v18;
      *((_BYTE *)v19 + v18) = 0;
      result = Json::OurReader::addError(this, &v19, a2, v17);
LABEL_7:
      if ( v19 != v21 )
      {
        v16 = result;
        operator delete(v19);
        return v16;
      }
      return result;
    }
    v10 = v9 + 1;
    *a3 = v9 + 1;
    if ( *v9 != 92 || (v10 = v9 + 2, *a3 = v9 + 2, v9[1] != 117) )
    {
      v18 = 79LL;
      v19 = v21;
      v11 = (__m128i *)std::string::_M_create(&v19, &v18, 0LL);
      v19 = v11;
      v21[0] = v18;
      *v11 = _mm_load_si128((const __m128i *)&xmmword_1B234390);
      v12 = _mm_load_si128((const __m128i *)&xmmword_1B2343A0);
      qmemcpy(&v11[4], " surrogate pair", 15);
      v11[1] = v12;
      v11[2] = _mm_load_si128((const __m128i *)&xmmword_1B2343B0);
      v11[3] = _mm_load_si128((const __m128i *)&xmmword_1B2343C0);
      v20 = v18;
      *((_BYTE *)v19 + v18) = 0;
      result = Json::OurReader::addError(this, &v19, a2, v10);
      goto LABEL_7;
    }
    result = Json::OurReader::decodeUnicodeEscapeSequence(this, a2, a3, a4, (unsigned int *)&v19);
    if ( (_BYTE)result )
      *a5 = ((unsigned __int16)v19 & 0x3FF | (*a5 << 10) & 0xFFC00) + 0x10000;
  }
  return result;
};

// Line 1746: range 00000000152E0560-00000000152E0842
__int64 __fastcall Json::OurReader::decodeUnicodeEscapeSequence(
        Json::OurReader *this,
        Json::OurReader::Token *a2,
        const char **a3,
        const char *a4,
        unsigned int *a5)
{
  const char *v5; // r12
  char *v6; // r14
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  __m128i *v15; // rax
  __m128i si128; // xmm0
  __int64 result; // rax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  __m128i *v21; // rax
  __m128i v22; // xmm0
  unsigned __int8 v23; // [rsp+Fh] [rbp-59h]
  __int64 v24; // [rsp+18h] [rbp-50h] BYREF
  void *v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h]
  __int64 v27[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = *a3;
  if ( a4 - *a3 <= 3 )
  {
    v24 = 60LL;
    v25 = v27;
    v15 = (__m128i *)std::string::_M_create(&v25, &v24, 0LL);
    v25 = v15;
    v27[0] = v24;
    *v15 = _mm_load_si128((const __m128i *)&xmmword_1B234300);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B234310);
    qmemcpy(&v15[3], "ts expected.", 12);
    v15[1] = si128;
    v15[2] = _mm_load_si128((const __m128i *)&xmmword_1B234320);
    v26 = v24;
    *((_BYTE *)v25 + v24) = 0;
    result = Json::OurReader::addError(this, &v25, a2, v5);
    goto LABEL_17;
  }
  v6 = (char *)(v5 + 1);
  *a3 = v5 + 1;
  v7 = *v5;
  if ( (unsigned __int8)(*v5 - 48) > 9u )
  {
    if ( (unsigned __int8)(v7 - 97) <= 5u )
    {
      v8 = v7 - 87;
    }
    else
    {
      if ( (unsigned __int8)(v7 - 65) > 5u )
        goto LABEL_31;
      v8 = v7 - 55;
    }
  }
  else
  {
    v8 = v7 - 48;
  }
  v6 = (char *)(v5 + 2);
  v9 = 16 * v8;
  *a3 = v5 + 2;
  v10 = v5[1];
  if ( (unsigned __int8)(v5[1] - 48) <= 9u )
  {
    v11 = v9 + v10 - 48;
  }
  else if ( (unsigned __int8)(v10 - 97) <= 5u )
  {
    v11 = v9 + v10 - 87;
  }
  else
  {
    if ( (unsigned __int8)(v10 - 65) > 5u )
      goto LABEL_31;
    v11 = v9 + v10 - 55;
  }
  v6 = (char *)(v5 + 3);
  v12 = 16 * v11;
  *a3 = v5 + 3;
  v13 = v5[2];
  if ( (unsigned __int8)(v5[2] - 48) <= 9u )
  {
    v14 = v12 + v13 - 48;
    goto LABEL_21;
  }
  if ( (unsigned __int8)(v13 - 97) <= 5u )
  {
    v14 = v12 + v13 - 87;
    goto LABEL_21;
  }
  if ( (unsigned __int8)(v13 - 65) <= 5u )
  {
    v14 = v12 + v13 - 55;
LABEL_21:
    v6 = (char *)(v5 + 4);
    v18 = 16 * v14;
    *a3 = v5 + 4;
    v19 = v5[3];
    if ( (unsigned __int8)(v5[3] - 48) <= 9u )
    {
      v20 = v18 + v19 - 48;
LABEL_23:
      *a5 = v20;
      return 1LL;
    }
    if ( (unsigned __int8)(v19 - 97) <= 5u )
    {
      v20 = v18 + v19 - 87;
      goto LABEL_23;
    }
    if ( (unsigned __int8)(v19 - 65) <= 5u )
    {
      v20 = v18 + v19 - 55;
      goto LABEL_23;
    }
  }
LABEL_31:
  v24 = 66LL;
  v25 = v27;
  v21 = (__m128i *)std::string::_M_create(&v25, &v24, 0LL);
  v25 = v21;
  v27[0] = v24;
  *v21 = _mm_load_si128((const __m128i *)&xmmword_1B234300);
  v22 = _mm_load_si128((const __m128i *)&xmmword_1B234310);
  v21[4].m128i_i16[0] = 11876;
  v21[1] = v22;
  v21[2] = _mm_load_si128((const __m128i *)&xmmword_1B234330);
  v21[3] = _mm_load_si128((const __m128i *)&xmmword_1B234340);
  v26 = v24;
  *((_BYTE *)v25 + v24) = 0;
  result = Json::OurReader::addError(this, &v25, a2, v6);
LABEL_17:
  if ( v25 != v27 )
  {
    v23 = result;
    operator delete(v25);
    return v23;
  }
  return result;
};

// Line 1770: range 00000000152DF970-00000000152DFACA
__int64 __fastcall Json::OurReader::addError(
        std::deque<Json::OurReader::ErrorInfo> *a1,
        __int64 a2,
        const __m128i *a3,
        const Json::OurReader::Char *a4)
{
  __m128i v6; // xmm0
  const Json::OurReader::Char *v7; // rax
  const Json::OurReader::ErrorInfo *v8; // rdx
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_last; // rax
  __m128i *M_cur; // rbx
  unsigned __int64 *v11; // rdi
  std::string::size_type M_string_length; // r12
  Json::OurReader::Location end; // rax
  std::string::pointer M_p; // r14
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-70h] BYREF
  Json::OurReader::ErrorInfo v18; // [rsp+10h] [rbp-68h] BYREF

  v6 = _mm_loadu_si128(a3);
  v7 = (const Json::OurReader::Char *)a3[1].m128i_i64[0];
  v18.message_._anon_0._M_local_buf[0] = 0;
  v18.message_._M_dataplus._M_p = v18.message_._anon_0._M_local_buf;
  v18.message_._M_string_length = 0LL;
  v18.token_.end_ = v7;
  *(__m128i *)&v18.token_.type_ = v6;
  std::string::_M_assign(&v18.message_, a2);
  M_last = a1[1]._M_impl._M_finish._M_last;
  v18.extra_ = a4;
  M_cur = (__m128i *)a1[1]._M_impl._M_finish._M_cur;
  if ( M_cur != (__m128i *)&M_last[-1] )
  {
    v11 = &M_cur[2].m128i_u64[1];
    M_string_length = v18.message_._M_string_length;
    *M_cur = _mm_load_si128((const __m128i *)&v18);
    end = v18.token_.end_;
    M_cur[1].m128i_i64[1] = (__int64)&M_cur[2].m128i_i64[1];
    M_cur[1].m128i_i64[0] = (__int64)end;
    M_p = v18.message_._M_dataplus._M_p;
    if ( &v18.message_._M_dataplus._M_p[M_string_length] && !v18.message_._M_dataplus._M_p )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v17 = M_string_length;
    if ( M_string_length > 0xF )
    {
      v16 = std::string::_M_create(&M_cur[1].m128i_u64[1], &v17, 0LL);
      M_cur[1].m128i_i64[1] = v16;
      v11 = (unsigned __int64 *)v16;
      M_cur[2].m128i_i64[1] = v17;
    }
    else
    {
      if ( M_string_length == 1 )
      {
        M_cur[2].m128i_i8[8] = *v18.message_._M_dataplus._M_p;
LABEL_7:
        M_cur[2].m128i_i64[0] = M_string_length;
        *((_BYTE *)v11 + M_string_length) = 0;
        M_cur[3].m128i_i64[1] = (__int64)v18.extra_;
        ++a1[1]._M_impl._M_finish._M_cur;
        goto LABEL_8;
      }
      if ( !M_string_length )
        goto LABEL_7;
    }
    memcpy(v11, M_p, M_string_length);
    M_string_length = v17;
    v11 = (unsigned __int64 *)M_cur[1].m128i_i64[1];
    goto LABEL_7;
  }
  std::deque<Json::OurReader::ErrorInfo>::_M_push_back_aux<Json::OurReader::ErrorInfo const&>(a1 + 1, &v18, v8);
LABEL_8:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.message_._M_dataplus._M_p != &v18.message_._anon_0 )
    operator delete(v18.message_._M_dataplus._M_p);
  return 0LL;
};

// Line 1779: range 00000000152E1470-00000000152E18C1
bool __fastcall Json::OurReader::recoverFromError(
        Json::OurReader *const this,
        Json::OurReader::TokenType skipUntilToken)
{
  unsigned __int64 v4; // rbx
  Json::OurReader::TokenType type; // eax
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_cur; // r8
  Json::OurReader::ErrorInfo **M_node; // r10
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_first; // r11
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v9; // r14
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_last; // rdi
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer v11; // r9
  unsigned __int64 v12; // rcx
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer v13; // r8
  Json::OurReader::ErrorInfo **v14; // r9
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer v15; // r10
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v16; // rbp
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer v17; // rdi
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer v18; // rsi
  unsigned __int64 v19; // rax
  std::deque<Json::OurReader::ErrorInfo>::size_type v20; // rbx
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // r9
  Json::OurReader::ErrorInfo *v26; // r9
  Json::OurReader::ErrorInfo *v27; // rsi
  __m128i v28; // xmm1
  void **v29; // r14
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v30; // r13
  void *v31; // rdi
  __m128i si128; // xmm6
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  Json::OurReader::ErrorInfo *v37; // rsi
  __m128i v38; // xmm7
  void **v39; // rbp
  Json::OurReader::ErrorInfo *v40; // rax
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v41; // r12
  void *v42; // rdi
  __m128i v43; // xmm5
  std::deque<Json::OurReader::ErrorInfo>::iterator v44; // [rsp-40h] [rbp-128h]
  std::deque<Json::OurReader::ErrorInfo>::iterator v45; // [rsp-40h] [rbp-128h]
  std::deque<Json::OurReader::ErrorInfo>::iterator v46; // [rsp-20h] [rbp-108h]
  std::deque<Json::OurReader::ErrorInfo>::iterator v47; // [rsp-20h] [rbp-108h]
  Json::OurReader::Errors *p_errors; // [rsp+8h] [rbp-E0h]
  __m128i v49; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v50; // [rsp+20h] [rbp-C8h] BYREF
  std::deque<Json::OurReader::ErrorInfo>::iterator __first; // [rsp+30h] [rbp-B8h] BYREF
  Json::OurReader::Token v52; // [rsp+50h] [rbp-98h] BYREF
  __m128i v53; // [rsp+70h] [rbp-78h]
  Json::OurReader::ErrorInfo *v54; // [rsp+80h] [rbp-68h]
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v55; // [rsp+88h] [rbp-60h]
  __m128i v56; // [rsp+90h] [rbp-58h]
  __m128i v57; // [rsp+A0h] [rbp-48h]

  v4 = (char *)this->errors_._M_impl._M_finish._M_node
     - (char *)this->errors_._M_impl._M_start._M_node
     + this->errors_._M_impl._M_finish._M_cur
     - this->errors_._M_impl._M_finish._M_first
     - 8
     + this->errors_._M_impl._M_start._M_last
     - this->errors_._M_impl._M_start._M_cur;
  v49.m128i_i64[0] = v4 << 6;
  p_errors = &this->errors_;
  do
  {
    if ( Json::OurReader::readToken(this, &v52) )
      goto LABEL_2;
    M_cur = this->errors_._M_impl._M_finish._M_cur;
    M_node = this->errors_._M_impl._M_finish._M_node;
    M_first = this->errors_._M_impl._M_finish._M_first;
    v9 = this->errors_._M_impl._M_start._M_node;
    M_last = this->errors_._M_impl._M_start._M_last;
    v11 = this->errors_._M_impl._M_start._M_cur;
    v12 = (char *)M_node - (char *)v9 + M_cur - M_first - 8 + M_last - v11;
    if ( v4 <= v12 )
    {
      if ( v4 >= v12 )
        goto LABEL_2;
      v22 = this->errors_._M_impl._M_start._M_first;
      v23 = v4 + v11 - v22;
      if ( v23 < 0 )
      {
        v24 = ~((unsigned __int64)~v23 >> 3);
      }
      else
      {
        if ( v23 <= 7 )
        {
          v26 = (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer)((char *)v11 + v49.m128i_i64[0]);
          goto LABEL_16;
        }
        v24 = v23 >> 3;
      }
      v25 = 8 * v24;
      v9 = (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer)((char *)v9 + v25);
      v22 = *v9;
      M_last = *v9 + 8;
      v26 = &(*v9)[v23 - v25];
LABEL_16:
      v27 = this->errors_._M_impl._M_finish._M_last;
      v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)M_last, (__m128i)(unsigned __int64)v9);
      v55 = this->errors_._M_impl._M_finish._M_node;
      v54 = v27;
      v29 = (void **)(v9 + 1);
      *(__m128i *)&__first._M_cur = v28;
      v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)M_cur, (__m128i)(unsigned __int64)M_first);
      v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v22);
      v56 = v50;
      v57 = v28;
      v46._M_node = M_node;
      v46._M_last = v27;
      *(__m128i *)&v46._M_cur = v53;
      *(__m128i *)&v44._M_last = v28;
      *(__m128i *)&__first._M_last = v50;
      *(__m128i *)&v44._M_cur = v50;
      std::deque<Json::OurReader::ErrorInfo>::_M_destroy_data_aux(p_errors, v44, v46);
      v30 = this->errors_._M_impl._M_finish._M_node + 1;
      while ( v30 > (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer)v29 )
      {
        v31 = *v29++;
        operator delete(v31);
      }
      si128 = _mm_load_si128((const __m128i *)&__first);
      *(__m128i *)&this->errors_._M_impl._M_finish._M_cur = _mm_load_si128(&v50);
      *(__m128i *)&this->errors_._M_impl._M_finish._M_last = si128;
LABEL_2:
      type = v52.type_;
      if ( v52.type_ == skipUntilToken )
        break;
      continue;
    }
    std::deque<Json::OurReader::ErrorInfo>::_M_default_append(p_errors, v4 - v12);
    type = v52.type_;
    if ( v52.type_ == skipUntilToken )
      break;
  }
  while ( type );
  v13 = this->errors_._M_impl._M_finish._M_cur;
  v14 = this->errors_._M_impl._M_finish._M_node;
  v15 = this->errors_._M_impl._M_finish._M_first;
  v16 = this->errors_._M_impl._M_start._M_node;
  v17 = this->errors_._M_impl._M_start._M_last;
  v18 = this->errors_._M_impl._M_start._M_cur;
  v19 = (char *)v14 - (char *)v16 + v13 - v15 - 8 + v17 - v18;
  if ( v4 > v19 )
  {
    v20 = v4 - v19;
    if ( v20 )
      std::deque<Json::OurReader::ErrorInfo>::_M_default_append(p_errors, v20);
    return 0;
  }
  if ( v4 >= v19 )
    return 0;
  v33 = this->errors_._M_impl._M_start._M_first;
  v34 = v18 - v33 + v4;
  if ( v34 < 0 )
  {
    v35 = ~((unsigned __int64)~v34 >> 3);
LABEL_23:
    v36 = 8 * v35;
    v16 = (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer)((char *)v16 + v36);
    v33 = *v16;
    v17 = *v16 + 8;
    v37 = &(*v16)[v34 - v36];
  }
  else
  {
    if ( v34 > 7 )
    {
      v35 = v34 >> 3;
      goto LABEL_23;
    }
    v37 = (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer)((char *)v18 + v49.m128i_i64[0]);
  }
  v38 = (__m128i)(unsigned __int64)v16;
  v39 = (void **)(v16 + 1);
  v40 = this->errors_._M_impl._M_finish._M_last;
  v55 = this->errors_._M_impl._M_finish._M_node;
  v54 = v40;
  v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, v38);
  v49 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v33);
  v56 = v49;
  v57 = v50;
  v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v15);
  v47._M_node = v14;
  v47._M_last = v40;
  *(__m128i *)&v47._M_cur = v53;
  *(__m128i *)&v45._M_last = v50;
  *(__m128i *)&__first._M_cur = v49;
  *(__m128i *)&v45._M_cur = v49;
  std::deque<Json::OurReader::ErrorInfo>::_M_destroy_data_aux(p_errors, v45, v47);
  v41 = this->errors_._M_impl._M_finish._M_node + 1;
  while ( v41 > (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer)v39 )
  {
    v42 = *v39++;
    operator delete(v42);
  }
  v43 = _mm_load_si128(&v50);
  *(__m128i *)&this->errors_._M_impl._M_finish._M_cur = _mm_load_si128(&v49);
  *(__m128i *)&this->errors_._M_impl._M_finish._M_last = v43;
  return 0;
};

// Line 1793: range 00000000152E18D0-00000000152E18F1
bool __fastcall Json::OurReader::addErrorAndRecover(
        Json::OurReader *const this,
        const Json::String *message,
        Json::OurReader::Token *token,
        Json::OurReader::TokenType skipUntilToken)
{
  Json::OurReader::addError(
    (std::deque<Json::OurReader::ErrorInfo> *)this,
    (__int64)message,
    (const __m128i *)token,
    0LL);
  return Json::OurReader::recoverFromError(this, skipUntilToken);
};

// Line 1801: range 00000000152DA7D0-00000000152DA7F2
Json::OurReader::Char __fastcall Json::OurReader::getNextChar(Json::OurReader *const this)
{
  Json::OurReader::Location current; // rax

  current = this->current_;
  if ( current == this->end_ )
    return 0;
  this->current_ = current + 1;
  return *current;
};

// Line 1808: range 00000000152DAD50-00000000152DADBE
void __fastcall Json::OurReader::getLocationLineAndColumn(
        const Json::OurReader *const this,
        Json::OurReader::Location location,
        int *line,
        int *column)
{
  Json::OurReader::Location begin; // rax
  Json::OurReader::Location end; // r9
  int v6; // r10d
  Json::OurReader::Char v7; // r8
  unsigned __int64 v8; // rdi

  begin = this->begin_;
  *line = 0;
  if ( begin >= location )
  {
    v6 = (int)begin;
  }
  else
  {
    end = this->end_;
    v6 = (int)begin;
    while ( end != begin )
    {
      v7 = *begin;
      v8 = (unsigned __int64)(begin + 1);
      if ( *begin == 13 )
      {
        if ( begin[1] == 10 )
          v8 = (unsigned __int64)(begin + 2);
        ++*line;
        v6 = v8;
        begin = (Json::OurReader::Location)v8;
        if ( (unsigned __int64)location <= v8 )
          break;
      }
      else
      {
        ++begin;
        if ( v7 == 10 )
        {
          ++*line;
          v6 = v8;
        }
        if ( (unsigned __int64)location <= v8 )
          break;
      }
    }
  }
  *column = (_DWORD)location - v6 + 1;
  ++*line;
};

// Line 1828: range 00000000152DADC0-00000000152DAF39
Json::String *__fastcall Json::OurReader::getLocationLineAndColumn[abi:cxx11](
        Json::String *retstr,
        const Json::OurReader *const this,
        Json::OurReader::Location location)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  std::string::size_type v4; // rbx
  std::string::size_type v6; // rdx
  unsigned __int64 v7; // rsi
  char *v8; // rax
  char *v9; // rbp
  unsigned int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int line; // [rsp+0h] [rbp-68h] BYREF
  int column; // [rsp+4h] [rbp-64h] BYREF
  std::string::size_type v15; // [rsp+8h] [rbp-60h] BYREF
  char buffer[51]; // [rsp+10h] [rbp-58h] BYREF

  Json::OurReader::getLocationLineAndColumn(this, location, &line, &column);
  snprintf(buffer, 0x33uLL, "Line %d, Column %d", (unsigned int)line, (unsigned int)column);
  p_anon_0 = &retstr->_anon_0;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  v4 = strlen(buffer);
  v15 = v4;
  if ( v4 > 0xF )
  {
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)std::string::_M_create(retstr, &v15, 0LL);
    v6 = v15;
    retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
    retstr->_anon_0._M_allocated_capacity = v6;
  }
  else
  {
    if ( v4 == 1 )
    {
      retstr->_anon_0._M_local_buf[0] = buffer[0];
      goto LABEL_4;
    }
    if ( !v4 )
      goto LABEL_4;
  }
  if ( (unsigned int)v4 >= 8 )
  {
    v7 = (unsigned __int64)(&p_anon_0->_M_allocated_capacity + 1) & 0xFFFFFFFFFFFFFFF8LL;
    p_anon_0->_M_allocated_capacity = *(_QWORD *)buffer;
    *(_QWORD *)&p_anon_0->_M_local_buf[(unsigned int)v4 - 8] = *(_QWORD *)&buffer[(unsigned int)v4 - 8];
    v8 = &p_anon_0->_M_local_buf[-v7];
    v9 = (char *)(buffer - v8);
    if ( (((_DWORD)v4 + (_DWORD)v8) & 0xFFFFFFF8) >= 8 )
    {
      v10 = (v4 + (_DWORD)v8) & 0xFFFFFFF8;
      v11 = 0;
      do
      {
        v12 = v11;
        v11 += 8;
        *(_QWORD *)(v7 + v12) = *(_QWORD *)&v9[v12];
      }
      while ( v11 < v10 );
    }
  }
  else if ( (v4 & 4) != 0 )
  {
    *(_DWORD *)p_anon_0->_M_local_buf = *(_DWORD *)buffer;
    *(_DWORD *)&p_anon_0->_M_local_buf[(unsigned int)v4 - 4] = *(_DWORD *)&buffer[(unsigned int)v4 - 4];
  }
  else if ( (_DWORD)v4 )
  {
    p_anon_0->_M_local_buf[0] = buffer[0];
    if ( (v4 & 2) != 0 )
      *(_WORD *)&p_anon_0->_M_local_buf[(unsigned int)v4 - 2] = *(_WORD *)&buffer[(unsigned int)v4 - 2];
  }
  v4 = v15;
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
LABEL_4:
  retstr->_M_string_length = v4;
  p_anon_0->_M_local_buf[v4] = 0;
  return retstr;
};

// Line 1836: range 00000000152DAF40-00000000152DB412
__int64 __fastcall Json::OurReader::getFormattedErrorMessages[abi:cxx11](__int64 a1, const Json::OurReader *a2)
{
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_cur; // rbx
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_last; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  const char *v7; // rsi
  std::string::size_type M_string_length; // rax
  __int64 v9; // rax
  const char *v10; // rsi
  const Json::OurReader::Char *extra; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  const char *v14; // rsi
  __int64 v17; // [rsp+10h] [rbp-B8h]
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer v18; // [rsp+18h] [rbp-B0h]
  _QWORD *M_node; // [rsp+20h] [rbp-A8h]
  Json::String v20; // [rsp+30h] [rbp-98h] BYREF
  void *v21; // [rsp+50h] [rbp-78h] BYREF
  __int64 v22; // [rsp+58h] [rbp-70h]
  __m128i v23; // [rsp+60h] [rbp-68h] BYREF
  void *v24; // [rsp+70h] [rbp-58h]
  __int64 v25; // [rsp+78h] [rbp-50h]
  __int128 v26[4]; // [rsp+80h] [rbp-48h] BYREF

  *(_BYTE *)(a1 + 16) = 0;
  M_cur = a2->errors_._M_impl._M_start._M_cur;
  *(_QWORD *)a1 = a1 + 16;
  M_last = a2->errors_._M_impl._M_start._M_last;
  *(_QWORD *)(a1 + 8) = 0LL;
  v17 = (__int64)M_last;
  M_node = a2->errors_._M_impl._M_start._M_node;
  v18 = a2->errors_._M_impl._M_finish._M_cur;
  while ( v18 != M_cur )
  {
    while ( 1 )
    {
      Json::OurReader::getLocationLineAndColumn[abi:cxx11](&v20, a2, M_cur->token_.start_);
      v5 = std::string::_M_replace(&v20, 0LL, 0LL, "* ", 2LL);
      v21 = &v23;
      if ( *(_QWORD *)v5 == v5 + 16 )
      {
        v23 = _mm_loadu_si128((const __m128i *)(v5 + 16));
      }
      else
      {
        v21 = *(void **)v5;
        v23.m128i_i64[0] = *(_QWORD *)(v5 + 16);
      }
      v22 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)v5 = v5 + 16;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_BYTE *)(v5 + 16) = 0;
      if ( v22 == 0x3FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      v6 = std::string::_M_append(&v21, "\n", 1LL);
      v24 = v26;
      if ( *(_QWORD *)v6 == v6 + 16 )
      {
        v26[0] = (__int128)_mm_loadu_si128((const __m128i *)(v6 + 16));
      }
      else
      {
        v24 = *(void **)v6;
        *(_QWORD *)&v26[0] = *(_QWORD *)(v6 + 16);
      }
      v25 = *(_QWORD *)(v6 + 8);
      *(_QWORD *)v6 = v6 + 16;
      *(_BYTE *)(v6 + 16) = 0;
      v7 = (const char *)v24;
      *(_QWORD *)(v6 + 8) = 0LL;
      std::string::_M_append(a1, v7, v25);
      if ( v24 != v26 )
        operator delete(v24);
      if ( v21 != &v23 )
        operator delete(v21);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p != &v20._anon_0 )
        operator delete(v20._M_dataplus._M_p);
      v22 = 0LL;
      v23.m128i_i8[0] = 0;
      M_string_length = M_cur->message_._M_string_length;
      v21 = &v23;
      std::string::reserve(&v21, M_string_length + 2);
      if ( v22 == 0x3FFFFFFFFFFFFFFFLL || v22 == 4611686018427387902LL )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(&v21, "  ", 2LL);
      std::string::_M_append(&v21, M_cur->message_._M_dataplus._M_p, M_cur->message_._M_string_length);
      if ( v22 == 0x3FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      v9 = std::string::_M_append(&v21, "\n", 1LL);
      v24 = v26;
      if ( *(_QWORD *)v9 == v9 + 16 )
      {
        v26[0] = (__int128)_mm_loadu_si128((const __m128i *)(v9 + 16));
      }
      else
      {
        v24 = *(void **)v9;
        *(_QWORD *)&v26[0] = *(_QWORD *)(v9 + 16);
      }
      v25 = *(_QWORD *)(v9 + 8);
      *(_QWORD *)v9 = v9 + 16;
      *(_BYTE *)(v9 + 16) = 0;
      v10 = (const char *)v24;
      *(_QWORD *)(v9 + 8) = 0LL;
      std::string::_M_append(a1, v10, v25);
      if ( v24 != v26 )
        operator delete(v24);
      if ( v21 != &v23 )
        operator delete(v21);
      extra = M_cur->extra_;
      if ( extra )
      {
        Json::OurReader::getLocationLineAndColumn[abi:cxx11](&v20, a2, extra);
        v12 = std::string::_M_replace(&v20, 0LL, 0LL, "See ", 4LL);
        v21 = &v23;
        if ( *(_QWORD *)v12 == v12 + 16 )
        {
          v23 = _mm_loadu_si128((const __m128i *)(v12 + 16));
        }
        else
        {
          v21 = *(void **)v12;
          v23.m128i_i64[0] = *(_QWORD *)(v12 + 16);
        }
        v22 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_BYTE *)(v12 + 16) = 0;
        *(_QWORD *)v12 = v12 + 16;
        if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - v22) <= 0xC )
          std::__throw_length_error("basic_string::append");
        v13 = std::string::_M_append(&v21, " for detail.\n", 13LL);
        v24 = v26;
        if ( *(_QWORD *)v13 == v13 + 16 )
        {
          v26[0] = (__int128)_mm_loadu_si128((const __m128i *)(v13 + 16));
        }
        else
        {
          v24 = *(void **)v13;
          *(_QWORD *)&v26[0] = *(_QWORD *)(v13 + 16);
        }
        v25 = *(_QWORD *)(v13 + 8);
        *(_QWORD *)v13 = v13 + 16;
        *(_BYTE *)(v13 + 16) = 0;
        v14 = (const char *)v24;
        *(_QWORD *)(v13 + 8) = 0LL;
        std::string::_M_append(a1, v14, v25);
        if ( v24 != v26 )
          operator delete(v24);
        if ( v21 != &v23 )
          operator delete(v21);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p != &v20._anon_0 )
          operator delete(v20._M_dataplus._M_p);
      }
      if ( (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer)v17 != ++M_cur )
        break;
      M_cur = (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer)*++M_node;
      v17 = *M_node + 512LL;
      if ( v18 == (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer)*M_node )
        return a1;
    }
  }
  return a1;
};

// Line 1849: range 00000000152DBB70-00000000152DBD60
Json::OurReader *__fastcall Json::OurReader::getStructuredErrors(Json::OurReader *this, const __m128i *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  const Json::OurReader::StructuredError *v9; // rcx
  std::size_t M_map_size; // rbp
  ptrdiff_t offset_start; // rax
  _BYTE *v12; // rdi
  std::string::pointer M_p; // r14
  std::string::size_type M_string_length; // r12
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-98h]
  __int64 v18; // [rsp+8h] [rbp-90h]
  __int64 *v19; // [rsp+18h] [rbp-80h]
  std::string::size_type v20; // [rsp+28h] [rbp-70h] BYREF
  Json::OurReader::StructuredError v21; // [rsp+30h] [rbp-68h] BYREF

  v3 = a2[7].m128i_i64[0];
  v4 = a2[7].m128i_i64[1];
  *(_OWORD *)&this->nodes_.c._M_impl._M_map = 0LL;
  v5 = a2[6].m128i_i64[0];
  v17 = v3;
  v6 = a2[8].m128i_i64[0];
  this->nodes_.c._M_impl._M_start._M_cur = 0LL;
  v18 = v6;
  v19 = (__int64 *)(v4 + 8);
LABEL_2:
  if ( v18 != v5 )
  {
    while ( 1 )
    {
      v21.message._M_dataplus._M_p = v21.message._anon_0._M_local_buf;
      v21.message._anon_0._M_local_buf[0] = 0;
      v7 = _mm_loadu_si128((const __m128i *)(v5 + 8));
      v8 = _mm_loadl_epi64(a2 + 12);
      v21.message._M_string_length = 0LL;
      *(__m128i *)&v21.offset_start = _mm_sub_epi64(v7, _mm_unpacklo_epi64(v8, v8));
      std::string::_M_assign(&v21.message, v5 + 24);
      M_map_size = this->nodes_.c._M_impl._M_map_size;
      if ( (std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Elt_pointer)M_map_size != this->nodes_.c._M_impl._M_start._M_cur )
        break;
      std::vector<Json::OurReader::StructuredError>::_M_realloc_insert<Json::OurReader::StructuredError const&>(
        (std::vector<Json::OurReader::StructuredError> *const)this,
        (std::vector<Json::OurReader::StructuredError>::iterator)this->nodes_.c._M_impl._M_map_size,
        &v21,
        v9);
LABEL_10:
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21.message._M_dataplus._M_p == &v21.message._anon_0 )
      {
        v5 += 64LL;
        if ( v17 != v5 )
          goto LABEL_2;
      }
      else
      {
        operator delete(v21.message._M_dataplus._M_p);
        v5 += 64LL;
        if ( v17 != v5 )
          goto LABEL_2;
      }
      v5 = *v19++;
      v17 = v5 + 512;
      if ( v18 == v5 )
        return this;
    }
    offset_start = v21.offset_start;
    v12 = (_BYTE *)(M_map_size + 32);
    *(_QWORD *)(M_map_size + 16) = M_map_size + 32;
    M_p = v21.message._M_dataplus._M_p;
    *(_QWORD *)M_map_size = offset_start;
    *(_QWORD *)(M_map_size + 8) = v21.offset_limit;
    M_string_length = v21.message._M_string_length;
    if ( &M_p[v21.message._M_string_length] && !M_p )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v20 = v21.message._M_string_length;
    if ( v21.message._M_string_length > 0xF )
    {
      v16 = std::string::_M_create(M_map_size + 16, &v20, 0LL);
      *(_QWORD *)(M_map_size + 16) = v16;
      v12 = (_BYTE *)v16;
      *(_QWORD *)(M_map_size + 32) = v20;
    }
    else
    {
      if ( v21.message._M_string_length == 1 )
      {
        *(_BYTE *)(M_map_size + 32) = *M_p;
LABEL_9:
        *(_QWORD *)(M_map_size + 24) = M_string_length;
        v12[M_string_length] = 0;
        this->nodes_.c._M_impl._M_map_size += 48LL;
        goto LABEL_10;
      }
      if ( !v21.message._M_string_length )
        goto LABEL_9;
    }
    memcpy(v12, M_p, M_string_length);
    M_string_length = v20;
    v12 = *(_BYTE **)(M_map_size + 16);
    goto LABEL_9;
  }
  return this;
};

// Line 1861: range 00000000152E4970-00000000152E4AA8
void __fastcall Json::OurCharReader::~OurCharReader(Json::OurCharReader *const this)
{
  Json::OurCharReader *M_p; // rdi
  Json::OurCharReader *v3; // rdi
  std::_Deque_base<Json::OurReader::ErrorInfo>::_Map_pointer M_map; // rdi
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer M_node; // rbp
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v6; // r12
  void *v7; // rdi
  std::_Deque_base<Json::Value*>::_Map_pointer v8; // rdi
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v9; // rbp
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v10; // r12
  void *v11; // rdi

  this->_vptr_CharReader = (int (**)(...))(&`vtable for'Json::OurCharReader + 2);
  M_p = (Json::OurCharReader *)this->reader_.commentsBefore_._M_dataplus._M_p;
  if ( M_p != (Json::OurCharReader *)&this->reader_.commentsBefore_._anon_0 )
    operator delete(M_p);
  v3 = (Json::OurCharReader *)this->reader_.document_._M_dataplus._M_p;
  if ( v3 != (Json::OurCharReader *)&this->reader_.document_._anon_0 )
    operator delete(v3);
  std::deque<Json::OurReader::ErrorInfo>::_M_destroy_data_aux(
    &this->reader_.errors_,
    this->reader_.errors_._M_impl._M_start,
    this->reader_.errors_._M_impl._M_finish);
  M_map = this->reader_.errors_._M_impl._M_map;
  if ( M_map )
  {
    M_node = this->reader_.errors_._M_impl._M_start._M_node;
    v6 = this->reader_.errors_._M_impl._M_finish._M_node + 1;
    if ( v6 > M_node )
    {
      do
      {
        v7 = *M_node++;
        operator delete(v7);
      }
      while ( v6 > M_node );
      M_map = this->reader_.errors_._M_impl._M_map;
    }
    operator delete(M_map);
  }
  v8 = this->reader_.nodes_.c._M_impl._M_map;
  if ( v8 )
  {
    v9 = this->reader_.nodes_.c._M_impl._M_start._M_node;
    v10 = this->reader_.nodes_.c._M_impl._M_finish._M_node + 1;
    if ( v10 > v9 )
    {
      do
      {
        v11 = *v9++;
        operator delete(v11);
      }
      while ( v10 > v9 );
      v8 = this->reader_.nodes_.c._M_impl._M_map;
    }
    operator delete(v8);
  }
};

// Line 1861: range 00000000152E4830-00000000152E4962
void __fastcall Json::OurCharReader::~OurCharReader(Json::OurCharReader *const this)
{
  Json::OurCharReader *M_p; // rdi
  Json::OurCharReader *v3; // rdi
  std::_Deque_base<Json::OurReader::ErrorInfo>::_Map_pointer M_map; // rdi
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer M_node; // rbx
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v6; // r12
  void *v7; // rdi
  std::_Deque_base<Json::Value*>::_Map_pointer v8; // rdi
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v9; // rbx
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v10; // r12
  void *v11; // rdi

  this->_vptr_CharReader = (int (**)(...))(&`vtable for'Json::OurCharReader + 2);
  M_p = (Json::OurCharReader *)this->reader_.commentsBefore_._M_dataplus._M_p;
  if ( M_p != (Json::OurCharReader *)&this->reader_.commentsBefore_._anon_0 )
    operator delete(M_p);
  v3 = (Json::OurCharReader *)this->reader_.document_._M_dataplus._M_p;
  if ( v3 != (Json::OurCharReader *)&this->reader_.document_._anon_0 )
    operator delete(v3);
  std::deque<Json::OurReader::ErrorInfo>::_M_destroy_data_aux(
    &this->reader_.errors_,
    this->reader_.errors_._M_impl._M_start,
    this->reader_.errors_._M_impl._M_finish);
  M_map = this->reader_.errors_._M_impl._M_map;
  if ( M_map )
  {
    M_node = this->reader_.errors_._M_impl._M_start._M_node;
    v6 = this->reader_.errors_._M_impl._M_finish._M_node + 1;
    if ( v6 > M_node )
    {
      do
      {
        v7 = *M_node++;
        operator delete(v7);
      }
      while ( v6 > M_node );
      M_map = this->reader_.errors_._M_impl._M_map;
    }
    operator delete(M_map);
  }
  v8 = this->reader_.nodes_.c._M_impl._M_map;
  if ( v8 )
  {
    v9 = this->reader_.nodes_.c._M_impl._M_start._M_node;
    v10 = this->reader_.nodes_.c._M_impl._M_finish._M_node + 1;
    if ( v10 > v9 )
    {
      do
      {
        v11 = *v9++;
        operator delete(v11);
      }
      while ( v10 > v9 );
      v8 = this->reader_.nodes_.c._M_impl._M_map;
    }
    operator delete(v8);
  }
  operator delete(this, 0x140uLL);
};

// Line 1868: range 00000000152E56B0-00000000152E57B7
bool __fastcall Json::OurCharReader::parse(
        Json::OurCharReader *const this,
        const char *beginDoc,
        const char *endDoc,
        Json::Value *root,
        Json::String *errs)
{
  char v6; // r12
  Json::String *M_p; // rdi
  size_t v8; // rax
  __int64 v9; // rcx
  std::string::size_type M_allocated_capacity; // rsi
  std::string::size_type v12; // rdx
  void *v13; // [rsp+0h] [rbp-38h] BYREF
  size_t n; // [rsp+8h] [rbp-30h]
  __int64 src[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = Json::OurReader::parse(&this->reader_, beginDoc, endDoc, root, this->collectComments_);
  if ( !errs )
    return v6;
  Json::OurReader::getFormattedErrorMessages[abi:cxx11]((__int64)&v13, &this->reader_);
  M_p = (Json::String *)errs->_M_dataplus._M_p;
  if ( v13 == src )
  {
    v12 = n;
    if ( n )
    {
      if ( n == 1 )
        LOBYTE(M_p->_M_dataplus._M_p) = src[0];
      else
        memcpy(M_p, src, n);
      v12 = n;
      M_p = (Json::String *)errs->_M_dataplus._M_p;
    }
    errs->_M_string_length = v12;
    *((_BYTE *)&M_p->_M_dataplus._M_p + v12) = 0;
    M_p = (Json::String *)v13;
    goto LABEL_6;
  }
  v8 = n;
  v9 = src[0];
  if ( M_p == (Json::String *)&errs->_anon_0 )
  {
    errs->_M_dataplus._M_p = (std::string::pointer)v13;
    *(__m128i *)&errs->_M_string_length = _mm_unpacklo_epi64((__m128i)v8, (__m128i)(unsigned __int64)v9);
  }
  else
  {
    M_allocated_capacity = errs->_anon_0._M_allocated_capacity;
    errs->_M_dataplus._M_p = (std::string::pointer)v13;
    *(__m128i *)&errs->_M_string_length = _mm_unpacklo_epi64((__m128i)v8, (__m128i)(unsigned __int64)v9);
    if ( M_p )
    {
      v13 = M_p;
      src[0] = M_allocated_capacity;
      goto LABEL_6;
    }
  }
  v13 = src;
  M_p = (Json::String *)src;
LABEL_6:
  n = 0LL;
  LOBYTE(M_p->_M_dataplus._M_p) = 0;
  if ( v13 != src )
    operator delete(v13);
  return v6;
};

// Line 1878: range 000000000C73AF9E-000000000C73AFA9
void __fastcall __noreturn Json::CharReaderBuilder::CharReaderBuilder()
{
  Json::Value_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::~Value(v0);
  _Unwind_Resume(v1);
};

// Line 1878: range 00000000152DB930-00000000152DB966
__int64 __fastcall Json::CharReaderBuilder::CharReaderBuilder(Json::CharReaderBuilder *this)
{
  this->_vptr_Factory = (int (**)(...))(&`vtable for'Json::CharReaderBuilder + 2);
  Json::Value::Value(&this->settings_, 0LL);
  return Json::CharReaderBuilder::setDefaults((Json::CharReaderBuilder *)&this->settings_, 0LL);
};

// Line 1880: range 00000000152DC0C0-00000000152DC25C
__int64 __fastcall Json::CharReaderBuilder::newCharReader(Json::CharReaderBuilder *this)
{
  Json::Value *v1; // rax
  char v2; // bl
  Json::Value *v3; // rax
  Json::Value *v4; // rax
  Json::Value *v5; // rax
  Json::Value *v6; // rax
  Json::Value *v7; // rax
  Json::Value *v8; // rax
  Json::Value *v9; // rax
  Json::Value *v10; // rax
  Json::Value *v11; // rax
  Json::Value *v12; // rax
  Json::Value *v13; // rax
  __int64 v14; // r12
  Json::OurFeatures v16[3]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "collectComments");
  v2 = Json::Value::asBool(v1);
  Json::OurFeatures::all(v16);
  v3 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "allowComments");
  v16[0].allowComments_ = Json::Value::asBool(v3);
  v4 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "allowTrailingCommas");
  v16[0].allowTrailingCommas_ = Json::Value::asBool(v4);
  v5 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "strictRoot");
  v16[0].strictRoot_ = Json::Value::asBool(v5);
  v6 = (Json::Value *)Json::Value::operator[](
                        (const Json::Value_0 *const)&this->settings_,
                        "allowDroppedNullPlaceholders");
  v16[0].allowDroppedNullPlaceholders_ = Json::Value::asBool(v6);
  v7 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "allowNumericKeys");
  v16[0].allowNumericKeys_ = Json::Value::asBool(v7);
  v8 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "allowSingleQuotes");
  v16[0].allowSingleQuotes_ = Json::Value::asBool(v8);
  v9 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "stackLimit");
  v16[0].stackLimit_ = (unsigned int)Json::Value::asUInt(v9);
  v10 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "failIfExtra");
  v16[0].failIfExtra_ = Json::Value::asBool(v10);
  v11 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "rejectDupKeys");
  v16[0].rejectDupKeys_ = Json::Value::asBool(v11);
  v12 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "allowSpecialFloats");
  v16[0].allowSpecialFloats_ = Json::Value::asBool(v12);
  v13 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "skipBom");
  v16[0].skipBom_ = Json::Value::asBool(v13);
  v14 = operator new(0x140uLL);
  *(_BYTE *)(v14 + 8) = v2;
  *(_QWORD *)v14 = &`vtable for'Json::OurCharReader + 2;
  Json::OurReader::OurReader((Json::OurReader *)(v14 + 16), (const __m128i *)v16);
  return v14;
};

// Line 1898: range 000000000C73B16C-000000000C73B17C
void __fastcall __noreturn Json::CharReaderBuilder::newCharReader()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x140uLL);
  _Unwind_Resume(v0);
};

// Line 1901: range 00000000152E3550-00000000152E3DF4
__int64 __fastcall Json::CharReaderBuilder::validate(Json::CharReaderBuilder *this, Json::Value_0 *a2)
{
  Json::ValueIteratorBase *v2; // rbp
  Json::Value_0::const_iterator v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // r12d
  std::string::pointer M_p; // r12
  __int64 v7; // r14
  std::string::size_type v8; // rbp
  __int64 v9; // rbx
  std::string::size_type v10; // r15
  size_t v11; // rdx
  signed __int64 v12; // rax
  std::string::size_type v13; // r15
  Json::String *v14; // r14
  __int64 v15; // r9
  size_t v16; // rbx
  size_t v17; // rdx
  int v18; // eax
  Json::Value *v19; // rax
  std::string::pointer v20; // rdi
  unsigned int v21; // eax
  __int64 v23; // rax
  __m128i si128; // xmm0
  __m128i *v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *v32; // r15
  Json::String *p_other; // rbx
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  std::_Rb_tree_node_base *v35; // rcx
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // r12
  std::_Rb_tree_node_base *v39; // r14
  __int64 v40; // rax
  Json::String *v41; // rbx
  Json::String *v42; // rax
  std::string::size_type M_string_length; // r12
  std::_Rb_tree_node_base::_Base_ptr v44; // r14
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rdx
  unsigned int v46; // eax
  __int64 v47; // r12
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::const_iterator __position; // [rsp+0h] [rbp-1F8h]
  std::_Rb_tree_node_base *__positiona; // [rsp+0h] [rbp-1F8h]
  unsigned __int8 v50; // [rsp+8h] [rbp-1F0h]
  std::_Rb_tree_node_base *second; // [rsp+8h] [rbp-1F0h]
  Json::ValueIteratorBase *v53; // [rsp+10h] [rbp-1E8h]
  Json::Value_0 *p_settings; // [rsp+18h] [rbp-1E0h]
  _BOOL4 v55; // [rsp+18h] [rbp-1E0h]
  std::string::pointer src; // [rsp+20h] [rbp-1D8h]
  Json::ValueIteratorBase v57; // [rsp+30h] [rbp-1C8h] BYREF
  Json::String other; // [rsp+40h] [rbp-1B8h] BYREF
  char *v59; // [rsp+60h] [rbp-198h]
  __int64 v60; // [rsp+68h] [rbp-190h]
  char v61[16]; // [rsp+70h] [rbp-188h] BYREF
  __int64 v62[2]; // [rsp+80h] [rbp-178h] BYREF
  __int64 v63[4]; // [rsp+90h] [rbp-168h] BYREF
  char v64[16]; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v65[2]; // [rsp+C0h] [rbp-138h] BYREF
  std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr M_node; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v67[2]; // [rsp+E0h] [rbp-118h] BYREF
  std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr v68; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v69[2]; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v70[4]; // [rsp+110h] [rbp-E8h] BYREF
  char v71[16]; // [rsp+130h] [rbp-C8h] BYREF
  char *v72; // [rsp+140h] [rbp-B8h]
  __int64 v73; // [rsp+148h] [rbp-B0h]
  char v74[16]; // [rsp+150h] [rbp-A8h] BYREF
  char *v75; // [rsp+160h] [rbp-98h]
  __int64 v76; // [rsp+168h] [rbp-90h]
  char v77[16]; // [rsp+170h] [rbp-88h] BYREF
  __int64 v78[2]; // [rsp+180h] [rbp-78h] BYREF
  std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr v79; // [rsp+190h] [rbp-68h] BYREF
  __int64 v80[2]; // [rsp+1A0h] [rbp-58h] BYREF
  char v81[16]; // [rsp+1B0h] [rbp-48h] BYREF
  char v82; // [rsp+1C0h] [rbp-38h] BYREF

  if ( (_BYTE)`guard variable for'Json::CharReaderBuilder::validate(Json::Value *)::valid_keys )
  {
    v2 = &v57;
    goto LABEL_3;
  }
  v2 = &v57;
  if ( __cxa_guard_acquire(&`guard variable for'Json::CharReaderBuilder::validate(Json::Value *)::valid_keys) )
  {
    other._M_dataplus._M_p = other._anon_0._M_local_buf;
    strcpy(other._anon_0._M_local_buf, "collectComments");
    v59 = v61;
    strcpy(v61, "allowComments");
    other._M_string_length = 15LL;
    v60 = 13LL;
    v62[0] = (__int64)v63;
    v57.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)19;
    v23 = std::string::_M_create(v62, &v57, 0LL);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B2344F0);
    v62[0] = v23;
    v63[0] = (__int64)v57.current_._M_node;
    *(_WORD *)(v23 + 16) = 24941;
    *(_BYTE *)(v23 + 18) = 115;
    *(__m128i *)v23 = si128;
    v62[1] = (__int64)v57.current_._M_node;
    *((_BYTE *)&v57.current_._M_node->_M_color + v62[0]) = 0;
    v63[2] = (__int64)v64;
    strcpy(v64, "strictRoot");
    v63[3] = 10LL;
    v65[0] = (__int64)&M_node;
    v57.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)28;
    v25 = (__m128i *)std::string::_M_create(v65, &v57, 0LL);
    v26 = _mm_load_si128((const __m128i *)&xmmword_1B234500);
    v65[0] = (__int64)v25;
    M_node = v57.current_._M_node;
    qmemcpy(&v25[1], "Placeholders", 12);
    *v25 = v26;
    v65[1] = (__int64)v57.current_._M_node;
    *((_BYTE *)&v57.current_._M_node->_M_color + v65[0]) = 0;
    v67[0] = (__int64)&v68;
    v57.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)16;
    v67[0] = std::string::_M_create(v67, &v57, 0LL);
    v68 = v57.current_._M_node;
    *(__m128i *)v67[0] = _mm_load_si128((const __m128i *)&xmmword_1B234510);
    v67[1] = (__int64)v57.current_._M_node;
    *((_BYTE *)&v57.current_._M_node->_M_color + v67[0]) = 0;
    v69[0] = (__int64)v70;
    v57.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)17;
    v27 = std::string::_M_create(v69, &v57, 0LL);
    v28 = _mm_load_si128((const __m128i *)&xmmword_1B234520);
    v69[0] = v27;
    v70[0] = (__int64)v57.current_._M_node;
    *(_BYTE *)(v27 + 16) = 115;
    *(__m128i *)v27 = v28;
    v69[1] = (__int64)v57.current_._M_node;
    *((_BYTE *)&v57.current_._M_node->_M_color + v69[0]) = 0;
    v70[2] = (__int64)v71;
    strcpy(v71, "stackLimit");
    v72 = v74;
    strcpy(v74, "failIfExtra");
    v75 = v77;
    strcpy(v77, "rejectDupKeys");
    v70[3] = 10LL;
    v73 = 11LL;
    v76 = 13LL;
    v78[0] = (__int64)&v79;
    v57.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)18;
    v29 = std::string::_M_create(v78, &v57, 0LL);
    v30 = _mm_load_si128((const __m128i *)&xmmword_1B234530);
    v78[0] = v29;
    v79 = v57.current_._M_node;
    *(_WORD *)(v29 + 16) = 29556;
    *(__m128i *)v29 = v30;
    v78[1] = (__int64)v57.current_._M_node;
    *((_BYTE *)&v57.current_._M_node->_M_color + v78[0]) = 0;
    v80[0] = (__int64)v81;
    strcpy(v81, "skipBom");
    v80[1] = 7LL;
    v31 = operator new(0x30uLL);
    *(_DWORD *)(v31 + 8) = 0;
    v32 = (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *)v31;
    v31 += 8LL;
    *(_QWORD *)(v31 + 8) = 0LL;
    p_other = &other;
    __positiona = (std::_Rb_tree_node_base *)v31;
    v32->_M_impl._M_header._M_left = (std::_Rb_tree_node_base::_Base_ptr)v31;
    v32->_M_impl._M_header._M_right = (std::_Rb_tree_node_base::_Base_ptr)v31;
    v32->_M_impl._M_node_count = 0LL;
    while ( 1 )
    {
      insert_hint_unique_pos = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_get_insert_hint_unique_pos(
                                 v32,
                                 (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::const_iterator)__positiona,
                                 p_other);
      second = insert_hint_unique_pos.second;
      v35 = insert_hint_unique_pos.second;
      if ( !insert_hint_unique_pos.second )
        goto LABEL_38;
      LOBYTE(v55) = __positiona == insert_hint_unique_pos.second || insert_hint_unique_pos.first != 0LL;
      if ( !v55 )
      {
        M_string_length = p_other->_M_string_length;
        M_parent = insert_hint_unique_pos.second[1]._M_parent;
        v44 = M_parent;
        if ( M_string_length <= (unsigned __int64)M_parent )
          M_parent = (std::_Rb_tree_node_base::_Base_ptr)p_other->_M_string_length;
        if ( M_parent )
        {
          v46 = memcmp(p_other->_M_dataplus._M_p, *(const void **)&v35[1]._M_color, (size_t)M_parent);
          if ( v46 )
            goto LABEL_64;
        }
        v47 = M_string_length - (_QWORD)v44;
        if ( v47 < 0x80000000LL )
          break;
      }
LABEL_41:
      v36 = operator new(0x40uLL);
      v37 = (void *)(v36 + 48);
      v38 = v36;
      v39 = (std::_Rb_tree_node_base *)p_other->_M_string_length;
      *(_QWORD *)(v36 + 32) = v36 + 48;
      src = p_other->_M_dataplus._M_p;
      if ( (std::_Rb_tree_node_base *)((char *)v39 + (unsigned __int64)p_other->_M_dataplus._M_p) && !src )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v57.current_._M_node = v39;
      if ( (unsigned __int64)v39 > 0xF )
      {
        v40 = std::string::_M_create(v36 + 32, &v57, 0LL);
        *(_QWORD *)(v38 + 32) = v40;
        v37 = (void *)v40;
        *(_QWORD *)(v38 + 48) = v57.current_._M_node;
LABEL_50:
        memcpy(v37, src, (size_t)v39);
        v39 = v57.current_._M_node;
        v37 = *(void **)(v38 + 32);
        goto LABEL_37;
      }
      if ( v39 == (std::_Rb_tree_node_base *)1 )
      {
        *(_BYTE *)(v36 + 48) = *src;
      }
      else if ( v39 )
      {
        goto LABEL_50;
      }
LABEL_37:
      *(_QWORD *)(v38 + 40) = v39;
      *((_BYTE *)&v39->_M_color + (_QWORD)v37) = 0;
      std::_Rb_tree_insert_and_rebalance(v55, (std::_Rb_tree_node_base *)v38, second, __positiona);
      ++v32->_M_impl._M_node_count;
LABEL_38:
      if ( ++p_other == (Json::String *)&v82 )
      {
        Json::CharReaderBuilder::validate(Json::Value *)const::valid_keys = (__int64)v32;
        v41 = (Json::String *)v80;
        __cxa_guard_release(&`guard variable for'Json::CharReaderBuilder::validate(Json::Value *)::valid_keys);
        while ( 1 )
        {
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v41->_M_dataplus._M_p == &v41->_anon_0 )
          {
            v42 = v41 - 1;
            if ( &other == v41 )
              goto LABEL_3;
          }
          else
          {
            operator delete(v41->_M_dataplus._M_p);
            v42 = v41 - 1;
            if ( &other == v41 )
              goto LABEL_3;
          }
          v41 = v42;
        }
      }
    }
    if ( v47 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
    {
      LOBYTE(v55) = 1;
      goto LABEL_41;
    }
    v46 = v47;
LABEL_64:
    v55 = v46 >> 31;
    goto LABEL_41;
  }
LABEL_3:
  p_settings = (Json::Value_0 *)&this->settings_;
  v57 = Json::Value::begin((const Json::Value_0 *const)&this->settings_).Json::ValueIteratorBase;
  while ( 2 )
  {
    v3 = Json::Value::end(p_settings);
    other._M_dataplus._M_p = (std::string::pointer)v3.current_._M_node;
    other._M_string_length = *(_QWORD *)&v3.isNull_;
    LOBYTE(v4) = Json::ValueIteratorBase::isEqual(v2, (const Json::ValueIteratorBase::SelfType *)&other);
    v5 = v4;
    if ( (_BYTE)v4 )
    {
      if ( a2 )
      {
        LOBYTE(v21) = Json::Value::empty(a2);
        return v21;
      }
      return v5;
    }
    Json::ValueIteratorBase::name[abi:cxx11](&other, v2);
    if ( !*(_QWORD *)(Json::CharReaderBuilder::validate(Json::Value *)const::valid_keys + 16) )
      goto LABEL_25;
    v50 = v5;
    v53 = v2;
    M_p = other._M_dataplus._M_p;
    __position._M_node = (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)(Json::CharReaderBuilder::validate(Json::Value *)const::valid_keys
                                                                               + 8);
    v7 = *(_QWORD *)(Json::CharReaderBuilder::validate(Json::Value *)const::valid_keys + 16);
    v8 = other._M_string_length;
    v9 = Json::CharReaderBuilder::validate(Json::Value *)const::valid_keys + 8;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v7 + 40);
        v11 = v8;
        if ( v10 <= v8 )
          v11 = *(_QWORD *)(v7 + 40);
        if ( v11 )
        {
          LODWORD(v12) = memcmp(*(const void **)(v7 + 32), M_p, v11);
          if ( (_DWORD)v12 )
            goto LABEL_14;
        }
        v12 = v10 - v8;
        if ( (__int64)(v10 - v8) >= 0x80000000LL )
          break;
        if ( v12 > (__int64)0xFFFFFFFF7FFFFFFFLL )
        {
LABEL_14:
          if ( (int)v12 >= 0 )
            break;
        }
        v7 = *(_QWORD *)(v7 + 24);
        if ( !v7 )
          goto LABEL_16;
      }
      v9 = v7;
      v7 = *(_QWORD *)(v7 + 16);
    }
    while ( v7 );
LABEL_16:
    v13 = v8;
    v14 = (Json::String *)M_p;
    v2 = v53;
    v5 = v50;
    v15 = v9;
    if ( __position._M_node == (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)v9 )
      goto LABEL_25;
    v16 = *(_QWORD *)(v9 + 40);
    v17 = v16;
    if ( v13 <= v16 )
      v17 = v13;
    if ( v17 )
    {
      v18 = memcmp(v14, *(const void **)(v15 + 32), v17);
      if ( v18 )
      {
LABEL_24:
        if ( v18 < 0 )
          goto LABEL_25;
LABEL_29:
        v20 = (std::string::pointer)v14;
        if ( v14 != (Json::String *)&other._anon_0 )
LABEL_27:
          operator delete(v20);
LABEL_28:
        Json::ValueIteratorBase::increment(v2);
        continue;
      }
    }
    break;
  }
  if ( (__int64)(v13 - v16) >= 0x80000000LL )
    goto LABEL_29;
  if ( (__int64)(v13 - v16) > (__int64)0xFFFFFFFF7FFFFFFFLL )
  {
    v18 = v13 - v16;
    goto LABEL_24;
  }
LABEL_25:
  if ( a2 )
  {
    Json::ValueIteratorBase::deref(v2);
    v19 = (Json::Value *)Json::Value::operator[](a2, &other);
    Json::Value::operator=(v19);
    v20 = other._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other._M_dataplus._M_p != &other._anon_0 )
      goto LABEL_27;
    goto LABEL_28;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other._M_dataplus._M_p != &other._anon_0 )
    operator delete(other._M_dataplus._M_p);
  return v5;
};

// Line 1929: range 00000000152DB420-00000000152DB424
Json::Value *__fastcall Json::CharReaderBuilder::operator[](
        Json::CharReaderBuilder *const this,
        const Json::String *key)
{
  return (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)&this->settings_, key);
};

// Line 1932: range 00000000152DB430-00000000152DB68B
void __fastcall Json::CharReaderBuilder::strictMode(Json::CharReaderBuilder *this, Json::Value *a2)
{
  Json::Value_0 *v2; // rax
  Json::Value_0 *v3; // rax
  Json::Value_0 *v4; // rax
  Json::Value_0 *v5; // rax
  Json::Value_0 *v6; // rax
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  Json::Value_0 *v9; // rax
  Json::Value_0 *v10; // rax
  Json::Value_0 *v11; // rax
  Json::Value_0 *v12; // rax
  _BYTE savedregs[72]; // [rsp+0h] [rbp+0h] BYREF

  Json::Value::Value((Json::Value *)savedregs, 0);
  v2 = Json::Value::operator[]((Json::Value_0 *const)this, "allowComments");
  Json::Value::operator=(v2, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v3 = Json::Value::operator[]((Json::Value_0 *const)this, "allowTrailingCommas");
  Json::Value::operator=(v3, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 1);
  v4 = Json::Value::operator[]((Json::Value_0 *const)this, "strictRoot");
  Json::Value::operator=(v4, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v5 = Json::Value::operator[]((Json::Value_0 *const)this, "allowDroppedNullPlaceholders");
  Json::Value::operator=(v5, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v6 = Json::Value::operator[]((Json::Value_0 *const)this, "allowNumericKeys");
  Json::Value::operator=(v6, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v7 = Json::Value::operator[]((Json::Value_0 *const)this, "allowSingleQuotes");
  Json::Value::operator=(v7, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 1000);
  v8 = Json::Value::operator[]((Json::Value_0 *const)this, "stackLimit");
  Json::Value::operator=(v8, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 1);
  v9 = Json::Value::operator[]((Json::Value_0 *const)this, "failIfExtra");
  Json::Value::operator=(v9, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 1);
  v10 = Json::Value::operator[]((Json::Value_0 *const)this, "rejectDupKeys");
  Json::Value::operator=(v10, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v11 = Json::Value::operator[]((Json::Value_0 *const)this, "allowSpecialFloats");
  Json::Value::operator=(v11, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 1);
  v12 = Json::Value::operator[]((Json::Value_0 *const)this, "skipBom");
  Json::Value::operator=(v12, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
};

// Line 1934: range 000000000C73AE2E-000000000C73AE39
void __fastcall __noreturn Json::CharReaderBuilder::strictMode()
{
  Json::Value_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::~Value(v0);
  _Unwind_Resume(v1);
};

// Line 1948: range 00000000152DB690-00000000152DB91F
void __fastcall Json::CharReaderBuilder::setDefaults(Json::CharReaderBuilder *this, Json::Value *a2)
{
  Json::Value_0 *v2; // rax
  Json::Value_0 *v3; // rax
  Json::Value_0 *v4; // rax
  Json::Value_0 *v5; // rax
  Json::Value_0 *v6; // rax
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  Json::Value_0 *v9; // rax
  Json::Value_0 *v10; // rax
  Json::Value_0 *v11; // rax
  Json::Value_0 *v12; // rax
  Json::Value_0 *v13; // rax
  _BYTE savedregs[72]; // [rsp+0h] [rbp+0h] BYREF

  Json::Value::Value((Json::Value *)savedregs, 1);
  v2 = Json::Value::operator[]((Json::Value_0 *const)this, "collectComments");
  Json::Value::operator=(v2, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 1);
  v3 = Json::Value::operator[]((Json::Value_0 *const)this, "allowComments");
  Json::Value::operator=(v3, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 1);
  v4 = Json::Value::operator[]((Json::Value_0 *const)this, "allowTrailingCommas");
  Json::Value::operator=(v4, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v5 = Json::Value::operator[]((Json::Value_0 *const)this, "strictRoot");
  Json::Value::operator=(v5, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v6 = Json::Value::operator[]((Json::Value_0 *const)this, "allowDroppedNullPlaceholders");
  Json::Value::operator=(v6, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v7 = Json::Value::operator[]((Json::Value_0 *const)this, "allowNumericKeys");
  Json::Value::operator=(v7, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v8 = Json::Value::operator[]((Json::Value_0 *const)this, "allowSingleQuotes");
  Json::Value::operator=(v8, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 1000);
  v9 = Json::Value::operator[]((Json::Value_0 *const)this, "stackLimit");
  Json::Value::operator=(v9, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v10 = Json::Value::operator[]((Json::Value_0 *const)this, "failIfExtra");
  Json::Value::operator=(v10, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v11 = Json::Value::operator[]((Json::Value_0 *const)this, "rejectDupKeys");
  Json::Value::operator=(v11, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v12 = Json::Value::operator[]((Json::Value_0 *const)this, "allowSpecialFloats");
  Json::Value::operator=(v12, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 1);
  v13 = Json::Value::operator[]((Json::Value_0 *const)this, "skipBom");
  Json::Value::operator=(v13, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
};

// Line 1950: range 000000000C73AEDE-000000000C73AEE9
void __fastcall __noreturn Json::CharReaderBuilder::setDefaults()
{
  Json::Value_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::~Value(v0);
  _Unwind_Resume(v1);
};

// Line 1969: range 00000000152E3040-00000000152E34B4
__int64 __fastcall Json::parseFromStream(__int64 a1, _QWORD *a2, __int64 a3, void **a4)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdi
  char *v10; // r13
  __int64 v11; // rbp
  bool (__fastcall *v12)(Json::OurCharReader *const, const char *, const char *, Json::Value *, Json::String *); // rax
  unsigned int v13; // r13d
  __int64 *v14; // rdi
  size_t v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v21; // [rsp+8h] [rbp-230h]
  char *v22; // [rsp+18h] [rbp-220h]
  __m128i v23; // [rsp+20h] [rbp-218h] BYREF
  std::locale *v24; // [rsp+30h] [rbp-208h]
  int v25[2]; // [rsp+38h] [rbp-200h]
  char *v26; // [rsp+40h] [rbp-1F8h] BYREF
  void *v27; // [rsp+48h] [rbp-1F0h]
  _BYTE v28[16]; // [rsp+50h] [rbp-1E8h] BYREF
  void *v29; // [rsp+60h] [rbp-1D8h] BYREF
  size_t n; // [rsp+68h] [rbp-1D0h]
  __int64 src[2]; // [rsp+70h] [rbp-1C8h] BYREF
  int v32[4]; // [rsp+80h] [rbp-1B8h] BYREF
  __int128 v33; // [rsp+90h] [rbp-1A8h]
  __int128 v34; // [rsp+A0h] [rbp-198h]
  __int128 v35; // [rsp+B0h] [rbp-188h]
  std::locale v36; // [rsp+C0h] [rbp-178h] BYREF
  int v37; // [rsp+C8h] [rbp-170h]
  void *v38[2]; // [rsp+D0h] [rbp-168h] BYREF
  _BYTE v39[16]; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v40[28]; // [rsp+F0h] [rbp-148h] BYREF
  __int16 v41; // [rsp+1D0h] [rbp-68h]
  __int128 v42; // [rsp+1D8h] [rbp-60h]
  __int128 v43; // [rsp+1E8h] [rbp-50h]

  v23.m128i_i64[1] = a3;
  std::ios_base::ios_base((std::ios_base *)v40);
  v42 = 0LL;
  v43 = 0LL;
  v40[0] = (__int64)&`vtable for'std::ios + 16;
  v41 = 0;
  v40[27] = 0LL;
  v6 = *((_QWORD *)&edata + 1);
  v7 = *((_QWORD *)&edata + 2);
  v8 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)v32 = v6;
  v21 = v7;
  v9 = (_QWORD *)((char *)v32 + v8);
  *v9 = v7;
  std::ios::init(v9, 0LL);
  v40[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v23.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  v24 = &v36;
  *(__m128i *)v32 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  std::locale::locale(&v36);
  v37 = 16;
  v39[0] = 0;
  *(_QWORD *)&v32[2] = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)v25 = v39;
  v38[0] = v39;
  v38[1] = 0LL;
  std::ios::init(v40, &v32[2]);
  std::ostream::operator<<(v32, *(_QWORD *)((char *)a2 + *(_QWORD *)(*a2 - 24LL) + 232));
  v28[0] = 0;
  v26 = v28;
  v27 = 0LL;
  if ( (_QWORD)v35 )
  {
    if ( (unsigned __int64)v35 > (unsigned __int64)v34 )
      std::string::_M_replace(&v26, 0LL, 0LL, *((const char **)&v34 + 1), (_QWORD)v35 - *((_QWORD *)&v34 + 1));
    else
      std::string::_M_replace(&v26, 0LL, 0LL, *((const char **)&v34 + 1), (_QWORD)v34 - *((_QWORD *)&v34 + 1));
  }
  else
  {
    std::string::_M_assign(&v26, v38);
  }
  v10 = v26;
  v22 = (char *)v27 + (_QWORD)v26;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v12 = *(bool (__fastcall **)(Json::OurCharReader *const, const char *, const char *, Json::Value *, Json::String *))(*(_QWORD *)v11 + 16LL);
  if ( v12 != Json::OurCharReader::parse )
  {
    v13 = ((__int64 (__fastcall *)(__int64, char *, char *, __int64, void **))v12)(v11, v10, v22, v23.m128i_i64[1], a4);
    goto LABEL_12;
  }
  v13 = Json::OurReader::parse(
          (Json::OurReader *)(v11 + 16),
          v10,
          v22,
          (Json::Value *)v23.m128i_i64[1],
          *(_BYTE *)(v11 + 8));
  if ( !a4 )
    goto LABEL_12;
  Json::OurReader::getFormattedErrorMessages[abi:cxx11]((__int64)&v29, (const Json::OurReader *)(v11 + 16));
  v14 = (__int64 *)*a4;
  v15 = n;
  if ( v29 == src )
  {
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)v14 = src[0];
      else
        memcpy(v14, src, n);
      v15 = n;
      v14 = (__int64 *)*a4;
    }
    a4[1] = (void *)v15;
    *((_BYTE *)v14 + v15) = 0;
    v14 = (__int64 *)v29;
    goto LABEL_10;
  }
  v16 = src[0];
  if ( v14 == (__int64 *)(a4 + 2) )
  {
    *a4 = v29;
    *(__m128i *)(a4 + 1) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)(unsigned __int64)v16);
  }
  else
  {
    v17 = (__int64)a4[2];
    *a4 = v29;
    *(__m128i *)(a4 + 1) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)(unsigned __int64)v16);
    if ( v14 )
    {
      v29 = v14;
      src[0] = v17;
      goto LABEL_10;
    }
  }
  v29 = src;
  v14 = src;
LABEL_10:
  n = 0LL;
  *(_BYTE *)v14 = 0;
  if ( v29 != src )
    operator delete(v29);
LABEL_12:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  if ( v26 != v28 )
    operator delete(v26);
  v18 = _mm_loadl_epi64(&v23);
  v40[0] = (__int64)&`vtable for'std::ostringstream + 64;
  *(__m128i *)v32 = _mm_unpacklo_epi64(v18, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v38[0] != *(void **)v25 )
    operator delete(v38[0]);
  *(_QWORD *)&v32[2] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v24);
  v19 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)v32 = v6;
  *(_QWORD *)((char *)v32 + v19) = v21;
  v40[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v40);
  return v13;
};

// Line 1980: range 00000000152E34C0-00000000152E353F
_QWORD *__fastcall Json::operator>>(_QWORD *a1, __int64 a2)
{
  Json::String v3; // [rsp+0h] [rbp-78h] BYREF
  Json::CharReaderBuilder v4; // [rsp+20h] [rbp-58h] BYREF

  Json::CharReaderBuilder::CharReaderBuilder(&v4);
  v3._M_dataplus._M_p = v3._anon_0._M_local_buf;
  v3._M_string_length = 0LL;
  v3._anon_0._M_local_buf[0] = 0;
  if ( !(unsigned __int8)Json::parseFromStream((__int64)&v4, a1, a2, (void **)&v3._M_dataplus._M_p) )
    Json::throwRuntimeError(&v3);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v3._M_dataplus._M_p != &v3._anon_0 )
    operator delete(v3._M_dataplus._M_p);
  Json::CharReaderBuilder::~CharReaderBuilder(&v4);
  return a1;
};

// Line 1990: range 000000000C7483B0-000000000C7483D9
void __cdecl GLOBAL__sub_I_json_reader_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};

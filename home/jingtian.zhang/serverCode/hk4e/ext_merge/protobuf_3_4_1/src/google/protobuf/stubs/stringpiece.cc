// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/stringpiece.cc

// Line 40: range 000000000C96E8B0-000000000C96E8BF
// local variable allocation has failed, the output may be wrong!
std::ostream *__fastcall google::protobuf::operator<<(std::ostream *o, google::protobuf::StringPiece piece)
{
  std::ostream::write(o, piece.ptr_, piece.length_);
  return o;
};

// Line 46: range 000000000C96E8C0-000000000C96E93A
void __fastcall google::protobuf::StringPiece::LogFatalSizeTooBig(
        google::protobuf::StringPiece *this,
        char *a2,
        const char *a3)
{
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v8; // [rsp+10h] [rbp-58h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(&v8, LOGLEVEL_FATAL_0, "google/protobuf/stubs/stringpiece.cc", 47);
  v3 = google::protobuf::internal::LogMessage::operator<<(&v8, "size too big: ");
  v4 = google::protobuf::internal::LogMessage::operator<<(v3, (unsigned __int64)this);
  v5 = google::protobuf::internal::LogMessage::operator<<(v4, " details: ");
  v6 = google::protobuf::internal::LogMessage::operator<<(v5, a2);
  google::protobuf::internal::LogFinisher::operator=(&v7, v6);
  google::protobuf::internal::LogMessage::~LogMessage(&v8);
};

// Line 47: range 000000000C734A1E-000000000C734A2B
void __fastcall __noreturn google::protobuf::StringPiece::LogFatalSizeTooBig(
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

// Line 51: range 000000000C96E940-000000000C96E94D
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::StringPiece::StringPiece(
        google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece x,
        google::protobuf::stringpiece_ssize_type pos)
{
  this->ptr_ = &x.ptr_[pos];
  this->length_ = x.length_ - pos;
};

// Line 59: range 000000000C96E950-000000000C96E964
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::StringPiece::StringPiece(
        google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece x,
        google::protobuf::stringpiece_ssize_type pos,
        google::protobuf::stringpiece_ssize_type len)
{
  x.length_ -= pos;
  this->ptr_ = &x.ptr_[pos];
  this->length_ = len;
};

// Line 65: range 000000000C96E970-000000000C96E983
void __fastcall google::protobuf::StringPiece::CopyToString(
        const google::protobuf::StringPiece *const this,
        std::string *target)
{
  std::string::_M_replace(target, 0LL, target->_M_string_length, this->ptr_, this->length_);
};

// Line 69: range 000000000C96E990-000000000C96E9BB
void __fastcall google::protobuf::StringPiece::AppendToString(
        const google::protobuf::StringPiece *const this,
        std::string *target)
{
  if ( this->length_ > 0x3FFFFFFFFFFFFFFFLL - target->_M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(target, this->ptr_);
};

// Line 73: range 000000000C96E9C0-000000000C96EA07
// local variable allocation has failed, the output may be wrong!
bool __fastcall google::protobuf::StringPiece::Consume(
        google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece x)
{
  bool v2; // r13
  google::protobuf::stringpiece_ssize_type length; // r12
  const char *ptr; // r14
  google::protobuf::stringpiece_ssize_type v5; // rbp

  v2 = 0;
  length = this->length_;
  if ( length >= x.length_ )
  {
    ptr = this->ptr_;
    v5 = x.length_;
    if ( !memcmp(this->ptr_, x.ptr_, x.length_) )
    {
      v2 = 1;
      this->ptr_ = &ptr[v5];
      this->length_ = length - v5;
    }
  }
  return v2;
};

// Line 82: range 000000000C96EA10-000000000C96EA49
// local variable allocation has failed, the output may be wrong!
bool __fastcall google::protobuf::StringPiece::ConsumeFromEnd(
        google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece x)
{
  bool v2; // r12
  google::protobuf::stringpiece_ssize_type length; // rax
  google::protobuf::stringpiece_ssize_type v4; // rbp

  v2 = 0;
  length = this->length_;
  if ( length >= x.length_ )
  {
    v4 = length - x.length_;
    if ( !memcmp(&this->ptr_[length - x.length_], x.ptr_, x.length_) )
    {
      this->length_ = v4;
      return 1;
    }
  }
  return v2;
};

// Line 92: range 000000000C96EA50-000000000C96EA79
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::copy(
        const google::protobuf::StringPiece *const this,
        char *buf,
        google::protobuf::StringPiece::size_type n,
        google::protobuf::StringPiece::size_type pos)
{
  google::protobuf::StringPiece::size_type v4; // r12

  v4 = this->length_ - pos;
  if ( v4 > n )
    v4 = n;
  memcpy(buf, &this->ptr_[pos], v4);
  return v4;
};

// Line 98: range 000000000C96EFF0-000000000C96F006
// local variable allocation has failed, the output may be wrong!
bool __fastcall google::protobuf::StringPiece::contains(
        const google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece s)
{
  return google::protobuf::StringPiece::find(this, s, 0LL) != -1;
};

// Line 102: range 000000000C96EF00-000000000C96EFE2
// local variable allocation has failed, the output may be wrong!
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::find(
        const google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece s,
        google::protobuf::StringPiece::size_type pos)
{
  const char *v3; // rsi
  __gnu_cxx::__ops::_Iter_equals_iter<char const*> v4; // r12
  google::protobuf::stringpiece_ssize_type length; // rsi
  const char *ptr; // r13
  const char *v7; // rbp
  const char *v8; // rbx
  const char *v9; // rdi
  const char *v10; // rax
  _BYTE *v11; // rsi
  _BYTE *v12; // rdx
  std::random_access_iterator_tag v14; // [rsp+0h] [rbp-28h]

  v4._M_it1 = v3;
  length = this->length_;
  if ( length <= 0 )
    return -(__int64)(((google::protobuf::StringPiece::size_type)s.ptr_ | s.length_ | pos) != 0);
  if ( length >= pos )
  {
    ptr = this->ptr_;
    v7 = &v4._M_it1[s.length_];
    v8 = &this->ptr_[(unsigned __int64)s.ptr_];
    v9 = &this->ptr_[pos];
    if ( v8 != v9 )
    {
      if ( v7 != v4._M_it1 )
      {
        if ( v7 != v4._M_it1 + 1 )
        {
          while ( 1 )
          {
            v10 = std::__find_if<char const*,__gnu_cxx::__ops::_Iter_equals_iter<char const*>>(v9, v8, v4, v14);
            if ( v8 == v10 )
              break;
            v9 = v10 + 1;
            if ( v8 == v10 + 1 )
              break;
            v11 = v10 + 1;
            v12 = v4._M_it1 + 1;
            while ( *v11 == *v12 )
            {
              if ( v7 == ++v12 )
              {
                v9 = v10;
                return v9 - ptr;
              }
              if ( v8 == ++v11 )
                return -1LL;
            }
          }
          return -1LL;
        }
        v9 = std::__find_if<char const*,__gnu_cxx::__ops::_Iter_equals_iter<char const*>>(v9, v8, v4, v14);
      }
      if ( v8 != v9 )
        return v9 - ptr;
    }
  }
  return -1LL;
};

// Line 113: range 000000000C96EA80-000000000C96EAC0
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::find(
        const google::protobuf::StringPiece *const this,
        char c,
        google::protobuf::StringPiece::size_type pos)
{
  google::protobuf::stringpiece_ssize_type length; // rax
  const char *ptr; // rbx
  _BYTE *v5; // rax

  length = this->length_;
  if ( length <= 0 || length <= pos )
    return -1LL;
  ptr = this->ptr_;
  v5 = memchr(&this->ptr_[pos], c, length - pos);
  if ( v5 )
    return v5 - ptr;
  else
    return -1LL;
};

// Line 122: range 000000000C96F010-000000000C96F158
// local variable allocation has failed, the output may be wrong!
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::rfind(
        const google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece s,
        google::protobuf::StringPiece::size_type pos)
{
  google::protobuf::stringpiece_ssize_type result; // rax
  google::protobuf::stringpiece_ssize_type length; // rbx
  google::protobuf::StringPiece::size_type v5; // rax
  const char *ptr; // r13
  google::protobuf::StringPiece::size_type v7; // rax
  const char *v8; // r14
  const char *v9; // r15
  const char *v10; // r12
  const char *v11; // rsi
  const char *current; // rax
  const char *v13; // rcx
  const char *v14; // rdx
  const char *v15; // rax
  const char *v16; // [rsp+0h] [rbp-58h] BYREF
  __gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<char const*> > __pred; // [rsp+8h] [rbp-50h] BYREF
  std::random_access_iterator_tag v18[8]; // [rsp+10h] [rbp-48h] BYREF
  std::reverse_iterator<char const*> __first; // [rsp+18h] [rbp-40h] BYREF

  result = this->length_;
  if ( result < s.length_ )
    return -1LL;
  length = s.length_;
  if ( s.length_ )
  {
    v5 = result - s.length_;
    ptr = this->ptr_;
    if ( v5 > pos )
      v5 = pos;
    v7 = s.length_ + v5;
    v8 = &ptr[v7];
    if ( ptr != &ptr[v7] )
    {
      v9 = &s.ptr_[s.length_];
      v10 = s.ptr_;
      v11 = &ptr[v7];
      if ( v10 == v9 - 1 )
      {
        __first.current = v9;
        *(_QWORD *)v18[0].gap0 = ptr;
        __pred._M_it1.current = &ptr[v7];
        std::__find_if<std::reverse_iterator<char const*>,__gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<char const*>>>(
          (std::reverse_iterator<char const*>)&v16,
          (std::reverse_iterator<char const*>)&__pred,
          (__gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<char const*> >)v18,
          (std::random_access_iterator_tag)&__first);
        current = v16;
        if ( ptr != v16 )
        {
LABEL_17:
          v15 = &current[-length];
          if ( v8 != v15 )
            return v15 - this->ptr_;
        }
      }
      else
      {
        while ( 1 )
        {
          v16 = v11;
          *(_QWORD *)v18[0].gap0 = v9;
          __pred._M_it1.current = ptr;
          std::__find_if<std::reverse_iterator<char const*>,__gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<char const*>>>(
            (std::reverse_iterator<char const*>)&__first,
            (std::reverse_iterator<char const*>)&v16,
            (__gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<char const*> >)&__pred,
            (std::random_access_iterator_tag)v18);
          current = __first.current;
          if ( ptr == __first.current )
            break;
          v11 = __first.current - 1;
          if ( ptr == __first.current - 1 )
            break;
          v13 = v9 - 2;
          v14 = __first.current - 1;
          while ( *(v14 - 1) == *v13 )
          {
            if ( v13 == v10 )
              goto LABEL_17;
            --v14;
            --v13;
            if ( ptr == v14 )
              return -1LL;
          }
        }
      }
    }
    return -1LL;
  }
  if ( result > pos )
    return pos;
  return result;
};

// Line 134: range 000000000C96EAD0-000000000C96EB10
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::rfind(
        const google::protobuf::StringPiece *const this,
        char c,
        google::protobuf::StringPiece::size_type pos)
{
  google::protobuf::stringpiece_ssize_type length; // rax
  google::protobuf::stringpiece_ssize_type result; // rax

  length = this->length_;
  if ( length <= 0 )
    return -1LL;
  result = length - 1;
  if ( result > pos )
    result = pos;
  do
  {
    if ( this->ptr_[result] == c )
      break;
    --result;
  }
  while ( result != -1 );
  return result;
};

// Line 164: range 000000000C96EB20-000000000C96EBD6
// local variable allocation has failed, the output may be wrong!
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::find_first_of(
        const google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece s,
        google::protobuf::StringPiece::size_type pos)
{
  google::protobuf::stringpiece_ssize_type length; // r11
  unsigned __int8 v4; // r8
  google::protobuf::stringpiece_ssize_type v5; // rax
  __int64 v6; // rsi
  google::protobuf::stringpiece_ssize_type result; // rax
  bool lookup[256]; // [rsp+0h] [rbp-108h] BYREF

  length = this->length_;
  if ( length <= 0 || s.length_ <= 0 )
    return -1LL;
  v4 = *s.ptr_;
  if ( s.length_ == 1 )
    return google::protobuf::StringPiece::find(this, v4, pos);
  v5 = 0LL;
  memset(lookup, 0, sizeof(lookup));
  while ( 1 )
  {
    ++v5;
    lookup[v4] = 1;
    if ( s.length_ <= v5 )
      break;
    v4 = *(_BYTE *)(v6 + v5);
  }
  result = pos;
  if ( length <= (__int64)pos )
    return -1LL;
  while ( !lookup[(unsigned __int8)this->ptr_[result]] )
  {
    if ( length == ++result )
      return -1LL;
  }
  return result;
};

// Line 182: range 000000000C96EBE0-000000000C96ECAE
// local variable allocation has failed, the output may be wrong!
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::find_first_not_of(
        const google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece s,
        google::protobuf::StringPiece::size_type pos)
{
  google::protobuf::stringpiece_ssize_type length; // r11
  google::protobuf::stringpiece_ssize_type result; // rax
  __int64 v5; // r8
  google::protobuf::stringpiece_ssize_type v6; // r9
  const char *v7; // rdx
  const char *i; // rax
  bool lookup[256]; // [rsp+0h] [rbp-108h] BYREF

  length = this->length_;
  if ( length <= 0 )
    return -1LL;
  result = 0LL;
  if ( s.length_ <= 0 )
    return result;
  v5 = (unsigned __int8)*s.ptr_;
  v6 = pos;
  if ( s.length_ != 1 )
  {
    s.length_ += (google::protobuf::stringpiece_ssize_type)s.ptr_;
    memset(lookup, 0, sizeof(lookup));
    for ( i = s.ptr_ + 1; ; ++i )
    {
      lookup[v5] = 1;
      if ( v7 == i )
        break;
      v5 = *(unsigned __int8 *)i;
    }
    result = pos;
    if ( length <= (__int64)pos )
      return -1LL;
    while ( lookup[(unsigned __int8)this->ptr_[result]] )
    {
      if ( length == ++result )
        return -1LL;
    }
    return result;
  }
  if ( pos >= length )
    return -1LL;
  while ( this->ptr_[v6] == (_BYTE)v5 )
  {
    if ( ++v6 == length )
      return -1LL;
  }
  return v6;
};

// Line 199: range 000000000C96ECB0-000000000C96ECE7
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::find_first_not_of(
        const google::protobuf::StringPiece *const this,
        char c,
        google::protobuf::StringPiece::size_type pos)
{
  google::protobuf::stringpiece_ssize_type length; // rax

  length = this->length_;
  if ( length <= 0 || pos >= length )
    return -1LL;
  while ( this->ptr_[pos] == c )
  {
    if ( ++pos == length )
      return -1LL;
  }
  return pos;
};

// Line 211: range 000000000C96ECF0-000000000C96EDBC
// local variable allocation has failed, the output may be wrong!
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::find_last_of(
        const google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece s,
        google::protobuf::StringPiece::size_type pos)
{
  google::protobuf::stringpiece_ssize_type length; // rax
  google::protobuf::StringPiece::size_type v4; // rax
  unsigned __int8 *v5; // rsi
  __int64 v6; // r9
  const char *ptr; // r10
  google::protobuf::stringpiece_ssize_type v8; // r8
  google::protobuf::stringpiece_ssize_type v9; // rax
  __int64 v10; // rsi
  bool lookup[256]; // [rsp+0h] [rbp-108h] BYREF

  length = this->length_;
  if ( s.length_ <= 0 || length <= 0 )
    return -1LL;
  v4 = length - 1;
  v6 = *v5;
  ptr = this->ptr_;
  if ( v4 <= pos )
    pos = v4;
  v8 = pos;
  if ( s.length_ == 1 )
  {
    do
    {
      if ( ptr[v8] == (_BYTE)v6 )
        break;
      --v8;
    }
    while ( v8 != -1 );
    return v8;
  }
  else
  {
    v9 = 0LL;
    memset(lookup, 0, sizeof(lookup));
    while ( 1 )
    {
      ++v9;
      lookup[v6] = 1;
      if ( s.length_ <= v9 )
        break;
      v6 = *(unsigned __int8 *)(v10 + v9);
    }
    if ( lookup[(unsigned __int8)ptr[pos]] )
    {
      return v8;
    }
    else
    {
      while ( --v8 != -1 )
      {
        if ( lookup[(unsigned __int8)ptr[v8]] )
          return v8;
      }
      return -1LL;
    }
  }
};

// Line 228: range 000000000C96EDC0-000000000C96EE89
// local variable allocation has failed, the output may be wrong!
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::find_last_not_of(
        const google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece s,
        google::protobuf::StringPiece::size_type pos)
{
  google::protobuf::stringpiece_ssize_type length; // rax
  google::protobuf::StringPiece::size_type v4; // rax
  google::protobuf::stringpiece_ssize_type v5; // r8
  __int64 v6; // r9
  const char *ptr; // r10
  const char *v8; // rdx
  const char *i; // rax
  bool lookup[256]; // [rsp+0h] [rbp-108h] BYREF

  length = this->length_;
  if ( length <= 0 )
    return -1LL;
  v4 = length - 1;
  if ( v4 <= pos )
    pos = v4;
  v5 = pos;
  if ( s.length_ <= 0 )
    return v5;
  v6 = (unsigned __int8)*s.ptr_;
  ptr = this->ptr_;
  if ( s.length_ == 1 )
  {
    do
    {
      if ( (_BYTE)v6 != ptr[v5] )
        break;
      --v5;
    }
    while ( v5 != -1 );
    return v5;
  }
  s.length_ += (google::protobuf::stringpiece_ssize_type)s.ptr_;
  memset(lookup, 0, sizeof(lookup));
  for ( i = s.ptr_ + 1; ; ++i )
  {
    lookup[v6] = 1;
    if ( v8 == i )
      break;
    v6 = *(unsigned __int8 *)i;
  }
  if ( !lookup[(unsigned __int8)ptr[pos]] )
    return v5;
  while ( --v5 != -1 )
  {
    if ( !lookup[(unsigned __int8)ptr[v5]] )
      return v5;
  }
  return -1LL;
};

// Line 248: range 000000000C96EE90-000000000C96EED0
google::protobuf::stringpiece_ssize_type __fastcall google::protobuf::StringPiece::find_last_not_of(
        const google::protobuf::StringPiece *const this,
        char c,
        google::protobuf::StringPiece::size_type pos)
{
  google::protobuf::stringpiece_ssize_type length; // rax
  google::protobuf::stringpiece_ssize_type result; // rax

  length = this->length_;
  if ( length <= 0 )
    return -1LL;
  result = length - 1;
  if ( result > pos )
    result = pos;
  do
  {
    if ( this->ptr_[result] != c )
      break;
    --result;
  }
  while ( result != -1 );
  return result;
};

// Line 260: range 000000000C96EEE0-000000000C96EEFE
// local variable allocation has failed, the output may be wrong!
google::protobuf::StringPiece __fastcall google::protobuf::StringPiece::substr(
        const google::protobuf::StringPiece *const this,
        google::protobuf::StringPiece::size_type pos,
        google::protobuf::StringPiece::size_type n)
{
  unsigned __int64 length; // rax
  __int64 v4; // rax
  google::protobuf::StringPiece::size_type v5; // rax
  const char *v6; // rax
  google::protobuf::StringPiece result; // rax

  length = this->length_;
  if ( length <= pos )
    pos = this->length_;
  v5 = v4 - pos;
  if ( v5 <= n )
    n = v5;
  v6 = &this->ptr_[pos];
  result.length_ = n;
  return result;
};

// Line 268: range 000000000C747320-000000000C747341
void __cdecl GLOBAL__sub_I__ZN6google8protobuflsERSoNS0_11StringPieceE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};

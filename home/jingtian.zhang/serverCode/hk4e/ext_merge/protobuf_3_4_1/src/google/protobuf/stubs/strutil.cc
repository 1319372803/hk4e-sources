// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/strutil.cc

// Line 101: range 000000000C8E3140-000000000C8E3199
void __fastcall google::protobuf::ReplaceCharacters(std::string *s, const char *remove, char replacewith)
{
  std::string::pointer M_p; // r13
  char *v5; // rax
  std::string::pointer i; // rcx

  M_p = s->_M_dataplus._M_p;
  v5 = strpbrk(s->_M_dataplus._M_p, remove);
  if ( v5 )
  {
    for ( i = M_p; ; i = s->_M_dataplus._M_p )
    {
      i[v5 - M_p] = replacewith;
      v5 = strpbrk(v5 + 1, remove);
      if ( !v5 )
        break;
    }
  }
};

// Line 111: range 000000000C8E31B0-000000000C8E32EA
void __fastcall google::protobuf::StripWhitespace(std::string *str)
{
  std::string::size_type M_string_length; // rdx
  std::string::pointer M_p; // r8
  int v4; // r12d
  std::string::size_type v5; // rsi
  char v6; // al
  int v7; // ebp
  int v8; // r9d
  int v9; // eax
  std::string::pointer v10; // rdi
  char v11; // cl
  std::string::size_type v12; // rax

  M_string_length = str->_M_string_length;
  if ( (int)M_string_length <= 0 )
  {
    if ( !(_DWORD)M_string_length )
    {
      M_p = str->_M_dataplus._M_p;
LABEL_25:
      str->_M_string_length = 0LL;
      *M_p = 0;
    }
  }
  else
  {
    if ( !M_string_length )
    {
      v5 = 0LL;
LABEL_15:
      std::__throw_out_of_range_fmt(
        "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)",
        v5,
        M_string_length);
    }
    M_p = str->_M_dataplus._M_p;
    v4 = str->_M_string_length;
    v5 = 0LL;
    while ( 1 )
    {
      v6 = M_p[v5];
      v7 = v5;
      if ( (unsigned __int8)(v6 - 9) > 4u && v6 != 32 )
        break;
      v7 = v5 + 1;
      if ( v5 == (_DWORD)M_string_length - 1 )
      {
        if ( (_DWORD)M_string_length == v7 )
          goto LABEL_25;
        goto LABEL_18;
      }
      if ( M_string_length == ++v5 )
        goto LABEL_15;
    }
    v8 = M_string_length - 1;
    if ( !(_DWORD)v5 )
      goto LABEL_7;
LABEL_18:
    if ( v7 <= M_string_length )
      M_string_length = v7;
    std::string::_M_erase(str, 0LL, M_string_length);
    v8 = v4 - v7 - 1;
    if ( v8 < 0 )
      return;
    M_string_length = str->_M_string_length;
LABEL_7:
    v5 = v8;
    v9 = v8;
    while ( 1 )
    {
      if ( v5 >= M_string_length )
        goto LABEL_15;
      v10 = str->_M_dataplus._M_p;
      v11 = str->_M_dataplus._M_p[v5];
      if ( (unsigned __int8)(v11 - 9) > 4u && v11 != 32 )
        break;
      --v9;
      --v5;
      if ( v9 == -1 )
        return;
    }
    if ( v8 != v9 )
    {
      v12 = v9 + 1;
      if ( v12 > M_string_length )
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::erase",
          v12,
          M_string_length);
      str->_M_string_length = v12;
      v10[v12] = 0;
    }
  }
};

// Line 148: range 000000000C8E32F0-000000000C8E33C8
void __fastcall google::protobuf::StringReplace(
        const std::string *s,
        const std::string *oldsub,
        const std::string *newsub,
        bool replace_all,
        std::string *res)
{
  std::string::size_type v7; // r12
  std::string::size_type M_string_length; // rcx
  std::string::size_type v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx

  if ( oldsub->_M_string_length )
  {
    v7 = 0LL;
    do
    {
      v10 = std::string::find(s, oldsub->_M_dataplus._M_p, v7);
      v11 = v10;
      if ( v10 == -1 )
        break;
      M_string_length = s->_M_string_length;
      v9 = v10 - v7;
      if ( v10 - v7 > M_string_length - v7 )
        v9 = s->_M_string_length - v7;
      if ( v7 > M_string_length )
        goto LABEL_12;
      std::string::_M_append(res, &s->_M_dataplus._M_p[v7], v9);
      std::string::_M_append(res, newsub->_M_dataplus._M_p, newsub->_M_string_length);
      v7 = v11 + oldsub->_M_string_length;
    }
    while ( replace_all );
    M_string_length = s->_M_string_length;
    if ( M_string_length < v7 )
LABEL_12:
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::append",
        v7,
        M_string_length);
    std::string::_M_append(res, &s->_M_dataplus._M_p[v7], s->_M_string_length - v7);
  }
  else
  {
    std::string::_M_append(res, s->_M_dataplus._M_p, s->_M_string_length);
  }
};

// Line 178: range 000000000C8E33D0-000000000C8E340F
std::string *__fastcall google::protobuf::StringReplace(
        std::string *res,
        std::string *s,
        std::string *oldsub,
        std::string *newsub,
        bool a5)
{
  res->_M_dataplus._M_p = res->_anon_0._M_local_buf;
  res->_M_string_length = 0LL;
  res->_anon_0._M_local_buf[0] = 0;
  google::protobuf::StringReplace(s, oldsub, newsub, a5, res);
  return res;
};

// Line 229: range 000000000C8E6F10-000000000C8E70EA
void __fastcall google::protobuf::SplitStringUsing(
        __int64 a1,
        char *a2,
        std::vector<std::string> *a3,
        std::forward_iterator_tag a4)
{
  char v6; // r12
  size_t v7; // rax
  __int64 v8; // rdx
  size_t i; // rcx
  size_t v10; // rax
  __int64 first_of; // rax
  std::forward_iterator_tag v12; // cl
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  const char *v16; // rsi
  unsigned __int64 v17; // rdx
  const char *v18; // rsi
  std::string *v19; // rdx
  size_t v20; // rax
  unsigned __int64 first_not_of; // r12
  const char *v22; // rsi
  const char *v23; // rbp
  const char *v24; // rbx
  std::string *v25; // rdx
  const char *v26; // rsi
  std::string *v27; // rdx
  std::string v28[2]; // [rsp+0h] [rbp-58h] BYREF

  v6 = *a2;
  if ( *a2 && !a2[1] )
  {
    v22 = *(const char **)a1;
    v23 = (const char *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8));
    if ( *(const char **)a1 != v23 )
    {
      do
      {
        if ( v6 == *v22 )
        {
          ++v22;
        }
        else
        {
          v24 = v22;
          do
            ++v24;
          while ( v23 != v24 && v6 != *v24 );
          v28[0]._M_dataplus._M_p = v28[0]._anon_0._M_local_buf;
          std::string::_M_construct<char const*>(v28, v22, v24, a4);
          std::vector<std::string>::emplace_back<std::string>(a3, v28, v25);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28[0]._M_dataplus._M_p != &v28[0]._anon_0 )
            operator delete(v28[0]._M_dataplus._M_p);
          v22 = v24;
        }
      }
      while ( v23 != v22 );
    }
  }
  else
  {
    v7 = strlen(a2);
    v8 = 0LL;
    for ( i = v7; ; i = v20 )
    {
      first_not_of = std::string::find_first_not_of(a1, a2, v8, i);
      if ( first_not_of == -1LL )
        break;
      v10 = strlen(a2);
      first_of = std::string::find_first_of(a1, a2, first_not_of, v10);
      v13 = first_of;
      if ( first_of == -1 )
      {
        v14 = *(_QWORD *)(a1 + 8);
        if ( v14 < first_not_of )
LABEL_27:
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::substr",
            first_not_of,
            v14);
        v26 = *(const char **)a1;
        v28[0]._M_dataplus._M_p = v28[0]._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(v28, &v26[first_not_of], &v26[v14], v12);
        std::vector<std::string>::emplace_back<std::string>(a3, v28, v27);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28[0]._M_dataplus._M_p != &v28[0]._anon_0 )
          operator delete(v28[0]._M_dataplus._M_p);
        return;
      }
      v14 = *(_QWORD *)(a1 + 8);
      v15 = first_of - first_not_of;
      if ( first_not_of > v14 )
        goto LABEL_27;
      v16 = *(const char **)a1;
      v17 = v14 - first_not_of;
      v28[0]._M_dataplus._M_p = v28[0]._anon_0._M_local_buf;
      v18 = &v16[first_not_of];
      if ( v17 > v15 )
        v17 = first_of - first_not_of;
      std::string::_M_construct<char const*>(v28, v18, &v18[v17], (std::forward_iterator_tag)v15);
      std::vector<std::string>::emplace_back<std::string>(a3, v28, v19);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28[0]._M_dataplus._M_p != &v28[0]._anon_0 )
        operator delete(v28[0]._M_dataplus._M_p);
      v20 = strlen(a2);
      v8 = v13;
    }
  }
};

// Line 267: range 000000000C8E70F0-000000000C8E71F4
void __fastcall google::protobuf::SplitStringAllowEmpty(__int64 *a1, const char *a2, std::vector<std::string> *a3)
{
  unsigned __int64 i; // r15
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  const char *v9; // rsi
  std::string *v10; // rdx
  size_t v11; // rax
  __int64 first_of; // rax
  std::forward_iterator_tag v13; // cl
  __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  std::string *v17; // rdx
  std::string v18[2]; // [rsp+0h] [rbp-58h] BYREF

  for ( i = 0LL; ; i = v14 + 1 )
  {
    v11 = strlen(a2);
    first_of = std::string::find_first_of(a1, a2, i, v11);
    v14 = first_of;
    if ( first_of == -1 )
      break;
    v6 = a1[1];
    if ( i > v6 )
      goto LABEL_14;
    v7 = *a1;
    v8 = v6 - i;
    v18[0]._M_dataplus._M_p = v18[0]._anon_0._M_local_buf;
    v9 = (const char *)(i + v7);
    if ( v8 > first_of - i )
      v8 = first_of - i;
    std::string::_M_construct<char const*>(v18, v9, &v9[v8], (std::forward_iterator_tag)v8);
    std::vector<std::string>::emplace_back<std::string>(a3, v18, v10);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18[0]._M_dataplus._M_p != &v18[0]._anon_0 )
      operator delete(v18[0]._M_dataplus._M_p);
  }
  v15 = a1[1];
  if ( i > v15 )
  {
    v6 = a1[1];
LABEL_14:
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      i,
      v6);
  }
  v16 = *a1;
  v18[0]._M_dataplus._M_p = v18[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v18, (const char *)(i + v16), (const char *)(v16 + v15), v13);
  std::vector<std::string>::emplace_back<std::string>(a3, v18, v17);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18[0]._M_dataplus._M_p != &v18[0]._anon_0 )
    operator delete(v18[0]._M_dataplus._M_p);
};

// Line 283: range 000000000C72CB20-000000000C72CB2D
void __fastcall __noreturn google::protobuf::JoinStrings(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        google::protobuf::internal::LogMessage_0 a10)
{
  struct _Unwind_Exception *v10; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a10);
  _Unwind_Resume(v10);
};

// Line 308: range 000000000C8E3420-000000000C8E3586
__int64 __fastcall google::protobuf::JoinStrings(__int64 *a1, const char *a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  _BYTE *v7; // rax
  __int64 v8; // r12
  int v9; // esi
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  const char *v12; // rsi
  __int64 result; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  int v15; // [rsp+Ch] [rbp-8Ch]
  google::protobuf::internal::LogFinisher v16; // [rsp+1Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v17; // [rsp+20h] [rbp-78h] BYREF

  v5 = a1[1];
  v6 = *a1;
  if ( !a3 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v17, LOGLEVEL_FATAL_0, "google/protobuf/stubs/strutil.cc", 283);
    v14 = google::protobuf::internal::LogMessage::operator<<(&v17, "CHECK failed: result != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v16, v14);
    google::protobuf::internal::LogMessage::~LogMessage(&v17);
  }
  v7 = *(_BYTE **)a3;
  *(_QWORD *)(a3 + 8) = 0LL;
  *v7 = 0;
  v15 = strlen(a2);
  if ( v5 == v6 )
    return std::string::reserve(a3, 0LL);
  v8 = v6 + 32;
  v9 = 0;
  while ( 1 )
  {
    v9 += *(_DWORD *)(v8 - 24);
    if ( v5 == v8 )
      break;
    if ( v6 != v8 )
      v9 += v15;
    v8 += 32LL;
  }
  v10 = v6;
  std::string::reserve(a3, v9);
  do
  {
    v11 = 0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a3 + 8);
    if ( v6 != v10 )
    {
      if ( v15 > v11 )
        goto LABEL_17;
      std::string::_M_append(a3, a2);
      v11 = 0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a3 + 8);
    }
    v12 = *(const char **)v10;
    if ( *(_QWORD *)(v10 + 8) > v11 )
LABEL_17:
      std::__throw_length_error("basic_string::append");
    v10 += 32LL;
    result = std::string::_M_append(a3, v12);
  }
  while ( v8 != v10 );
  return result;
};

// Line 331: range 000000000C8E37D0-000000000C8E37D2
int __fastcall google::protobuf::UnescapeCEscapeSequences(const char *source, char *dest)
{
  return google::protobuf::UnescapeCEscapeSequences(source, dest, 0LL);
};

// Line 342: range 000000000C8E3590-000000000C8E37CA
int __fastcall google::protobuf::UnescapeCEscapeSequences(
        const char *source,
        char *dest,
        std::vector<std::string> *errors)
{
  char v3; // dl
  char *v4; // rax
  int v6; // ecx
  const char *i; // r8
  int v8; // edi
  char v9; // cl
  char v10; // dl
  char v11; // dl
  const char *v12; // r9

  v3 = *source;
  v4 = dest;
  if ( dest == source )
  {
    while ( v3 )
    {
      if ( v3 != 92 )
      {
        ++source;
        ++v4;
        v3 = *source;
        if ( source == v4 )
          continue;
      }
      goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    while ( v3 )
    {
      for ( i = source + 1; v3 != 92; ++i )
      {
        *v4 = v3;
        v3 = source[1];
        ++v4;
        source = i;
        if ( !v3 )
          goto LABEL_6;
      }
      v10 = source[1];
      switch ( v10 )
      {
        case 0:
          goto LABEL_6;
        case 34:
          *v4 = 34;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        case 39:
          *v4 = 39;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
          v11 = v10 - 48;
          if ( (unsigned __int8)(source[2] - 48) > 7u )
          {
            source += 2;
          }
          else
          {
            v11 = source[2] - 48 + 8 * v11;
            v12 = source + 2;
            i = source + 3;
            if ( (unsigned __int8)(source[3] - 48) > 7u )
            {
              source += 3;
              i = v12;
            }
            else
            {
              v11 = source[3] - 48 + 8 * v11;
              source += 4;
            }
          }
          *v4++ = v11;
          v3 = i[1];
          goto LABEL_14;
        case 63:
          *v4 = 63;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        case 88:
        case 120:
          v3 = source[2];
          if ( (unsigned __int8)(v3 - 48) > 9u && (unsigned __int8)((v3 & 0xDF) - 65) > 5u )
            goto LABEL_20;
          v6 = 0;
          if ( (unsigned __int8)(v3 - 48) <= 9u )
            goto LABEL_10;
          while ( (unsigned __int8)((v3 & 0xDF) - 65) <= 5u )
          {
            ++i;
            v8 = 16 * v6;
            v9 = v3;
            if ( (unsigned __int8)v3 > 0x39u )
              v9 = v3 + 9;
            while ( 1 )
            {
              v3 = i[1];
              v6 = v8 + (v9 & 0xF);
              if ( (unsigned __int8)(v3 - 48) > 9u )
                break;
LABEL_10:
              ++i;
              v8 = 16 * v6;
              v9 = v3;
            }
          }
          *v4 = v6;
          v3 = i[1];
          source = i + 1;
          ++v4;
          break;
        case 92:
          *v4 = 92;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        case 97:
          *v4 = 7;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        case 98:
          *v4 = 8;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        case 102:
          *v4 = 12;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        case 110:
          *v4 = 10;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        case 114:
          *v4 = 13;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        case 116:
          *v4 = 9;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        case 118:
          *v4 = 11;
          source += 2;
          v3 = *source;
          ++v4;
          goto LABEL_14;
        default:
          v3 = source[2];
LABEL_20:
          source += 2;
          break;
      }
    }
  }
LABEL_6:
  *v4 = 0;
  return (_DWORD)v4 - (_DWORD)dest;
};

// Line 467: range 000000000C8E38C0-000000000C8E38C2
int __fastcall google::protobuf::UnescapeCEscapeString(const std::string *src, std::string *dest)
{
  return google::protobuf::UnescapeCEscapeString(src, dest, 0LL);
};

// Line 471: range 000000000C8E37E0-000000000C8E38AC
__int64 __fastcall google::protobuf::UnescapeCEscapeString(__int64 a1, __int64 a2, std::vector<std::string> *a3)
{
  char *v4; // rbp
  int v5; // r13d
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v8; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v9; // [rsp+10h] [rbp-68h] BYREF

  v4 = (char *)operator new[](*(_QWORD *)(a1 + 8) + 1LL);
  v5 = google::protobuf::UnescapeCEscapeSequences(*(const char **)a1, v4, a3);
  if ( !a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v9, LOGLEVEL_FATAL_0, "google/protobuf/stubs/strutil.cc", 474);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: dest: ");
    google::protobuf::internal::LogFinisher::operator=(&v8, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
  }
  std::string::_M_replace(a2, 0LL, *(_QWORD *)(a2 + 8), v4, v5);
  operator delete[](v4);
  return (unsigned int)v5;
};

// Line 474: range 000000000C72CB32-000000000C72CB47
void __fastcall __noreturn google::protobuf::UnescapeCEscapeString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  void *v8; // rbp
  struct _Unwind_Exception *v9; // r12

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  operator delete[](v8);
  _Unwind_Resume(v9);
};

// Line 479: range 000000000C8E5F30-000000000C8E5F81
std::string *__fastcall google::protobuf::UnescapeCEscapeString(std::string *this, __int64 a2)
{
  char *v3; // rax
  const char *v4; // rdi
  const char *v5; // rsi
  char *v6; // rbp
  int v7; // eax
  std::forward_iterator_tag v8; // cl

  v3 = (char *)operator new[](*(_QWORD *)(a2 + 8) + 1LL);
  v4 = *(const char **)a2;
  v5 = v3;
  v6 = v3;
  v7 = google::protobuf::UnescapeCEscapeSequences(v4, v3, 0LL);
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char const*>(this, v5, &v6[v7], v8);
  operator delete[](v6);
  return this;
};

// Line 498: range 000000000C8E38D0-000000000C8E3ADA
int __fastcall google::protobuf::CEscapeInternal(
        const char *src,
        int src_len,
        char *dest,
        int dest_len,
        bool use_hex,
        bool utf8_safe)
{
  const char *v7; // r13
  const char *v9; // rsi
  const char *v10; // rbx
  _BOOL8 v11; // rcx
  int v13; // edi
  _BOOL8 v14; // r8
  int v15; // r12d
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  bool is_hex_escape; // [rsp+Fh] [rbp-39h]

  v7 = &src[src_len];
  if ( src >= v7 )
  {
    v13 = dest_len;
    v15 = 0;
LABEL_15:
    if ( v13 > 0 )
    {
      dest[v15] = 0;
      return v15;
    }
  }
  else if ( dest_len > 1 )
  {
    v9 = "\\x%02x";
    v10 = src;
    if ( !use_hex )
      v9 = "\\%03o";
    v11 = use_hex;
    v13 = dest_len;
    v14 = 0LL;
    v15 = 0;
    while ( 1 )
    {
      v16 = *(unsigned __int8 *)v10;
      if ( (char)v16 > 39 )
        break;
      if ( (char)v16 > 8 )
      {
        switch ( (char)v16 )
        {
          case 9:
            v24 = v15 + 1;
            v25 = v15;
            v14 = 0LL;
            v15 += 2;
            dest[v25] = 92;
            dest[v24] = 116;
            goto LABEL_10;
          case 10:
            v22 = v15 + 1;
            v23 = v15;
            v14 = 0LL;
            v15 += 2;
            dest[v23] = 92;
            dest[v22] = 110;
            goto LABEL_10;
          case 13:
            v26 = v15 + 1;
            v27 = v15;
            v14 = 0LL;
            v15 += 2;
            dest[v27] = 92;
            dest[v26] = 114;
            goto LABEL_10;
          case 34:
            v20 = v15 + 1;
            v21 = v15;
            v15 += 2;
            ++v10;
            dest[v21] = 92;
            v14 = 0LL;
            dest[v20] = 34;
            v13 = dest_len - v15;
            if ( v7 == v10 )
              goto LABEL_15;
            goto LABEL_11;
          case 39:
            v17 = v15 + 1;
            v18 = v15;
            v14 = 0LL;
            v15 += 2;
            dest[v18] = 92;
            dest[v17] = 39;
            goto LABEL_10;
          default:
            goto LABEL_22;
        }
      }
      if ( (v16 & 0x80u) == 0LL || !utf8_safe )
        goto LABEL_22;
LABEL_28:
      v29 = v15;
      v14 = 0LL;
      ++v15;
      dest[v29] = v16;
LABEL_10:
      ++v10;
      v13 = dest_len - v15;
      if ( v7 == v10 )
        goto LABEL_15;
LABEL_11:
      if ( v13 <= 1 )
        return -1;
    }
    if ( (_BYTE)v16 == 92 )
    {
      v30 = v15 + 1;
      v31 = v15;
      v14 = 0LL;
      v15 += 2;
      dest[v31] = 92;
      dest[v30] = 92;
      goto LABEL_10;
    }
LABEL_22:
    if ( (unsigned __int8)(v16 - 32) > 0x5Eu
      || v14 && ((unsigned __int8)(v16 - 48) <= 9u || (unsigned __int8)((v16 & 0xDF) - 65) <= 5u) )
    {
      if ( v13 <= 3 )
        return -1;
      v28 = v15;
      is_hex_escape = v11;
      v15 += 4;
      sprintf(&dest[v28], v9, v16, v11, v14);
      v11 = is_hex_escape;
      v14 = is_hex_escape;
      goto LABEL_10;
    }
    goto LABEL_28;
  }
  return -1;
};

// Line 579: range 000000000C8E3AE0-000000000C8E3C8E
void __fastcall google::protobuf::CEscapeAndAppend(google::protobuf::StringPiece src, std::string *dest)
{
  std::string::size_type M_string_length; // rbp
  const char *ptr; // rbx
  const char *v5; // r12
  const char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rcx
  unsigned __int8 v10; // dl

  M_string_length = dest->_M_string_length;
  if ( src.length_ > 0 )
  {
    ptr = src.ptr_;
    v5 = &src.ptr_[src.length_];
    v6 = src.ptr_;
    v7 = 0LL;
    do
    {
      v8 = *(unsigned __int8 *)v6++;
      v7 += google::protobuf::CEscapedLength(google::protobuf::StringPiece)::c_escaped_len[v8];
    }
    while ( v5 != v6 );
    if ( src.length_ != v7 )
    {
      std::string::resize(dest, v7 + M_string_length, 0LL);
      v9 = &dest->_M_dataplus._M_p[M_string_length];
      while ( 1 )
      {
        v10 = *ptr;
        if ( *ptr <= 39 )
          break;
        if ( v10 != 92 )
          goto LABEL_16;
        v9 += 2;
        *((_WORD *)v9 - 1) = 23644;
LABEL_10:
        if ( v5 == ++ptr )
          return;
      }
      if ( (char)v10 > 8 )
      {
        switch ( v10 )
        {
          case 9u:
            v9 += 2;
            *((_WORD *)v9 - 1) = 29788;
            break;
          case 0xAu:
            v9 += 2;
            *((_WORD *)v9 - 1) = 28252;
            break;
          case 0xDu:
            v9 += 2;
            *((_WORD *)v9 - 1) = 29276;
            break;
          case 0x22u:
            v9 += 2;
            *((_WORD *)v9 - 1) = 8796;
            break;
          case 0x27u:
            v9 += 2;
            *((_WORD *)v9 - 1) = 10076;
            break;
          default:
            goto LABEL_16;
        }
        goto LABEL_10;
      }
LABEL_16:
      if ( (unsigned __int8)(v10 - 32) <= 0x5Eu )
      {
        *v9++ = v10;
      }
      else
      {
        *v9 = 92;
        v9 += 4;
        *(v9 - 3) = (v10 >> 6) + 48;
        *(v9 - 1) = (v10 & 7) + 48;
        *(v9 - 2) = ((v10 >> 3) & 7) + 48;
      }
      goto LABEL_10;
    }
    if ( src.length_ > 0x3FFFFFFFFFFFFFFFLL - M_string_length )
      std::__throw_length_error("basic_string::append");
    goto LABEL_22;
  }
  if ( !src.length_ )
  {
LABEL_22:
    std::string::_M_append(dest, src.ptr_, src.length_);
    return;
  }
  std::string::resize(dest, dest->_M_string_length, 0LL);
};

// Line 613: range 000000000C8E3CA0-000000000C8E3CD4
std::string *__fastcall google::protobuf::CEscape(std::string *dest, google::protobuf::StringPiece *a2)
{
  dest->_M_string_length = 0LL;
  dest->_anon_0._M_local_buf[0] = 0;
  dest->_M_dataplus._M_p = dest->_anon_0._M_local_buf;
  google::protobuf::CEscapeAndAppend(*a2, dest);
  return dest;
};

// Line 621: range 000000000C8E5F90-000000000C8E6004
std::string *__fastcall google::protobuf::strings::Utf8SafeCEscape(std::string *this, __int64 a2)
{
  int v2; // r13d
  char *v3; // rbp
  int v4; // eax
  std::forward_iterator_tag v5; // cl

  v2 = 4 * *(_QWORD *)(a2 + 8) + 1;
  v3 = (char *)operator new[](v2);
  v4 = google::protobuf::CEscapeInternal(*(const char **)a2, *(_DWORD *)(a2 + 8), v3, v2, 0, 1);
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char const*>(this, v3, &v3[v4], v5);
  operator delete[](v3);
  return this;
};

// Line 630: range 000000000C8E6010-000000000C8E6084
std::string *__fastcall google::protobuf::strings::CHexEscape(std::string *this, __int64 a2)
{
  int v2; // r13d
  char *v3; // rbp
  int v4; // eax
  std::forward_iterator_tag v5; // cl

  v2 = 4 * *(_QWORD *)(a2 + 8) + 1;
  v3 = (char *)operator new[](v2);
  v4 = google::protobuf::CEscapeInternal(*(const char **)a2, *(_DWORD *)(a2 + 8), v3, v2, 1, 0);
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char const*>(this, v3, &v3[v4], v5);
  operator delete[](v3);
  return this;
};

// Line 649: range 000000000C8E3CE0-000000000C8E3D86
google::protobuf::int32 __fastcall google::protobuf::strto32_adaptor(const char *nptr, char **endptr, int base)
{
  int *v4; // rax
  int v5; // r13d
  int *v6; // rbx
  __int64 v7; // rax

  v4 = __errno_location();
  v5 = *v4;
  *v4 = 0;
  v6 = v4;
  v7 = strtol(nptr, endptr, base);
  if ( *v6 == 34 )
  {
    if ( v7 == 0x8000000000000000LL )
    {
      LODWORD(v7) = 0x80000000;
    }
    else if ( v7 == 0x7FFFFFFFFFFFFFFFLL )
    {
      LODWORD(v7) = 0x7FFFFFFF;
    }
  }
  else if ( !*v6 )
  {
    if ( v7 < (__int64)0xFFFFFFFF80000000LL )
    {
      *v6 = 34;
      LODWORD(v7) = 0x80000000;
    }
    else if ( v7 > 0x7FFFFFFF )
    {
      *v6 = 34;
      LODWORD(v7) = 0x7FFFFFFF;
    }
    else
    {
      *v6 = v5;
    }
  }
  return v7;
};

// Line 669: range 000000000C8E3D90-000000000C8E3E0B
google::protobuf::uint32 __fastcall google::protobuf::strtou32_adaptor(const char *nptr, char **endptr, int base)
{
  int *v4; // rax
  int v5; // r13d
  int *v6; // rbx
  unsigned __int64 v7; // rax

  v4 = __errno_location();
  v5 = *v4;
  *v4 = 0;
  v6 = v4;
  v7 = strtoul(nptr, endptr, base);
  if ( *v6 == 34 )
  {
    if ( v7 == -1LL )
      LODWORD(v7) = -1;
  }
  else if ( !*v6 )
  {
    if ( v7 > 0xFFFFFFFF )
    {
      *v6 = 34;
      LODWORD(v7) = -1;
    }
    else
    {
      *v6 = v5;
    }
  }
  return v7;
};

// Line 828: range 000000000C8E3E10-000000000C8E3F06
char *__fastcall google::protobuf::FastInt64ToBuffer(google::protobuf::int64 i, char *buffer)
{
  char *v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  char *result; // rax
  char *v6; // rsi
  char *v7; // r8
  google::protobuf::int64 v8; // rax

  buffer[21] = 0;
  if ( i >= 0 )
  {
    v6 = buffer + 20;
    do
    {
      v7 = v6--;
      v6[1] = i % 0xAuLL + 48;
      v8 = i;
      i /= 0xAuLL;
    }
    while ( v8 > 9 );
    return v7;
  }
  else
  {
    v2 = buffer + 19;
    if ( i >= -9 )
    {
      buffer[19] = 45;
      result = buffer + 19;
      buffer[20] = 48 - i;
    }
    else
    {
      buffer[20] = (-10 - i) % 0xAuLL + 48;
      v3 = (-10 - i) / 0xAuLL + 1;
      do
      {
        *v2-- = v3 % 0xA + 48;
        v4 = v3;
        v3 /= 0xAuLL;
      }
      while ( v4 > 9 );
      *v2 = 45;
      return v2;
    }
  }
  return result;
};

// Line 873: range 000000000C8E3F10-000000000C8E3FE1
char *__fastcall google::protobuf::FastInt32ToBuffer(google::protobuf::int32 i, char *buffer)
{
  char *v2; // r8
  char v3; // cl
  unsigned int v4; // edx
  char v5; // di
  unsigned int v6; // edx
  int v7; // ecx
  char *result; // rax
  char *v9; // rsi
  char *v10; // r8
  google::protobuf::int32 v11; // edx

  buffer[11] = 0;
  if ( i >= 0 )
  {
    v9 = buffer + 10;
    do
    {
      v10 = v9--;
      v9[1] = i % 0xAu + 48;
      v11 = i;
      i /= 0xAu;
    }
    while ( v11 > 9 );
    return v10;
  }
  else
  {
    v2 = buffer + 9;
    if ( i >= -9 )
    {
      buffer[9] = 45;
      result = buffer + 9;
      buffer[10] = 48 - i;
    }
    else
    {
      v3 = -10 - i;
      v4 = (-10 - i) / 0xAu;
      v5 = 5 * v4;
      v6 = v4 + 1;
      buffer[10] = v3 - 2 * v5 + 48;
      do
      {
        *v2-- = v6 % 0xA + 48;
        v7 = v6;
        v6 /= 0xAu;
      }
      while ( v7 > 9 );
      *v2 = 45;
      return v2;
    }
  }
  return result;
};

// Line 906: range 000000000C8E3FF0-000000000C8E40BE
_BYTE *__fastcall google::protobuf::FastHexToBuffer(google::protobuf *this, __int64 a2, char *a3)
{
  int v3; // ebx
  _BYTE *v4; // rax
  char v5; // dl
  _BYTE *v6; // r8
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  v3 = (int)this;
  if ( (int)this < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "google/protobuf/stubs/strutil.cc", 907);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: i >= 0: ");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, "FastHexToBuffer() wants non-negative integers, not ");
    v10 = google::protobuf::internal::LogMessage::operator<<(v9, (int)this);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  *(_BYTE *)(a2 + 21) = 0;
  v4 = (_BYTE *)(a2 + 20);
  do
  {
    v5 = v3;
    v6 = v4;
    v3 >>= 4;
    *v4-- = a0123456789abcd_2[v5 & 0xF];
  }
  while ( v3 > 0 );
  return v6;
};

// Line 907: range 000000000C72CB62-000000000C72CB6F
void __fastcall __noreturn google::protobuf::FastHexToBuffer(
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

// Line 919: range 000000000C8E40D0-000000000C8E4115
char *__fastcall google::protobuf::InternalFastHexToBuffer(google::protobuf::uint64 value, char *buffer, int num_byte)
{
  char *result; // rax
  __int64 v4; // rsi
  int v5; // edx
  unsigned int v6; // ecx
  char *v7; // rdx
  char *v8; // r8
  char v9; // cl

  result = buffer;
  v4 = num_byte;
  v5 = num_byte - 1;
  result[v4] = 0;
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = &result[v5];
    v8 = &result[v4 - 2 - v6];
    do
    {
      v9 = value;
      --v7;
      value >>= 4;
      v7[1] = a0123456789abcd_2[v9 & 0xF];
    }
    while ( v7 != v8 );
  }
  return result;
};

// Line 921: range 000000000C8E4150-000000000C8E417F
// local variable allocation has failed, the output may be wrong!
char *__fastcall google::protobuf::FastHex32ToBuffer(google::protobuf::uint32 value, char *buffer)
{
  char *result; // rax
  __int64 v3; // rdi
  char *v4; // rdx
  char v5; // cl
  char *v6; // rcx

  buffer[8] = 0;
  result = buffer;
  v3 = value;
  v4 = buffer + 7;
  do
  {
    v5 = value;
    *(_QWORD *)&value >>= 4;
    *v4 = a0123456789abcd_2[v5 & 0xF];
    v6 = v4--;
  }
  while ( buffer != v6 );
  return result;
};

// Line 921: range 000000000C8E4120-000000000C8E414F
char *__fastcall google::protobuf::FastHex64ToBuffer(google::protobuf::uint64 value, char *buffer)
{
  char *result; // rax
  char *v3; // rdx
  char v4; // cl
  char *v5; // rcx

  buffer[16] = 0;
  result = buffer;
  v3 = buffer + 15;
  do
  {
    v4 = value;
    value >>= 4;
    *v3 = a0123456789abcd_2[v4 & 0xF];
    v5 = v3--;
  }
  while ( buffer != v5 );
  return result;
};

// Line 992: range 000000000C8E4180-000000000C8E4335
char *__fastcall google::protobuf::FastUInt32ToBufferLeft(google::protobuf::uint32 u, char *buffer)
{
  google::protobuf::uint32 v2; // eax
  __int64 v3; // rdx
  google::protobuf::uint32 v4; // eax
  __int64 v5; // rdx
  google::protobuf::uint32 v6; // eax
  __int64 v7; // rdx
  google::protobuf::uint32 v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  char *result; // rax

  if ( u > 0x3B9AC9FF )
  {
    buffer += 2;
    v2 = u / 0x5F5E100;
    v3 = 2LL * (u / 0x5F5E100);
    *(buffer - 2) = google::protobuf::two_ASCII_digits[v3];
    *(buffer - 1) = byte_1A177881[v3];
    goto sublt100_000_000;
  }
  if ( u > 0x63 )
  {
    if ( u <= 0x270F )
    {
      v8 = u / 0x64;
      if ( u <= 0x3E7 )
      {
        *buffer++ = v8 + 48;
        goto sublt100;
      }
lt10_000:
      buffer += 2;
      v9 = 2LL * v8;
      *(buffer - 2) = google::protobuf::two_ASCII_digits[v9];
      *(buffer - 1) = byte_1A177881[v9];
sublt100:
      u -= 100 * v8;
lt100:
      v10 = 2LL * u;
      *buffer = google::protobuf::two_ASCII_digits[v10];
      buffer[1] = byte_1A177881[v10];
      result = buffer + 2;
      buffer[2] = 0;
      return result;
    }
    if ( u <= 0xF423F )
    {
      v6 = u / 0x2710;
      if ( u <= 0x1869F )
      {
        *buffer++ = v6 + 48;
        goto sublt10_000;
      }
lt1_000_000:
      buffer += 2;
      v7 = 2LL * v6;
      *(buffer - 2) = google::protobuf::two_ASCII_digits[v7];
      *(buffer - 1) = byte_1A177881[v7];
sublt10_000:
      u -= 10000 * v6;
      v8 = u / 0x64;
      goto lt10_000;
    }
    if ( u <= 0x5F5E0FF )
    {
      v4 = u / 0xF4240;
      if ( u <= 0x98967F )
      {
        *buffer++ = v4 + 48;
        goto sublt1_000_000;
      }
lt100_000_000:
      buffer += 2;
      v5 = 2LL * v4;
      *(buffer - 2) = google::protobuf::two_ASCII_digits[v5];
      *(buffer - 1) = byte_1A177881[v5];
sublt1_000_000:
      u -= 1000000 * v4;
      v6 = u / 0x2710;
      goto lt1_000_000;
    }
    ++buffer;
    v2 = u / 0x5F5E100;
    *(buffer - 1) = u / 0x5F5E100 + 48;
sublt100_000_000:
    u -= 100000000 * v2;
    v4 = u / 0xF4240;
    goto lt100_000_000;
  }
  if ( u > 9 )
    goto lt100;
  result = buffer + 1;
  *(_WORD *)buffer = (unsigned __int8)(u + 48);
  return result;
};

// Line 1067: range 000000000C8E4340-000000000C8E434D
char *__fastcall google::protobuf::FastInt32ToBufferLeft(google::protobuf::int32 i, char *buffer)
{
  if ( i < 0 )
  {
    *buffer = 45;
    i = -i;
    ++buffer;
  }
  return google::protobuf::FastUInt32ToBufferLeft(i, buffer);
};

// Line 1074: range 000000000C8E4360-000000000C8E4486
char *__fastcall google::protobuf::FastUInt64ToBufferLeft(google::protobuf::uint64 u64, char *buffer)
{
  char *v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rcx

  if ( (unsigned int)u64 == u64 )
    return google::protobuf::FastUInt32ToBufferLeft(u64, buffer);
  v2 = google::protobuf::FastUInt64ToBufferLeft(u64 / 0x3B9ACA00, buffer);
  v3 = u64 % 0x3B9ACA00;
  v4 = v3 / 0x989680;
  v5 = 10000000 * v4;
  v4 *= 2LL;
  v6 = v3 - v5;
  *v2 = google::protobuf::two_ASCII_digits[v4];
  v2[1] = byte_1A177881[v4];
  v7 = v6 / 0x186A0;
  v8 = 100000 * v7;
  v7 *= 2LL;
  v9 = v6 - v8;
  v2[2] = google::protobuf::two_ASCII_digits[v7];
  v2[3] = byte_1A177881[v7];
  v10 = v9 / 0x3E8;
  v11 = 1000 * v10;
  v10 *= 2LL;
  v12 = v9 - v11;
  v2[4] = google::protobuf::two_ASCII_digits[v10];
  v2[5] = byte_1A177881[v10];
  v13 = v12 / 0xA;
  LOBYTE(v11) = 5 * v13;
  v13 *= 2LL;
  v2[6] = google::protobuf::two_ASCII_digits[v13];
  LOBYTE(v13) = byte_1A177881[v13];
  v2[8] = v12 - 2 * v11 + 48;
  v2[7] = v13;
  v2[9] = 0;
  return v2 + 9;
};

// Line 1118: range 000000000C8E4490-000000000C8E449F
char *__fastcall google::protobuf::FastInt64ToBufferLeft(google::protobuf::int64 i, char *buffer)
{
  if ( i < 0 )
  {
    *buffer = 45;
    i = -i;
    ++buffer;
  }
  return google::protobuf::FastUInt64ToBufferLeft(i, buffer);
};

// Line 1132: range 000000000C8E6090-000000000C8E60DE
std::string *__fastcall google::protobuf::SimpleItoa[abi:cxx11](std::string *retstr, int i)
{
  char *v2; // rax
  std::forward_iterator_tag v3; // cl
  __int64 v4; // rdx
  const char *v5; // rbp
  char buffer[32]; // [rsp+0h] [rbp-38h] BYREF

  v2 = google::protobuf::FastInt32ToBuffer(i, buffer);
  v4 = -1LL;
  v5 = v2;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( v2 )
    v4 = (__int64)&v2[strlen(v2)];
  std::string::_M_construct<char const*>(retstr, v5, (const char *)v4, v3);
  return retstr;
};

// Line 1139: range 000000000C8E6220-000000000C8E6253
std::string *__fastcall google::protobuf::SimpleItoa[abi:cxx11](std::string *retstr, unsigned int i)
{
  char *v2; // rax
  std::forward_iterator_tag v3; // cl
  char buffer[32]; // [rsp+0h] [rbp-28h] BYREF

  v2 = google::protobuf::FastUInt32ToBufferLeft(i, buffer);
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(retstr, buffer, v2, v3);
  return retstr;
};

// Line 1146: range 000000000C8E60E0-000000000C8E612F
std::string *__fastcall google::protobuf::SimpleItoa[abi:cxx11](std::string *retstr, __int64 i)
{
  char *v2; // rax
  std::forward_iterator_tag v3; // cl
  __int64 v4; // rdx
  const char *v5; // rbp
  char buffer[32]; // [rsp+0h] [rbp-38h] BYREF

  v2 = google::protobuf::FastInt64ToBuffer(i, buffer);
  v4 = -1LL;
  v5 = v2;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( v2 )
    v4 = (__int64)&v2[strlen(v2)];
  std::string::_M_construct<char const*>(retstr, v5, (const char *)v4, v3);
  return retstr;
};

// Line 1153: range 000000000C8E6260-000000000C8E6294
std::string *__fastcall google::protobuf::SimpleItoa[abi:cxx11](std::string *retstr, unsigned __int64 i)
{
  char *v2; // rax
  std::forward_iterator_tag v3; // cl
  char buffer[32]; // [rsp+0h] [rbp-28h] BYREF

  v2 = google::protobuf::FastUInt64ToBufferLeft(i, buffer);
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(retstr, buffer, v2, v3);
  return retstr;
};

// Line 1160: range 000000000C8E6130-000000000C8E617F
std::string *__fastcall google::protobuf::SimpleItoa[abi:cxx11](std::string *retstr, __int64 i)
{
  char *v2; // rax
  std::forward_iterator_tag v3; // cl
  __int64 v4; // rdx
  const char *v5; // rbp
  char buffer[32]; // [rsp+0h] [rbp-38h] BYREF

  v2 = google::protobuf::FastInt64ToBuffer(i, buffer);
  v4 = -1LL;
  v5 = v2;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( v2 )
    v4 = (__int64)&v2[strlen(v2)];
  std::string::_M_construct<char const*>(retstr, v5, (const char *)v4, v3);
  return retstr;
};

// Line 1167: range 000000000C8E62A0-000000000C8E62D4
std::string *__fastcall google::protobuf::SimpleItoa[abi:cxx11](std::string *retstr, unsigned __int64 i)
{
  char *v2; // rax
  std::forward_iterator_tag v3; // cl
  char buffer[32]; // [rsp+0h] [rbp-28h] BYREF

  v2 = google::protobuf::FastUInt64ToBufferLeft(i, buffer);
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(retstr, buffer, v2, v3);
  return retstr;
};

// Line 1215: range 000000000C8E6180-000000000C8E61CC
std::string *__fastcall google::protobuf::SimpleDtoa[abi:cxx11](std::string *this, double a2, double a3)
{
  const char *v3; // rax
  std::forward_iterator_tag v4; // cl
  __int64 v5; // rdx
  const char *v6; // rbp
  char buffer[32]; // [rsp+0h] [rbp-38h] BYREF

  v3 = google::protobuf::DoubleToBuffer(a3, buffer);
  v5 = -1LL;
  v6 = v3;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  if ( v3 )
    v5 = (__int64)&v3[strlen(v3)];
  std::string::_M_construct<char const*>(this, v6, (const char *)v5, v4);
  return this;
};

// Line 1220: range 000000000C8E61D0-000000000C8E621C
std::string *__fastcall google::protobuf::SimpleFtoa[abi:cxx11](std::string *this, double a2, float a3)
{
  const char *v3; // rax
  std::forward_iterator_tag v4; // cl
  __int64 v5; // rdx
  const char *v6; // rbp
  char buffer[24]; // [rsp+0h] [rbp-38h] BYREF

  v3 = google::protobuf::FloatToBuffer(a3, buffer);
  v5 = -1LL;
  v6 = v3;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  if ( v3 )
    v5 = (__int64)&v3[strlen(v3)];
  std::string::_M_construct<char const*>(this, v6, (const char *)v5, v4);
  return this;
};

// Line 1231: range 000000000C8E44B0-000000000C8E4580
void __fastcall google::protobuf::DelocalizeRadix(char *buffer)
{
  char *v1; // r12
  __int64 v2; // rcx
  int v3; // eax
  char v4; // al
  char *v5; // r12
  const char *v6; // rbp
  char v7; // al
  size_t v8; // rax

  v1 = buffer;
  if ( !strchr(buffer, 46) )
  {
    v2 = 0x400000004007FE5LL;
    while ( 1 )
    {
      v3 = (unsigned __int8)*v1;
      if ( (unsigned __int8)(v3 - 43) > 0x3Au )
        break;
      if ( !_bittest64(&v2, (unsigned int)(v3 - 43)) )
        goto LABEL_8;
      ++v1;
    }
    if ( !(_BYTE)v3 )
      return;
LABEL_8:
    v4 = v1[1];
    *v1 = 46;
    if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 101 && v4 != 69 && ((v4 - 43) & 0xFD) != 0 && v4 )
    {
      v5 = v1 + 1;
      v6 = v5;
      do
        v7 = *++v6;
      while ( (unsigned __int8)(v7 - 48) > 9u && v7 != 101 && v7 != 69 && ((v7 - 43) & 0xFD) != 0 && v7 );
      v8 = strlen(v6);
      memmove(v5, v6, v8 + 1);
    }
  }
};

// Line 1258: range 000000000C8E4590-000000000C8E4688
char *__fastcall google::protobuf::DoubleToBuffer(double a1, double value, char *buffer)
{
  if ( a1 == INFINITY )
  {
    *(_DWORD *)buffer = 6712937;
    return buffer;
  }
  else if ( a1 == -INFINITY )
  {
    strcpy(buffer, "-inf");
    return buffer;
  }
  else
  {
    snprintf(buffer, 0x20uLL, "%.*g", 15, a1);
    if ( a1 != strtod(buffer, 0LL) )
      snprintf(buffer, 0x20uLL, "%.*g", 17, a1);
    google::protobuf::DelocalizeRadix(buffer);
    return buffer;
  }
};

// Line 1320: range 000000000C8E4690-000000000C8E490A
__int64 __fastcall google::protobuf::safe_strtob(google::protobuf::StringPiece a1, bool *a2)
{
  char v3; // al
  char v4; // dl
  __int64 v6; // rcx
  char i; // al
  char v8; // dl
  __int64 v9; // rcx
  char j; // al
  char v11; // dl
  char v12; // dl
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  __int64 v15; // rcx
  char k; // al
  char v17; // dl
  char v18; // al
  char v19; // al
  google::protobuf::internal::LogFinisher v20; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v21; // [rsp+10h] [rbp-58h] BYREF

  if ( !a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v21, LOGLEVEL_FATAL_0, "google/protobuf/stubs/strutil.cc", 1321);
    v13 = google::protobuf::internal::LogMessage::operator<<(&v21, "CHECK failed: value != NULL: ");
    v14 = google::protobuf::internal::LogMessage::operator<<(v13, "NULL output boolean given.");
    google::protobuf::internal::LogFinisher::operator=(&v20, v14);
    google::protobuf::internal::LogMessage::~LogMessage(&v21);
  }
  if ( a1.length_ == 4 )
  {
    v6 = 0LL;
    for ( i = 116; ; i = aTrue_5[v6] )
    {
      v8 = a1.ptr_[v6];
      if ( (unsigned __int8)(v8 - 65) < 0x1Au )
        v8 += 32;
      if ( (unsigned __int8)(i - 65) < 0x1Au )
        i += 32;
      if ( v8 != i )
        break;
      if ( ++v6 == 4 )
        goto LABEL_8;
    }
    return 0LL;
  }
  if ( a1.length_ != 1 )
  {
    switch ( a1.length_ )
    {
      case 3LL:
        v9 = 0LL;
        for ( j = 121; ; j = byte_1A176E94[v9] )
        {
          v11 = a1.ptr_[v9];
          if ( (unsigned __int8)(v11 - 65) < 0x1Au )
            v11 += 32;
          if ( (unsigned __int8)(j - 65) < 0x1Au )
            j += 32;
          if ( v11 != j )
            break;
          if ( ++v9 == 3 )
            goto LABEL_8;
        }
        return 0LL;
      case 5LL:
        v15 = 0LL;
        for ( k = 102; ; k = aFalse_8[v15] )
        {
          v17 = a1.ptr_[v15];
          if ( (unsigned __int8)(v17 - 65) < 0x1Au )
            v17 += 32;
          if ( (unsigned __int8)(k - 65) < 0x1Au )
            k += 32;
          if ( v17 != k )
            break;
          if ( ++v15 == 5 )
            goto LABEL_34;
        }
        return 0LL;
      case 2LL:
        v18 = *a1.ptr_;
        if ( (unsigned __int8)(*a1.ptr_ - 65) < 0x1Au )
          v18 = *a1.ptr_ + 32;
        if ( v18 == 110 )
        {
          v19 = *((_BYTE *)a1.ptr_ + 1);
          if ( (unsigned __int8)(v19 - 65) < 0x1Au )
            v19 += 32;
          if ( v19 == 111 )
            goto LABEL_34;
          return 0LL;
        }
        break;
    }
    return 0LL;
  }
  v3 = *a1.ptr_;
  v4 = *a1.ptr_ + 32;
  if ( (unsigned __int8)(*a1.ptr_ - 65) >= 0x1Au )
    v4 = *a1.ptr_;
  if ( v4 == 116 )
    goto LABEL_8;
  if ( (unsigned __int8)(v3 - 65) > 0x19u )
  {
    if ( v3 != 121 && v3 != 49 )
      goto LABEL_31;
LABEL_8:
    *a2 = 1;
    return 1LL;
  }
  if ( v3 == 89 )
    goto LABEL_8;
LABEL_31:
  v12 = v3 + 32;
  if ( (unsigned __int8)(v3 - 65) >= 0x1Au )
    v12 = *a1.ptr_;
  if ( v12 == 102 )
    goto LABEL_34;
  if ( (unsigned __int8)(v3 - 65) <= 0x19u )
  {
    if ( v3 != 78 )
      return 0LL;
LABEL_34:
    *a2 = 0;
    return 1LL;
  }
  if ( v3 == 110 || v3 == 48 )
    goto LABEL_34;
  return 0LL;
};

// Line 1321: range 000000000C72CB74-000000000C72CB81
void __fastcall __noreturn google::protobuf::safe_strtob(
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

// Line 1337: range 000000000C8E4910-000000000C8E4960
bool __fastcall google::protobuf::safe_strtof(const char *str, float *value)
{
  int *v2; // rax
  int *v3; // rbp
  float v4; // xmm0_4
  bool result; // al
  char *endptr; // [rsp+8h] [rbp-20h] BYREF

  v2 = __errno_location();
  *v2 = 0;
  v3 = v2;
  v4 = strtof(str, &endptr);
  result = 0;
  *value = v4;
  if ( *str )
  {
    if ( !*endptr )
      return *v3 == 0;
  }
  return result;
};

// Line 1348: range 000000000C8E4970-000000000C8E49D1
bool __fastcall google::protobuf::safe_strtod(const char *str, double *value)
{
  double v2; // xmm0_8
  char *v3; // rax
  bool result; // al
  char *endptr; // [rsp+8h] [rbp-20h] BYREF

  v2 = strtod(str, &endptr);
  v3 = endptr;
  *value = v2;
  if ( v3 != str )
  {
    while ( (unsigned __int8)(*v3 - 9) <= 4u || *v3 == 32 )
      endptr = ++v3;
  }
  result = 0;
  if ( *str )
    return *endptr == 0;
  return result;
};

// Line 1360: range 000000000C8E62E0-000000000C8E6609
__int64 __fastcall google::protobuf::safe_strto32(__int64 a1, int *a2, __int64 a3, std::forward_iterator_tag a4)
{
  char *v5; // rsi
  __int64 v6; // rdx
  std::string *M_p; // rdi
  std::string::size_type M_string_length; // rcx
  const char *v9; // rdx
  const char *v10; // rsi
  char v11; // r12
  unsigned __int64 v12; // rdx
  std::string::size_type v13; // rcx
  std::forward_iterator_tag v14; // cl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::string::size_type v16; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  char *v18; // r8
  std::string *v19; // rdi
  std::string::pointer v20; // rsi
  int v21; // eax
  int v22; // eax
  int v23; // edx
  unsigned int v24; // r12d
  std::string::pointer v26; // rsi
  int v27; // eax
  int v28; // eax
  int v29; // edx
  std::string __beg; // [rsp+0h] [rbp-68h] BYREF
  std::string src; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 8);
  __beg._M_dataplus._M_p = __beg._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&__beg, v5, &v5[v6], a4);
  M_p = (std::string *)__beg._M_dataplus._M_p;
  M_string_length = __beg._M_string_length;
  *a2 = 0;
  v9 = (char *)M_p + M_string_length;
  if ( M_p >= (std::string *)((char *)M_p + M_string_length) )
    goto LABEL_32;
  v10 = (const char *)M_p;
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 != 32 )
      break;
    if ( v9 == ++v10 )
      goto LABEL_32;
  }
  if ( v9 <= v10 )
    goto LABEL_32;
  while ( *(v9 - 1) == 32 )
  {
    if ( --v9 == v10 )
      goto LABEL_32;
  }
  if ( v10 >= v9 || ((v11 - 43) & 0xFD) == 0 && (++v10, v10 >= v9) )
  {
LABEL_32:
    v24 = 0;
    goto LABEL_33;
  }
  v12 = v9 - v10;
  if ( M_string_length < v10 - (const char *)M_p )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      v10 - (const char *)M_p,
      M_string_length);
  v13 = M_string_length - (v10 - (const char *)M_p);
  src._M_dataplus._M_p = src._anon_0._M_local_buf;
  if ( v13 <= v12 )
    v12 = v13;
  std::string::_M_construct<char const*>(&src, v10, &v10[v12], (std::forward_iterator_tag)v13);
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p;
  v16 = src._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p == &src._anon_0 )
  {
    if ( src._M_string_length )
    {
      if ( src._M_string_length == 1 )
        *__beg._M_dataplus._M_p = src._anon_0._M_local_buf[0];
      else
        memcpy(__beg._M_dataplus._M_p, &src._anon_0, src._M_string_length);
      v16 = src._M_string_length;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p;
    }
    __beg._M_string_length = v16;
    p_anon_0->_M_local_buf[v16] = 0;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p;
  }
  else
  {
    v14.gap0[0] = src._anon_0._M_local_buf[0];
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p == &__beg._anon_0 )
    {
      __beg._M_dataplus._M_p = src._M_dataplus._M_p;
      __beg._M_string_length = src._M_string_length;
      __beg._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
    }
    else
    {
      M_allocated_capacity = __beg._anon_0._M_allocated_capacity;
      __beg._M_dataplus._M_p = src._M_dataplus._M_p;
      __beg._M_string_length = src._M_string_length;
      __beg._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
      if ( p_anon_0 )
      {
        src._M_dataplus._M_p = (std::string::pointer)p_anon_0;
        src._anon_0._M_allocated_capacity = M_allocated_capacity;
        goto LABEL_19;
      }
    }
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    p_anon_0 = &src._anon_0;
  }
LABEL_19:
  src._M_string_length = 0LL;
  p_anon_0->_M_local_buf[0] = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
    operator delete(src._M_dataplus._M_p);
  M_p = (std::string *)__beg._M_dataplus._M_p;
  v18 = &__beg._M_dataplus._M_p[__beg._M_string_length];
  if ( v11 == 45 )
  {
    if ( __beg._M_dataplus._M_p >= v18 )
    {
      v27 = 0;
LABEL_53:
      *a2 = v27;
      v24 = 1;
    }
    else
    {
      v26 = __beg._M_dataplus._M_p;
      v27 = 0;
      while ( 1 )
      {
        v29 = (unsigned __int8)*v26;
        if ( (unsigned __int8)(v29 - 48) > 9u )
        {
          *a2 = v27;
          v24 = 0;
          goto LABEL_33;
        }
        if ( v27 < -214748364 )
          break;
        v28 = 10 * v27;
        if ( v28 < v29 + 2147483600 )
          break;
        ++v26;
        v27 = v28 - (v29 - 48);
        if ( v26 == v18 )
          goto LABEL_53;
      }
      *a2 = 0x80000000;
      v24 = 0;
    }
  }
  else
  {
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &src,
      __beg._M_dataplus._M_p,
      &__beg._M_dataplus._M_p[__beg._M_string_length],
      v14);
    v19 = (std::string *)src._M_dataplus._M_p;
    if ( src._M_dataplus._M_p >= &src._M_dataplus._M_p[src._M_string_length] )
    {
      v21 = 0;
LABEL_55:
      *a2 = v21;
      v24 = 1;
    }
    else
    {
      v20 = src._M_dataplus._M_p;
      v21 = 0;
      while ( 1 )
      {
        v23 = (unsigned __int8)*v20 - 48;
        if ( (unsigned __int8)(*v20 - 48) > 9u )
        {
          *a2 = v21;
          v24 = 0;
          goto LABEL_29;
        }
        if ( v21 > 214748364 )
          break;
        v22 = 10 * v21;
        if ( v22 > 0x7FFFFFFF - v23 )
          break;
        ++v20;
        v21 = v23 + v22;
        if ( &src._M_dataplus._M_p[src._M_string_length] == v20 )
          goto LABEL_55;
      }
      *a2 = 0x7FFFFFFF;
      v24 = 0;
    }
LABEL_29:
    if ( v19 != (std::string *)&src._anon_0 )
      operator delete(v19);
    M_p = (std::string *)__beg._M_dataplus._M_p;
  }
LABEL_33:
  if ( M_p != (std::string *)&__beg._anon_0 )
    operator delete(M_p);
  return v24;
};

// Line 1364: range 000000000C8E6610-000000000C8E68B1
__int64 __fastcall google::protobuf::safe_strtou32(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  char *v5; // rsi
  __int64 v6; // rdx
  std::string *M_p; // rdi
  std::string::size_type M_string_length; // rcx
  const char *v9; // rdx
  const char *v10; // rsi
  char v11; // r12
  unsigned __int64 v12; // rdx
  std::string::size_type v13; // rcx
  std::forward_iterator_tag v14; // cl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::string::size_type v16; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  unsigned int v18; // r14d
  std::string *v19; // rdi
  std::string::pointer v20; // rsi
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // edx
  std::string __beg; // [rsp+0h] [rbp-68h] BYREF
  std::string src; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 8);
  __beg._M_dataplus._M_p = __beg._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&__beg, v5, &v5[v6], a4);
  M_p = (std::string *)__beg._M_dataplus._M_p;
  M_string_length = __beg._M_string_length;
  *a2 = 0;
  v9 = (char *)M_p + M_string_length;
  if ( M_p >= (std::string *)((char *)M_p + M_string_length) )
    goto LABEL_32;
  v10 = (const char *)M_p;
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 != 32 )
      break;
    if ( v9 == ++v10 )
      goto LABEL_32;
  }
  if ( v9 <= v10 )
    goto LABEL_32;
  while ( *(v9 - 1) == 32 )
  {
    if ( --v9 == v10 )
      goto LABEL_32;
  }
  if ( v9 <= v10 || ((v11 - 43) & 0xFD) == 0 && (++v10, v10 >= v9) )
  {
LABEL_32:
    v18 = 0;
    goto LABEL_33;
  }
  v12 = v9 - v10;
  if ( M_string_length < v10 - (const char *)M_p )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      v10 - (const char *)M_p,
      M_string_length);
  v13 = M_string_length - (v10 - (const char *)M_p);
  src._M_dataplus._M_p = src._anon_0._M_local_buf;
  if ( v13 <= v12 )
    v12 = v13;
  std::string::_M_construct<char const*>(&src, v10, &v10[v12], (std::forward_iterator_tag)v13);
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p;
  v16 = src._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p == &src._anon_0 )
  {
    if ( src._M_string_length )
    {
      if ( src._M_string_length == 1 )
        *__beg._M_dataplus._M_p = src._anon_0._M_local_buf[0];
      else
        memcpy(__beg._M_dataplus._M_p, &src._anon_0, src._M_string_length);
      v16 = src._M_string_length;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p;
    }
    __beg._M_string_length = v16;
    p_anon_0->_M_local_buf[v16] = 0;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p;
  }
  else
  {
    v14.gap0[0] = src._anon_0._M_local_buf[0];
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p == &__beg._anon_0 )
    {
      __beg._M_dataplus._M_p = src._M_dataplus._M_p;
      __beg._M_string_length = src._M_string_length;
      __beg._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
    }
    else
    {
      M_allocated_capacity = __beg._anon_0._M_allocated_capacity;
      __beg._M_dataplus._M_p = src._M_dataplus._M_p;
      __beg._M_string_length = src._M_string_length;
      __beg._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
      if ( p_anon_0 )
      {
        src._M_dataplus._M_p = (std::string::pointer)p_anon_0;
        src._anon_0._M_allocated_capacity = M_allocated_capacity;
        goto LABEL_19;
      }
    }
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    p_anon_0 = &src._anon_0;
  }
LABEL_19:
  src._M_string_length = 0LL;
  p_anon_0->_M_local_buf[0] = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
    operator delete(src._M_dataplus._M_p);
  M_p = (std::string *)__beg._M_dataplus._M_p;
  v18 = 0;
  if ( v11 != 45 )
  {
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &src,
      __beg._M_dataplus._M_p,
      &__beg._M_dataplus._M_p[__beg._M_string_length],
      v14);
    v19 = (std::string *)src._M_dataplus._M_p;
    if ( src._M_dataplus._M_p >= &src._M_dataplus._M_p[src._M_string_length] )
    {
      v21 = 0;
LABEL_45:
      *a2 = v21;
      v18 = 1;
    }
    else
    {
      v20 = src._M_dataplus._M_p;
      v21 = 0;
      while ( 1 )
      {
        v23 = (unsigned __int8)*v20 - 48;
        if ( (unsigned __int8)(*v20 - 48) > 9u )
        {
          *a2 = v21;
          v18 = 0;
          goto LABEL_29;
        }
        if ( v21 > 0x19999999 )
          break;
        v22 = 10 * v21;
        if ( v22 > ~v23 )
          break;
        ++v20;
        v21 = v23 + v22;
        if ( &src._M_dataplus._M_p[src._M_string_length] == v20 )
          goto LABEL_45;
      }
      *a2 = -1;
      v18 = 0;
    }
LABEL_29:
    if ( v19 != (std::string *)&src._anon_0 )
      operator delete(v19);
    M_p = (std::string *)__beg._M_dataplus._M_p;
  }
LABEL_33:
  if ( M_p != (std::string *)&__beg._anon_0 )
    operator delete(M_p);
  return v18;
};

// Line 1368: range 000000000C8E68C0-000000000C8E6C3C
__int64 __fastcall google::protobuf::safe_strto64(
        __int64 a1,
        signed __int64 *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  char *v5; // rsi
  __int64 v6; // rdx
  std::string *M_p; // rdi
  std::string::size_type M_string_length; // rcx
  const char *v9; // rdx
  const char *v10; // rsi
  char v11; // r12
  unsigned __int64 v12; // rdx
  std::string::size_type v13; // rcx
  std::forward_iterator_tag v14; // cl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::string::size_type v16; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  char *v18; // r8
  std::string *v19; // rdi
  std::string::pointer v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // edx
  unsigned int v24; // r12d
  std::string::pointer v26; // rsi
  signed __int64 v27; // rax
  __int64 v28; // rax
  int v29; // edx
  std::string __beg; // [rsp+0h] [rbp-68h] BYREF
  std::string src; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 8);
  __beg._M_dataplus._M_p = __beg._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&__beg, v5, &v5[v6], a4);
  M_p = (std::string *)__beg._M_dataplus._M_p;
  M_string_length = __beg._M_string_length;
  *a2 = 0LL;
  v9 = (char *)M_p + M_string_length;
  if ( M_p >= (std::string *)((char *)M_p + M_string_length) )
    goto LABEL_32;
  v10 = (const char *)M_p;
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 != 32 )
      break;
    if ( v9 == ++v10 )
      goto LABEL_32;
  }
  if ( v9 <= v10 )
    goto LABEL_32;
  while ( *(v9 - 1) == 32 )
  {
    if ( --v9 == v10 )
      goto LABEL_32;
  }
  if ( v10 >= v9 || ((v11 - 43) & 0xFD) == 0 && (++v10, v10 >= v9) )
  {
LABEL_32:
    v24 = 0;
    goto LABEL_33;
  }
  v12 = v9 - v10;
  if ( M_string_length < v10 - (const char *)M_p )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      v10 - (const char *)M_p,
      M_string_length);
  v13 = M_string_length - (v10 - (const char *)M_p);
  src._M_dataplus._M_p = src._anon_0._M_local_buf;
  if ( v13 <= v12 )
    v12 = v13;
  std::string::_M_construct<char const*>(&src, v10, &v10[v12], (std::forward_iterator_tag)v13);
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p;
  v16 = src._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p == &src._anon_0 )
  {
    if ( src._M_string_length )
    {
      if ( src._M_string_length == 1 )
        *__beg._M_dataplus._M_p = src._anon_0._M_local_buf[0];
      else
        memcpy(__beg._M_dataplus._M_p, &src._anon_0, src._M_string_length);
      v16 = src._M_string_length;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p;
    }
    __beg._M_string_length = v16;
    p_anon_0->_M_local_buf[v16] = 0;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p;
  }
  else
  {
    v14.gap0[0] = src._anon_0._M_local_buf[0];
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p == &__beg._anon_0 )
    {
      __beg._M_dataplus._M_p = src._M_dataplus._M_p;
      __beg._M_string_length = src._M_string_length;
      __beg._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
    }
    else
    {
      M_allocated_capacity = __beg._anon_0._M_allocated_capacity;
      __beg._M_dataplus._M_p = src._M_dataplus._M_p;
      __beg._M_string_length = src._M_string_length;
      __beg._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
      if ( p_anon_0 )
      {
        src._M_dataplus._M_p = (std::string::pointer)p_anon_0;
        src._anon_0._M_allocated_capacity = M_allocated_capacity;
        goto LABEL_19;
      }
    }
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    p_anon_0 = &src._anon_0;
  }
LABEL_19:
  src._M_string_length = 0LL;
  p_anon_0->_M_local_buf[0] = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
    operator delete(src._M_dataplus._M_p);
  M_p = (std::string *)__beg._M_dataplus._M_p;
  v18 = &__beg._M_dataplus._M_p[__beg._M_string_length];
  if ( v11 == 45 )
  {
    if ( __beg._M_dataplus._M_p >= v18 )
    {
      v27 = 0LL;
LABEL_52:
      *a2 = v27;
      v24 = 1;
    }
    else
    {
      v26 = __beg._M_dataplus._M_p;
      v27 = 0LL;
      while ( 1 )
      {
        v29 = (unsigned __int8)*v26 - 48;
        if ( (unsigned __int8)(*v26 - 48) > 9u )
          goto LABEL_42;
        if ( v27 < (__int64)0xF333333333333334LL )
        {
          v27 = 0x8000000000000000LL;
LABEL_42:
          *a2 = v27;
          v24 = 0;
          goto LABEL_33;
        }
        v28 = 10 * v27;
        if ( v28 < (__int64)(v29 + 0x8000000000000000LL) )
          break;
        ++v26;
        v27 = v28 - v29;
        if ( v26 == v18 )
          goto LABEL_52;
      }
      *a2 = 0x8000000000000000LL;
      v24 = 0;
    }
  }
  else
  {
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &src,
      __beg._M_dataplus._M_p,
      &__beg._M_dataplus._M_p[__beg._M_string_length],
      v14);
    v19 = (std::string *)src._M_dataplus._M_p;
    if ( src._M_dataplus._M_p >= &src._M_dataplus._M_p[src._M_string_length] )
    {
      v21 = 0LL;
LABEL_54:
      *a2 = v21;
      v24 = 1;
    }
    else
    {
      v20 = src._M_dataplus._M_p;
      v21 = 0LL;
      while ( 1 )
      {
        v23 = (unsigned __int8)*v20 - 48;
        if ( (unsigned __int8)(*v20 - 48) > 9u )
          break;
        if ( v21 > 0xCCCCCCCCCCCCCCCLL || (v22 = 10 * v21, v22 > 0x7FFFFFFFFFFFFFFFLL - v23) )
        {
          v21 = 0x7FFFFFFFFFFFFFFFLL;
          break;
        }
        ++v20;
        v21 = v23 + v22;
        if ( &src._M_dataplus._M_p[src._M_string_length] == v20 )
          goto LABEL_54;
      }
      *a2 = v21;
      v24 = 0;
    }
    if ( v19 != (std::string *)&src._anon_0 )
      operator delete(v19);
    M_p = (std::string *)__beg._M_dataplus._M_p;
  }
LABEL_33:
  if ( M_p != (std::string *)&__beg._anon_0 )
    operator delete(M_p);
  return v24;
};

// Line 1372: range 000000000C8E6C50-000000000C8E6F09
__int64 __fastcall google::protobuf::safe_strtou64(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  char *v5; // rsi
  __int64 v6; // rdx
  std::string *M_p; // rdi
  std::string::size_type M_string_length; // rcx
  const char *v9; // rdx
  const char *v10; // rsi
  char v11; // r12
  unsigned __int64 v12; // rdx
  std::string::size_type v13; // rcx
  std::forward_iterator_tag v14; // cl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::string::size_type v16; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  unsigned int v18; // r14d
  std::string *v19; // rdi
  std::string::pointer v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // edx
  std::string __beg; // [rsp+0h] [rbp-68h] BYREF
  std::string src; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 8);
  __beg._M_dataplus._M_p = __beg._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&__beg, v5, &v5[v6], a4);
  M_p = (std::string *)__beg._M_dataplus._M_p;
  M_string_length = __beg._M_string_length;
  *a2 = 0LL;
  v9 = (char *)M_p + M_string_length;
  if ( M_p >= (std::string *)((char *)M_p + M_string_length) )
    goto LABEL_32;
  v10 = (const char *)M_p;
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 != 32 )
      break;
    if ( v9 == ++v10 )
      goto LABEL_32;
  }
  if ( v9 <= v10 )
    goto LABEL_32;
  while ( *(v9 - 1) == 32 )
  {
    if ( --v9 == v10 )
      goto LABEL_32;
  }
  if ( v9 <= v10 || ((v11 - 43) & 0xFD) == 0 && (++v10, v10 >= v9) )
  {
LABEL_32:
    v18 = 0;
    goto LABEL_33;
  }
  v12 = v9 - v10;
  if ( M_string_length < v10 - (const char *)M_p )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      v10 - (const char *)M_p,
      M_string_length);
  v13 = M_string_length - (v10 - (const char *)M_p);
  src._M_dataplus._M_p = src._anon_0._M_local_buf;
  if ( v13 <= v12 )
    v12 = v13;
  std::string::_M_construct<char const*>(&src, v10, &v10[v12], (std::forward_iterator_tag)v13);
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p;
  v16 = src._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p == &src._anon_0 )
  {
    if ( src._M_string_length )
    {
      if ( src._M_string_length == 1 )
        *__beg._M_dataplus._M_p = src._anon_0._M_local_buf[0];
      else
        memcpy(__beg._M_dataplus._M_p, &src._anon_0, src._M_string_length);
      v16 = src._M_string_length;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p;
    }
    __beg._M_string_length = v16;
    p_anon_0->_M_local_buf[v16] = 0;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p;
  }
  else
  {
    v14.gap0[0] = src._anon_0._M_local_buf[0];
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p == &__beg._anon_0 )
    {
      __beg._M_dataplus._M_p = src._M_dataplus._M_p;
      __beg._M_string_length = src._M_string_length;
      __beg._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
    }
    else
    {
      M_allocated_capacity = __beg._anon_0._M_allocated_capacity;
      __beg._M_dataplus._M_p = src._M_dataplus._M_p;
      __beg._M_string_length = src._M_string_length;
      __beg._anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
      if ( p_anon_0 )
      {
        src._M_dataplus._M_p = (std::string::pointer)p_anon_0;
        src._anon_0._M_allocated_capacity = M_allocated_capacity;
        goto LABEL_19;
      }
    }
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    p_anon_0 = &src._anon_0;
  }
LABEL_19:
  src._M_string_length = 0LL;
  p_anon_0->_M_local_buf[0] = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
    operator delete(src._M_dataplus._M_p);
  M_p = (std::string *)__beg._M_dataplus._M_p;
  v18 = 0;
  if ( v11 != 45 )
  {
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &src,
      __beg._M_dataplus._M_p,
      &__beg._M_dataplus._M_p[__beg._M_string_length],
      v14);
    v19 = (std::string *)src._M_dataplus._M_p;
    if ( src._M_dataplus._M_p >= &src._M_dataplus._M_p[src._M_string_length] )
    {
      v21 = 0LL;
LABEL_45:
      *a2 = v21;
      v18 = 1;
    }
    else
    {
      v20 = src._M_dataplus._M_p;
      v21 = 0LL;
      while ( 1 )
      {
        v23 = (unsigned __int8)*v20 - 48;
        if ( (unsigned __int8)(*v20 - 48) > 9u )
        {
          *a2 = v21;
          v18 = 0;
          goto LABEL_29;
        }
        if ( v21 > 0x1999999999999999LL )
          break;
        v22 = 10 * v21;
        if ( v22 > ~(__int64)v23 )
          break;
        ++v20;
        v21 = v23 + v22;
        if ( &src._M_dataplus._M_p[src._M_string_length] == v20 )
          goto LABEL_45;
      }
      *a2 = -1LL;
      v18 = 0;
    }
LABEL_29:
    if ( v19 != (std::string *)&src._anon_0 )
      operator delete(v19);
    M_p = (std::string *)__beg._M_dataplus._M_p;
  }
LABEL_33:
  if ( M_p != (std::string *)&__beg._anon_0 )
    operator delete(M_p);
  return v18;
};

// Line 1376: range 000000000C8E49E0-000000000C8E4AE8
char *__fastcall google::protobuf::FloatToBuffer(float a1, float value, char *buffer)
{
  double v4; // xmm0_8
  float v6[3]; // [rsp+1Ch] [rbp-Ch] BYREF

  if ( a1 == INFINITY )
  {
    *(_DWORD *)buffer = 6712937;
    return buffer;
  }
  else if ( a1 == -INFINITY )
  {
    strcpy(buffer, "-inf");
    return buffer;
  }
  else
  {
    snprintf(buffer, 0x18uLL, "%.*g", 6, a1);
    v4 = a1;
    if ( !google::protobuf::safe_strtof(buffer, v6) || a1 != v6[0] )
      snprintf(buffer, 0x18uLL, "%.*g", 9, v4);
    google::protobuf::DelocalizeRadix(buffer);
    return buffer;
  }
};

// Line 1424: range 000000000C8E4AF0-000000000C8E4B2F
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::strings::AlphaNum::AlphaNum(
        google::protobuf::strings::AlphaNum *const this,
        google::protobuf::strings::Hex hex)
{
  google::protobuf::uint64 v2; // rdx
  char *v3; // rax
  unsigned __int64 v4; // rsi
  char v5; // cl

  v2 = hex.value | (1LL << (4 * LOBYTE(hex.spec) - 4));
  v3 = (char *)&this[1];
  do
  {
    v5 = v4;
    --v3;
    v4 >>= 4;
    v2 >>= 4;
    *v3 = google::protobuf::strings::AlphaNum::AlphaNum(google::protobuf::strings::Hex)::hexdigits[v5 & 0xF];
  }
  while ( v2 );
  this->piece_data_ = v3;
  this->piece_size_ = (char *)&this[1] - v3;
};

// Line 1452: range 000000000C8E3080-000000000C8E30BB
char *__fastcall google::protobuf::Append2(
        char *out,
        const google::protobuf::strings::AlphaNum *x1,
        const google::protobuf::strings::AlphaNum *x2)
{
  char *v4; // rax

  v4 = (char *)memcpy(out, x1->piece_data_, x1->piece_size_);
  return (char *)memcpy(&v4[x1->piece_size_], x2->piece_data_, x2->piece_size_) + x2->piece_size_;
};

// Line 1462: range 000000000C8E30C0-000000000C8E3133
char *__fastcall google::protobuf::Append4(
        char *out,
        const google::protobuf::strings::AlphaNum *x1,
        const google::protobuf::strings::AlphaNum *x2,
        const google::protobuf::strings::AlphaNum *x3,
        const google::protobuf::strings::AlphaNum *x4)
{
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax

  v8 = (char *)memcpy(out, x1->piece_data_, x1->piece_size_);
  v9 = (char *)memcpy(&v8[x1->piece_size_], x2->piece_data_, x2->piece_size_);
  v10 = (char *)memcpy(&v9[x2->piece_size_], x3->piece_data_, x3->piece_size_);
  return (char *)memcpy(&v10[x3->piece_size_], x4->piece_data_, x4->piece_size_) + x4->piece_size_;
};

// Line 1476: range 000000000C8E4B30-000000000C8E4B85
__int64 __fastcall google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        const google::protobuf::strings::AlphaNum *a2,
        const google::protobuf::strings::AlphaNum *a3)
{
  size_t piece_size; // rsi

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  piece_size = a3->piece_size_;
  *(_QWORD *)a1 = a1 + 16;
  std::string::resize(a1, a2->piece_size_ + piece_size, 0LL);
  google::protobuf::Append2(*(char **)a1, a2, a3);
  return a1;
};

// Line 1485: range 000000000C8E4B90-000000000C8E4BF7
__int64 __fastcall google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        const google::protobuf::strings::AlphaNum *a2,
        const google::protobuf::strings::AlphaNum *a3,
        __int64 a4)
{
  __int64 v7; // rsi
  char *v8; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  v7 = *(_QWORD *)(a4 + 8);
  *(_QWORD *)a1 = a1 + 16;
  std::string::resize(a1, a2->piece_size_ + a3->piece_size_ + v7, 0LL);
  v8 = google::protobuf::Append2(*(char **)a1, a2, a3);
  memcpy(v8, *(const void **)a4, *(_QWORD *)(a4 + 8));
  return a1;
};

// Line 1496: range 000000000C8E4C00-000000000C8E4C71
__int64 __fastcall google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        const google::protobuf::strings::AlphaNum *a2,
        const google::protobuf::strings::AlphaNum *a3,
        const google::protobuf::strings::AlphaNum *a4,
        const google::protobuf::strings::AlphaNum *a5)
{
  size_t piece_size; // rsi

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  piece_size = a5->piece_size_;
  *(_QWORD *)a1 = a1 + 16;
  std::string::resize(a1, a2->piece_size_ + a3->piece_size_ + a4->piece_size_ + piece_size, 0LL);
  google::protobuf::Append4(*(char **)a1, a2, a3, a4, a5);
  return a1;
};

// Line 1506: range 000000000C8E4C80-000000000C8E4D0C
__int64 __fastcall google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        const google::protobuf::strings::AlphaNum *a2,
        const google::protobuf::strings::AlphaNum *a3,
        const google::protobuf::strings::AlphaNum *a4,
        const google::protobuf::strings::AlphaNum *a5,
        __int64 a6)
{
  __int64 v11; // rsi
  char *v12; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  v11 = *(_QWORD *)(a6 + 8);
  *(_QWORD *)a1 = a1 + 16;
  std::string::resize(a1, a2->piece_size_ + a3->piece_size_ + a4->piece_size_ + a5->piece_size_ + v11, 0LL);
  v12 = google::protobuf::Append4(*(char **)a1, a2, a3, a4, a5);
  memcpy(v12, *(const void **)a6, *(_QWORD *)(a6 + 8));
  return a1;
};

// Line 1517: range 000000000C8E4D20-000000000C8E4DB6
__int64 __fastcall google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        const google::protobuf::strings::AlphaNum *a2,
        const google::protobuf::strings::AlphaNum *a3,
        const google::protobuf::strings::AlphaNum *a4,
        const google::protobuf::strings::AlphaNum *a5,
        const google::protobuf::strings::AlphaNum *a6,
        google::protobuf::strings::AlphaNum *x2)
{
  char *v11; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a1 + 16;
  std::string::resize(
    a1,
    a2->piece_size_ + a3->piece_size_ + a4->piece_size_ + a5->piece_size_ + a6->piece_size_ + x2->piece_size_,
    0LL);
  v11 = google::protobuf::Append4(*(char **)a1, a2, a3, a4, a5);
  google::protobuf::Append2(v11, a6, x2);
  return a1;
};

// Line 1530: range 000000000C8E4DC0-000000000C8E4E73
__int64 __fastcall google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        const google::protobuf::strings::AlphaNum *a2,
        const google::protobuf::strings::AlphaNum *a3,
        const google::protobuf::strings::AlphaNum *a4,
        const google::protobuf::strings::AlphaNum *a5,
        const google::protobuf::strings::AlphaNum *a6,
        google::protobuf::strings::AlphaNum *x2,
        __int64 a8)
{
  char *v12; // rax
  char *v13; // rax

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  std::string::resize(
    a1,
    a2->piece_size_
  + a3->piece_size_
  + a4->piece_size_
  + a5->piece_size_
  + a6->piece_size_
  + x2->piece_size_
  + *(_QWORD *)(a8 + 8),
    0LL);
  v12 = google::protobuf::Append4(*(char **)a1, a2, a3, a4, a5);
  v13 = google::protobuf::Append2(v12, a6, x2);
  memcpy(v13, *(const void **)a8, *(_QWORD *)(a8 + 8));
  return a1;
};

// Line 1544: range 000000000C8E4E80-000000000C8E4F32
__int64 __fastcall google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        const google::protobuf::strings::AlphaNum *a2,
        const google::protobuf::strings::AlphaNum *a3,
        const google::protobuf::strings::AlphaNum *a4,
        const google::protobuf::strings::AlphaNum *a5,
        const google::protobuf::strings::AlphaNum *a6,
        google::protobuf::strings::AlphaNum *x2,
        google::protobuf::strings::AlphaNum *x3,
        google::protobuf::strings::AlphaNum *x4)
{
  char *v13; // rax

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  std::string::resize(
    a1,
    a2->piece_size_
  + a3->piece_size_
  + a4->piece_size_
  + a5->piece_size_
  + a6->piece_size_
  + x2->piece_size_
  + x3->piece_size_
  + x4->piece_size_,
    0LL);
  v13 = google::protobuf::Append4(*(char **)a1, a2, a3, a4, a5);
  google::protobuf::Append4(v13, a6, x2, x3, x4);
  return a1;
};

// Line 1557: range 000000000C8E4F40-000000000C8E500F
__int64 __fastcall google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        const google::protobuf::strings::AlphaNum *a2,
        const google::protobuf::strings::AlphaNum *a3,
        const google::protobuf::strings::AlphaNum *a4,
        const google::protobuf::strings::AlphaNum *a5,
        const google::protobuf::strings::AlphaNum *a6,
        google::protobuf::strings::AlphaNum *x2,
        google::protobuf::strings::AlphaNum *x3,
        google::protobuf::strings::AlphaNum *x4,
        __int64 a10)
{
  char *v14; // rax
  char *v15; // rax

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  std::string::resize(
    a1,
    a2->piece_size_
  + a3->piece_size_
  + a4->piece_size_
  + a5->piece_size_
  + a6->piece_size_
  + x2->piece_size_
  + x3->piece_size_
  + x4->piece_size_
  + *(_QWORD *)(a10 + 8),
    0LL);
  v14 = google::protobuf::Append4(*(char **)a1, a2, a3, a4, a5);
  v15 = google::protobuf::Append4(v14, a6, x2, x3, x4);
  memcpy(v15, *(const void **)a10, *(_QWORD *)(a10 + 8));
  return a1;
};

// Line 1582: range 000000000C8E5050-000000000C8E5090
void __fastcall google::protobuf::StrAppend(
        std::string *result,
        const google::protobuf::strings::AlphaNum *a,
        const google::protobuf::strings::AlphaNum *b)
{
  std::string::size_type M_string_length; // rbp

  M_string_length = result->_M_string_length;
  std::string::resize(result, M_string_length + a->piece_size_ + b->piece_size_, 0LL);
  google::protobuf::Append2(&result->_M_dataplus._M_p[M_string_length], a, b);
};

// Line 1593: range 000000000C8E50A0-000000000C8E50F2
void __fastcall google::protobuf::StrAppend(
        std::string *result,
        const google::protobuf::strings::AlphaNum *a,
        const google::protobuf::strings::AlphaNum *b,
        const google::protobuf::strings::AlphaNum *c)
{
  std::string::size_type M_string_length; // r12
  char *v7; // rax

  M_string_length = result->_M_string_length;
  std::string::resize(result, M_string_length + a->piece_size_ + b->piece_size_ + c->piece_size_, 0LL);
  v7 = google::protobuf::Append2(&result->_M_dataplus._M_p[M_string_length], a, b);
  memcpy(v7, c->piece_data_, c->piece_size_);
};

// Line 1607: range 000000000C8E5100-000000000C8E515C
void __fastcall google::protobuf::StrAppend(
        std::string *result,
        const google::protobuf::strings::AlphaNum *a,
        const google::protobuf::strings::AlphaNum *b,
        const google::protobuf::strings::AlphaNum *c,
        const google::protobuf::strings::AlphaNum *d)
{
  std::string::size_type M_string_length; // rbp

  M_string_length = result->_M_string_length;
  std::string::resize(result, M_string_length + a->piece_size_ + b->piece_size_ + c->piece_size_ + d->piece_size_, 0LL);
  google::protobuf::Append4(&result->_M_dataplus._M_p[M_string_length], a, b, c, d);
};

// Line 1621: range 000000000C8E5170-000000000C8E5379
__int64 __fastcall google::protobuf::GlobalReplaceSubstring(_QWORD *a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // r13d
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  google::protobuf::internal::LogMessage_0 *v18; // rax
  int v19; // [rsp+8h] [rbp-90h]
  unsigned int v20; // [rsp+Ch] [rbp-8Ch]
  google::protobuf::internal::LogFinisher v21; // [rsp+1Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v22; // [rsp+20h] [rbp-78h] BYREF

  if ( !a3 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v22, LOGLEVEL_FATAL_0, "google/protobuf/stubs/strutil.cc", 1622);
    v18 = google::protobuf::internal::LogMessage::operator<<(&v22, "CHECK failed: s != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v21, v18);
    google::protobuf::internal::LogMessage::~LogMessage(&v22);
  }
  if ( a3[1] )
  {
    v5 = 0;
    if ( a1[1] )
    {
      v7 = *a1;
      *(_QWORD *)&v22.level_ = &v22.line_;
      v22.filename_ = 0LL;
      LOBYTE(v22.line_) = 0;
      v8 = std::string::find(a3, v7, 0LL);
      v19 = v8;
      v9 = v8;
      if ( v8 != -1 )
      {
        v10 = *a3;
        v5 = 1;
        if ( a3[1] <= (unsigned __int64)v8 )
          v9 = a3[1];
        v11 = 0LL;
        while ( 1 )
        {
          std::string::_M_append(&v22, (const char *)(v11 + v10), v9);
          std::string::_M_replace(&v22, v22.filename_, 0LL, *(const char **)a2, *(_QWORD *)(a2 + 8));
          v11 = (int)(a1[1] + v19);
          v20 = a1[1] + v19;
          v14 = std::string::find(a3, *a1, v11);
          v19 = v14;
          if ( v14 == -1 )
            break;
          v12 = a3[1];
          ++v5;
          v10 = *a3;
          v13 = (int)(v14 - v20);
          v9 = v12 - v11;
          if ( v13 <= v12 - v11 )
            v9 = v13;
          if ( v11 > v12 )
            std::__throw_out_of_range_fmt(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              "basic_string::append",
              v11,
              v12);
        }
        v17 = a3[1];
        if ( v11 > v17 )
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::append",
            v11,
            a3[1]);
        std::string::_M_append(&v22, (const char *)(v11 + *a3), v17 - v11, v15, v16, v20);
        std::string::swap(a3, &v22);
      }
      if ( *(google::protobuf::internal::LogMessage_0 **)&v22.level_ != (google::protobuf::internal::LogMessage_0 *)&v22.line_ )
        operator delete(*(void **)&v22.level_);
    }
  }
  else
  {
    return 0;
  }
  return v5;
};

// Line 1622: range 000000000C72CC40-000000000C72CC4B
void __fastcall __noreturn google::protobuf::GlobalReplaceSubstring()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r14

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 1663: range 000000000C8E53E0-000000000C8E540D
int __fastcall google::protobuf::CalculateBase64EscapedLen(int input_len)
{
  int v1; // r8d

  v1 = 4 * (input_len / 3);
  if ( input_len != 3 * (input_len / 3) )
    v1 += 4;
  return v1;
};

// Line 1663: range 000000000C8E5380-000000000C8E53D2
int __fastcall google::protobuf::CalculateBase64EscapedLen(int input_len, bool do_padding)
{
  int v2; // r8d
  int v3; // edi
  int v5; // eax
  int v6; // r8d

  v2 = 4 * (input_len / 3);
  v3 = input_len % 3;
  if ( !v3 )
    return v2;
  if ( v3 != 1 )
  {
    v2 += do_padding + 3;
    return v2;
  }
  v5 = v2 + 2;
  v6 = v2 + 4;
  if ( !do_padding )
    return v5;
  return v6;
};

// Line 1725: range 000000000C8E5410-000000000C8E595B
int __fastcall google::protobuf::Base64UnescapeInternal(
        const char *src_param,
        int szsrc,
        char *dest,
        int szdest,
        const char *unbase64)
{
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r11d
  char v10; // r10
  unsigned __int8 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // ebp
  int v17; // r9d
  int v18; // edx
  const char *v19; // rcx
  char v20; // al
  const char *v22; // r12
  __int64 v23; // rcx
  int v24; // ebp
  char v25; // r10
  int v26; // ecx
  __int64 v27; // rcx
  char v28; // r10
  unsigned __int8 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // rcx
  char v33; // r10

  if ( dest )
  {
    if ( szsrc > 3 )
    {
      v6 = 0LL;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)src_param;
        v9 = v6;
        v10 = unbase64[v8];
        v11 = *src_param;
        if ( (_BYTE)v8
          && (v12 = *((unsigned __int8 *)src_param + 1), (_BYTE)v12)
          && (v13 = *((unsigned __int8 *)src_param + 2), (_BYTE)v13)
          && (v7 = (unbase64[v13] << 6) | unbase64[*((unsigned __int8 *)src_param + 3)] | (v10 << 18) | (unbase64[v12] << 12),
              v7 >= 0) )
        {
          szsrc -= 4;
          src_param += 4;
          LODWORD(v14) = 0;
          v15 = -1;
        }
        else
        {
          while ( 1 )
          {
            --szsrc;
            ++src_param;
            LODWORD(v14) = v11;
            if ( v10 >= 0 )
              break;
            if ( (unsigned __int8)(v11 - 9) > 4u && v11 != 32 || szsrc == 3 )
              goto LABEL_35;
            v10 = unbase64[*(unsigned __int8 *)src_param];
            v11 = *src_param;
          }
          v7 = v10;
          while ( 1 )
          {
            LODWORD(v14) = *(unsigned __int8 *)src_param++;
            --szsrc;
            if ( unbase64[(unsigned __int8)v14] >= 0 )
              break;
            if ( (unsigned __int8)(v14 - 9) > 4u && (_BYTE)v14 != 32 || szsrc == 2 )
              goto LABEL_78;
          }
          v7 = unbase64[(unsigned __int8)v14] | (v10 << 6);
          while ( 1 )
          {
            LODWORD(v14) = *(unsigned __int8 *)src_param++;
            --szsrc;
            if ( unbase64[(unsigned __int8)v14] >= 0 )
              break;
            if ( (unsigned __int8)(v14 - 9) > 4u && (_BYTE)v14 != 32 || szsrc == 1 )
              goto LABEL_95;
          }
          v7 = unbase64[(unsigned __int8)v14] | (v7 << 6);
          while ( 1 )
          {
            LODWORD(v14) = *(unsigned __int8 *)src_param++;
            --szsrc;
            v15 = unbase64[(unsigned __int8)v14];
            if ( v15 >= 0 )
              break;
            if ( (unsigned __int8)(v14 - 9) > 4u && (_BYTE)v14 != 32 || !szsrc )
              goto LABEL_100;
          }
          v7 = v15 | (v7 << 6);
        }
        if ( szdest <= (int)v6 + 2 )
          return -1;
        dest[v6 + 2] = v7;
        v9 = v6 + 3;
        dest[v6 + 1] = BYTE1(v7);
        v7 = HIWORD(v7);
        dest[v6] = v7;
        v6 += 3LL;
        if ( szsrc <= 3 )
          goto LABEL_11;
      }
    }
LABEL_101:
    v9 = 0;
    if ( szsrc > 0 )
    {
      v17 = 0;
      v7 = 0;
      goto LABEL_41;
    }
    return v9;
  }
  if ( szsrc <= 3 )
    goto LABEL_101;
  v27 = *(unsigned __int8 *)src_param;
  v7 = 0;
  v9 = 0;
  v28 = unbase64[v27];
  v29 = *src_param;
  if ( (_BYTE)v27 )
  {
    do
    {
      v30 = *((unsigned __int8 *)src_param + 1);
      if ( !(_BYTE)v30 )
        break;
      v31 = *((unsigned __int8 *)src_param + 2);
      if ( !(_BYTE)v31 )
        break;
      v7 = (unbase64[v31] << 6) | unbase64[*((unsigned __int8 *)src_param + 3)] | (v28 << 18) | (unbase64[v30] << 12);
      if ( v7 < 0 )
        break;
      szsrc -= 4;
      src_param += 4;
      LODWORD(v14) = 0;
      v15 = -1;
LABEL_68:
      v9 += 3;
      if ( szsrc <= 3 )
      {
LABEL_11:
        v16 = (unsigned int)v15 >> 31;
        v17 = 0;
        if ( (unsigned int)v14 <= 0x3D )
LABEL_12:
          v16 &= ~(unsigned int)(0x2000400000000001uLL >> v14);
        if ( !(_BYTE)v16 )
        {
          if ( (_DWORD)v14 != 61 && (_DWORD)v14 != 46 )
            goto LABEL_40;
          ++szsrc;
          --src_param;
          goto LABEL_17;
        }
        goto LABEL_37;
      }
      v32 = *(unsigned __int8 *)src_param;
      v28 = unbase64[v32];
      v29 = *src_param;
    }
    while ( (_BYTE)v32 );
  }
  --szsrc;
  ++src_param;
  LODWORD(v14) = v29;
  if ( v28 >= 0 )
    goto second_no_dest;
  while ( ((unsigned __int8)(v29 - 9) <= 4u || v29 == 32) && szsrc != 3 )
  {
    v14 = *(unsigned __int8 *)src_param;
    --szsrc;
    ++src_param;
    v33 = unbase64[v14];
    v29 = v14;
    LODWORD(v14) = (unsigned __int8)v14;
    if ( v33 >= 0 )
    {
second_no_dest:
      while ( 1 )
      {
        LODWORD(v14) = *(unsigned __int8 *)src_param++;
        --szsrc;
        if ( unbase64[(unsigned __int8)v14] >= 0 )
          break;
        if ( (unsigned __int8)(v14 - 9) > 4u && (_BYTE)v14 != 32 || szsrc == 2 )
        {
LABEL_78:
          v17 = 1;
          goto LABEL_36;
        }
      }
      while ( 1 )
      {
        LODWORD(v14) = *(unsigned __int8 *)src_param++;
        --szsrc;
        if ( unbase64[(unsigned __int8)v14] >= 0 )
          break;
        if ( (unsigned __int8)(v14 - 9) > 4u && (_BYTE)v14 != 32 || szsrc == 1 )
        {
LABEL_95:
          v17 = 2;
          goto LABEL_36;
        }
      }
      while ( 1 )
      {
        LODWORD(v14) = *(unsigned __int8 *)src_param++;
        --szsrc;
        v15 = unbase64[(unsigned __int8)v14];
        if ( v15 >= 0 )
          goto LABEL_68;
        if ( (unsigned __int8)(v14 - 9) > 4u && (_BYTE)v14 != 32 || !szsrc )
        {
LABEL_100:
          v17 = 3;
          goto LABEL_36;
        }
      }
    }
  }
LABEL_35:
  v17 = 0;
LABEL_36:
  v16 = 1;
  if ( (unsigned int)v14 <= 0x3D )
    goto LABEL_12;
LABEL_37:
  if ( (_DWORD)v14 != 32 && (_DWORD)v14 != 9 && (unsigned __int8)(v14 - 10) > 3u )
    return -1;
LABEL_40:
  while ( szsrc )
  {
LABEL_41:
    v22 = src_param;
    v23 = *(unsigned __int8 *)src_param;
    v24 = szsrc;
    ++src_param;
    --szsrc;
    v25 = v23;
    v26 = unbase64[v23];
    if ( (v26 & 0x80u) != 0 )
    {
      if ( (unsigned __int8)(v25 - 9) > 4u && v25 != 32 )
      {
        if ( !v25 )
          break;
        if ( v25 != 61 && v25 != 46 )
          return -1;
        src_param = v22;
        szsrc = v24;
        if ( v17 != 2 )
          goto LABEL_18;
        goto LABEL_58;
      }
    }
    else
    {
      ++v17;
      v7 = v26 | (v7 << 6);
      if ( v17 == 4 )
      {
        if ( dest )
        {
          if ( v9 + 2 >= szdest )
            return -1;
          dest[v9 + 2] = v7;
          dest[v9 + 1] = BYTE1(v7);
          dest[v9] = BYTE2(v7);
        }
        v9 += 3;
        v7 = 0;
        v17 = 0;
      }
    }
  }
LABEL_17:
  if ( v17 == 2 )
  {
LABEL_58:
    if ( dest )
    {
      if ( v9 >= szdest )
        return -1;
      dest[v9] = (unsigned int)v7 >> 4;
    }
    ++v9;
  }
  else
  {
LABEL_18:
    if ( v17 == 3 )
    {
      if ( dest )
      {
        if ( v9 + 1 >= szdest )
          return -1;
        dest[v9] = (unsigned int)v7 >> 10;
        dest[v9 + 1] = (unsigned int)v7 >> 2;
      }
      v9 += 2;
      v17 = 1;
    }
    else
    {
      if ( v17 == 1 )
        return -1;
      v17 = 0;
    }
  }
  if ( szsrc <= 0 )
    return v9;
  v18 = 0;
  v19 = &src_param[szsrc - 1 + 1];
  do
  {
    v20 = *src_param;
    if ( !*src_param )
      break;
    if ( v20 == 61 || v20 == 46 )
    {
      ++v18;
    }
    else if ( (unsigned __int8)(v20 - 9) > 4u && v20 != 32 )
    {
      return -1;
    }
    ++src_param;
  }
  while ( src_param != v19 );
  if ( !v18 )
    return v9;
  if ( v17 != v18 )
    return -1;
  return v9;
};

// Line 2057: range 000000000C8E5A20-000000000C8E5A26
int __fastcall google::protobuf::WebSafeBase64Unescape(const char *src, int szsrc, char *dest, int szdest)
{
  return google::protobuf::Base64UnescapeInternal(src, szsrc, dest, szdest, &google::protobuf::kUnWebSafeBase64);
};

// Line 2065: range 000000000C8E5960-000000000C8E5A18
bool __fastcall google::protobuf::Base64UnescapeInternal(
        const char *src,
        int slen,
        std::string *dest,
        const char *unbase64)
{
  int v4; // eax
  int v7; // r12d
  char *M_p; // rdx
  int v9; // eax
  std::string::size_type M_string_length; // rcx
  std::string::pointer v11; // rdx
  std::string::pointer v13; // rax

  v4 = slen + 3;
  if ( slen >= 0 )
    v4 = slen;
  v7 = slen % 4 + 3 * (v4 >> 2);
  std::string::resize(dest, v7, 0LL);
  M_p = 0LL;
  if ( dest->_M_string_length )
    M_p = dest->_M_dataplus._M_p;
  v9 = google::protobuf::Base64UnescapeInternal(src, slen, M_p, v7, unbase64);
  if ( v9 < 0 )
  {
    v13 = dest->_M_dataplus._M_p;
    dest->_M_string_length = 0LL;
    *v13 = 0;
    return 0;
  }
  else
  {
    M_string_length = dest->_M_string_length;
    if ( v9 > M_string_length )
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::erase",
        v9,
        M_string_length);
    v11 = dest->_M_dataplus._M_p;
    dest->_M_string_length = v9;
    v11[v9] = 0;
    return 1;
  }
};

// Line 2086: range 000000000C8E5A30-000000000C8E5A35
bool __fastcall google::protobuf::Base64Unescape(google::protobuf::StringPiece src, std::string *dest)
{
  return google::protobuf::Base64UnescapeInternal(src.ptr_, src.length_, dest, &google::protobuf::kUnBase64);
};

// Line 2090: range 000000000C8E5A40-000000000C8E5A45
bool __fastcall google::protobuf::WebSafeBase64Unescape(google::protobuf::StringPiece src, std::string *dest)
{
  return google::protobuf::Base64UnescapeInternal(src.ptr_, src.length_, dest, &google::protobuf::kUnWebSafeBase64);
};

// Line 2098: range 000000000C8E5A50-000000000C8E5C94
__int64 __fastcall google::protobuf::Base64EscapeInternal(
        google::protobuf *this,
        const unsigned __int8 *a2,
        _BYTE *a3,
        char *a4,
        __int64 a5,
        const char *a6)
{
  int v6; // ebp
  _BYTE *v7; // rbx
  char *i; // rsi
  unsigned int v9; // eax
  unsigned __int32 v10; // eax
  int v11; // esi
  int v12; // r10d
  char v13; // al
  unsigned int v15; // edx
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  google::protobuf::internal::LogFinisher v19; // [rsp+1h] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v20; // [rsp+2h] [rbp-58h] BYREF

  if ( (int)a2 > 0 )
  {
    v6 = (int)a3;
    if ( 4 * (int)a2 <= 3 * (int)a4 )
    {
      v7 = a3;
      for ( i = (char *)this + (int)a2; this < (google::protobuf *)(i - 3); *(v7 - 1) = *(_BYTE *)(a5
                                                                                                 + (BYTE1(v10) & 0x3F)) )
      {
        v9 = *(_DWORD *)this;
        this = (google::protobuf *)((char *)this + 3);
        v7 += 4;
        v10 = _byteswap_ulong(v9);
        *(v7 - 4) = *(_BYTE *)(a5 + (v10 >> 26));
        *(v7 - 3) = *(_BYTE *)(a5 + ((v10 >> 20) & 0x3F));
        *(v7 - 2) = *(_BYTE *)(a5 + ((v10 >> 14) & 0x3F));
      }
      v11 = (_DWORD)i - (_DWORD)this;
      v12 = (_DWORD)a3 + (_DWORD)a4 - (_DWORD)v7;
      if ( v11 == 2 )
      {
        if ( v12 > 2 )
        {
          v18 = *(unsigned __int16 *)this;
          LOWORD(v18) = __ROR2__(v18, 8);
          *v7 = *(_BYTE *)(a5 + ((unsigned __int16)v18 >> 10));
          v7[1] = *(_BYTE *)(a5 + ((v18 >> 4) & 0x3F));
          v7[2] = *(_BYTE *)(a5 + ((4 * (_BYTE)v18) & 0x3C));
          if ( !(_BYTE)a6 )
          {
            LODWORD(v7) = (_DWORD)v7 + 3;
            return (unsigned int)((_DWORD)v7 - v6);
          }
          if ( v12 != 3 )
          {
            v7[3] = 61;
            LODWORD(v7) = (_DWORD)v7 + 4;
            return (unsigned int)((_DWORD)v7 - v6);
          }
        }
      }
      else
      {
        if ( v11 <= 2 )
        {
          if ( !v11 )
            return (unsigned int)((_DWORD)v7 - v6);
          if ( v11 == 1 )
          {
            if ( v12 > 1 )
            {
              v13 = 16 * *(_BYTE *)this;
              *v7 = *(_BYTE *)(a5 + (*(_BYTE *)this >> 2));
              v7[1] = *(_BYTE *)(a5 + (v13 & 0x30));
              if ( !(_BYTE)a6 )
              {
                LODWORD(v7) = (_DWORD)v7 + 2;
                return (unsigned int)((_DWORD)v7 - v6);
              }
              if ( v12 > 3 )
              {
                v7 += 4;
                *((_WORD *)v7 - 1) = 15677;
                return (unsigned int)((_DWORD)v7 - v6);
              }
            }
            return 0LL;
          }
LABEL_19:
          google::protobuf::internal::LogMessage::LogMessage(
            &v20,
            LOGLEVEL_FATAL_0,
            "google/protobuf/stubs/strutil.cc",
            2187);
          v16 = google::protobuf::internal::LogMessage::operator<<(&v20, "Logic problem? szsrc = ");
          v17 = google::protobuf::internal::LogMessage::operator<<(v16, v11);
          google::protobuf::internal::LogFinisher::operator=(&v19, v17);
          google::protobuf::internal::LogMessage::~LogMessage(&v20);
          return (unsigned int)((_DWORD)v7 - v6);
        }
        if ( v11 != 3 )
          goto LABEL_19;
        if ( v12 > 3 )
        {
          v7 += 4;
          v15 = (*(unsigned __int8 *)this << 16) + (unsigned __int16)__ROR2__(*(_WORD *)((char *)this + 1), 8);
          *(v7 - 4) = *(_BYTE *)(a5 + (*(unsigned __int8 *)this >> 2));
          *(v7 - 3) = *(_BYTE *)(a5 + ((v15 >> 12) & 0x3F));
          *(v7 - 2) = *(_BYTE *)(a5 + ((v15 >> 6) & 0x3F));
          *(v7 - 1) = *(_BYTE *)(a5 + (v15 & 0x3F));
          return (unsigned int)((_DWORD)v7 - v6);
        }
      }
    }
    return 0LL;
  }
  return 0LL;
};

// Line 2187: range 000000000C72CC6C-000000000C72CC79
void __fastcall __noreturn google::protobuf::Base64EscapeInternal(
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

// Line 2200: range 000000000C8E5CA0-000000000C8E5CAC
// local variable allocation has failed, the output may be wrong!
int __fastcall google::protobuf::Base64Escape(const unsigned __int8 *src, int szsrc, char *dest, int szdest)
{
  return google::protobuf::Base64EscapeInternal(
           (google::protobuf *)src,
           *(const unsigned __int8 **)&szsrc,
           dest,
           *(char **)&szdest,
           (__int64)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",
           (const char *)1);
};

// Line 2204: range 000000000C8E5CC0-000000000C8E5CCA
// local variable allocation has failed, the output may be wrong!
int __fastcall google::protobuf::WebSafeBase64Escape(
        const unsigned __int8 *src,
        int szsrc,
        char *dest,
        int szdest,
        bool do_padding)
{
  return google::protobuf::Base64EscapeInternal(
           (google::protobuf *)src,
           *(const unsigned __int8 **)&szsrc,
           dest,
           *(char **)&szdest,
           (__int64)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_",
           (const char *)do_padding);
};

// Line 2210: range 000000000C8E5CD0-000000000C8E5D8C
void __fastcall google::protobuf::Base64EscapeInternal(
        const unsigned __int8 *src,
        int szsrc,
        std::string *dest,
        bool do_padding,
        const char *base64_chars)
{
  _BOOL4 v5; // r14d
  int v11; // eax
  int v12; // esi
  int v13; // edi
  char *M_string_length; // rcx
  std::string::pointer M_p; // rdx
  int v16; // eax
  std::string::size_type v17; // rcx
  std::string::pointer v18; // rdx
  int v19; // eax

  v5 = do_padding;
  v11 = szsrc / 3;
  v12 = 4 * (szsrc / 3);
  v13 = szsrc - 3 * v11;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      v19 = v12 + 2;
      v12 += 4;
      if ( !do_padding )
        v12 = v19;
    }
    else
    {
      v12 += do_padding + 3;
    }
  }
  std::string::resize(dest, v12, 0LL);
  M_string_length = (char *)dest->_M_string_length;
  M_p = 0LL;
  if ( M_string_length )
    M_p = dest->_M_dataplus._M_p;
  v16 = google::protobuf::Base64EscapeInternal(
          (google::protobuf *)src,
          (const unsigned __int8 *)(unsigned int)szsrc,
          M_p,
          M_string_length,
          (__int64)base64_chars,
          (const char *)v5);
  v17 = dest->_M_string_length;
  if ( v16 > v17 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::erase",
      v16,
      v17);
  v18 = dest->_M_dataplus._M_p;
  dest->_M_string_length = v16;
  v18[v16] = 0;
};

// Line 2225: range 000000000C8E5DA0-000000000C8E5DA9
void __fastcall google::protobuf::Base64Escape(
        const unsigned __int8 *src,
        int szsrc,
        std::string *dest,
        bool do_padding)
{
  google::protobuf::Base64EscapeInternal(
    src,
    szsrc,
    dest,
    do_padding,
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
};

// Line 2225: range 000000000C8E5DC0-000000000C8E5DCB
void __fastcall google::protobuf::Base64Escape(google::protobuf::StringPiece src, std::string *dest)
{
  google::protobuf::Base64EscapeInternal(
    (const unsigned __int8 *)src.ptr_,
    src.length_,
    dest,
    1,
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
};

// Line 2230: range 000000000C8E5DB0-000000000C8E5DB9
void __fastcall google::protobuf::WebSafeBase64Escape(
        const unsigned __int8 *src,
        int szsrc,
        std::string *dest,
        bool do_padding)
{
  google::protobuf::Base64EscapeInternal(
    src,
    szsrc,
    dest,
    do_padding,
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_");
};

// Line 2230: range 000000000C8E5DD0-000000000C8E5DD8
void __fastcall google::protobuf::WebSafeBase64Escape(google::protobuf::StringPiece src, std::string *dest)
{
  google::protobuf::Base64EscapeInternal(
    (const unsigned __int8 *)src.ptr_,
    src.length_,
    dest,
    0,
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_");
};

// Line 2230: range 000000000C8E5DE0-000000000C8E5DEB
void __fastcall google::protobuf::WebSafeBase64EscapeWithPadding(google::protobuf::StringPiece src, std::string *dest)
{
  google::protobuf::Base64EscapeInternal(
    (const unsigned __int8 *)src.ptr_,
    src.length_,
    dest,
    1,
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_");
};

// Line 2250: range 000000000C8E5DF0-000000000C8E5F0A
int __fastcall google::protobuf::EncodeAsUTF8Char(google::protobuf::uint32 code_point, char *output)
{
  __int16 v2; // dx
  google::protobuf::uint32 v3; // ecx
  int v4; // edx
  google::protobuf::uint32 v5; // eax
  google::protobuf::uint32 *v6; // r13
  int v7; // r12d
  google::protobuf::uint32 v8; // eax
  unsigned int v9; // ecx
  int v10; // ebp
  google::protobuf::uint32 v11; // eax
  unsigned int i; // eax
  __int64 v13; // rdx
  google::protobuf::uint32 tmp[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  if ( code_point <= 0x7F )
  {
    v6 = (google::protobuf::uint32 *)((char *)tmp + 3);
    v10 = 1;
    v7 = 1;
LABEL_6:
    v11 = google::protobuf::ghtonl(code_point);
    v9 = v10;
    tmp[0] = v11;
    goto LABEL_7;
  }
  v2 = 4 * code_point;
  v3 = code_point & 0x3F;
  if ( code_point <= 0x7FF )
  {
    v6 = (google::protobuf::uint32 *)((char *)tmp + 2);
    v10 = 2;
    v7 = 2;
    code_point = v3 | v2 & 0x1F00 | 0xC080;
    goto LABEL_6;
  }
  v4 = v2 & 0x3F00;
  v5 = 16 * code_point;
  if ( code_point > 0xFFFF )
  {
    v6 = tmp;
    v10 = 4;
    v7 = 4;
    code_point = v3 | v4 | v5 & 0x3F0000 | (code_point << 6) & 0x7000000 | 0xF0808080;
    goto LABEL_6;
  }
  v6 = (google::protobuf::uint32 *)((char *)tmp + 1);
  v7 = 3;
  v8 = google::protobuf::ghtonl(v3 | v4 | v5 & 0xF0000 | 0xE08080);
  v9 = 3;
  tmp[0] = v8;
LABEL_7:
  for ( i = 0; i < v9; ++i )
  {
    v13 = i;
    output[v13] = *((_BYTE *)v6 + v13);
  }
  return v7;
};

// Line 2298: range 000000000C8E5F10-000000000C8E5F20
int __fastcall google::protobuf::UTF8FirstLetterNumBytes(const char *src, int len)
{
  int result; // eax

  result = 0;
  if ( len )
    return (unsigned __int8)google::protobuf::kUTF8LenTbl[*(unsigned __int8 *)src];
  return result;
};

// Line 2304: range 000000000C746D90-000000000C746DB1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf11StripStringEPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKcc()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};

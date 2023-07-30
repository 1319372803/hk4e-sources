// File: /home/jin.luo/ext/jsoncpp_1_9_3/src/lib_json/json_writer.cpp

// Line 97: range 00000000152E6210-00000000152E6417
Json::String *__fastcall Json::valueToString[abi:cxx11](Json::String *retstr, Json::LargestInt value)
{
  char *v3; // rbp
  int v4; // ebx
  unsigned __int64 v5; // rax
  char v6; // bl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r13
  std::string::size_type v8; // rax
  size_t v9; // r14
  unsigned __int64 v11; // rsi
  char *v12; // rcx
  char *v13; // rdi
  unsigned __int64 v14; // rax
  char *v15; // rcx
  char *v16; // rdi
  char *v17; // rax
  std::string::size_type v18; // [rsp+8h] [rbp-50h] BYREF
  Json::UIntToStringBuffer buffer; // [rsp+10h] [rbp-48h] BYREF

  if ( value == 0x8000000000000000LL )
  {
    buffer[24] = 0;
    v15 = &buffer[24];
    do
    {
      v16 = v15--;
      *v15 = value % 0xAuLL + 48;
      value /= 0xAuLL;
    }
    while ( v15 != &buffer[5] );
    *(v16 - 2) = 45;
    v3 = v16 - 2;
    v6 = 45;
LABEL_13:
    if ( v3 >= buffer )
      goto LABEL_6;
LABEL_14:
    __assert_fail(
      "current >= buffer",
      "src/lib_json/json_writer.cpp",
      0x6Au,
      "Json::String Json::valueToString(Json::LargestInt)");
  }
  if ( value < 0 )
  {
    buffer[24] = 0;
    v11 = -value;
    v12 = &buffer[24];
    do
    {
      v13 = v12--;
      *v12 = v11 % 0xA + 48;
      v14 = v11;
      v11 /= 0xAuLL;
    }
    while ( v14 > 9 );
    *(v13 - 2) = 45;
    v3 = v13 - 2;
    v6 = 45;
    goto LABEL_13;
  }
  buffer[24] = 0;
  v3 = &buffer[24];
  do
  {
    --v3;
    v4 = value % 0xAuLL;
    v5 = value;
    value /= 0xAuLL;
    v6 = v4 + 48;
    *v3 = v6;
  }
  while ( v5 > 9 );
  if ( v3 < buffer )
    goto LABEL_14;
LABEL_6:
  p_anon_0 = &retstr->_anon_0;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  v8 = strlen(v3);
  v18 = v8;
  v9 = v8;
  if ( v8 > 0xF )
  {
    v17 = (char *)std::string::_M_create(retstr, &v18, 0LL);
    retstr->_M_dataplus._M_p = v17;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17;
    retstr->_anon_0._M_allocated_capacity = v18;
    goto LABEL_21;
  }
  if ( v8 != 1 )
  {
    if ( !v8 )
      goto LABEL_9;
LABEL_21:
    memcpy(p_anon_0, v3, v9);
    v8 = v18;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
    goto LABEL_9;
  }
  retstr->_anon_0._M_local_buf[0] = v6;
LABEL_9:
  retstr->_M_string_length = v8;
  p_anon_0->_M_local_buf[v8] = 0;
  return retstr;
};

// Line 120: range 00000000152E6540-00000000152E6552
Json::String *__fastcall Json::valueToString[abi:cxx11](Json::String *retstr, Json::Int value)
{
  Json::valueToString[abi:cxx11](retstr, value);
  return retstr;
};

// Line 122: range 00000000152E6560-00000000152E6571
Json::String *__fastcall Json::valueToString[abi:cxx11](Json::String *retstr, Json::UInt value)
{
  Json::valueToString[abi:cxx11](retstr, value);
  return retstr;
};

// Line 172: range 00000000152E6580-00000000152E68A5
__int64 __fastcall Json::valueToString[abi:cxx11](__int64 a1, unsigned int a2, int a3, double a4)
{
  const char *v4; // rbp
  __int64 v5; // rbx
  size_t v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  const char *v9; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // edx
  __int64 v13; // rcx
  const char *v16; // r15
  int v17; // eax
  char *v18; // rax
  char *v19; // rdx
  size_t v20; // rsi
  char *v21; // rdx
  char *v22; // rax
  char *v23; // rcx
  size_t v24; // rax
  char *s; // [rsp+8h] [rbp-58h] BYREF
  size_t maxlen; // [rsp+10h] [rbp-50h]
  __m128i v27[4]; // [rsp+18h] [rbp-48h] BYREF

  if ( fabs(a4) > 1.797693134862316e308 )
  {
    v4 = "-1e+9999";
    if ( a4 >= 0.0 )
      v4 = "1e+9999";
    v5 = a1 + 16;
    *(_QWORD *)a1 = a1 + 16;
    v6 = strlen(v4);
    if ( (unsigned int)v6 < 8 )
    {
      if ( (v6 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 16) = *(_DWORD *)v4;
        *(_DWORD *)(v5 + (unsigned int)v6 - 4) = *(_DWORD *)&v4[(unsigned int)v6 - 4];
      }
      else if ( (_DWORD)v6 )
      {
        *(_BYTE *)(a1 + 16) = *v4;
        if ( (v6 & 2) != 0 )
          *(_WORD *)(v5 + (unsigned int)v6 - 2) = *(_WORD *)&v4[(unsigned int)v6 - 2];
      }
    }
    else
    {
      v7 = (a1 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)v4;
      *(_QWORD *)(v5 + (unsigned int)v6 - 8) = *(_QWORD *)&v4[(unsigned int)v6 - 8];
      v8 = v5 - v7;
      v9 = &v4[-v8];
      v10 = (v6 + v8) & 0xFFFFFFF8;
      if ( v10 >= 8 )
      {
        v11 = v10 & 0xFFFFFFF8;
        v12 = 0;
        do
        {
          v13 = v12;
          v12 += 8;
          *(_QWORD *)(v7 + v13) = *(_QWORD *)&v9[v13];
        }
        while ( v12 < v11 );
      }
    }
    *(_QWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + v6 + 16) = 0;
    return a1;
  }
  s = (char *)v27;
  v16 = "%.*g";
  std::string::_M_construct(&s, 36LL, 0LL);
  if ( a3 )
    v16 = "%.*f";
  while ( 1 )
  {
    v17 = snprintf(s, maxlen, v16, a2, a4, 1.797693134862316e308, a4);
    if ( v17 < 0 )
      __assert_fail(
        "len >= 0",
        "src/lib_json/json_writer.cpp",
        0x91u,
        "Json::String Json::{anonymous}::valueToString(double, bool, unsigned int, Json::PrecisionType)");
    if ( v17 < maxlen )
      break;
    std::string::resize(&s, v17 + 1LL, 0LL);
  }
  std::string::resize(&s, v17, 0LL);
  v18 = s;
  v19 = &s[maxlen];
  if ( s == &s[maxlen] )
  {
    v20 = 0LL;
LABEL_36:
    maxlen = v20;
    *v19 = 0;
    goto LABEL_24;
  }
  do
  {
    if ( *v18 == 44 )
      *v18 = 46;
    ++v18;
  }
  while ( v18 != v19 );
  v20 = v18 - s;
  if ( v18 == &s[maxlen] )
    goto LABEL_36;
  std::string::_M_erase(&s, v20, 0LL);
LABEL_24:
  v21 = s;
  if ( a3 == 1 )
  {
    v22 = &s[maxlen];
    if ( &s[maxlen] == s )
    {
LABEL_37:
      v24 = 0LL;
    }
    else
    {
      do
      {
        v23 = v22--;
        if ( *v22 != 48 )
          break;
        if ( v22 == s )
          goto LABEL_37;
      }
      while ( *(v22 - 1) != 46 );
      v24 = v23 - s;
      v21 = v23;
    }
    maxlen = v24;
    *v21 = 0;
  }
  if ( std::string::find(&s, 46LL, 0LL) == -1 && std::string::find(&s, 101LL, 0LL) == -1 )
  {
    if ( maxlen == 0x3FFFFFFFFFFFFFFFLL || maxlen == 4611686018427387902LL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&s, ".0", 2LL);
  }
  *(_QWORD *)a1 = a1 + 16;
  if ( s == (char *)v27 )
  {
    *(__m128i *)(a1 + 16) = _mm_load_si128(v27);
  }
  else
  {
    *(_QWORD *)a1 = s;
    *(_QWORD *)(a1 + 16) = v27[0].m128i_i64[0];
  }
  *(_QWORD *)(a1 + 8) = maxlen;
  return a1;
};

// Line 176: range 00000000152E68B0-00000000152E6907
Json::String *__fastcall Json::valueToString[abi:cxx11](Json::String *retstr, bool value)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rbp
  const char *v3; // rbx
  std::string::size_type v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx

  p_anon_0 = &retstr->_anon_0;
  v3 = "true";
  if ( !value )
    v3 = "false";
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  v4 = strlen(v3);
  if ( (_DWORD)v4 )
  {
    v5 = 0;
    do
    {
      v6 = v5++;
      p_anon_0->_M_local_buf[v6] = v3[v6];
    }
    while ( v5 < (unsigned int)v4 );
  }
  retstr->_M_string_length = v4;
  retstr->_anon_0._M_local_buf[v4] = 0;
  return retstr;
};

// Line 274: range 00000000152E5960-00000000152E6209
__m128i *__fastcall Json::valueToQuotedStringN(__m128i *this, const char *a2, unsigned int a3, char a4)
{
  signed __int64 v5; // rax
  const char *v7; // rbp
  const char *v8; // r14
  __int64 v9; // rdx
  const char *v10; // r13
  const char *v11; // r15
  int v12; // edi
  int v13; // edi
  const char *v14; // rdx
  int v15; // eax
  unsigned __int8 v16; // al
  int v17; // eax
  unsigned __int8 v18; // al
  int v19; // eax
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __m128i *v22; // rax
  __int64 v23; // rcx
  unsigned __int8 v24; // bl
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  _BYTE *v28; // rax
  __int64 v29; // rbx
  _BYTE *v30; // rax
  unsigned __int64 v31; // rdx
  unsigned int v32; // r8d
  char v33; // r8
  __int16 v34; // r8
  char v35; // al
  int v36; // ebx
  __int16 v37; // ax
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned __int8 v40; // al
  unsigned __int8 v41; // al
  __int64 v43; // [rsp+10h] [rbp-88h]
  __int64 v44; // [rsp+18h] [rbp-80h]
  __int64 v45; // [rsp+18h] [rbp-80h]
  void *v46[2]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v47[8]; // [rsp+30h] [rbp-68h] BYREF
  void *v48; // [rsp+40h] [rbp-58h] BYREF
  __int64 v49; // [rsp+48h] [rbp-50h]
  __m128i v50[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( !a2 )
  {
    this->m128i_i64[1] = 0LL;
    this->m128i_i64[0] = (__int64)this[1].m128i_i64;
    this[1].m128i_i8[0] = 0;
    return this;
  }
  v5 = a3;
  v7 = a2;
  v8 = &a2[a3];
  v9 = (__int64)a3 >> 2;
  if ( v9 )
  {
    v10 = &a2[4 * v9];
    v11 = a2;
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)v11;
      if ( (_BYTE)v12 == 92 || (_BYTE)v12 == 34 || !isprint(v12) )
        goto LABEL_35;
      v13 = *((unsigned __int8 *)v11 + 1);
      v14 = v11 + 1;
      if ( (_BYTE)v13 == 92 )
        break;
      if ( (_BYTE)v13 == 34 )
        break;
      v15 = isprint(v13);
      v14 = v11 + 1;
      if ( !v15 )
        break;
      v16 = v11[2];
      v14 = v11 + 2;
      if ( v16 == 92 )
        break;
      if ( v16 == 34 )
        break;
      v17 = isprint(v16);
      v14 = v11 + 2;
      if ( !v17 )
        break;
      v18 = v11[3];
      v14 = v11 + 3;
      if ( v18 == 92 )
        break;
      if ( v18 == 34 )
        break;
      v19 = isprint(v18);
      v14 = v11 + 3;
      if ( !v19 )
        break;
      v11 += 4;
      if ( v10 == v11 )
      {
        v5 = v8 - v11;
        goto LABEL_18;
      }
    }
    v11 = v14;
    goto LABEL_35;
  }
  v11 = a2;
LABEL_18:
  if ( v5 == 2 )
    goto LABEL_103;
  if ( v5 == 3 )
  {
    v40 = *v11;
    if ( *v11 == 92 || v40 == 34 || !isprint(v40) )
      goto LABEL_35;
    ++v11;
LABEL_103:
    v41 = *v11;
    if ( *v11 == 92 || v41 == 34 || !isprint(v41) )
      goto LABEL_35;
    ++v11;
    goto LABEL_21;
  }
  if ( v5 != 1 )
  {
LABEL_24:
    v46[1] = (void *)1;
    v46[0] = v47;
    v47[0] = 34;
    if ( strlen(a2) > 0x3FFFFFFFFFFFFFFELL )
      std::__throw_length_error("basic_string::append");
    v21 = std::string::_M_append(v46, a2);
    v48 = v50;
    if ( *(_QWORD *)v21 == v21 + 16 )
    {
      v50[0] = _mm_loadu_si128((const __m128i *)(v21 + 16));
    }
    else
    {
      v48 = *(void **)v21;
      v50[0].m128i_i64[0] = *(_QWORD *)(v21 + 16);
    }
    v49 = *(_QWORD *)(v21 + 8);
    *(_QWORD *)v21 = v21 + 16;
    *(_QWORD *)(v21 + 8) = 0LL;
    *(_BYTE *)(v21 + 16) = 0;
    if ( v49 == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    v22 = (__m128i *)std::string::_M_append(&v48, "\"", 1LL);
    this->m128i_i64[0] = (__int64)this[1].m128i_i64;
    if ( (__m128i *)v22->m128i_i64[0] == &v22[1] )
    {
      this[1] = _mm_loadu_si128(v22 + 1);
    }
    else
    {
      this->m128i_i64[0] = v22->m128i_i64[0];
      this[1].m128i_i64[0] = v22[1].m128i_i64[0];
    }
    v23 = v22->m128i_i64[1];
    v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
    v22->m128i_i64[1] = 0LL;
    this->m128i_i64[1] = v23;
    v22[1].m128i_i8[0] = 0;
    if ( v48 != v50 )
      operator delete(v48);
    if ( v46[0] != v47 )
      operator delete(v46[0]);
    return this;
  }
LABEL_21:
  v20 = *v11;
  if ( *v11 != 92 && v20 != 34 && isprint(v20) )
    goto LABEL_24;
LABEL_35:
  if ( v8 == v11 )
    goto LABEL_24;
  v49 = 0LL;
  v48 = v50;
  v50[0].m128i_i8[0] = 0;
  std::string::reserve(&v48, 2 * a3 + 3);
  if ( v49 == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v48, "\"", 1LL);
  if ( a2 != v8 )
  {
    while ( 1 )
    {
      v24 = *v7;
      if ( *v7 > 34 )
        break;
      if ( (char)v24 > 7 )
      {
        switch ( v24 )
        {
          case 8u:
            if ( v49 == 0x3FFFFFFFFFFFFFFFLL || v49 == 4611686018427387902LL )
              std::__throw_length_error("basic_string::append");
            std::string::_M_append(&v48, "\\b", 2LL);
            break;
          case 9u:
            if ( v49 == 0x3FFFFFFFFFFFFFFFLL || v49 == 4611686018427387902LL )
              std::__throw_length_error("basic_string::append");
            std::string::_M_append(&v48, "\\t", 2LL);
            break;
          case 0xAu:
            if ( v49 == 0x3FFFFFFFFFFFFFFFLL || v49 == 4611686018427387902LL )
              std::__throw_length_error("basic_string::append");
            std::string::_M_append(&v48, "\\n", 2LL);
            break;
          case 0xCu:
            if ( v49 == 0x3FFFFFFFFFFFFFFFLL || v49 == 4611686018427387902LL )
              std::__throw_length_error("basic_string::append");
            std::string::_M_append(&v48, "\\f", 2LL);
            break;
          case 0xDu:
            if ( v49 == 0x3FFFFFFFFFFFFFFFLL || v49 == 4611686018427387902LL )
              std::__throw_length_error("basic_string::append");
            std::string::_M_append(&v48, "\\r", 2LL);
            break;
          case 0x22u:
            if ( v49 == 0x3FFFFFFFFFFFFFFFLL || v49 == 4611686018427387902LL )
              std::__throw_length_error("basic_string::append");
            std::string::_M_append(&v48, "\\\"", 2LL);
            break;
          default:
            goto LABEL_66;
        }
        goto LABEL_43;
      }
LABEL_66:
      v26 = v24;
      if ( a4 )
      {
        if ( v24 > 0x1Fu )
          goto LABEL_68;
        goto LABEL_64;
      }
      if ( v24 <= 0x7Fu )
        goto LABEL_63;
      if ( v24 <= 0xDFu )
      {
        v32 = 65533;
        if ( v8 - v7 > 1 )
        {
          v33 = *++v7;
          v32 = (v24 << 6) & 0x7C0 | v33 & 0x3F;
          if ( v32 <= 0x7F )
            v32 = 65533;
        }
        goto LABEL_86;
      }
      if ( v24 <= 0xEFu )
      {
        v32 = 65533;
        if ( v8 - v7 > 2 )
        {
          v34 = v7[1];
          v35 = v7[2];
          v7 += 2;
          v32 = (unsigned __int16)(v24 << 12) | v35 & 0x3F | (v34 << 6) & 0xFC0;
          if ( v32 - 55296 <= 0x7FF )
          {
LABEL_93:
            v32 = 65533;
          }
          else if ( v32 <= 0x7FF )
          {
            v32 = 65533;
          }
        }
LABEL_86:
        Json::appendHex(&v48, v32);
        goto LABEL_43;
      }
      if ( v24 > 0xF7u )
        goto LABEL_93;
      if ( v8 - v7 <= 3 )
        goto LABEL_93;
      v36 = v7[1];
      v37 = v7[2];
      v7 += 3;
      v38 = ((_DWORD)v26 << 18) & 0x1C0000 | *v7 & 0x3F | (v37 << 6) & 0xFC0 | (v36 << 12) & 0x3F000;
      if ( v38 <= 0xFFFF )
        goto LABEL_93;
      v39 = v38 - 0x10000;
      Json::appendHex(&v48, ((v39 >> 10) & 0x3FF) + 55296);
      v26 = (v39 & 0x3FF) + 56320;
LABEL_64:
      Json::appendHex(&v48, v26);
LABEL_43:
      if ( ++v7 == v8 )
        goto LABEL_44;
    }
    if ( v24 == 92 )
    {
      if ( v49 == 0x3FFFFFFFFFFFFFFFLL || v49 == 4611686018427387902LL )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(&v48, "\\\\", 2LL);
      goto LABEL_43;
    }
    v26 = (unsigned int)(char)v24;
    if ( a4 )
    {
LABEL_68:
      v27 = 15LL;
      v43 = v49;
      v28 = v48;
      if ( v48 != v50 )
        v27 = v50[0].m128i_i64[0];
      v44 = v49 + 1;
      if ( v49 + 1 > v27 )
      {
        std::string::_M_mutate(&v48, v49, 0LL, 0LL, 1LL);
        v28 = v48;
      }
      v28[v43] = v24;
      v49 = v44;
      *((_BYTE *)v48 + v43 + 1) = 0;
      goto LABEL_43;
    }
LABEL_63:
    if ( (unsigned int)v26 > 0x1F )
    {
      v29 = v49;
      v30 = v48;
      v31 = 15LL;
      if ( v48 != v50 )
        v31 = v50[0].m128i_i64[0];
      v45 = v49 + 1;
      if ( v49 + 1 > v31 )
      {
        std::string::_M_mutate(&v48, v49, 0LL, 0LL, 1LL);
        v30 = v48;
      }
      v30[v29] = v26;
      v49 = v45;
      *((_BYTE *)v48 + v29 + 1) = 0;
      goto LABEL_43;
    }
    goto LABEL_64;
  }
LABEL_44:
  if ( v49 == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v48, "\"", 1LL);
  this->m128i_i64[0] = (__int64)this[1].m128i_i64;
  if ( v48 == v50 )
  {
    this[1] = _mm_load_si128(v50);
  }
  else
  {
    this->m128i_i64[0] = (__int64)v48;
    this[1].m128i_i64[0] = v50[0].m128i_i64[0];
  }
  this->m128i_i64[1] = v49;
  return this;
};

// Line 350: range 00000000152E6910-00000000152E693F
Json::String *__fastcall Json::valueToQuotedString[abi:cxx11](Json::String *retstr, const char *value)
{
  unsigned int v2; // eax

  v2 = strlen(value);
  Json::valueToQuotedStringN((__m128i *)retstr, value, v2, 0);
  return retstr;
};

// Line 365: range 00000000152E69A0-00000000152E69A4
void __fastcall Json::FastWriter::enableYAMLCompatibility(Json::FastWriter *const this)
{
  this->yamlCompatibilityEnabled_ = 1;
};

// Line 367: range 00000000152E69B0-00000000152E69B4
void __fastcall Json::FastWriter::dropNullPlaceholders(Json::FastWriter *const this)
{
  this->dropNullPlaceholders_ = 1;
};

// Line 369: range 00000000152E69C0-00000000152E69C4
void __fastcall Json::FastWriter::omitEndingLineFeed(Json::FastWriter *const this)
{
  this->omitEndingLineFeed_ = 1;
};

// Line 371: range 00000000152E8AB0-00000000152E8BF1
Json::String *__fastcall Json::FastWriter::write[abi:cxx11](
        Json::String *retstr,
        Json::FastWriter *const this,
        const Json::Value *root)
{
  std::string::pointer M_p; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::string::size_type v6; // r13
  std::string::pointer v7; // rbp
  Json::String *result; // rax
  std::string::size_type M_string_length; // rbp
  Json::FastWriter *v10; // rax
  std::string::size_type v11; // r13
  std::string::size_type M_allocated_capacity; // rdx
  std::string::pointer v13; // rax
  char *v14; // rax
  std::string::size_type v15[6]; // [rsp+8h] [rbp-30h] BYREF

  M_p = this->document_._M_dataplus._M_p;
  this->document_._M_string_length = 0LL;
  *M_p = 0;
  Json::FastWriter::writeValue(this, root);
  if ( !this->omitEndingLineFeed_ )
  {
    M_string_length = this->document_._M_string_length;
    v10 = (Json::FastWriter *)this->document_._M_dataplus._M_p;
    v11 = M_string_length + 1;
    if ( v10 == (Json::FastWriter *)&this->document_._anon_0 )
      M_allocated_capacity = 15LL;
    else
      M_allocated_capacity = this->document_._anon_0._M_allocated_capacity;
    if ( v11 > M_allocated_capacity )
    {
      std::string::_M_mutate(&this->document_, this->document_._M_string_length, 0LL, 0LL, 1LL);
      v10 = (Json::FastWriter *)this->document_._M_dataplus._M_p;
    }
    *((_BYTE *)&v10->_vptr_Writer + M_string_length) = 10;
    v13 = this->document_._M_dataplus._M_p;
    this->document_._M_string_length = v11;
    v13[M_string_length + 1] = 0;
  }
  p_anon_0 = &retstr->_anon_0;
  v6 = this->document_._M_string_length;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  v7 = this->document_._M_dataplus._M_p;
  if ( &v7[v6] && !v7 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v15[0] = v6;
  if ( v6 > 0xF )
  {
    v14 = (char *)std::string::_M_create(retstr, v15, 0LL);
    retstr->_M_dataplus._M_p = v14;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14;
    retstr->_anon_0._M_allocated_capacity = v15[0];
    goto LABEL_16;
  }
  if ( v6 != 1 )
  {
    if ( !v6 )
      goto LABEL_7;
LABEL_16:
    memcpy(p_anon_0, v7, v6);
    v6 = v15[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
    goto LABEL_7;
  }
  retstr->_anon_0._M_local_buf[0] = *v7;
LABEL_7:
  retstr->_M_string_length = v6;
  result = retstr;
  p_anon_0->_M_local_buf[v6] = 0;
  return result;
};

// Line 379: range 00000000152E8490-00000000152E8AA5
void __fastcall Json::FastWriter::writeValue(__int64 a1, Json::Value_0 *a2, double a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  Json::Value_0::ArrayIndex v15; // r12d
  Json::Value_0::ArrayIndex v16; // r13d
  Json::Value_0::ArrayIndex v17; // esi
  void *v18; // rax
  Json *v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  Json::String *v29; // r12
  const char *v30; // rsi
  const Json::Value_0 *v31; // rax
  __int64 v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  Json::Value::LargestInt v37; // rax
  std::string::pointer M_p; // rdi
  Json::Value::LargestUInt v39; // rax
  bool v40; // al
  __int64 v41; // rbp
  __int64 v42; // rax
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  Json::String *v46; // rbx
  Json::String *v47; // rbp
  Json *v48; // [rsp+0h] [rbp-A8h]
  char *v49; // [rsp+8h] [rbp-A0h]
  __int64 v50; // [rsp+10h] [rbp-98h]
  char *begin; // [rsp+28h] [rbp-80h] BYREF
  Json::String *key; // [rsp+30h] [rbp-78h] BYREF
  Json::String *v53; // [rsp+38h] [rbp-70h]
  Json::String v54; // [rsp+50h] [rbp-58h] BYREF

  switch ( Json::Value::type(a2) )
  {
    case nullValue:
      if ( !*(_BYTE *)(a1 + 41) )
      {
        if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 16)) <= 3 )
          std::__throw_length_error("basic_string::append");
        std::string::_M_append(a1 + 8, "null", 4LL);
      }
      return;
    case intValue:
      v37 = Json::Value::asLargestInt(a2);
      Json::valueToString[abi:cxx11](&v54, v37);
      std::string::_M_append(a1 + 8, v54._M_dataplus._M_p, v54._M_string_length);
      goto LABEL_40;
    case uintValue:
      v39 = Json::Value::asLargestUInt(a2);
      Json::valueToString[abi:cxx11](&v54, v39);
      std::string::_M_append(a1 + 8, v54._M_dataplus._M_p, v54._M_string_length);
      goto LABEL_40;
    case realValue:
      Json::Value::asDouble((Json::Value *)a2);
      Json::valueToString[abi:cxx11]((__int64)&v54, 0x11u, 0, a3);
      std::string::_M_append(a1 + 8, v54._M_dataplus._M_p, v54._M_string_length);
      goto LABEL_40;
    case stringValue:
      if ( !Json::Value::getString(a2, (const char **)&begin, (const char **)&key) )
        return;
      Json::valueToQuotedStringN((__m128i *)&v54, begin, (_DWORD)key - (_DWORD)begin, 0);
      std::string::_M_append(a1 + 8, v54._M_dataplus._M_p, v54._M_string_length);
LABEL_40:
      M_p = v54._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v54._M_dataplus._M_p != &v54._anon_0 )
        goto LABEL_41;
      return;
    case booleanValue:
      v40 = Json::Value::asBool((Json::Value *)a2);
      Json::valueToString[abi:cxx11](&v54, v40);
      std::string::_M_append(a1 + 8, v54._M_dataplus._M_p, v54._M_string_length);
      goto LABEL_40;
    case arrayValue:
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)(a1 + 8);
      v11 = a1 + 24;
      v12 = v9 + 1;
      if ( v10 == a1 + 24 )
        v13 = 15LL;
      else
        v13 = *(_QWORD *)(a1 + 24);
      if ( v12 > v13 )
      {
        std::string::_M_mutate(a1 + 8, *(_QWORD *)(a1 + 16), 0LL, 0LL, 1LL);
        v10 = *(_QWORD *)(a1 + 8);
      }
      *(_BYTE *)(v10 + v9) = 91;
      v14 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = v12;
      *(_BYTE *)(v14 + v9 + 1) = 0;
      v15 = 0;
      v16 = Json::Value::size(a2);
      if ( v16 )
      {
        while ( 1 )
        {
          v17 = v15++;
          v18 = Json::Value::operator[]((Json::Value *)a2, v17);
          Json::FastWriter::writeValue(a1, v18);
          if ( v16 == v15 )
            break;
          v19 = *(Json **)(a1 + 16);
          v20 = *(_QWORD *)(a1 + 8);
          v21 = (unsigned __int64)v19 + 1;
          if ( v11 == v20 )
            v22 = 15LL;
          else
            v22 = *(_QWORD *)(a1 + 24);
          if ( v21 > v22 )
          {
            v49 = (char *)v19 + 1;
            v48 = *(Json **)(a1 + 16);
            std::string::_M_mutate(a1 + 8, v48, 0LL, 0LL, 1LL);
            v20 = *(_QWORD *)(a1 + 8);
            v21 = (unsigned __int64)v49;
            v19 = v48;
          }
          *((_BYTE *)v19 + v20) = 44;
          v23 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)(a1 + 16) = v21;
          *((_BYTE *)v19 + v23 + 1) = 0;
        }
      }
      v4 = *(_QWORD *)(a1 + 16);
      v5 = *(_QWORD *)(a1 + 8);
      v6 = v4 + 1;
      if ( v11 == v5 )
        v7 = 15LL;
      else
        v7 = *(_QWORD *)(a1 + 24);
      if ( v6 > v7 )
      {
        std::string::_M_mutate(a1 + 8, *(_QWORD *)(a1 + 16), 0LL, 0LL, 1LL);
        v5 = *(_QWORD *)(a1 + 8);
      }
      *(_BYTE *)(v5 + v4) = 93;
      v8 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = v6;
      *(_BYTE *)(v8 + v4 + 1) = 0;
      return;
    case objectValue:
      Json::Value::getMemberNames[abi:cxx11]((__int64)&key, a2);
      v24 = *(_QWORD *)(a1 + 16);
      v25 = *(_QWORD *)(a1 + 8);
      v50 = a1 + 24;
      v26 = v24 + 1;
      if ( v25 == a1 + 24 )
        v27 = 15LL;
      else
        v27 = *(_QWORD *)(a1 + 24);
      if ( v26 > v27 )
      {
        std::string::_M_mutate(a1 + 8, v24, 0LL, 0LL, 1LL);
        v25 = *(_QWORD *)(a1 + 8);
      }
      *(_BYTE *)(v25 + v24) = 123;
      v28 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = v26;
      *(_BYTE *)(v28 + v24 + 1) = 0;
      v29 = key;
      if ( key != v53 )
      {
        while ( 1 )
        {
          Json::valueToQuotedStringN((__m128i *)&v54, v29->_M_dataplus._M_p, v29->_M_string_length, 0);
          std::string::_M_append(a1 + 8, v54._M_dataplus._M_p, v54._M_string_length);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v54._M_dataplus._M_p != &v54._anon_0 )
            operator delete(v54._M_dataplus._M_p);
          v30 = ":";
          if ( *(_BYTE *)(a1 + 40) )
            v30 = ptr;
          if ( 2 - (unsigned __int64)(*(_BYTE *)(a1 + 40) == 0) > 0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 16) )
            std::__throw_length_error("basic_string::append");
          std::string::_M_append(a1 + 8, v30);
          v31 = Json::Value::operator[](a2, v29);
          Json::FastWriter::writeValue(a1, v31);
          if ( v53 == ++v29 )
            break;
          if ( key != v29 )
          {
            v32 = *(_QWORD *)(a1 + 16);
            v33 = *(_QWORD *)(a1 + 8);
            v34 = v32 + 1;
            if ( v50 == v33 )
              v35 = 15LL;
            else
              v35 = *(_QWORD *)(a1 + 24);
            if ( v34 > v35 )
            {
              std::string::_M_mutate(a1 + 8, *(_QWORD *)(a1 + 16), 0LL, 0LL, 1LL);
              v33 = *(_QWORD *)(a1 + 8);
            }
            *(_BYTE *)(v33 + v32) = 44;
            v36 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)(a1 + 16) = v34;
            *(_BYTE *)(v36 + v32 + 1) = 0;
          }
        }
      }
      v41 = *(_QWORD *)(a1 + 16);
      v42 = *(_QWORD *)(a1 + 8);
      v43 = v41 + 1;
      if ( v50 == v42 )
        v44 = 15LL;
      else
        v44 = *(_QWORD *)(a1 + 24);
      if ( v43 > v44 )
      {
        std::string::_M_mutate(a1 + 8, *(_QWORD *)(a1 + 16), 0LL, 0LL, 1LL);
        v42 = *(_QWORD *)(a1 + 8);
      }
      *(_BYTE *)(v42 + v41) = 125;
      v45 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = v43;
      *(_BYTE *)(v45 + v41 + 1) = 0;
      v46 = v53;
      v47 = key;
      if ( v53 == key )
        goto LABEL_55;
      break;
    default:
      return;
  }
  do
  {
    while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v47->_M_dataplus._M_p != &v47->_anon_0 )
    {
      operator delete(v47->_M_dataplus._M_p);
      if ( v46 == ++v47 )
        goto LABEL_54;
    }
    ++v47;
  }
  while ( v46 != v47 );
LABEL_54:
  v47 = key;
LABEL_55:
  if ( v47 )
  {
    M_p = (std::string::pointer)v47;
LABEL_41:
    operator delete(M_p);
  }
};

// Line 438: range 00000000152E95D0-00000000152E9731
Json::String *__fastcall Json::StyledWriter::write[abi:cxx11](Json::String *__return_ptr __struct_ptr retstr, Json::StyledWriter *const this, const Json::Value *root);

// Line 449: range 00000000152E90F0-00000000152E95BF
void __fastcall Json::StyledWriter::writeValue(Json::StyledWriter *this, Json::Value_0 *a2, double a3)
{
  std::string::pointer M_p; // rdi
  Json::String *v4; // rbx
  const Json::Value *v5; // r13
  std::string::size_type M_string_length; // r14
  Json::StyledWriter *v7; // rax
  std::string::size_type M_allocated_capacity; // rdx
  Json::Value::LargestInt v9; // rax
  Json::Value::LargestUInt v10; // rax
  bool v11; // al
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rbx
  Json::String *v13; // rbx
  Json::String *v14; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v15; // [rsp+0h] [rbp-A8h]
  std::string::size_type v16; // [rsp+8h] [rbp-A0h]
  __int64 v17; // [rsp+10h] [rbp-98h]
  Json::String **p_key; // [rsp+18h] [rbp-90h]
  int v19; // [rsp+20h] [rbp-88h]
  char *begin; // [rsp+28h] [rbp-80h] BYREF
  Json::String *key; // [rsp+30h] [rbp-78h] BYREF
  Json::String *v22; // [rsp+38h] [rbp-70h]
  int v23; // [rsp+40h] [rbp-68h]
  void *v24; // [rsp+48h] [rbp-60h]
  Json::String value; // [rsp+50h] [rbp-58h] BYREF

  switch ( Json::Value::type(a2) )
  {
    case nullValue:
      strcpy(value._anon_0._M_local_buf, "null");
      value._M_dataplus._M_p = value._anon_0._M_local_buf;
      value._M_string_length = 4LL;
      Json::StyledWriter::pushValue(this, &value);
      goto LABEL_3;
    case intValue:
      v9 = Json::Value::asLargestInt(a2);
      Json::valueToString[abi:cxx11](&value, v9);
      Json::StyledWriter::pushValue(this, &value);
      goto LABEL_21;
    case uintValue:
      v10 = Json::Value::asLargestUInt(a2);
      Json::valueToString[abi:cxx11](&value, v10);
      Json::StyledWriter::pushValue(this, &value);
      goto LABEL_21;
    case realValue:
      Json::Value::asDouble((Json::Value *)a2);
      Json::valueToString[abi:cxx11]((__int64)&value, 0x11u, 0, a3);
      Json::StyledWriter::pushValue(this, &value);
      goto LABEL_21;
    case stringValue:
      if ( !Json::Value::getString(a2, (const char **)&begin, (const char **)&key) )
      {
        value._M_string_length = 0LL;
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        value._anon_0._M_local_buf[0] = 0;
        Json::StyledWriter::pushValue(this, &value);
LABEL_3:
        M_p = value._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p == &value._anon_0 )
          return;
        goto LABEL_4;
      }
      Json::valueToQuotedStringN((__m128i *)&value, begin, (_DWORD)key - (_DWORD)begin, 0);
      Json::StyledWriter::pushValue(this, &value);
LABEL_21:
      M_p = value._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
        goto LABEL_4;
      return;
    case booleanValue:
      v11 = Json::Value::asBool((Json::Value *)a2);
      Json::valueToString[abi:cxx11](&value, v11);
      Json::StyledWriter::pushValue(this, &value);
      goto LABEL_21;
    case arrayValue:
      Json::StyledWriter::writeArrayValue(this, (const Json::Value *)a2);
      return;
    case objectValue:
      p_key = &key;
      Json::Value::getMemberNames[abi:cxx11]((__int64)&key, a2);
      if ( v22 == key )
      {
        p_anon_0 = &value._anon_0;
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        strcpy(value._anon_0._M_local_buf, "{}");
        value._M_string_length = 2LL;
        Json::StyledWriter::pushValue(this, &value);
      }
      else
      {
        v15 = &value._anon_0;
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        value._M_string_length = 1LL;
        *(_WORD *)value._anon_0._M_local_buf = 123;
        Json::StyledWriter::writeWithIndent(this, &value);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
          operator delete(value._M_dataplus._M_p);
        Json::StyledWriter::indent(this);
        v4 = key;
        while ( 1 )
        {
          v5 = (const Json::Value *)Json::Value::operator[](a2, v4);
          Json::StyledWriter::writeCommentBeforeValue(this, v5);
          Json::valueToQuotedString[abi:cxx11](&value, v4->_M_dataplus._M_p);
          Json::StyledWriter::writeWithIndent(this, &value);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != v15 )
            operator delete(value._M_dataplus._M_p);
          if ( 0x3FFFFFFFFFFFFFFFLL - this->document_._M_string_length <= 2 )
            std::__throw_length_error("basic_string::append");
          std::string::_M_append(&this->document_, &aField_8[14], 3LL);
          Json::StyledWriter::writeValue(
            this,
            (int)v15,
            v16,
            (_DWORD)this + 32,
            (int)p_key,
            v19,
            (int)begin,
            (int)key,
            (int)v22,
            v23,
            v24,
            (int)value._M_dataplus._M_p,
            value._M_string_length);
          if ( ++v4 == v22 )
            break;
          M_string_length = this->document_._M_string_length;
          v16 = M_string_length + 1;
          v7 = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
          if ( v7 == (Json::StyledWriter *)&this->document_._anon_0 )
            M_allocated_capacity = 15LL;
          else
            M_allocated_capacity = this->document_._anon_0._M_allocated_capacity;
          if ( v16 > M_allocated_capacity )
          {
            std::string::_M_mutate(v17, M_string_length, 0LL, 0LL, 1LL);
            v7 = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
          }
          *((_BYTE *)&v7->_vptr_Writer + M_string_length) = 44;
          this->document_._M_string_length = M_string_length + 1;
          this->document_._M_dataplus._M_p[M_string_length + 1] = 0;
          Json::StyledWriter::writeCommentAfterValueOnSameLine(this, v5);
        }
        Json::StyledWriter::writeCommentAfterValueOnSameLine(this, v5);
        Json::StyledWriter::unindent(this);
        p_anon_0 = v15;
        value._M_string_length = 1LL;
        value._M_dataplus._M_p = (std::string::pointer)v15;
        *(_WORD *)value._anon_0._M_local_buf = 125;
        Json::StyledWriter::writeWithIndent(this, &value);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != p_anon_0 )
        operator delete(value._M_dataplus._M_p);
      v13 = v22;
      v14 = key;
      if ( v22 == key )
        goto LABEL_35;
      break;
    default:
      return;
  }
  do
  {
    while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14->_M_dataplus._M_p != &v14->_anon_0 )
    {
      operator delete(v14->_M_dataplus._M_p);
      if ( v13 == ++v14 )
        goto LABEL_34;
    }
    ++v14;
  }
  while ( v13 != v14 );
LABEL_34:
  v14 = key;
LABEL_35:
  if ( v14 )
  {
    M_p = (std::string::pointer)v14;
LABEL_4:
    operator delete(M_p);
  }
};

// Line 509: range 00000000152E8D10-00000000152E90DD
void __fastcall Json::StyledWriter::writeArrayValue(Json::StyledWriter *this, Json::Value_0 *a2, double a3)
{
  Json::Value_0::ArrayIndex v4; // eax
  Json::Value_0::ArrayIndex v5; // r12d
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r13
  std::string::pointer v9; // rax
  Json::Value *v10; // r15
  std::string::size_type v11; // r12
  Json::StyledWriter *v12; // rax
  std::string::size_type v13; // r10
  std::string::size_type v14; // rdx
  std::string::pointer v15; // rdx
  Json::Value_0::ArrayIndex v16; // esi
  std::string::size_type M_string_length; // rax
  Json::StyledWriter *M_p; // rdx
  std::string::size_type v19; // r10
  std::string::size_type M_allocated_capacity; // rcx
  __int64 v21; // [rsp+0h] [rbp-78h]
  std::string::size_type v22; // [rsp+8h] [rbp-70h]
  std::string::size_type v23; // [rsp+10h] [rbp-68h]
  Json::String value; // [rsp+20h] [rbp-58h] BYREF

  v4 = Json::Value::size(a2);
  if ( !v4 )
  {
    value._M_dataplus._M_p = value._anon_0._M_local_buf;
    strcpy(value._anon_0._M_local_buf, "[]");
    value._M_string_length = 2LL;
    Json::StyledWriter::pushValue(this, &value);
LABEL_3:
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
      operator delete(value._M_dataplus._M_p);
    return;
  }
  v5 = v4;
  if ( Json::StyledWriter::isMultilineArray(this, (const Json::Value *)a2) )
  {
    value._M_dataplus._M_p = value._anon_0._M_local_buf;
    value._M_string_length = 1LL;
    *(_WORD *)value._anon_0._M_local_buf = 91;
    Json::StyledWriter::writeWithIndent(this, &value);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
      operator delete(value._M_dataplus._M_p);
    v8 = 0LL;
    Json::StyledWriter::indent(this);
    v21 = v5 - 1;
    if ( this->childValues_._M_impl._M_start == this->childValues_._M_impl._M_finish )
    {
      while ( 1 )
      {
        v16 = v8;
        LODWORD(v8) = v8 + 1;
        v10 = (Json::Value *)Json::Value::operator[]((Json::Value *)a2, v16);
        Json::StyledWriter::writeCommentBeforeValue(this, v10);
        Json::StyledWriter::writeIndent(this);
        Json::StyledWriter::writeValue(this, (Json::Value_0 *)v10, a3);
        if ( v5 == (_DWORD)v8 )
          break;
        M_string_length = this->document_._M_string_length;
        M_p = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
        v19 = M_string_length + 1;
        if ( M_p == (Json::StyledWriter *)&this->document_._anon_0 )
          M_allocated_capacity = 15LL;
        else
          M_allocated_capacity = this->document_._anon_0._M_allocated_capacity;
        if ( v19 > M_allocated_capacity )
        {
          v23 = M_string_length + 1;
          v22 = this->document_._M_string_length;
          std::string::_M_mutate(&this->document_, v22, 0LL, 0LL, 1LL);
          M_p = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
          v19 = v23;
          M_string_length = v22;
        }
        *((_BYTE *)&M_p->_vptr_Writer + M_string_length) = 44;
        v15 = this->document_._M_dataplus._M_p;
        this->document_._M_string_length = v19;
        v15[M_string_length + 1] = 0;
        Json::StyledWriter::writeCommentAfterValueOnSameLine(this, v10);
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = (Json::Value *)Json::Value::operator[]((Json::Value *)a2, v8);
        Json::StyledWriter::writeCommentBeforeValue(this, v10);
        Json::StyledWriter::writeWithIndent(this, &this->childValues_._M_impl._M_start[v8]);
        if ( v8 == v21 )
          break;
        v11 = this->document_._M_string_length;
        v12 = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
        v13 = v11 + 1;
        if ( v12 == (Json::StyledWriter *)&this->document_._anon_0 )
          v14 = 15LL;
        else
          v14 = this->document_._anon_0._M_allocated_capacity;
        if ( v13 > v14 )
        {
          std::string::_M_mutate(&this->document_, this->document_._M_string_length, 0LL, 0LL, 1LL);
          v12 = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
          v13 = v11 + 1;
        }
        *((_BYTE *)&v12->_vptr_Writer + v11) = 44;
        v9 = this->document_._M_dataplus._M_p;
        this->document_._M_string_length = v13;
        ++v8;
        v9[v11 + 1] = 0;
        Json::StyledWriter::writeCommentAfterValueOnSameLine(this, v10);
      }
    }
    Json::StyledWriter::writeCommentAfterValueOnSameLine(this, v10);
    Json::StyledWriter::unindent(this);
    value._M_dataplus._M_p = value._anon_0._M_local_buf;
    value._M_string_length = 1LL;
    *(_WORD *)value._anon_0._M_local_buf = 93;
    Json::StyledWriter::writeWithIndent(this, &value);
    goto LABEL_3;
  }
  if ( v5 != this->childValues_._M_impl._M_finish - this->childValues_._M_impl._M_start )
    __assert_fail(
      "childValues_.size() == size",
      "src/lib_json/json_writer.cpp",
      0x21Cu,
      "void Json::StyledWriter::writeArrayValue(const Json::Value&)");
  if ( this->document_._M_string_length == 0x3FFFFFFFFFFFFFFFLL
    || this->document_._M_string_length == 4611686018427387902LL )
  {
    goto LABEL_36;
  }
  v6 = v5 - 1;
  v7 = 0LL;
  std::string::_M_append(&this->document_, "[ ", 2LL);
  while ( 1 )
  {
    std::string::_M_append(
      &this->document_,
      this->childValues_._M_impl._M_start[v7]._M_dataplus._M_p,
      this->childValues_._M_impl._M_start[v7]._M_string_length);
    if ( v7 == v6 )
      break;
    if ( (_DWORD)v7 != -1 )
    {
      if ( 0x3FFFFFFFFFFFFFFFLL - this->document_._M_string_length <= 1 )
        goto LABEL_36;
      std::string::_M_append(&this->document_, ", ", 2LL);
    }
    ++v7;
  }
  if ( this->document_._M_string_length == 0x3FFFFFFFFFFFFFFFLL
    || this->document_._M_string_length == 4611686018427387902LL )
  {
LABEL_36:
    std::__throw_length_error("basic_string::append");
  }
  std::string::_M_append(&this->document_, " ]", 2LL);
};

// Line 552: range 00000000152E9740-00000000152E9905
bool __fastcall Json::StyledWriter::isMultilineArray(Json::StyledWriter *const this, const Json::Value *value)
{
  double v2; // xmm0_8
  Json::Value_0::ArrayIndex v3; // eax
  std::string *M_start; // r13
  unsigned int v5; // ebp
  std::_Vector_base<std::string>::pointer M_finish; // r15
  std::_Vector_base<std::string>::pointer v7; // r14
  Json::Value_0::ArrayIndex v8; // r15d
  const Json::Value_0 *v9; // r14
  bool isObject; // r13
  unsigned int v12; // r15d
  __int64 v13; // r14
  const Json::Value *v14; // rax
  bool hasCommentForValue; // al
  Json::Value_0 *v16; // rax
  __int64 v17; // rax
  bool isMultiLine; // [rsp+7h] [rbp-41h]
  unsigned int rightMargin; // [rsp+8h] [rbp-40h]
  unsigned int v20; // [rsp+Ch] [rbp-3Ch]

  v3 = Json::Value::size((const Json::Value_0 *const)value);
  M_start = this->childValues_._M_impl._M_start;
  v5 = v3;
  M_finish = this->childValues_._M_impl._M_finish;
  v20 = 3 * v3;
  rightMargin = this->rightMargin_;
  isMultiLine = 3 * v3 >= rightMargin;
  if ( M_start != M_finish )
  {
    v7 = this->childValues_._M_impl._M_start;
    do
    {
      while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v7->_M_dataplus._M_p != &v7->_anon_0 )
      {
        operator delete(v7->_M_dataplus._M_p);
        if ( ++v7 == M_finish )
          goto LABEL_5;
      }
      ++v7;
    }
    while ( M_finish != v7 );
LABEL_5:
    this->childValues_._M_impl._M_finish = M_start;
  }
  if ( v5 && !isMultiLine )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = (const Json::Value_0 *)Json::Value::operator[]((Json::Value *)value, v8);
      if ( Json::Value::isArray(v9) || (isObject = Json::Value::isObject(v9)) )
        isObject = !Json::Value::empty(v9);
      if ( v5 <= ++v8 )
        break;
      if ( isObject )
        return 1;
    }
    if ( !isObject )
    {
      v12 = 2 * v5 + 2;
      v13 = 0LL;
      std::vector<std::string>::reserve(&this->childValues_, v5);
      this->addChildValues_ = 1;
      do
      {
        v14 = (const Json::Value *)Json::Value::operator[]((Json::Value *)value, v13);
        hasCommentForValue = Json::StyledWriter::hasCommentForValue(v14);
        if ( hasCommentForValue )
          isObject = hasCommentForValue;
        v16 = (Json::Value_0 *)Json::Value::operator[]((Json::Value *)value, v13);
        Json::StyledWriter::writeValue(this, v16, v2);
        v17 = v13++;
        v12 += LODWORD(this->childValues_._M_impl._M_start[v17]._M_string_length);
      }
      while ( v5 > (unsigned int)v13 );
      this->addChildValues_ = 0;
      if ( !isObject )
        return this->rightMargin_ <= v12;
    }
    return 1;
  }
  if ( v20 >= rightMargin )
    return 1;
  v12 = 2 * v5 + 2;
  std::vector<std::string>::reserve(&this->childValues_, v5);
  this->addChildValues_ = 0;
  return this->rightMargin_ <= v12;
};

// Line 579: range 00000000152E8C00-00000000152E8CFF
void __fastcall Json::StyledWriter::pushValue(Json::StyledWriter *const this, const Json::String *value)
{
  const std::string *v2; // rcx
  std::_Vector_base<std::string>::pointer M_finish; // rbp
  _BYTE *M_local_buf; // rdi
  std::string::size_type M_string_length; // r12
  std::string::pointer M_p; // r13
  __int64 v8; // rax
  std::string::size_type v9[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( this->addChildValues_ )
  {
    M_finish = this->childValues_._M_impl._M_finish;
    if ( M_finish != this->childValues_._M_impl._M_end_of_storage )
    {
      M_local_buf = M_finish->_anon_0._M_local_buf;
      M_string_length = value->_M_string_length;
      M_finish->_M_dataplus._M_p = M_finish->_anon_0._M_local_buf;
      M_p = value->_M_dataplus._M_p;
      if ( &value->_M_dataplus._M_p[M_string_length] )
      {
        if ( !M_p )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
      v9[0] = M_string_length;
      if ( M_string_length > 0xF )
      {
        v8 = std::string::_M_create(M_finish, v9, 0LL);
        M_finish->_M_dataplus._M_p = (std::string::pointer)v8;
        M_local_buf = (_BYTE *)v8;
        M_finish->_anon_0._M_allocated_capacity = v9[0];
      }
      else
      {
        if ( M_string_length == 1 )
        {
          M_finish->_anon_0._M_local_buf[0] = *M_p;
LABEL_8:
          M_finish->_M_string_length = M_string_length;
          M_local_buf[M_string_length] = 0;
          ++this->childValues_._M_impl._M_finish;
          return;
        }
        if ( !M_string_length )
          goto LABEL_8;
      }
      memcpy(M_local_buf, M_p, M_string_length);
      M_string_length = v9[0];
      M_local_buf = M_finish->_M_dataplus._M_p;
      goto LABEL_8;
    }
    std::vector<std::string>::_M_realloc_insert<std::string const&>(
      &this->childValues_,
      (std::vector<std::string>::iterator)M_finish,
      value,
      v2);
  }
  else
  {
    std::string::_M_append(&this->document_, value->_M_dataplus._M_p, value->_M_string_length);
  }
};

// Line 586: range 00000000152E6A40-00000000152E6AED
void __fastcall Json::StyledWriter::writeIndent(Json::StyledWriter *const this)
{
  std::string::size_type M_string_length; // rbp
  Json::StyledWriter *M_p; // rax
  char v4; // dl
  Json::String *p_document; // rdi
  std::string::size_type v6; // r12
  std::string::size_type M_allocated_capacity; // rdx
  std::string::pointer v8; // rax

  M_string_length = this->document_._M_string_length;
  if ( !M_string_length )
    goto LABEL_4;
  M_p = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
  v4 = *((_BYTE *)M_p + M_string_length - 1);
  if ( v4 != 32 )
  {
    if ( v4 != 10 )
    {
      v6 = M_string_length + 1;
      if ( M_p == (Json::StyledWriter *)&this->document_._anon_0 )
        M_allocated_capacity = 15LL;
      else
        M_allocated_capacity = this->document_._anon_0._M_allocated_capacity;
      p_document = &this->document_;
      if ( v6 > M_allocated_capacity )
      {
        std::string::_M_mutate(p_document, M_string_length, 0LL, 0LL, 1LL);
        M_p = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
        p_document = &this->document_;
      }
      *((_BYTE *)&M_p->_vptr_Writer + M_string_length) = 10;
      v8 = this->document_._M_dataplus._M_p;
      this->document_._M_string_length = v6;
      v8[M_string_length + 1] = 0;
      goto LABEL_5;
    }
LABEL_4:
    p_document = &this->document_;
LABEL_5:
    std::string::_M_append(p_document, this->indentString_._M_dataplus._M_p, this->indentString_._M_string_length);
  }
};

// Line 597: range 00000000152E6AF0-00000000152E6B13
void __fastcall Json::StyledWriter::writeWithIndent(Json::StyledWriter *const this, const Json::String *value)
{
  Json::StyledWriter::writeIndent(this);
  std::string::_M_append(&this->document_, value->_M_dataplus._M_p, value->_M_string_length);
};

// Line 602: range 00000000152E6B20-00000000152E6B70
void __fastcall Json::StyledWriter::indent(Json::StyledWriter *this)
{
  __int64 indentSize; // rsi
  void *v2[2]; // [rsp+0h] [rbp-38h] BYREF
  char v3[40]; // [rsp+10h] [rbp-28h] BYREF

  indentSize = this->indentSize_;
  v2[0] = v3;
  std::string::_M_construct(v2, indentSize, 32LL);
  std::string::_M_append(&this->indentString_, (const char *)v2[0], v2[1]);
  if ( v2[0] != v3 )
    operator delete(v2[0]);
};

// Line 605: range 00000000152E6B80-00000000152E6BB5
void __fastcall Json::StyledWriter::unindent(Json::StyledWriter *const this)
{
  std::string::size_type M_string_length; // rsi
  std::string::size_type indentSize; // rax

  M_string_length = this->indentString_._M_string_length;
  indentSize = this->indentSize_;
  if ( indentSize > M_string_length )
    __assert_fail(
      "indentString_.size() >= indentSize_",
      "src/lib_json/json_writer.cpp",
      0x25Du,
      "void Json::StyledWriter::unindent()");
  std::string::resize(&this->indentString_, M_string_length - indentSize, 0LL);
};

// Line 609: range 00000000152E6BC0-00000000152E6DCD
void __fastcall Json::StyledWriter::writeCommentBeforeValue(Json::StyledWriter *this, const Json::Value_0 *a2)
{
  std::string::size_type M_string_length; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r15
  Json::StyledWriter *M_p; // rax
  std::string::size_type v5; // r13
  std::string::size_type M_allocated_capacity; // rdx
  std::string::pointer v7; // rax
  std::string::pointer v8; // rbp
  std::string::size_type v9; // r12
  std::string::pointer v10; // rax
  char v11; // r14
  std::string::size_type v12; // r13
  std::string::size_type v13; // rdx
  std::string::pointer v14; // rax
  std::string::size_type v15; // rbp
  std::string::pointer v16; // rax
  std::string::size_type v17; // r12
  std::string::size_type v18; // rdx
  std::string::pointer v19; // rax
  Json::String *p_document; // [rsp+8h] [rbp-60h]
  Json::String v21; // [rsp+10h] [rbp-58h] BYREF

  if ( !Json::Value::hasComment(a2, commentBefore) )
    return;
  M_string_length = this->document_._M_string_length;
  p_anon_0 = &this->document_._anon_0;
  p_document = &this->document_;
  M_p = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
  v5 = M_string_length + 1;
  if ( M_p == (Json::StyledWriter *)&this->document_._anon_0 )
    M_allocated_capacity = 15LL;
  else
    M_allocated_capacity = this->document_._anon_0._M_allocated_capacity;
  if ( v5 > M_allocated_capacity )
  {
    std::string::_M_mutate(&this->document_, M_string_length, 0LL, 0LL, 1LL);
    M_p = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
  }
  *((_BYTE *)&M_p->_vptr_Writer + M_string_length) = 10;
  v7 = this->document_._M_dataplus._M_p;
  this->document_._M_string_length = v5;
  v7[M_string_length + 1] = 0;
  Json::StyledWriter::writeIndent(this);
  Json::Value::getComment[abi:cxx11](&v21, a2, commentBefore);
  v8 = v21._M_dataplus._M_p;
  if ( v21._M_string_length )
  {
    while ( 1 )
    {
      v9 = this->document_._M_string_length;
      v10 = this->document_._M_dataplus._M_p;
      v11 = *v8;
      v12 = v9 + 1;
      if ( p_anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10 )
        v13 = 15LL;
      else
        v13 = this->document_._anon_0._M_allocated_capacity;
      if ( v12 > v13 )
      {
        std::string::_M_mutate(p_document, this->document_._M_string_length, 0LL, 0LL, 1LL);
        v10 = this->document_._M_dataplus._M_p;
      }
      v10[v9] = v11;
      v14 = this->document_._M_dataplus._M_p;
      ++v8;
      this->document_._M_string_length = v12;
      v14[v9 + 1] = 0;
      if ( *(v8 - 1) != 10 )
        goto LABEL_13;
      if ( v8 == &v21._M_dataplus._M_p[v21._M_string_length] )
        break;
      if ( *v8 == 47 )
      {
        Json::StyledWriter::writeIndent(this);
LABEL_13:
        if ( v8 == &v21._M_dataplus._M_p[v21._M_string_length] )
          break;
      }
    }
  }
  v15 = this->document_._M_string_length;
  v16 = this->document_._M_dataplus._M_p;
  v17 = v15 + 1;
  if ( p_anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16 )
    v18 = 15LL;
  else
    v18 = this->document_._anon_0._M_allocated_capacity;
  if ( v17 > v18 )
  {
    std::string::_M_mutate(p_document, this->document_._M_string_length, 0LL, 0LL, 1LL);
    v16 = this->document_._M_dataplus._M_p;
  }
  v16[v15] = 10;
  v19 = this->document_._M_dataplus._M_p;
  this->document_._M_string_length = v17;
  v19[v15 + 1] = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
    operator delete(v21._M_dataplus._M_p);
};

// Line 628: range 00000000152E6DE0-00000000152E6FFD
char __fastcall Json::StyledWriter::writeCommentAfterValueOnSameLine(Json::StyledWriter *this, const Json::Value_0 *a2)
{
  __int64 v3; // rax
  const char *M_p; // rsi
  std::string::pointer v5; // rax
  std::string::size_type M_string_length; // r12
  Json::StyledWriter *v7; // rax
  std::string::size_type v8; // r15
  std::string::size_type M_allocated_capacity; // rdx
  std::string::pointer v10; // rax
  std::string::size_type v11; // rbp
  Json::StyledWriter *v12; // rax
  std::string::size_type v13; // r12
  std::string::size_type v14; // rdx
  Json::String v16; // [rsp+0h] [rbp-78h] BYREF
  Json::String v17; // [rsp+20h] [rbp-58h] BYREF

  if ( Json::Value::hasComment(a2, commentAfterOnSameLine) )
  {
    Json::Value::getComment[abi:cxx11](&v16, a2, commentAfterOnSameLine);
    v3 = std::string::_M_replace(&v16, 0LL, 0LL, " ", 1LL);
    v17._M_dataplus._M_p = v17._anon_0._M_local_buf;
    if ( *(_QWORD *)v3 == v3 + 16 )
    {
      v17._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v3 + 16));
    }
    else
    {
      v17._M_dataplus._M_p = *(std::string::pointer *)v3;
      v17._anon_0._M_allocated_capacity = *(_QWORD *)(v3 + 16);
    }
    v17._M_string_length = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = v3 + 16;
    *(_BYTE *)(v3 + 16) = 0;
    M_p = v17._M_dataplus._M_p;
    *(_QWORD *)(v3 + 8) = 0LL;
    std::string::_M_append(&this->document_, M_p, v17._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17._M_dataplus._M_p != &v17._anon_0 )
      operator delete(v17._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16._M_dataplus._M_p != &v16._anon_0 )
      operator delete(v16._M_dataplus._M_p);
  }
  LOBYTE(v5) = Json::Value::hasComment(a2, commentAfter);
  if ( (_BYTE)v5 )
  {
    M_string_length = this->document_._M_string_length;
    v7 = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
    v8 = M_string_length + 1;
    if ( v7 == (Json::StyledWriter *)&this->document_._anon_0 )
      M_allocated_capacity = 15LL;
    else
      M_allocated_capacity = this->document_._anon_0._M_allocated_capacity;
    if ( v8 > M_allocated_capacity )
    {
      std::string::_M_mutate(&this->document_, this->document_._M_string_length, 0LL, 0LL, 1LL);
      v7 = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
    }
    *((_BYTE *)&v7->_vptr_Writer + M_string_length) = 10;
    v10 = this->document_._M_dataplus._M_p;
    this->document_._M_string_length = v8;
    v10[M_string_length + 1] = 0;
    Json::Value::getComment[abi:cxx11](&v17, a2, commentAfter);
    std::string::_M_append(&this->document_, v17._M_dataplus._M_p, v17._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17._M_dataplus._M_p != &v17._anon_0 )
      operator delete(v17._M_dataplus._M_p);
    v11 = this->document_._M_string_length;
    v12 = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
    v13 = v11 + 1;
    if ( &this->document_._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12 )
      v14 = 15LL;
    else
      v14 = this->document_._anon_0._M_allocated_capacity;
    if ( v13 > v14 )
    {
      std::string::_M_mutate(&this->document_, this->document_._M_string_length, 0LL, 0LL, 1LL);
      v12 = (Json::StyledWriter *)this->document_._M_dataplus._M_p;
    }
    *((_BYTE *)&v12->_vptr_Writer + v11) = 10;
    v5 = this->document_._M_dataplus._M_p;
    this->document_._M_string_length = v13;
    v5[v11 + 1] = 0;
  }
  return (char)v5;
};

// Line 639: range 00000000152E7010-00000000152E704A
bool __fastcall Json::StyledWriter::hasCommentForValue(const Json::Value *value)
{
  return Json::Value::hasComment((const Json::Value_0 *const)value, commentBefore)
      || Json::Value::hasComment((const Json::Value_0 *const)value, commentAfterOnSameLine)
      || Json::Value::hasComment((const Json::Value_0 *const)value, commentAfter);
};

// Line 652: range 00000000152EB4C0-00000000152EB540
void __fastcall Json::StyledStreamWriter::write(Json::StyledStreamWriter *const this, Json::OStream *out, const Json::Value *root);

// Line 667: range 00000000152EB080-00000000152EB4AF
void __fastcall Json::StyledStreamWriter::writeValue(Json::StyledStreamWriter *this, Json::Value_0 *a2, double a3)
{
  std::string::pointer M_p; // rdi
  Json::String *v4; // rbx
  const Json::Value *v5; // r13
  Json::Value::LargestInt v6; // rax
  Json::Value::LargestUInt v7; // rax
  bool v8; // al
  Json::String *v9; // rbx
  Json::String *v10; // rbp
  int v11; // [rsp+0h] [rbp-98h]
  Json::String **p_key; // [rsp+8h] [rbp-90h]
  int v13; // [rsp+10h] [rbp-88h]
  char *begin; // [rsp+18h] [rbp-80h] BYREF
  Json::String *key; // [rsp+20h] [rbp-78h] BYREF
  Json::String *v16; // [rsp+28h] [rbp-70h]
  int v17; // [rsp+30h] [rbp-68h]
  void *v18; // [rsp+38h] [rbp-60h]
  Json::String value; // [rsp+40h] [rbp-58h] BYREF

  switch ( Json::Value::type(a2) )
  {
    case nullValue:
      strcpy(value._anon_0._M_local_buf, "null");
      value._M_dataplus._M_p = value._anon_0._M_local_buf;
      value._M_string_length = 4LL;
      Json::StyledStreamWriter::pushValue(this, &value);
      goto LABEL_3;
    case intValue:
      v6 = Json::Value::asLargestInt(a2);
      Json::valueToString[abi:cxx11](&value, v6);
      Json::StyledStreamWriter::pushValue(this, &value);
      goto LABEL_16;
    case uintValue:
      v7 = Json::Value::asLargestUInt(a2);
      Json::valueToString[abi:cxx11](&value, v7);
      Json::StyledStreamWriter::pushValue(this, &value);
      goto LABEL_16;
    case realValue:
      Json::Value::asDouble((Json::Value *)a2);
      Json::valueToString[abi:cxx11]((__int64)&value, 0x11u, 0, a3);
      Json::StyledStreamWriter::pushValue(this, &value);
      goto LABEL_16;
    case stringValue:
      if ( !Json::Value::getString(a2, (const char **)&begin, (const char **)&key) )
      {
        value._M_string_length = 0LL;
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        value._anon_0._M_local_buf[0] = 0;
        Json::StyledStreamWriter::pushValue(this, &value);
LABEL_3:
        M_p = value._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p == &value._anon_0 )
          return;
        goto LABEL_4;
      }
      Json::valueToQuotedStringN((__m128i *)&value, begin, (_DWORD)key - (_DWORD)begin, 0);
      Json::StyledStreamWriter::pushValue(this, &value);
LABEL_16:
      M_p = value._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
        goto LABEL_4;
      return;
    case booleanValue:
      v8 = Json::Value::asBool((Json::Value *)a2);
      Json::valueToString[abi:cxx11](&value, v8);
      Json::StyledStreamWriter::pushValue(this, &value);
      goto LABEL_16;
    case arrayValue:
      Json::StyledStreamWriter::writeArrayValue(this, (const Json::Value *)a2);
      return;
    case objectValue:
      p_key = &key;
      Json::Value::getMemberNames[abi:cxx11]((__int64)&key, a2);
      if ( v16 == key )
      {
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        strcpy(value._anon_0._M_local_buf, "{}");
        value._M_string_length = 2LL;
        Json::StyledStreamWriter::pushValue(this, &value);
      }
      else
      {
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        value._M_string_length = 1LL;
        *(_WORD *)value._anon_0._M_local_buf = 123;
        Json::StyledStreamWriter::writeWithIndent(this, &value);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
          operator delete(value._M_dataplus._M_p);
        Json::StyledStreamWriter::indent(this);
        v4 = key;
        while ( 1 )
        {
          v5 = (const Json::Value *)Json::Value::operator[](a2, v4);
          Json::StyledStreamWriter::writeCommentBeforeValue(this, v5);
          Json::valueToQuotedString[abi:cxx11](&value, v4->_M_dataplus._M_p);
          Json::StyledStreamWriter::writeWithIndent(this, &value);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
            operator delete(value._M_dataplus._M_p);
          std::__ostream_insert<char,std::char_traits<char>>(this->document_, &aField_8[14], 3LL);
          Json::StyledStreamWriter::writeValue(
            this,
            v11,
            (int)p_key,
            v13,
            (int)begin,
            (int)key,
            (int)v16,
            v17,
            v18,
            (int)value._M_dataplus._M_p,
            value._M_string_length);
          if ( ++v4 == v16 )
            break;
          std::__ostream_insert<char,std::char_traits<char>>(this->document_, ",", 1LL);
          Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(this, v5);
        }
        Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(this, v5);
        Json::StyledStreamWriter::unindent(this);
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        value._M_string_length = 1LL;
        *(_WORD *)value._anon_0._M_local_buf = 125;
        Json::StyledStreamWriter::writeWithIndent(this, &value);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
        operator delete(value._M_dataplus._M_p);
      v9 = v16;
      v10 = key;
      if ( v16 == key )
        goto LABEL_30;
      break;
    default:
      return;
  }
  do
  {
    while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10->_M_dataplus._M_p != &v10->_anon_0 )
    {
      operator delete(v10->_M_dataplus._M_p);
      if ( ++v10 == v9 )
        goto LABEL_29;
    }
    ++v10;
  }
  while ( v9 != v10 );
LABEL_29:
  v10 = key;
LABEL_30:
  if ( v10 )
  {
    M_p = (std::string::pointer)v10;
LABEL_4:
    operator delete(M_p);
  }
};

// Line 727: range 00000000152EAD60-00000000152EB072
void __fastcall Json::StyledStreamWriter::writeArrayValue(Json::StyledStreamWriter *this, Json::Value_0 *a2, double a3)
{
  Json::Value_0::ArrayIndex v4; // eax
  std::string::pointer M_p; // rdi
  Json::Value_0::ArrayIndex v6; // r12d
  __int64 v7; // r12
  __int64 v8; // rbx
  Json::OStream *document; // rdi
  __int64 i; // r13
  Json::Value *v11; // r14
  Json::Value_0::ArrayIndex v12; // r13d
  Json::String value; // [rsp+20h] [rbp-58h] BYREF

  v4 = Json::Value::size(a2);
  if ( !v4 )
  {
    value._M_dataplus._M_p = value._anon_0._M_local_buf;
    strcpy(value._anon_0._M_local_buf, "[]");
    value._M_string_length = 2LL;
    Json::StyledStreamWriter::pushValue(this, &value);
    M_p = value._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p == &value._anon_0 )
      return;
    goto LABEL_3;
  }
  v6 = v4;
  if ( Json::StyledStreamWriter::isMultilineArray(this, (const Json::Value *)a2) )
  {
    value._M_dataplus._M_p = value._anon_0._M_local_buf;
    value._M_string_length = 1LL;
    *(_WORD *)value._anon_0._M_local_buf = 91;
    Json::StyledStreamWriter::writeWithIndent(this, &value);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
      operator delete(value._M_dataplus._M_p);
    Json::StyledStreamWriter::indent(this);
    if ( this->childValues_._M_impl._M_start == this->childValues_._M_impl._M_finish )
    {
      v12 = 0;
      while ( 1 )
      {
        v11 = (Json::Value *)Json::Value::operator[]((Json::Value *)a2, v12);
        Json::StyledStreamWriter::writeCommentBeforeValue(this, v11);
        if ( (*((_BYTE *)this + 104) & 2) != 0 )
        {
          ++v12;
          Json::StyledStreamWriter::writeValue(this, (Json::Value_0 *)v11, a3);
          *((_BYTE *)this + 104) &= ~2u;
          if ( v6 == v12 )
            goto LABEL_19;
        }
        else
        {
          ++v12;
          Json::StyledStreamWriter::writeIndent(this);
          *((_BYTE *)this + 104) |= 2u;
          Json::StyledStreamWriter::writeValue(this, (Json::Value_0 *)v11, a3);
          *((_BYTE *)this + 104) &= ~2u;
          if ( v12 == v6 )
            goto LABEL_19;
        }
        std::__ostream_insert<char,std::char_traits<char>>(this->document_, ",", 1LL);
        Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(this, v11);
      }
    }
    for ( i = 0LL; ; ++i )
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value *)a2, i);
      Json::StyledStreamWriter::writeCommentBeforeValue(this, v11);
      Json::StyledStreamWriter::writeWithIndent(this, &this->childValues_._M_impl._M_start[i]);
      if ( v6 - 1 == i )
        break;
      std::__ostream_insert<char,std::char_traits<char>>(this->document_, ",", 1LL);
      Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(this, v11);
    }
LABEL_19:
    Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(this, v11);
    Json::StyledStreamWriter::unindent(this);
    value._M_string_length = 1LL;
    value._M_dataplus._M_p = value._anon_0._M_local_buf;
    *(_WORD *)value._anon_0._M_local_buf = 93;
    Json::StyledStreamWriter::writeWithIndent(this, &value);
    M_p = value._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
LABEL_3:
      operator delete(M_p);
  }
  else
  {
    if ( v6 != this->childValues_._M_impl._M_finish - this->childValues_._M_impl._M_start )
      __assert_fail(
        "childValues_.size() == size",
        "src/lib_json/json_writer.cpp",
        0x2F9u,
        "void Json::StyledStreamWriter::writeArrayValue(const Json::Value&)");
    v7 = v6 - 1;
    v8 = 0LL;
    std::__ostream_insert<char,std::char_traits<char>>(this->document_, "[ ", 2LL);
    document = this->document_;
    while ( 1 )
    {
      std::__ostream_insert<char,std::char_traits<char>>(
        document,
        this->childValues_._M_impl._M_start[v8]._M_dataplus._M_p,
        this->childValues_._M_impl._M_start[v8]._M_string_length);
      document = this->document_;
      if ( v8 == v7 )
        break;
      if ( (_DWORD)v8 != -1 )
      {
        std::__ostream_insert<char,std::char_traits<char>>(document, ", ", 2LL);
        document = this->document_;
      }
      ++v8;
    }
    std::__ostream_insert<char,std::char_traits<char>>(document, " ]", 2LL);
  }
};

// Line 773: range 00000000152EB550-00000000152EB70B
bool __fastcall Json::StyledStreamWriter::isMultilineArray(
        Json::StyledStreamWriter *const this,
        const Json::Value *value)
{
  double v2; // xmm0_8
  Json::Value_0::ArrayIndex v3; // eax
  std::string *M_start; // r13
  unsigned int v5; // ebp
  std::string *M_finish; // r15
  std::_Vector_base<std::string>::pointer v7; // r14
  Json::Value_0::ArrayIndex v8; // r15d
  const Json::Value_0 *v9; // r14
  bool isObject; // r13
  unsigned int v12; // r15d
  __int64 v13; // r14
  const Json::Value *v14; // rax
  bool hasCommentForValue; // al
  Json::Value_0 *v16; // rax
  __int64 v17; // rax
  bool isMultiLine; // [rsp+7h] [rbp-41h]
  unsigned int rightMargin; // [rsp+8h] [rbp-40h]
  unsigned int v20; // [rsp+Ch] [rbp-3Ch]

  v3 = Json::Value::size((const Json::Value_0 *const)value);
  M_start = this->childValues_._M_impl._M_start;
  v5 = v3;
  M_finish = this->childValues_._M_impl._M_finish;
  v20 = 3 * v3;
  rightMargin = this->rightMargin_;
  isMultiLine = 3 * v3 >= rightMargin;
  if ( this->childValues_._M_impl._M_start != M_finish )
  {
    v7 = this->childValues_._M_impl._M_start;
    do
    {
      while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v7->_M_dataplus._M_p != &v7->_anon_0 )
      {
        operator delete(v7->_M_dataplus._M_p);
        if ( ++v7 == M_finish )
          goto LABEL_5;
      }
      ++v7;
    }
    while ( M_finish != v7 );
LABEL_5:
    this->childValues_._M_impl._M_finish = M_start;
  }
  if ( v5 && !isMultiLine )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = (const Json::Value_0 *)Json::Value::operator[]((Json::Value *)value, v8);
      if ( Json::Value::isArray(v9) || (isObject = Json::Value::isObject(v9)) )
        isObject = !Json::Value::empty(v9);
      if ( v5 <= ++v8 )
        break;
      if ( isObject )
        return 1;
    }
    if ( !isObject )
    {
      v12 = 2 * v5 + 2;
      v13 = 0LL;
      std::vector<std::string>::reserve(&this->childValues_, v5);
      *((_BYTE *)this + 104) |= 1u;
      do
      {
        v14 = (const Json::Value *)Json::Value::operator[]((Json::Value *)value, v13);
        hasCommentForValue = Json::StyledStreamWriter::hasCommentForValue(v14);
        if ( hasCommentForValue )
          isObject = hasCommentForValue;
        v16 = (Json::Value_0 *)Json::Value::operator[]((Json::Value *)value, v13);
        Json::StyledStreamWriter::writeValue(this, v16, v2);
        v17 = v13++;
        v12 += LODWORD(this->childValues_._M_impl._M_start[v17]._M_string_length);
      }
      while ( v5 > (unsigned int)v13 );
      *((_BYTE *)this + 104) &= ~1u;
      if ( !isObject )
        return this->rightMargin_ <= v12;
    }
    return 1;
  }
  if ( v20 >= rightMargin )
    return 1;
  v12 = 2 * v5 + 2;
  std::vector<std::string>::reserve(&this->childValues_, v5);
  *((_BYTE *)this + 104) &= ~1u;
  return this->rightMargin_ <= v12;
};

// Line 800: range 00000000152EAC50-00000000152EAD50
void __fastcall Json::StyledStreamWriter::pushValue(Json::StyledStreamWriter *const this, const Json::String *value)
{
  const std::string *v2; // rcx
  std::_Vector_base<std::string>::pointer M_finish; // r12
  _BYTE *M_local_buf; // rdi
  std::string::size_type M_string_length; // r13
  std::string::pointer M_p; // r14
  __int64 v8; // rax
  std::string::size_type v9[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( (*((_BYTE *)this + 104) & 1) != 0 )
  {
    M_finish = this->childValues_._M_impl._M_finish;
    if ( M_finish != this->childValues_._M_impl._M_end_of_storage )
    {
      M_local_buf = M_finish->_anon_0._M_local_buf;
      M_string_length = value->_M_string_length;
      M_finish->_M_dataplus._M_p = M_finish->_anon_0._M_local_buf;
      M_p = value->_M_dataplus._M_p;
      if ( &value->_M_dataplus._M_p[M_string_length] )
      {
        if ( !M_p )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
      v9[0] = M_string_length;
      if ( M_string_length > 0xF )
      {
        v8 = std::string::_M_create(M_finish, v9, 0LL);
        M_finish->_M_dataplus._M_p = (std::string::pointer)v8;
        M_local_buf = (_BYTE *)v8;
        M_finish->_anon_0._M_allocated_capacity = v9[0];
      }
      else
      {
        if ( M_string_length == 1 )
        {
          M_finish->_anon_0._M_local_buf[0] = *M_p;
LABEL_8:
          M_finish->_M_string_length = M_string_length;
          M_local_buf[M_string_length] = 0;
          ++this->childValues_._M_impl._M_finish;
          return;
        }
        if ( !M_string_length )
          goto LABEL_8;
      }
      memcpy(M_local_buf, M_p, M_string_length);
      M_string_length = v9[0];
      M_local_buf = M_finish->_M_dataplus._M_p;
      goto LABEL_8;
    }
    std::vector<std::string>::_M_realloc_insert<std::string const&>(
      &this->childValues_,
      (std::vector<std::string>::iterator)this->childValues_._M_impl._M_finish,
      value,
      v2);
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>(
      this->document_,
      value->_M_dataplus._M_p,
      value->_M_string_length);
  }
};

// Line 807: range 00000000152E70D0-00000000152E7105
void __fastcall Json::StyledStreamWriter::writeIndent(Json::StyledStreamWriter *const this)
{
  Json::OStream *document; // rdi
  __int64 v3; // rax
  char v4[9]; // [rsp+Fh] [rbp-9h] BYREF

  document = this->document_;
  v4[0] = 10;
  v3 = std::__ostream_insert<char,std::char_traits<char>>(document, v4, 1LL);
  std::__ostream_insert<char,std::char_traits<char>>(
    v3,
    this->indentString_._M_dataplus._M_p,
    this->indentString_._M_string_length);
};

// Line 815: range 00000000152E7110-00000000152E7145
void __fastcall Json::StyledStreamWriter::writeWithIndent(
        Json::StyledStreamWriter *const this,
        const Json::String *value)
{
  if ( (*((_BYTE *)this + 104) & 2) == 0 )
    Json::StyledStreamWriter::writeIndent(this);
  std::__ostream_insert<char,std::char_traits<char>>(this->document_, value->_M_dataplus._M_p, value->_M_string_length);
  *((_BYTE *)this + 104) &= ~2u;
};

// Line 825: range 00000000152E7170-00000000152E71A6
void __fastcall Json::StyledStreamWriter::unindent(Json::StyledStreamWriter *const this)
{
  std::string::size_type M_string_length; // rsi
  std::string::size_type v2; // rax

  M_string_length = this->indentString_._M_string_length;
  v2 = this->indentation_._M_string_length;
  if ( M_string_length < v2 )
    __assert_fail(
      "indentString_.size() >= indentation_.size()",
      "src/lib_json/json_writer.cpp",
      0x339u,
      "void Json::StyledStreamWriter::unindent()");
  std::string::resize(&this->indentString_, M_string_length - v2, 0LL);
};

// Line 829: range 00000000152E71B0-00000000152E72A8
void __fastcall Json::StyledStreamWriter::writeCommentBeforeValue(
        Json::StyledStreamWriter *this,
        const Json::Value_0 *a2)
{
  std::string::pointer M_p; // rbx
  Json::OStream *document; // rdi
  char v5; // dl
  Json::String *v6; // rdi
  char *v7; // rax
  char v8; // [rsp+Fh] [rbp-39h] BYREF
  Json::String v9; // [rsp+10h] [rbp-38h] BYREF

  if ( Json::Value::hasComment(a2, commentBefore) )
  {
    if ( (*((_BYTE *)this + 104) & 2) == 0 )
      Json::StyledStreamWriter::writeIndent(this);
    Json::Value::getComment[abi:cxx11](&v9, a2, commentBefore);
    M_p = v9._M_dataplus._M_p;
    if ( v9._M_string_length )
    {
      document = this->document_;
      while ( 1 )
      {
        v8 = *M_p;
        std::__ostream_insert<char,std::char_traits<char>>(document, &v8, 1LL);
        v5 = *M_p;
        v6 = (Json::String *)v9._M_dataplus._M_p;
        ++M_p;
        v7 = &v9._M_dataplus._M_p[v9._M_string_length];
        if ( v5 != 10 )
          goto LABEL_7;
        if ( M_p == v7 )
          goto LABEL_13;
        document = this->document_;
        if ( *M_p == 47 )
        {
          std::__ostream_insert<char,std::char_traits<char>>(
            document,
            this->indentString_._M_dataplus._M_p,
            this->indentString_._M_string_length);
          v6 = (Json::String *)v9._M_dataplus._M_p;
          v7 = &v9._M_dataplus._M_p[v9._M_string_length];
LABEL_7:
          if ( M_p == v7 )
            goto LABEL_13;
          document = this->document_;
        }
      }
    }
    v6 = (Json::String *)v9._M_dataplus._M_p;
LABEL_13:
    *((_BYTE *)this + 104) &= ~2u;
    if ( v6 != (Json::String *)&v9._anon_0 )
      operator delete(v6);
  }
};

// Line 847: range 00000000152E72B0-00000000152E739A
void __fastcall Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(
        Json::StyledStreamWriter *this,
        const Json::Value_0 *a2)
{
  Json::OStream *document; // rdi
  __int64 v4; // r12
  Json::OStream *v5; // r12
  Json::String v6[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( Json::Value::hasComment(a2, commentAfterOnSameLine) )
  {
    document = this->document_;
    LOBYTE(v6[0]._M_dataplus._M_p) = 32;
    v4 = std::__ostream_insert<char,std::char_traits<char>>(document, v6, 1LL);
    Json::Value::getComment[abi:cxx11](v6, a2, commentAfterOnSameLine);
    std::__ostream_insert<char,std::char_traits<char>>(v4, v6[0]._M_dataplus._M_p, v6[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6[0]._M_dataplus._M_p != &v6[0]._anon_0 )
      operator delete(v6[0]._M_dataplus._M_p);
  }
  if ( !Json::Value::hasComment(a2, commentAfter)
    || (Json::StyledStreamWriter::writeIndent(this),
        v5 = this->document_,
        Json::Value::getComment[abi:cxx11](v6, a2, commentAfter),
        std::__ostream_insert<char,std::char_traits<char>>(v5, v6[0]._M_dataplus._M_p, v6[0]._M_string_length),
        (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6[0]._M_dataplus._M_p == &v6[0]._anon_0) )
  {
    *((_BYTE *)this + 104) &= ~2u;
  }
  else
  {
    operator delete(v6[0]._M_dataplus._M_p);
    *((_BYTE *)this + 104) &= ~2u;
  }
};

// Line 858: range 00000000152E73A0-00000000152E73DA
bool __fastcall Json::StyledStreamWriter::hasCommentForValue(const Json::Value *value)
{
  return Json::Value::hasComment((const Json::Value_0 *const)value, commentBefore)
      || Json::Value::hasComment((const Json::Value_0 *const)value, commentAfterOnSameLine)
      || Json::Value::hasComment((const Json::Value_0 *const)value, commentAfter);
};

// Line 877: range 00000000152EBF80-00000000152EC059
void __fastcall Json::BuiltStyledStreamWriter::~BuiltStyledStreamWriter(Json::BuiltStyledStreamWriter *const this)
{
  Json::BuiltStyledStreamWriter *M_p; // rdi
  Json::BuiltStyledStreamWriter *v3; // rdi
  Json::BuiltStyledStreamWriter *v4; // rdi
  Json::BuiltStyledStreamWriter *v5; // rdi
  Json::BuiltStyledStreamWriter *v6; // rdi
  std::_Vector_base<std::string>::pointer M_finish; // rbx
  std::_Vector_base<std::string>::pointer M_start; // r12

  this->_vptr_StreamWriter = (int (**)(...))(&`vtable for'Json::BuiltStyledStreamWriter + 2);
  M_p = (Json::BuiltStyledStreamWriter *)this->endingLineFeedSymbol_._M_dataplus._M_p;
  if ( M_p != (Json::BuiltStyledStreamWriter *)&this->endingLineFeedSymbol_._anon_0 )
    operator delete(M_p);
  v3 = (Json::BuiltStyledStreamWriter *)this->nullSymbol_._M_dataplus._M_p;
  if ( v3 != (Json::BuiltStyledStreamWriter *)&this->nullSymbol_._anon_0 )
    operator delete(v3);
  v4 = (Json::BuiltStyledStreamWriter *)this->colonSymbol_._M_dataplus._M_p;
  if ( v4 != (Json::BuiltStyledStreamWriter *)&this->colonSymbol_._anon_0 )
    operator delete(v4);
  v5 = (Json::BuiltStyledStreamWriter *)this->indentation_._M_dataplus._M_p;
  if ( v5 != (Json::BuiltStyledStreamWriter *)&this->indentation_._anon_0 )
    operator delete(v5);
  v6 = (Json::BuiltStyledStreamWriter *)this->indentString_._M_dataplus._M_p;
  if ( v6 != (Json::BuiltStyledStreamWriter *)&this->indentString_._anon_0 )
    operator delete(v6);
  M_finish = this->childValues_._M_impl._M_finish;
  M_start = this->childValues_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p != &M_start->_anon_0 )
      {
        operator delete(M_start->_M_dataplus._M_p);
        if ( M_finish == ++M_start )
          goto LABEL_14;
      }
      ++M_start;
    }
    while ( M_finish != M_start );
LABEL_14:
    M_start = this->childValues_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  Json::StreamWriter::~StreamWriter(this);
};

// Line 877: range 00000000152EC060-00000000152EC149
void __fastcall Json::BuiltStyledStreamWriter::~BuiltStyledStreamWriter(Json::BuiltStyledStreamWriter *const this)
{
  Json::BuiltStyledStreamWriter *M_p; // rdi
  Json::BuiltStyledStreamWriter *v3; // rdi
  Json::BuiltStyledStreamWriter *v4; // rdi
  Json::BuiltStyledStreamWriter *v5; // rdi
  Json::BuiltStyledStreamWriter *v6; // rdi
  std::_Vector_base<std::string>::pointer M_finish; // rbx
  std::_Vector_base<std::string>::pointer M_start; // r12

  this->_vptr_StreamWriter = (int (**)(...))(&`vtable for'Json::BuiltStyledStreamWriter + 2);
  M_p = (Json::BuiltStyledStreamWriter *)this->endingLineFeedSymbol_._M_dataplus._M_p;
  if ( M_p != (Json::BuiltStyledStreamWriter *)&this->endingLineFeedSymbol_._anon_0 )
    operator delete(M_p);
  v3 = (Json::BuiltStyledStreamWriter *)this->nullSymbol_._M_dataplus._M_p;
  if ( v3 != (Json::BuiltStyledStreamWriter *)&this->nullSymbol_._anon_0 )
    operator delete(v3);
  v4 = (Json::BuiltStyledStreamWriter *)this->colonSymbol_._M_dataplus._M_p;
  if ( v4 != (Json::BuiltStyledStreamWriter *)&this->colonSymbol_._anon_0 )
    operator delete(v4);
  v5 = (Json::BuiltStyledStreamWriter *)this->indentation_._M_dataplus._M_p;
  if ( v5 != (Json::BuiltStyledStreamWriter *)&this->indentation_._anon_0 )
    operator delete(v5);
  v6 = (Json::BuiltStyledStreamWriter *)this->indentString_._M_dataplus._M_p;
  if ( v6 != (Json::BuiltStyledStreamWriter *)&this->indentString_._anon_0 )
    operator delete(v6);
  M_finish = this->childValues_._M_impl._M_finish;
  M_start = this->childValues_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p != &M_start->_anon_0 )
      {
        operator delete(M_start->_M_dataplus._M_p);
        if ( M_finish == ++M_start )
          goto LABEL_14;
      }
      ++M_start;
    }
    while ( M_finish != M_start );
LABEL_14:
    M_start = this->childValues_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  Json::StreamWriter::~StreamWriter(this);
  operator delete(this, 0xE8uLL);
};

// Line 915: range 00000000152E77C0-00000000152E79ED
void __fastcall Json::BuiltStyledStreamWriter::BuiltStyledStreamWriter(
        Json::BuiltStyledStreamWriter *const this,
        __int64 cs_0,
        Json::CommentStyle::Enum useSpecialFloats,
        __int64 emitUTF8,
        __int64 precision,
        __int64 precisionType,
        Json::String indentation)
{
  char *v10; // rcx
  std::string::size_type v11; // rcx
  char *v12; // rdx
  std::string::size_type v13; // rdx
  char *v14; // rdx
  std::string::size_type v15; // rdx
  char *v16; // rdx
  std::string::size_type v17; // rdx
  char v18; // al

  Json::StreamWriter::StreamWriter(this);
  this->childValues_._M_impl._M_end_of_storage = 0LL;
  v10 = *(char **)cs_0;
  this->indentString_._anon_0._M_local_buf[0] = 0;
  this->_vptr_StreamWriter = (int (**)(...))(&`vtable for'Json::BuiltStyledStreamWriter + 2);
  this->indentString_._M_dataplus._M_p = this->indentString_._anon_0._M_local_buf;
  this->indentation_._M_dataplus._M_p = this->indentation_._anon_0._M_local_buf;
  this->indentString_._M_string_length = 0LL;
  this->rightMargin_ = 74;
  *(_OWORD *)&this->childValues_._M_impl._M_start = 0LL;
  if ( v10 == (char *)(cs_0 + 16) )
  {
    this->indentation_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(cs_0 + 16));
  }
  else
  {
    this->indentation_._M_dataplus._M_p = v10;
    this->indentation_._anon_0._M_allocated_capacity = *(_QWORD *)(cs_0 + 16);
  }
  v11 = *(_QWORD *)(cs_0 + 8);
  *(_QWORD *)cs_0 = cs_0 + 16;
  this->cs_ = useSpecialFloats;
  v12 = *(char **)emitUTF8;
  this->colonSymbol_._M_dataplus._M_p = this->colonSymbol_._anon_0._M_local_buf;
  this->indentation_._M_string_length = v11;
  *(_QWORD *)(cs_0 + 8) = 0LL;
  *(_BYTE *)(cs_0 + 16) = 0;
  if ( v12 == (char *)(emitUTF8 + 16) )
  {
    this->colonSymbol_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(emitUTF8 + 16));
  }
  else
  {
    this->colonSymbol_._M_dataplus._M_p = v12;
    this->colonSymbol_._anon_0._M_allocated_capacity = *(_QWORD *)(emitUTF8 + 16);
  }
  v13 = *(_QWORD *)(emitUTF8 + 8);
  *(_QWORD *)emitUTF8 = emitUTF8 + 16;
  this->nullSymbol_._M_dataplus._M_p = this->nullSymbol_._anon_0._M_local_buf;
  this->colonSymbol_._M_string_length = v13;
  v14 = *(char **)precision;
  *(_QWORD *)(emitUTF8 + 8) = 0LL;
  *(_BYTE *)(emitUTF8 + 16) = 0;
  if ( v14 == (char *)(precision + 16) )
  {
    this->nullSymbol_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(precision + 16));
  }
  else
  {
    this->nullSymbol_._M_dataplus._M_p = v14;
    this->nullSymbol_._anon_0._M_allocated_capacity = *(_QWORD *)(precision + 16);
  }
  v15 = *(_QWORD *)(precision + 8);
  *(_QWORD *)precision = precision + 16;
  this->endingLineFeedSymbol_._M_dataplus._M_p = this->endingLineFeedSymbol_._anon_0._M_local_buf;
  this->nullSymbol_._M_string_length = v15;
  v16 = *(char **)precisionType;
  *(_QWORD *)(precision + 8) = 0LL;
  *(_BYTE *)(precision + 16) = 0;
  if ( (char *)(precisionType + 16) == v16 )
  {
    this->endingLineFeedSymbol_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(precisionType + 16));
  }
  else
  {
    this->endingLineFeedSymbol_._M_dataplus._M_p = v16;
    this->endingLineFeedSymbol_._anon_0._M_allocated_capacity = *(_QWORD *)(precisionType + 16);
  }
  *(_QWORD *)precisionType = precisionType + 16;
  v17 = *(_QWORD *)(precisionType + 8);
  v18 = *((_BYTE *)this + 216);
  *(_QWORD *)(precisionType + 8) = 0LL;
  this->endingLineFeedSymbol_._M_string_length = v17;
  *(_BYTE *)(precisionType + 16) = 0;
  *((_BYTE *)this + 216) = v18 & 0xF0 | ((4 * LOBYTE(indentation._M_dataplus._M_p)) | (8
                                                                                     * LOBYTE(indentation._M_string_length))) & 0xF;
  this->precision_ = indentation._anon_0._M_allocated_capacity;
  this->precisionType_ = *((_DWORD *)&indentation._anon_0._M_allocated_capacity + 2);
};

// Line 925: range 00000000152EA550-00000000152EA5E0
int __fastcall Json::BuiltStyledStreamWriter::write(Json::BuiltStyledStreamWriter *const this, const Json::Value *root, Json::OStream *sout);

// Line 940: range 00000000152E9DC0-00000000152EA544
void __fastcall Json::BuiltStyledStreamWriter::writeValue(
        Json::BuiltStyledStreamWriter *this,
        Json::Value_0 *a2,
        double a3)
{
  Json::Value::LargestInt v4; // rax
  std::string::pointer v5; // rdi
  std::string::pointer v6; // rbx
  const Json::Value *v7; // r13
  Json::Value::LargestUInt v8; // rax
  char v9; // r14
  Json::PrecisionType precisionType; // ebx
  unsigned int precision; // r13d
  bool v12; // r14
  const char *v13; // r12
  bool v14; // al
  char *v15; // rax
  size_t v16; // r13
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  std::string::size_type M_string_length; // rbx
  void **v19; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  const char *v21; // r12
  int v22; // eax
  std::string::pointer v23; // rax
  char *v24; // rdx
  std::string::size_type v25; // rsi
  std::string::pointer v26; // rdx
  char *v27; // rax
  char *v28; // rcx
  std::string::size_type v29; // rax
  std::vector<std::string> *v30; // [rsp+0h] [rbp-98h]
  Json::String *p_key; // [rsp+8h] [rbp-90h]
  int v32; // [rsp+10h] [rbp-88h]
  char *begin; // [rsp+18h] [rbp-80h] BYREF
  Json::String key; // [rsp+20h] [rbp-78h] BYREF
  Json::String value; // [rsp+40h] [rbp-58h] BYREF

  switch ( Json::Value::type(a2) )
  {
    case nullValue:
      Json::BuiltStyledStreamWriter::pushValue(this, &this->nullSymbol_);
      return;
    case intValue:
      v4 = Json::Value::asLargestInt(a2);
      Json::valueToString[abi:cxx11](&value, v4);
      Json::BuiltStyledStreamWriter::pushValue(this, &value);
      goto LABEL_3;
    case uintValue:
      v8 = Json::Value::asLargestUInt(a2);
      Json::valueToString[abi:cxx11](&value, v8);
      Json::BuiltStyledStreamWriter::pushValue(this, &value);
      goto LABEL_3;
    case realValue:
      v9 = *((_BYTE *)this + 216);
      precisionType = this->precisionType_;
      precision = this->precision_;
      Json::Value::asDouble((Json::Value *)a2);
      v12 = (v9 & 4) != 0;
      if ( fabs(a3) > 1.797693134862316e308 )
      {
        key._M_dataplus._M_p = key._anon_0._M_local_buf;
        v13 = (const char *)*(&Json::`anonymous namespace'::valueToString(double,bool,unsigned int,Json::PrecisionType)::reps
                            + 2 * !v12
                            + (a3 >= 0.0)
                            + !v12
                            + 1);
        if ( !v13 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        v15 = (char *)strlen(v13);
        value._M_dataplus._M_p = v15;
        v16 = (size_t)v15;
        if ( (unsigned __int64)v15 > 0xF )
        {
          key._M_dataplus._M_p = (std::string::pointer)std::string::_M_create(&key, &value, 0LL);
          M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p;
          key._anon_0._M_allocated_capacity = (std::string::size_type)value._M_dataplus._M_p;
        }
        else
        {
          if ( v15 == (char *)1 )
          {
            key._anon_0._M_local_buf[0] = *v13;
            p_anon_0 = &key._anon_0;
LABEL_26:
            key._M_string_length = (std::string::size_type)v15;
            v15[(_QWORD)p_anon_0] = 0;
            Json::BuiltStyledStreamWriter::pushValue(this, &key);
            goto LABEL_27;
          }
          if ( !v15 )
          {
            p_anon_0 = &key._anon_0;
            goto LABEL_26;
          }
          M_p = &key._anon_0;
        }
        memcpy(M_p, v13, v16);
        v15 = value._M_dataplus._M_p;
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p;
        goto LABEL_26;
      }
      value._M_dataplus._M_p = value._anon_0._M_local_buf;
      v21 = "%.*g";
      std::string::_M_construct(&value, 36LL, 0LL);
      if ( precisionType )
        v21 = "%.*f";
      while ( 1 )
      {
        v22 = snprintf(value._M_dataplus._M_p, value._M_string_length, v21, precision, a3, 1.797693134862316e308, a3);
        if ( v22 < 0 )
          __assert_fail(
            "len >= 0",
            "src/lib_json/json_writer.cpp",
            0x91u,
            "Json::String Json::{anonymous}::valueToString(double, bool, unsigned int, Json::PrecisionType)");
        if ( v22 < value._M_string_length )
          break;
        std::string::resize(&value, v22 + 1LL, 0LL);
      }
      std::string::resize(&value, v22, 0LL);
      v23 = value._M_dataplus._M_p;
      v24 = &value._M_dataplus._M_p[value._M_string_length];
      if ( value._M_dataplus._M_p == &value._M_dataplus._M_p[value._M_string_length] )
      {
        v25 = 0LL;
      }
      else
      {
        do
        {
          if ( *v23 == 44 )
            *v23 = 46;
          ++v23;
        }
        while ( v23 != v24 );
        v25 = v23 - value._M_dataplus._M_p;
        if ( v23 != &value._M_dataplus._M_p[value._M_string_length] )
        {
          std::string::_M_erase(&value, v25, 0LL);
          goto LABEL_54;
        }
      }
      value._M_string_length = v25;
      *v24 = 0;
LABEL_54:
      v26 = value._M_dataplus._M_p;
      if ( precisionType == decimalPlaces )
      {
        v27 = &value._M_dataplus._M_p[value._M_string_length];
        if ( &value._M_dataplus._M_p[value._M_string_length] == value._M_dataplus._M_p )
        {
LABEL_65:
          v29 = 0LL;
        }
        else
        {
          do
          {
            v28 = v27--;
            if ( *v27 != 48 )
              break;
            if ( v27 == value._M_dataplus._M_p )
              goto LABEL_65;
          }
          while ( *(v27 - 1) != 46 );
          v29 = v28 - value._M_dataplus._M_p;
          v26 = v28;
        }
        value._M_string_length = v29;
        *v26 = 0;
      }
      if ( std::string::find(&value, 46LL, 0LL) == -1 && std::string::find(&value, 101LL, 0LL) == -1 )
      {
        if ( value._M_string_length == 0x3FFFFFFFFFFFFFFFLL || value._M_string_length == 4611686018427387902LL )
          std::__throw_length_error("basic_string::append");
        std::string::_M_append(&value, ".0", 2LL);
      }
      key._M_dataplus._M_p = key._anon_0._M_local_buf;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p == &value._anon_0 )
      {
        key._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_load_si128((const __m128i *)&value._anon_0);
      }
      else
      {
        key._M_dataplus._M_p = value._M_dataplus._M_p;
        key._anon_0._M_allocated_capacity = value._anon_0._M_allocated_capacity;
      }
      key._M_string_length = value._M_string_length;
      Json::BuiltStyledStreamWriter::pushValue(this, &key);
LABEL_27:
      v5 = key._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)key._M_dataplus._M_p != &key._anon_0 )
LABEL_4:
        operator delete(v5);
      return;
    case stringValue:
      if ( !Json::Value::getString(a2, (const char **)&begin, (const char **)&key._M_dataplus._M_p) )
      {
        value._M_string_length = 0LL;
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        value._anon_0._M_local_buf[0] = 0;
        Json::BuiltStyledStreamWriter::pushValue(this, &value);
        v5 = value._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
          goto LABEL_4;
        return;
      }
      Json::valueToQuotedStringN(
        (__m128i *)&value,
        begin,
        LODWORD(key._M_dataplus._M_p) - (_DWORD)begin,
        (*((_BYTE *)this + 216) & 8) != 0);
      Json::BuiltStyledStreamWriter::pushValue(this, &value);
LABEL_3:
      v5 = value._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p == &value._anon_0 )
        return;
      goto LABEL_4;
    case booleanValue:
      v14 = Json::Value::asBool((Json::Value *)a2);
      Json::valueToString[abi:cxx11](&value, v14);
      Json::BuiltStyledStreamWriter::pushValue(this, &value);
      goto LABEL_3;
    case arrayValue:
      Json::BuiltStyledStreamWriter::writeArrayValue(this, (const Json::Value *)a2);
      return;
    case objectValue:
      p_key = &key;
      Json::Value::getMemberNames[abi:cxx11]((__int64)&key, a2);
      if ( key._M_dataplus._M_p == (std::string::pointer)key._M_string_length )
      {
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        strcpy(value._anon_0._M_local_buf, "{}");
        value._M_string_length = 2LL;
        Json::BuiltStyledStreamWriter::pushValue(this, &value);
      }
      else
      {
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        value._M_string_length = 1LL;
        *(_WORD *)value._anon_0._M_local_buf = 123;
        Json::BuiltStyledStreamWriter::writeWithIndent(this, &value);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
          operator delete(value._M_dataplus._M_p);
        Json::BuiltStyledStreamWriter::indent(this);
        v6 = key._M_dataplus._M_p;
        while ( 1 )
        {
          v7 = (const Json::Value *)Json::Value::operator[](a2, (const Json::String *)v6);
          Json::BuiltStyledStreamWriter::writeCommentBeforeValue(this, v7);
          Json::valueToQuotedStringN(
            (__m128i *)&value,
            *(const char **)v6,
            *((_DWORD *)v6 + 2),
            (*((_BYTE *)this + 216) & 8) != 0);
          Json::BuiltStyledStreamWriter::writeWithIndent(this, &value);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
            operator delete(value._M_dataplus._M_p);
          std::__ostream_insert<char,std::char_traits<char>>(
            this->sout_,
            this->colonSymbol_._M_dataplus._M_p,
            this->colonSymbol_._M_string_length);
          Json::BuiltStyledStreamWriter::writeValue(
            this,
            v30,
            (int)p_key,
            v32,
            (__int64)begin,
            (int)key._M_dataplus._M_p,
            key._M_string_length,
            *(int *)key._anon_0._M_local_buf,
            *((void **)&key._anon_0._M_allocated_capacity + 1),
            (int)value._M_dataplus._M_p,
            value._M_string_length);
          v6 += 32;
          if ( v6 == (std::string::pointer)key._M_string_length )
            break;
          std::__ostream_insert<char,std::char_traits<char>>(this->sout_, ",", 1LL);
          Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine(this, v7);
        }
        Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine(this, v7);
        Json::BuiltStyledStreamWriter::unindent(this);
        value._M_dataplus._M_p = value._anon_0._M_local_buf;
        value._M_string_length = 1LL;
        *(_WORD *)value._anon_0._M_local_buf = 125;
        Json::BuiltStyledStreamWriter::writeWithIndent(this, &value);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
        operator delete(value._M_dataplus._M_p);
      M_string_length = key._M_string_length;
      v19 = (void **)key._M_dataplus._M_p;
      if ( (std::string::pointer)key._M_string_length == key._M_dataplus._M_p )
        goto LABEL_36;
      do
      {
        while ( *v19 != v19 + 2 )
        {
          operator delete(*v19);
          v19 += 4;
          if ( v19 == (void **)M_string_length )
            goto LABEL_35;
        }
        v19 += 4;
      }
      while ( (void **)M_string_length != v19 );
LABEL_35:
      v19 = (void **)key._M_dataplus._M_p;
LABEL_36:
      if ( !v19 )
        return;
      v5 = (std::string::pointer)v19;
      goto LABEL_4;
    default:
      return;
  }
};

// Line 1003: range 00000000152E9A20-00000000152E9DAC
void __fastcall Json::BuiltStyledStreamWriter::writeArrayValue(
        Json::BuiltStyledStreamWriter *this,
        Json::Value_0 *a2,
        double a3)
{
  Json::Value_0::ArrayIndex v4; // eax
  Json::Value_0::ArrayIndex v5; // r13d
  Json::OStream *sout; // rdi
  __int64 i; // r14
  char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r13
  Json::Value *v11; // r14
  std::string::pointer M_p; // rdi
  Json::Value_0::ArrayIndex v13; // r12d
  __int64 v14; // [rsp+8h] [rbp-70h]
  Json::String value; // [rsp+20h] [rbp-58h] BYREF

  v4 = Json::Value::size(a2);
  if ( !v4 )
  {
    value._M_dataplus._M_p = value._anon_0._M_local_buf;
    strcpy(value._anon_0._M_local_buf, "[]");
    value._M_string_length = 2LL;
    Json::BuiltStyledStreamWriter::pushValue(this, &value);
    M_p = value._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p == &value._anon_0 )
      return;
    goto LABEL_21;
  }
  v5 = v4;
  if ( this->cs_ != All_13 && !Json::BuiltStyledStreamWriter::isMultilineArray(this, (const Json::Value *)a2) )
  {
    if ( v5 != this->childValues_._M_impl._M_finish - this->childValues_._M_impl._M_start )
      __assert_fail(
        "childValues_.size() == size",
        "src/lib_json/json_writer.cpp",
        0x40Du,
        "void Json::BuiltStyledStreamWriter::writeArrayValue(const Json::Value&)");
    std::__ostream_insert<char,std::char_traits<char>>(this->sout_, "[", 1LL);
    if ( this->indentation_._M_string_length )
      std::__ostream_insert<char,std::char_traits<char>>(this->sout_, " ", 1LL);
    sout = this->sout_;
    for ( i = 0LL; ; ++i )
    {
      std::__ostream_insert<char,std::char_traits<char>>(
        sout,
        this->childValues_._M_impl._M_start[i]._M_dataplus._M_p,
        this->childValues_._M_impl._M_start[i]._M_string_length);
      sout = this->sout_;
      if ( i == v5 - 1 )
        break;
      if ( (_DWORD)i != -1 )
      {
        v8 = ",";
        if ( this->indentation_._M_string_length )
          v8 = ", ";
        std::__ostream_insert<char,std::char_traits<char>>(sout, v8, 2LL - (this->indentation_._M_string_length == 0));
        sout = this->sout_;
      }
    }
    if ( this->indentation_._M_string_length )
    {
      std::__ostream_insert<char,std::char_traits<char>>(sout, " ", 1LL);
      sout = this->sout_;
    }
    std::__ostream_insert<char,std::char_traits<char>>(sout, "]", 1LL);
    return;
  }
  value._M_dataplus._M_p = value._anon_0._M_local_buf;
  value._M_string_length = 1LL;
  *(_WORD *)value._anon_0._M_local_buf = 91;
  Json::BuiltStyledStreamWriter::writeWithIndent(this, &value);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
    operator delete(value._M_dataplus._M_p);
  Json::BuiltStyledStreamWriter::indent(this);
  if ( this->childValues_._M_impl._M_start == this->childValues_._M_impl._M_finish )
  {
    v13 = 0;
    while ( 1 )
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value *)a2, v13);
      Json::BuiltStyledStreamWriter::writeCommentBeforeValue(this, v11);
      if ( (*((_BYTE *)this + 216) & 2) == 0 )
      {
        Json::BuiltStyledStreamWriter::writeIndent(this);
        *((_BYTE *)this + 216) |= 2u;
      }
      ++v13;
      Json::BuiltStyledStreamWriter::writeValue(this, (Json::Value_0 *)v11, a3);
      *((_BYTE *)this + 216) &= ~2u;
      if ( v13 == v5 )
        break;
      std::__ostream_insert<char,std::char_traits<char>>(this->sout_, ",", 1LL);
      Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine(this, v11);
    }
  }
  else
  {
    v9 = v5 - 1;
    v10 = 0LL;
    v14 = v9;
    while ( 1 )
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value *)a2, v10);
      Json::BuiltStyledStreamWriter::writeCommentBeforeValue(this, v11);
      Json::BuiltStyledStreamWriter::writeWithIndent(this, &this->childValues_._M_impl._M_start[v10]);
      if ( v14 == v10 )
        break;
      ++v10;
      std::__ostream_insert<char,std::char_traits<char>>(this->sout_, ",", 1LL);
      Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine(this, v11);
    }
  }
  Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine(this, v11);
  Json::BuiltStyledStreamWriter::unindent(this);
  value._M_string_length = 1LL;
  value._M_dataplus._M_p = value._anon_0._M_local_buf;
  *(_WORD *)value._anon_0._M_local_buf = 93;
  Json::BuiltStyledStreamWriter::writeWithIndent(this, &value);
  M_p = value._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
LABEL_21:
    operator delete(M_p);
};

// Line 1053: range 00000000152EA5F0-00000000152EA7C0
bool __fastcall Json::BuiltStyledStreamWriter::isMultilineArray(
        Json::BuiltStyledStreamWriter *const this,
        const Json::Value *value)
{
  double v2; // xmm0_8
  Json::Value_0::ArrayIndex v3; // eax
  std::string *M_start; // r13
  unsigned int v5; // ebp
  std::_Vector_base<std::string>::pointer M_finish; // r15
  std::_Vector_base<std::string>::pointer v7; // r14
  Json::Value_0::ArrayIndex v8; // r15d
  const Json::Value_0 *v9; // r14
  bool isObject; // r13
  unsigned int v12; // r15d
  __int64 v13; // r14
  const Json::Value *v14; // rax
  bool hasCommentForValue; // al
  Json::Value_0 *v16; // rax
  __int64 v17; // rax
  bool isMultiLine; // [rsp+7h] [rbp-41h]
  unsigned int rightMargin; // [rsp+8h] [rbp-40h]
  unsigned int v20; // [rsp+Ch] [rbp-3Ch]

  v3 = Json::Value::size((const Json::Value_0 *const)value);
  M_start = this->childValues_._M_impl._M_start;
  v5 = v3;
  M_finish = this->childValues_._M_impl._M_finish;
  v20 = 3 * v3;
  rightMargin = this->rightMargin_;
  isMultiLine = 3 * v3 >= rightMargin;
  if ( M_start != M_finish )
  {
    v7 = this->childValues_._M_impl._M_start;
    do
    {
      while ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v7->_M_dataplus._M_p != &v7->_anon_0 )
      {
        operator delete(v7->_M_dataplus._M_p);
        if ( ++v7 == M_finish )
          goto LABEL_5;
      }
      ++v7;
    }
    while ( M_finish != v7 );
LABEL_5:
    this->childValues_._M_impl._M_finish = M_start;
  }
  if ( v5 && !isMultiLine )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = (const Json::Value_0 *)Json::Value::operator[]((Json::Value *)value, v8);
      if ( Json::Value::isArray(v9) || (isObject = Json::Value::isObject(v9)) )
        isObject = !Json::Value::empty(v9);
      if ( v5 <= ++v8 )
        break;
      if ( isObject )
        return 1;
    }
    if ( !isObject )
    {
      v12 = 2 * v5 + 2;
      v13 = 0LL;
      std::vector<std::string>::reserve(&this->childValues_, v5);
      *((_BYTE *)this + 216) |= 1u;
      do
      {
        v14 = (const Json::Value *)Json::Value::operator[]((Json::Value *)value, v13);
        hasCommentForValue = Json::BuiltStyledStreamWriter::hasCommentForValue(v14);
        if ( hasCommentForValue )
          isObject = hasCommentForValue;
        v16 = (Json::Value_0 *)Json::Value::operator[]((Json::Value *)value, v13);
        Json::BuiltStyledStreamWriter::writeValue(this, v16, v2);
        v17 = v13++;
        v12 += LODWORD(this->childValues_._M_impl._M_start[v17]._M_string_length);
      }
      while ( v5 > (unsigned int)v13 );
      *((_BYTE *)this + 216) &= ~1u;
      if ( !isObject )
        return this->rightMargin_ <= v12;
    }
    return 1;
  }
  if ( v20 >= rightMargin )
    return 1;
  v12 = 2 * v5 + 2;
  std::vector<std::string>::reserve(&this->childValues_, v5);
  *((_BYTE *)this + 216) &= ~1u;
  return this->rightMargin_ <= v12;
};

// Line 1080: range 00000000152E9910-00000000152E9A0F
void __fastcall Json::BuiltStyledStreamWriter::pushValue(
        Json::BuiltStyledStreamWriter *const this,
        const Json::String *value)
{
  const std::string *v2; // rcx
  std::_Vector_base<std::string>::pointer M_finish; // rbp
  _BYTE *M_local_buf; // rdi
  std::string::size_type M_string_length; // r12
  std::string::pointer M_p; // r13
  __int64 v8; // rax
  std::string::size_type v9[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( (*((_BYTE *)this + 216) & 1) != 0 )
  {
    M_finish = this->childValues_._M_impl._M_finish;
    if ( M_finish != this->childValues_._M_impl._M_end_of_storage )
    {
      M_local_buf = M_finish->_anon_0._M_local_buf;
      M_string_length = value->_M_string_length;
      M_finish->_M_dataplus._M_p = M_finish->_anon_0._M_local_buf;
      M_p = value->_M_dataplus._M_p;
      if ( &value->_M_dataplus._M_p[M_string_length] )
      {
        if ( !M_p )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
      v9[0] = M_string_length;
      if ( M_string_length > 0xF )
      {
        v8 = std::string::_M_create(M_finish, v9, 0LL);
        M_finish->_M_dataplus._M_p = (std::string::pointer)v8;
        M_local_buf = (_BYTE *)v8;
        M_finish->_anon_0._M_allocated_capacity = v9[0];
      }
      else
      {
        if ( M_string_length == 1 )
        {
          M_finish->_anon_0._M_local_buf[0] = *M_p;
LABEL_8:
          M_finish->_M_string_length = M_string_length;
          M_local_buf[M_string_length] = 0;
          ++this->childValues_._M_impl._M_finish;
          return;
        }
        if ( !M_string_length )
          goto LABEL_8;
      }
      memcpy(M_local_buf, M_p, M_string_length);
      M_string_length = v9[0];
      M_local_buf = M_finish->_M_dataplus._M_p;
      goto LABEL_8;
    }
    std::vector<std::string>::_M_realloc_insert<std::string const&>(
      &this->childValues_,
      (std::vector<std::string>::iterator)M_finish,
      value,
      v2);
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>(this->sout_, value->_M_dataplus._M_p, value->_M_string_length);
  }
};

// Line 1093: range 00000000152E73E0-00000000152E7425
void __fastcall Json::BuiltStyledStreamWriter::writeIndent(Json::BuiltStyledStreamWriter *const this)
{
  Json::OStream *sout; // rdi
  __int64 v3; // rax
  char v4[9]; // [rsp+1h] [rbp-9h] BYREF

  if ( this->indentation_._M_string_length )
  {
    sout = this->sout_;
    v4[0] = 10;
    v3 = std::__ostream_insert<char,std::char_traits<char>>(sout, v4, 1LL);
    std::__ostream_insert<char,std::char_traits<char>>(
      v3,
      this->indentString_._M_dataplus._M_p,
      this->indentString_._M_string_length);
  }
};

// Line 1099: range 00000000152E7430-00000000152E746D
void __fastcall Json::BuiltStyledStreamWriter::writeWithIndent(
        Json::BuiltStyledStreamWriter *const this,
        const Json::String *value)
{
  if ( (*((_BYTE *)this + 216) & 2) == 0 )
    Json::BuiltStyledStreamWriter::writeIndent(this);
  std::__ostream_insert<char,std::char_traits<char>>(this->sout_, value->_M_dataplus._M_p, value->_M_string_length);
  *((_BYTE *)this + 216) &= ~2u;
};

// Line 1109: range 00000000152E7490-00000000152E74C6
void __fastcall Json::BuiltStyledStreamWriter::unindent(Json::BuiltStyledStreamWriter *const this)
{
  std::string::size_type M_string_length; // rsi
  std::string::size_type v2; // rax

  M_string_length = this->indentString_._M_string_length;
  v2 = this->indentation_._M_string_length;
  if ( M_string_length < v2 )
    __assert_fail(
      "indentString_.size() >= indentation_.size()",
      "src/lib_json/json_writer.cpp",
      0x455u,
      "void Json::BuiltStyledStreamWriter::unindent()");
  std::string::resize(&this->indentString_, M_string_length - v2, 0LL);
};

// Line 1114: range 00000000152E74D0-00000000152E75E0
void __fastcall Json::BuiltStyledStreamWriter::writeCommentBeforeValue(
        Json::BuiltStyledStreamWriter *this,
        const Json::Value_0 *a2)
{
  std::string::pointer M_p; // rbx
  Json::OStream *sout; // rdi
  char v5; // dl
  Json::String *v6; // rdi
  char *v7; // rax
  char v8; // [rsp+1h] [rbp-39h] BYREF
  Json::String v9; // [rsp+2h] [rbp-38h] BYREF

  if ( this->cs_ && Json::Value::hasComment(a2, commentBefore) )
  {
    if ( (*((_BYTE *)this + 216) & 2) == 0 )
      Json::BuiltStyledStreamWriter::writeIndent(this);
    Json::Value::getComment[abi:cxx11](&v9, a2, commentBefore);
    M_p = v9._M_dataplus._M_p;
    if ( v9._M_string_length )
    {
      sout = this->sout_;
      while ( 1 )
      {
        v8 = *M_p;
        std::__ostream_insert<char,std::char_traits<char>>(sout, &v8, 1LL);
        v5 = *M_p;
        v6 = (Json::String *)v9._M_dataplus._M_p;
        ++M_p;
        v7 = &v9._M_dataplus._M_p[v9._M_string_length];
        if ( v5 != 10 )
          goto LABEL_8;
        if ( M_p == v7 )
          goto LABEL_14;
        sout = this->sout_;
        if ( *M_p == 47 )
        {
          std::__ostream_insert<char,std::char_traits<char>>(
            sout,
            this->indentString_._M_dataplus._M_p,
            this->indentString_._M_string_length);
          v6 = (Json::String *)v9._M_dataplus._M_p;
          v7 = &v9._M_dataplus._M_p[v9._M_string_length];
LABEL_8:
          if ( M_p == v7 )
            goto LABEL_14;
          sout = this->sout_;
        }
      }
    }
    v6 = (Json::String *)v9._M_dataplus._M_p;
LABEL_14:
    *((_BYTE *)this + 216) &= ~2u;
    if ( v6 != (Json::String *)&v9._anon_0 )
      operator delete(v6);
  }
};

// Line 1135: range 00000000152E75F0-00000000152E7751
void __fastcall Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine(
        Json::BuiltStyledStreamWriter *this,
        const Json::Value_0 *a2)
{
  Json::OStream *sout; // r13
  __int64 v4; // rax
  std::string::pointer M_p; // rsi
  Json::OStream *v6; // r12
  Json::String v7; // [rsp+0h] [rbp-68h] BYREF
  Json::String v8; // [rsp+20h] [rbp-48h] BYREF

  if ( this->cs_ )
  {
    if ( Json::Value::hasComment(a2, commentAfterOnSameLine) )
    {
      sout = this->sout_;
      Json::Value::getComment[abi:cxx11](&v7, a2, commentAfterOnSameLine);
      v4 = std::string::_M_replace(&v7, 0LL, 0LL, " ", 1LL);
      v8._M_dataplus._M_p = v8._anon_0._M_local_buf;
      if ( *(_QWORD *)v4 == v4 + 16 )
      {
        v8._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v4 + 16));
      }
      else
      {
        v8._M_dataplus._M_p = *(std::string::pointer *)v4;
        v8._anon_0._M_allocated_capacity = *(_QWORD *)(v4 + 16);
      }
      v8._M_string_length = *(_QWORD *)(v4 + 8);
      *(_QWORD *)v4 = v4 + 16;
      *(_BYTE *)(v4 + 16) = 0;
      M_p = v8._M_dataplus._M_p;
      *(_QWORD *)(v4 + 8) = 0LL;
      std::__ostream_insert<char,std::char_traits<char>>(sout, M_p, v8._M_string_length);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
        operator delete(v8._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v7._M_dataplus._M_p != &v7._anon_0 )
        operator delete(v7._M_dataplus._M_p);
    }
    if ( Json::Value::hasComment(a2, commentAfter) )
    {
      Json::BuiltStyledStreamWriter::writeIndent(this);
      v6 = this->sout_;
      Json::Value::getComment[abi:cxx11](&v8, a2, commentAfter);
      std::__ostream_insert<char,std::char_traits<char>>(v6, v8._M_dataplus._M_p, v8._M_string_length);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
        operator delete(v8._M_dataplus._M_p);
    }
  }
};

// Line 1147: range 00000000152E7760-00000000152E779A
bool __fastcall Json::BuiltStyledStreamWriter::hasCommentForValue(const Json::Value *value)
{
  return Json::Value::hasComment((const Json::Value_0 *const)value, commentBefore)
      || Json::Value::hasComment((const Json::Value_0 *const)value, commentAfterOnSameLine)
      || Json::Value::hasComment((const Json::Value_0 *const)value, commentAfter);
};

// Line 1156: range 00000000152E77A0-00000000152E77B6
void __fastcall Json::StreamWriter::StreamWriter(Json::StreamWriter *const this)
{
  this->sout_ = 0LL;
  this->_vptr_StreamWriter = (int (**)(...))(&`vtable for'Json::StreamWriter + 2);
};

// Line 1159: range 000000000C73BC08-000000000C73BC1E
void __fastcall __noreturn Json::StreamWriterBuilder::StreamWriterBuilder()
{
  struct _Unwind_Exception *v0; // rbx
  Json::StreamWriter::Factory *v1; // rbp
  Json::Value_0 *v2; // r12

  Json::Value::~Value(v2);
  Json::StreamWriter::Factory::~Factory(v1);
  _Unwind_Resume(v0);
};

// Line 1159: range 00000000152E8450-00000000152E848B
__int64 __fastcall Json::StreamWriterBuilder::StreamWriterBuilder(Json::StreamWriterBuilder *this)
{
  this->_vptr_Factory = (int (**)(...))(&`vtable for'Json::StreamWriterBuilder + 2);
  Json::Value::Value(&this->settings_, nullValue);
  return Json::StreamWriterBuilder::setDefaults((Json::StreamWriterBuilder *)&this->settings_, 0LL);
};

// Line 1161: range 00000000152E7A00-00000000152E81B9
Json::BuiltStyledStreamWriter *__fastcall Json::StreamWriterBuilder::newStreamWriter(Json::StreamWriterBuilder *this)
{
  Json::Value_0 *v1; // rax
  Json::Value_0 *v2; // rax
  Json::Value_0 *v3; // rax
  Json::Value *v4; // rax
  bool v5; // r12
  Json::Value *v6; // rax
  Json::Value *v7; // rax
  Json::Value *v8; // rax
  Json::Value *v9; // rax
  unsigned int v10; // ebx
  const std::allocator<char> *v11; // rdx
  const std::allocator<char> *v12; // rdx
  size_t M_string_length; // r12
  int v14; // eax
  std::string::pointer M_p; // r14
  __int64 *v16; // rax
  void *v17; // r13
  __int64 v18; // r12
  __int64 *v19; // rax
  void *v20; // r14
  __int64 v21; // r12
  __int64 *v22; // rax
  void *v23; // r15
  std::string::size_type v24; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  Json::BuiltStyledStreamWriter *v26; // r12
  __int64 *v28; // rdi
  __int64 *v29; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v30; // rdi
  __int64 *v31; // rdi
  Json::String v32; // [rsp-20h] [rbp-1D0h]
  unsigned int v33; // [rsp+0h] [rbp-1B0h]
  unsigned int v34; // [rsp+4h] [rbp-1ACh]
  Json::CommentStyle::Enum useSpecialFloats; // [rsp+20h] [rbp-190h]
  bool v36; // [rsp+26h] [rbp-18Ah]
  bool v37; // [rsp+27h] [rbp-189h]
  bool v38; // [rsp+28h] [rbp-188h]
  std::string::size_type v39; // [rsp+38h] [rbp-178h] BYREF
  Json::String v40; // [rsp+40h] [rbp-170h] BYREF
  Json::String v41; // [rsp+60h] [rbp-150h] BYREF
  Json::String v42; // [rsp+80h] [rbp-130h] BYREF
  void *src; // [rsp+A0h] [rbp-110h] BYREF
  size_t n; // [rsp+A8h] [rbp-108h]
  char v45[16]; // [rsp+B0h] [rbp-100h] BYREF
  void *v46; // [rsp+C0h] [rbp-F0h]
  size_t v47; // [rsp+C8h] [rbp-E8h]
  char v48[16]; // [rsp+D0h] [rbp-E0h] BYREF
  void *v49; // [rsp+E0h] [rbp-D0h]
  size_t v50; // [rsp+E8h] [rbp-C8h]
  char v51[16]; // [rsp+F0h] [rbp-C0h] BYREF
  Json::CommentStyle::Enum cs_0[2]; // [rsp+100h] [rbp-B0h] BYREF
  size_t v53; // [rsp+108h] [rbp-A8h]
  __int64 v54[2]; // [rsp+110h] [rbp-A0h] BYREF
  bool emitUTF8[8]; // [rsp+120h] [rbp-90h] BYREF
  __int64 v56; // [rsp+128h] [rbp-88h]
  __int64 v57[2]; // [rsp+130h] [rbp-80h] BYREF
  unsigned int precision[2]; // [rsp+140h] [rbp-70h] BYREF
  __int64 v59; // [rsp+148h] [rbp-68h]
  __int64 v60[2]; // [rsp+150h] [rbp-60h] BYREF
  std::string precisionType[2]; // [rsp+160h] [rbp-50h] BYREF

  v1 = (Json::Value_0 *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "indentation");
  Json::Value::asString[abi:cxx11](&v40, v1);
  v2 = (Json::Value_0 *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "commentStyle");
  Json::Value::asString[abi:cxx11](&v41, v2);
  v3 = (Json::Value_0 *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "precisionType");
  Json::Value::asString[abi:cxx11](&v42, v3);
  v4 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "enableYAMLCompatibility");
  v5 = Json::Value::asBool(v4);
  v6 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "dropNullPlaceholders");
  v38 = Json::Value::asBool(v6);
  v7 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "useSpecialFloats");
  v37 = Json::Value::asBool(v7);
  v8 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "emitUTF8");
  v36 = Json::Value::asBool(v8);
  v9 = (Json::Value *)Json::Value::operator[]((const Json::Value_0 *const)&this->settings_, "precision");
  v10 = Json::Value::asUInt(v9);
  if ( !(unsigned int)std::string::compare(&v41, off_1A1920A6) )
  {
    useSpecialFloats = All_13;
  }
  else
  {
    if ( (unsigned int)std::string::compare(&v41, "None") )
    {
      std::string::basic_string(precisionType, "commentStyle must be 'All' or 'None'", v11);
      Json::throwRuntimeError(precisionType);
    }
    useSpecialFloats = None_78;
  }
  if ( !(unsigned int)std::string::compare(&v42, "significant") )
  {
    v33 = 0;
  }
  else
  {
    if ( (unsigned int)std::string::compare(&v42, "decimal") )
    {
      std::string::basic_string(precisionType, "precisionType must be 'significant' or 'decimal'", v12);
      Json::throwRuntimeError(precisionType);
    }
    v33 = 1;
  }
  src = v45;
  strcpy(v45, " : ");
  n = 3LL;
  if ( v5 )
  {
    std::string::_M_replace(&src, 0LL, 3LL, ptr, 2LL);
  }
  else
  {
    M_string_length = v40._M_string_length;
    if ( v40._M_string_length )
      goto LABEL_10;
    std::string::_M_replace(&src, 0LL, 3LL, ":", 1LL);
  }
  M_string_length = v40._M_string_length;
LABEL_10:
  strcpy(v48, "null");
  v46 = v48;
  v47 = 4LL;
  if ( v38 )
  {
    v47 = 0LL;
    v48[0] = 0;
  }
  v14 = 17;
  v50 = 0LL;
  if ( v10 <= 0x11 )
    v14 = v10;
  v51[0] = 0;
  *(_QWORD *)cs_0 = v54;
  v34 = v14;
  v49 = v51;
  M_p = v40._M_dataplus._M_p;
  if ( &v40._M_dataplus._M_p[M_string_length] && !v40._M_dataplus._M_p )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  precisionType[0]._M_dataplus._M_p = (std::string::pointer)M_string_length;
  if ( M_string_length > 0xF )
  {
    *(_QWORD *)cs_0 = std::string::_M_create(cs_0, precisionType, 0LL);
    v29 = *(__int64 **)cs_0;
    v54[0] = (__int64)precisionType[0]._M_dataplus._M_p;
    goto LABEL_69;
  }
  if ( M_string_length != 1 )
  {
    if ( !M_string_length )
    {
      v16 = v54;
      goto LABEL_19;
    }
    v29 = v54;
LABEL_69:
    memcpy(v29, M_p, M_string_length);
    M_string_length = (size_t)precisionType[0]._M_dataplus._M_p;
    v16 = *(__int64 **)cs_0;
    goto LABEL_19;
  }
  LOBYTE(v54[0]) = *v40._M_dataplus._M_p;
  v16 = v54;
LABEL_19:
  v53 = M_string_length;
  *((_BYTE *)v16 + M_string_length) = 0;
  v17 = src;
  v18 = n;
  *(_QWORD *)emitUTF8 = v57;
  if ( (char *)src + n && !src )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  precisionType[0]._M_dataplus._M_p = (std::string::pointer)n;
  if ( n > 0xF )
  {
    *(_QWORD *)emitUTF8 = std::string::_M_create(emitUTF8, precisionType, 0LL);
    v28 = *(__int64 **)emitUTF8;
    v57[0] = (__int64)precisionType[0]._M_dataplus._M_p;
    goto LABEL_67;
  }
  if ( n != 1 )
  {
    if ( !n )
    {
      v19 = v57;
      goto LABEL_24;
    }
    v28 = v57;
LABEL_67:
    memcpy(v28, v17, v18);
    v18 = (__int64)precisionType[0]._M_dataplus._M_p;
    v19 = *(__int64 **)emitUTF8;
    goto LABEL_24;
  }
  LOBYTE(v57[0]) = *(_BYTE *)src;
  v19 = v57;
LABEL_24:
  v56 = v18;
  *((_BYTE *)v19 + v18) = 0;
  v20 = v46;
  v21 = v47;
  *(_QWORD *)precision = v60;
  if ( (char *)v46 + v47 && !v46 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  precisionType[0]._M_dataplus._M_p = (std::string::pointer)v47;
  if ( v47 > 0xF )
  {
    *(_QWORD *)precision = std::string::_M_create(precision, precisionType, 0LL);
    v31 = *(__int64 **)precision;
    v60[0] = (__int64)precisionType[0]._M_dataplus._M_p;
    goto LABEL_73;
  }
  if ( v47 != 1 )
  {
    if ( !v47 )
    {
      v22 = v60;
      goto LABEL_29;
    }
    v31 = v60;
LABEL_73:
    memcpy(v31, v20, v21);
    v21 = (__int64)precisionType[0]._M_dataplus._M_p;
    v22 = *(__int64 **)precision;
    goto LABEL_29;
  }
  LOBYTE(v60[0]) = *(_BYTE *)v46;
  v22 = v60;
LABEL_29:
  v59 = v21;
  *((_BYTE *)v22 + v21) = 0;
  v23 = v49;
  v24 = v50;
  precisionType[0]._M_dataplus._M_p = precisionType[0]._anon_0._M_local_buf;
  if ( (char *)v49 + v50 && !v49 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v39 = v50;
  if ( v50 > 0xF )
  {
    precisionType[0]._M_dataplus._M_p = (std::string::pointer)std::string::_M_create(precisionType, &v39, 0LL);
    v30 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)precisionType[0]._M_dataplus._M_p;
    precisionType[0]._anon_0._M_allocated_capacity = v39;
  }
  else
  {
    if ( v50 == 1 )
    {
      precisionType[0]._anon_0._M_local_buf[0] = *(_BYTE *)v49;
      p_anon_0 = &precisionType[0]._anon_0;
      goto LABEL_34;
    }
    if ( !v50 )
    {
      p_anon_0 = &precisionType[0]._anon_0;
      goto LABEL_34;
    }
    v30 = &precisionType[0]._anon_0;
  }
  memcpy(v30, v23, v24);
  v24 = v39;
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)precisionType[0]._M_dataplus._M_p;
LABEL_34:
  precisionType[0]._M_string_length = v24;
  p_anon_0->_M_local_buf[v24] = 0;
  v26 = (Json::BuiltStyledStreamWriter *)operator new(0xE8uLL);
  *(&v32._anon_0._M_allocated_capacity + 1) = v33;
  v32._anon_0._M_allocated_capacity = v34;
  v32._M_string_length = v36;
  v32._M_dataplus._M_p = (std::string::pointer)v37;
  Json::BuiltStyledStreamWriter::BuiltStyledStreamWriter(
    v26,
    (__int64)cs_0,
    useSpecialFloats,
    (__int64)emitUTF8,
    (__int64)precision,
    (__int64)precisionType,
    v32);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)precisionType[0]._M_dataplus._M_p != &precisionType[0]._anon_0 )
    operator delete(precisionType[0]._M_dataplus._M_p);
  if ( *(__int64 **)precision != v60 )
    operator delete(*(void **)precision);
  if ( *(__int64 **)emitUTF8 != v57 )
    operator delete(*(void **)emitUTF8);
  if ( *(__int64 **)cs_0 != v54 )
    operator delete(*(void **)cs_0);
  if ( v49 != v51 )
    operator delete(v49);
  if ( v46 != v48 )
    operator delete(v46);
  if ( src != v45 )
    operator delete(src);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v42._M_dataplus._M_p != &v42._anon_0 )
    operator delete(v42._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v41._M_dataplus._M_p != &v41._anon_0 )
    operator delete(v41._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v40._M_dataplus._M_p != &v40._anon_0 )
    operator delete(v40._M_dataplus._M_p);
  return v26;
};

// Line 1201: range 000000000C73BA94-000000000C73BB73
void __fastcall __noreturn Json::StreamWriterBuilder::newStreamWriter()
{
  void *v0; // rbx
  __int64 v1; // rbp
  void *v2; // r12
  void *v3; // r13
  void *v4; // r14
  struct _Unwind_Exception *v5; // r15
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi

  operator delete(v2, 0xE8uLL);
  v6 = *(void **)(v1 - 80);
  if ( v6 != v4 )
    operator delete(v6);
  v7 = *(void **)(v1 - 112);
  if ( v7 != v3 )
    operator delete(v7);
  v8 = *(void **)(v1 - 144);
  if ( v8 != *(void **)(v1 - 392) )
    operator delete(v8);
  v9 = *(void **)(v1 - 176);
  if ( v9 != v0 )
    operator delete(v9);
  v10 = *(void **)(v1 - 208);
  if ( v10 != *(void **)(v1 - 424) )
    operator delete(v10);
  v11 = *(void **)(v1 - 240);
  if ( v11 != *(void **)(v1 - 416) )
    operator delete(v11);
  v12 = *(void **)(v1 - 272);
  if ( v12 != *(void **)(v1 - 408) )
    operator delete(v12);
  v13 = *(void **)(v1 - 304);
  if ( v13 != (void *)(v1 - 288) )
    operator delete(v13);
  v14 = *(void **)(v1 - 336);
  if ( v14 != (void *)(v1 - 320) )
    operator delete(v14);
  v15 = *(void **)(v1 - 368);
  if ( v15 != (void *)(v1 - 352) )
    operator delete(v15);
  _Unwind_Resume(v5);
};

// Line 1204: range 00000000152EB710-00000000152EBE24
__int64 __fastcall Json::StreamWriterBuilder::validate(Json::StreamWriterBuilder *this, Json::Value_0 *a2)
{
  Json::ValueIteratorBase *v2; // rbp
  Json::Value_0::const_iterator v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // r12d
  __int64 v6; // rbp
  std::string::pointer M_p; // r12
  __int64 v8; // r14
  std::string::size_type v9; // rbx
  std::string::size_type v10; // r15
  size_t v11; // rdx
  signed __int64 v12; // rax
  __int64 v13; // r9
  Json::String *v14; // r14
  std::string::size_type v15; // r15
  size_t v16; // rbx
  size_t v17; // rdx
  int v18; // eax
  const Json::Value *v19; // r12
  Json::Value *v20; // rax
  std::string::pointer v21; // rdi
  unsigned int v22; // eax
  __int64 v24; // rax
  __m128i si128; // xmm0
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *v29; // r15
  Json::String *p_other; // rbx
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  std::_Rb_tree_node_base *v32; // rcx
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // r12
  std::_Rb_tree_node_base *v36; // r14
  __int64 v37; // rax
  Json::String *v38; // rbx
  Json::String *v39; // rax
  std::string::size_type M_string_length; // r12
  std::_Rb_tree_node_base::_Base_ptr v41; // r14
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rdx
  unsigned int v43; // eax
  __int64 v44; // r12
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::const_iterator __position; // [rsp+0h] [rbp-178h]
  std::_Rb_tree_node_base *__positiona; // [rsp+0h] [rbp-178h]
  unsigned __int8 v47; // [rsp+8h] [rbp-170h]
  std::_Rb_tree_node_base *second; // [rsp+8h] [rbp-170h]
  Json::ValueIteratorBase *v50; // [rsp+10h] [rbp-168h]
  Json::Value_0 *p_settings; // [rsp+18h] [rbp-160h]
  _BOOL4 v52; // [rsp+18h] [rbp-160h]
  std::string::pointer src; // [rsp+20h] [rbp-158h]
  Json::ValueIteratorBase v54; // [rsp+30h] [rbp-148h] BYREF
  Json::String other; // [rsp+40h] [rbp-138h] BYREF
  char *v56; // [rsp+60h] [rbp-118h]
  __int64 v57; // [rsp+68h] [rbp-110h]
  char v58[16]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v59[2]; // [rsp+80h] [rbp-F8h] BYREF
  std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr M_node; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v61[2]; // [rsp+A0h] [rbp-D8h] BYREF
  std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr v62; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v63[2]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v64[4]; // [rsp+D0h] [rbp-A8h] BYREF
  char v65[16]; // [rsp+F0h] [rbp-88h] BYREF
  char *v66; // [rsp+100h] [rbp-78h]
  __int64 v67; // [rsp+108h] [rbp-70h]
  char v68[16]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v69[2]; // [rsp+120h] [rbp-58h] BYREF
  char v70[16]; // [rsp+130h] [rbp-48h] BYREF
  char v71; // [rsp+140h] [rbp-38h] BYREF

  if ( (_BYTE)`guard variable for'Json::StreamWriterBuilder::validate(Json::Value *)::valid_keys )
  {
    v2 = &v54;
    goto LABEL_3;
  }
  v2 = &v54;
  if ( __cxa_guard_acquire(&`guard variable for'Json::StreamWriterBuilder::validate(Json::Value *)::valid_keys) )
  {
    other._M_dataplus._M_p = other._anon_0._M_local_buf;
    strcpy(other._anon_0._M_local_buf, "indentation");
    v56 = v58;
    strcpy(v58, "commentStyle");
    other._M_string_length = 11LL;
    v57 = 12LL;
    v59[0] = (__int64)&M_node;
    v54.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)23;
    v24 = std::string::_M_create(v59, &v54, 0LL);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B234D10);
    v59[0] = v24;
    M_node = v54.current_._M_node;
    *(_DWORD *)(v24 + 16) = 1818845801;
    *(_WORD *)(v24 + 20) = 29801;
    *(_BYTE *)(v24 + 22) = 121;
    *(__m128i *)v24 = si128;
    v59[1] = (__int64)v54.current_._M_node;
    *((_BYTE *)&v54.current_._M_node->_M_color + v59[0]) = 0;
    v61[0] = (__int64)&v62;
    v54.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)20;
    v26 = std::string::_M_create(v61, &v54, 0LL);
    v27 = _mm_load_si128((const __m128i *)&xmmword_1B234D20);
    v61[0] = v26;
    v62 = v54.current_._M_node;
    *(_DWORD *)(v26 + 16) = 1936876900;
    *(__m128i *)v26 = v27;
    v61[1] = (__int64)v54.current_._M_node;
    *((_BYTE *)&v54.current_._M_node->_M_color + v61[0]) = 0;
    v63[0] = (__int64)v64;
    v54.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)16;
    v63[0] = std::string::_M_create(v63, &v54, 0LL);
    v64[0] = (__int64)v54.current_._M_node;
    *(__m128i *)v63[0] = _mm_load_si128((const __m128i *)&xmmword_1B234D30);
    v63[1] = (__int64)v54.current_._M_node;
    *((_BYTE *)&v54.current_._M_node->_M_color + v63[0]) = 0;
    v64[2] = (__int64)v65;
    strcpy(v65, "emitUTF8");
    v66 = v68;
    v64[3] = 8LL;
    strcpy(v68, "precision");
    v67 = 9LL;
    v69[0] = (__int64)v70;
    strcpy(v70, "precisionType");
    v69[1] = 13LL;
    v28 = operator new(0x30uLL);
    *(_DWORD *)(v28 + 8) = 0;
    v29 = (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *)v28;
    v28 += 8LL;
    *(_QWORD *)(v28 + 8) = 0LL;
    p_other = &other;
    __positiona = (std::_Rb_tree_node_base *)v28;
    v29->_M_impl._M_header._M_left = (std::_Rb_tree_node_base::_Base_ptr)v28;
    v29->_M_impl._M_header._M_right = (std::_Rb_tree_node_base::_Base_ptr)v28;
    v29->_M_impl._M_node_count = 0LL;
    while ( 1 )
    {
      insert_hint_unique_pos = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_get_insert_hint_unique_pos(
                                 v29,
                                 (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::const_iterator)__positiona,
                                 p_other);
      second = insert_hint_unique_pos.second;
      v32 = insert_hint_unique_pos.second;
      if ( !insert_hint_unique_pos.second )
        goto LABEL_38;
      LOBYTE(v52) = __positiona == insert_hint_unique_pos.second || insert_hint_unique_pos.first != 0LL;
      if ( !v52 )
      {
        M_string_length = p_other->_M_string_length;
        M_parent = insert_hint_unique_pos.second[1]._M_parent;
        v41 = M_parent;
        if ( M_string_length <= (unsigned __int64)M_parent )
          M_parent = (std::_Rb_tree_node_base::_Base_ptr)p_other->_M_string_length;
        if ( M_parent )
        {
          v43 = memcmp(p_other->_M_dataplus._M_p, *(const void **)&v32[1]._M_color, (size_t)M_parent);
          if ( v43 )
            goto LABEL_64;
        }
        v44 = M_string_length - (_QWORD)v41;
        if ( v44 < 0x80000000LL )
          break;
      }
LABEL_41:
      v33 = operator new(0x40uLL);
      v34 = (void *)(v33 + 48);
      v35 = v33;
      v36 = (std::_Rb_tree_node_base *)p_other->_M_string_length;
      *(_QWORD *)(v33 + 32) = v33 + 48;
      src = p_other->_M_dataplus._M_p;
      if ( (std::_Rb_tree_node_base *)((char *)v36 + (unsigned __int64)p_other->_M_dataplus._M_p) && !src )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v54.current_._M_node = v36;
      if ( (unsigned __int64)v36 > 0xF )
      {
        v37 = std::string::_M_create(v33 + 32, &v54, 0LL);
        *(_QWORD *)(v35 + 32) = v37;
        v34 = (void *)v37;
        *(_QWORD *)(v35 + 48) = v54.current_._M_node;
LABEL_50:
        memcpy(v34, src, (size_t)v36);
        v36 = v54.current_._M_node;
        v34 = *(void **)(v35 + 32);
        goto LABEL_37;
      }
      if ( v36 == (std::_Rb_tree_node_base *)1 )
      {
        *(_BYTE *)(v33 + 48) = *src;
      }
      else if ( v36 )
      {
        goto LABEL_50;
      }
LABEL_37:
      *(_QWORD *)(v35 + 40) = v36;
      *((_BYTE *)&v36->_M_color + (_QWORD)v34) = 0;
      std::_Rb_tree_insert_and_rebalance(v52, (std::_Rb_tree_node_base *)v35, second, __positiona);
      ++v29->_M_impl._M_node_count;
LABEL_38:
      if ( ++p_other == (Json::String *)&v71 )
      {
        Json::StreamWriterBuilder::validate(Json::Value *)const::valid_keys = (__int64)v29;
        v38 = (Json::String *)v69;
        __cxa_guard_release(&`guard variable for'Json::StreamWriterBuilder::validate(Json::Value *)::valid_keys);
        while ( 1 )
        {
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v38->_M_dataplus._M_p == &v38->_anon_0 )
          {
            v39 = v38 - 1;
            if ( &other == v38 )
              goto LABEL_3;
          }
          else
          {
            operator delete(v38->_M_dataplus._M_p);
            v39 = v38 - 1;
            if ( &other == v38 )
              goto LABEL_3;
          }
          v38 = v39;
        }
      }
    }
    if ( v44 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
    {
      LOBYTE(v52) = 1;
      goto LABEL_41;
    }
    v43 = v44;
LABEL_64:
    v52 = v43 >> 31;
    goto LABEL_41;
  }
LABEL_3:
  p_settings = (Json::Value_0 *)&this->settings_;
  v54 = Json::Value::begin((const Json::Value_0 *const)&this->settings_).Json::ValueIteratorBase;
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
        LOBYTE(v22) = Json::Value::empty(a2);
        return v22;
      }
      return v5;
    }
    Json::ValueIteratorBase::name[abi:cxx11](&other, v2);
    if ( !*(_QWORD *)(Json::StreamWriterBuilder::validate(Json::Value *)const::valid_keys + 16) )
      goto LABEL_25;
    v47 = v5;
    v50 = v2;
    v6 = Json::StreamWriterBuilder::validate(Json::Value *)const::valid_keys + 8;
    M_p = other._M_dataplus._M_p;
    __position._M_node = (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)(Json::StreamWriterBuilder::validate(Json::Value *)const::valid_keys
                                                                               + 8);
    v8 = *(_QWORD *)(Json::StreamWriterBuilder::validate(Json::Value *)const::valid_keys + 16);
    v9 = other._M_string_length;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v8 + 40);
        v11 = v9;
        if ( v10 <= v9 )
          v11 = *(_QWORD *)(v8 + 40);
        if ( v11 )
        {
          LODWORD(v12) = memcmp(*(const void **)(v8 + 32), M_p, v11);
          if ( (_DWORD)v12 )
            goto LABEL_14;
        }
        v12 = v10 - v9;
        if ( (__int64)(v10 - v9) >= 0x80000000LL )
          break;
        if ( v12 > (__int64)0xFFFFFFFF7FFFFFFFLL )
        {
LABEL_14:
          if ( (int)v12 >= 0 )
            break;
        }
        v8 = *(_QWORD *)(v8 + 24);
        if ( !v8 )
          goto LABEL_16;
      }
      v6 = v8;
      v8 = *(_QWORD *)(v8 + 16);
    }
    while ( v8 );
LABEL_16:
    v13 = v6;
    v14 = (Json::String *)M_p;
    v2 = v50;
    v5 = v47;
    v15 = v9;
    if ( __position._M_node == (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)v13 )
      goto LABEL_25;
    v16 = *(_QWORD *)(v13 + 40);
    v17 = v16;
    if ( v15 <= v16 )
      v17 = v15;
    if ( v17 )
    {
      v18 = memcmp(v14, *(const void **)(v13 + 32), v17);
      if ( v18 )
      {
LABEL_24:
        if ( v18 < 0 )
          goto LABEL_25;
LABEL_29:
        v21 = (std::string::pointer)v14;
        if ( v14 != (Json::String *)&other._anon_0 )
LABEL_27:
          operator delete(v21);
LABEL_28:
        Json::ValueIteratorBase::increment(v2);
        continue;
      }
    }
    break;
  }
  if ( (__int64)(v15 - v16) >= 0x80000000LL )
    goto LABEL_29;
  if ( (__int64)(v15 - v16) > (__int64)0xFFFFFFFF7FFFFFFFLL )
  {
    v18 = v15 - v16;
    goto LABEL_24;
  }
LABEL_25:
  if ( a2 )
  {
    v19 = (const Json::Value *)Json::ValueIteratorBase::deref(v2);
    v20 = (Json::Value *)Json::Value::operator[](a2, &other);
    Json::Value::operator=(v20, v19);
    v21 = other._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other._M_dataplus._M_p != &other._anon_0 )
      goto LABEL_27;
    goto LABEL_28;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other._M_dataplus._M_p != &other._anon_0 )
    operator delete(other._M_dataplus._M_p);
  return v5;
};

// Line 1228: range 00000000152E8270-00000000152E8274
Json::Value *__fastcall Json::StreamWriterBuilder::operator[](
        Json::StreamWriterBuilder *const this,
        const Json::String *key)
{
  return (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)&this->settings_, key);
};

// Line 1231: range 00000000152E8280-00000000152E8442
void __fastcall Json::StreamWriterBuilder::setDefaults(Json::StreamWriterBuilder *this, Json::Value *a2)
{
  Json::Value_0 *v2; // rax
  Json::Value_0 *v3; // rax
  Json::Value_0 *v4; // rax
  Json::Value_0 *v5; // rax
  Json::Value_0 *v6; // rax
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  Json::Value_0 *v9; // rax
  _BYTE savedregs[72]; // [rsp+0h] [rbp+0h] BYREF

  Json::Value::Value((Json::Value *)savedregs, off_1A1920A6);
  v2 = Json::Value::operator[]((Json::Value_0 *const)this, "commentStyle");
  Json::Value::operator=(v2, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, "\t");
  v3 = Json::Value::operator[]((Json::Value_0 *const)this, "indentation");
  Json::Value::operator=(v3, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v4 = Json::Value::operator[]((Json::Value_0 *const)this, "enableYAMLCompatibility");
  Json::Value::operator=(v4, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v5 = Json::Value::operator[]((Json::Value_0 *const)this, "dropNullPlaceholders");
  Json::Value::operator=(v5, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v6 = Json::Value::operator[]((Json::Value_0 *const)this, "useSpecialFloats");
  Json::Value::operator=(v6, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 0);
  v7 = Json::Value::operator[]((Json::Value_0 *const)this, "emitUTF8");
  Json::Value::operator=(v7, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, 17);
  v8 = Json::Value::operator[]((Json::Value_0 *const)this, "precision");
  Json::Value::operator=(v8, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  Json::Value::Value((Json::Value *)savedregs, "significant");
  v9 = Json::Value::operator[]((Json::Value_0 *const)this, "precisionType");
  Json::Value::operator=(v9, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
};

// Line 1233: range 000000000C73BB88-000000000C73BB93
void __fastcall __noreturn Json::StreamWriterBuilder::setDefaults()
{
  Json::Value_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::~Value(v0);
  _Unwind_Resume(v1);
};

// Line 1244: range 00000000152EA8E0-00000000152EAC40
__int64 __fastcall Json::writeString[abi:cxx11](__int64 a1, __int64 a2, Json::Value_0 *a3)
{
  _QWORD *v5; // rbx
  void *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  int (__fastcall *v10)(Json::BuiltStyledStreamWriter *const, const Json::Value *, Json::OStream *); // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void *v16; // [rsp+8h] [rbp-1E0h]
  int v17[4]; // [rsp+10h] [rbp-1D8h] BYREF
  int v18[2]; // [rsp+20h] [rbp-1C8h]
  int v19[2]; // [rsp+28h] [rbp-1C0h] BYREF
  void *v20[2]; // [rsp+30h] [rbp-1B8h] BYREF
  int v21[4]; // [rsp+40h] [rbp-1A8h]
  __int128 v22; // [rsp+50h] [rbp-198h]
  __int128 v23; // [rsp+60h] [rbp-188h]
  std::locale v24; // [rsp+70h] [rbp-178h] BYREF
  int v25; // [rsp+78h] [rbp-170h]
  void *v26[2]; // [rsp+80h] [rbp-168h] BYREF
  _BYTE v27[16]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v28[28]; // [rsp+A0h] [rbp-148h] BYREF
  __int16 v29; // [rsp+180h] [rbp-68h]
  __int128 v30; // [rsp+188h] [rbp-60h]
  __int128 v31; // [rsp+198h] [rbp-50h]

  *(_QWORD *)v17 = v20;
  std::ios_base::ios_base((std::ios_base *)v28);
  v30 = 0LL;
  v31 = 0LL;
  v28[0] = (__int64)&`vtable for'std::ios + 16;
  v29 = 0;
  v28[27] = 0LL;
  v5 = (_QWORD *)*((_QWORD *)&edata + 1);
  v6 = (void *)*((_QWORD *)&edata + 2);
  v7 = *(v5 - 3);
  v20[0] = v5;
  v16 = v6;
  v8 = (void **)((char *)v20 + v7);
  *v8 = v6;
  std::ios::init(v8, 0LL);
  v28[0] = (__int64)&`vtable for'std::ostringstream + 64;
  *(_QWORD *)v19 = (char *)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v20 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  *(_OWORD *)v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  std::locale::locale(&v24);
  v25 = 16;
  v27[0] = 0;
  v20[1] = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)v18 = v27;
  v26[0] = v27;
  v26[1] = 0LL;
  std::ios::init(v28, &v20[1]);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  v10 = *(int (__fastcall **)(Json::BuiltStyledStreamWriter *const, const Json::Value *, Json::OStream *))(*(_QWORD *)v9 + 16LL);
  if ( v10 == Json::BuiltStyledStreamWriter::write )
  {
    v11 = *(_QWORD *)v17;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)(v9 + 8) = v11;
    *(_BYTE *)(v9 + 216) = *(_BYTE *)(v9 + 216) & 0xFC | 2;
    **(_BYTE **)(v9 + 40) = 0;
    Json::BuiltStyledStreamWriter::writeCommentBeforeValue((Json::BuiltStyledStreamWriter *)v9, a3);
    if ( (*(_BYTE *)(v9 + 216) & 2) == 0 )
      Json::BuiltStyledStreamWriter::writeIndent((Json::BuiltStyledStreamWriter *const)v9);
    *(_BYTE *)(v9 + 216) |= 2u;
    Json::BuiltStyledStreamWriter::writeValue((Json::BuiltStyledStreamWriter *)v9, a3, 0.0);
    Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine((Json::BuiltStyledStreamWriter *)v9, a3);
    std::__ostream_insert<char,std::char_traits<char>>(
      *(_QWORD *)(v9 + 8),
      *(_QWORD *)(v9 + 184),
      *(_QWORD *)(v9 + 192));
    *(_QWORD *)(v9 + 8) = 0LL;
  }
  else
  {
    v10((Json::BuiltStyledStreamWriter *const)v9, (const Json::Value *)a3, *(Json::OStream **)v17);
  }
  v12 = v23;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  if ( v12 )
  {
    if ( v12 > (unsigned __int64)v22 )
      std::string::_M_replace(a1, 0LL, 0LL, *((const char **)&v22 + 1), v12 - *((_QWORD *)&v22 + 1));
    else
      std::string::_M_replace(a1, 0LL, 0LL, *((const char **)&v22 + 1), (_QWORD)v22 - *((_QWORD *)&v22 + 1));
  }
  else
  {
    std::string::_M_assign(a1, v26);
  }
  v13 = *(_QWORD *)v9;
  *(__m128i *)v17 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)v19),
                      (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  (*(void (__fastcall **)(__int64))(v13 + 8))(v9);
  *(__m128i *)v20 = _mm_load_si128((const __m128i *)v17);
  v28[0] = (__int64)&`vtable for'std::ostringstream + 64;
  if ( v26[0] != *(void **)v18 )
    operator delete(v26[0]);
  v20[1] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v24);
  v14 = *(v5 - 3);
  v20[0] = v5;
  *(void **)((char *)v20 + v14) = v16;
  v28[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v28);
  return a1;
};

// Line 1251: range 00000000152EA7D0-00000000152EA8D0
Json::OStream *__fastcall Json::operator<<(Json::OStream *a1, Json::Value_0 *a2, double a3)
{
  Json::BuiltStyledStreamWriter *v3; // rbp
  int (__fastcall *v4)(Json::BuiltStyledStreamWriter *const, const Json::Value *, Json::OStream *); // rax
  char v5; // al
  Json::StreamWriterBuilder v7; // [rsp+0h] [rbp-58h] BYREF

  Json::StreamWriterBuilder::StreamWriterBuilder(&v7);
  v3 = Json::StreamWriterBuilder::newStreamWriter(&v7);
  v4 = (int (__fastcall *)(Json::BuiltStyledStreamWriter *const, const Json::Value *, Json::OStream *))*((_QWORD *)v3->_vptr_StreamWriter + 2);
  if ( v4 == Json::BuiltStyledStreamWriter::write )
  {
    v5 = *((_BYTE *)v3 + 216);
    v3->sout_ = a1;
    v3->indentString_._M_string_length = 0LL;
    *((_BYTE *)v3 + 216) = v5 & 0xFC | 2;
    *v3->indentString_._M_dataplus._M_p = 0;
    Json::BuiltStyledStreamWriter::writeCommentBeforeValue(v3, a2);
    if ( (*((_BYTE *)v3 + 216) & 2) == 0 )
      Json::BuiltStyledStreamWriter::writeIndent(v3);
    *((_BYTE *)v3 + 216) |= 2u;
    Json::BuiltStyledStreamWriter::writeValue(v3, a2, a3);
    Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine(v3, a2);
    std::__ostream_insert<char,std::char_traits<char>>(
      v3->sout_,
      v3->endingLineFeedSymbol_._M_dataplus._M_p,
      v3->endingLineFeedSymbol_._M_string_length);
    v3->sout_ = 0LL;
  }
  else
  {
    v4(v3, (const Json::Value *)a2, a1);
  }
  (*((void (__fastcall **)(Json::BuiltStyledStreamWriter *))v3->_vptr_StreamWriter + 1))(v3);
  Json::StreamWriterBuilder::~StreamWriterBuilder(&v7);
  return a1;
};

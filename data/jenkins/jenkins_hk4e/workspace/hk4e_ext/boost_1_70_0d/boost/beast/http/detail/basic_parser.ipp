// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/detail/basic_parser.ipp

// Line 38: range 000000000C720DD4-000000000C720E49
const char *__cdecl boost::beast::http::detail::basic_parser_base::trim_back(const char *it, const char *first)
{
  const char *v2; // rcx

  while ( it != first )
  {
    v2 = it - 1;
    if ( *(_BYTE *)(((unsigned __int64)(it - 1) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)it - 1) & 7) >= *(_BYTE *)(((unsigned __int64)(it - 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(it - 1);
    }
    if ( *v2 != 32 && *v2 != 9 )
      break;
    --it;
  }
  return it;
};

// Line 52: range 000000000C720E4A-000000000C720EAB
bool __cdecl boost::beast::http::detail::basic_parser_base::is_pathchar(char c)
{
  int v1; // ecx
  char v2; // dl

  v1 = (unsigned __int8)c;
  v2 = *(_BYTE *)(((unsigned __int64)&boost::beast::http::detail::basic_parser_base::is_pathchar(char)::tab[(unsigned __int8)c] >> 3)
                + 0x7FFF8000);
  if ( v2 != 0 && ((unsigned __int8)&boost::beast::http::detail::basic_parser_base::is_pathchar(char)::tab[c] & 7) >= v2 )
    __asan_report_load1(&boost::beast::http::detail::basic_parser_base::is_pathchar(char)::tab[(unsigned __int8)c]);
  return boost::beast::http::detail::basic_parser_base::is_pathchar(char)::tab[v1];
};

// Line 80: range 000000000C720EAC-000000000C720F5A
bool __cdecl boost::beast::http::detail::basic_parser_base::unhex(unsigned __int8 *d, char c)
{
  int v2; // ecx
  unsigned __int64 v3; // rax
  unsigned __int8 v4; // si

  v2 = (unsigned __int8)c;
  v3 = (unsigned __int64)&boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[(unsigned __int8)c];
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && (char)(v3 & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v3);
  v4 = boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[v2];
  if ( *(_BYTE *)(((unsigned __int64)d >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)d & 7) >= *(_BYTE *)(((unsigned __int64)d >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(d);
  }
  *d = v4;
  return *d != 0xFF;
};

// Line 114: range 000000000C720F5C-000000000C7210EA
std::pair<char const*,bool> __fastcall boost::beast::http::detail::basic_parser_base::find_fast(
        const char *buf,
        const char *buf_end,
        const char *ranges,
        size_t ranges_size)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  std::pair<char const*,bool> v9; // [rsp+20h] [rbp-F0h] BYREF
  char v10[224]; // [rsp+30h] [rbp-E0h] BYREF
  std::pair<char const*,bool> result; // 0:rax.9

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 1 9 found:115 64 8 7 buf:110 96 8 11 buf_end:111 128 8 10 ranges:112 160 8 15 ranges_size:113";
  *(_QWORD *)(v4 + 16) = boost::beast::http::detail::basic_parser_base::find_fast;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_QWORD *)(v4 + 64) = buf;
  *(_QWORD *)(v4 + 96) = buf_end;
  *(_QWORD *)(v4 + 128) = ranges;
  *(_QWORD *)(v4 + 160) = ranges_size;
  *(_BYTE *)(v4 + 48) = 0;
  std::pair<char const*,bool>::pair<char const*&,bool &,true>(&v9, (const char **)(v4 + 64), (bool *)(v4 + 48));
  result.first = v9.first;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 126: range 000000000C721138-000000000C7212F1
const char *__cdecl boost::beast::http::detail::basic_parser_base::find_eol(
        const char *it,
        const char *last,
        boost::beast::error_code *ec)
{
  const boost::system::error_category *cat; // rdx
  const boost::system::error_category *v5; // rdx
  __int64 v6; // rsi
  const boost::system::error_category *v7; // rdx
  const char *lasta; // [rsp+10h] [rbp-20h]
  const char *itb; // [rsp+18h] [rbp-18h]
  boost::system::error_code v12; // [rsp+20h] [rbp-10h] BYREF

  lasta = last;
  while ( 1 )
  {
    if ( it == lasta )
    {
      boost::system::error_code::error_code(&v12);
      if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        __asan_report_store16(ec, last);
      cat = v12.cat_;
      *(_QWORD *)&ec->val_ = *(_QWORD *)&v12.val_;
      ec->cat_ = cat;
      return 0LL;
    }
    last = (const char *)((unsigned __int8)it & 7);
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) != 0
      && (char)last >= *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(it);
    }
    if ( *it == 13 )
      break;
    ++it;
  }
  itb = it + 1;
  if ( itb == lasta )
  {
    boost::system::error_code::error_code(&v12);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_store16(ec, last);
    v5 = v12.cat_;
    *(_QWORD *)&ec->val_ = *(_QWORD *)&v12.val_;
    ec->cat_ = v5;
    return 0LL;
  }
  else
  {
    v6 = (unsigned __int8)itb & 7;
    if ( *(_BYTE *)(((unsigned __int64)itb >> 3) + 0x7FFF8000) != 0
      && (char)v6 >= *(_BYTE *)(((unsigned __int64)itb >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(itb);
    }
    if ( *itb == 10 )
    {
      boost::system::error_code::error_code(&v12);
      if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        __asan_report_store16(ec, v6);
      v7 = v12.cat_;
      *(_QWORD *)&ec->val_ = *(_QWORD *)&v12.val_;
      ec->cat_ = v7;
      return itb + 1;
    }
    else
    {
      boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_line_ending);
      return 0LL;
    }
  }
};

// Line 158: range 000000000C7212F2-000000000C721471
bool __cdecl boost::beast::http::detail::basic_parser_base::parse_dec(const char *it, const char *last, uint64_t *v)
{
  char *ita; // [rsp+18h] [rbp-18h]
  unsigned __int64 tmp; // [rsp+20h] [rbp-10h]
  uint64_t tmpa; // [rsp+20h] [rbp-10h]
  uint64_t d; // [rsp+28h] [rbp-8h]

  ita = (char *)it;
  if ( it == last )
    return 0;
  tmp = 0LL;
  do
  {
    if ( *(_BYTE *)(((unsigned __int64)ita >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)ita & 7) >= *(_BYTE *)(((unsigned __int64)ita >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(ita);
    }
    if ( !boost::beast::http::detail::basic_parser_base::is_digit(*ita)
      || tmp > std::numeric_limits<unsigned long>::max() / 0xA )
    {
      return 0;
    }
    tmpa = 10 * tmp;
    if ( *(_BYTE *)(((unsigned __int64)ita >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)ita & 7) >= *(_BYTE *)(((unsigned __int64)ita >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(ita);
    }
    d = *ita - 48;
    if ( d > std::numeric_limits<unsigned long>::max() - tmpa )
      return 0;
    tmp = d + tmpa;
    ++ita;
  }
  while ( ita != last );
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v = tmp;
  return 1;
};

// Line 181: range 000000000C721472-000000000C7216C5
bool __cdecl boost::beast::http::detail::basic_parser_base::parse_hex(const char **it, uint64_t *v)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char *v5; // rdx
  __int64 v6; // rsi
  bool result; // al
  char *v8; // rdx
  unsigned __int64 tmp; // [rsp+18h] [rbp-68h]
  uint64_t tmpa; // [rsp+18h] [rbp-68h]
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 5 d:182";
  *(_QWORD *)(v2 + 16) = boost::beast::http::detail::basic_parser_base::parse_hex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, v);
  v5 = (char *)*it;
  if ( *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000) != 0
    && (*(_BYTE *)it & 7) >= *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(*it);
  }
  v6 = (unsigned int)*v5;
  if ( !boost::beast::http::detail::basic_parser_base::unhex((unsigned __int8 *)(v2 + 32), *v5) )
  {
    result = 0;
  }
  else
  {
    tmp = 0LL;
    do
    {
      if ( tmp > std::numeric_limits<unsigned long>::max() >> 4 )
      {
        result = 0;
        goto LABEL_23;
      }
      tmpa = 16 * tmp;
      if ( std::numeric_limits<unsigned long>::max() - tmpa < *(unsigned __int8 *)(v2 + 32) )
      {
        result = 0;
        goto LABEL_23;
      }
      tmp = *(unsigned __int8 *)(v2 + 32) + tmpa;
      if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
        __asan_report_load8(it, v6);
      v8 = (char *)++*it;
      if ( *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000) != 0
        && (*(_BYTE *)it & 7) >= *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(*it);
      }
      v6 = (unsigned int)*v8;
    }
    while ( boost::beast::http::detail::basic_parser_base::unhex((unsigned __int8 *)(v2 + 32), *v8) );
    if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v = tmp;
    result = 1;
  }
LABEL_23:
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 203: range 000000000C7216C6-000000000C721874
const char *__cdecl boost::beast::http::detail::basic_parser_base::find_eom(const char *p, const char *last)
{
  const char *v3; // rcx
  const char *v4; // rcx
  const char *v5; // rcx
  const char *v6; // rcx

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( last < p + 4 )
            return 0LL;
          v3 = p + 3;
          if ( *(_BYTE *)(((unsigned __int64)(p + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)p + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(p + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p + 3);
          }
          if ( *v3 == 10 )
            break;
          v4 = p + 3;
          if ( *(_BYTE *)(((unsigned __int64)(p + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)p + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(p + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p + 3);
          }
          if ( *v4 == 13 )
            ++p;
          else
            p += 4;
        }
        v5 = p + 2;
        if ( *(_BYTE *)(((unsigned __int64)(p + 2) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(p + 2) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p + 2);
        }
        if ( *v5 == 13 )
          break;
        p += 4;
      }
      v6 = p + 1;
      if ( *(_BYTE *)(((unsigned __int64)(p + 1) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(p + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p + 1);
      }
      if ( *v6 == 10 )
        break;
      p += 2;
    }
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p & 7) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p);
    }
    if ( *p == 13 )
      break;
    p += 2;
  }
  return p + 4;
};

// Line 243: range 000000000C721876-000000000C721AD3
const char *__cdecl boost::beast::http::detail::basic_parser_base::parse_token_to_eol(
        const char *p,
        const char *last,
        const char **token_last,
        boost::beast::error_code *ec)
{
  const char *v5; // rax
  const char *v6; // rcx
  const char *pb; // [rsp+18h] [rbp-8h]
  const char *pc; // [rsp+18h] [rbp-8h]

  while ( 1 )
  {
    if ( p >= last )
    {
      boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
      return p;
    }
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p & 7) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p);
    }
    if ( !boost::beast::http::detail::basic_parser_base::is_print(*p) )
    {
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p & 7) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p);
      }
      if ( *p <= 0x1Fu && *p != 9 )
        break;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p & 7) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p);
      }
      if ( *p == 127 )
        break;
    }
    ++p;
  }
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p & 7) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p);
  }
  if ( *p != 13 )
    return 0LL;
  pb = p + 1;
  if ( pb < last )
  {
    v5 = pb;
    pc = pb + 1;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v5);
    }
    if ( *v5 == 10 )
    {
      v6 = pc - 2;
      if ( *(_BYTE *)(((unsigned __int64)token_last >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *token_last = v6;
      return pc;
    }
    else
    {
      boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_line_ending);
      return last;
    }
  }
  else
  {
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
    return last;
  }
};

// Line 293: range 000000000C721AD4-000000000C721BC9
bool __cdecl boost::beast::http::detail::basic_parser_base::parse_crlf(const char **it)
{
  __int64 v1; // rsi
  const char *v2; // rdx
  unsigned __int64 v3; // rcx
  char v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, v1);
  v2 = *it;
  if ( *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000) != 0
    && (*(_BYTE *)it & 7) >= *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(*it);
  }
  if ( *v2 != 13 )
    return 0;
  v3 = (unsigned __int64)(*it + 1);
  v4 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v4 != 0;
  if ( v4 != 0 && ((*(_BYTE *)it + 1) & 7) >= v4 )
    __asan_report_load1(*it + 1);
  if ( *(_BYTE *)v3 != 10 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, v1);
  *it += 2;
  return 1;
};

// Line 305: range 000000000C721BCA-000000000C721E73
void __cdecl boost::beast::http::detail::basic_parser_base::parse_method(
        const char **it,
        const char *last,
        boost::beast::string_view *result,
        boost::beast::error_code *ec)
{
  char *v4; // rdx
  char v5; // cl
  const char *v6; // rdx
  char v7; // cl
  const char *v8; // rax
  const char *lasta; // [rsp+10h] [rbp-20h]
  const char *first; // [rsp+28h] [rbp-8h]

  lasta = last;
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  first = *it;
  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    if ( lasta < *it + 1 )
      goto LABEL_7;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v4 = (char *)*it;
    v5 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
    LOBYTE(last) = v5 != 0;
    if ( v5 != 0 && (*(_BYTE *)it & 7) >= v5 )
      __asan_report_load1(*it);
    if ( !boost::beast::http::detail::is_token_char(*v4) )
      break;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    ++*it;
  }
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  if ( lasta < *it + 1 )
  {
LABEL_7:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  v6 = *it;
  v7 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
  LOBYTE(last) = v7 != 0;
  if ( v7 != 0 && (*(_BYTE *)it & 7) >= v7 )
    __asan_report_load1(*it);
  if ( *v6 != 32 )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  if ( first == *it )
  {
LABEL_24:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_method);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v8 = (*it)++;
    if ( *(_WORD *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
      v8 = (const char *)__asan_report_store16(result, last);
    *result = boost::beast::http::detail::basic_parser_base::make_string(first, v8);
  }
};

// Line 342: range 000000000C721E74-000000000C72211B
void __cdecl boost::beast::http::detail::basic_parser_base::parse_target(
        const char **it,
        const char *last,
        boost::beast::string_view *result,
        boost::beast::error_code *ec)
{
  char *v4; // rdx
  char v5; // cl
  const char *v6; // rdx
  char v7; // cl
  const char *v8; // rax
  const char *lasta; // [rsp+10h] [rbp-20h]
  const char *first; // [rsp+28h] [rbp-8h]

  lasta = last;
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  first = *it;
  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    if ( lasta < *it + 1 )
      goto LABEL_7;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v4 = (char *)*it;
    v5 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
    LOBYTE(last) = v5 != 0;
    if ( v5 != 0 && (*(_BYTE *)it & 7) >= v5 )
      __asan_report_load1(*it);
    if ( !boost::beast::http::detail::basic_parser_base::is_pathchar(*v4) )
      break;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    ++*it;
  }
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  if ( lasta < *it + 1 )
  {
LABEL_7:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  v6 = *it;
  v7 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
  LOBYTE(last) = v7 != 0;
  if ( v7 != 0 && (*(_BYTE *)it & 7) >= v7 )
    __asan_report_load1(*it);
  if ( *v6 != 32 )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  if ( first == *it )
  {
LABEL_24:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_target);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v8 = (*it)++;
    if ( *(_WORD *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
      v8 = (const char *)__asan_report_store16(result, last);
    *result = boost::beast::http::detail::basic_parser_base::make_string(first, v8);
  }
};

// Line 379: range 000000000C72211C-000000000C72270D
void __cdecl boost::beast::http::detail::basic_parser_base::parse_version(
        const char **it,
        const char *last,
        int *result,
        boost::beast::error_code *ec)
{
  unsigned __int64 v4; // rax
  char v5; // cl
  unsigned __int64 v6; // rax
  char v7; // cl
  unsigned __int64 v8; // rax
  char v9; // cl
  unsigned __int64 v10; // rax
  char v11; // cl
  unsigned __int64 v12; // rax
  char v13; // cl
  char *v14; // rdx
  char v15; // cl
  unsigned __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  char v20; // cl
  char *v21; // rdx
  char v22; // cl
  unsigned __int64 v23; // rax
  int v24; // ecx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  if ( last >= *it + 8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v4 = (unsigned __int64)(*it)++;
    v5 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
    LOBYTE(last) = v5 != 0;
    if ( v5 != 0 && (char)(v4 & 7) >= v5 )
      __asan_report_load1(v4);
    if ( *(_BYTE *)v4 != 72 )
      goto LABEL_52;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v6 = (unsigned __int64)(*it)++;
    v7 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
    LOBYTE(last) = v7 != 0;
    if ( v7 != 0 && (char)(v6 & 7) >= v7 )
      __asan_report_load1(v6);
    if ( *(_BYTE *)v6 != 84 )
      goto LABEL_52;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v8 = (unsigned __int64)(*it)++;
    v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
    LOBYTE(last) = v9 != 0;
    if ( v9 != 0 && (char)(v8 & 7) >= v9 )
      __asan_report_load1(v8);
    if ( *(_BYTE *)v8 != 84 )
      goto LABEL_52;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v10 = (unsigned __int64)(*it)++;
    v11 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
    LOBYTE(last) = v11 != 0;
    if ( v11 != 0 && (char)(v10 & 7) >= v11 )
      __asan_report_load1(v10);
    if ( *(_BYTE *)v10 != 80 )
      goto LABEL_52;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v12 = (unsigned __int64)(*it)++;
    v13 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
    LOBYTE(last) = v13 != 0;
    if ( v13 != 0 && (char)(v12 & 7) >= v13 )
      __asan_report_load1(v12);
    if ( *(_BYTE *)v12 != 47 )
      goto LABEL_52;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v14 = (char *)*it;
    v15 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
    LOBYTE(last) = v15 != 0;
    if ( v15 != 0 && (*(_BYTE *)it & 7) >= v15 )
      __asan_report_load1(*it);
    if ( !boost::beast::http::detail::basic_parser_base::is_digit(*v14) )
      goto LABEL_52;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v16 = (unsigned __int64)(*it)++;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)(v16 & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v16);
    v17 = 10 * (*(char *)v16 - 48);
    v18 = ((unsigned __int8)result & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
    {
      v17 = (int)result;
      __asan_report_store4(result);
    }
    *result = v17;
    v19 = (unsigned __int64)(*it)++;
    v20 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
    LOBYTE(v18) = v20 != 0;
    if ( v20 != 0 && (char)(v19 & 7) >= v20 )
      __asan_report_load1(v19);
    if ( *(_BYTE *)v19 != 46 )
      goto LABEL_52;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, v18);
    v21 = (char *)*it;
    v22 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
    LOBYTE(v18) = v22 != 0;
    if ( v22 != 0 && (*(_BYTE *)it & 7) >= v22 )
      __asan_report_load1(*it);
    if ( boost::beast::http::detail::basic_parser_base::is_digit(*v21) )
    {
      if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
        __asan_report_load8(it, v18);
      v23 = (unsigned __int64)(*it)++;
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) != 0 && (char)(v23 & 7) >= *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v23);
      v24 = *(char *)v23 - 48;
      if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *result += v24;
    }
    else
    {
LABEL_52:
      boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_version);
    }
  }
  else
  {
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
  }
};

// Line 434: range 000000000C72270E-000000000C722B66
void __cdecl boost::beast::http::detail::basic_parser_base::parse_status(
        const char **it,
        const char *last,
        unsigned __int16 *result,
        boost::beast::error_code *ec)
{
  char *v4; // rdx
  char v5; // cl
  unsigned __int64 v6; // rax
  unsigned __int16 v7; // di
  __int64 v8; // rsi
  char *v9; // rdx
  char v10; // cl
  unsigned __int64 v11; // rax
  __int16 v12; // di
  __int64 v13; // rsi
  char *v14; // rdx
  char v15; // cl
  unsigned __int64 v16; // rax
  __int16 v17; // cx
  unsigned __int64 v18; // rax

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  if ( last >= *it + 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v4 = (char *)*it;
    v5 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
    LOBYTE(last) = v5 != 0;
    if ( v5 != 0 && (*(_BYTE *)it & 7) >= v5 )
      __asan_report_load1(*it);
    if ( !boost::beast::http::detail::basic_parser_base::is_digit(*v4) )
      goto LABEL_38;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v6 = (unsigned __int64)(*it)++;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v6);
    v7 = 100 * (*(char *)v6 - 48);
    v8 = ((unsigned __int8)result & 7u) + 1;
    if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)result & 7) + 1) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
    {
      v7 = (unsigned __int16)result;
      __asan_report_store2(result);
    }
    *result = v7;
    v9 = (char *)*it;
    v10 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v10 != 0;
    if ( v10 != 0 && (*(_BYTE *)it & 7) >= v10 )
      __asan_report_load1(*it);
    if ( !boost::beast::http::detail::basic_parser_base::is_digit(*v9) )
      goto LABEL_38;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, v8);
    v11 = (unsigned __int64)(*it)++;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)(v11 & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v11);
    v12 = 10 * (*(char *)v11 - 48);
    v13 = ((unsigned __int8)result & 7u) + 1;
    if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)result & 7) + 1) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
    {
      v12 = (__int16)result;
      __asan_report_load2(result);
    }
    *result += v12;
    v14 = (char *)*it;
    v15 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
    LOBYTE(v13) = v15 != 0;
    if ( v15 != 0 && (*(_BYTE *)it & 7) >= v15 )
      __asan_report_load1(*it);
    if ( !boost::beast::http::detail::basic_parser_base::is_digit(*v14) )
      goto LABEL_38;
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, v13);
    v16 = (unsigned __int64)(*it)++;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)(v16 & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v16);
    v17 = *(char *)v16 - 48;
    if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)result & 7) + 1) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(result);
    }
    *result += v17;
    v18 = (unsigned __int64)(*it)++;
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && (char)(v18 & 7) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v18);
    if ( *(_BYTE *)v18 != 32 )
LABEL_38:
      boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_status);
  }
  else
  {
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
  }
};

// Line 471: range 000000000C722B68-000000000C722D2C
void __cdecl boost::beast::http::detail::basic_parser_base::parse_reason(
        const char **it,
        const char *last,
        boost::beast::string_view *result,
        boost::beast::error_code *ec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const char *v7; // rdx
  const char *first; // [rsp+20h] [rbp-70h]
  const char *p; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 14 token_last:473";
  *(_QWORD *)(v4 + 16) = boost::beast::http::detail::basic_parser_base::parse_reason;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  first = *it;
  *(_QWORD *)(v4 + 32) = 0LL;
  p = boost::beast::http::detail::basic_parser_base::parse_token_to_eol(*it, last, (const char **)(v4 + 32), ec);
  if ( !boost::system::error_code::operator bool(ec) )
  {
    if ( p )
    {
      v7 = *(const char **)(v4 + 32);
      if ( *(_WORD *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
        __asan_report_store16(result, last);
      *result = boost::beast::http::detail::basic_parser_base::make_string(first, v7);
      if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *it = p;
    }
    else
    {
      boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_reason);
    }
  }
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 496: range 000000000C722D2E-000000000C723A9A
void __cdecl boost::beast::http::detail::basic_parser_base::parse_field(
        const char **p,
        const char *last,
        boost::beast::string_view *name,
        boost::beast::string_view *value,
        boost::beast::static_string<4096,char,std::char_traits<char> > *buf,
        boost::beast::error_code *ec)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::pair<char const*,bool> *p_in; // rsi
  const char *v10; // rdx
  char v11; // cl
  const char *v12; // rdx
  unsigned __int64 v13; // rcx
  char v14; // dl
  const char *v15; // rdx
  const char *v16; // rsi
  const char *v17; // rdx
  char v18; // cl
  const char *v19; // rdx
  char v20; // cl
  const char *v21; // rdx
  const char *v22; // rdx
  char v23; // cl
  const char *v24; // rdx
  char v25; // cl
  const char *v26; // rdx
  const char *v27; // rsi
  const char *v28; // rdx
  char v29; // cl
  const char *v30; // rdx
  char v31; // cl
  const char *v32; // rdx
  const char *v33; // rdx
  char v34; // cl
  const char *v35; // rdx
  char v36; // cl
  char *v37; // rbx
  boost::beast::static_string<4096,char,std::char_traits<char> >::size_type v38; // rax
  std::size_t v39; // rdx
  const char *first; // [rsp+30h] [rbp-B0h]
  const char *firsta; // [rsp+30h] [rbp-B0h]
  const char *firstb; // [rsp+30h] [rbp-B0h]
  std::tuple<char const*&,bool&> v48; // [rsp+40h] [rbp-A0h] BYREF
  std::pair<char const*,bool> __in; // [rsp+50h] [rbp-90h] BYREF
  char v50[128]; // [rsp+60h] [rbp-80h] BYREF

  v6 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 9 found:536 64 8 14 token_last:569";
  *(_QWORD *)(v6 + 16) = boost::beast::http::detail::basic_parser_base::parse_field;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    __asan_report_load8(p, last);
  first = *p;
  __in = boost::beast::http::detail::basic_parser_base::find_fast(
           *p,
           last,
           boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::basic_string_view<char,std::char_traits<char>> &,boost::basic_string_view<char,std::char_traits<char>> &,boost::beast::static_string<4096ul,char,std::char_traits<char>> &,boost::system::error_code &)::ranges1,
           0x10uLL);
  std::tie<char const*,bool>((const char **)&v48, (bool *)p, (const char **)(v6 + 48), (bool *)p);
  p_in = &__in;
  std::tuple<char const*&,bool &>::operator=<char const*,bool>(&v48, &__in);
  if ( *(_BYTE *)(v6 + 48) == 1 )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    __asan_report_load8(p, &__in);
  if ( last > *p )
  {
LABEL_14:
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
        __asan_report_load8(p, p_in);
      v10 = *p;
      v11 = *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000);
      LOBYTE(p_in) = v11 != 0;
      if ( v11 != 0 && (*(_BYTE *)p & 7) >= v11 )
        __asan_report_load1(*p);
      if ( *v10 == 58 )
        break;
      p_in = (std::pair<char const*,bool> *)boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::basic_string_view<char,std::char_traits<char>> &,boost::basic_string_view<char,std::char_traits<char>> &,boost::beast::static_string<4096ul,char,std::char_traits<char>> &,boost::system::error_code &)::is_token;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
        __asan_report_load8(
          p,
          boost::beast::http::detail::basic_parser_base::parse_field(char const*&,char const*,boost::basic_string_view<char,std::char_traits<char>> &,boost::basic_string_view<char,std::char_traits<char>> &,boost::beast::static_string<4096ul,char,std::char_traits<char>> &,boost::system::error_code &)::is_token);
      v12 = *p;
      if ( *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000) != 0
        && (*(_BYTE *)p & 7) >= *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(*p);
      }
      v13 = (unsigned __int64)p_in + *(unsigned __int8 *)v12;
      v14 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
      LOBYTE(p_in) = v14 != 0;
      if ( v14 != 0 && (char)(v13 & 7) >= v14 )
        __asan_report_load1(v13);
      if ( !*(_BYTE *)v13 )
        goto LABEL_22;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
        __asan_report_load8(p, p_in);
      if ( last <= ++*p )
        goto LABEL_104;
    }
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p, p_in);
    if ( first == *p )
    {
LABEL_22:
      boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_field);
      goto LABEL_121;
    }
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p, p_in);
    v15 = *p;
    if ( *(_WORD *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
      __asan_report_store16(name, p_in);
    v16 = v15;
    *name = boost::beast::http::detail::basic_parser_base::make_string(first, v15);
    ++*p;
    *(_QWORD *)(v6 + 64) = 0LL;
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
        __asan_report_load8(p, v16);
      if ( last < *p + 1 )
        break;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
        __asan_report_load8(p, v16);
      v17 = *p;
      v18 = *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000);
      LOBYTE(v16) = v18 != 0;
      if ( v18 != 0 && (*(_BYTE *)p & 7) >= v18 )
        __asan_report_load1(*p);
      if ( *v17 == 32 )
        goto LABEL_126;
      v19 = *p;
      v20 = *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000);
      LOBYTE(v16) = v20 != 0;
      if ( v20 != 0 && (*(_BYTE *)p & 7) >= v20 )
        __asan_report_load1(*p);
      if ( *v19 == 9 )
      {
LABEL_126:
        if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
          __asan_report_load8(p, v16);
        ++*p;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
          __asan_report_load8(p, v16);
        firsta = *p;
        v21 = boost::beast::http::detail::basic_parser_base::parse_token_to_eol(*p, last, (const char **)(v6 + 64), ec);
        if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *p = v21;
        if ( boost::system::error_code::operator bool(ec) )
          goto LABEL_121;
        if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
          __asan_report_load8(p, last);
        if ( !*p )
        {
LABEL_58:
          boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_value);
          goto LABEL_121;
        }
        if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
          __asan_report_load8(p, last);
        if ( last < *p + 1 )
          break;
        v16 = firsta;
        *(_QWORD *)(v6 + 64) = boost::beast::http::detail::basic_parser_base::trim_back(
                                 *(const char **)(v6 + 64),
                                 firsta);
        if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
          __asan_report_load8(p, firsta);
        v22 = *p;
        v23 = *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000);
        LOBYTE(v16) = v23 != 0;
        if ( v23 != 0 && (*(_BYTE *)p & 7) >= v23 )
          __asan_report_load1(*p);
        if ( *v22 != 32 )
        {
          v24 = *p;
          v25 = *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000);
          LOBYTE(v16) = v25 != 0;
          if ( v25 != 0 && (*(_BYTE *)p & 7) >= v25 )
            __asan_report_load1(*p);
          if ( *v24 != 9 )
          {
            v26 = *(const char **)(v6 + 64);
            if ( *(_WORD *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
              __asan_report_store16(value, v16);
            *value = boost::beast::http::detail::basic_parser_base::make_string(firsta, v26);
            goto LABEL_121;
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
          __asan_report_load8(p, v16);
        ++*p;
        if ( firsta != *(const char **)(v6 + 64) )
        {
          boost::beast::static_string<4096ul,char,std::char_traits<char>>::resize(buf, 0LL);
          v27 = firsta;
          boost::beast::static_string<4096ul,char,std::char_traits<char>>::append<char const*>(
            buf,
            firsta,
            *(const char **)(v6 + 64));
          if ( boost::beast::static_string<4096ul,char,std::char_traits<char>>::empty(buf) )
          {
            __asan_handle_no_return(buf);
            __assert_fail(
              "! buf.empty()",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/deta"
              "il/basic_parser.ipp",
              0x264u,
              "static void boost::beast::http::detail::basic_parser_base::parse_field(const char*&, const char*, boost::b"
              "east::string_view&, boost::beast::string_view&, boost::beast::static_string<4096>&, boost::beast::error_code&)");
          }
          while ( 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
              __asan_report_load8(p, v27);
            if ( last < *p + 1 )
              goto LABEL_104;
            if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
              __asan_report_load8(p, v27);
            v28 = *p;
            v29 = *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000);
            LOBYTE(v27) = v29 != 0;
            if ( v29 != 0 && (*(_BYTE *)p & 7) >= v29 )
              __asan_report_load1(*p);
            if ( *v28 == 32 )
              goto LABEL_127;
            v30 = *p;
            v31 = *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000);
            LOBYTE(v27) = v31 != 0;
            if ( v31 != 0 && (*(_BYTE *)p & 7) >= v31 )
              __asan_report_load1(*p);
            if ( *v30 == 9 )
            {
LABEL_127:
              if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
                __asan_report_load8(p, v27);
              ++*p;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
                __asan_report_load8(p, v27);
              firstb = *p;
              v32 = boost::beast::http::detail::basic_parser_base::parse_token_to_eol(
                      *p,
                      last,
                      (const char **)(v6 + 64),
                      ec);
              if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              *p = v32;
              if ( boost::system::error_code::operator bool(ec) )
                goto LABEL_121;
              if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
                __asan_report_load8(p, last);
              if ( !*p )
                goto LABEL_58;
              if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
                __asan_report_load8(p, last);
              if ( last < *p + 1 )
                goto LABEL_104;
              v27 = firstb;
              *(_QWORD *)(v6 + 64) = boost::beast::http::detail::basic_parser_base::trim_back(
                                       *(const char **)(v6 + 64),
                                       firstb);
              if ( firstb != *(const char **)(v6 + 64) )
              {
                boost::beast::static_string<4096ul,char,std::char_traits<char>>::push_back(buf, 32LL);
                v27 = firstb;
                boost::beast::static_string<4096ul,char,std::char_traits<char>>::append<char const*>(
                  buf,
                  firstb,
                  *(const char **)(v6 + 64));
              }
              if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
                __asan_report_load8(p, v27);
              v33 = *p;
              v34 = *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000);
              LOBYTE(v27) = v34 != 0;
              if ( v34 != 0 && (*(_BYTE *)p & 7) >= v34 )
                __asan_report_load1(*p);
              if ( *v33 != 32 )
              {
                v35 = *p;
                v36 = *(_BYTE *)(((unsigned __int64)*p >> 3) + 0x7FFF8000);
                LOBYTE(v27) = v36 != 0;
                if ( v36 != 0 && (*(_BYTE *)p & 7) >= v36 )
                  __asan_report_load1(*p);
                if ( *v35 != 9 )
                {
                  v37 = boost::beast::static_string<4096ul,char,std::char_traits<char>>::data(buf);
                  v38 = boost::beast::static_string<4096ul,char,std::char_traits<char>>::size(buf);
                  boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(
                    (boost::basic_string_view<char,std::char_traits<char> > *const)&__in,
                    v37,
                    v38);
                  if ( *(_WORD *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
                    __asan_report_store16(value, v37);
                  v39 = *(_QWORD *)&__in.second;
                  value->ptr_ = __in.first;
                  value->len_ = v39;
                  goto LABEL_121;
                }
              }
              if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
                __asan_report_load8(p, v27);
              ++*p;
            }
          }
        }
      }
    }
  }
LABEL_104:
  boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
LABEL_121:
  if ( v50 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 676: range 000000000C723A9C-000000000C7247EB
void __cdecl boost::beast::http::detail::basic_parser_base::parse_chunk_extensions(
        const char **it,
        const char *last,
        boost::beast::error_code *ec)
{
  const char *v3; // rdx
  char v4; // cl
  const char *v5; // rdx
  char v6; // cl
  const char *v7; // rdx
  char v8; // cl
  const char *v9; // rdx
  char v10; // cl
  const char *v11; // rdx
  char v12; // cl
  const char *v13; // rdx
  char v14; // cl
  const char *v15; // rdx
  char v16; // cl
  const char *v17; // rdx
  char v18; // cl
  const char *v19; // rdx
  char v20; // cl
  const char *v21; // rdx
  char v22; // cl
  char *v23; // rdx
  char v24; // cl
  char *v25; // rdx
  char v26; // cl
  const char *v27; // rdx
  char v28; // cl
  const char *v29; // rdx
  char v30; // cl
  const char *v31; // rdx
  char v32; // cl
  const char *v33; // rdx
  char v34; // cl
  const char *v35; // rdx
  char v36; // cl
  const char *v37; // rdx
  char v38; // cl
  const char *v39; // rdx
  char v40; // cl
  const char *v41; // rdx
  char v42; // cl
  const char *v43; // rdx
  char v44; // cl
  char *v45; // rdx
  char v46; // cl
  char *v47; // rdx
  char v48; // cl
  const char *v49; // rdx
  char v50; // cl
  const char *v51; // rdx
  char v52; // cl
  const char *lasta; // [rsp+10h] [rbp-20h]
  bool bws; // [rsp+2Fh] [rbp-1h]

  lasta = last;
loop:
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  if ( lasta == *it )
  {
LABEL_156:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, last);
  v3 = *it;
  v4 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
  LOBYTE(last) = v4 != 0;
  if ( v4 != 0 && (*(_BYTE *)it & 7) >= v4 )
    __asan_report_load1(*it);
  if ( *v3 == 32 )
    goto LABEL_163;
  v5 = *it;
  v6 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
  LOBYTE(last) = v6 != 0;
  if ( v6 != 0 && (*(_BYTE *)it & 7) >= v6 )
    __asan_report_load1(*it);
  if ( *v5 == 9 )
    goto LABEL_163;
  v7 = *it;
  v8 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
  LOBYTE(last) = v8 != 0;
  if ( v8 != 0 && (*(_BYTE *)it & 7) >= v8 )
    __asan_report_load1(*it);
  if ( *v7 == 59 )
  {
LABEL_163:
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, last);
    v9 = *it;
    v10 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
    LOBYTE(last) = v10 != 0;
    if ( v10 != 0 && (*(_BYTE *)it & 7) >= v10 )
      __asan_report_load1(*it);
    if ( *v9 == 32 )
      goto LABEL_164;
    v11 = *it;
    v12 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
    LOBYTE(last) = v12 != 0;
    if ( v12 != 0 && (*(_BYTE *)it & 7) >= v12 )
      __asan_report_load1(*it);
    if ( *v11 == 9 )
    {
LABEL_164:
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_load8(it, last);
        if ( lasta == ++*it )
          break;
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_load8(it, last);
        v13 = *it;
        v14 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
        LOBYTE(last) = v14 != 0;
        if ( v14 != 0 && (*(_BYTE *)it & 7) >= v14 )
          __asan_report_load1(*it);
        if ( *v13 != 32 )
        {
          v15 = *it;
          v16 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
          LOBYTE(last) = v16 != 0;
          if ( v16 != 0 && (*(_BYTE *)it & 7) >= v16 )
            __asan_report_load1(*it);
          if ( *v15 != 9 )
            goto LABEL_36;
        }
      }
    }
    else
    {
LABEL_36:
      if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
        __asan_report_load8(it, last);
      v17 = *it;
      v18 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
      LOBYTE(last) = v18 != 0;
      if ( v18 != 0 && (*(_BYTE *)it & 7) >= v18 )
        __asan_report_load1(*it);
      if ( *v17 != 59 )
      {
LABEL_105:
        boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_chunk_extension);
        return;
      }
semi:
      if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
        __asan_report_load8(it, last);
      ++*it;
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_load8(it, last);
        if ( lasta == *it )
          break;
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_load8(it, last);
        v19 = *it;
        v20 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
        LOBYTE(last) = v20 != 0;
        if ( v20 != 0 && (*(_BYTE *)it & 7) >= v20 )
          __asan_report_load1(*it);
        if ( *v19 != 32 )
        {
          v21 = *it;
          v22 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
          LOBYTE(last) = v22 != 0;
          if ( v22 != 0 && (*(_BYTE *)it & 7) >= v22 )
            __asan_report_load1(*it);
          if ( *v21 != 9 )
          {
            if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
              __asan_report_load8(it, last);
            v23 = (char *)*it;
            v24 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
            LOBYTE(last) = v24 != 0;
            if ( v24 != 0 && (*(_BYTE *)it & 7) >= v24 )
              __asan_report_load1(*it);
            if ( !boost::beast::http::detail::is_token_char(*v23) )
              goto LABEL_105;
            while ( 1 )
            {
              if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                __asan_report_load8(it, last);
              if ( lasta == ++*it )
                goto LABEL_156;
              if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                __asan_report_load8(it, last);
              v25 = (char *)*it;
              v26 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
              LOBYTE(last) = v26 != 0;
              if ( v26 != 0 && (*(_BYTE *)it & 7) >= v26 )
                __asan_report_load1(*it);
              if ( !boost::beast::http::detail::is_token_char(*v25) )
              {
                if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                  __asan_report_load8(it, last);
                v27 = *it;
                v28 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                LOBYTE(last) = v28 != 0;
                if ( v28 != 0 && (*(_BYTE *)it & 7) >= v28 )
                  __asan_report_load1(*it);
                if ( *v27 == 32 )
                  goto LABEL_165;
                v29 = *it;
                v30 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                LOBYTE(last) = v30 != 0;
                if ( v30 != 0 && (*(_BYTE *)it & 7) >= v30 )
                  __asan_report_load1(*it);
                if ( *v29 == 9 )
                {
LABEL_165:
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                      __asan_report_load8(it, last);
                    if ( lasta == ++*it )
                      goto LABEL_156;
                    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                      __asan_report_load8(it, last);
                    v31 = *it;
                    v32 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                    LOBYTE(last) = v32 != 0;
                    if ( v32 != 0 && (*(_BYTE *)it & 7) >= v32 )
                      __asan_report_load1(*it);
                    if ( *v31 != 32 )
                    {
                      v33 = *it;
                      v34 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                      LOBYTE(last) = v34 != 0;
                      if ( v34 != 0 && (*(_BYTE *)it & 7) >= v34 )
                        __asan_report_load1(*it);
                      if ( *v33 != 9 )
                      {
                        bws = 1;
                        goto LABEL_94;
                      }
                    }
                  }
                }
                bws = 0;
LABEL_94:
                if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                  __asan_report_load8(it, last);
                v35 = *it;
                v36 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                LOBYTE(last) = v36 != 0;
                if ( v36 != 0 && (*(_BYTE *)it & 7) >= v36 )
                  __asan_report_load1(*it);
                if ( *v35 != 59 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                    __asan_report_load8(it, last);
                  v37 = *it;
                  v38 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                  LOBYTE(last) = v38 != 0;
                  if ( v38 != 0 && (*(_BYTE *)it & 7) >= v38 )
                    __asan_report_load1(*it);
                  if ( *v37 == 61 )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                      __asan_report_load8(it, last);
                    ++*it;
                    while ( 1 )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                        __asan_report_load8(it, last);
                      if ( lasta == *it )
                        goto LABEL_156;
                      if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                        __asan_report_load8(it, last);
                      v39 = *it;
                      v40 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                      LOBYTE(last) = v40 != 0;
                      if ( v40 != 0 && (*(_BYTE *)it & 7) >= v40 )
                        __asan_report_load1(*it);
                      if ( *v39 != 32 )
                      {
                        v41 = *it;
                        v42 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                        LOBYTE(last) = v42 != 0;
                        if ( v42 != 0 && (*(_BYTE *)it & 7) >= v42 )
                          __asan_report_load1(*it);
                        if ( *v41 != 9 )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                            __asan_report_load8(it, last);
                          v43 = *it;
                          v44 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                          LOBYTE(last) = v44 != 0;
                          if ( v44 != 0 && (*(_BYTE *)it & 7) >= v44 )
                            __asan_report_load1(*it);
                          if ( *v43 == 34 )
                          {
                            while ( 1 )
                            {
                              if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                                __asan_report_load8(it, last);
                              if ( lasta == ++*it )
                                break;
                              if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                                __asan_report_load8(it, last);
                              v49 = *it;
                              v50 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                              LOBYTE(last) = v50 != 0;
                              if ( v50 != 0 && (*(_BYTE *)it & 7) >= v50 )
                                __asan_report_load1(*it);
                              if ( *v49 == 34 )
                              {
                                if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                                  __asan_report_load8(it, last);
                                ++*it;
                                goto loop;
                              }
                              if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                                __asan_report_load8(it, last);
                              v51 = *it;
                              v52 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                              LOBYTE(last) = v52 != 0;
                              if ( v52 != 0 && (*(_BYTE *)it & 7) >= v52 )
                                __asan_report_load1(*it);
                              if ( *v51 == 92 && lasta == ++*it )
                                goto LABEL_156;
                            }
                          }
                          else
                          {
                            v45 = (char *)*it;
                            v46 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                            LOBYTE(last) = v46 != 0;
                            if ( v46 != 0 && (*(_BYTE *)it & 7) >= v46 )
                              __asan_report_load1(*it);
                            if ( !boost::beast::http::detail::is_token_char(*v45) )
                              goto LABEL_105;
                            while ( 1 )
                            {
                              if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                                __asan_report_load8(it, last);
                              if ( lasta == ++*it )
                                break;
                              if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                                __asan_report_load8(it, last);
                              v47 = (char *)*it;
                              v48 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
                              LOBYTE(last) = v48 != 0;
                              if ( v48 != 0 && (*(_BYTE *)it & 7) >= v48 )
                                __asan_report_load1(*it);
                              if ( !boost::beast::http::detail::is_token_char(*v47) )
                                goto loop;
                            }
                          }
                          goto LABEL_156;
                        }
                      }
                      if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
                        __asan_report_load8(it, last);
                      ++*it;
                    }
                  }
                  if ( !bws )
                    return;
                  goto LABEL_105;
                }
                goto semi;
              }
            }
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_load8(it, last);
        ++*it;
      }
    }
    goto LABEL_156;
  }
};

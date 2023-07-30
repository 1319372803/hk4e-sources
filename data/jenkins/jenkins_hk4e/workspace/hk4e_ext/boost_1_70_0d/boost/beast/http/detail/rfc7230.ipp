// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/detail/rfc7230.ipp

// Line 81: range 000000000C71ED9B-000000000C71EDFC
char __cdecl boost::beast::http::detail::is_token_char(char c)
{
  int v1; // ecx
  char v2; // dl

  v1 = (unsigned __int8)c;
  v2 = *(_BYTE *)(((unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[(unsigned __int8)c] >> 3)
                + 0x7FFF8000);
  if ( v2 != 0 && ((unsigned __int8)&boost::beast::http::detail::is_token_char(char)::tab[c] & 7) >= v2 )
    __asan_report_load1(&boost::beast::http::detail::is_token_char(char)::tab[(unsigned __int8)c]);
  return boost::beast::http::detail::is_token_char(char)::tab[v1];
};

// Line 224: range 000000000C71EDFD-000000000C71EEFE
void __cdecl boost::beast::http::detail::skip_ows(const char **it, const char *end)
{
  const char *v2; // rdx
  char v3; // cl
  const char *v4; // rdx
  char v5; // cl
  const char *enda; // [rsp+0h] [rbp-10h]

  enda = end;
  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, end);
    if ( enda == *it )
      break;
    v2 = *it;
    v3 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
    LOBYTE(end) = v3 != 0;
    if ( v3 != 0 && (*(_BYTE *)it & 7) >= v3 )
      __asan_report_load1(*it);
    if ( *v2 != 32 )
    {
      v4 = *it;
      v5 = *(_BYTE *)(((unsigned __int64)*it >> 3) + 0x7FFF8000);
      LOBYTE(end) = v5 != 0;
      if ( v5 != 0 && (*(_BYTE *)it & 7) >= v5 )
        __asan_report_load1(*it);
      if ( *v4 != 9 )
        break;
    }
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, end);
    ++*it;
  }
};

// Line 242: range 000000000C71EF9C-000000000C71F1C0
const char *__fastcall boost::beast::http::detail::trim(boost::beast::string_view s)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  _BYTE *v5; // rdx
  const char *result; // rax
  boost::basic_string_view<char,std::char_traits<char> >::const_iterator last; // [rsp+18h] [rbp-98h]
  boost::basic_string_view<char,std::char_traits<char> > v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 first:243 64 16 5 s:241";
  *(_QWORD *)(v1 + 16) = boost::beast::http::detail::trim;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  *(boost::beast::string_view *)(v1 + 64) = s;
  *(_QWORD *)(v1 + 32) = boost::basic_string_view<char,std::char_traits<char>>::begin((const boost::basic_string_view<char,std::char_traits<char> > *const)(v1 + 64));
  last = boost::basic_string_view<char,std::char_traits<char>>::end((const boost::basic_string_view<char,std::char_traits<char> > *const)(v1 + 64));
  boost::beast::http::detail::skip_ows((const char **)(v1 + 32), last);
  while ( last != *(boost::basic_string_view<char,std::char_traits<char> >::const_iterator *)(v1 + 32) )
  {
    v4 = (unsigned __int64)std::prev<char const*>(last, 1LL);
    v5 = (_BYTE *)v4;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)(v4 & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v4);
    if ( *v5 != 32 && *v5 != 9 )
      break;
    --last;
  }
  if ( last == *(boost::basic_string_view<char,std::char_traits<char> >::const_iterator *)(v1 + 32) )
    boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(&v8);
  else
    boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(
      &v8,
      *(const char **)(v1 + 32),
      (boost::basic_string_view<char,std::char_traits<char> >::size_type)&last[-*(_QWORD *)(v1 + 32)]);
  result = v8.ptr_;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 346: range 000000000C71F1C2-000000000C71F6BF
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall boost::beast::http::detail::opt_token_list_policy::operator()(
        const boost::beast::http::detail::opt_token_list_policy *const this,
        unsigned __int64 v,
        unsigned __int64 it,
        boost::beast::string_view s)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::size_t v7; // rdx
  boost::basic_string_view<char,std::char_traits<char> >::const_pointer v8; // r14
  boost::basic_string_view<char,std::char_traits<char> >::const_pointer v9; // r14
  const char *v10; // rsi
  const char *v11; // r15
  boost::basic_string_view<char,std::char_traits<char> >::const_pointer v12; // r14
  __int64 result; // rax
  char *v14; // rdx
  char v15; // cl
  const char *v16; // r15
  boost::basic_string_view<char,std::char_traits<char> >::const_pointer v17; // r14
  char *v18; // rdx
  char v19; // cl
  std::size_t v20; // rdx
  const char *ptr; // [rsp+0h] [rbp-C0h]
  std::size_t len; // [rsp+8h] [rbp-B8h]
  bool need_comma; // [rsp+36h] [rbp-8Ah]
  char c; // [rsp+37h] [rbp-89h]
  const char *p0; // [rsp+38h] [rbp-88h]
  boost::basic_string_view<char,std::char_traits<char> > v28; // [rsp+40h] [rbp-80h] BYREF
  char v29[112]; // [rsp+50h] [rbp-70h] BYREF

  ptr = s.ptr_;
  len = s.len_;
  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 s:345";
  *(_QWORD *)(v4 + 16) = boost::beast::http::detail::opt_token_list_policy::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = ptr;
  *(_QWORD *)(v4 + 40) = len;
  boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(&v28);
  if ( *(_WORD *)((v >> 3) + 0x7FFF8000) )
    __asan_report_store16(v, v);
  v7 = v28.len_;
  *(_QWORD *)v = v28.ptr_;
  *(_QWORD *)(v + 8) = v7;
  if ( *(_BYTE *)((it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, v);
  v8 = *(boost::basic_string_view<char,std::char_traits<char> >::const_pointer *)it;
  for ( need_comma = v8 != boost::basic_string_view<char,std::char_traits<char>>::data((const boost::basic_string_view<char,std::char_traits<char> > *const)(v4 + 32));
        ;
        need_comma = 0 )
  {
    v9 = boost::basic_string_view<char,std::char_traits<char>>::data((const boost::basic_string_view<char,std::char_traits<char> > *const)(v4 + 32));
    v10 = &v9[boost::basic_string_view<char,std::char_traits<char>>::size((const boost::basic_string_view<char,std::char_traits<char> > *const)(v4 + 32))];
    boost::beast::http::detail::skip_ows((const char **)it, v10);
    if ( *(_BYTE *)((it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, v10);
    v11 = *(const char **)it;
    v12 = boost::basic_string_view<char,std::char_traits<char>>::data((const boost::basic_string_view<char,std::char_traits<char> > *const)(v4 + 32));
    if ( v11 == &v12[boost::basic_string_view<char,std::char_traits<char>>::size((const boost::basic_string_view<char,std::char_traits<char> > *const)(v4 + 32))] )
    {
      if ( *(_BYTE *)((it >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)it = 0LL;
      result = 1LL;
      goto LABEL_43;
    }
    if ( *(_BYTE *)((it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, v10);
    v14 = *(char **)it;
    v15 = *(_BYTE *)((*(_QWORD *)it >> 3) + 0x7FFF8000LL);
    LOBYTE(v10) = v15 != 0;
    if ( v15 != 0 && (*(_BYTE *)it & 7) >= v15 )
      __asan_report_load1(*(_QWORD *)it);
    c = *v14;
    if ( boost::beast::http::detail::is_token_char(*v14) )
      break;
    if ( c != 44 )
    {
      result = 0LL;
      goto LABEL_43;
    }
    if ( *(_BYTE *)((it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, v10);
    ++*(_QWORD *)it;
  }
  if ( need_comma )
  {
    result = 0LL;
  }
  else
  {
    if ( *(_BYTE *)((it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, v10);
    p0 = *(const char **)it;
    do
    {
      if ( *(_BYTE *)((it >> 3) + 0x7FFF8000) )
        __asan_report_load8(it, v10);
      v16 = (const char *)++*(_QWORD *)it;
      v17 = boost::basic_string_view<char,std::char_traits<char>>::data((const boost::basic_string_view<char,std::char_traits<char> > *const)(v4 + 32));
      if ( v16 == &v17[boost::basic_string_view<char,std::char_traits<char>>::size((const boost::basic_string_view<char,std::char_traits<char> > *const)(v4 + 32))] )
        break;
      if ( *(_BYTE *)((it >> 3) + 0x7FFF8000) )
        __asan_report_load8(it, v10);
      v18 = *(char **)it;
      v19 = *(_BYTE *)((*(_QWORD *)it >> 3) + 0x7FFF8000LL);
      LOBYTE(v10) = v19 != 0;
      if ( v19 != 0 && (*(_BYTE *)it & 7) >= v19 )
        __asan_report_load1(*(_QWORD *)it);
    }
    while ( boost::beast::http::detail::is_token_char(*v18) );
    if ( *(_BYTE *)((it >> 3) + 0x7FFF8000) )
      __asan_report_load8(it, v10);
    boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(&v28, p0, *(_QWORD *)it - (_QWORD)p0);
    if ( *(_WORD *)((v >> 3) + 0x7FFF8000) )
      __asan_report_store16(v, p0);
    v20 = v28.len_;
    *(_QWORD *)v = v28.ptr_;
    *(_QWORD *)(v + 8) = v20;
    result = 1LL;
  }
LABEL_43:
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

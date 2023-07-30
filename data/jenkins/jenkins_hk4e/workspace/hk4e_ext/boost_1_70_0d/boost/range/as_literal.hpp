// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/range/as_literal.hpp

// Line 79: range 000000000C64545D-000000000C64546B
bool __cdecl boost::range_detail::is_char_ptr(const char *a1)
{
  return 1;
};

// Line 102: range 000000000C645443-000000000C64545C
std::size_t __cdecl boost::range_detail::length(const char *s)
{
  return strlen(s);
};

// Line 120: range 000000000C991312-000000000C991320
__int64 __cdecl boost::range_detail::is_char_ptr<std::string>(const std::string *a1)
{
  return 0LL;
};

// Line 127: range 000000000C8A0B38-000000000C8A0C40
boost::iterator_range<char const*> __cdecl boost::range_detail::make_range<char const>(const char *const r, bool a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::size_t v5; // rax
  boost::iterator_range<char const*> result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::range_detail::make_range<char const>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = boost::range_detail::length(r);
  boost::iterator_range<char const*>::iterator_range<char const*>(
    (boost::iterator_range<char const*> *const)(v2 + 32),
    r,
    &r[v5]);
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  result = *(boost::iterator_range<char const*> *)(v2 + 32);
  if ( v7 == (char *)v2 )
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

// Line 134: range 000000000C991321-000000000C99133E
boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > __cdecl boost::range_detail::make_range<std::string>(
        std::string *r,
        __int64 a2)
{
  return boost::make_iterator_range<std::string>(r);
};

// Line 143: range 000000000C8A0D86-000000000C8A0DB1
boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > __cdecl boost::as_literal<std::string>(
        std::string *r)
{
  __int64 v1; // rdx

  v1 = boost::range_detail::is_char_ptr<std::string>(r);
  return boost::range_detail::make_range<std::string>(r, v1);
};

// Line 162: range 000000000C7D3C3E-000000000C7D3C68
boost::iterator_range<char const*> __cdecl boost::as_literal<char,3ul>(const char (*arr)[3])
{
  bool is_char_ptr; // dl

  is_char_ptr = boost::range_detail::is_char_ptr((const char *)arr);
  return boost::range_detail::make_range<char const>((const char *const)arr, is_char_ptr);
};

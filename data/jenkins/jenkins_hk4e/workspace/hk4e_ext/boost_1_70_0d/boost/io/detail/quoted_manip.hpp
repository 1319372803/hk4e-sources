// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/io/detail/quoted_manip.hpp

// Line 58: range 00000000122990A8-000000001229916F
void __cdecl boost::io::detail::quoted_proxy<std::string const&,char>::quoted_proxy(
        boost::io::detail::quoted_proxy<const std::string&,char> *const this,
        const std::string *s_,
        char escape_,
        char delim_)
{
  __int64 v4; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->string = s_;
  if ( *(char *)(((unsigned __int64)&this->escape >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->escape, s_);
  this->escape = escape_;
  v4 = ((_BYTE)this + 9) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->delim >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&this->delim >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->delim, v4);
  }
  this->delim = delim_;
};

// Line 68: range 0000000012299170-0000000012299457
std::ostream *__cdecl boost::io::detail::basic_string_inserter_imp<char,std::char_traits<char>,std::allocator<char>>(
        std::ostream *os,
        const std::string *string,
        char escape,
        char delim)
{
  __gnu_cxx::__normal_iterator<char const*,std::string > *v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __gnu_cxx::__normal_iterator<char const*,std::string >::reference v7; // rax
  _BYTE *v8; // rdx
  __gnu_cxx::__normal_iterator<char const*,std::string >::reference v9; // rax
  _BYTE *v10; // rdx
  char v11; // al
  __gnu_cxx::__normal_iterator<char const*,std::string >::reference v12; // rax
  char *v13; // rdx
  std::ostream *result; // rax
  char v17[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (__gnu_cxx::__normal_iterator<char const*,std::string > *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (__gnu_cxx::__normal_iterator<char const*,std::string > *)v5;
  }
  v4->_M_current = (const char *)1102416563;
  v4[1]._M_current = "2 32 8 9 end_it:73 64 8 5 it:75";
  v4[2]._M_current = (const char *)boost::io::detail::basic_string_inserter_imp<char,std::char_traits<char>,std::allocator<char>>;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  std::operator<<<std::char_traits<char>>(os, (unsigned int)delim);
  if ( *(_BYTE *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v4[4]._M_current = (const char *)std::string::end(string);
  if ( *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v4[8]._M_current = (const char *)std::string::begin(string);
  while ( __gnu_cxx::operator!=<char const*,std::string>(v4 + 8, v4 + 4) )
  {
    v7 = __gnu_cxx::__normal_iterator<char const*,std::string>::operator*(v4 + 8);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v7);
    }
    if ( delim == *v8 )
      goto LABEL_16;
    v9 = __gnu_cxx::__normal_iterator<char const*,std::string>::operator*(v4 + 8);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v9);
    }
    if ( escape == *v10 )
LABEL_16:
      v11 = 1;
    else
      v11 = 0;
    if ( v11 )
      std::operator<<<std::char_traits<char>>(os, (unsigned int)escape);
    v12 = __gnu_cxx::__normal_iterator<char const*,std::string>::operator*(v4 + 8);
    v13 = (char *)v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v12);
    }
    std::operator<<<std::char_traits<char>>(os, (unsigned int)*v13);
    __gnu_cxx::__normal_iterator<char const*,std::string>::operator++(v4 + 8);
  }
  *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) = -8;
  std::operator<<<std::char_traits<char>>(os, (unsigned int)delim);
  result = os;
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_current = (const char *)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 90: range 000000001226CF78-000000001226D040
std::ostream *__cdecl boost::io::detail::operator<<<char,std::char_traits<char>,std::allocator<char>>(
        std::ostream *os,
        const boost::io::detail::quoted_proxy<const std::string&,char> *proxy)
{
  char delim; // cl
  char escape; // dl

  if ( *(_BYTE *)(((unsigned __int64)&proxy->delim >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)proxy + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&proxy->delim >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&proxy->delim);
  }
  delim = proxy->delim;
  if ( *(char *)(((unsigned __int64)&proxy->escape >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&proxy->escape);
  escape = proxy->escape;
  if ( *(_BYTE *)(((unsigned __int64)proxy >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return boost::io::detail::basic_string_inserter_imp<char,std::char_traits<char>,std::allocator<char>>(
           os,
           proxy->string,
           escape,
           delim);
};

// Line 164: range 000000001226CE76-000000001226CF77
boost::io::detail::quoted_proxy<const std::string&,char> __cdecl boost::io::quoted<char,std::char_traits<char>,std::allocator<char>>(
        const std::string *s,
        char escape,
        char delim)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF
  boost::io::detail::quoted_proxy<const std::string&,char> result; // 0:rax.10

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = boost::io::quoted<char,std::char_traits<char>,std::allocator<char>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  boost::io::detail::quoted_proxy<std::string const&,char>::quoted_proxy(
    (boost::io::detail::quoted_proxy<const std::string&,char> *const)(v3 + 32),
    s,
    escape,
    delim);
  if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  result = *(boost::io::detail::quoted_proxy<const std::string&,char> *)(v3 + 32);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

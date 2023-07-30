// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/filesystem/path.hpp

// Line 80: range 00000000121EB61E-00000000121EB638
void __cdecl boost::filesystem::path::~path(boost::filesystem::path *const this)
{
  std::string::~string(this);
};

// Line 157: range 00000000121EB63A-00000000121EB654
void __cdecl boost::filesystem::path::path(boost::filesystem::path *const this)
{
  std::string::basic_string(this);
};

// Line 171: range 00000000121EB656-00000000121EB67B
void __cdecl boost::filesystem::path::path(
        boost::filesystem::path *const this,
        boost::filesystem::path::string_type *s)
{
  std::string::basic_string(this, s);
};

// Line 454: range 00000000121EB67C-00000000121EB689
const std::string *__cdecl boost::filesystem::path::string[abi:cxx11](const boost::filesystem::path *const this)
{
  return &this->m_pathname;
};

// Line 587: range 00000000121EB68A-00000000121EB716
boost::filesystem::path *__cdecl boost::filesystem::path::leaf(
        boost::filesystem::path *retstr,
        const boost::filesystem::path *const this)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->m_pathname._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->m_pathname._anon_0._M_allocated_capacity
                                                          + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  boost::filesystem::path::filename(retstr);
  return retstr;
};

// Line 811: range 00000000122434C9-00000000122436EE
std::ostream *__cdecl boost::filesystem::operator<<<char,std::char_traits<char>>(
        std::ostream *os,
        const boost::filesystem::path *p)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::ostream *v5; // r14
  std::ostream *result; // rax
  char v7[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::filesystem::operator<<<char,std::char_traits<char>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 64, 32LL);
  }
  boost::filesystem::path::string<std::string>((std::string *)(v2 + 64), p);
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(boost::io::detail::quoted_proxy<const std::string&,char> *)(v2 + 32) = boost::io::quoted<char,std::char_traits<char>,std::allocator<char>>(
                                                                             (const std::string *)(v2 + 64),
                                                                             38,
                                                                             34);
  v5 = boost::io::detail::operator<<<char,std::char_traits<char>,std::allocator<char>>(
         os,
         (const boost::io::detail::quoted_proxy<const std::string&,char> *)(v2 + 32));
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
  std::string::~string((void *)(v2 + 64));
  result = v5;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 949: range 00000000121EB718-00000000121EB74B
std::string *__cdecl boost::filesystem::path::string<std::string>(
        std::string *retstr,
        const boost::filesystem::path *const this)
{
  const std::string *v2; // rdx

  v2 = boost::filesystem::path::string[abi:cxx11](this);
  std::string::basic_string(retstr, v2);
  return retstr;
};

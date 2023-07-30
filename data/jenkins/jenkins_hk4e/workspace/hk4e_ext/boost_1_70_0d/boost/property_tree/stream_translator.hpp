// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/stream_translator.hpp

// Line 32: range 0000000000723FC3-0000000000724020
void __cdecl boost::property_tree::customize_stream<char,std::char_traits<char>,int,void>::insert(
        std::ostream *s,
        const int *e)
{
  if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(e);
  }
  std::ostream::operator<<(s, *(unsigned int *)e);
};

// Line 35: range 00000000007859FA-0000000000785A9D
void __cdecl boost::property_tree::customize_stream<char,std::char_traits<char>,int,void>::extract(
        std::istream *s,
        int *e)
{
  unsigned __int64 v2; // rax

  std::istream::operator>>(s, e);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) )
    __asan_report_load8(s);
  v2 = *(_QWORD *)s - 24LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)s - 24LL);
  if ( (unsigned __int8)std::ios::eof((char *)s + *(_QWORD *)v2) != 1 )
    std::istream::operator>>(s, &std::ws<char,std::char_traits<char>>);
};

// Line 82: range 000000000077B815-000000000077B872
void __cdecl boost::property_tree::customize_stream<char,std::char_traits<char>,unsigned int,void>::insert(
        std::ostream *s,
        const unsigned int *e)
{
  if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(e);
  }
  std::ostream::operator<<(s, *e);
};

// Line 157: range 000000000053CC02-000000000053CC1C
void __cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,unsigned int>::~stream_translator(
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,unsigned int> *const this)
{
  std::locale::~locale(&this->m_loc);
};

// Line 183: range 0000000000548930-0000000000548955
void __cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,float>::stream_translator(
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,float> *const this,
        const boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,float> *a2)
{
  std::locale::locale(&this->m_loc, &a2->m_loc);
};

// Line 183: range 00000000004EA774-00000000004EA78E
void __cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,float>::~stream_translator(
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,float> *const this)
{
  std::locale::~locale(&this->m_loc);
};

// Line 183: range 000000000054868A-00000000005486AF
void __cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int>::stream_translator(
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int> *const this,
        const boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int> *a2)
{
  std::locale::locale(&this->m_loc, &a2->m_loc);
};

// Line 183: range 00000000004EA6BC-00000000004EA6D6
void __cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int>::~stream_translator(
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int> *const this)
{
  std::locale::~locale(&this->m_loc);
};

// Line 183: range 00000000005ED6F4-00000000005ED719
void __cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,unsigned int>::stream_translator(
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,unsigned int> *const this,
        const boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,unsigned int> *a2)
{
  std::locale::locale(&this->m_loc, &a2->m_loc);
};

// Line 190: range 000000000054890A-000000000054892F
void __cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,float>::stream_translator(
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,float> *const this,
        std::locale *p_loc)
{
  std::locale::locale(&this->m_loc, p_loc);
};

// Line 190: range 0000000000548664-0000000000548689
void __cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int>::stream_translator(
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int> *const this,
        std::locale *p_loc)
{
  std::locale::locale(&this->m_loc, p_loc);
};

// Line 194: range 000000000072B2E4-000000000072B540
boost::optional<int> __cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int>::get_value(
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int> *const this,
        const boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int>::internal_type *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int v5; // r14d
  boost::optional<int> v7; // r14
  std::locale v8; // [rsp+10h] [rbp-240h] BYREF
  boost::optional<int> v9; // [rsp+18h] [rbp-238h] BYREF
  char v10[560]; // [rsp+20h] [rbp-230h] BYREF
  boost::optional<int> result; // 0:al.1,4:rax^4.4

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 5 e:197 64 384 7 iss:195";
  *(_QWORD *)(v2 + 16) = boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int>::get_value;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::istringstream::basic_istringstream(v2 + 64, v, 8LL);
  std::ios::imbue(&v8, v2 + 184, this);
  std::locale::~locale(&v8);
  boost::property_tree::customize_stream<char,std::char_traits<char>,int,void>::extract(
    (std::istream *)(v2 + 64),
    (int *)(v2 + 48));
  if ( (unsigned __int8)std::ios::fail(v2 + 184)
    || (unsigned __int8)std::ios::bad(v2 + 184)
    || (v5 = std::istream::get((std::istream *)(v2 + 64)), v5 != std::char_traits<char>::eof()) )
  {
    boost::optional<int>::optional(&v9);
  }
  else
  {
    boost::optional<int>::optional(&v9, (boost::optional<int>::rval_reference_type)(v2 + 48));
  }
  v7 = v9;
  std::istringstream::~istringstream(v2 + 64);
  result = v7;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 204: range 0000000000683A6E-0000000000683CC0
boost::optional<std::string > *__cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,float>::put_value[abi:cxx11](
        boost::optional<std::string > *retstr,
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,float> *const this,
        const float *v)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  std::locale v8; // [rsp+28h] [rbp-228h] BYREF
  std::string val; // [rsp+30h] [rbp-220h] BYREF
  char v10[512]; // [rsp+50h] [rbp-200h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 376 7 oss:205";
  *(_QWORD *)(v3 + 16) = boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,float>::put_value[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  v5[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v3 + 32);
  std::ios::imbue(&v8, v3 + 144, this);
  std::locale::~locale(&v8);
  boost::property_tree::customize_stream<char,std::char_traits<char>,float,void>::insert((std::ostream *)(v3 + 32), v);
  if ( (unsigned __int8)std::ios::operator bool(v3 + 144) )
  {
    std::ostringstream::str(&val, v3 + 32);
    boost::optional<std::string>::optional(retstr, &val);
    std::string::~string(&val);
  }
  else
  {
    boost::optional<std::string>::optional(retstr);
  }
  std::ostringstream::~ostringstream(v3 + 32);
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 204: range 000000000068381A-0000000000683A6C
boost::optional<std::string > *__cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int>::put_value[abi:cxx11](
        boost::optional<std::string > *retstr,
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int> *const this,
        const int *v)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  std::locale v8; // [rsp+28h] [rbp-228h] BYREF
  std::string val; // [rsp+30h] [rbp-220h] BYREF
  char v10[512]; // [rsp+50h] [rbp-200h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 376 7 oss:205";
  *(_QWORD *)(v3 + 16) = boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,int>::put_value[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  v5[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v3 + 32);
  std::ios::imbue(&v8, v3 + 144, this);
  std::locale::~locale(&v8);
  boost::property_tree::customize_stream<char,std::char_traits<char>,int,void>::insert((std::ostream *)(v3 + 32), v);
  if ( (unsigned __int8)std::ios::operator bool(v3 + 144) )
  {
    std::ostringstream::str(&val, v3 + 32);
    boost::optional<std::string>::optional(retstr, &val);
    std::string::~string(&val);
  }
  else
  {
    boost::optional<std::string>::optional(retstr);
  }
  std::ostringstream::~ostringstream(v3 + 32);
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 204: range 000000000071A676-000000000071A8C8
boost::optional<std::string > *__cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,unsigned int>::put_value[abi:cxx11](
        boost::optional<std::string > *retstr,
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,unsigned int> *const this,
        const unsigned int *v)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  std::locale v8; // [rsp+28h] [rbp-228h] BYREF
  std::string val; // [rsp+30h] [rbp-220h] BYREF
  char v10[512]; // [rsp+50h] [rbp-200h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 376 7 oss:205";
  *(_QWORD *)(v3 + 16) = boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,unsigned int>::put_value[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  v5[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v3 + 32);
  std::ios::imbue(&v8, v3 + 144, this);
  std::locale::~locale(&v8);
  boost::property_tree::customize_stream<char,std::char_traits<char>,unsigned int,void>::insert(
    (std::ostream *)(v3 + 32),
    v);
  if ( (unsigned __int8)std::ios::operator bool(v3 + 144) )
  {
    std::ostringstream::str(&val, v3 + 32);
    boost::optional<std::string>::optional(retstr, &val);
    std::string::~string(&val);
  }
  else
  {
    boost::optional<std::string>::optional(retstr);
  }
  std::ostringstream::~ostringstream(v3 + 32);
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 867: range 000000000072406B-0000000000724130
void __cdecl boost::property_tree::customize_stream<char,std::char_traits<char>,float,void>::insert(
        std::ostream *s,
        const float *e)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) )
    __asan_report_load8(s);
  v2 = *(_QWORD *)s - 24LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)s - 24LL);
  std::ios_base::precision((std::ostream *)((char *)s + *(_QWORD *)v2), 9LL);
  if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(e);
  }
  std::ostream::operator<<(s, *(double *)_mm_cvtsi32_si128(*(_DWORD *)e).m128i_i64);
};

// Line 1139: range 00000000005ED6CE-00000000005ED6F3
void __cdecl boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,unsigned int>::stream_translator(
        boost::property_tree::stream_translator<char,std::char_traits<char>,std::allocator<char>,unsigned int> *const this,
        std::locale *p_loc)
{
  std::locale::locale(&this->m_loc, p_loc);
};

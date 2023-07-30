// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/data_type.cpp

// Line 18: range 000000000CCC0DDE-000000000CCC0F17
bool __cdecl Date::isValid(const std::string *val)
{
  std::basic_regex<char,std::regex_traits<char> > *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // r14
  bool result; // al
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (std::basic_regex<char,std::regex_traits<char> > *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = (std::basic_regex<char,std::regex_traits<char> > *)v2;
  }
  *(_QWORD *)&v1->_M_flags = 1102416563LL;
  v1->_M_loc._M_impl = (std::locale::_Impl *)"1 32 32 6 reg:19";
  v1->_M_automaton._M_ptr = (std::__shared_ptr<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2>::element_type *)Date::isValid;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(
    v1 + 1,
    "[0-9]{1,4}-[0-9]{1,2}-[0-9]{1,2}",
    (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
  v4 = std::regex_match<std::char_traits<char>,std::allocator<char>,char,std::regex_traits<char>>(
         val,
         v1 + 1,
         (std::regex_constants::match_flag_type)0);
  std::basic_regex<char,std::regex_traits<char>>::~basic_regex(v1 + 1);
  result = v4;
  if ( v6 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)&v1->_M_flags = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 24: range 000000000CCC0F18-000000000CCC1613
int32_t __cdecl Date::parseFrom(Date *const this, const std::string *val)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v5; // rsi
  bool v6; // r14
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v7; // rsi
  bool v8; // r14
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v9; // rsi
  bool v10; // r14
  int32_t v11; // r14d
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  char v16[464]; // [rsp+10h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 32 6 reg:25 96 32 4 m:26 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Date::parseFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(
    (std::basic_regex<char,std::regex_traits<char> > *const)(v2 + 32),
    "(\\d*)-(\\d*)-(\\d*)",
    (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96));
  if ( !std::regex_match<std::char_traits<char>,std::allocator<char>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
          val,
          (std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *)(v2 + 96),
          (const std::basic_regex<char,std::regex_traits<char> > *)(v2 + 32),
          (std::regex_constants::match_flag_type)0)
    || std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::size((const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96)) != 3 )
  {
    goto LABEL_16;
  }
  v5 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
         (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
         0LL);
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    v5 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 160, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 160),
    v5);
  v6 = common::tools::StringUtils::strToNum<unsigned short>((const std::string *)(v2 + 160), &this->year, 1) == 0;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  if ( v6 )
    goto LABEL_16;
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  v7 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
         (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
         1uLL);
  if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
  {
    v7 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 224, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 224),
    v7);
  v8 = common::tools::StringUtils::strToNum<unsigned char>((const std::string *)(v2 + 224), &this->month, 1) == 0;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  if ( v8 )
    goto LABEL_16;
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  v9 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
         (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
         2uLL);
  if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
  {
    v9 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 288, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 288),
    v9);
  v10 = common::tools::StringUtils::strToNum<unsigned short>((const std::string *)(v2 + 288), &this->day, 1) == 0;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  if ( v10 )
  {
LABEL_16:
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/data_type.cpp",
      "parseFrom",
      42);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 352),
            (const char (*)[16])"parseFrom date:");
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, val);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v11 = -1;
  }
  else
  {
    v11 = 0;
  }
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::~match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96));
  std::basic_regex<char,std::regex_traits<char>>::~basic_regex((std::basic_regex<char,std::regex_traits<char> > *const)(v2 + 32));
  result = v11;
  if ( v16 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 47: range 000000000CCC1614-000000000CCC18B5
int32_t __cdecl Date::parseFrom(Date *const this, const common::tools::TxtFile::Row *row, const std::string *col_name)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v10[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 10 str_val:48 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Date::parseFrom;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  std::string::basic_string(v3 + 32);
  if ( common::tools::TxtFile::Row::assignToStr(row, col_name, (std::string *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/data_type.cpp",
      "parseFrom",
      51);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[29])"assignToStr fails, col_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, col_name);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    v7 = Date::parseFrom(this, (const std::string *)(v3 + 32));
  }
  std::string::~string((void *)(v3 + 32));
  result = v7;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 58: range 000000000CCC18B6-000000000CCC19EF
bool __cdecl Time::isValid(const std::string *val)
{
  std::basic_regex<char,std::regex_traits<char> > *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // r14
  bool result; // al
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (std::basic_regex<char,std::regex_traits<char> > *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = (std::basic_regex<char,std::regex_traits<char> > *)v2;
  }
  *(_QWORD *)&v1->_M_flags = 1102416563LL;
  v1->_M_loc._M_impl = (std::locale::_Impl *)"1 32 32 6 reg:59";
  v1->_M_automaton._M_ptr = (std::__shared_ptr<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2>::element_type *)Time::isValid;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(
    v1 + 1,
    "[0-9]{1,2}:[0-9]{1,2}:[0-9]{1,2}",
    (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
  v4 = std::regex_match<std::char_traits<char>,std::allocator<char>,char,std::regex_traits<char>>(
         val,
         v1 + 1,
         (std::regex_constants::match_flag_type)0);
  std::basic_regex<char,std::regex_traits<char>>::~basic_regex(v1 + 1);
  result = v4;
  if ( v6 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)&v1->_M_flags = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 64: range 000000000CCC19F0-000000000CCC20EB
int32_t __cdecl Time::parseFrom(Time *const this, const std::string *val)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v5; // rsi
  bool v6; // r14
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v7; // rsi
  bool v8; // r14
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v9; // rsi
  bool v10; // r14
  int32_t v11; // r14d
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  char v16[464]; // [rsp+10h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 32 6 reg:65 96 32 4 m:66 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Time::parseFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(
    (std::basic_regex<char,std::regex_traits<char> > *const)(v2 + 32),
    "(\\d*):(\\d*):(\\d*)",
    (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96));
  if ( !std::regex_match<std::char_traits<char>,std::allocator<char>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
          val,
          (std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *)(v2 + 96),
          (const std::basic_regex<char,std::regex_traits<char> > *)(v2 + 32),
          (std::regex_constants::match_flag_type)0)
    || std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::size((const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96)) != 3 )
  {
    goto LABEL_16;
  }
  v5 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
         (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
         0LL);
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    v5 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 160, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 160),
    v5);
  v6 = common::tools::StringUtils::strToNum<unsigned char>((const std::string *)(v2 + 160), &this->hour, 1) == 0;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  if ( v6 )
    goto LABEL_16;
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  v7 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
         (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
         1uLL);
  if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
  {
    v7 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 224, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 224),
    v7);
  v8 = common::tools::StringUtils::strToNum<unsigned short>((const std::string *)(v2 + 224), &this->minute, 1) == 0;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  if ( v8 )
    goto LABEL_16;
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  v9 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
         (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
         2uLL);
  if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
  {
    v9 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 288, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 288),
    v9);
  v10 = common::tools::StringUtils::strToNum<unsigned short>((const std::string *)(v2 + 288), &this->second, 1) == 0;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  if ( v10 )
  {
LABEL_16:
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/data_type.cpp",
      "parseFrom",
      82);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 352),
            (const char (*)[16])"parseFrom time:");
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, val);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v11 = -1;
  }
  else
  {
    v11 = 0;
  }
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::~match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96));
  std::basic_regex<char,std::regex_traits<char>>::~basic_regex((std::basic_regex<char,std::regex_traits<char> > *const)(v2 + 32));
  result = v11;
  if ( v16 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 87: range 000000000CCC20EC-000000000CCC238D
int32_t __cdecl Time::parseFrom(Time *const this, const common::tools::TxtFile::Row *row, const std::string *col_name)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v10[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 10 str_val:88 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Time::parseFrom;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  std::string::basic_string(v3 + 32);
  if ( common::tools::TxtFile::Row::assignToStr(row, col_name, (std::string *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/data_type.cpp",
      "parseFrom",
      91);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[29])"assignToStr fails, col_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, col_name);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    v7 = Time::parseFrom(this, (const std::string *)(v3 + 32));
  }
  std::string::~string((void *)(v3 + 32));
  result = v7;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 98: range 000000000CCC238E-000000000CCC24C7
bool __cdecl DateTime::isValid(const std::string *val)
{
  std::basic_regex<char,std::regex_traits<char> > *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // r14
  bool result; // al
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (std::basic_regex<char,std::regex_traits<char> > *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = (std::basic_regex<char,std::regex_traits<char> > *)v2;
  }
  *(_QWORD *)&v1->_M_flags = 1102416563LL;
  v1->_M_loc._M_impl = (std::locale::_Impl *)"1 32 32 6 reg:99";
  v1->_M_automaton._M_ptr = (std::__shared_ptr<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2>::element_type *)DateTime::isValid;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(
    v1 + 1,
    "[0-9]{1,4}-[0-9]{1,2}-[0-9]{1,2} [0-9]{1,2}:[0-9]{1,2}:[0-9]{1,2}",
    (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
  v4 = std::regex_match<std::char_traits<char>,std::allocator<char>,char,std::regex_traits<char>>(
         val,
         v1 + 1,
         (std::regex_constants::match_flag_type)0);
  std::basic_regex<char,std::regex_traits<char>>::~basic_regex(v1 + 1);
  result = v4;
  if ( v6 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)&v1->_M_flags = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 104: range 000000000CCC24C8-000000000CCC2FC9
int32_t __cdecl DateTime::parseFrom(DateTime *const this, const std::string *val)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v5; // rsi
  bool v6; // r14
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v7; // rsi
  bool v8; // r14
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v9; // rsi
  bool v10; // r14
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v11; // rsi
  bool v12; // r14
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v13; // rsi
  bool v14; // r14
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v15; // rsi
  bool v16; // r14
  int32_t v17; // r14d
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  char v22[656]; // [rsp+10h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 32 7 reg:105 96 32 5 m:106 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 "
                        "9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DateTime::parseFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(
    (std::basic_regex<char,std::regex_traits<char> > *const)(v2 + 32),
    "(\\d*)-(\\d*)-(\\d*) (\\d*):(\\d*):(\\d*)",
    (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96));
  if ( !std::regex_match<std::char_traits<char>,std::allocator<char>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
          val,
          (std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *)(v2 + 96),
          (const std::basic_regex<char,std::regex_traits<char> > *)(v2 + 32),
          (std::regex_constants::match_flag_type)0)
    || std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::size((const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96)) != 6 )
  {
    goto LABEL_25;
  }
  v5 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
         (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
         0LL);
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    v5 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 160, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 160),
    v5);
  v6 = common::tools::StringUtils::strToNum<unsigned short>((const std::string *)(v2 + 160), &this->year, 1) == 0;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  if ( v6 )
    goto LABEL_25;
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  v7 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
         (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
         1uLL);
  if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
  {
    v7 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 224, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 224),
    v7);
  v8 = common::tools::StringUtils::strToNum<unsigned char>((const std::string *)(v2 + 224), &this->month, 1) == 0;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  if ( v8 )
    goto LABEL_25;
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  v9 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
         (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
         2uLL);
  if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
  {
    v9 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 288, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 288),
    v9);
  v10 = common::tools::StringUtils::strToNum<unsigned short>((const std::string *)(v2 + 288), &this->day, 1) == 0;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  if ( v10 )
    goto LABEL_25;
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  v11 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
          (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
          3uLL);
  if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
  {
    v11 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 352, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 352),
    v11);
  v12 = common::tools::StringUtils::strToNum<unsigned char>((const std::string *)(v2 + 352), &this->hour, 1) == 0;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  if ( v12 )
    goto LABEL_25;
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  v13 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
          (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
          4uLL);
  if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
  {
    v13 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 416, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 416),
    v13);
  v14 = common::tools::StringUtils::strToNum<unsigned short>((const std::string *)(v2 + 416), &this->minute, 1) == 0;
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  if ( v14 )
    goto LABEL_25;
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
  v15 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
          (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96),
          5uLL);
  if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
  {
    v15 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
    __asan_report_store_n(v2 + 480, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
    (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 480),
    v15);
  v16 = common::tools::StringUtils::strToNum<unsigned short>((const std::string *)(v2 + 480), &this->second, 1) == 0;
  std::string::~string((void *)(v2 + 480));
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
  if ( v16 )
  {
LABEL_25:
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 544, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 544),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/data_type.cpp",
      "parseFrom",
      128);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[16])"parseFrom time:");
    v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, val);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v17 = -1;
  }
  else
  {
    v17 = 0;
  }
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::~match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 96));
  std::basic_regex<char,std::regex_traits<char>>::~basic_regex((std::basic_regex<char,std::regex_traits<char> > *const)(v2 + 32));
  result = v17;
  if ( v22 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 133: range 000000000CCC2FCA-000000000CCC326B
int32_t __cdecl DateTime::parseFrom(
        DateTime *const this,
        const common::tools::TxtFile::Row *row,
        const std::string *col_name)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  char v10[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 str_val:134 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DateTime::parseFrom;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  std::string::basic_string(v3 + 32);
  if ( common::tools::TxtFile::Row::assignToStr(row, col_name, (std::string *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/data_type.cpp",
      "parseFrom",
      137);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[29])"assignToStr fails, col_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, col_name);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    v7 = DateTime::parseFrom(this, (const std::string *)(v3 + 32));
  }
  std::string::~string((void *)(v3 + 32));
  result = v7;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 145: range 000000000CCC326C-000000000CCC38B9
int32_t __cdecl DbIpConfig::parseFrom(DbIpConfig *const this, const std::string *input_ip)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::system::error_code *v5; // rcx
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  char v13[336]; // [rsp+20h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 9 <unknown> 64 16 6 ec:153 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbIpConfig::parseFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  std::string::operator=(this, input_ip);
  if ( std::string::find_first_of(this, "/", 0LL) == -1 )
    std::string::append(this, "/32");
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 64);
  *(_DWORD *)(v2 + 64) = 0;
  if ( *(_BYTE *)(((v2 + 68) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 68) & 7) >= *(_BYTE *)(((v2 + 68) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(v2 + 68);
  }
  *(_BYTE *)(v2 + 68) = 0;
  if ( *(_BYTE *)(((v2 + 72) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v2 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v5 = (boost::system::error_code *)this;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::asio::ip::make_network_v4((const std::string *)(v2 + 32), v5);
  boost::asio::ip::network_v4::operator=(&this->ip_net, (boost::asio::ip::network_v4 *)(v2 + 32));
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v2 + 64)) )
  {
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/data_type.cpp",
      "parseFrom",
      157);
    v6 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[4])"ip:");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &this->db_ip_str);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v7,
           (const char (*)[28])" make_network_v4 fails, ec:");
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    boost::system::error_code::message[abi:cxx11](
      (std::string *)(v2 + 160),
      (const boost::system::error_code *const)(v2 + 64));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  else if ( boost::asio::ip::network_v4::prefix_length(&this->ip_net) )
  {
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/data_type.cpp",
      "parseFrom",
      162);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v11 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v10, (const char (*)[4])"ip:");
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &this->db_ip_str);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" invalid!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    result = -1;
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityRegionSearch.gen.cpp

// Line 12: range 0000000012DD72A4-0000000012DD7617
const char *__fastcall data::enumValToStr(data::RegionSearchType e, __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // al
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rdi
  int v8; // ecx
  char v9; // al
  const char *result; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::RegionSearchType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 4 e:11 64 8 7 iter:14 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getRegionSearchTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::RegionSearchType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RegionSearchType,std::pair<std::string,std::string>>::find(map, (const std::map<data::RegionSearchType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RegionSearchType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RegionSearchType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "enumValToStr",
      17);
    v6 = "invalid e:";
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[11])"invalid e:");
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v8 = *(_DWORD *)(v2 + 48);
    v9 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      v7 = (common::milog::MiLogStream *)(v2 + 32);
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v2 + 32, v6);
    }
    *(_DWORD *)(v2 + 32) = v8;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = "INVALID_RegionSearchType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::RegionSearchType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > > *const)(v2 + 64));
    result = (const char *)std::string::c_str(&v11->second.second);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 24: range 0000000012DD7618-0000000012DD7BD0
__int64 __fastcall data::enumNameToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::RegionSearchType>,false,true>::pointer v10; // rax
  data::RegionSearchType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::RegionSearchType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 5 it:33 96 8 9 <unknown> 128 8 4 s:23 160 32 9 <unknown> 224 32 9 <unkno"
                        "wn> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumNameToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  *(_QWORD *)(v2 + 128) = s;
  if ( *(_QWORD *)(v2 + 128) )
  {
    m = data::getRegionSearchTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RegionSearchType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RegionSearchType>::find(
                                                                                             m,
                                                                                             (const std::unordered_map<std::string,data::RegionSearchType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RegionSearchType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::RegionSearchType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RegionSearchType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchType>,true> *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "enumNameToVal",
        36);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::RegionSearchType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::RegionSearchType>,false,true> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      v12 = *(_BYTE *)((e >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)((e & 7) + 3) >= v12 )
      {
        LOBYTE(v7) = v12 != 0;
        __asan_report_store4(e, v7);
      }
      *(_DWORD *)e = second;
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "enumNameToVal",
      27);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 45: range 0000000012DD7BD1-0000000012DD84F6
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::RegionSearchType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::RegionSearchType>,false,true>::pointer v12; // rax
  data::RegionSearchType second; // ecx
  char v14; // dl
  char v16[528]; // [rsp+20h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 8 5 "
                        "it:57 144 8 9 <unknown> 176 8 4 s:44 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 40"
                        "0 40 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  *(_QWORD *)(v2 + 176) = s;
  if ( *(_QWORD *)(v2 + 176) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::RegionSearchType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::RegionSearchType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::RegionSearchType>::pair<char const(&)[13],data::RegionSearchType,true>(
        (std::pair<const std::string,data::RegionSearchType> *const)(v2 + 400),
        (const char (*)[13])byte_1AA9E280,
        (data::RegionSearchType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::RegionSearchType>>::allocator((std::allocator<std::pair<const std::string,data::RegionSearchType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::RegionSearchType>::unordered_map(
        &data::enumStrToVal(char const*,data::RegionSearchType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RegionSearchType> >)__PAIR128__(1LL, v2 + 400),
        0LL,
        (const std::unordered_map<std::string,data::RegionSearchType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::RegionSearchType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::RegionSearchType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::RegionSearchType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::RegionSearchType>::~unordered_map,
        &data::enumStrToVal(char const*,data::RegionSearchType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RegionSearchType>>::~allocator((std::allocator<std::pair<const std::string,data::RegionSearchType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RegionSearchType> *)(v2 + 440);
            i != (std::pair<const std::string,data::RegionSearchType> *)(v2 + 400);
            std::pair<std::string const,data::RegionSearchType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 400) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_BYTE *)(v7 + 4) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v8 = *(const char **)(v2 + 176);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 272),
      v8,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, v8);
    *(std::unordered_map<std::string,data::RegionSearchType>::iterator *)(v2 + 112) = std::unordered_map<std::string,data::RegionSearchType>::find(
                                                                                        &data::enumStrToVal(char const*,data::RegionSearchType &)::m,
                                                                                        (const std::unordered_map<std::string,data::RegionSearchType>::key_type *)(v2 + 272));
    std::string::~string((void *)(v2 + 272));
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v2 + 272);
    *(std::unordered_map<std::string,data::RegionSearchType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::RegionSearchType>::end(&data::enumStrToVal(char const*,data::RegionSearchType &)::m);
    v9 = (char *)(v2 + 144);
    v10 = std::__detail::operator==<std::pair<std::string const,data::RegionSearchType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchType>,true> *)(v2 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchType>,true> *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 336, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "enumStrToVal",
        60);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 336),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 176));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::RegionSearchType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::RegionSearchType>,false,true> *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v12->second);
      }
      second = v12->second;
      v14 = *(_BYTE *)((e >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((e & 7) + 3) >= v14 )
      {
        LOBYTE(v9) = v14 != 0;
        __asan_report_store4(e, v9);
      }
      *(_DWORD *)e = second;
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "enumStrToVal",
      48);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0xFFFFFFFFLL;
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 69: range 0000000012DD84F7-0000000012DD850D
const char *__cdecl data::getDescription(data::RegionSearchType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 74: range 0000000012DD850E-0000000012DD86C3
bool __cdecl data::isValidRegionSearchType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::RegionSearchType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::RegionSearchType,std::pair<std::string,std::string >> *v6; // rcx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:75 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRegionSearchType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getRegionSearchTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::RegionSearchType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RegionSearchType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getRegionSearchTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::RegionSearchType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RegionSearchType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::RegionSearchType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 80: range 0000000012DD86C4-0000000012DD8825
bool __cdecl data::isValidRegionSearchTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::RegionSearchType> *v5; // rcx
  const std::unordered_map<std::string,data::RegionSearchType> *v6; // rcx
  bool result; // al
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRegionSearchTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getRegionSearchTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::RegionSearchType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RegionSearchType>::end(v5);
  v6 = data::getRegionSearchTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::RegionSearchType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::RegionSearchType>::find(
                                                                                           v6,
                                                                                           name);
  result = std::__detail::operator!=<std::pair<std::string const,data::RegionSearchType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchType>,true> *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 85: range 0000000012DD8826-0000000012DD8C2C
const std::unordered_map<std::string,data::RegionSearchType> *__cdecl data::getRegionSearchTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::RegionSearchType> *i; // r14
  const std::unordered_map<std::string,data::RegionSearchType> *result; // rax
  char v6[272]; // [rsp+10h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 80 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getRegionSearchTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRegionSearchTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRegionSearchTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::RegionSearchType>::pair<char const(&)[24],data::RegionSearchType,true>(
      (std::pair<const std::string,data::RegionSearchType> *const)(v1 + 112),
      (const char (*)[24])"REGION_SEARCH_TYPE_NONE",
      (data::RegionSearchType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "REGION_SEARCH_TYPE_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::RegionSearchType>::pair<char const(&)[28],data::RegionSearchType,true>(
      (std::pair<const std::string,data::RegionSearchType> *const)(v1 + 152),
      (const char (*)[28])"REGION_SEARCH_TYPE_ACTIVITY",
      (data::RegionSearchType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::RegionSearchType>>::allocator((std::allocator<std::pair<const std::string,data::RegionSearchType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::RegionSearchType>::unordered_map(
      &data::getRegionSearchTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::RegionSearchType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::RegionSearchType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::RegionSearchType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::RegionSearchType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRegionSearchTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::RegionSearchType>::~unordered_map,
      &data::getRegionSearchTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::RegionSearchType>>::~allocator((std::allocator<std::pair<const std::string,data::RegionSearchType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::RegionSearchType> *)(v1 + 192);
          i != (std::pair<const std::string,data::RegionSearchType> *)(v1 + 112);
          std::pair<std::string const,data::RegionSearchType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getRegionSearchTypeNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 95: range 0000000012DD8C2D-0000000012DD91EA
const std::map<data::RegionSearchType,std::pair<std::string,std::string >> *__cdecl data::getRegionSearchTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::RegionSearchType,std::pair<std::string,std::string >> *result; // rax
  char v8[560]; // [rsp+10h] [rbp-230h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(512LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 64 9 <unknown> 208 64 "
                        "9 <unknown> 304 144 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getRegionSearchTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862728] = -219021312;
  v3[536862729] = 62194;
  v3[536862734] = -202116109;
  v3[536862735] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRegionSearchTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRegionSearchTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[1])byte_1A9D7400,
      (const char (*)[24])"REGION_SEARCH_TYPE_NONE");
    std::pair<data::RegionSearchType const,std::pair<std::string,std::string>>::pair<data::RegionSearchType,true>(
      (std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::RegionSearchType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[13])byte_1AA9E280,
      (const char (*)[28])"REGION_SEARCH_TYPE_ACTIVITY");
    std::pair<data::RegionSearchType const,std::pair<std::string,std::string>>::pair<data::RegionSearchType,true>(
      (std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::RegionSearchType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::RegionSearchType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::RegionSearchType,std::pair<std::string,std::string>>::map(
      &data::getRegionSearchTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::RegionSearchType> *)(v1 + 48),
      (const std::map<data::RegionSearchType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRegionSearchTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RegionSearchType,std::pair<std::string,std::string>>::~map,
      &data::getRegionSearchTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::RegionSearchType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::RegionSearchType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::RegionSearchType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    v5 = ((v1 + 304) >> 3) + 2147450880;
    *(_DWORD *)v5 = -117901064;
    *(_DWORD *)(v5 + 4) = -117901064;
    *(_DWORD *)(v5 + 8) = -117901064;
    *(_DWORD *)(v5 + 12) = -117901064;
    *(_WORD *)(v5 + 16) = -1800;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 208));
    v6 = (_DWORD *)(((v1 + 208) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 112));
  }
  result = &data::getRegionSearchTypeEnumMap[abi:cxx11](void)::m;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 105: range 0000000012DD91EB-0000000012DD955E
const char *__fastcall data::enumValToStr(data::RegionSearchCondType e, __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // al
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rdi
  int v8; // ecx
  char v9; // al
  const char *result; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::RegionSearchCondType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:104 64 8 8 iter:107 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getRegionSearchCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::RegionSearchCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RegionSearchCondType,std::pair<std::string,std::string>>::find(map, (const std::map<data::RegionSearchCondType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RegionSearchCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RegionSearchCondType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "enumValToStr",
      110);
    v6 = "invalid e:";
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[11])"invalid e:");
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v8 = *(_DWORD *)(v2 + 48);
    v9 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      v7 = (common::milog::MiLogStream *)(v2 + 32);
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v2 + 32, v6);
    }
    *(_DWORD *)(v2 + 32) = v8;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = "INVALID_RegionSearchCondType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::RegionSearchCondType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > > *const)(v2 + 64));
    result = (const char *)std::string::c_str(&v11->second.second);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 117: range 0000000012DD955F-0000000012DD9B17
__int64 __fastcall data::enumNameToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::RegionSearchCondType>,false,true>::pointer v10; // rax
  data::RegionSearchCondType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::RegionSearchCondType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:126 96 8 9 <unknown> 128 8 5 s:116 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumNameToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  *(_QWORD *)(v2 + 128) = s;
  if ( *(_QWORD *)(v2 + 128) )
  {
    m = data::getRegionSearchCondTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RegionSearchCondType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RegionSearchCondType>::find(
                                                                                                 m,
                                                                                                 (const std::unordered_map<std::string,data::RegionSearchCondType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RegionSearchCondType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::RegionSearchCondType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RegionSearchCondType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchCondType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchCondType>,true> *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "enumNameToVal",
        129);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::RegionSearchCondType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::RegionSearchCondType>,false,true> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      v12 = *(_BYTE *)((e >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)((e & 7) + 3) >= v12 )
      {
        LOBYTE(v7) = v12 != 0;
        __asan_report_store4(e, v7);
      }
      *(_DWORD *)e = second;
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "enumNameToVal",
      120);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 138: range 0000000012DD9B18-0000000012DDA4E1
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::RegionSearchCondType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::RegionSearchCondType>,false,true>::pointer v12; // rax
  data::RegionSearchCondType second; // ecx
  char v14; // dl
  char v16[592]; // [rsp+20h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 8 6 it:151 176 8 9 <unknown> 208 8 5 s:137 240 32 9 <unknown> 304 32 9 <unknown> "
                        "368 32 9 <unknown> 432 80 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556927;
  v4[536862724] = 61956;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862736] = -202116109;
  *(_QWORD *)(v2 + 208) = s;
  if ( *(_QWORD *)(v2 + 208) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::RegionSearchCondType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::RegionSearchCondType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::RegionSearchCondType>::pair<char const(&)[11],data::RegionSearchCondType,true>(
        (std::pair<const std::string,data::RegionSearchCondType> *const)(v2 + 432),
        (const char (*)[11])byte_1AA9E560,
        (data::RegionSearchCondType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AA9E560);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::RegionSearchCondType>::pair<char const(&)[19],data::RegionSearchCondType,true>(
        (std::pair<const std::string,data::RegionSearchCondType> *const)(v2 + 472),
        (const char (*)[19])byte_1AA9E5A0,
        (data::RegionSearchCondType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::RegionSearchCondType>>::allocator((std::allocator<std::pair<const std::string,data::RegionSearchCondType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::RegionSearchCondType>::unordered_map(
        &data::enumStrToVal(char const*,data::RegionSearchCondType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RegionSearchCondType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::RegionSearchCondType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::RegionSearchCondType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::RegionSearchCondType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::RegionSearchCondType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::RegionSearchCondType>::~unordered_map,
        &data::enumStrToVal(char const*,data::RegionSearchCondType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RegionSearchCondType>>::~allocator((std::allocator<std::pair<const std::string,data::RegionSearchCondType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RegionSearchCondType> *)(v2 + 512);
            i != (std::pair<const std::string,data::RegionSearchCondType> *)(v2 + 432);
            std::pair<std::string const,data::RegionSearchCondType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 432) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_WORD *)(v7 + 8) = -1800;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    v8 = *(const char **)(v2 + 208);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 304),
      v8,
      (const std::allocator<char> *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v8);
    *(std::unordered_map<std::string,data::RegionSearchCondType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::RegionSearchCondType>::find(
                                                                                            &data::enumStrToVal(char const*,data::RegionSearchCondType &)::m,
                                                                                            (const std::unordered_map<std::string,data::RegionSearchCondType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::RegionSearchCondType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::RegionSearchCondType>::end(&data::enumStrToVal(char const*,data::RegionSearchCondType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::RegionSearchCondType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchCondType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchCondType>,true> *)(v2 + 176));
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 368, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 368),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "enumStrToVal",
        154);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::RegionSearchCondType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::RegionSearchCondType>,false,true> *const)(v2 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v12->second);
      }
      second = v12->second;
      v14 = *(_BYTE *)((e >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((e & 7) + 3) >= v14 )
      {
        LOBYTE(v9) = v14 != 0;
        __asan_report_store4(e, v9);
      }
      *(_DWORD *)e = second;
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "enumStrToVal",
      141);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 240),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    result = 0xFFFFFFFFLL;
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 163: range 0000000012DDA4E2-0000000012DDA4F8
const char *__cdecl data::getDescription(data::RegionSearchCondType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 168: range 0000000012DDA4F9-0000000012DDA6AE
bool __cdecl data::isValidRegionSearchCondType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::RegionSearchCondType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::RegionSearchCondType,std::pair<std::string,std::string >> *v6; // rcx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:169 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRegionSearchCondType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getRegionSearchCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::RegionSearchCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RegionSearchCondType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getRegionSearchCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::RegionSearchCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RegionSearchCondType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::RegionSearchCondType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 174: range 0000000012DDA6AF-0000000012DDA810
bool __cdecl data::isValidRegionSearchCondTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::RegionSearchCondType> *v5; // rcx
  const std::unordered_map<std::string,data::RegionSearchCondType> *v6; // rcx
  bool result; // al
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRegionSearchCondTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getRegionSearchCondTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::RegionSearchCondType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RegionSearchCondType>::end(v5);
  v6 = data::getRegionSearchCondTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::RegionSearchCondType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::RegionSearchCondType>::find(
                                                                                               v6,
                                                                                               name);
  result = std::__detail::operator!=<std::pair<std::string const,data::RegionSearchCondType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchCondType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchCondType>,true> *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 179: range 0000000012DDA811-0000000012DDACD3
const std::unordered_map<std::string,data::RegionSearchCondType> *__cdecl data::getRegionSearchCondTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::RegionSearchCondType> *i; // r14
  const std::unordered_map<std::string,data::RegionSearchCondType> *result; // rax
  char v6[336]; // [rsp+10h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <"
                        "unknown> 128 120 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getRegionSearchCondTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRegionSearchCondTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRegionSearchCondTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::RegionSearchCondType>::pair<char const(&)[24],data::RegionSearchCondType,true>(
      (std::pair<const std::string,data::RegionSearchCondType> *const)(v1 + 128),
      (const char (*)[24])"REGION_SEARCH_COND_NONE",
      (data::RegionSearchCondType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "REGION_SEARCH_COND_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::RegionSearchCondType>::pair<char const(&)[33],data::RegionSearchCondType,true>(
      (std::pair<const std::string,data::RegionSearchCondType> *const)(v1 + 168),
      (const char (*)[33])"REGION_SEARCH_COND_ACTIVITY_COND",
      (data::RegionSearchCondType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "REGION_SEARCH_COND_ACTIVITY_COND");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::RegionSearchCondType>::pair<char const(&)[33],data::RegionSearchCondType,true>(
      (std::pair<const std::string,data::RegionSearchCondType> *const)(v1 + 208),
      (const char (*)[33])"REGION_SEARCH_COND_FINISH_SEARCH",
      (data::RegionSearchCondType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::RegionSearchCondType>>::allocator((std::allocator<std::pair<const std::string,data::RegionSearchCondType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::RegionSearchCondType>::unordered_map(
      &data::getRegionSearchCondTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::RegionSearchCondType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::RegionSearchCondType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::RegionSearchCondType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::RegionSearchCondType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRegionSearchCondTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::RegionSearchCondType>::~unordered_map,
      &data::getRegionSearchCondTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::RegionSearchCondType>>::~allocator((std::allocator<std::pair<const std::string,data::RegionSearchCondType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::RegionSearchCondType> *)(v1 + 248);
          i != (std::pair<const std::string,data::RegionSearchCondType> *)(v1 + 128);
          std::pair<std::string const,data::RegionSearchCondType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getRegionSearchCondTypeNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 190: range 0000000012DDACD4-0000000012DDB3D2
const std::map<data::RegionSearchCondType,std::pair<std::string,std::string >> *__cdecl data::getRegionSearchCondTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  char v9[752]; // [rsp+10h] [rbp-2F0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(704LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 64 9"
                        " <unknown> 224 64 9 <unknown> 320 64 9 <unknown> 416 216 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getRegionSearchCondTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862726] = -218959118;
  v3[536862729] = -218959118;
  v3[536862732] = -218959118;
  v3[536862739] = -218103808;
  v3[536862740] = -202116109;
  v3[536862741] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRegionSearchCondTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRegionSearchCondTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A9D7400,
      (const char (*)[24])"REGION_SEARCH_COND_NONE");
    std::pair<data::RegionSearchCondType const,std::pair<std::string,std::string>>::pair<data::RegionSearchCondType,true>(
      (std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::RegionSearchCondType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[11],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[11])byte_1AA9E560,
      (const char (*)[33])"REGION_SEARCH_COND_ACTIVITY_COND");
    std::pair<data::RegionSearchCondType const,std::pair<std::string,std::string>>::pair<data::RegionSearchCondType,true>(
      (std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::RegionSearchCondType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[19])byte_1AA9E5A0,
      (const char (*)[33])"REGION_SEARCH_COND_FINISH_SEARCH");
    std::pair<data::RegionSearchCondType const,std::pair<std::string,std::string>>::pair<data::RegionSearchCondType,true>(
      (std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::RegionSearchCondType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::RegionSearchCondType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::RegionSearchCondType,std::pair<std::string,std::string>>::map(
      &data::getRegionSearchCondTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::RegionSearchCondType> *)(v1 + 48),
      (const std::map<data::RegionSearchCondType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRegionSearchCondTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RegionSearchCondType,std::pair<std::string,std::string>>::~map,
      &data::getRegionSearchCondTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::RegionSearchCondType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::RegionSearchCondType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::RegionSearchCondType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    v5 = ((v1 + 416) >> 3) + 2147450880;
    *(_DWORD *)v5 = -117901064;
    *(_DWORD *)(v5 + 4) = -117901064;
    *(_DWORD *)(v5 + 8) = -117901064;
    *(_DWORD *)(v5 + 12) = -117901064;
    *(_DWORD *)(v5 + 16) = -117901064;
    *(_DWORD *)(v5 + 20) = -117901064;
    *(_WORD *)(v5 + 24) = -1800;
    *(_BYTE *)(v5 + 26) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 320));
    v6 = (_DWORD *)(((v1 + 320) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 224));
    v7 = (_DWORD *)(((v1 + 224) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 128));
  }
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return &data::getRegionSearchCondTypeEnumMap[abi:cxx11](void)::m;
};

// Line 201: range 0000000012DDB3D3-0000000012DDB746
const char *__fastcall data::enumValToStr(data::RegionSearchRecycleType e, __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // al
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rdi
  int v8; // ecx
  char v9; // al
  const char *result; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:200 64 8 8 iter:203 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getRegionSearchRecycleTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string>>::find(map, (const std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "enumValToStr",
      206);
    v6 = "invalid e:";
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[11])"invalid e:");
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v8 = *(_DWORD *)(v2 + 48);
    v9 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      v7 = (common::milog::MiLogStream *)(v2 + 32);
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v2 + 32, v6);
    }
    *(_DWORD *)(v2 + 32) = v8;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = "INVALID_RegionSearchRecycleType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::RegionSearchRecycleType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > > *const)(v2 + 64));
    result = (const char *)std::string::c_str(&v11->second.second);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 213: range 0000000012DDB747-0000000012DDBCFF
__int64 __fastcall data::enumNameToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::RegionSearchRecycleType>,false,true>::pointer v10; // rax
  data::RegionSearchRecycleType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::RegionSearchRecycleType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:222 96 8 9 <unknown> 128 8 5 s:212 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumNameToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  *(_QWORD *)(v2 + 128) = s;
  if ( *(_QWORD *)(v2 + 128) )
  {
    m = data::getRegionSearchRecycleTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RegionSearchRecycleType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RegionSearchRecycleType>::find(
                                                                                                    m,
                                                                                                    (const std::unordered_map<std::string,data::RegionSearchRecycleType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RegionSearchRecycleType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::RegionSearchRecycleType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RegionSearchRecycleType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchRecycleType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchRecycleType>,true> *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "enumNameToVal",
        225);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::RegionSearchRecycleType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::RegionSearchRecycleType>,false,true> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      v12 = *(_BYTE *)((e >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)((e & 7) + 3) >= v12 )
      {
        LOBYTE(v7) = v12 != 0;
        __asan_report_store4(e, v7);
      }
      *(_DWORD *)e = second;
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "enumNameToVal",
      216);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 234: range 0000000012DDBD00-0000000012DDC625
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::RegionSearchRecycleType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::RegionSearchRecycleType>,false,true>::pointer v12; // rax
  data::RegionSearchRecycleType second; // ecx
  char v14; // dl
  char v16[528]; // [rsp+20h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 8 6 "
                        "it:246 144 8 9 <unknown> 176 8 5 s:233 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> "
                        "400 40 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  *(_QWORD *)(v2 + 176) = s;
  if ( *(_QWORD *)(v2 + 176) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::RegionSearchRecycleType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::RegionSearchRecycleType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::RegionSearchRecycleType>::pair<char const(&)[13],data::RegionSearchRecycleType,true>(
        (std::pair<const std::string,data::RegionSearchRecycleType> *const)(v2 + 400),
        (const char (*)[13])byte_1AA9E8E0,
        (data::RegionSearchRecycleType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::RegionSearchRecycleType>>::allocator((std::allocator<std::pair<const std::string,data::RegionSearchRecycleType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::RegionSearchRecycleType>::unordered_map(
        &data::enumStrToVal(char const*,data::RegionSearchRecycleType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RegionSearchRecycleType> >)__PAIR128__(1LL, v2 + 400),
        0LL,
        (const std::unordered_map<std::string,data::RegionSearchRecycleType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::RegionSearchRecycleType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::RegionSearchRecycleType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::RegionSearchRecycleType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::RegionSearchRecycleType>::~unordered_map,
        &data::enumStrToVal(char const*,data::RegionSearchRecycleType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RegionSearchRecycleType>>::~allocator((std::allocator<std::pair<const std::string,data::RegionSearchRecycleType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RegionSearchRecycleType> *)(v2 + 440);
            i != (std::pair<const std::string,data::RegionSearchRecycleType> *)(v2 + 400);
            std::pair<std::string const,data::RegionSearchRecycleType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 400) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_BYTE *)(v7 + 4) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v8 = *(const char **)(v2 + 176);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 272),
      v8,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, v8);
    *(std::unordered_map<std::string,data::RegionSearchRecycleType>::iterator *)(v2 + 112) = std::unordered_map<std::string,data::RegionSearchRecycleType>::find(
                                                                                               &data::enumStrToVal(char const*,data::RegionSearchRecycleType &)::m,
                                                                                               (const std::unordered_map<std::string,data::RegionSearchRecycleType>::key_type *)(v2 + 272));
    std::string::~string((void *)(v2 + 272));
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v2 + 272);
    *(std::unordered_map<std::string,data::RegionSearchRecycleType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::RegionSearchRecycleType>::end(&data::enumStrToVal(char const*,data::RegionSearchRecycleType &)::m);
    v9 = (char *)(v2 + 144);
    v10 = std::__detail::operator==<std::pair<std::string const,data::RegionSearchRecycleType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchRecycleType>,true> *)(v2 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchRecycleType>,true> *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 336, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "enumStrToVal",
        249);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 336),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 176));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::RegionSearchRecycleType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::RegionSearchRecycleType>,false,true> *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v12->second);
      }
      second = v12->second;
      v14 = *(_BYTE *)((e >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((e & 7) + 3) >= v14 )
      {
        LOBYTE(v9) = v14 != 0;
        __asan_report_store4(e, v9);
      }
      *(_DWORD *)e = second;
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "enumStrToVal",
      237);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0xFFFFFFFFLL;
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 258: range 0000000012DDC626-0000000012DDC63C
const char *__cdecl data::getDescription(data::RegionSearchRecycleType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 263: range 0000000012DDC63D-0000000012DDC7F2
bool __cdecl data::isValidRegionSearchRecycleType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >> *v6; // rcx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:264 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRegionSearchRecycleType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getRegionSearchRecycleTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getRegionSearchRecycleTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 269: range 0000000012DDC7F3-0000000012DDC954
bool __cdecl data::isValidRegionSearchRecycleTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::RegionSearchRecycleType> *v5; // rcx
  const std::unordered_map<std::string,data::RegionSearchRecycleType> *v6; // rcx
  bool result; // al
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRegionSearchRecycleTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getRegionSearchRecycleTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::RegionSearchRecycleType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RegionSearchRecycleType>::end(v5);
  v6 = data::getRegionSearchRecycleTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::RegionSearchRecycleType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::RegionSearchRecycleType>::find(
                                                                                                  v6,
                                                                                                  name);
  result = std::__detail::operator!=<std::pair<std::string const,data::RegionSearchRecycleType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchRecycleType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionSearchRecycleType>,true> *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 274: range 0000000012DDC955-0000000012DDCD5B
const std::unordered_map<std::string,data::RegionSearchRecycleType> *__cdecl data::getRegionSearchRecycleTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::RegionSearchRecycleType> *i; // r14
  const std::unordered_map<std::string,data::RegionSearchRecycleType> *result; // rax
  char v6[272]; // [rsp+10h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 80 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getRegionSearchRecycleTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRegionSearchRecycleTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRegionSearchRecycleTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::RegionSearchRecycleType>::pair<char const(&)[27],data::RegionSearchRecycleType,true>(
      (std::pair<const std::string,data::RegionSearchRecycleType> *const)(v1 + 112),
      (const char (*)[27])"REGION_SEARCH_RECYCLE_NONE",
      (data::RegionSearchRecycleType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "REGION_SEARCH_RECYCLE_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::RegionSearchRecycleType>::pair<char const(&)[31],data::RegionSearchRecycleType,true>(
      (std::pair<const std::string,data::RegionSearchRecycleType> *const)(v1 + 152),
      (const char (*)[31])"REGION_SEARCH_RECYCLE_PROGRESS",
      (data::RegionSearchRecycleType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::RegionSearchRecycleType>>::allocator((std::allocator<std::pair<const std::string,data::RegionSearchRecycleType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::RegionSearchRecycleType>::unordered_map(
      &data::getRegionSearchRecycleTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::RegionSearchRecycleType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::RegionSearchRecycleType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::RegionSearchRecycleType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::RegionSearchRecycleType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRegionSearchRecycleTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::RegionSearchRecycleType>::~unordered_map,
      &data::getRegionSearchRecycleTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::RegionSearchRecycleType>>::~allocator((std::allocator<std::pair<const std::string,data::RegionSearchRecycleType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::RegionSearchRecycleType> *)(v1 + 192);
          i != (std::pair<const std::string,data::RegionSearchRecycleType> *)(v1 + 112);
          std::pair<std::string const,data::RegionSearchRecycleType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getRegionSearchRecycleTypeNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 284: range 0000000012DDCD5C-0000000012DDD319
const std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >> *__cdecl data::getRegionSearchRecycleTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >> *result; // rax
  char v8[560]; // [rsp+10h] [rbp-230h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(512LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 64 9 <unknown> 208 64 "
                        "9 <unknown> 304 144 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getRegionSearchRecycleTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862728] = -219021312;
  v3[536862729] = 62194;
  v3[536862734] = -202116109;
  v3[536862735] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRegionSearchRecycleTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRegionSearchRecycleTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[1])byte_1A9D7400,
      (const char (*)[27])"REGION_SEARCH_RECYCLE_NONE");
    std::pair<data::RegionSearchRecycleType const,std::pair<std::string,std::string>>::pair<data::RegionSearchRecycleType,true>(
      (std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::RegionSearchRecycleType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[13])byte_1AA9E8E0,
      (const char (*)[31])"REGION_SEARCH_RECYCLE_PROGRESS");
    std::pair<data::RegionSearchRecycleType const,std::pair<std::string,std::string>>::pair<data::RegionSearchRecycleType,true>(
      (std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::RegionSearchRecycleType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::RegionSearchRecycleType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string>>::map(
      &data::getRegionSearchRecycleTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::RegionSearchRecycleType> *)(v1 + 48),
      (const std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRegionSearchRecycleTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RegionSearchRecycleType,std::pair<std::string,std::string>>::~map,
      &data::getRegionSearchRecycleTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::RegionSearchRecycleType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::RegionSearchRecycleType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::RegionSearchRecycleType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    v5 = ((v1 + 304) >> 3) + 2147450880;
    *(_DWORD *)v5 = -117901064;
    *(_DWORD *)(v5 + 4) = -117901064;
    *(_DWORD *)(v5 + 8) = -117901064;
    *(_DWORD *)(v5 + 12) = -117901064;
    *(_WORD *)(v5 + 16) = -1800;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 208));
    v6 = (_DWORD *)(((v1 + 208) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 112));
  }
  result = &data::getRegionSearchRecycleTypeEnumMap[abi:cxx11](void)::m;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 295: range 0000000012DDD31A-0000000012DDDB5A
int32_t __cdecl data::RegionSearchCond::init(
        data::RegionSearchCond *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  int *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t array_count; // [rsp+18h] [rbp-318h]
  uint32_t i; // [rsp+1Ch] [rbp-314h]
  char v15[784]; // [rsp+20h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 256 12 col_name:296";
  *(_QWORD *)(v2 + 16) = data::RegionSearchCond::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862741] = -202116109;
  v4[536862742] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    &byte_1AA4D700,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToEnum<data::RegionSearchCondType>(
         row,
         (const std::string *)(v2 + 96),
         &this->type) != 0;
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "init",
      300);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1AA4D740);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
    goto LABEL_18;
  }
  std::vector<int>::resize(&this->param, 5uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 4 )
    {
      std::vector<int>::resize(&this->param, array_count);
      result = 0;
      goto LABEL_18;
    }
    snprintf((char *)(v2 + 416), 0x100uLL, &byte_1AA4D780, i + 1);
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      (const char *)(v2 + 416),
      (const std::allocator<char> *)(v2 + 64));
    v8 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v8 )
      break;
LABEL_16:
    ;
  }
  v9 = std::vector<int>::operator[](&this->param, i);
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    (const char *)(v2 + 416),
    (const std::allocator<char> *)(v2 + 80));
  LOBYTE(v9) = common::tools::TxtFile::Row::assignToNum<int>(row, (const std::string *)(v2 + 288), v9) != 0;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)v9 )
  {
    array_count = i + 1;
    goto LABEL_16;
  }
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
    4u,
    "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
    "init",
    312);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1AA2F380);
  v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 416));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AA2F3C0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
  result = -1;
LABEL_18:
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 324: range 0000000012DDDB5C-0000000012DDECEF
int32_t __cdecl data::RegionSearchExcelConfig::init(
        data::RegionSearchExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  bool v8; // r15
  common::milog::MiLogStream *v9; // rax
  bool v10; // r15
  common::milog::MiLogStream *v11; // rax
  bool v12; // r15
  common::milog::MiLogStream *v13; // rax
  bool v14; // r15
  common::milog::MiLogStream *v15; // rax
  bool v16; // r15
  common::milog::MiLogStream *v17; // rax
  bool v18; // r15
  common::milog::MiLogStream *v19; // rax
  int32_t v20; // ebx
  char v22[1104]; // [rsp+10h] [rbp-450h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <"
                        "unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <u"
                        "nknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::RegionSearchExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    &byte_1AA9EAA0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 160), &this->id) != 0;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "init",
      327);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AA9EAE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      &byte_1AA9EB20,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToEnum<data::RegionSearchType>(
           row,
           (const std::string *)(v2 + 288),
           &this->search_type) != 0;
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
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
        4u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "init",
        332);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AA9EB60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        &byte_1AA9EBC0,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 416),
              &this->material_id) != 0;
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
          "init",
          337);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1AA9EC00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          &byte_1AA9EC60,
          (const std::allocator<char> *)(v2 + 96));
        v12 = common::tools::TxtFile::Row::assignToNum<bool>(
                row,
                (const std::string *)(v2 + 544),
                &this->is_clear_material) != 0;
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
        {
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 608, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 608),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
            "init",
            342);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v13, (const char (*)[45])byte_1AA9ECA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 672),
            &byte_1AA9ED00,
            (const std::allocator<char> *)(v2 + 112));
          v14 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 672),
                  &this->search_group_id) != 0;
          std::string::~string((void *)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
          {
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 736),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
              "init",
              347);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v15, (const char (*)[33])byte_1AA9ED40);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 800),
              &byte_1AA9EDA0,
              (const std::allocator<char> *)(v2 + 128));
            v16 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 800),
                    &this->revise_level) != 0;
            std::string::~string((void *)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v16 )
            {
              *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 864, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 864),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                "init",
                352);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 864),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v17, (const char (*)[33])byte_1AA9EDE0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 928),
                "AbilityGroup",
                (const std::allocator<char> *)(v2 + 144));
              v18 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 928), &this->ability_group) != 0;
              std::string::~string((void *)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( v18 )
              {
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 992, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 992),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                  "init",
                  357);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 992),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v19, (const char (*)[33])byte_1AA9EE80);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                v7 = -1;
              }
              else
              {
                v7 = 0;
              }
            }
          }
        }
      }
    }
  }
  v20 = v7;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v22);
  }
  return v20;
};

// Line 365: range 0000000012DDECF0-0000000012DE0C93
int32_t __cdecl data::RegionSearchCondExcelConfig::init(
        data::RegionSearchCondExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<data::RegionSearchCond>::reference v12; // rax
  std::vector<data::RegionSearchCond>::reference v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::vector<data::RegionSearchCond>::reference v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  bool v21; // r15
  unsigned __int64 v22; // rax
  char *k; // r14
  _DWORD *v24; // rax
  common::milog::MiLogStream *v25; // rax
  bool v26; // r14
  common::milog::MiLogStream *v27; // rax
  bool v28; // r14
  common::milog::MiLogStream *v29; // rax
  bool t; // [rsp+0h] [rbp-840h]
  bool ta; // [rsp+0h] [rbp-840h]
  bool tb; // [rsp+0h] [rbp-840h]
  bool tc; // [rsp+0h] [rbp-840h]
  data::RegionSearchCondType *td; // [rsp+0h] [rbp-840h]
  bool te; // [rsp+0h] [rbp-840h]
  int *tf; // [rsp+0h] [rbp-840h]
  bool tg; // [rsp+0h] [rbp-840h]
  uint32_t array_count; // [rsp+24h] [rbp-81Ch]
  uint32_t array_counta; // [rsp+24h] [rbp-81Ch]
  uint32_t i; // [rsp+28h] [rbp-818h]
  uint32_t j; // [rsp+2Ch] [rbp-814h]
  char v43[2064]; // [rsp+30h] [rbp-810h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(2016LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "36 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 24 9 <unknown> 320 32 11 val_str:368 384 32 9 <unkn"
                        "own> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unkno"
                        "wn> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unkno"
                        "wn> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <u"
                        "nknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 64 9 <unknown> 1696 256"
                        " 12 col_name:366";
  *(_QWORD *)(v2 + 16) = data::RegionSearchCondExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -218959118;
  v4[536862772] = -218959118;
  v4[536862781] = -202116109;
  v4[536862782] = -202116109;
  std::string::basic_string(v2 + 320);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 384),
    &byte_1AA9F1A0,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 384), &this->id) != 0;
  std::string::~string((void *)(v2 + 384));
  *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "init",
      371);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 448),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v5, (const char (*)[35])byte_1AA9F1E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_54;
  }
  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 512),
    &byte_1AA9F240,
    (const std::allocator<char> *)(v2 + 64));
  ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 512), &this->group_id) != 0;
  std::string::~string((void *)(v2 + 512));
  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( ta )
  {
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 576, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 576),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "init",
      376);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 576),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v7, (const char (*)[38])byte_1AA9F280);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_54;
  }
  *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 640),
    &byte_1AA9F2E0,
    (const std::allocator<char> *)(v2 + 80));
  tb = common::tools::TxtFile::Row::assignToEnum<data::LogicType>(
         row,
         (const std::string *)(v2 + 640),
         &this->logic_type) != 0;
  std::string::~string((void *)(v2 + 640));
  *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( tb )
  {
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 704, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 704),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "init",
      381);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 704),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v8, (const char (*)[45])byte_1AA9F320);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_54;
  }
  std::vector<data::RegionSearchCond>::resize(&this->cond, 5uLL);
  array_count = 0;
  for ( i = 0; i <= 4; ++i )
  {
    snprintf((char *)(v2 + 1696), 0x100uLL, asc_1AA9F380, i + 1);
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 768),
      (const char *)(v2 + 1696),
      (const std::allocator<char> *)(v2 + 96));
    tc = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 768));
    std::string::~string((void *)(v2 + 768));
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !tc )
    {
      td = &std::vector<data::RegionSearchCond>::operator[](&this->cond, i)->type;
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 112);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 832),
        (const char *)(v2 + 1696),
        (const std::allocator<char> *)(v2 + 112));
      LOBYTE(td) = common::tools::TxtFile::Row::assignToEnum<data::RegionSearchCondType>(
                     row,
                     (const std::string *)(v2 + 832),
                     td) != 0;
      std::string::~string((void *)(v2 + 832));
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 112);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( (_BYTE)td )
      {
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
          "init",
          393);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 896),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])byte_1AA2F380);
        v11 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v10, (const char (*)[256])(v2 + 1696));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1AA2F3C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
        goto LABEL_54;
      }
      v12 = std::vector<data::RegionSearchCond>::operator[](&this->cond, i);
      std::vector<int>::resize(&v12->param, 5uLL);
      array_counta = 0;
      for ( j = 0; ; ++j )
      {
        if ( j > 4 )
        {
          v17 = std::vector<data::RegionSearchCond>::operator[](&this->cond, i);
          std::vector<int>::resize(&v17->param, array_counta);
          array_count = i + 1;
          break;
        }
        snprintf((char *)(v2 + 1696), 0x100uLL, asc_1AA9F3C0, i + 1, j + 1);
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 960),
          (const char *)(v2 + 1696),
          (const std::allocator<char> *)(v2 + 128));
        te = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 960));
        std::string::~string((void *)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( !te )
        {
          v13 = std::vector<data::RegionSearchCond>::operator[](&this->cond, i);
          tf = std::vector<int>::operator[](&v13->param, j);
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1024),
            (const char *)(v2 + 1696),
            (const std::allocator<char> *)(v2 + 144));
          LOBYTE(tf) = common::tools::TxtFile::Row::assignToNum<int>(row, (const std::string *)(v2 + 1024), tf) != 0;
          std::string::~string((void *)(v2 + 1024));
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)tf )
          {
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1088) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1088, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1088),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
              "init",
              405);
            v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1088),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v14,
                    (const char (*)[14])byte_1AA2F380);
            v16 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v15,
                    (const char (*)[256])(v2 + 1696));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1AA2F3C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
            goto LABEL_54;
          }
          array_counta = j + 1;
        }
      }
    }
  }
  std::vector<data::RegionSearchCond>::resize(&this->cond, array_count);
  *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 160);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1152),
    &byte_1AA9F400,
    (const std::allocator<char> *)(v2 + 160));
  tg = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1152), (std::string *)(v2 + 320)) != 0;
  std::string::~string((void *)(v2 + 1152));
  *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 160);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( tg )
  {
    *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1216, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1216),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "init",
      418);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1216),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v18, (const char (*)[39])byte_1AA9F440);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
    *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v19 = ((v2 + 256) >> 3) + 2147450880;
    *(_WORD *)v19 = 0;
    *(_BYTE *)(v19 + 2) = 0;
    v20 = (_DWORD *)(((v2 + 1600) >> 3) + 2147450880);
    *v20 = 0;
    v20[1] = 0;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 176);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1600),
      ";",
      (const std::allocator<char> *)(v2 + 176));
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 192);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1632),
      ",",
      (const std::allocator<char> *)(v2 + 192));
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 208));
    std::vector<std::string>::vector(
      (std::vector<std::string> *const)(v2 + 256),
      (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1600),
      (const std::vector<std::string>::allocator_type *)(v2 + 208));
    v21 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
            (const std::string *)(v2 + 320),
            (const std::vector<std::string> *)(v2 + 256),
            &this->region_list,
            1) != 0;
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 256));
    v22 = ((v2 + 256) >> 3) + 2147450880;
    *(_WORD *)v22 = -1800;
    *(_BYTE *)(v22 + 2) = -8;
    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 208));
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    for ( k = (char *)(v2 + 1664); k != (char *)(v2 + 1600); std::string::~string(k) )
      k -= 32;
    v24 = (_DWORD *)(((v2 + 1600) >> 3) + 2147450880);
    *v24 = -117901064;
    v24[1] = -117901064;
    std::allocator<char>::~allocator(v2 + 192);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    std::allocator<char>::~allocator(v2 + 176);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v21 )
    {
      *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1280, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1280),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "init",
        423);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1280),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v25, (const char (*)[39])byte_1AA9F440);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
      *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 224);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1344),
        &byte_1AA31440,
        (const std::allocator<char> *)(v2 + 224));
      v26 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 1344),
              &this->reward_id) != 0;
      std::string::~string((void *)(v2 + 1344));
      *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 224);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v26 )
      {
        *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1408) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1408, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1408),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
          "init",
          428);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1408),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v27, (const char (*)[41])byte_1AA31480);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
        *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 240);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1472),
          &byte_1AA9F4A0,
          (const std::allocator<char> *)(v2 + 240));
        v28 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 1472),
                &this->total_progress) != 0;
        std::string::~string((void *)(v2 + 1472));
        *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 240);
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
        if ( v28 )
        {
          *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1536) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1536, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1536),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
            "init",
            433);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1536),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v29, (const char (*)[36])byte_1AA9F4E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
          *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
      }
    }
  }
LABEL_54:
  std::string::~string((void *)(v2 + 320));
  if ( v43 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862733) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450924 - (((_DWORD)v4 + 2147450932) & 0xFFFFFFF8) + 168) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F4) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 2016LL, v43);
  }
  return v6;
};

// Line 441: range 0000000012DE0C94-0000000012DE3335
int32_t __cdecl data::RegionSearchRegionExcelConfig::init(
        data::RegionSearchRegionExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
  _DWORD *v9; // rax
  bool v10; // r15
  unsigned __int64 v11; // rax
  char *i; // r14
  _DWORD *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  bool v21; // r15
  unsigned __int64 v22; // rax
  char *j; // r14
  _DWORD *v24; // rax
  common::milog::MiLogStream *v25; // rax
  bool v26; // r14
  common::milog::MiLogStream *v27; // rax
  bool v28; // r14
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  _DWORD *v31; // rax
  bool v32; // r15
  unsigned __int64 v33; // rax
  char *k; // r14
  _DWORD *v35; // rax
  common::milog::MiLogStream *v36; // rax
  bool v37; // r14
  common::milog::MiLogStream *v38; // rax
  bool v39; // r14
  common::milog::MiLogStream *v40; // rax
  bool v41; // r14
  common::milog::MiLogStream *v42; // rax
  bool t; // [rsp+0h] [rbp-910h]
  bool ta; // [rsp+0h] [rbp-910h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-900h]
  std::initializer_list<std::string > v47; // [rsp+20h] [rbp-8F0h]
  char v48[2256]; // [rsp+40h] [rbp-8D0h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2208LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "46 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 24 9 <unknown> 384 24 9 <unknown> 448 24 9 <unknown> 512 3"
                        "2 11 val_str:442 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832"
                        " 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 11"
                        "52 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown"
                        "> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unk"
                        "nown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 64 9 <unknown> 2016 64 9 <unknown> 2112 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::RegionSearchRegionExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234753535;
  v4[536862729] = -234753535;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862734] = -234881024;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -218959118;
  v4[536862771] = -218959118;
  v4[536862773] = -218959118;
  v4[536862775] = -218959118;
  v4[536862777] = -218959118;
  v4[536862779] = -218959118;
  v4[536862782] = -218959118;
  v4[536862785] = -218959118;
  v4[536862788] = -202116109;
  std::string::basic_string(v2 + 512);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 576),
    &byte_1AA9F8C0,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 576), &this->id) != 0;
  std::string::~string((void *)(v2 + 576));
  *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 640, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 640),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "init",
      445);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 640),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v5, (const char (*)[35])byte_1AA9F900);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 704),
      &byte_1AA9F960,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 704), (std::string *)(v2 + 512)) != 0;
    std::string::~string((void *)(v2 + 704));
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "init",
        450);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 768),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v7, (const char (*)[39])byte_1AA9F9A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 320) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 1920) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1920),
        ";",
        (const std::allocator<char> *)(v2 + 64));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1952),
        ",",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 96));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 320),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1920),
        (const std::vector<std::string>::allocator_type *)(v2 + 96));
      v10 = common::tools::StringUtils::splitToListBySeps<float>(
              (const std::string *)(v2 + 512),
              (const std::vector<std::string> *)(v2 + 320),
              &this->region_center,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 320));
      v11 = ((v2 + 320) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 1984); i != (char *)(v2 + 1920); std::string::~string(i) )
        i -= 32;
      v13 = (_DWORD *)(((v2 + 1920) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 832, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 832),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
          "init",
          455);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 832),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v14, (const char (*)[39])byte_1AA9F9A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 896),
          &byte_1AA9FA00,
          (const std::allocator<char> *)(v2 + 112));
        v15 = common::tools::TxtFile::Row::assignToNum<float>(
                row,
                (const std::string *)(v2 + 896),
                &this->region_radius) != 0;
        std::string::~string((void *)(v2 + 896));
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v15 )
        {
          *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 960, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 960),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
            "init",
            460);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 960),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v16, (const char (*)[39])byte_1AA9FA40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
          *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1024),
            &byte_1AA9FAA0,
            (const std::allocator<char> *)(v2 + 128));
          v17 = common::tools::TxtFile::Row::assignToStr(
                  row,
                  (const std::string *)(v2 + 1024),
                  (std::string *)(v2 + 512)) != 0;
          std::string::~string((void *)(v2 + 1024));
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v17 )
          {
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1088) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1088, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1088),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
              "init",
              465);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1088),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v18, (const char (*)[41])byte_1AA9FAE0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            v19 = ((v2 + 384) >> 3) + 2147450880;
            *(_WORD *)v19 = 0;
            *(_BYTE *)(v19 + 2) = 0;
            v20 = (_DWORD *)(((v2 + 2016) >> 3) + 2147450880);
            *v20 = 0;
            v20[1] = 0;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2016),
              ";",
              (const std::allocator<char> *)(v2 + 144));
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2048),
              ",",
              (const std::allocator<char> *)(v2 + 160));
            __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2016);
            __l._M_len = 2LL;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 384),
              __l,
              (const std::vector<std::string>::allocator_type *)(v2 + 176));
            v21 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 512),
                    (const std::vector<std::string> *)(v2 + 384),
                    &this->oneoff_group_list,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 384));
            v22 = ((v2 + 384) >> 3) + 2147450880;
            *(_WORD *)v22 = -1800;
            *(_BYTE *)(v22 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            for ( j = (char *)(v2 + 2080); j != (char *)(v2 + 2016); std::string::~string(j) )
              j -= 32;
            v24 = (_DWORD *)(((v2 + 2016) >> 3) + 2147450880);
            *v24 = -117901064;
            v24[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v21 )
            {
              *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1152) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1152, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1152),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                "init",
                470);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1152),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v25, (const char (*)[41])byte_1AA9FAE0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
              *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 192);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1216),
                &byte_1AA9FB40,
                (const std::allocator<char> *)(v2 + 192));
              v26 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1216),
                      &this->oneoff_group_num) != 0;
              std::string::~string((void *)(v2 + 1216));
              *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 192);
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              if ( v26 )
              {
                *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1280, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1280),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                  "init",
                  475);
                v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1280),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v27, (const char (*)[47])byte_1AA9FB80);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 208);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1344),
                  &byte_1AA9FBE0,
                  (const std::allocator<char> *)(v2 + 208));
                v28 = common::tools::TxtFile::Row::assignToStr(
                        row,
                        (const std::string *)(v2 + 1344),
                        (std::string *)(v2 + 512)) != 0;
                std::string::~string((void *)(v2 + 1344));
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 208);
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                if ( v28 )
                {
                  *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1408) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1408, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1408),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                    "init",
                    480);
                  v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1408),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    v29,
                    (const char (*)[38])byte_1AA9FC20);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                  *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  v30 = ((v2 + 448) >> 3) + 2147450880;
                  *(_WORD *)v30 = 0;
                  *(_BYTE *)(v30 + 2) = 0;
                  v31 = (_DWORD *)(((v2 + 2112) >> 3) + 2147450880);
                  *v31 = 0;
                  v31[1] = 0;
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 224);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 2112),
                    ";",
                    (const std::allocator<char> *)(v2 + 224));
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 240);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 2144),
                    ",",
                    (const std::allocator<char> *)(v2 + 240));
                  v47._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2112);
                  v47._M_len = 2LL;
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 256));
                  std::vector<std::string>::vector(
                    (std::vector<std::string> *const)(v2 + 448),
                    v47,
                    (const std::vector<std::string>::allocator_type *)(v2 + 256));
                  v32 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                          (const std::string *)(v2 + 512),
                          (const std::vector<std::string> *)(v2 + 448),
                          &this->recycle_group_list,
                          1) != 0;
                  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 448));
                  v33 = ((v2 + 448) >> 3) + 2147450880;
                  *(_WORD *)v33 = -1800;
                  *(_BYTE *)(v33 + 2) = -8;
                  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 256));
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                  for ( k = (char *)(v2 + 2176); k != (char *)(v2 + 2112); std::string::~string(k) )
                    k -= 32;
                  v35 = (_DWORD *)(((v2 + 2112) >> 3) + 2147450880);
                  *v35 = -117901064;
                  v35[1] = -117901064;
                  std::allocator<char>::~allocator(v2 + 240);
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                  std::allocator<char>::~allocator(v2 + 224);
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                  if ( v32 )
                  {
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1472) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1472, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1472),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                      "init",
                      485);
                    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1472),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      v36,
                      (const char (*)[38])byte_1AA9FC20);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 272);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1536),
                      &byte_1AA9FC80,
                      (const std::allocator<char> *)(v2 + 272));
                    v37 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 1536),
                            &this->recycle_group_num) != 0;
                    std::string::~string((void *)(v2 + 1536));
                    *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 272);
                    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                    if ( v37 )
                    {
                      *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1600) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1600, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1600),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                        "init",
                        490);
                      v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1600),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        v38,
                        (const char (*)[44])byte_1AA9FCC0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                      *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 288);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1664),
                        &byte_1AA9FD20,
                        (const std::allocator<char> *)(v2 + 288));
                      v39 = common::tools::TxtFile::Row::assignToEnum<data::RegionSearchRecycleType>(
                              row,
                              (const std::string *)(v2 + 1664),
                              &this->recycle_type) != 0;
                      std::string::~string((void *)(v2 + 1664));
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 288);
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                      if ( v39 )
                      {
                        *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1728) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1728, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1728),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                          "init",
                          495);
                        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1728),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                          v40,
                          (const char (*)[44])byte_1AA9FD60);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                        *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 304);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1792),
                          &byte_1AA9FDC0,
                          (const std::allocator<char> *)(v2 + 304));
                        v41 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                row,
                                (const std::string *)(v2 + 1792),
                                &this->recycle_param) != 0;
                        std::string::~string((void *)(v2 + 1792));
                        *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 304);
                        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                        if ( v41 )
                        {
                          *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1856) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1856, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1856),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                            "init",
                            500);
                          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1856),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                            v42,
                            (const char (*)[50])byte_1AA9FE00);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                          *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          v6 = 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  std::string::~string((void *)(v2 + 512));
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF810C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862739) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450948 - (((_DWORD)v4 + 2147450956) & 0xFFFFFFF8) + 208) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2208LL, v48);
  }
  return v6;
};

// Line 509: range 0000000012DE3336-0000000012DE434B
int32_t __cdecl data::ActivityRegionSearchMgrBase::loadRegionSearchExcelConfig(
        data::ActivityRegionSearchMgrBase *const this,
        HK4EDesignConfig *config)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *p_real_data_base_dir; // rsi
  const char *v7; // rsi
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // r14d
  int v11; // eax
  uint32_t v12; // ecx
  _DWORD *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  __int64 v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  __int64 v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  data::RegionSearchExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::RegionSearchExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  _DWORD *v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85F8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85D8h]
  char v37[34256]; // [rsp+50h] [rbp-85D0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34208LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:524 64 4 9 <unknown> 80 32 9 paths:510 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 64 8 d"
                        "ata:527 624 376 24 debug_message_stream:535 1072 32880 12 txt_file:518";
  *(_QWORD *)(v3 + 16) = data::ActivityRegionSearchMgrBase::loadRegionSearchExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862751] = -218959360;
  v5[536862752] = -218959118;
  v5[536862753] = 62194;
  v5[536863781] = -202116109;
  v5[536863782] = -202116109;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/ActivityRSSearchData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 80); __for_begin != (std::string *)(v3 + 112); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 144, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 144), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 144);
    std::string::~string((void *)(v3 + 144));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1072, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1072), v7) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "loadRegionSearchExcelConfig",
        521);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1AA2F8A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AA2F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
        __asan_report_store4(v3 + 48, v7);
      for ( *(_DWORD *)(v3 + 48) = 0; ; ++*(_DWORD *)(v3 + 48) )
      {
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1072));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1072), *(_DWORD *)(v3 + 48));
        v13 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        data::RegionSearchExcelConfig::RegionSearchExcelConfig((data::RegionSearchExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::RegionSearchExcelConfig::init((data::RegionSearchExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1AA2F960);
            if ( *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 536);
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 536));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 336, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 336),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
              "loadRegionSearchExcelConfig",
              537);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AA2F9E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v21 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v21);
            *(_DWORD *)(v3 + 64) = v21;
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 64));
            v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v22,
                    (const char (*)[13])byte_1AA2FA20);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 624);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 624);
            __asan_poison_stack_memory(v3 + 624, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::RegionSearchExcelConfig &>((data::RegionSearchExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::emplace<unsigned int &,data::RegionSearchExcelConfig>(
                    &this->region_search_excel_config_map,
                    (unsigned int *)(v3 + 536),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                "loadRegionSearchExcelConfig",
                542);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AA2FA60);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 536));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v15 = 0;
            }
            else
            {
              v15 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
            "loadRegionSearchExcelConfig",
            530);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::RegionSearchExcelConfig::~RegionSearchExcelConfig((data::RegionSearchExcelConfig *const)(v3 + 528));
        v30 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v30 = -117901064;
        v30[1] = -117901064;
        if ( v15 != 1 )
        {
          v31 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v31 = 1;
LABEL_45:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    __asan_poison_stack_memory(v3 + 1072, 32880LL);
    if ( !v10 )
      goto LABEL_49;
  }
  v2 = 0;
LABEL_49:
  for ( i = (char *)(v3 + 112); i != (char *)(v3 + 80); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4276) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34208LL, v37);
  }
  return v2;
};

// Line 551: range 0000000012DE434C-0000000012DE533C
int32_t __cdecl data::ActivityRegionSearchMgrBase::loadRegionSearchCondExcelConfig(
        data::ActivityRegionSearchMgrBase *const this,
        HK4EDesignConfig *config)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *p_real_data_base_dir; // rsi
  const char *v7; // rsi
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // r14d
  int v11; // eax
  uint32_t v12; // ecx
  unsigned __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  __int64 v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  __int64 v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  data::RegionSearchCondExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::RegionSearchCondExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8618h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85F8h]
  char v37[34288]; // [rsp+50h] [rbp-85F0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34240LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:566 80 4 9 <unknown> 96 32 9 paths:552 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 80 8 d"
                        "ata:569 656 376 24 debug_message_stream:577 1104 32880 12 txt_file:560";
  *(_QWORD *)(v3 + 16) = data::ActivityRegionSearchMgrBase::loadRegionSearchCondExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862752] = -218959360;
  v5[536862753] = -218959118;
  v5[536862754] = 62194;
  v5[536863782] = -202116109;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/ActivityRSLogicData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 96); __for_begin != (std::string *)(v3 + 128); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 160, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 160), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 160);
    std::string::~string((void *)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1104, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1104), v7) )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "loadRegionSearchCondExcelConfig",
        563);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1AA2F8A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AA2F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v11 = *(unsigned __int8 *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
        __asan_report_store4(v3 + 64, v7);
      for ( *(_DWORD *)(v3 + 64) = 0; ; ++*(_DWORD *)(v3 + 64) )
      {
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1104));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1104), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_WORD *)(v13 + 8) = 0;
        data::RegionSearchCondExcelConfig::RegionSearchCondExcelConfig((data::RegionSearchCondExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::RegionSearchCondExcelConfig::init((data::RegionSearchCondExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AA2F960);
            if ( *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 552);
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 552));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 352, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 352),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
              "loadRegionSearchCondExcelConfig",
              579);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AA2F9E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v21 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v21);
            *(_DWORD *)(v3 + 80) = v21;
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 80));
            v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v22,
                    (const char (*)[13])byte_1AA2FA20);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 656);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 656);
            __asan_poison_stack_memory(v3 + 656, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::RegionSearchCondExcelConfig &>((data::RegionSearchCondExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::emplace<unsigned int &,data::RegionSearchCondExcelConfig>(
                    &this->region_search_cond_excel_config_map,
                    (unsigned int *)(v3 + 552),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 480, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 480),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                "loadRegionSearchCondExcelConfig",
                584);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AA2FA60);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 552));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v15 = 0;
            }
            else
            {
              v15 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
            "loadRegionSearchCondExcelConfig",
            572);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::RegionSearchCondExcelConfig::~RegionSearchCondExcelConfig((data::RegionSearchCondExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_WORD *)(v30 + 8) = -1800;
        if ( v15 != 1 )
        {
          v31 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v31 = 1;
LABEL_45:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    __asan_poison_stack_memory(v3 + 1104, 32880LL);
    if ( !v10 )
      goto LABEL_49;
  }
  v2 = 0;
LABEL_49:
  for ( i = (char *)(v3 + 128); i != (char *)(v3 + 96); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4264) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34240LL, v37);
  }
  return v2;
};

// Line 593: range 0000000012DE533E-0000000012DE638B
int32_t __cdecl data::ActivityRegionSearchMgrBase::loadRegionSearchRegionExcelConfig(
        data::ActivityRegionSearchMgrBase *const this,
        HK4EDesignConfig *config)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *p_real_data_base_dir; // rsi
  const char *v7; // rsi
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // r14d
  int v11; // eax
  uint32_t v12; // ecx
  unsigned __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  __int64 v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  __int64 v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  data::RegionSearchRegionExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::RegionSearchRegionExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8638h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8618h]
  char v37[34320]; // [rsp+50h] [rbp-8610h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34272LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:608 64 4 9 <unknown> 80 32 9 paths:594 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 120 8 "
                        "data:611 688 376 24 debug_message_stream:619 1136 32880 12 txt_file:602";
  *(_QWORD *)(v3 + 16) = data::ActivityRegionSearchMgrBase::loadRegionSearchRegionExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862740] = -218959360;
  v5[536862741] = 62194;
  v5[536862753] = -218959360;
  v5[536862754] = -218959118;
  v5[536862755] = 62194;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/ActivityRSRegionData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 80); __for_begin != (std::string *)(v3 + 112); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 144, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 144), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 144);
    std::string::~string((void *)(v3 + 144));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1136, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1136));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1136), v7) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
        "loadRegionSearchRegionExcelConfig",
        605);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1AA2F8A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AA2F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
        __asan_report_store4(v3 + 48, v7);
      for ( *(_DWORD *)(v3 + 48) = 0; ; ++*(_DWORD *)(v3 + 48) )
      {
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1136));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1136), *(_DWORD *)(v3 + 48));
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_WORD *)(v13 + 12) = 0;
        *(_BYTE *)(v13 + 14) = 0;
        data::RegionSearchRegionExcelConfig::RegionSearchRegionExcelConfig((data::RegionSearchRegionExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::RegionSearchRegionExcelConfig::init(
                 (data::RegionSearchRegionExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 688, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 688);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 688, &unk_1AA2F960);
            if ( *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 536);
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 536));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 336, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 336),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
              "loadRegionSearchRegionExcelConfig",
              621);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AA2F9E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v21 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v21);
            *(_DWORD *)(v3 + 64) = v21;
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 64));
            v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v22,
                    (const char (*)[13])byte_1AA2FA20);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 688);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 688);
            __asan_poison_stack_memory(v3 + 688, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::RegionSearchRegionExcelConfig &>((data::RegionSearchRegionExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::emplace<unsigned int &,data::RegionSearchRegionExcelConfig>(
                    &this->region_search_region_excel_config_map,
                    (unsigned int *)(v3 + 536),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
                "loadRegionSearchRegionExcelConfig",
                626);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AA2FA60);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 536));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v15 = 0;
            }
            else
            {
              v15 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
            "loadRegionSearchRegionExcelConfig",
            614);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::RegionSearchRegionExcelConfig::~RegionSearchRegionExcelConfig((data::RegionSearchRegionExcelConfig *const)(v3 + 528));
        v30 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_WORD *)(v30 + 12) = -1800;
        *(_BYTE *)(v30 + 14) = -8;
        if ( v15 != 1 )
        {
          v31 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v31 = 1;
LABEL_45:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1136));
    __asan_poison_stack_memory(v3 + 1136, 32880LL);
    if ( !v10 )
      goto LABEL_49;
  }
  v2 = 0;
LABEL_49:
  for ( i = (char *)(v3 + 112); i != (char *)(v3 + 80); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4284) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34272LL, v37);
  }
  return v2;
};

// Line 635: range 0000000012DE638C-0000000012DE6801
int32_t __cdecl data::ActivityRegionSearchMgrBase::loadConfig(
        data::ActivityRegionSearchMgrBase *const this,
        HK4EDesignConfig *config)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::ActivityRegionSearchMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( data::ActivityRegionSearchMgrBase::loadRegionSearchExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "loadConfig",
      638);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v5,
      (const char (*)[35])"loadRegionSearchExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::ActivityRegionSearchMgrBase::loadRegionSearchCondExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "loadConfig",
      643);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v7,
      (const char (*)[39])"loadRegionSearchCondExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::ActivityRegionSearchMgrBase::loadRegionSearchRegionExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityRegionSearch.gen.cpp",
      "loadConfig",
      648);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v8,
      (const char (*)[41])"loadRegionSearchRegionExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 655: range 0000000012DE6802-0000000012DE6814
int32_t __cdecl data::ActivityRegionSearchMgrBase::rewriteConfig(
        data::ActivityRegionSearchMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 660: range 0000000012DE6816-0000000012DE6828
int32_t __cdecl data::ActivityRegionSearchMgrBase::finalConfig(
        data::ActivityRegionSearchMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 665: range 0000000012DE682A-0000000012DE69E5
data::RegionSearchExcelConfig *__fastcall data::ActivityRegionSearchMgrBase::findRegionSearchExcelConfig(
        data::ActivityRegionSearchMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RegionSearchExcelConfigMap *p_region_search_excel_config_map; // rdx
  data::RegionSearchExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RegionSearchExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:664 64 8 8 iter:666 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRegionSearchMgrBase::findRegionSearchExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_region_search_excel_config_map = &this->region_search_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::find(
                                                                                             p_region_search_excel_config_map,
                                                                                             (const std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->region_search_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 678: range 0000000012DE69E6-0000000012DE6BA1
const data::RegionSearchExcelConfig *__fastcall data::ActivityRegionSearchMgrBase::findRegionSearchExcelConfig(
        const data::ActivityRegionSearchMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RegionSearchExcelConfigMap *p_region_search_excel_config_map; // rdx
  data::RegionSearchExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RegionSearchExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:677 64 8 8 iter:679 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRegionSearchMgrBase::findRegionSearchExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_region_search_excel_config_map = &this->region_search_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::find(
                                                                                                   p_region_search_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->region_search_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 691: range 0000000012DE6BA2-0000000012DE6D5D
data::RegionSearchCondExcelConfig *__fastcall data::ActivityRegionSearchMgrBase::findRegionSearchCondExcelConfig(
        data::ActivityRegionSearchMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RegionSearchCondExcelConfigMap *p_region_search_cond_excel_config_map; // rdx
  data::RegionSearchCondExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RegionSearchCondExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:690 64 8 8 iter:692 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRegionSearchMgrBase::findRegionSearchCondExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_region_search_cond_excel_config_map = &this->region_search_cond_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::find(
                                                                                                 p_region_search_cond_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->region_search_cond_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 704: range 0000000012DE6D5E-0000000012DE6F19
const data::RegionSearchCondExcelConfig *__fastcall data::ActivityRegionSearchMgrBase::findRegionSearchCondExcelConfig(
        const data::ActivityRegionSearchMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RegionSearchCondExcelConfigMap *p_region_search_cond_excel_config_map; // rdx
  data::RegionSearchCondExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RegionSearchCondExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:703 64 8 8 iter:705 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRegionSearchMgrBase::findRegionSearchCondExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_region_search_cond_excel_config_map = &this->region_search_cond_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::find(p_region_search_cond_excel_config_map, (const std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->region_search_cond_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 717: range 0000000012DE6F1A-0000000012DE70D5
data::RegionSearchRegionExcelConfig *__fastcall data::ActivityRegionSearchMgrBase::findRegionSearchRegionExcelConfig(
        data::ActivityRegionSearchMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RegionSearchRegionExcelConfigMap *p_region_search_region_excel_config_map; // rdx
  data::RegionSearchRegionExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RegionSearchRegionExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:716 64 8 8 iter:718 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRegionSearchMgrBase::findRegionSearchRegionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_region_search_region_excel_config_map = &this->region_search_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::find(
                                                                                                   p_region_search_region_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->region_search_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 730: range 0000000012DE70D6-0000000012DE7291
const data::RegionSearchRegionExcelConfig *__fastcall data::ActivityRegionSearchMgrBase::findRegionSearchRegionExcelConfig(
        const data::ActivityRegionSearchMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RegionSearchRegionExcelConfigMap *p_region_search_region_excel_config_map; // rdx
  data::RegionSearchRegionExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RegionSearchRegionExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:729 64 8 8 iter:731 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRegionSearchMgrBase::findRegionSearchRegionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_region_search_region_excel_config_map = &this->region_search_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::find(p_region_search_region_excel_config_map, (const std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->region_search_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RegionSearchRegionExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchRegionExcelConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

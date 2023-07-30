// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp

// Line 12: range 00000000145255E2-0000000014525955
const char *__fastcall data::enumValToStr(data::LoadingAreaType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::LoadingAreaType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getLoadingAreaTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::LoadingAreaType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::LoadingAreaType,std::pair<std::string,std::string>>::find(map, (const std::map<data::LoadingAreaType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::LoadingAreaType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::LoadingAreaType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
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
    result = "INVALID_LoadingAreaType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::LoadingAreaType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 0000000014525956-0000000014525F0E
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::LoadingAreaType>,false,true>::pointer v10; // rax
  data::LoadingAreaType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::LoadingAreaType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getLoadingAreaTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::LoadingAreaType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::LoadingAreaType>::find(
                                                                                            m,
                                                                                            (const std::unordered_map<std::string,data::LoadingAreaType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::LoadingAreaType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::LoadingAreaType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::LoadingAreaType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingAreaType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingAreaType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::LoadingAreaType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::LoadingAreaType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
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

// Line 45: range 0000000014525F0F-00000000145268D8
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::LoadingAreaType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::LoadingAreaType>,false,true>::pointer v12; // rax
  data::LoadingAreaType second; // ecx
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
                        " <unknown> 144 8 5 it:58 176 8 9 <unknown> 208 8 4 s:44 240 32 9 <unknown> 304 32 9 <unknown> 36"
                        "8 32 9 <unknown> 432 80 9 <unknown>";
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::LoadingAreaType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::LoadingAreaType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::LoadingAreaType>::pair<char const(&)[7],data::LoadingAreaType,true>(
        (std::pair<const std::string,data::LoadingAreaType> *const)(v2 + 432),
        (const char (*)[7])byte_1AD9C2A0,
        (data::LoadingAreaType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD9C2A0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::LoadingAreaType>::pair<char const(&)[7],data::LoadingAreaType,true>(
        (std::pair<const std::string,data::LoadingAreaType> *const)(v2 + 472),
        (const char (*)[7])byte_1AD9C2E0,
        (data::LoadingAreaType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::LoadingAreaType>>::allocator((std::allocator<std::pair<const std::string,data::LoadingAreaType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::LoadingAreaType>::unordered_map(
        &data::enumStrToVal(char const*,data::LoadingAreaType &)::m,
        (std::initializer_list<std::pair<const std::string,data::LoadingAreaType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::LoadingAreaType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::LoadingAreaType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::LoadingAreaType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::LoadingAreaType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::LoadingAreaType>::~unordered_map,
        &data::enumStrToVal(char const*,data::LoadingAreaType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::LoadingAreaType>>::~allocator((std::allocator<std::pair<const std::string,data::LoadingAreaType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::LoadingAreaType> *)(v2 + 512);
            i != (std::pair<const std::string,data::LoadingAreaType> *)(v2 + 432);
            std::pair<std::string const,data::LoadingAreaType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::LoadingAreaType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::LoadingAreaType>::find(
                                                                                       &data::enumStrToVal(char const*,data::LoadingAreaType &)::m,
                                                                                       (const std::unordered_map<std::string,data::LoadingAreaType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::LoadingAreaType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::LoadingAreaType>::end(&data::enumStrToVal(char const*,data::LoadingAreaType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::LoadingAreaType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingAreaType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingAreaType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
        "enumStrToVal",
        61);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::LoadingAreaType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::LoadingAreaType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
      "enumStrToVal",
      48);
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

// Line 70: range 00000000145268D9-00000000145268EF
const char *__cdecl data::getDescription(data::LoadingAreaType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 75: range 00000000145268F0-0000000014526AA5
bool __cdecl data::isValidLoadingAreaType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::LoadingAreaType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::LoadingAreaType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:76 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidLoadingAreaType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getLoadingAreaTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::LoadingAreaType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::LoadingAreaType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getLoadingAreaTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::LoadingAreaType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::LoadingAreaType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::LoadingAreaType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 81: range 0000000014526AA6-0000000014526C07
bool __cdecl data::isValidLoadingAreaTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::LoadingAreaType> *v5; // rcx
  const std::unordered_map<std::string,data::LoadingAreaType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidLoadingAreaTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getLoadingAreaTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::LoadingAreaType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::LoadingAreaType>::end(v5);
  v6 = data::getLoadingAreaTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::LoadingAreaType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::LoadingAreaType>::find(
                                                                                          v6,
                                                                                          name);
  result = std::__detail::operator!=<std::pair<std::string const,data::LoadingAreaType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingAreaType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingAreaType>,true> *)(v2 + 64));
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

// Line 86: range 0000000014526C08-00000000145270CA
const std::unordered_map<std::string,data::LoadingAreaType> *__cdecl data::getLoadingAreaTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::LoadingAreaType> *i; // r14
  const std::unordered_map<std::string,data::LoadingAreaType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getLoadingAreaTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getLoadingAreaTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getLoadingAreaTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::LoadingAreaType>::pair<char const(&)[18],data::LoadingAreaType,true>(
      (std::pair<const std::string,data::LoadingAreaType> *const)(v1 + 128),
      (const char (*)[18])"LOADING_AREA_NONE",
      (data::LoadingAreaType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "LOADING_AREA_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::LoadingAreaType>::pair<char const(&)[18],data::LoadingAreaType,true>(
      (std::pair<const std::string,data::LoadingAreaType> *const)(v1 + 168),
      (const char (*)[18])"LOADING_AREA_CITY",
      (data::LoadingAreaType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "LOADING_AREA_CITY");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::LoadingAreaType>::pair<char const(&)[21],data::LoadingAreaType,true>(
      (std::pair<const std::string,data::LoadingAreaType> *const)(v1 + 208),
      (const char (*)[21])"LOADING_AREA_OUTDOOR",
      (data::LoadingAreaType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::LoadingAreaType>>::allocator((std::allocator<std::pair<const std::string,data::LoadingAreaType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::LoadingAreaType>::unordered_map(
      &data::getLoadingAreaTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::LoadingAreaType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::LoadingAreaType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::LoadingAreaType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::LoadingAreaType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getLoadingAreaTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::LoadingAreaType>::~unordered_map,
      &data::getLoadingAreaTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::LoadingAreaType>>::~allocator((std::allocator<std::pair<const std::string,data::LoadingAreaType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::LoadingAreaType> *)(v1 + 248);
          i != (std::pair<const std::string,data::LoadingAreaType> *)(v1 + 128);
          std::pair<std::string const,data::LoadingAreaType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getLoadingAreaTypeNameMap[abi:cxx11](void)::m;
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

// Line 97: range 00000000145270CB-00000000145277C9
const std::map<data::LoadingAreaType,std::pair<std::string,std::string >> *__cdecl data::getLoadingAreaTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getLoadingAreaTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getLoadingAreaTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getLoadingAreaTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[18])"LOADING_AREA_NONE");
    std::pair<data::LoadingAreaType const,std::pair<std::string,std::string>>::pair<data::LoadingAreaType,true>(
      (std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::LoadingAreaType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1AD9C2A0,
      (const char (*)[18])"LOADING_AREA_CITY");
    std::pair<data::LoadingAreaType const,std::pair<std::string,std::string>>::pair<data::LoadingAreaType,true>(
      (std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::LoadingAreaType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1AD9C2E0,
      (const char (*)[21])"LOADING_AREA_OUTDOOR");
    std::pair<data::LoadingAreaType const,std::pair<std::string,std::string>>::pair<data::LoadingAreaType,true>(
      (std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::LoadingAreaType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::LoadingAreaType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::LoadingAreaType,std::pair<std::string,std::string>>::map(
      &data::getLoadingAreaTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::LoadingAreaType> *)(v1 + 48),
      (const std::map<data::LoadingAreaType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getLoadingAreaTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::LoadingAreaType,std::pair<std::string,std::string>>::~map,
      &data::getLoadingAreaTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::LoadingAreaType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::LoadingAreaType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::LoadingAreaType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getLoadingAreaTypeEnumMap[abi:cxx11](void)::m;
};

// Line 108: range 00000000145277CA-0000000014527B3D
const char *__fastcall data::enumValToStr(data::LoadingTipsSituationType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:107 64 8 8 iter:110 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getLoadingTipsSituationTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string>>::find(map, (const std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
      "enumValToStr",
      113);
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
    result = "INVALID_LoadingTipsSituationType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 120: range 0000000014527B3E-00000000145280F6
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::LoadingTipsSituationType>,false,true>::pointer v10; // rax
  data::LoadingTipsSituationType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::LoadingTipsSituationType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:129 96 8 9 <unknown> 128 8 5 s:119 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getLoadingTipsSituationTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::LoadingTipsSituationType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::LoadingTipsSituationType>::find(
                                                                                                     m,
                                                                                                     (const std::unordered_map<std::string,data::LoadingTipsSituationType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::LoadingTipsSituationType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::LoadingTipsSituationType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::LoadingTipsSituationType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingTipsSituationType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingTipsSituationType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
        "enumNameToVal",
        132);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::LoadingTipsSituationType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::LoadingTipsSituationType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
      "enumNameToVal",
      123);
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

// Line 141: range 00000000145280F7-0000000014529224
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  std::pair<const std::string,data::LoadingTipsSituationType> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::LoadingTipsSituationType>,false,true>::pointer v11; // rax
  data::LoadingTipsSituationType second; // ecx
  char v13; // dl
  unsigned int v14; // ebx
  char v17[1424]; // [rsp+20h] [rbp-590h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1376LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "26 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 8 6 it:167 384 8 9 <unknown> 416 8 5 s:"
                        "140 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 600 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556927;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = -234556924;
  v4[536862729] = -234556924;
  v4[536862730] = -234556924;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862758] = -218103808;
  v4[536862759] = -202116109;
  v4[536862760] = -202116109;
  v4[536862761] = -202116109;
  v4[536862762] = -202116109;
  *(_QWORD *)(v2 + 416) = s;
  if ( *(_QWORD *)(v2 + 416) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::LoadingTipsSituationType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::LoadingTipsSituationType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[16],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 640),
        (const char (*)[16])byte_1AD9C620,
        (data::LoadingTipsSituationType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD9C620);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[16],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 680),
        (const char (*)[16])byte_1AD9C660,
        (data::LoadingTipsSituationType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD9C660);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[16],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 720),
        (const char (*)[16])byte_1AD9C6A0,
        (data::LoadingTipsSituationType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AD9C6A0);
      *(_DWORD *)(v2 + 160) = 4;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[13],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 760),
        (const char (*)[13])byte_1AD9C6E0,
        (data::LoadingTipsSituationType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1AD9C6E0);
      *(_DWORD *)(v2 + 176) = 5;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[13],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 800),
        (const char (*)[13])byte_1AD9C720,
        (data::LoadingTipsSituationType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1AD9C720);
      *(_DWORD *)(v2 + 192) = 6;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[7],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 840),
        (const char (*)[7])byte_1AD9C760,
        (data::LoadingTipsSituationType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1AD9C760);
      *(_DWORD *)(v2 + 208) = 7;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[7],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 880),
        (const char (*)[7])byte_1AD9C7A0,
        (data::LoadingTipsSituationType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1AD9C7A0);
      *(_DWORD *)(v2 + 224) = 8;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[13],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 920),
        (const char (*)[13])byte_1AD9C7E0,
        (data::LoadingTipsSituationType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1AD9C7E0);
      *(_DWORD *)(v2 + 240) = 9;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[13],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 960),
        (const char (*)[13])byte_1AD9C820,
        (data::LoadingTipsSituationType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1AD9C820);
      *(_DWORD *)(v2 + 256) = 10;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[13],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 1000),
        (const char (*)[13])byte_1AD9C860,
        (data::LoadingTipsSituationType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, byte_1AD9C860);
      *(_DWORD *)(v2 + 272) = 11;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[25],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 1040),
        (const char (*)[25])byte_1AD9C8A0,
        (data::LoadingTipsSituationType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, byte_1AD9C8A0);
      *(_DWORD *)(v2 + 288) = 12;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[25],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 1080),
        (const char (*)[25])byte_1AD9C8E0,
        (data::LoadingTipsSituationType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, byte_1AD9C8E0);
      *(_DWORD *)(v2 + 304) = 13;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[22],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 1120),
        (const char (*)[22])byte_1AD9C920,
        (data::LoadingTipsSituationType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, byte_1AD9C920);
      *(_DWORD *)(v2 + 320) = 14;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[21],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 1160),
        (const char (*)[21])byte_1AD9C960,
        (data::LoadingTipsSituationType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, byte_1AD9C960);
      *(_DWORD *)(v2 + 336) = 15;
      std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[22],data::LoadingTipsSituationType,true>(
        (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v2 + 1200),
        (const char (*)[22])byte_1AD9C9A0,
        (data::LoadingTipsSituationType *)(v2 + 336));
      std::allocator<std::pair<std::string const,data::LoadingTipsSituationType>>::allocator((std::allocator<std::pair<const std::string,data::LoadingTipsSituationType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::LoadingTipsSituationType>::unordered_map(
        &data::enumStrToVal(char const*,data::LoadingTipsSituationType &)::m,
        (std::initializer_list<std::pair<const std::string,data::LoadingTipsSituationType> >)__PAIR128__(15LL, v2 + 640),
        0LL,
        (const std::unordered_map<std::string,data::LoadingTipsSituationType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::LoadingTipsSituationType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::LoadingTipsSituationType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::LoadingTipsSituationType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::LoadingTipsSituationType>::~unordered_map,
        &data::enumStrToVal(char const*,data::LoadingTipsSituationType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::LoadingTipsSituationType>>::~allocator((std::allocator<std::pair<const std::string,data::LoadingTipsSituationType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::LoadingTipsSituationType> *)(v2 + 1240);
            i != (std::pair<const std::string,data::LoadingTipsSituationType> *)(v2 + 640);
            std::pair<std::string const,data::LoadingTipsSituationType>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 640, 600LL);
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    v7 = *(const char **)(v2 + 416);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 512),
      v7,
      (const std::allocator<char> *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, v7);
    *(std::unordered_map<std::string,data::LoadingTipsSituationType>::iterator *)(v2 + 352) = std::unordered_map<std::string,data::LoadingTipsSituationType>::find(
                                                                                                &data::enumStrToVal(char const*,data::LoadingTipsSituationType &)::m,
                                                                                                (const std::unordered_map<std::string,data::LoadingTipsSituationType>::key_type *)(v2 + 512));
    std::string::~string((void *)(v2 + 512));
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 384, v2 + 512);
    *(std::unordered_map<std::string,data::LoadingTipsSituationType>::iterator *)(v2 + 384) = std::unordered_map<std::string,data::LoadingTipsSituationType>::end(&data::enumStrToVal(char const*,data::LoadingTipsSituationType &)::m);
    v8 = (char *)(v2 + 384);
    v9 = std::__detail::operator==<std::pair<std::string const,data::LoadingTipsSituationType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingTipsSituationType>,true> *)(v2 + 352),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingTipsSituationType>,true> *)(v2 + 384));
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 576, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 576),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
        "enumStrToVal",
        170);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 576),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 416));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
      v5 = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::LoadingTipsSituationType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::LoadingTipsSituationType>,false,true> *const)(v2 + 352));
      if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v11->second);
      }
      second = v11->second;
      v13 = *(_BYTE *)((e >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)((e & 7) + 3) >= v13 )
      {
        LOBYTE(v8) = v13 != 0;
        __asan_report_store4(e, v8);
      }
      *(_DWORD *)e = second;
      v5 = 0;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
      "enumStrToVal",
      144);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 448),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
    v5 = -1;
  }
  v14 = v5;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862741) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450956 - (((_DWORD)v4 + 2147450964) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1376LL, v17);
  }
  return v14;
};

// Line 179: range 0000000014529225-000000001452923B
const char *__cdecl data::getDescription(data::LoadingTipsSituationType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 184: range 000000001452923C-00000000145293F1
bool __cdecl data::isValidLoadingTipsSituationType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:185 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidLoadingTipsSituationType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getLoadingTipsSituationTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getLoadingTipsSituationTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 190: range 00000000145293F2-0000000014529553
bool __cdecl data::isValidLoadingTipsSituationTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::LoadingTipsSituationType> *v5; // rcx
  const std::unordered_map<std::string,data::LoadingTipsSituationType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidLoadingTipsSituationTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getLoadingTipsSituationTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::LoadingTipsSituationType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::LoadingTipsSituationType>::end(v5);
  v6 = data::getLoadingTipsSituationTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::LoadingTipsSituationType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::LoadingTipsSituationType>::find(
                                                                                                   v6,
                                                                                                   name);
  result = std::__detail::operator!=<std::pair<std::string const,data::LoadingTipsSituationType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingTipsSituationType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::LoadingTipsSituationType>,true> *)(v2 + 64));
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

// Line 195: range 0000000014529554-000000001452A07F
const std::unordered_map<std::string,data::LoadingTipsSituationType> *__cdecl data::getLoadingTipsSituationTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::LoadingTipsSituationType> *i; // r14
  char v6[1168]; // [rsp+10h] [rbp-490h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1120LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "20 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 640 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getLoadingTipsSituationTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = -234556924;
  v3[536862727] = -234556924;
  v3[536862728] = -234556924;
  v3[536862729] = -234556924;
  v3[536862730] = -234556924;
  v3[536862751] = -202116109;
  v3[536862752] = -202116109;
  v3[536862753] = -202116109;
  v3[536862754] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getLoadingTipsSituationTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getLoadingTipsSituationTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[20],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 352),
      (const char (*)[20])"SITUATION_TYPE_NONE",
      (data::LoadingTipsSituationType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "SITUATION_TYPE_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[32],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 392),
      (const char (*)[32])"SITUATION_TYPE_COMMON_TRANSPORT",
      (data::LoadingTipsSituationType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "SITUATION_TYPE_COMMON_TRANSPORT");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[35],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 432),
      (const char (*)[35])"SITUATION_TYPE_ENTER_QUEST_DUNGEON",
      (data::LoadingTipsSituationType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "SITUATION_TYPE_ENTER_QUEST_DUNGEON");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[35],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 472),
      (const char (*)[35])"SITUATION_TYPE_ENTER_DAILY_DUNGEON",
      (data::LoadingTipsSituationType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "SITUATION_TYPE_ENTER_DAILY_DUNGEON");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[27],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 512),
      (const char (*)[27])"SITUATION_TYPE_ENTER_TOWER",
      (data::LoadingTipsSituationType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "SITUATION_TYPE_ENTER_TOWER");
    *(_DWORD *)(v1 + 176) = 5;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[26],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 552),
      (const char (*)[26])"SITUATION_TYPE_ENTER_ROOM",
      (data::LoadingTipsSituationType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "SITUATION_TYPE_ENTER_ROOM");
    *(_DWORD *)(v1 + 192) = 6;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[21],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 592),
      (const char (*)[21])"SITUATION_TYPE_LOGIN",
      (data::LoadingTipsSituationType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "SITUATION_TYPE_LOGIN");
    *(_DWORD *)(v1 + 208) = 7;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[22],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 632),
      (const char (*)[22])"SITUATION_TYPE_LOGOUT",
      (data::LoadingTipsSituationType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "SITUATION_TYPE_LOGOUT");
    *(_DWORD *)(v1 + 224) = 8;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[22],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 672),
      (const char (*)[22])"SITUATION_TYPE_REVIVE",
      (data::LoadingTipsSituationType *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "SITUATION_TYPE_REVIVE");
    *(_DWORD *)(v1 + 240) = 9;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[31],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 712),
      (const char (*)[31])"SITUATION_TYPE_ENTER_HOMEWORLD",
      (data::LoadingTipsSituationType *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "SITUATION_TYPE_ENTER_HOMEWORLD");
    *(_DWORD *)(v1 + 256) = 10;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[28],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 752),
      (const char (*)[28])"SITUATION_TYPE_ENTER_ISLAND",
      (data::LoadingTipsSituationType *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "SITUATION_TYPE_ENTER_ISLAND");
    *(_DWORD *)(v1 + 272) = 11;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[32],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 792),
      (const char (*)[32])"SITUATION_TYPE_ENTER_GCG_NORMAL",
      (data::LoadingTipsSituationType *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "SITUATION_TYPE_ENTER_GCG_NORMAL");
    *(_DWORD *)(v1 + 288) = 12;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[32],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 832),
      (const char (*)[32])"SITUATION_TYPE_ENTER_GCG_CATPUB",
      (data::LoadingTipsSituationType *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "SITUATION_TYPE_ENTER_GCG_CATPUB");
    *(_DWORD *)(v1 + 304) = 13;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[29],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 872),
      (const char (*)[29])"SITUATION_TYPE_ENTER_GCG_PVE",
      (data::LoadingTipsSituationType *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "SITUATION_TYPE_ENTER_GCG_PVE");
    *(_DWORD *)(v1 + 320) = 14;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[28],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 912),
      (const char (*)[28])"SITUATION_TYPE_ENTER_GCG_AI",
      (data::LoadingTipsSituationType *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "SITUATION_TYPE_ENTER_GCG_AI");
    *(_DWORD *)(v1 + 336) = 15;
    std::pair<std::string const,data::LoadingTipsSituationType>::pair<char const(&)[29],data::LoadingTipsSituationType,true>(
      (std::pair<const std::string,data::LoadingTipsSituationType> *const)(v1 + 952),
      (const char (*)[29])"SITUATION_TYPE_ENTER_GCG_PVP",
      (data::LoadingTipsSituationType *)(v1 + 336));
    std::allocator<std::pair<std::string const,data::LoadingTipsSituationType>>::allocator((std::allocator<std::pair<const std::string,data::LoadingTipsSituationType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::LoadingTipsSituationType>::unordered_map(
      &data::getLoadingTipsSituationTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::LoadingTipsSituationType> >)__PAIR128__(16LL, v1 + 352),
      0LL,
      (const std::unordered_map<std::string,data::LoadingTipsSituationType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::LoadingTipsSituationType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::LoadingTipsSituationType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getLoadingTipsSituationTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::LoadingTipsSituationType>::~unordered_map,
      &data::getLoadingTipsSituationTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::LoadingTipsSituationType>>::~allocator((std::allocator<std::pair<const std::string,data::LoadingTipsSituationType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::LoadingTipsSituationType> *)(v1 + 992);
          i != (std::pair<const std::string,data::LoadingTipsSituationType> *)(v1 + 352);
          std::pair<std::string const,data::LoadingTipsSituationType>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1120LL, v6);
  }
  return &data::getLoadingTipsSituationTypeNameMap[abi:cxx11](void)::m;
};

// Line 219: range 000000001452A080-000000001452B5A6
const std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >> *__cdecl data::getLoadingTipsSituationTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  char v21[3184]; // [rsp+10h] [rbp-C70h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(3136LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "35 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 64 9 <unknown> 416 64 9 <unknown> 512 64 9 <unknown> 608 6"
                        "4 9 <unknown> 704 64 9 <unknown> 800 64 9 <unknown> 896 64 9 <unknown> 992 64 9 <unknown> 1088 6"
                        "4 9 <unknown> 1184 64 9 <unknown> 1280 64 9 <unknown> 1376 64 9 <unknown> 1472 64 9 <unknown> 15"
                        "68 64 9 <unknown> 1664 64 9 <unknown> 1760 64 9 <unknown> 1856 1152 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getLoadingTipsSituationTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = -234556924;
  v3[536862727] = -234556924;
  v3[536862728] = -234556924;
  v3[536862729] = -234556924;
  v3[536862732] = -218959118;
  v3[536862735] = -218959118;
  v3[536862738] = -218959118;
  v3[536862741] = -218959118;
  v3[536862744] = -218959118;
  v3[536862747] = -218959118;
  v3[536862750] = -218959118;
  v3[536862753] = -218959118;
  v3[536862756] = -218959118;
  v3[536862759] = -218959118;
  v3[536862762] = -218959118;
  v3[536862765] = -218959118;
  v3[536862768] = -218959118;
  v3[536862771] = -218959118;
  v3[536862774] = -218959118;
  v3[536862777] = -218959118;
  v3[536862814] = -202116109;
  v3[536862815] = -202116109;
  v3[536862816] = -202116109;
  v3[536862817] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getLoadingTipsSituationTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getLoadingTipsSituationTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[20])"SITUATION_TYPE_NONE");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 1856),
      (data::LoadingTipsSituationType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[16])byte_1AD9C620,
      (const char (*)[32])"SITUATION_TYPE_COMMON_TRANSPORT");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 1928),
      (data::LoadingTipsSituationType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 512),
      (const char (*)[16])byte_1AD9C660,
      (const char (*)[35])"SITUATION_TYPE_ENTER_QUEST_DUNGEON");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2000),
      (data::LoadingTipsSituationType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 512));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 608),
      (const char (*)[16])byte_1AD9C6A0,
      (const char (*)[35])"SITUATION_TYPE_ENTER_DAILY_DUNGEON");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2072),
      (data::LoadingTipsSituationType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 608));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 704),
      (const char (*)[13])byte_1AD9C6E0,
      (const char (*)[27])"SITUATION_TYPE_ENTER_TOWER");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2144),
      (data::LoadingTipsSituationType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 704));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 800),
      (const char (*)[13])byte_1AD9C720,
      (const char (*)[26])"SITUATION_TYPE_ENTER_ROOM");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2216),
      (data::LoadingTipsSituationType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 800));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 896),
      (const char (*)[7])byte_1AD9C760,
      (const char (*)[21])"SITUATION_TYPE_LOGIN");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2288),
      (data::LoadingTipsSituationType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 896));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 992),
      (const char (*)[7])byte_1AD9C7A0,
      (const char (*)[22])"SITUATION_TYPE_LOGOUT");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2360),
      (data::LoadingTipsSituationType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 992));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1088),
      (const char (*)[13])byte_1AD9C7E0,
      (const char (*)[22])"SITUATION_TYPE_REVIVE");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2432),
      (data::LoadingTipsSituationType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 1088));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1184),
      (const char (*)[13])byte_1AD9C820,
      (const char (*)[31])"SITUATION_TYPE_ENTER_HOMEWORLD");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2504),
      (data::LoadingTipsSituationType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1184));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 10;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1280),
      (const char (*)[13])byte_1AD9C860,
      (const char (*)[28])"SITUATION_TYPE_ENTER_ISLAND");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2576),
      (data::LoadingTipsSituationType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1280));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 11;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1376),
      (const char (*)[25])byte_1AD9C8A0,
      (const char (*)[32])"SITUATION_TYPE_ENTER_GCG_NORMAL");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2648),
      (data::LoadingTipsSituationType *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 1376));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 12;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1472),
      (const char (*)[25])byte_1AD9C8E0,
      (const char (*)[32])"SITUATION_TYPE_ENTER_GCG_CATPUB");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2720),
      (data::LoadingTipsSituationType *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 1472));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 13;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1568),
      (const char (*)[22])byte_1AD9C920,
      (const char (*)[29])"SITUATION_TYPE_ENTER_GCG_PVE");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2792),
      (data::LoadingTipsSituationType *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 1568));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 14;
    std::pair<std::string,std::string>::pair<char const(&)[21],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1664),
      (const char (*)[21])byte_1AD9C960,
      (const char (*)[28])"SITUATION_TYPE_ENTER_GCG_AI");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2864),
      (data::LoadingTipsSituationType *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 1664));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 15;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1760),
      (const char (*)[22])byte_1AD9C9A0,
      (const char (*)[29])"SITUATION_TYPE_ENTER_GCG_PVP");
    std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::pair<data::LoadingTipsSituationType,true>(
      (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *const)(v1 + 2936),
      (data::LoadingTipsSituationType *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 1760));
    std::allocator<std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string>>::map(
      &data::getLoadingTipsSituationTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > >)__PAIR128__(16LL, v1 + 1856),
      (const std::less<data::LoadingTipsSituationType> *)(v1 + 32),
      (const std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getLoadingTipsSituationTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::LoadingTipsSituationType,std::pair<std::string,std::string>>::~map,
      &data::getLoadingTipsSituationTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *)(v1 + 3008);
          i != (std::pair<const data::LoadingTipsSituationType,std::pair<std::string,std::string > > *)(v1 + 1856);
          std::pair<data::LoadingTipsSituationType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 1856, 1152LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1760));
    v5 = (_DWORD *)(((v1 + 1760) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1664));
    v6 = (_DWORD *)(((v1 + 1664) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1568));
    v7 = (_DWORD *)(((v1 + 1568) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1472));
    v8 = (_DWORD *)(((v1 + 1472) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1376));
    v9 = (_DWORD *)(((v1 + 1376) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1280));
    v10 = (_DWORD *)(((v1 + 1280) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1184));
    v11 = (_DWORD *)(((v1 + 1184) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1088));
    v12 = (_DWORD *)(((v1 + 1088) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 992));
    v13 = (_DWORD *)(((v1 + 992) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 896));
    v14 = (_DWORD *)(((v1 + 896) >> 3) + 2147450880);
    *v14 = -117901064;
    v14[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 800));
    v15 = (_DWORD *)(((v1 + 800) >> 3) + 2147450880);
    *v15 = -117901064;
    v15[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 704));
    v16 = (_DWORD *)(((v1 + 704) >> 3) + 2147450880);
    *v16 = -117901064;
    v16[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 608));
    v17 = (_DWORD *)(((v1 + 608) >> 3) + 2147450880);
    *v17 = -117901064;
    v17[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 512));
    v18 = (_DWORD *)(((v1 + 512) >> 3) + 2147450880);
    *v18 = -117901064;
    v18[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 416));
    v19 = (_DWORD *)(((v1 + 416) >> 3) + 2147450880);
    *v19 = -117901064;
    v19[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 320));
  }
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8180) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 392) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 3136LL, v21);
  }
  return &data::getLoadingTipsSituationTypeEnumMap[abi:cxx11](void)::m;
};

// Line 244: range 000000001452B5A8-000000001452E48D
int32_t __cdecl data::LoadingTipsExcelConfig::init(
        data::LoadingTipsExcelConfig *const this,
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
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  _DWORD *v16; // rax
  bool v17; // r15
  unsigned __int64 v18; // rax
  char *i; // r14
  _DWORD *v20; // rax
  common::milog::MiLogStream *v21; // rax
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  unsigned __int64 v24; // rax
  _DWORD *v25; // rax
  bool v26; // r15
  unsigned __int64 v27; // rax
  char *j; // r14
  _DWORD *v29; // rax
  common::milog::MiLogStream *v30; // rax
  bool v31; // r14
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  _DWORD *v34; // rax
  bool v35; // r15
  unsigned __int64 v36; // rax
  char *k; // r14
  _DWORD *v38; // rax
  common::milog::MiLogStream *v39; // rax
  bool v40; // r14
  common::milog::MiLogStream *v41; // rax
  bool t; // [rsp+0h] [rbp-AD0h]
  bool ta; // [rsp+0h] [rbp-AD0h]
  bool tb; // [rsp+0h] [rbp-AD0h]
  bool tc; // [rsp+0h] [rbp-AD0h]
  bool td; // [rsp+0h] [rbp-AD0h]
  bool te; // [rsp+0h] [rbp-AD0h]
  bool tf; // [rsp+0h] [rbp-AD0h]
  bool tg; // [rsp+0h] [rbp-AD0h]
  bool th; // [rsp+0h] [rbp-AD0h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-AC0h]
  std::initializer_list<std::string > v53; // [rsp+20h] [rbp-AB0h]
  char v54[2704]; // [rsp+40h] [rbp-A90h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2656LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "55 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 24 "
                        "9 <unknown> 448 24 9 <unknown> 512 24 9 <unknown> 576 32 11 val_str:245 640 32 9 <unknown> 704 3"
                        "2 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 3"
                        "2 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 13"
                        "44 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown"
                        "> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unk"
                        "nown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 "
                        "<unknown> 2304 32 9 <unknown> 2368 64 9 <unknown> 2464 64 9 <unknown> 2560 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::LoadingTipsExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234753535;
  v4[536862729] = -234753535;
  v4[536862730] = -234753535;
  v4[536862731] = -234753535;
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862734] = -234881024;
  v4[536862735] = -218959118;
  v4[536862736] = -234881024;
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
  v4[536862781] = -218959118;
  v4[536862783] = -218959118;
  v4[536862785] = -218959118;
  v4[536862787] = -218959118;
  v4[536862789] = -218959118;
  v4[536862791] = -218959118;
  v4[536862793] = -218959118;
  v4[536862796] = -218959118;
  v4[536862799] = -218959118;
  v4[536862802] = -202116109;
  std::string::basic_string(v2 + 576);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 640),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 640), &this->id) != 0;
  std::string::~string((void *)(v2 + 640));
  *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 704, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 704),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
      "init",
      248);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 704),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 768),
      "stageID",
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 768), &this->stage_id) != 0;
    std::string::~string((void *)(v2 + 768));
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
        "init",
        253);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 832),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v7, (const char (*)[28])byte_1AD9D6A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 896),
        &byte_1AD9D6E0,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 896), &this->start_time) != 0;
      std::string::~string((void *)(v2 + 896));
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
      {
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 960, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 960),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
          "init",
          258);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 960),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1AD9D720);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1024),
          &byte_1AD9D780,
          (const std::allocator<char> *)(v2 + 96));
        tc = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1024), &this->end_time) != 0;
        std::string::~string((void *)(v2 + 1024));
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
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
            "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
            "init",
            263);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 1088),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AD9D7C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
          *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1152),
            "minLevel",
            (const std::allocator<char> *)(v2 + 112));
          td = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                 row,
                 (const std::string *)(v2 + 1152),
                 &this->min_level) != 0;
          std::string::~string((void *)(v2 + 1152));
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( td )
          {
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1216, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1216),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
              "init",
              268);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1216),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v10, (const char (*)[29])byte_1AD9D860);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1280),
              "maxLevel",
              (const std::allocator<char> *)(v2 + 128));
            te = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                   row,
                   (const std::string *)(v2 + 1280),
                   &this->max_level) != 0;
            std::string::~string((void *)(v2 + 1280));
            *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( te )
            {
              *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1344) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1344, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1344),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                "init",
                273);
              v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1344),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v11, (const char (*)[29])byte_1AD9D8E0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
              *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1408),
                &byte_1AD9D920,
                (const std::allocator<char> *)(v2 + 144));
              tf = common::tools::TxtFile::Row::assignToStr(
                     row,
                     (const std::string *)(v2 + 1408),
                     &this->limit_open_state) != 0;
              std::string::~string((void *)(v2 + 1408));
              *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( tf )
              {
                *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1472) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1472, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1472),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                  "init",
                  278);
                v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1472),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v12, (const char (*)[36])byte_1AD9D960);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1536),
                  &byte_1AD9D9C0,
                  (const std::allocator<char> *)(v2 + 160));
                tg = common::tools::TxtFile::Row::assignToStr(
                       row,
                       (const std::string *)(v2 + 1536),
                       &this->pre_main_quest_ids) != 0;
                std::string::~string((void *)(v2 + 1536));
                *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( tg )
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
                    "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                    "init",
                    283);
                  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1600),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v13,
                    (const char (*)[36])byte_1AD9DA00);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                  *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1664),
                    &byte_1AD9DA60,
                    (const std::allocator<char> *)(v2 + 176));
                  th = common::tools::TxtFile::Row::assignToStr(
                         row,
                         (const std::string *)(v2 + 1664),
                         (std::string *)(v2 + 576)) != 0;
                  std::string::~string((void *)(v2 + 1664));
                  *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( th )
                  {
                    *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1728) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1728, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1728),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                      "init",
                      288);
                    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1728),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v14,
                      (const char (*)[36])byte_1AD9DAA0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                    *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    v15 = ((v2 + 384) >> 3) + 2147450880;
                    *(_WORD *)v15 = 0;
                    *(_BYTE *)(v15 + 2) = 0;
                    v16 = (_DWORD *)(((v2 + 2368) >> 3) + 2147450880);
                    *v16 = 0;
                    v16[1] = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2368),
                      ";",
                      (const std::allocator<char> *)(v2 + 192));
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 208);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2400),
                      ",",
                      (const std::allocator<char> *)(v2 + 208));
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 224));
                    std::vector<std::string>::vector(
                      (std::vector<std::string> *const)(v2 + 384),
                      (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 2368),
                      (const std::vector<std::string>::allocator_type *)(v2 + 224));
                    v17 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                            (const std::string *)(v2 + 576),
                            (const std::vector<std::string> *)(v2 + 384),
                            &this->pre_quest_id_list,
                            1) != 0;
                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 384));
                    v18 = ((v2 + 384) >> 3) + 2147450880;
                    *(_WORD *)v18 = -1800;
                    *(_BYTE *)(v18 + 2) = -8;
                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 224));
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                    for ( i = (char *)(v2 + 2432); i != (char *)(v2 + 2368); std::string::~string(i) )
                      i -= 32;
                    v20 = (_DWORD *)(((v2 + 2368) >> 3) + 2147450880);
                    *v20 = -117901064;
                    v20[1] = -117901064;
                    std::allocator<char>::~allocator(v2 + 208);
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( v17 )
                    {
                      *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1792) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1792, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1792),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                        "init",
                        293);
                      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1792),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        v21,
                        (const char (*)[36])byte_1AD9DAA0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                      *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 240);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1856),
                        &byte_1AD9DB00,
                        (const std::allocator<char> *)(v2 + 240));
                      v22 = common::tools::TxtFile::Row::assignToStr(
                              row,
                              (const std::string *)(v2 + 1856),
                              (std::string *)(v2 + 576)) != 0;
                      std::string::~string((void *)(v2 + 1856));
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 240);
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                      if ( v22 )
                      {
                        *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1920) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1920, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1920),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                          "init",
                          298);
                        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1920),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          v23,
                          (const char (*)[36])byte_1AD9DB40);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                        *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        v24 = ((v2 + 448) >> 3) + 2147450880;
                        *(_WORD *)v24 = 0;
                        *(_BYTE *)(v24 + 2) = 0;
                        v25 = (_DWORD *)(((v2 + 2464) >> 3) + 2147450880);
                        *v25 = 0;
                        v25[1] = 0;
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 256);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2464),
                          ";",
                          (const std::allocator<char> *)(v2 + 256));
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 272);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2496),
                          ",",
                          (const std::allocator<char> *)(v2 + 272));
                        __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2464);
                        __l._M_len = 2LL;
                        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 288));
                        std::vector<std::string>::vector(
                          (std::vector<std::string> *const)(v2 + 448),
                          __l,
                          (const std::vector<std::string>::allocator_type *)(v2 + 288));
                        v26 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                (const std::string *)(v2 + 576),
                                (const std::vector<std::string> *)(v2 + 448),
                                &this->disable_quest_id_list,
                                1) != 0;
                        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 448));
                        v27 = ((v2 + 448) >> 3) + 2147450880;
                        *(_WORD *)v27 = -1800;
                        *(_BYTE *)(v27 + 2) = -8;
                        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 288));
                        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                        for ( j = (char *)(v2 + 2528); j != (char *)(v2 + 2464); std::string::~string(j) )
                          j -= 32;
                        v29 = (_DWORD *)(((v2 + 2464) >> 3) + 2147450880);
                        *v29 = -117901064;
                        v29[1] = -117901064;
                        std::allocator<char>::~allocator(v2 + 272);
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                        std::allocator<char>::~allocator(v2 + 256);
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                        if ( v26 )
                        {
                          *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1984) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1984, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1984),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                            "init",
                            303);
                          v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1984),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                            v30,
                            (const char (*)[36])byte_1AD9DB40);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                          *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 304);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2048),
                            &byte_1AD9DBA0,
                            (const std::allocator<char> *)(v2 + 304));
                          v31 = common::tools::TxtFile::Row::assignToStr(
                                  row,
                                  (const std::string *)(v2 + 2048),
                                  (std::string *)(v2 + 576)) != 0;
                          std::string::~string((void *)(v2 + 2048));
                          *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 304);
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                          if ( v31 )
                          {
                            *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2112) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2143) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2143) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2112, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2112),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                              "init",
                              308);
                            v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2112),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                              v32,
                              (const char (*)[35])byte_1AD9DBE0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2112));
                            *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                          }
                          else
                          {
                            v33 = ((v2 + 512) >> 3) + 2147450880;
                            *(_WORD *)v33 = 0;
                            *(_BYTE *)(v33 + 2) = 0;
                            v34 = (_DWORD *)(((v2 + 2560) >> 3) + 2147450880);
                            *v34 = 0;
                            v34[1] = 0;
                            *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 320);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2560),
                              ";",
                              (const std::allocator<char> *)(v2 + 320));
                            *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 336);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2592),
                              ",",
                              (const std::allocator<char> *)(v2 + 336));
                            v53._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2560);
                            v53._M_len = 2LL;
                            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 352));
                            std::vector<std::string>::vector(
                              (std::vector<std::string> *const)(v2 + 512),
                              v53,
                              (const std::vector<std::string>::allocator_type *)(v2 + 352));
                            v35 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                    (const std::string *)(v2 + 576),
                                    (const std::vector<std::string> *)(v2 + 512),
                                    &this->enable_dungeon_id,
                                    1) != 0;
                            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 512));
                            v36 = ((v2 + 512) >> 3) + 2147450880;
                            *(_WORD *)v36 = -1800;
                            *(_BYTE *)(v36 + 2) = -8;
                            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 352));
                            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                            for ( k = (char *)(v2 + 2624); k != (char *)(v2 + 2560); std::string::~string(k) )
                              k -= 32;
                            v38 = (_DWORD *)(((v2 + 2560) >> 3) + 2147450880);
                            *v38 = -117901064;
                            v38[1] = -117901064;
                            std::allocator<char>::~allocator(v2 + 336);
                            *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                            std::allocator<char>::~allocator(v2 + 320);
                            *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                            if ( v35 )
                            {
                              *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2176) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2207) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2207) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2176, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2176),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                                "init",
                                313);
                              v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2176),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                v39,
                                (const char (*)[35])byte_1AD9DBE0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                              *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                              v6 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 368);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2240),
                                &byte_1AD390C0,
                                (const std::allocator<char> *)(v2 + 368));
                              v40 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                      row,
                                      (const std::string *)(v2 + 2240),
                                      &this->weight) != 0;
                              std::string::~string((void *)(v2 + 2240));
                              *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 368);
                              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                              if ( v40 )
                              {
                                *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2304, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2304),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                                  "init",
                                  318);
                                v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2304),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                  v41,
                                  (const char (*)[27])byte_1AD39100);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                                *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
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
      }
    }
  }
  std::string::~string((void *)(v2 + 576));
  if ( v54 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8144) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862741) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450956 - (((_DWORD)v4 + 2147450964) & 0xFFFFFFF8) + 256) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2656LL, v54);
  }
  return v6;
};

// Line 326: range 000000001452E48E-000000001452E799
int32_t __cdecl data::LoadingSituationExcelConfig::init(
        data::LoadingSituationExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::LoadingSituationExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "stageID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->stage_id) != 0;
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
      4u,
      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
      "init",
      329);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v6, (const char (*)[28])byte_1AD9D6A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
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

// Line 338: range 000000001452E79A-000000001452F76F
int32_t __cdecl data::LoadingTipsExcelConfigMgrBase::loadLoadingTipsExcelConfig(
        data::LoadingTipsExcelConfigMgrBase *const this,
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
  common::milog::MiLogStream *v13; // rax
  int v14; // r14d
  __int64 v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  __int64 v20; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  data::LoadingTipsExcelConfig *v23; // rax
  unsigned int *v24; // rcx
  data::LoadingTipsExcelConfig *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-86F8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-86D8h]
  char v35[34512]; // [rsp+50h] [rbp-86D0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34464LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:353 80 4 9 <unknown> 96 32 9 paths:339 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 264 8 "
                        "data:356 880 376 24 debug_message_stream:364 1328 32880 12 txt_file:347";
  *(_QWORD *)(v3 + 16) = data::LoadingTipsExcelConfigMgrBase::loadLoadingTipsExcelConfig;
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
  v5[536862745] = -218959360;
  v5[536862746] = -218959118;
  v5[536862747] = 62194;
  v5[536862759] = -218959360;
  v5[536862760] = -218959118;
  v5[536862761] = 62194;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  v5[536863793] = -202116109;
  v5[536863794] = -202116109;
  v5[536863795] = -202116109;
  v5[536863796] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/LoadingTipsData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1328, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1328));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1328), v7) )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
        "loadLoadingTipsExcelConfig",
        350);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1AD383A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AD383E0);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1328));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1328), *(_DWORD *)(v3 + 64));
        __asan_unpoison_stack_memory(v3 + 544, 264LL);
        data::LoadingTipsExcelConfig::LoadingTipsExcelConfig((data::LoadingTipsExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::LoadingTipsExcelConfig::init((data::LoadingTipsExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 880, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 880);
            v15 = std::operator<<<std::char_traits<char>>(v3 + 880, &unk_1AD3B5A0);
            if ( *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 552);
            std::ostream::operator<<(v15, *(unsigned int *)(v3 + 552));
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
              "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
              "loadLoadingTipsExcelConfig",
              366);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])"<");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, __for_begin);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v18,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v20 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v20);
            *(_DWORD *)(v3 + 80) = v20;
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v3 + 80));
            v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v21,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 880);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 880);
            __asan_poison_stack_memory(v3 + 880, 376LL);
            v14 = 0;
          }
          else
          {
            v23 = std::move<data::LoadingTipsExcelConfig &>((data::LoadingTipsExcelConfig *)(v3 + 544));
            v26 = std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::emplace<unsigned int &,data::LoadingTipsExcelConfig>(
                    &this->loading_tips_excel_config_map,
                    (unsigned int *)(v3 + 552),
                    v23,
                    v24,
                    v25);
            if ( !v26.second )
            {
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 480, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 480),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                "loadLoadingTipsExcelConfig",
                371);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])byte_1AD3B5E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v3 + 552));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v14 = 0;
            }
            else
            {
              v14 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
            "loadLoadingTipsExcelConfig",
            359);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        data::LoadingTipsExcelConfig::~LoadingTipsExcelConfig((data::LoadingTipsExcelConfig *const)(v3 + 544));
        __asan_poison_stack_memory(v3 + 544, 264LL);
        if ( v14 != 1 )
        {
          v29 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v29 = 1;
LABEL_45:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v29 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1328));
    __asan_poison_stack_memory(v3 + 1328, 32880LL);
    if ( !v10 )
      goto LABEL_49;
  }
  v2 = 0;
LABEL_49:
  for ( i = (char *)(v3 + 128); i != (char *)(v3 + 96); std::string::~string(i) )
    i -= 32;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4292) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34464LL, v35);
  }
  return v2;
};

// Line 380: range 000000001452F770-00000000145307C8
int32_t __cdecl data::LoadingTipsExcelConfigMgrBase::loadLoadingSituationExcelConfig(
        data::LoadingTipsExcelConfigMgrBase *const this,
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
  __int64 v13; // rsi
  __int64 *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  __int64 v17; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  __int64 v22; // rsi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  data::LoadingSituationExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::LoadingSituationExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false,false>,bool> v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85B8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8598h]
  char v37[34192]; // [rsp+50h] [rbp-8590h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34144LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:395 64 4 9 <unknown> 80 16 8 data:398 112 32 9 paths:381 176 32 9 <"
                        "unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <u"
                        "nknown> 560 376 24 debug_message_stream:406 1008 32880 12 txt_file:389";
  *(_QWORD *)(v3 + 16) = data::LoadingTipsExcelConfigMgrBase::loadLoadingSituationExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862749] = -218959360;
  v5[536862750] = -218959118;
  v5[536862751] = 62194;
  v5[536863779] = -202116109;
  v5[536863780] = -202116109;
  v5[536863781] = -202116109;
  v5[536863782] = -202116109;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 112),
    "/txt/LoadingSituationData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 112); __for_begin != (std::string *)(v3 + 144); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 176, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 176), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 176);
    std::string::~string((void *)(v3 + 176));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1008, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1008));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1008), v7) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
        "loadLoadingSituationExcelConfig",
        392);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[8])byte_1AD383A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AD383E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1008));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        v13 = *(unsigned int *)(v3 + 48);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1008), v13);
        *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
        v14 = &`vtable for'data::LoadingSituationExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( row_ptr )
        {
          if ( data::LoadingSituationExcelConfig::init((data::LoadingSituationExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1AD9DFA0);
            if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 88);
            std::ostream::operator<<(v17, *(unsigned int *)(v3 + 88));
            *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 368, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 368),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
              "loadLoadingSituationExcelConfig",
              408);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"<");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, __for_begin);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v22 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v22);
            *(_DWORD *)(v3 + 64) = v22;
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v3 + 64));
            v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v23,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 432, 32LL);
            }
            std::ostringstream::str(v3 + 432, v3 + 560);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)(v3 + 432));
            std::string::~string((void *)(v3 + 432));
            *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
            *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 560);
            __asan_poison_stack_memory(v3 + 560, 376LL);
            v16 = 0;
          }
          else
          {
            v25 = std::move<data::LoadingSituationExcelConfig &>((data::LoadingSituationExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::emplace<unsigned int &,data::LoadingSituationExcelConfig>(
                    &this->loading_situation_excel_config_map,
                    (unsigned int *)(v3 + 88),
                    v25,
                    v26,
                    v27);
            if ( !v28.second )
            {
              *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 496, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 496),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
                "loadLoadingSituationExcelConfig",
                413);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v29,
                      (const char (*)[14])byte_1AD9DFE0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v3 + 88));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
              *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v16 = 0;
            }
            else
            {
              v16 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
            "loadLoadingSituationExcelConfig",
            401);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::LoadingSituationExcelConfig::~LoadingSituationExcelConfig((data::LoadingSituationExcelConfig *const)(v3 + 80));
        *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
        if ( v16 != 1 )
        {
          v31 = 0;
          goto LABEL_49;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v31 = 1;
LABEL_49:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1008));
    __asan_poison_stack_memory(v3 + 1008, 32880LL);
    if ( !v10 )
      goto LABEL_53;
  }
  v2 = 0;
LABEL_53:
  for ( i = (char *)(v3 + 144); i != (char *)(v3 + 112); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90A4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4268) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34144LL, v37);
  }
  return v2;
};

// Line 422: range 00000000145307CA-0000000014530AEE
int32_t __cdecl data::LoadingTipsExcelConfigMgrBase::loadConfig(
        data::LoadingTipsExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::LoadingTipsExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( data::LoadingTipsExcelConfigMgrBase::loadLoadingTipsExcelConfig(this, config) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
      "loadConfig",
      425);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v5,
      (const char (*)[34])"loadLoadingTipsExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( data::LoadingTipsExcelConfigMgrBase::loadLoadingSituationExcelConfig(this, config) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/LoadingTipsExcelConfig.gen.cpp",
      "loadConfig",
      430);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v7,
      (const char (*)[39])"loadLoadingSituationExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 437: range 0000000014530AF0-0000000014530B02
int32_t __cdecl data::LoadingTipsExcelConfigMgrBase::rewriteConfig(
        data::LoadingTipsExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 442: range 0000000014530B04-0000000014530B16
int32_t __cdecl data::LoadingTipsExcelConfigMgrBase::finalConfig(
        data::LoadingTipsExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 447: range 0000000014530B18-0000000014530CD3
data::LoadingTipsExcelConfig *__fastcall data::LoadingTipsExcelConfigMgrBase::findLoadingTipsExcelConfig(
        data::LoadingTipsExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::LoadingTipsExcelConfig> *p_loading_tips_excel_config_map; // rdx
  std::unordered_map<unsigned int,data::LoadingTipsExcelConfig> *v6; // rdx
  bool v7; // al
  data::LoadingTipsExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:446 64 8 8 iter:448 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::LoadingTipsExcelConfigMgrBase::findLoadingTipsExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_loading_tips_excel_config_map = &this->loading_tips_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::find(
                                                                                            p_loading_tips_excel_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->loading_tips_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 460: range 0000000014530CD4-0000000014530E8F
const data::LoadingTipsExcelConfig *__fastcall data::LoadingTipsExcelConfigMgrBase::findLoadingTipsExcelConfig(
        const data::LoadingTipsExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::LoadingTipsExcelConfigMap *p_loading_tips_excel_config_map; // rdx
  data::LoadingTipsExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::LoadingTipsExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:459 64 8 8 iter:461 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::LoadingTipsExcelConfigMgrBase::findLoadingTipsExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_loading_tips_excel_config_map = &this->loading_tips_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::find(
                                                                                                  p_loading_tips_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->loading_tips_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LoadingTipsExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LoadingTipsExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 473: range 0000000014530E90-000000001453104B
data::LoadingSituationExcelConfig *__fastcall data::LoadingTipsExcelConfigMgrBase::findLoadingSituationExcelConfig(
        data::LoadingTipsExcelConfigMgrBase *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::LoadingSituationExcelConfig> *p_loading_situation_excel_config_map; // rdx
  std::unordered_map<unsigned int,data::LoadingSituationExcelConfig> *v6; // rdx
  bool v7; // al
  data::LoadingSituationExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:472 64 8 8 iter:474 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::LoadingTipsExcelConfigMgrBase::findLoadingSituationExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_loading_situation_excel_config_map = &this->loading_situation_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::find(
                                                                                                 p_loading_situation_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->loading_situation_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 486: range 000000001453104C-0000000014531207
const data::LoadingSituationExcelConfig *__fastcall data::LoadingTipsExcelConfigMgrBase::findLoadingSituationExcelConfig(
        const data::LoadingTipsExcelConfigMgrBase *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::LoadingSituationExcelConfigMap *p_loading_situation_excel_config_map; // rdx
  data::LoadingSituationExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::LoadingSituationExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:485 64 8 8 iter:487 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::LoadingTipsExcelConfigMgrBase::findLoadingSituationExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_loading_situation_excel_config_map = &this->loading_situation_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::find(p_loading_situation_excel_config_map, (const std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->loading_situation_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LoadingSituationExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LoadingSituationExcelConfig>,false,false> *const)(v2 + 64))->second;
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

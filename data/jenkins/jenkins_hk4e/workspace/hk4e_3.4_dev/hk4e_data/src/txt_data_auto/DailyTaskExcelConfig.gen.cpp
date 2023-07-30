// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/DailyTaskExcelConfig.gen.cpp

// Line 12: range 00000000139E3C5E-00000000139E3FD1
const char *__fastcall data::enumValToStr(data::DailyTaskType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::DailyTaskType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getDailyTaskTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::DailyTaskType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DailyTaskType,std::pair<std::string,std::string>>::find(map, (const std::map<data::DailyTaskType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::DailyTaskType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DailyTaskType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
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
    result = "INVALID_DailyTaskType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::DailyTaskType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000139E3FD2-00000000139E458A
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::DailyTaskType>,false,true>::pointer v10; // rax
  data::DailyTaskType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::DailyTaskType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getDailyTaskTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::DailyTaskType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DailyTaskType>::find(
                                                                                          m,
                                                                                          (const std::unordered_map<std::string,data::DailyTaskType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::DailyTaskType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::DailyTaskType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::DailyTaskType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::DailyTaskType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::DailyTaskType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
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

// Line 45: range 00000000139E458B-00000000139E4F54
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::DailyTaskType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::DailyTaskType>,false,true>::pointer v12; // rax
  data::DailyTaskType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::DailyTaskType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::DailyTaskType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::DailyTaskType>::pair<char const(&)[7],data::DailyTaskType,true>(
        (std::pair<const std::string,data::DailyTaskType> *const)(v2 + 432),
        (const char (*)[7])byte_1AC4C8A0,
        (data::DailyTaskType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC4C8A0);
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::DailyTaskType>::pair<char const(&)[7],data::DailyTaskType,true>(
        (std::pair<const std::string,data::DailyTaskType> *const)(v2 + 472),
        (const char (*)[7])byte_1AC4C8E0,
        (data::DailyTaskType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::DailyTaskType>>::allocator((std::allocator<std::pair<const std::string,data::DailyTaskType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::DailyTaskType>::unordered_map(
        &data::enumStrToVal(char const*,data::DailyTaskType &)::m,
        (std::initializer_list<std::pair<const std::string,data::DailyTaskType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::DailyTaskType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::DailyTaskType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::DailyTaskType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::DailyTaskType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::DailyTaskType>::~unordered_map,
        &data::enumStrToVal(char const*,data::DailyTaskType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::DailyTaskType>>::~allocator((std::allocator<std::pair<const std::string,data::DailyTaskType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::DailyTaskType> *)(v2 + 512);
            i != (std::pair<const std::string,data::DailyTaskType> *)(v2 + 432);
            std::pair<std::string const,data::DailyTaskType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::DailyTaskType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::DailyTaskType>::find(
                                                                                     &data::enumStrToVal(char const*,data::DailyTaskType &)::m,
                                                                                     (const std::unordered_map<std::string,data::DailyTaskType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::DailyTaskType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::DailyTaskType>::end(&data::enumStrToVal(char const*,data::DailyTaskType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::DailyTaskType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::DailyTaskType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::DailyTaskType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
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

// Line 70: range 00000000139E4F55-00000000139E4F6B
const char *__cdecl data::getDescription(data::DailyTaskType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 75: range 00000000139E4F6C-00000000139E5121
bool __cdecl data::isValidDailyTaskType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::DailyTaskType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::DailyTaskType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidDailyTaskType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getDailyTaskTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::DailyTaskType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DailyTaskType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getDailyTaskTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::DailyTaskType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DailyTaskType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::DailyTaskType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 81: range 00000000139E5122-00000000139E5283
bool __cdecl data::isValidDailyTaskTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::DailyTaskType> *v5; // rcx
  const std::unordered_map<std::string,data::DailyTaskType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidDailyTaskTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getDailyTaskTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::DailyTaskType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DailyTaskType>::end(v5);
  v6 = data::getDailyTaskTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::DailyTaskType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::DailyTaskType>::find(
                                                                                        v6,
                                                                                        name);
  result = std::__detail::operator!=<std::pair<std::string const,data::DailyTaskType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskType>,true> *)(v2 + 64));
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

// Line 86: range 00000000139E5284-00000000139E568A
const std::unordered_map<std::string,data::DailyTaskType> *__cdecl data::getDailyTaskTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::DailyTaskType> *i; // r14
  const std::unordered_map<std::string,data::DailyTaskType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getDailyTaskTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDailyTaskTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDailyTaskTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::DailyTaskType>::pair<char const(&)[17],data::DailyTaskType,true>(
      (std::pair<const std::string,data::DailyTaskType> *const)(v1 + 112),
      (const char (*)[17])"DAILY_TASK_QUEST",
      (data::DailyTaskType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "DAILY_TASK_QUEST");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::DailyTaskType>::pair<char const(&)[17],data::DailyTaskType,true>(
      (std::pair<const std::string,data::DailyTaskType> *const)(v1 + 152),
      (const char (*)[17])"DAILY_TASK_SCENE",
      (data::DailyTaskType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::DailyTaskType>>::allocator((std::allocator<std::pair<const std::string,data::DailyTaskType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::DailyTaskType>::unordered_map(
      &data::getDailyTaskTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::DailyTaskType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::DailyTaskType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::DailyTaskType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::DailyTaskType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getDailyTaskTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::DailyTaskType>::~unordered_map,
      &data::getDailyTaskTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::DailyTaskType>>::~allocator((std::allocator<std::pair<const std::string,data::DailyTaskType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::DailyTaskType> *)(v1 + 192);
          i != (std::pair<const std::string,data::DailyTaskType> *)(v1 + 112);
          std::pair<std::string const,data::DailyTaskType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getDailyTaskTypeNameMap[abi:cxx11](void)::m;
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

// Line 96: range 00000000139E568B-00000000139E5C48
const std::map<data::DailyTaskType,std::pair<std::string,std::string >> *__cdecl data::getDailyTaskTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::DailyTaskType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getDailyTaskTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getDailyTaskTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDailyTaskTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[7])byte_1AC4C8A0,
      (const char (*)[17])"DAILY_TASK_QUEST");
    std::pair<data::DailyTaskType const,std::pair<std::string,std::string>>::pair<data::DailyTaskType,true>(
      (std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::DailyTaskType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[7])byte_1AC4C8E0,
      (const char (*)[17])"DAILY_TASK_SCENE");
    std::pair<data::DailyTaskType const,std::pair<std::string,std::string>>::pair<data::DailyTaskType,true>(
      (std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::DailyTaskType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::DailyTaskType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::DailyTaskType,std::pair<std::string,std::string>>::map(
      &data::getDailyTaskTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::DailyTaskType> *)(v1 + 48),
      (const std::map<data::DailyTaskType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getDailyTaskTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::DailyTaskType,std::pair<std::string,std::string>>::~map,
      &data::getDailyTaskTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::DailyTaskType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::DailyTaskType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::DailyTaskType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getDailyTaskTypeEnumMap[abi:cxx11](void)::m;
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

// Line 106: range 00000000139E5C49-00000000139E5FBC
const char *__fastcall data::enumValToStr(data::ConditionType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ConditionType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ConditionType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:105 64 8 8 iter:108 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ConditionType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ConditionType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ConditionType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumValToStr",
      111);
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
    result = "INVALID_ConditionType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ConditionType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ConditionType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 118: range 00000000139E5FBD-00000000139E6575
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConditionType>,false,true>::pointer v10; // rax
  data::ConditionType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ConditionType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:127 96 8 9 <unknown> 128 8 5 s:117 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getConditionTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ConditionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConditionType>::find(
                                                                                          m,
                                                                                          (const std::unordered_map<std::string,data::ConditionType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ConditionType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ConditionType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ConditionType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConditionType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConditionType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "enumNameToVal",
        130);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConditionType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConditionType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumNameToVal",
      121);
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

// Line 139: range 00000000139E6576-00000000139E76A3
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  std::pair<const std::string,data::ConditionType> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ConditionType>,false,true>::pointer v11; // rax
  data::ConditionType second; // ecx
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
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 8 6 it:165 384 8 9 <unknown> 416 8 5 s:"
                        "138 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 600 9 <unknown>";
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ConditionType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ConditionType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[7],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 640),
        (const char (*)[7])byte_1AC4C8A0,
        (data::ConditionType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC4C8A0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[16],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 680),
        (const char (*)[16])byte_1AC4CBC0,
        (data::ConditionType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC4CBC0);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[28],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 720),
        (const char (*)[28])byte_1AC4CC00,
        (data::ConditionType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AC4CC00);
      *(_DWORD *)(v2 + 160) = 4;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[31],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 760),
        (const char (*)[31])byte_1AC4CC40,
        (data::ConditionType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1AC4CC40);
      *(_DWORD *)(v2 + 176) = 5;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[28],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 800),
        (const char (*)[28])byte_1AC4CC80,
        (data::ConditionType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1AC4CC80);
      *(_DWORD *)(v2 + 192) = 6;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[28],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 840),
        (const char (*)[28])byte_1AC4CCC0,
        (data::ConditionType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1AC4CCC0);
      *(_DWORD *)(v2 + 208) = 7;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[26],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 880),
        (const char (*)[26])byte_1AC4CD00,
        (data::ConditionType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1AC4CD00);
      *(_DWORD *)(v2 + 224) = 8;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[28],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 920),
        (const char (*)[28])byte_1AC4CD40,
        (data::ConditionType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1AC4CD40);
      *(_DWORD *)(v2 + 240) = 9;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[22],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 960),
        (const char (*)[22])byte_1AC4CD80,
        (data::ConditionType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1AC4CD80);
      *(_DWORD *)(v2 + 256) = 10;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[19],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 1000),
        (const char (*)[19])byte_1AC4CDC0,
        (data::ConditionType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, byte_1AC4CDC0);
      *(_DWORD *)(v2 + 272) = 11;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[25],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 1040),
        (const char (*)[25])byte_1AC4CE00,
        (data::ConditionType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, byte_1AC4CE00);
      *(_DWORD *)(v2 + 288) = 12;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[25],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 1080),
        (const char (*)[25])byte_1AC4CE40,
        (data::ConditionType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, byte_1AC4CE40);
      *(_DWORD *)(v2 + 304) = 13;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[25],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 1120),
        (const char (*)[25])byte_1AC4CE80,
        (data::ConditionType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, byte_1AC4CE80);
      *(_DWORD *)(v2 + 320) = 14;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[25],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 1160),
        (const char (*)[25])byte_1AC4CEC0,
        (data::ConditionType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, byte_1AC4CEC0);
      *(_DWORD *)(v2 + 336) = 15;
      std::pair<std::string const,data::ConditionType>::pair<char const(&)[19],data::ConditionType,true>(
        (std::pair<const std::string,data::ConditionType> *const)(v2 + 1200),
        (const char (*)[19])byte_1AC4CF00,
        (data::ConditionType *)(v2 + 336));
      std::allocator<std::pair<std::string const,data::ConditionType>>::allocator((std::allocator<std::pair<const std::string,data::ConditionType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ConditionType>::unordered_map(
        &data::enumStrToVal(char const*,data::ConditionType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ConditionType> >)__PAIR128__(15LL, v2 + 640),
        0LL,
        (const std::unordered_map<std::string,data::ConditionType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ConditionType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ConditionType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ConditionType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ConditionType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ConditionType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ConditionType>>::~allocator((std::allocator<std::pair<const std::string,data::ConditionType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ConditionType> *)(v2 + 1240);
            i != (std::pair<const std::string,data::ConditionType> *)(v2 + 640);
            std::pair<std::string const,data::ConditionType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ConditionType>::iterator *)(v2 + 352) = std::unordered_map<std::string,data::ConditionType>::find(
                                                                                     &data::enumStrToVal(char const*,data::ConditionType &)::m,
                                                                                     (const std::unordered_map<std::string,data::ConditionType>::key_type *)(v2 + 512));
    std::string::~string((void *)(v2 + 512));
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 384, v2 + 512);
    *(std::unordered_map<std::string,data::ConditionType>::iterator *)(v2 + 384) = std::unordered_map<std::string,data::ConditionType>::end(&data::enumStrToVal(char const*,data::ConditionType &)::m);
    v8 = (char *)(v2 + 384);
    v9 = std::__detail::operator==<std::pair<std::string const,data::ConditionType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConditionType>,true> *)(v2 + 352),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConditionType>,true> *)(v2 + 384));
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "enumStrToVal",
        168);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 576),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 416));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
      v5 = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::ConditionType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ConditionType>,false,true> *const)(v2 + 352));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumStrToVal",
      142);
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

// Line 177: range 00000000139E76A4-00000000139E76BA
const char *__cdecl data::getDescription(data::ConditionType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 182: range 00000000139E76BB-00000000139E7870
bool __cdecl data::isValidConditionType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ConditionType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ConditionType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:183 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidConditionType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ConditionType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ConditionType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ConditionType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 188: range 00000000139E7871-00000000139E79D2
bool __cdecl data::isValidConditionTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ConditionType> *v5; // rcx
  const std::unordered_map<std::string,data::ConditionType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidConditionTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getConditionTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ConditionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConditionType>::end(v5);
  v6 = data::getConditionTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ConditionType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ConditionType>::find(
                                                                                        v6,
                                                                                        name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ConditionType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConditionType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConditionType>,true> *)(v2 + 64));
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

// Line 193: range 00000000139E79D3-00000000139E84FE
const std::unordered_map<std::string,data::ConditionType> *__cdecl data::getConditionTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ConditionType> *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getConditionTypeNameMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getConditionTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getConditionTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[15],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 352),
      (const char (*)[15])"CONDITION_NONE",
      (data::ConditionType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "CONDITION_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[16],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 392),
      (const char (*)[16])"CONDITION_QUEST",
      (data::ConditionType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "CONDITION_QUEST");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[23],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 432),
      (const char (*)[23])"CONDITION_PLAYER_LEVEL",
      (data::ConditionType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "CONDITION_PLAYER_LEVEL");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[17],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 472),
      (const char (*)[17])"CONDITION_VAR_EQ",
      (data::ConditionType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "CONDITION_VAR_EQ");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[17],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 512),
      (const char (*)[17])"CONDITION_VAR_NE",
      (data::ConditionType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "CONDITION_VAR_NE");
    *(_DWORD *)(v1 + 176) = 5;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[17],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 552),
      (const char (*)[17])"CONDITION_VAR_GT",
      (data::ConditionType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "CONDITION_VAR_GT");
    *(_DWORD *)(v1 + 192) = 6;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[17],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 592),
      (const char (*)[17])"CONDITION_VAR_LT",
      (data::ConditionType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "CONDITION_VAR_LT");
    *(_DWORD *)(v1 + 208) = 7;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[23],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 632),
      (const char (*)[23])"CONDITION_UNLOCK_POINT",
      (data::ConditionType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "CONDITION_UNLOCK_POINT");
    *(_DWORD *)(v1 + 224) = 8;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[29],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 672),
      (const char (*)[29])"CONDITION_PLAYER_LEVEL_GT_EQ",
      (data::ConditionType *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "CONDITION_PLAYER_LEVEL_GT_EQ");
    *(_DWORD *)(v1 + 240) = 9;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[26],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 712),
      (const char (*)[26])"CONDITION_PLAYER_LEVEL_LT",
      (data::ConditionType *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "CONDITION_PLAYER_LEVEL_LT");
    *(_DWORD *)(v1 + 256) = 10;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[33],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 752),
      (const char (*)[33])"CONDITION_SPECIFIC_ACTIVITY_OPEN",
      (data::ConditionType *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "CONDITION_SPECIFIC_ACTIVITY_OPEN");
    *(_DWORD *)(v1 + 272) = 11;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[29],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 792),
      (const char (*)[29])"CONDITION_ACTIVITY_TYPE_OPEN",
      (data::ConditionType *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "CONDITION_ACTIVITY_TYPE_OPEN");
    *(_DWORD *)(v1 + 288) = 12;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[33],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 832),
      (const char (*)[33])"CONDITION_QUEST_GLOBAL_VAR_EQUAL",
      (data::ConditionType *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "CONDITION_QUEST_GLOBAL_VAR_EQUAL");
    *(_DWORD *)(v1 + 304) = 13;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[35],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 872),
      (const char (*)[35])"CONDITION_QUEST_GLOBAL_VAR_GREATER",
      (data::ConditionType *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "CONDITION_QUEST_GLOBAL_VAR_GREATER");
    *(_DWORD *)(v1 + 320) = 14;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[32],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 912),
      (const char (*)[32])"CONDITION_QUEST_GLOBAL_VAR_LESS",
      (data::ConditionType *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "CONDITION_QUEST_GLOBAL_VAR_LESS");
    *(_DWORD *)(v1 + 336) = 15;
    std::pair<std::string const,data::ConditionType>::pair<char const(&)[29],data::ConditionType,true>(
      (std::pair<const std::string,data::ConditionType> *const)(v1 + 952),
      (const char (*)[29])"CONDITION_FINISH_ACHIEVEMENT",
      (data::ConditionType *)(v1 + 336));
    std::allocator<std::pair<std::string const,data::ConditionType>>::allocator((std::allocator<std::pair<const std::string,data::ConditionType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ConditionType>::unordered_map(
      &data::getConditionTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ConditionType> >)__PAIR128__(16LL, v1 + 352),
      0LL,
      (const std::unordered_map<std::string,data::ConditionType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ConditionType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ConditionType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getConditionTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ConditionType>::~unordered_map,
      &data::getConditionTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ConditionType>>::~allocator((std::allocator<std::pair<const std::string,data::ConditionType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ConditionType> *)(v1 + 992);
          i != (std::pair<const std::string,data::ConditionType> *)(v1 + 352);
          std::pair<std::string const,data::ConditionType>::~pair(i) )
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
  return &data::getConditionTypeNameMap[abi:cxx11](void)::m;
};

// Line 217: range 00000000139E84FF-00000000139E9A25
const std::map<data::ConditionType,std::pair<std::string,std::string >> *__cdecl data::getConditionTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ConditionType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getConditionTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getConditionTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getConditionTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[15])"CONDITION_NONE");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 1856),
      (data::ConditionType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[16],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[7])byte_1AC4C8A0,
      (const char (*)[16])"CONDITION_QUEST");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 1928),
      (data::ConditionType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 512),
      (const char (*)[16])byte_1AC4CBC0,
      (const char (*)[23])"CONDITION_PLAYER_LEVEL");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2000),
      (data::ConditionType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 512));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 608),
      (const char (*)[28])byte_1AC4CC00,
      (const char (*)[17])"CONDITION_VAR_EQ");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2072),
      (data::ConditionType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 608));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[31],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 704),
      (const char (*)[31])byte_1AC4CC40,
      (const char (*)[17])"CONDITION_VAR_NE");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2144),
      (data::ConditionType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 704));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 800),
      (const char (*)[28])byte_1AC4CC80,
      (const char (*)[17])"CONDITION_VAR_GT");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2216),
      (data::ConditionType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 800));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 896),
      (const char (*)[28])byte_1AC4CCC0,
      (const char (*)[17])"CONDITION_VAR_LT");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2288),
      (data::ConditionType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 896));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[26],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 992),
      (const char (*)[26])byte_1AC4CD00,
      (const char (*)[23])"CONDITION_UNLOCK_POINT");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2360),
      (data::ConditionType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 992));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1088),
      (const char (*)[28])byte_1AC4CD40,
      (const char (*)[29])"CONDITION_PLAYER_LEVEL_GT_EQ");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2432),
      (data::ConditionType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 1088));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1184),
      (const char (*)[22])byte_1AC4CD80,
      (const char (*)[26])"CONDITION_PLAYER_LEVEL_LT");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2504),
      (data::ConditionType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1184));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 10;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1280),
      (const char (*)[19])byte_1AC4CDC0,
      (const char (*)[33])"CONDITION_SPECIFIC_ACTIVITY_OPEN");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2576),
      (data::ConditionType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1280));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 11;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1376),
      (const char (*)[25])byte_1AC4CE00,
      (const char (*)[29])"CONDITION_ACTIVITY_TYPE_OPEN");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2648),
      (data::ConditionType *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 1376));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 12;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1472),
      (const char (*)[25])byte_1AC4CE40,
      (const char (*)[33])"CONDITION_QUEST_GLOBAL_VAR_EQUAL");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2720),
      (data::ConditionType *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 1472));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 13;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1568),
      (const char (*)[25])byte_1AC4CE80,
      (const char (*)[35])"CONDITION_QUEST_GLOBAL_VAR_GREATER");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2792),
      (data::ConditionType *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 1568));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 14;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1664),
      (const char (*)[25])byte_1AC4CEC0,
      (const char (*)[32])"CONDITION_QUEST_GLOBAL_VAR_LESS");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2864),
      (data::ConditionType *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 1664));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 15;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1760),
      (const char (*)[19])byte_1AC4CF00,
      (const char (*)[29])"CONDITION_FINISH_ACHIEVEMENT");
    std::pair<data::ConditionType const,std::pair<std::string,std::string>>::pair<data::ConditionType,true>(
      (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *const)(v1 + 2936),
      (data::ConditionType *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 1760));
    std::allocator<std::pair<data::ConditionType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ConditionType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ConditionType,std::pair<std::string,std::string>>::map(
      &data::getConditionTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ConditionType,std::pair<std::string,std::string > > >)__PAIR128__(16LL, v1 + 1856),
      (const std::less<data::ConditionType> *)(v1 + 32),
      (const std::map<data::ConditionType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getConditionTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ConditionType,std::pair<std::string,std::string>>::~map,
      &data::getConditionTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ConditionType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ConditionType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *)(v1 + 3008);
          i != (std::pair<const data::ConditionType,std::pair<std::string,std::string > > *)(v1 + 1856);
          std::pair<data::ConditionType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getConditionTypeEnumMap[abi:cxx11](void)::m;
};

// Line 241: range 00000000139E9A26-00000000139E9D99
const char *__fastcall data::enumValToStr(data::DailyTaskFinishType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:240 64 8 8 iter:243 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getDailyTaskFinishTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DailyTaskFinishType,std::pair<std::string,std::string>>::find(map, (const std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DailyTaskFinishType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumValToStr",
      246);
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
    result = "INVALID_DailyTaskFinishType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 253: range 00000000139E9D9A-00000000139EA352
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::DailyTaskFinishType>,false,true>::pointer v10; // rax
  data::DailyTaskFinishType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::DailyTaskFinishType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:262 96 8 9 <unknown> 128 8 5 s:252 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getDailyTaskFinishTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::DailyTaskFinishType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DailyTaskFinishType>::find(
                                                                                                m,
                                                                                                (const std::unordered_map<std::string,data::DailyTaskFinishType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::DailyTaskFinishType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::DailyTaskFinishType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::DailyTaskFinishType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskFinishType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskFinishType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "enumNameToVal",
        265);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::DailyTaskFinishType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::DailyTaskFinishType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumNameToVal",
      256);
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

// Line 274: range 00000000139EA353-00000000139EB0B0
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::DailyTaskFinishType> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::DailyTaskFinishType>,false,true>::pointer v11; // rax
  data::DailyTaskFinishType second; // ecx
  char v13; // dl
  char v15[944]; // [rsp+20h] [rbp-3B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 8 6 it:293 256 8 9 <unknown> 288 8 5 s:273 320 32 9 <unknown> 384 32 9"
                        " <unknown> 448 32 9 <unknown> 512 320 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862746] = -202116109;
  v4[536862747] = -202116109;
  *(_QWORD *)(v2 + 288) = s;
  if ( *(_QWORD *)(v2 + 288) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::DailyTaskFinishType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::DailyTaskFinishType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[30],data::DailyTaskFinishType,true>(
        (std::pair<const std::string,data::DailyTaskFinishType> *const)(v2 + 512),
        (const char (*)[30])byte_1AC4DA80,
        (data::DailyTaskFinishType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AC4DA80);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[30],data::DailyTaskFinishType,true>(
        (std::pair<const std::string,data::DailyTaskFinishType> *const)(v2 + 552),
        (const char (*)[30])byte_1AC4DAC0,
        (data::DailyTaskFinishType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC4DAC0);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[36],data::DailyTaskFinishType,true>(
        (std::pair<const std::string,data::DailyTaskFinishType> *const)(v2 + 592),
        (const char (*)[36])byte_1AC4DB00,
        (data::DailyTaskFinishType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC4DB00);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[36],data::DailyTaskFinishType,true>(
        (std::pair<const std::string,data::DailyTaskFinishType> *const)(v2 + 632),
        (const char (*)[36])byte_1AC4DB60,
        (data::DailyTaskFinishType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AC4DB60);
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[28],data::DailyTaskFinishType,true>(
        (std::pair<const std::string,data::DailyTaskFinishType> *const)(v2 + 672),
        (const char (*)[28])byte_1AC4DBC0,
        (data::DailyTaskFinishType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1AC4DBC0);
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[21],data::DailyTaskFinishType,true>(
        (std::pair<const std::string,data::DailyTaskFinishType> *const)(v2 + 712),
        (const char (*)[21])byte_1AC4DC00,
        (data::DailyTaskFinishType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1AC4DC00);
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[7],data::DailyTaskFinishType,true>(
        (std::pair<const std::string,data::DailyTaskFinishType> *const)(v2 + 752),
        (const char (*)[7])byte_1AC38340,
        (data::DailyTaskFinishType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1AC38340);
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[15],data::DailyTaskFinishType,true>(
        (std::pair<const std::string,data::DailyTaskFinishType> *const)(v2 + 792),
        (const char (*)[15])byte_1AC4DC40,
        (data::DailyTaskFinishType *)(v2 + 208));
      std::allocator<std::pair<std::string const,data::DailyTaskFinishType>>::allocator((std::allocator<std::pair<const std::string,data::DailyTaskFinishType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::DailyTaskFinishType>::unordered_map(
        &data::enumStrToVal(char const*,data::DailyTaskFinishType &)::m,
        (std::initializer_list<std::pair<const std::string,data::DailyTaskFinishType> >)__PAIR128__(8LL, v2 + 512),
        0LL,
        (const std::unordered_map<std::string,data::DailyTaskFinishType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::DailyTaskFinishType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::DailyTaskFinishType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::DailyTaskFinishType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::DailyTaskFinishType>::~unordered_map,
        &data::enumStrToVal(char const*,data::DailyTaskFinishType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::DailyTaskFinishType>>::~allocator((std::allocator<std::pair<const std::string,data::DailyTaskFinishType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::DailyTaskFinishType> *)(v2 + 832);
            i != (std::pair<const std::string,data::DailyTaskFinishType> *)(v2 + 512);
            std::pair<std::string const,data::DailyTaskFinishType>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 512, 320LL);
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v7 = *(const char **)(v2 + 288);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      v7,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v7);
    *(std::unordered_map<std::string,data::DailyTaskFinishType>::iterator *)(v2 + 224) = std::unordered_map<std::string,data::DailyTaskFinishType>::find(
                                                                                           &data::enumStrToVal(char const*,data::DailyTaskFinishType &)::m,
                                                                                           (const std::unordered_map<std::string,data::DailyTaskFinishType>::key_type *)(v2 + 384));
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v2 + 384);
    *(std::unordered_map<std::string,data::DailyTaskFinishType>::iterator *)(v2 + 256) = std::unordered_map<std::string,data::DailyTaskFinishType>::end(&data::enumStrToVal(char const*,data::DailyTaskFinishType &)::m);
    v8 = (char *)(v2 + 256);
    v9 = std::__detail::operator==<std::pair<std::string const,data::DailyTaskFinishType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskFinishType>,true> *)(v2 + 224),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskFinishType>,true> *)(v2 + 256));
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "enumStrToVal",
        296);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 288));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::DailyTaskFinishType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::DailyTaskFinishType>,false,true> *const)(v2 + 224));
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
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumStrToVal",
      277);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = 0xFFFFFFFFLL;
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 305: range 00000000139EB0B1-00000000139EB0C7
const char *__cdecl data::getDescription(data::DailyTaskFinishType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 310: range 00000000139EB0C8-00000000139EB27D
bool __cdecl data::isValidDailyTaskFinishType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:311 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidDailyTaskFinishType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getDailyTaskFinishTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DailyTaskFinishType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getDailyTaskFinishTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DailyTaskFinishType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 316: range 00000000139EB27E-00000000139EB3DF
bool __cdecl data::isValidDailyTaskFinishTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::DailyTaskFinishType> *v5; // rcx
  const std::unordered_map<std::string,data::DailyTaskFinishType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidDailyTaskFinishTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getDailyTaskFinishTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::DailyTaskFinishType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DailyTaskFinishType>::end(v5);
  v6 = data::getDailyTaskFinishTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::DailyTaskFinishType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::DailyTaskFinishType>::find(
                                                                                              v6,
                                                                                              name);
  result = std::__detail::operator!=<std::pair<std::string const,data::DailyTaskFinishType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskFinishType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskFinishType>,true> *)(v2 + 64));
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

// Line 321: range 00000000139EB3E0-00000000139EBBE1
const std::unordered_map<std::string,data::DailyTaskFinishType> *__cdecl data::getDailyTaskFinishTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::DailyTaskFinishType> *i; // r14
  char v6[720]; // [rsp+10h] [rbp-2D0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(672LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 360 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getDailyTaskFinishTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = -234556924;
  v3[536862727] = 61956;
  v3[536862738] = -218103808;
  v3[536862739] = -202116109;
  v3[536862740] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDailyTaskFinishTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDailyTaskFinishTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[18],data::DailyTaskFinishType,true>(
      (std::pair<const std::string,data::DailyTaskFinishType> *const)(v1 + 240),
      (const char (*)[18])"DAILY_FINISH_NONE",
      (data::DailyTaskFinishType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "DAILY_FINISH_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[28],data::DailyTaskFinishType,true>(
      (std::pair<const std::string,data::DailyTaskFinishType> *const)(v1 + 280),
      (const char (*)[28])"DAILY_FINISH_MONSTER_ID_NUM",
      (data::DailyTaskFinishType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "DAILY_FINISH_MONSTER_ID_NUM");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[27],data::DailyTaskFinishType,true>(
      (std::pair<const std::string,data::DailyTaskFinishType> *const)(v1 + 320),
      (const char (*)[27])"DAILY_FINISH_GADGET_ID_NUM",
      (data::DailyTaskFinishType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "DAILY_FINISH_GADGET_ID_NUM");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[32],data::DailyTaskFinishType,true>(
      (std::pair<const std::string,data::DailyTaskFinishType> *const)(v1 + 360),
      (const char (*)[32])"DAILY_FINISH_MONSTER_CONFIG_NUM",
      (data::DailyTaskFinishType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "DAILY_FINISH_MONSTER_CONFIG_NUM");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[31],data::DailyTaskFinishType,true>(
      (std::pair<const std::string,data::DailyTaskFinishType> *const)(v1 + 400),
      (const char (*)[31])"DAILY_FINISH_GADGET_CONFIG_NUM",
      (data::DailyTaskFinishType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "DAILY_FINISH_GADGET_CONFIG_NUM");
    *(_DWORD *)(v1 + 176) = 5;
    std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[25],data::DailyTaskFinishType,true>(
      (std::pair<const std::string,data::DailyTaskFinishType> *const)(v1 + 440),
      (const char (*)[25])"DAILY_FINISH_MONSTER_NUM",
      (data::DailyTaskFinishType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "DAILY_FINISH_MONSTER_NUM");
    *(_DWORD *)(v1 + 192) = 6;
    std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[26],data::DailyTaskFinishType,true>(
      (std::pair<const std::string,data::DailyTaskFinishType> *const)(v1 + 480),
      (const char (*)[26])"DAILY_FINISH_CHEST_CONFIG",
      (data::DailyTaskFinishType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "DAILY_FINISH_CHEST_CONFIG");
    *(_DWORD *)(v1 + 208) = 7;
    std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[20],data::DailyTaskFinishType,true>(
      (std::pair<const std::string,data::DailyTaskFinishType> *const)(v1 + 520),
      (const char (*)[20])"DAILY_FINISH_GATHER",
      (data::DailyTaskFinishType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "DAILY_FINISH_GATHER");
    *(_DWORD *)(v1 + 224) = 8;
    std::pair<std::string const,data::DailyTaskFinishType>::pair<char const(&)[23],data::DailyTaskFinishType,true>(
      (std::pair<const std::string,data::DailyTaskFinishType> *const)(v1 + 560),
      (const char (*)[23])"DAILY_FINISH_CHALLENGE",
      (data::DailyTaskFinishType *)(v1 + 224));
    std::allocator<std::pair<std::string const,data::DailyTaskFinishType>>::allocator((std::allocator<std::pair<const std::string,data::DailyTaskFinishType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::DailyTaskFinishType>::unordered_map(
      &data::getDailyTaskFinishTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::DailyTaskFinishType> >)__PAIR128__(9LL, v1 + 240),
      0LL,
      (const std::unordered_map<std::string,data::DailyTaskFinishType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::DailyTaskFinishType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::DailyTaskFinishType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getDailyTaskFinishTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::DailyTaskFinishType>::~unordered_map,
      &data::getDailyTaskFinishTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::DailyTaskFinishType>>::~allocator((std::allocator<std::pair<const std::string,data::DailyTaskFinishType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::DailyTaskFinishType> *)(v1 + 600);
          i != (std::pair<const std::string,data::DailyTaskFinishType> *)(v1 + 240);
          std::pair<std::string const,data::DailyTaskFinishType>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v1 >> 3) + 0x7FFF8050) = -168430091;
  }
  return &data::getDailyTaskFinishTypeNameMap[abi:cxx11](void)::m;
};

// Line 338: range 00000000139EBBE2-00000000139EC983
const std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >> *__cdecl data::getDailyTaskFinishTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  char v14[1904]; // [rsp+10h] [rbp-770h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1856LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "21 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 64 9 <unknown> 304 64 9 <unknown> 400 64 9 <unknown> 496 64 9 <unknown> 592 64 9 <unknow"
                        "n> 688 64 9 <unknown> 784 64 9 <unknown> 880 64 9 <unknown> 976 64 9 <unknown> 1072 648 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getDailyTaskFinishTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = 61956;
  v3[536862728] = -219021312;
  v3[536862729] = 62194;
  v3[536862731] = -219021312;
  v3[536862732] = 62194;
  v3[536862734] = -219021312;
  v3[536862735] = 62194;
  v3[536862737] = -219021312;
  v3[536862738] = 62194;
  v3[536862740] = -219021312;
  v3[536862741] = 62194;
  v3[536862743] = -219021312;
  v3[536862744] = 62194;
  v3[536862746] = -219021312;
  v3[536862747] = 62194;
  v3[536862749] = -219021312;
  v3[536862750] = 62194;
  v3[536862752] = -219021312;
  v3[536862753] = 62194;
  v3[536862773] = -218103808;
  v3[536862774] = -202116109;
  v3[536862775] = -202116109;
  v3[536862776] = -202116109;
  v3[536862777] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDailyTaskFinishTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDailyTaskFinishTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[18])"DAILY_FINISH_NONE");
    std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>::pair<data::DailyTaskFinishType,true>(
      (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *const)(v1 + 1072),
      (data::DailyTaskFinishType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[30],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 304),
      (const char (*)[30])byte_1AC4DA80,
      (const char (*)[28])"DAILY_FINISH_MONSTER_ID_NUM");
    std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>::pair<data::DailyTaskFinishType,true>(
      (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *const)(v1 + 1144),
      (data::DailyTaskFinishType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[30],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 400),
      (const char (*)[30])byte_1AC4DAC0,
      (const char (*)[27])"DAILY_FINISH_GADGET_ID_NUM");
    std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>::pair<data::DailyTaskFinishType,true>(
      (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *const)(v1 + 1216),
      (data::DailyTaskFinishType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 400));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[36],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 496),
      (const char (*)[36])byte_1AC4DB00,
      (const char (*)[32])"DAILY_FINISH_MONSTER_CONFIG_NUM");
    std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>::pair<data::DailyTaskFinishType,true>(
      (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *const)(v1 + 1288),
      (data::DailyTaskFinishType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 496));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[36],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 592),
      (const char (*)[36])byte_1AC4DB60,
      (const char (*)[31])"DAILY_FINISH_GADGET_CONFIG_NUM");
    std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>::pair<data::DailyTaskFinishType,true>(
      (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *const)(v1 + 1360),
      (data::DailyTaskFinishType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 592));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 688),
      (const char (*)[28])byte_1AC4DBC0,
      (const char (*)[25])"DAILY_FINISH_MONSTER_NUM");
    std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>::pair<data::DailyTaskFinishType,true>(
      (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *const)(v1 + 1432),
      (data::DailyTaskFinishType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 688));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[21],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 784),
      (const char (*)[21])byte_1AC4DC00,
      (const char (*)[26])"DAILY_FINISH_CHEST_CONFIG");
    std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>::pair<data::DailyTaskFinishType,true>(
      (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *const)(v1 + 1504),
      (data::DailyTaskFinishType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 784));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 880),
      (const char (*)[7])byte_1AC38340,
      (const char (*)[20])"DAILY_FINISH_GATHER");
    std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>::pair<data::DailyTaskFinishType,true>(
      (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *const)(v1 + 1576),
      (data::DailyTaskFinishType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 880));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[15],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 976),
      (const char (*)[15])byte_1AC4DC40,
      (const char (*)[23])"DAILY_FINISH_CHALLENGE");
    std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>::pair<data::DailyTaskFinishType,true>(
      (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *const)(v1 + 1648),
      (data::DailyTaskFinishType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 976));
    std::allocator<std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::DailyTaskFinishType,std::pair<std::string,std::string>>::map(
      &data::getDailyTaskFinishTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > >)__PAIR128__(9LL, v1 + 1072),
      (const std::less<data::DailyTaskFinishType> *)(v1 + 32),
      (const std::map<data::DailyTaskFinishType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getDailyTaskFinishTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::DailyTaskFinishType,std::pair<std::string,std::string>>::~map,
      &data::getDailyTaskFinishTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *)(v1 + 1720);
          i != (std::pair<const data::DailyTaskFinishType,std::pair<std::string,std::string > > *)(v1 + 1072);
          std::pair<data::DailyTaskFinishType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 1072, 648LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 976));
    v5 = (_DWORD *)(((v1 + 976) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 880));
    v6 = (_DWORD *)(((v1 + 880) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 784));
    v7 = (_DWORD *)(((v1 + 784) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 688));
    v8 = (_DWORD *)(((v1 + 688) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 592));
    v9 = (_DWORD *)(((v1 + 592) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 496));
    v10 = (_DWORD *)(((v1 + 496) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 400));
    v11 = (_DWORD *)(((v1 + 400) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 304));
    v12 = (_DWORD *)(((v1 + 304) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 208));
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80E0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 232) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1856LL, v14);
  }
  return &data::getDailyTaskFinishTypeEnumMap[abi:cxx11](void)::m;
};

// Line 355: range 00000000139EC984-00000000139ECCF7
const char *__fastcall data::enumValToStr(data::DailyTaskActionType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::DailyTaskActionType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:354 64 8 8 iter:357 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getDailyTaskActionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::DailyTaskActionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DailyTaskActionType,std::pair<std::string,std::string>>::find(map, (const std::map<data::DailyTaskActionType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::DailyTaskActionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DailyTaskActionType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumValToStr",
      360);
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
    result = "INVALID_DailyTaskActionType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::DailyTaskActionType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 367: range 00000000139ECCF8-00000000139ED2B0
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::DailyTaskActionType>,false,true>::pointer v10; // rax
  data::DailyTaskActionType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::DailyTaskActionType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:376 96 8 9 <unknown> 128 8 5 s:366 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getDailyTaskActionTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::DailyTaskActionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DailyTaskActionType>::find(
                                                                                                m,
                                                                                                (const std::unordered_map<std::string,data::DailyTaskActionType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::DailyTaskActionType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::DailyTaskActionType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::DailyTaskActionType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskActionType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskActionType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "enumNameToVal",
        379);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::DailyTaskActionType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::DailyTaskActionType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumNameToVal",
      370);
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

// Line 388: range 00000000139ED2B1-00000000139EDE95
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::DailyTaskActionType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::DailyTaskActionType>,false,true>::pointer v12; // rax
  data::DailyTaskActionType second; // ecx
  char v14; // dl
  char v16[784]; // [rsp+20h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 6 it:404 208 8 9 <unknown>"
                        " 240 8 5 s:387 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 200 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = 61956;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  v4[536862742] = -202116109;
  *(_QWORD *)(v2 + 240) = s;
  if ( *(_QWORD *)(v2 + 240) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::DailyTaskActionType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::DailyTaskActionType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[28],data::DailyTaskActionType,true>(
        (std::pair<const std::string,data::DailyTaskActionType> *const)(v2 + 464),
        (const char (*)[28])byte_1AC4E140,
        (data::DailyTaskActionType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AC4E140);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[28],data::DailyTaskActionType,true>(
        (std::pair<const std::string,data::DailyTaskActionType> *const)(v2 + 504),
        (const char (*)[28])byte_1AC4E180,
        (data::DailyTaskActionType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC4E180);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[28],data::DailyTaskActionType,true>(
        (std::pair<const std::string,data::DailyTaskActionType> *const)(v2 + 544),
        (const char (*)[28])byte_1AC4E1C0,
        (data::DailyTaskActionType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC4E1C0);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[19],data::DailyTaskActionType,true>(
        (std::pair<const std::string,data::DailyTaskActionType> *const)(v2 + 584),
        (const char (*)[19])byte_1AC4E200,
        (data::DailyTaskActionType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AC4E200);
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[25],data::DailyTaskActionType,true>(
        (std::pair<const std::string,data::DailyTaskActionType> *const)(v2 + 624),
        (const char (*)[25])byte_1AC4E240,
        (data::DailyTaskActionType *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::DailyTaskActionType>>::allocator((std::allocator<std::pair<const std::string,data::DailyTaskActionType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::DailyTaskActionType>::unordered_map(
        &data::enumStrToVal(char const*,data::DailyTaskActionType &)::m,
        (std::initializer_list<std::pair<const std::string,data::DailyTaskActionType> >)__PAIR128__(5LL, v2 + 464),
        0LL,
        (const std::unordered_map<std::string,data::DailyTaskActionType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::DailyTaskActionType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::DailyTaskActionType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::DailyTaskActionType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::DailyTaskActionType>::~unordered_map,
        &data::enumStrToVal(char const*,data::DailyTaskActionType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::DailyTaskActionType>>::~allocator((std::allocator<std::pair<const std::string,data::DailyTaskActionType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::DailyTaskActionType> *)(v2 + 664);
            i != (std::pair<const std::string,data::DailyTaskActionType> *)(v2 + 464);
            std::pair<std::string const,data::DailyTaskActionType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 464) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_DWORD *)(v7 + 12) = -117901064;
      *(_DWORD *)(v7 + 16) = -117901064;
      *(_DWORD *)(v7 + 20) = -117901064;
      *(_BYTE *)(v7 + 24) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v8 = *(const char **)(v2 + 240);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 336),
      v8,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v8);
    *(std::unordered_map<std::string,data::DailyTaskActionType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::DailyTaskActionType>::find(
                                                                                           &data::enumStrToVal(char const*,data::DailyTaskActionType &)::m,
                                                                                           (const std::unordered_map<std::string,data::DailyTaskActionType>::key_type *)(v2 + 336));
    std::string::~string((void *)(v2 + 336));
    *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v2 + 336);
    *(std::unordered_map<std::string,data::DailyTaskActionType>::iterator *)(v2 + 208) = std::unordered_map<std::string,data::DailyTaskActionType>::end(&data::enumStrToVal(char const*,data::DailyTaskActionType &)::m);
    v9 = (char *)(v2 + 208);
    v10 = std::__detail::operator==<std::pair<std::string const,data::DailyTaskActionType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskActionType>,true> *)(v2 + 176),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskActionType>,true> *)(v2 + 208));
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "enumStrToVal",
        407);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 400),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 240));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
      LODWORD(result) = -1;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::DailyTaskActionType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::DailyTaskActionType>,false,true> *const)(v2 + 176));
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
      LODWORD(result) = 0;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumStrToVal",
      391);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 272),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
    LODWORD(result) = -1;
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
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
  return (unsigned int)result;
};

// Line 416: range 00000000139EDE96-00000000139EDEAC
const char *__cdecl data::getDescription(data::DailyTaskActionType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 421: range 00000000139EDEAD-00000000139EE062
bool __cdecl data::isValidDailyTaskActionType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::DailyTaskActionType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::DailyTaskActionType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:422 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidDailyTaskActionType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getDailyTaskActionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::DailyTaskActionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DailyTaskActionType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getDailyTaskActionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::DailyTaskActionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DailyTaskActionType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::DailyTaskActionType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 427: range 00000000139EE063-00000000139EE1C4
bool __cdecl data::isValidDailyTaskActionTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::DailyTaskActionType> *v5; // rcx
  const std::unordered_map<std::string,data::DailyTaskActionType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidDailyTaskActionTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getDailyTaskActionTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::DailyTaskActionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DailyTaskActionType>::end(v5);
  v6 = data::getDailyTaskActionTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::DailyTaskActionType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::DailyTaskActionType>::find(
                                                                                              v6,
                                                                                              name);
  result = std::__detail::operator!=<std::pair<std::string const,data::DailyTaskActionType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskActionType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskActionType>,true> *)(v2 + 64));
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

// Line 432: range 00000000139EE1C5-00000000139EE86E
const std::unordered_map<std::string,data::DailyTaskActionType> *__cdecl data::getDailyTaskActionTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::DailyTaskActionType> *i; // r14
  const std::unordered_map<std::string,data::DailyTaskActionType> *result; // rax
  char v6[528]; // [rsp+10h] [rbp-210h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(480LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 240 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getDailyTaskActionTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = 61956;
  v3[536862733] = -202116109;
  v3[536862734] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDailyTaskActionTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDailyTaskActionTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[23],data::DailyTaskActionType,true>(
      (std::pair<const std::string,data::DailyTaskActionType> *const)(v1 + 176),
      (const char (*)[23])"DAILY_TASK_ACTION_NONE",
      (data::DailyTaskActionType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "DAILY_TASK_ACTION_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[26],data::DailyTaskActionType,true>(
      (std::pair<const std::string,data::DailyTaskActionType> *const)(v1 + 216),
      (const char (*)[26])"DAILY_TASK_ACTION_SET_VAR",
      (data::DailyTaskActionType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "DAILY_TASK_ACTION_SET_VAR");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[26],data::DailyTaskActionType,true>(
      (std::pair<const std::string,data::DailyTaskActionType> *const)(v1 + 256),
      (const char (*)[26])"DAILY_TASK_ACTION_INC_VAR",
      (data::DailyTaskActionType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "DAILY_TASK_ACTION_INC_VAR");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[26],data::DailyTaskActionType,true>(
      (std::pair<const std::string,data::DailyTaskActionType> *const)(v1 + 296),
      (const char (*)[26])"DAILY_TASK_ACTION_DEC_VAR",
      (data::DailyTaskActionType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "DAILY_TASK_ACTION_DEC_VAR");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[32],data::DailyTaskActionType,true>(
      (std::pair<const std::string,data::DailyTaskActionType> *const)(v1 + 336),
      (const char (*)[32])"DAILY_TASK_ACTION_ADD_SURE_POOL",
      (data::DailyTaskActionType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "DAILY_TASK_ACTION_ADD_SURE_POOL");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::DailyTaskActionType>::pair<char const(&)[36],data::DailyTaskActionType,true>(
      (std::pair<const std::string,data::DailyTaskActionType> *const)(v1 + 376),
      (const char (*)[36])"DAILY_TASK_ACTION_ADD_POSSIBLE_POOL",
      (data::DailyTaskActionType *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::DailyTaskActionType>>::allocator((std::allocator<std::pair<const std::string,data::DailyTaskActionType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::DailyTaskActionType>::unordered_map(
      &data::getDailyTaskActionTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::DailyTaskActionType> >)__PAIR128__(6LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::DailyTaskActionType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::DailyTaskActionType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::DailyTaskActionType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getDailyTaskActionTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::DailyTaskActionType>::~unordered_map,
      &data::getDailyTaskActionTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::DailyTaskActionType>>::~allocator((std::allocator<std::pair<const std::string,data::DailyTaskActionType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::DailyTaskActionType> *)(v1 + 416);
          i != (std::pair<const std::string,data::DailyTaskActionType> *)(v1 + 176);
          std::pair<std::string const,data::DailyTaskActionType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getDailyTaskActionTypeNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 446: range 00000000139EE86F-00000000139EF25F
const std::map<data::DailyTaskActionType,std::pair<std::string,std::string >> *__cdecl data::getDailyTaskActionTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  char v11[1296]; // [rsp+10h] [rbp-510h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1248LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 64 9 <unknown> 272 64 9 <unknown> 368 64 9 <u"
                        "nknown> 464 64 9 <unknown> 560 64 9 <unknown> 656 64 9 <unknown> 752 432 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getDailyTaskActionTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = 61956;
  v3[536862727] = -219021312;
  v3[536862728] = 62194;
  v3[536862730] = -219021312;
  v3[536862731] = 62194;
  v3[536862733] = -219021312;
  v3[536862734] = 62194;
  v3[536862736] = -219021312;
  v3[536862737] = 62194;
  v3[536862739] = -219021312;
  v3[536862740] = 62194;
  v3[536862742] = -219021312;
  v3[536862743] = 62194;
  v3[536862757] = -202116109;
  v3[536862758] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDailyTaskActionTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDailyTaskActionTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 176),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[23])"DAILY_TASK_ACTION_NONE");
    std::pair<data::DailyTaskActionType const,std::pair<std::string,std::string>>::pair<data::DailyTaskActionType,true>(
      (std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > *const)(v1 + 752),
      (data::DailyTaskActionType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 272),
      (const char (*)[28])byte_1AC4E140,
      (const char (*)[26])"DAILY_TASK_ACTION_SET_VAR");
    std::pair<data::DailyTaskActionType const,std::pair<std::string,std::string>>::pair<data::DailyTaskActionType,true>(
      (std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > *const)(v1 + 824),
      (data::DailyTaskActionType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 368),
      (const char (*)[28])byte_1AC4E180,
      (const char (*)[26])"DAILY_TASK_ACTION_INC_VAR");
    std::pair<data::DailyTaskActionType const,std::pair<std::string,std::string>>::pair<data::DailyTaskActionType,true>(
      (std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > *const)(v1 + 896),
      (data::DailyTaskActionType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 368));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 464),
      (const char (*)[28])byte_1AC4E1C0,
      (const char (*)[26])"DAILY_TASK_ACTION_DEC_VAR");
    std::pair<data::DailyTaskActionType const,std::pair<std::string,std::string>>::pair<data::DailyTaskActionType,true>(
      (std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > *const)(v1 + 968),
      (data::DailyTaskActionType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 464));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 560),
      (const char (*)[19])byte_1AC4E200,
      (const char (*)[32])"DAILY_TASK_ACTION_ADD_SURE_POOL");
    std::pair<data::DailyTaskActionType const,std::pair<std::string,std::string>>::pair<data::DailyTaskActionType,true>(
      (std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > *const)(v1 + 1040),
      (data::DailyTaskActionType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 560));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 656),
      (const char (*)[25])byte_1AC4E240,
      (const char (*)[36])"DAILY_TASK_ACTION_ADD_POSSIBLE_POOL");
    std::pair<data::DailyTaskActionType const,std::pair<std::string,std::string>>::pair<data::DailyTaskActionType,true>(
      (std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > *const)(v1 + 1112),
      (data::DailyTaskActionType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 656));
    std::allocator<std::pair<data::DailyTaskActionType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::DailyTaskActionType,std::pair<std::string,std::string>>::map(
      &data::getDailyTaskActionTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > >)__PAIR128__(6LL, v1 + 752),
      (const std::less<data::DailyTaskActionType> *)(v1 + 48),
      (const std::map<data::DailyTaskActionType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getDailyTaskActionTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::DailyTaskActionType,std::pair<std::string,std::string>>::~map,
      &data::getDailyTaskActionTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::DailyTaskActionType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > *)(v1 + 1184);
          i != (std::pair<const data::DailyTaskActionType,std::pair<std::string,std::string > > *)(v1 + 752);
          std::pair<data::DailyTaskActionType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 752, 432LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 656));
    v5 = (_DWORD *)(((v1 + 656) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 560));
    v6 = (_DWORD *)(((v1 + 560) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 464));
    v7 = (_DWORD *)(((v1 + 464) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 368));
    v8 = (_DWORD *)(((v1 + 368) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 272));
    v9 = (_DWORD *)(((v1 + 272) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 176));
  }
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 156) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1248LL, v11);
  }
  return &data::getDailyTaskActionTypeEnumMap[abi:cxx11](void)::m;
};

// Line 460: range 00000000139EF260-00000000139EF5D3
const char *__fastcall data::enumValToStr(data::DailyTaskCondType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::DailyTaskCondType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:459 64 8 8 iter:462 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getDailyTaskCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::DailyTaskCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DailyTaskCondType,std::pair<std::string,std::string>>::find(map, (const std::map<data::DailyTaskCondType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::DailyTaskCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DailyTaskCondType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumValToStr",
      465);
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
    result = "INVALID_DailyTaskCondType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::DailyTaskCondType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 472: range 00000000139EF5D4-00000000139EFB8C
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::DailyTaskCondType>,false,true>::pointer v10; // rax
  data::DailyTaskCondType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::DailyTaskCondType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:481 96 8 9 <unknown> 128 8 5 s:471 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getDailyTaskCondTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::DailyTaskCondType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DailyTaskCondType>::find(
                                                                                              m,
                                                                                              (const std::unordered_map<std::string,data::DailyTaskCondType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::DailyTaskCondType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::DailyTaskCondType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::DailyTaskCondType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskCondType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskCondType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "enumNameToVal",
        484);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::DailyTaskCondType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::DailyTaskCondType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumNameToVal",
      475);
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

// Line 493: range 00000000139EFB8D-00000000139F068B
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::DailyTaskCondType> *i; // r14
  _DWORD *v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::DailyTaskCondType>,false,true>::pointer v12; // rax
  data::DailyTaskCondType second; // ecx
  char v14; // dl
  char v16[720]; // [rsp+20h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 8 6 it:508 192 8 9 <unknown> 224 8 5 s:492 256"
                        " 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 160 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862739] = -202116109;
  v4[536862740] = -202116109;
  *(_QWORD *)(v2 + 224) = s;
  if ( *(_QWORD *)(v2 + 224) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::DailyTaskCondType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::DailyTaskCondType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::DailyTaskCondType>::pair<char const(&)[28],data::DailyTaskCondType,true>(
        (std::pair<const std::string,data::DailyTaskCondType> *const)(v2 + 448),
        (const char (*)[28])byte_1AC4CC00,
        (data::DailyTaskCondType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AC4CC00);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::DailyTaskCondType>::pair<char const(&)[31],data::DailyTaskCondType,true>(
        (std::pair<const std::string,data::DailyTaskCondType> *const)(v2 + 488),
        (const char (*)[31])byte_1AC4CC40,
        (data::DailyTaskCondType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC4CC40);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::DailyTaskCondType>::pair<char const(&)[28],data::DailyTaskCondType,true>(
        (std::pair<const std::string,data::DailyTaskCondType> *const)(v2 + 528),
        (const char (*)[28])byte_1AC4CC80,
        (data::DailyTaskCondType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC4CC80);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::DailyTaskCondType>::pair<char const(&)[28],data::DailyTaskCondType,true>(
        (std::pair<const std::string,data::DailyTaskCondType> *const)(v2 + 568),
        (const char (*)[28])byte_1AC4CCC0,
        (data::DailyTaskCondType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::DailyTaskCondType>>::allocator((std::allocator<std::pair<const std::string,data::DailyTaskCondType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::DailyTaskCondType>::unordered_map(
        &data::enumStrToVal(char const*,data::DailyTaskCondType &)::m,
        (std::initializer_list<std::pair<const std::string,data::DailyTaskCondType> >)__PAIR128__(4LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::DailyTaskCondType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::DailyTaskCondType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::DailyTaskCondType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::DailyTaskCondType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::DailyTaskCondType>::~unordered_map,
        &data::enumStrToVal(char const*,data::DailyTaskCondType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::DailyTaskCondType>>::~allocator((std::allocator<std::pair<const std::string,data::DailyTaskCondType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::DailyTaskCondType> *)(v2 + 608);
            i != (std::pair<const std::string,data::DailyTaskCondType> *)(v2 + 448);
            std::pair<std::string const,data::DailyTaskCondType>::~pair(i) )
      {
        --i;
      }
      v7 = (_DWORD *)(((v2 + 448) >> 3) + 2147450880);
      *v7 = -117901064;
      v7[1] = -117901064;
      v7[2] = -117901064;
      v7[3] = -117901064;
      v7[4] = -117901064;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v8 = *(const char **)(v2 + 224);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 320),
      v8,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v8);
    *(std::unordered_map<std::string,data::DailyTaskCondType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::DailyTaskCondType>::find(
                                                                                         &data::enumStrToVal(char const*,data::DailyTaskCondType &)::m,
                                                                                         (const std::unordered_map<std::string,data::DailyTaskCondType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::DailyTaskCondType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::DailyTaskCondType>::end(&data::enumStrToVal(char const*,data::DailyTaskCondType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::DailyTaskCondType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskCondType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskCondType>,true> *)(v2 + 192));
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "enumStrToVal",
        511);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::DailyTaskCondType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::DailyTaskCondType>,false,true> *const)(v2 + 160));
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
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "enumStrToVal",
      496);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = 0xFFFFFFFFLL;
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 520: range 00000000139F068C-00000000139F06A2
const char *__cdecl data::getDescription(data::DailyTaskCondType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 525: range 00000000139F06A3-00000000139F0858
bool __cdecl data::isValidDailyTaskCondType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::DailyTaskCondType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::DailyTaskCondType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:526 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidDailyTaskCondType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getDailyTaskCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::DailyTaskCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DailyTaskCondType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getDailyTaskCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::DailyTaskCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DailyTaskCondType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::DailyTaskCondType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 531: range 00000000139F0859-00000000139F09BA
bool __cdecl data::isValidDailyTaskCondTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::DailyTaskCondType> *v5; // rcx
  const std::unordered_map<std::string,data::DailyTaskCondType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidDailyTaskCondTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getDailyTaskCondTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::DailyTaskCondType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DailyTaskCondType>::end(v5);
  v6 = data::getDailyTaskCondTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::DailyTaskCondType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::DailyTaskCondType>::find(
                                                                                            v6,
                                                                                            name);
  result = std::__detail::operator!=<std::pair<std::string const,data::DailyTaskCondType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskCondType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DailyTaskCondType>,true> *)(v2 + 64));
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

// Line 536: range 00000000139F09BB-00000000139F0FD5
const std::unordered_map<std::string,data::DailyTaskCondType> *__cdecl data::getDailyTaskCondTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::DailyTaskCondType> *i; // r14
  const std::unordered_map<std::string,data::DailyTaskCondType> *result; // rax
  char v6[496]; // [rsp+10h] [rbp-1F0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9 "
                        "<unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 200 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getDailyTaskCondTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = 61956;
  v3[536862731] = -218103808;
  v3[536862732] = -202116109;
  v3[536862733] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDailyTaskCondTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDailyTaskCondTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::DailyTaskCondType>::pair<char const(&)[21],data::DailyTaskCondType,true>(
      (std::pair<const std::string,data::DailyTaskCondType> *const)(v1 + 176),
      (const char (*)[21])"DAILY_TASK_COND_NONE",
      (data::DailyTaskCondType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "DAILY_TASK_COND_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::DailyTaskCondType>::pair<char const(&)[23],data::DailyTaskCondType,true>(
      (std::pair<const std::string,data::DailyTaskCondType> *const)(v1 + 216),
      (const char (*)[23])"DAILY_TASK_COND_VAR_EQ",
      (data::DailyTaskCondType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "DAILY_TASK_COND_VAR_EQ");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::DailyTaskCondType>::pair<char const(&)[23],data::DailyTaskCondType,true>(
      (std::pair<const std::string,data::DailyTaskCondType> *const)(v1 + 256),
      (const char (*)[23])"DAILY_TASK_COND_VAR_NE",
      (data::DailyTaskCondType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "DAILY_TASK_COND_VAR_NE");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::DailyTaskCondType>::pair<char const(&)[23],data::DailyTaskCondType,true>(
      (std::pair<const std::string,data::DailyTaskCondType> *const)(v1 + 296),
      (const char (*)[23])"DAILY_TASK_COND_VAR_GT",
      (data::DailyTaskCondType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "DAILY_TASK_COND_VAR_GT");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::DailyTaskCondType>::pair<char const(&)[23],data::DailyTaskCondType,true>(
      (std::pair<const std::string,data::DailyTaskCondType> *const)(v1 + 336),
      (const char (*)[23])"DAILY_TASK_COND_VAR_LT",
      (data::DailyTaskCondType *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::DailyTaskCondType>>::allocator((std::allocator<std::pair<const std::string,data::DailyTaskCondType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::DailyTaskCondType>::unordered_map(
      &data::getDailyTaskCondTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::DailyTaskCondType> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::DailyTaskCondType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::DailyTaskCondType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::DailyTaskCondType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getDailyTaskCondTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::DailyTaskCondType>::~unordered_map,
      &data::getDailyTaskCondTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::DailyTaskCondType>>::~allocator((std::allocator<std::pair<const std::string,data::DailyTaskCondType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::DailyTaskCondType> *)(v1 + 376);
          i != (std::pair<const std::string,data::DailyTaskCondType> *)(v1 + 176);
          std::pair<std::string const,data::DailyTaskCondType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getDailyTaskCondTypeNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 549: range 00000000139F0FD6-00000000139F189B
const std::map<data::DailyTaskCondType,std::pair<std::string,std::string >> *__cdecl data::getDailyTaskCondTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  char v10[1104]; // [rsp+10h] [rbp-450h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1056LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 64 9 <unknown> 240 64 9 <unknown> 336 64 9 <unknown> 432 64 9 <u"
                        "nknown> 528 64 9 <unknown> 624 360 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getDailyTaskCondTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = 61956;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862729] = -219021312;
  v3[536862730] = 62194;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862735] = -219021312;
  v3[536862736] = 62194;
  v3[536862738] = -219021312;
  v3[536862739] = 62194;
  v3[536862750] = -218103808;
  v3[536862751] = -202116109;
  v3[536862752] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDailyTaskCondTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDailyTaskCondTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[21])"DAILY_TASK_COND_NONE");
    std::pair<data::DailyTaskCondType const,std::pair<std::string,std::string>>::pair<data::DailyTaskCondType,true>(
      (std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::DailyTaskCondType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[28])byte_1AC4CC00,
      (const char (*)[23])"DAILY_TASK_COND_VAR_EQ");
    std::pair<data::DailyTaskCondType const,std::pair<std::string,std::string>>::pair<data::DailyTaskCondType,true>(
      (std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::DailyTaskCondType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[31],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[31])byte_1AC4CC40,
      (const char (*)[23])"DAILY_TASK_COND_VAR_NE");
    std::pair<data::DailyTaskCondType const,std::pair<std::string,std::string>>::pair<data::DailyTaskCondType,true>(
      (std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::DailyTaskCondType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[28])byte_1AC4CC80,
      (const char (*)[23])"DAILY_TASK_COND_VAR_GT");
    std::pair<data::DailyTaskCondType const,std::pair<std::string,std::string>>::pair<data::DailyTaskCondType,true>(
      (std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::DailyTaskCondType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[28])byte_1AC4CCC0,
      (const char (*)[23])"DAILY_TASK_COND_VAR_LT");
    std::pair<data::DailyTaskCondType const,std::pair<std::string,std::string>>::pair<data::DailyTaskCondType,true>(
      (std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::DailyTaskCondType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::DailyTaskCondType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::DailyTaskCondType,std::pair<std::string,std::string>>::map(
      &data::getDailyTaskCondTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::DailyTaskCondType> *)(v1 + 32),
      (const std::map<data::DailyTaskCondType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getDailyTaskCondTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::DailyTaskCondType,std::pair<std::string,std::string>>::~map,
      &data::getDailyTaskCondTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::DailyTaskCondType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::DailyTaskCondType,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::DailyTaskCondType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 624, 360LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 528));
    v5 = (_DWORD *)(((v1 + 528) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 432));
    v6 = (_DWORD *)(((v1 + 432) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 336));
    v7 = (_DWORD *)(((v1 + 336) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 240));
    v8 = (_DWORD *)(((v1 + 240) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 144));
  }
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1056LL, v10);
  }
  return &data::getDailyTaskCondTypeEnumMap[abi:cxx11](void)::m;
};

// Line 563: range 00000000139F189C-00000000139F1BA7
int32_t __cdecl data::DailyTaskTagType::init(
        data::DailyTaskTagType *const this,
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
  *(_QWORD *)(v2 + 16) = data::DailyTaskTagType::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    off_1AC26E80,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->value) != 0;
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "init",
      566);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v6, (const char (*)[24])byte_1AC26EC0);
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

// Line 574: range 00000000139F1BA8-00000000139F2FA1
int32_t __cdecl data::DailyTaskAction::init(data::DailyTaskAction *const this, const common::tools::TxtFile::Row *row)
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
  bool v20; // r15
  common::milog::MiLogStream *v21; // rax
  int32_t v22; // ebx
  char v24[1232]; // [rsp+10h] [rbp-4D0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1184LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <un"
                        "known> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unk"
                        "nown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unkn"
                        "own> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DailyTaskAction::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
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
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    &byte_1AC4E820,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToEnum<data::DailyTaskCondType>(
         row,
         (const std::string *)(v2 + 160),
         &this->cond_type) != 0;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "init",
      577);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1AC4E860);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      &byte_1AC4E8C0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<int>(row, (const std::string *)(v2 + 288), &this->cond_param1) != 0;
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "init",
        582);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v9, (const char (*)[34])byte_1AC4E900);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        &byte_1AC4E960,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<int>(row, (const std::string *)(v2 + 416), &this->cond_param2) != 0;
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
          "init",
          587);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v11, (const char (*)[34])byte_1AC4E9A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          &byte_1AC4EA00,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<int>(row, (const std::string *)(v2 + 544), &this->cond_param3) != 0;
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
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
            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
            "init",
            592);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v13, (const char (*)[34])byte_1AC4EA40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 672),
            &byte_1ABFE3C0,
            (const std::allocator<char> *)(v2 + 96));
          v14 = common::tools::TxtFile::Row::assignToEnum<data::DailyTaskActionType>(
                  row,
                  (const std::string *)(v2 + 672),
                  &this->type) != 0;
          std::string::~string((void *)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
          {
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 736),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
              "init",
              597);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v15, (const char (*)[27])byte_1ABFE400);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 800),
              &byte_1AC4EAA0,
              (const std::allocator<char> *)(v2 + 112));
            v16 = common::tools::TxtFile::Row::assignToNum<int>(row, (const std::string *)(v2 + 800), &this->param1) != 0;
            std::string::~string((void *)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
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
                "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                "init",
                602);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 864),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v17, (const char (*)[28])byte_1AC4EAE0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 928),
                &byte_1AC4EB20,
                (const std::allocator<char> *)(v2 + 128));
              v18 = common::tools::TxtFile::Row::assignToNum<int>(row, (const std::string *)(v2 + 928), &this->param2) != 0;
              std::string::~string((void *)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( v18 )
              {
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 992, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 992),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                  "init",
                  607);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 992),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v19, (const char (*)[28])byte_1AC4EB60);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1056),
                  &byte_1AC4EBA0,
                  (const std::allocator<char> *)(v2 + 144));
                v20 = common::tools::TxtFile::Row::assignToNum<int>(
                        row,
                        (const std::string *)(v2 + 1056),
                        &this->param3) != 0;
                std::string::~string((void *)(v2 + 1056));
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( v20 )
                {
                  *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1120, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1120),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                    "init",
                    612);
                  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1120),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    v21,
                    (const char (*)[28])byte_1AC4EBE0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
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
  }
  v22 = v7;
  if ( v24 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8090) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1184LL, v24);
  }
  return v22;
};

// Line 620: range 00000000139F2FA2-00000000139F3A3A
int32_t __cdecl data::DailyTaskStatisfiedCond::init(
        data::DailyTaskStatisfiedCond *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  char v14[656]; // [rsp+10h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DailyTaskStatisfiedCond::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    &byte_1ABFE3C0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToEnum<data::ConditionType>(row, (const std::string *)(v2 + 96), &this->type) != 0;
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "init",
      623);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1ABFE400);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      &byte_1AC4EAA0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->param1) != 0;
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
        4u,
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "init",
        628);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v9, (const char (*)[28])byte_1AC4EAE0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        &byte_1AC4EB20,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->param2) != 0;
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
          "init",
          633);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v11, (const char (*)[28])byte_1AC4EB60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          &byte_1AC4EBA0,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 480),
                &this->param3) != 0;
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
        {
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
            4u,
            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
            "init",
            638);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v13, (const char (*)[28])byte_1AC4EBE0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = -1;
        }
        else
        {
          result = 0;
        }
      }
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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

// Line 646: range 00000000139F3A3C-00000000139FA987
int32_t __cdecl data::DailyTaskExcelConfig::init(
        data::DailyTaskExcelConfig *const this,
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
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  _DWORD *v18; // rax
  bool v19; // r15
  unsigned __int64 v20; // rax
  char *j; // r14
  _DWORD *v22; // rax
  common::milog::MiLogStream *v23; // rax
  bool v24; // r14
  common::milog::MiLogStream *v25; // rax
  unsigned __int64 v26; // rax
  _DWORD *v27; // rax
  bool v28; // r15
  unsigned __int64 v29; // rax
  char *k; // r14
  _DWORD *v31; // rax
  common::milog::MiLogStream *v32; // rax
  bool v33; // r14
  common::milog::MiLogStream *v34; // rax
  bool v35; // r14
  data::ConditionType *p_type; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  bool v40; // r14
  unsigned int *p_param1; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  bool v45; // r14
  unsigned int *p_param2; // r14
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  bool v50; // r14
  unsigned int *p_param3; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  bool v55; // r14
  common::milog::MiLogStream *v56; // rax
  bool v57; // r14
  common::milog::MiLogStream *v58; // rax
  bool v59; // r14
  common::milog::MiLogStream *v60; // rax
  bool v61; // r14
  common::milog::MiLogStream *v62; // rax
  bool v63; // r14
  data::DailyTaskCondType *p_cond_type; // r14
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  bool v68; // r14
  int *p_cond_param1; // r14
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  bool v73; // r14
  int *p_cond_param2; // r14
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  bool v78; // r14
  int *p_cond_param3; // r14
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  bool v83; // r14
  data::DailyTaskActionType *v84; // r14
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  bool v88; // r14
  int *v89; // r14
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  bool v93; // r14
  int *v94; // r14
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  bool v98; // r14
  int *v99; // r14
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  bool v103; // r14
  common::milog::MiLogStream *v104; // rax
  bool v105; // r14
  common::milog::MiLogStream *v106; // rax
  bool v107; // r14
  common::milog::MiLogStream *v108; // rax
  bool t; // [rsp+0h] [rbp-1930h]
  bool ta; // [rsp+0h] [rbp-1930h]
  bool tb; // [rsp+0h] [rbp-1930h]
  bool tc; // [rsp+0h] [rbp-1930h]
  uint32_t *td; // [rsp+0h] [rbp-1930h]
  bool te; // [rsp+0h] [rbp-1930h]
  bool tf; // [rsp+0h] [rbp-1930h]
  bool tg; // [rsp+0h] [rbp-1930h]
  bool th; // [rsp+0h] [rbp-1930h]
  bool ti; // [rsp+0h] [rbp-1930h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-1920h]
  uint32_t array_count; // [rsp+30h] [rbp-1900h]
  uint32_t array_counta; // [rsp+30h] [rbp-1900h]
  uint32_t array_countb; // [rsp+30h] [rbp-1900h]
  uint32_t i; // [rsp+34h] [rbp-18FCh]
  uint32_t i_0; // [rsp+38h] [rbp-18F8h]
  uint32_t i_1; // [rsp+3Ch] [rbp-18F4h]
  char v127[6384]; // [rsp+40h] [rbp-18F0h] BYREF

  v2 = (unsigned __int64)v127;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(6336LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "130 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 "
                        "9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unk"
                        "nown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> "
                        "304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 "
                        "9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unk"
                        "nown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 9 <unknown> "
                        "560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9 <unknown> 640 1 "
                        "9 <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 1 9 <unknown> 720 1 9 <unk"
                        "nown> 736 1 9 <unknown> 752 1 9 <unknown> 768 1 9 <unknown> 784 1 9 <unknown> 800 1 9 <unknown> "
                        "816 1 9 <unknown> 832 24 9 <unknown> 896 24 9 <unknown> 960 32 11 val_str:649 1024 32 9 <unknown"
                        "> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unk"
                        "nown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 "
                        "<unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 3"
                        "2 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 23"
                        "04 32 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown"
                        "> 2624 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unk"
                        "nown> 2944 32 9 <unknown> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 "
                        "<unknown> 3264 32 9 <unknown> 3328 32 9 <unknown> 3392 32 9 <unknown> 3456 32 9 <unknown> 3520 3"
                        "2 9 <unknown> 3584 32 9 <unknown> 3648 32 9 <unknown> 3712 32 9 <unknown> 3776 32 9 <unknown> 38"
                        "40 32 9 <unknown> 3904 32 9 <unknown> 3968 32 9 <unknown> 4032 32 9 <unknown> 4096 32 9 <unknown"
                        "> 4160 32 9 <unknown> 4224 32 9 <unknown> 4288 32 9 <unknown> 4352 32 9 <unknown> 4416 32 9 <unk"
                        "nown> 4480 32 9 <unknown> 4544 32 9 <unknown> 4608 32 9 <unknown> 4672 32 9 <unknown> 4736 32 9 "
                        "<unknown> 4800 32 9 <unknown> 4864 32 9 <unknown> 4928 32 9 <unknown> 4992 32 9 <unknown> 5056 3"
                        "2 9 <unknown> 5120 32 9 <unknown> 5184 32 9 <unknown> 5248 32 9 <unknown> 5312 32 9 <unknown> 53"
                        "76 32 9 <unknown> 5440 32 9 <unknown> 5504 32 9 <unknown> 5568 32 9 <unknown> 5632 32 9 <unknown"
                        "> 5696 32 9 <unknown> 5760 32 9 <unknown> 5824 64 9 <unknown> 5920 64 9 <unknown> 6016 256 12 col_name:647";
  *(_QWORD *)(v2 + 16) = data::DailyTaskExcelConfig::init;
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
  v4[536862732] = -234753535;
  v4[536862733] = -234753535;
  v4[536862734] = -234753535;
  v4[536862735] = -234753535;
  v4[536862736] = -234753535;
  v4[536862737] = -234753535;
  v4[536862738] = -234753535;
  v4[536862739] = -234753535;
  v4[536862740] = -234753535;
  v4[536862741] = -234753535;
  v4[536862742] = -234753535;
  v4[536862743] = -234753535;
  v4[536862744] = -234753535;
  v4[536862745] = -234753535;
  v4[536862746] = -234881024;
  v4[536862747] = -218959118;
  v4[536862748] = -234881024;
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
  v4[536862795] = -218959118;
  v4[536862797] = -218959118;
  v4[536862799] = -218959118;
  v4[536862801] = -218959118;
  v4[536862803] = -218959118;
  v4[536862805] = -218959118;
  v4[536862807] = -218959118;
  v4[536862809] = -218959118;
  v4[536862811] = -218959118;
  v4[536862813] = -218959118;
  v4[536862815] = -218959118;
  v4[536862817] = -218959118;
  v4[536862819] = -218959118;
  v4[536862821] = -218959118;
  v4[536862823] = -218959118;
  v4[536862825] = -218959118;
  v4[536862827] = -218959118;
  v4[536862829] = -218959118;
  v4[536862831] = -218959118;
  v4[536862833] = -218959118;
  v4[536862835] = -218959118;
  v4[536862837] = -218959118;
  v4[536862839] = -218959118;
  v4[536862841] = -218959118;
  v4[536862843] = -218959118;
  v4[536862845] = -218959118;
  v4[536862847] = -218959118;
  v4[536862849] = -218959118;
  v4[536862851] = -218959118;
  v4[536862853] = -218959118;
  v4[536862855] = -218959118;
  v4[536862857] = -218959118;
  v4[536862859] = -218959118;
  v4[536862861] = -218959118;
  v4[536862863] = -218959118;
  v4[536862865] = -218959118;
  v4[536862867] = -218959118;
  v4[536862869] = -218959118;
  v4[536862871] = -218959118;
  v4[536862873] = -218959118;
  v4[536862875] = -218959118;
  v4[536862877] = -218959118;
  v4[536862879] = -218959118;
  v4[536862881] = -218959118;
  v4[536862883] = -218959118;
  v4[536862885] = -218959118;
  v4[536862887] = -218959118;
  v4[536862889] = -218959118;
  v4[536862891] = -218959118;
  v4[536862893] = -218959118;
  v4[536862895] = -218959118;
  v4[536862897] = -218959118;
  v4[536862899] = -218959118;
  v4[536862901] = -218959118;
  v4[536862904] = -218959118;
  v4[536862907] = -218959118;
  v4[536862916] = -202116109;
  v4[536862917] = -202116109;
  std::string::basic_string(v2 + 960);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1024),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1024), &this->id) != 0;
  std::string::~string((void *)(v2 + 1024));
  *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "init",
      652);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1088),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])byte_1AC01DC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
    *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1152),
      &byte_1AC34B00,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1152), &this->city_id) != 0;
    std::string::~string((void *)(v2 + 1152));
    *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "init",
        657);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1216),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1AC34B40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
      *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1280),
        &byte_1AC4F600,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1280), &this->pool_id) != 0;
      std::string::~string((void *)(v2 + 1280));
      *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
          "init",
          662);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 1344),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v8, (const char (*)[32])byte_1AC4F640);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
        *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        std::vector<data::DailyTaskTagType>::resize(&this->tag_vec, 2uLL);
        array_count = 0;
        for ( i = 0; i <= 1; ++i )
        {
          snprintf((char *)(v2 + 6016), 0x100uLL, &byte_1AC4F680, i + 1);
          *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1408),
            (const char *)(v2 + 6016),
            (const std::allocator<char> *)(v2 + 96));
          tc = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1408));
          std::string::~string((void *)(v2 + 1408));
          *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( !tc )
          {
            td = &std::vector<data::DailyTaskTagType>::operator[](&this->tag_vec, i)->value;
            *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1472),
              (const char *)(v2 + 6016),
              (const std::allocator<char> *)(v2 + 112));
            LOBYTE(td) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                           row,
                           (const std::string *)(v2 + 1472),
                           td) != 0;
            std::string::~string((void *)(v2 + 1472));
            *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( (_BYTE)td )
            {
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1536) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1536, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1536),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                "init",
                674);
              v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v2 + 1536),
                     (const char (*)[16])"[CONFIG_ERROR] ");
              v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v9,
                      (const char (*)[14])byte_1ABFD420);
              v11 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v10,
                      (const char (*)[256])(v2 + 6016));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1ABFD460);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
              goto LABEL_164;
            }
            array_count = i + 1;
          }
        }
        std::vector<data::DailyTaskTagType>::resize(&this->tag_vec, array_count);
        *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1600),
          &byte_1AC39140,
          (const std::allocator<char> *)(v2 + 128));
        te = common::tools::TxtFile::Row::assignToNum<unsigned int>(
               row,
               (const std::string *)(v2 + 1600),
               &this->weight) != 0;
        std::string::~string((void *)(v2 + 1600));
        *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( te )
        {
          *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1664) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1664, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1664),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
            "init",
            683);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1664),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v12, (const char (*)[33])byte_1AC39180);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
          *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1728),
            &byte_1AC4F6C0,
            (const std::allocator<char> *)(v2 + 144));
          tf = common::tools::TxtFile::Row::assignToEnum<data::DailyTaskType>(
                 row,
                 (const std::string *)(v2 + 1728),
                 &this->type) != 0;
          std::string::~string((void *)(v2 + 1728));
          *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( tf )
          {
            *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1792) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1792, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1792),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
              "init",
              688);
            v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1792),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1AC4F700);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
            *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1856),
              &byte_1AC4F760,
              (const std::allocator<char> *)(v2 + 160));
            tg = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                   row,
                   (const std::string *)(v2 + 1856),
                   &this->rarity) != 0;
            std::string::~string((void *)(v2 + 1856));
            *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( tg )
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
                "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                "init",
                693);
              v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1920),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v14, (const char (*)[36])byte_1AC4F7A0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
              *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 176);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1984),
                &byte_1AC4F800,
                (const std::allocator<char> *)(v2 + 176));
              th = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                     row,
                     (const std::string *)(v2 + 1984),
                     &this->quest_id) != 0;
              std::string::~string((void *)(v2 + 1984));
              *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( th )
              {
                *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 2048) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 2048, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 2048),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                  "init",
                  698);
                v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 2048),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v15, (const char (*)[39])byte_1AC4F840);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 192);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2112),
                  &byte_1AC4F8A0,
                  (const std::allocator<char> *)(v2 + 192));
                ti = common::tools::TxtFile::Row::assignToStr(
                       row,
                       (const std::string *)(v2 + 2112),
                       (std::string *)(v2 + 960)) != 0;
                std::string::~string((void *)(v2 + 2112));
                *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 192);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                if ( ti )
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
                    "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                    "init",
                    703);
                  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 2176),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    v16,
                    (const char (*)[41])byte_1AC4F8E0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                  *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  v17 = ((v2 + 832) >> 3) + 2147450880;
                  *(_WORD *)v17 = 0;
                  *(_BYTE *)(v17 + 2) = 0;
                  v18 = (_DWORD *)(((v2 + 5824) >> 3) + 2147450880);
                  *v18 = 0;
                  v18[1] = 0;
                  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 208);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 5824),
                    ";",
                    (const std::allocator<char> *)(v2 + 208));
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 224);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 5856),
                    ",",
                    (const std::allocator<char> *)(v2 + 224));
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 240));
                  std::vector<std::string>::vector(
                    (std::vector<std::string> *const)(v2 + 832),
                    (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 5824),
                    (const std::vector<std::string>::allocator_type *)(v2 + 240));
                  v19 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                          (const std::string *)(v2 + 960),
                          (const std::vector<std::string> *)(v2 + 832),
                          &this->old_group_vec,
                          1) != 0;
                  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 832));
                  v20 = ((v2 + 832) >> 3) + 2147450880;
                  *(_WORD *)v20 = -1800;
                  *(_BYTE *)(v20 + 2) = -8;
                  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 240));
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                  for ( j = (char *)(v2 + 5888); j != (char *)(v2 + 5824); std::string::~string(j) )
                    j -= 32;
                  v22 = (_DWORD *)(((v2 + 5824) >> 3) + 2147450880);
                  *v22 = -117901064;
                  v22[1] = -117901064;
                  std::allocator<char>::~allocator(v2 + 224);
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                  std::allocator<char>::~allocator(v2 + 208);
                  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                  if ( v19 )
                  {
                    *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 2240) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 2240, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 2240),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                      "init",
                      708);
                    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 2240),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      v23,
                      (const char (*)[41])byte_1AC4F8E0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2240));
                    *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 256);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2304),
                      &byte_1AC4F940,
                      (const std::allocator<char> *)(v2 + 256));
                    v24 = common::tools::TxtFile::Row::assignToStr(
                            row,
                            (const std::string *)(v2 + 2304),
                            (std::string *)(v2 + 960)) != 0;
                    std::string::~string((void *)(v2 + 2304));
                    *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 256);
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                    if ( v24 )
                    {
                      *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 2368) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 2399) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2399) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 2368, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 2368),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                        "init",
                        713);
                      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2368),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        v25,
                        (const char (*)[41])byte_1AC4F980);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
                      *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      v26 = ((v2 + 896) >> 3) + 2147450880;
                      *(_WORD *)v26 = 0;
                      *(_BYTE *)(v26 + 2) = 0;
                      v27 = (_DWORD *)(((v2 + 5920) >> 3) + 2147450880);
                      *v27 = 0;
                      v27[1] = 0;
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 272);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 5920),
                        ";",
                        (const std::allocator<char> *)(v2 + 272));
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 288);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 5952),
                        ",",
                        (const std::allocator<char> *)(v2 + 288));
                      __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 5920);
                      __l._M_len = 2LL;
                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 304));
                      std::vector<std::string>::vector(
                        (std::vector<std::string> *const)(v2 + 896),
                        __l,
                        (const std::vector<std::string>::allocator_type *)(v2 + 304));
                      v28 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                              (const std::string *)(v2 + 960),
                              (const std::vector<std::string> *)(v2 + 896),
                              &this->new_group_vec,
                              1) != 0;
                      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 896));
                      v29 = ((v2 + 896) >> 3) + 2147450880;
                      *(_WORD *)v29 = -1800;
                      *(_BYTE *)(v29 + 2) = -8;
                      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 304));
                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                      for ( k = (char *)(v2 + 5984); k != (char *)(v2 + 5920); std::string::~string(k) )
                        k -= 32;
                      v31 = (_DWORD *)(((v2 + 5920) >> 3) + 2147450880);
                      *v31 = -117901064;
                      v31[1] = -117901064;
                      std::allocator<char>::~allocator(v2 + 288);
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                      std::allocator<char>::~allocator(v2 + 272);
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                      if ( v28 )
                      {
                        *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2432) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2463) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2463) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2432, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2432),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                          "init",
                          718);
                        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2432),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                          v32,
                          (const char (*)[41])byte_1AC4F980);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2432));
                        *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 320);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2496),
                          &byte_1AC4F9E0,
                          (const std::allocator<char> *)(v2 + 320));
                        v33 = common::tools::TxtFile::Row::assignToEnum<data::LogicType>(
                                row,
                                (const std::string *)(v2 + 2496),
                                &this->statisfied_cond_comb) != 0;
                        std::string::~string((void *)(v2 + 2496));
                        *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 320);
                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                        if ( v33 )
                        {
                          *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2560) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2560, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2560),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                            "init",
                            723);
                          v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2560),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            v34,
                            (const char (*)[33])byte_1AC4FA20);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                          *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          std::vector<data::DailyTaskStatisfiedCond>::resize(&this->statisfied_cond, 3uLL);
                          array_counta = 0;
                          for ( i_0 = 0; i_0 <= 2; ++i_0 )
                          {
                            snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FA80, i_0 + 1);
                            *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 336);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2624),
                              (const char *)(v2 + 6016),
                              (const std::allocator<char> *)(v2 + 336));
                            v35 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2624));
                            std::string::~string((void *)(v2 + 2624));
                            *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 336);
                            *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                            if ( !v35 )
                            {
                              p_type = &std::vector<data::DailyTaskStatisfiedCond>::operator[](
                                          &this->statisfied_cond,
                                          i_0)->type;
                              *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 352);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2688),
                                (const char *)(v2 + 6016),
                                (const std::allocator<char> *)(v2 + 352));
                              LOBYTE(p_type) = common::tools::TxtFile::Row::assignToEnum<data::ConditionType>(
                                                 row,
                                                 (const std::string *)(v2 + 2688),
                                                 p_type) != 0;
                              std::string::~string((void *)(v2 + 2688));
                              *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 352);
                              *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                              if ( (_BYTE)p_type )
                              {
                                *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2752) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2752, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2752),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                  "init",
                                  735);
                                v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2752),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                v38 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                        v37,
                                        (const char (*)[14])byte_1ABFD420);
                                v39 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                        v38,
                                        (const char (*)[256])(v2 + 6016));
                                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                  v39,
                                  (const char (*)[7])byte_1ABFD460);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2752));
                                *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                                v6 = -1;
                                goto LABEL_164;
                              }
                              snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FAC0, i_0 + 1);
                              *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 368);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2816),
                                (const char *)(v2 + 6016),
                                (const std::allocator<char> *)(v2 + 368));
                              v40 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2816));
                              std::string::~string((void *)(v2 + 2816));
                              *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 368);
                              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                              if ( !v40 )
                              {
                                p_param1 = &std::vector<data::DailyTaskStatisfiedCond>::operator[](
                                              &this->statisfied_cond,
                                              i_0)->param1;
                                *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 384);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2880),
                                  (const char *)(v2 + 6016),
                                  (const std::allocator<char> *)(v2 + 384));
                                LOBYTE(p_param1) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                     row,
                                                     (const std::string *)(v2 + 2880),
                                                     p_param1) != 0;
                                std::string::~string((void *)(v2 + 2880));
                                *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 384);
                                *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                if ( (_BYTE)p_param1 )
                                {
                                  *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2944) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2944, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2944),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                    "init",
                                    743);
                                  v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2944),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                          v42,
                                          (const char (*)[14])byte_1ABFD420);
                                  v44 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                          v43,
                                          (const char (*)[256])(v2 + 6016));
                                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                    v44,
                                    (const char (*)[7])byte_1ABFD460);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2944));
                                  *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -117901064;
                                  v6 = -1;
                                  goto LABEL_164;
                                }
                                snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FB00, i_0 + 1);
                                *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 400);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3008),
                                  (const char *)(v2 + 6016),
                                  (const std::allocator<char> *)(v2 + 400));
                                v45 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3008));
                                std::string::~string((void *)(v2 + 3008));
                                *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 400);
                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                if ( !v45 )
                                {
                                  p_param2 = &std::vector<data::DailyTaskStatisfiedCond>::operator[](
                                                &this->statisfied_cond,
                                                i_0)->param2;
                                  *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 416);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3072),
                                    (const char *)(v2 + 6016),
                                    (const std::allocator<char> *)(v2 + 416));
                                  LOBYTE(p_param2) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                       row,
                                                       (const std::string *)(v2 + 3072),
                                                       p_param2) != 0;
                                  std::string::~string((void *)(v2 + 3072));
                                  *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 416);
                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                  if ( (_BYTE)p_param2 )
                                  {
                                    *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 3136) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 3167) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3167) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 3136, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 3136),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                      "init",
                                      751);
                                    v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3136),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    v48 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                            v47,
                                            (const char (*)[14])byte_1ABFD420);
                                    v49 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                            v48,
                                            (const char (*)[256])(v2 + 6016));
                                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                      v49,
                                      (const char (*)[7])byte_1ABFD460);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3136));
                                    *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                                    v6 = -1;
                                    goto LABEL_164;
                                  }
                                  snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FB40, i_0 + 1);
                                  *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 432);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3200),
                                    (const char *)(v2 + 6016),
                                    (const std::allocator<char> *)(v2 + 432));
                                  v50 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3200));
                                  std::string::~string((void *)(v2 + 3200));
                                  *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 432);
                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                  if ( !v50 )
                                  {
                                    p_param3 = &std::vector<data::DailyTaskStatisfiedCond>::operator[](
                                                  &this->statisfied_cond,
                                                  i_0)->param3;
                                    *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 448);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3264),
                                      (const char *)(v2 + 6016),
                                      (const std::allocator<char> *)(v2 + 448));
                                    LOBYTE(p_param3) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                         row,
                                                         (const std::string *)(v2 + 3264),
                                                         p_param3) != 0;
                                    std::string::~string((void *)(v2 + 3264));
                                    *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 448);
                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                    if ( (_BYTE)p_param3 )
                                    {
                                      *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 3328) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 3359) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 3359) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 3328, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 3328),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                        "init",
                                        759);
                                      v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3328),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      v53 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                              v52,
                                              (const char (*)[14])byte_1ABFD420);
                                      v54 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                              v53,
                                              (const char (*)[256])(v2 + 6016));
                                      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                        v54,
                                        (const char (*)[7])byte_1ABFD460);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3328));
                                      *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = -117901064;
                                      v6 = -1;
                                      goto LABEL_164;
                                    }
                                    array_counta = i_0 + 1;
                                  }
                                }
                              }
                            }
                          }
                          std::vector<data::DailyTaskStatisfiedCond>::resize(&this->statisfied_cond, array_counta);
                          *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 464);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 3392),
                            &byte_1AC4FB80,
                            (const std::allocator<char> *)(v2 + 464));
                          v55 = common::tools::TxtFile::Row::assignToEnum<data::DailyTaskFinishType>(
                                  row,
                                  (const std::string *)(v2 + 3392),
                                  &this->finish_type) != 0;
                          std::string::~string((void *)(v2 + 3392));
                          *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 464);
                          *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                          if ( v55 )
                          {
                            *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 3456) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 3487) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3487) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 3456, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 3456),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                              "init",
                              768);
                            v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 3456),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                              v56,
                              (const char (*)[39])byte_1AC4FBC0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3456));
                            *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 480);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 3520),
                              &byte_1AC4FC20,
                              (const std::allocator<char> *)(v2 + 480));
                            v57 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                    row,
                                    (const std::string *)(v2 + 3520),
                                    &this->finish_param1) != 0;
                            std::string::~string((void *)(v2 + 3520));
                            *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 480);
                            *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                            if ( v57 )
                            {
                              *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 3584) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 3615) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 3615) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 3584, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 3584),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                "init",
                                773);
                              v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 3584),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                v58,
                                (const char (*)[40])byte_1AC4FC60);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3584));
                              *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = -117901064;
                              v6 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 496);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 3648),
                                &byte_1AC4FCC0,
                                (const std::allocator<char> *)(v2 + 496));
                              v59 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                      row,
                                      (const std::string *)(v2 + 3648),
                                      &this->finish_param2) != 0;
                              std::string::~string((void *)(v2 + 3648));
                              *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 496);
                              *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                              if ( v59 )
                              {
                                *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 3712) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 3743) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3743) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 3712, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 3712),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                  "init",
                                  778);
                                v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 3712),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                  v60,
                                  (const char (*)[40])byte_1AC4FD00);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3712));
                                *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = -117901064;
                                v6 = -1;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 512);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3776),
                                  &byte_1AC36520,
                                  (const std::allocator<char> *)(v2 + 512));
                                v61 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                        row,
                                        (const std::string *)(v2 + 3776),
                                        &this->finish_progress) != 0;
                                std::string::~string((void *)(v2 + 3776));
                                *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 512);
                                *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                if ( v61 )
                                {
                                  *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 3840) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 3871) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 3871) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 3840, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 3840),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                    "init",
                                    783);
                                  v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3840),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                    v62,
                                    (const char (*)[33])byte_1AC36560);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3840));
                                  *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = -117901064;
                                  v6 = -1;
                                }
                                else
                                {
                                  std::vector<data::DailyTaskAction>::resize(&this->finish_action_vec, 3uLL);
                                  array_countb = 0;
                                  for ( i_1 = 0; i_1 <= 2; ++i_1 )
                                  {
                                    snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FD60, i_1 + 1);
                                    *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 528);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3904),
                                      (const char *)(v2 + 6016),
                                      (const std::allocator<char> *)(v2 + 528));
                                    v63 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3904));
                                    std::string::~string((void *)(v2 + 3904));
                                    *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 528);
                                    *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                    if ( !v63 )
                                    {
                                      p_cond_type = &std::vector<data::DailyTaskAction>::operator[](
                                                       &this->finish_action_vec,
                                                       i_1)->cond_type;
                                      *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 544);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3968),
                                        (const char *)(v2 + 6016),
                                        (const std::allocator<char> *)(v2 + 544));
                                      LOBYTE(p_cond_type) = common::tools::TxtFile::Row::assignToEnum<data::DailyTaskCondType>(
                                                              row,
                                                              (const std::string *)(v2 + 3968),
                                                              p_cond_type) != 0;
                                      std::string::~string((void *)(v2 + 3968));
                                      *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 544);
                                      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                      if ( (_BYTE)p_cond_type )
                                      {
                                        *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 4032) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 4063) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 4063) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 4032, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 4032),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                          "init",
                                          795);
                                        v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 4032),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        v66 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                v65,
                                                (const char (*)[14])byte_1ABFD420);
                                        v67 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                v66,
                                                (const char (*)[256])(v2 + 6016));
                                        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                          v67,
                                          (const char (*)[7])byte_1ABFD460);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4032));
                                        *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = -117901064;
                                        v6 = -1;
                                        goto LABEL_164;
                                      }
                                      snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FDA0, i_1 + 1);
                                      *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 560);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 4096),
                                        (const char *)(v2 + 6016),
                                        (const std::allocator<char> *)(v2 + 560));
                                      v68 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 4096));
                                      std::string::~string((void *)(v2 + 4096));
                                      *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 560);
                                      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                      if ( !v68 )
                                      {
                                        p_cond_param1 = &std::vector<data::DailyTaskAction>::operator[](
                                                           &this->finish_action_vec,
                                                           i_1)->cond_param1;
                                        *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 576);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 4160),
                                          (const char *)(v2 + 6016),
                                          (const std::allocator<char> *)(v2 + 576));
                                        LOBYTE(p_cond_param1) = common::tools::TxtFile::Row::assignToNum<int>(
                                                                  row,
                                                                  (const std::string *)(v2 + 4160),
                                                                  p_cond_param1) != 0;
                                        std::string::~string((void *)(v2 + 4160));
                                        *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 576);
                                        *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                                        if ( (_BYTE)p_cond_param1 )
                                        {
                                          *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 4224) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 4255) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 4255) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 4224, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 4224),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                            "init",
                                            803);
                                          v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 4224),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          v71 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                  v70,
                                                  (const char (*)[14])byte_1ABFD420);
                                          v72 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                  v71,
                                                  (const char (*)[256])(v2 + 6016));
                                          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                            v72,
                                            (const char (*)[7])byte_1ABFD460);
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4224));
                                          *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = -117901064;
                                          v6 = -1;
                                          goto LABEL_164;
                                        }
                                        snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FDE0, i_1 + 1);
                                        *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 592);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 4288),
                                          (const char *)(v2 + 6016),
                                          (const std::allocator<char> *)(v2 + 592));
                                        v73 = !common::tools::TxtFile::Row::hasKey(
                                                 row,
                                                 (const std::string *)(v2 + 4288));
                                        std::string::~string((void *)(v2 + 4288));
                                        *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 592);
                                        *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                                        if ( !v73 )
                                        {
                                          p_cond_param2 = &std::vector<data::DailyTaskAction>::operator[](
                                                             &this->finish_action_vec,
                                                             i_1)->cond_param2;
                                          *(_DWORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 608);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 4352),
                                            (const char *)(v2 + 6016),
                                            (const std::allocator<char> *)(v2 + 608));
                                          LOBYTE(p_cond_param2) = common::tools::TxtFile::Row::assignToNum<int>(
                                                                    row,
                                                                    (const std::string *)(v2 + 4352),
                                                                    p_cond_param2) != 0;
                                          std::string::~string((void *)(v2 + 4352));
                                          *(_DWORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 608);
                                          *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                                          if ( (_BYTE)p_cond_param2 )
                                          {
                                            *(_DWORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 4416) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 4447) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 4447) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 4416, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 4416),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                              "init",
                                              811);
                                            v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 4416),
                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                            v76 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                    v75,
                                                    (const char (*)[14])byte_1ABFD420);
                                            v77 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                    v76,
                                                    (const char (*)[256])(v2 + 6016));
                                            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                              v77,
                                              (const char (*)[7])byte_1ABFD460);
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4416));
                                            *(_DWORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = -117901064;
                                            v6 = -1;
                                            goto LABEL_164;
                                          }
                                          snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FE20, i_1 + 1);
                                          *(_DWORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 624);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 4480),
                                            (const char *)(v2 + 6016),
                                            (const std::allocator<char> *)(v2 + 624));
                                          v78 = !common::tools::TxtFile::Row::hasKey(
                                                   row,
                                                   (const std::string *)(v2 + 4480));
                                          std::string::~string((void *)(v2 + 4480));
                                          *(_DWORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 624);
                                          *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                                          if ( !v78 )
                                          {
                                            p_cond_param3 = &std::vector<data::DailyTaskAction>::operator[](
                                                               &this->finish_action_vec,
                                                               i_1)->cond_param3;
                                            *(_DWORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 640);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 4544),
                                              (const char *)(v2 + 6016),
                                              (const std::allocator<char> *)(v2 + 640));
                                            LOBYTE(p_cond_param3) = common::tools::TxtFile::Row::assignToNum<int>(
                                                                      row,
                                                                      (const std::string *)(v2 + 4544),
                                                                      p_cond_param3) != 0;
                                            std::string::~string((void *)(v2 + 4544));
                                            *(_DWORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 640);
                                            *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
                                            if ( (_BYTE)p_cond_param3 )
                                            {
                                              *(_DWORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 4608) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 4639) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 4639) >> 3)
                                                                                          + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 4608, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 4608),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                                "init",
                                                819);
                                              v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 4608),
                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                              v81 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                      v80,
                                                      (const char (*)[14])byte_1ABFD420);
                                              v82 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                      v81,
                                                      (const char (*)[256])(v2 + 6016));
                                              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                v82,
                                                (const char (*)[7])byte_1ABFD460);
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4608));
                                              *(_DWORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = -117901064;
                                              v6 = -1;
                                              goto LABEL_164;
                                            }
                                            snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FE60, i_1 + 1);
                                            *(_DWORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 656);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 4672),
                                              (const char *)(v2 + 6016),
                                              (const std::allocator<char> *)(v2 + 656));
                                            v83 = !common::tools::TxtFile::Row::hasKey(
                                                     row,
                                                     (const std::string *)(v2 + 4672));
                                            std::string::~string((void *)(v2 + 4672));
                                            *(_DWORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 656);
                                            *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                                            if ( !v83 )
                                            {
                                              v84 = &std::vector<data::DailyTaskAction>::operator[](
                                                       &this->finish_action_vec,
                                                       i_1)->type;
                                              *(_DWORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 672);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 4736),
                                                (const char *)(v2 + 6016),
                                                (const std::allocator<char> *)(v2 + 672));
                                              LOBYTE(v84) = common::tools::TxtFile::Row::assignToEnum<data::DailyTaskActionType>(
                                                              row,
                                                              (const std::string *)(v2 + 4736),
                                                              v84) != 0;
                                              std::string::~string((void *)(v2 + 4736));
                                              *(_DWORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 672);
                                              *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
                                              if ( (_BYTE)v84 )
                                              {
                                                *(_DWORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 4800) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 4831) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 4831) >> 3)
                                                                                            + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 4800, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 4800),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                                  "init",
                                                  827);
                                                v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4800),
                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                v86 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                        v85,
                                                        (const char (*)[14])byte_1ABFD420);
                                                v87 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                        v86,
                                                        (const char (*)[256])(v2 + 6016));
                                                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                  v87,
                                                  (const char (*)[7])byte_1ABFD460);
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4800));
                                                *(_DWORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = -117901064;
                                                v6 = -1;
                                                goto LABEL_164;
                                              }
                                              snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FEA0, i_1 + 1);
                                              *(_DWORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 688);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 4864),
                                                (const char *)(v2 + 6016),
                                                (const std::allocator<char> *)(v2 + 688));
                                              v88 = !common::tools::TxtFile::Row::hasKey(
                                                       row,
                                                       (const std::string *)(v2 + 4864));
                                              std::string::~string((void *)(v2 + 4864));
                                              *(_DWORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 688);
                                              *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
                                              if ( !v88 )
                                              {
                                                v89 = &std::vector<data::DailyTaskAction>::operator[](
                                                         &this->finish_action_vec,
                                                         i_1)->param1;
                                                *(_DWORD *)(((v2 + 4928) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 704);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 4928),
                                                  (const char *)(v2 + 6016),
                                                  (const std::allocator<char> *)(v2 + 704));
                                                LOBYTE(v89) = common::tools::TxtFile::Row::assignToNum<int>(
                                                                row,
                                                                (const std::string *)(v2 + 4928),
                                                                v89) != 0;
                                                std::string::~string((void *)(v2 + 4928));
                                                *(_DWORD *)(((v2 + 4928) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 704);
                                                *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
                                                if ( (_BYTE)v89 )
                                                {
                                                  *(_DWORD *)(((v2 + 4992) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 4992) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 5023) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 5023) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 4992, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 4992),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                                    "init",
                                                    835);
                                                  v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4992),
                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                  v91 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                          v90,
                                                          (const char (*)[14])byte_1ABFD420);
                                                  v92 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                          v91,
                                                          (const char (*)[256])(v2 + 6016));
                                                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                    v92,
                                                    (const char (*)[7])byte_1ABFD460);
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4992));
                                                  *(_DWORD *)(((v2 + 4992) >> 3) + 0x7FFF8000) = -117901064;
                                                  v6 = -1;
                                                  goto LABEL_164;
                                                }
                                                snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FEE0, i_1 + 1);
                                                *(_DWORD *)(((v2 + 5056) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 720);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 5056),
                                                  (const char *)(v2 + 6016),
                                                  (const std::allocator<char> *)(v2 + 720));
                                                v93 = !common::tools::TxtFile::Row::hasKey(
                                                         row,
                                                         (const std::string *)(v2 + 5056));
                                                std::string::~string((void *)(v2 + 5056));
                                                *(_DWORD *)(((v2 + 5056) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 720);
                                                *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
                                                if ( !v93 )
                                                {
                                                  v94 = &std::vector<data::DailyTaskAction>::operator[](
                                                           &this->finish_action_vec,
                                                           i_1)->param2;
                                                  *(_DWORD *)(((v2 + 5120) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 736);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 5120),
                                                    (const char *)(v2 + 6016),
                                                    (const std::allocator<char> *)(v2 + 736));
                                                  LOBYTE(v94) = common::tools::TxtFile::Row::assignToNum<int>(
                                                                  row,
                                                                  (const std::string *)(v2 + 5120),
                                                                  v94) != 0;
                                                  std::string::~string((void *)(v2 + 5120));
                                                  *(_DWORD *)(((v2 + 5120) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 736);
                                                  *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
                                                  if ( (_BYTE)v94 )
                                                  {
                                                    *(_DWORD *)(((v2 + 5184) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 5184) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 5215) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 5215) >> 3)
                                                                                           + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 5184, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 5184),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                                      "init",
                                                      843);
                                                    v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 5184),
                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                    v96 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                            v95,
                                                            (const char (*)[14])byte_1ABFD420);
                                                    v97 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                            v96,
                                                            (const char (*)[256])(v2 + 6016));
                                                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                      v97,
                                                      (const char (*)[7])byte_1ABFD460);
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5184));
                                                    *(_DWORD *)(((v2 + 5184) >> 3) + 0x7FFF8000) = -117901064;
                                                    v6 = -1;
                                                    goto LABEL_164;
                                                  }
                                                  snprintf((char *)(v2 + 6016), 0x100uLL, asc_1AC4FF20, i_1 + 1);
                                                  *(_DWORD *)(((v2 + 5248) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 752);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 5248),
                                                    (const char *)(v2 + 6016),
                                                    (const std::allocator<char> *)(v2 + 752));
                                                  v98 = !common::tools::TxtFile::Row::hasKey(
                                                           row,
                                                           (const std::string *)(v2 + 5248));
                                                  std::string::~string((void *)(v2 + 5248));
                                                  *(_DWORD *)(((v2 + 5248) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 752);
                                                  *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
                                                  if ( !v98 )
                                                  {
                                                    v99 = &std::vector<data::DailyTaskAction>::operator[](
                                                             &this->finish_action_vec,
                                                             i_1)->param3;
                                                    *(_DWORD *)(((v2 + 5312) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 768);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 5312),
                                                      (const char *)(v2 + 6016),
                                                      (const std::allocator<char> *)(v2 + 768));
                                                    LOBYTE(v99) = common::tools::TxtFile::Row::assignToNum<int>(
                                                                    row,
                                                                    (const std::string *)(v2 + 5312),
                                                                    v99) != 0;
                                                    std::string::~string((void *)(v2 + 5312));
                                                    *(_DWORD *)(((v2 + 5312) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 768);
                                                    *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
                                                    if ( (_BYTE)v99 )
                                                    {
                                                      *(_DWORD *)(((v2 + 5376) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 5376) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 5407) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 5407) >> 3)
                                                                                                  + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 5376, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 5376),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                                        "init",
                                                        851);
                                                      v100 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                               (common::milog::MiLogStream *const)(v2 + 5376),
                                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                                      v101 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                               v100,
                                                               (const char (*)[14])byte_1ABFD420);
                                                      v102 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                               v101,
                                                               (const char (*)[256])(v2 + 6016));
                                                      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                        v102,
                                                        (const char (*)[7])byte_1ABFD460);
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5376));
                                                      *(_DWORD *)(((v2 + 5376) >> 3) + 0x7FFF8000) = -117901064;
                                                      v6 = -1;
                                                      goto LABEL_164;
                                                    }
                                                    array_countb = i_1 + 1;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  std::vector<data::DailyTaskAction>::resize(&this->finish_action_vec, array_countb);
                                  *(_DWORD *)(((v2 + 5440) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 784);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 5440),
                                    &byte_1AC4FF60,
                                    (const std::allocator<char> *)(v2 + 784));
                                  v103 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                           row,
                                           (const std::string *)(v2 + 5440),
                                           &this->task_reward_id) != 0;
                                  std::string::~string((void *)(v2 + 5440));
                                  *(_DWORD *)(((v2 + 5440) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 784);
                                  *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
                                  if ( v103 )
                                  {
                                    *(_DWORD *)(((v2 + 5504) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 5504) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 5535) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 5535) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 5504, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 5504),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                      "init",
                                      860);
                                    v104 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                             (common::milog::MiLogStream *const)(v2 + 5504),
                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                      v104,
                                      (const char (*)[39])byte_1AC4FFA0);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5504));
                                    *(_DWORD *)(((v2 + 5504) >> 3) + 0x7FFF8000) = -117901064;
                                    v6 = -1;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 5568) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 800);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 5568),
                                      &byte_1AC50000,
                                      (const std::allocator<char> *)(v2 + 800));
                                    v105 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                             row,
                                             (const std::string *)(v2 + 5568),
                                             &this->task_cycle_refresh_times) != 0;
                                    std::string::~string((void *)(v2 + 5568));
                                    *(_DWORD *)(((v2 + 5568) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 800);
                                    *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
                                    if ( v105 )
                                    {
                                      *(_DWORD *)(((v2 + 5632) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 5632) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 5663) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 5663) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 5632, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 5632),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                        "init",
                                        865);
                                      v106 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                               (common::milog::MiLogStream *const)(v2 + 5632),
                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                        v106,
                                        (const char (*)[48])byte_1AC50040);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5632));
                                      *(_DWORD *)(((v2 + 5632) >> 3) + 0x7FFF8000) = -117901064;
                                      v6 = -1;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 5696) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 816);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 5696),
                                        &byte_1AC500A0,
                                        (const std::allocator<char> *)(v2 + 816));
                                      v107 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                               row,
                                               (const std::string *)(v2 + 5696),
                                               &this->related_tag) != 0;
                                      std::string::~string((void *)(v2 + 5696));
                                      *(_DWORD *)(((v2 + 5696) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 816);
                                      *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
                                      if ( v107 )
                                      {
                                        *(_DWORD *)(((v2 + 5760) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 5760) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 5791) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 5791) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 5760, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 5760),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                                          "init",
                                          870);
                                        v108 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                 (common::milog::MiLogStream *const)(v2 + 5760),
                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                          v108,
                                          (const char (*)[33])byte_1AC500E0);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5760));
                                        *(_DWORD *)(((v2 + 5760) >> 3) + 0x7FFF8000) = -117901064;
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
        }
      }
    }
  }
LABEL_164:
  std::string::~string((void *)(v2 + 960));
  if ( v127 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82E8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862753) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147451004 - (((_DWORD)v4 + 2147451012) & 0xFFFFFFF8) + 628) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8310) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 6336LL, v127);
  }
  return v6;
};

// Line 878: range 00000000139FA988-00000000139FAF10
int32_t __cdecl data::DailyTaskDropConfig::init(
        data::DailyTaskDropConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  char v10[368]; // [rsp+10h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DailyTaskDropConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "DropID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->drop_id) != 0;
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "init",
      881);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1AC34C60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      &byte_1AC50140,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 192),
           &this->preview_reward_id) != 0;
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "init",
        886);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1AC50180);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 894: range 00000000139FAF12-00000000139FBB7C
int32_t __cdecl data::DailyTaskRewardExcelConfig::init(
        data::DailyTaskRewardExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  unsigned int *p_drop_id; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r14
  unsigned int *p_preview_reward_id; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t array_count; // [rsp+18h] [rbp-3F8h]
  uint32_t i; // [rsp+1Ch] [rbp-3F4h]
  char v20[1008]; // [rsp+20h] [rbp-3F0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 32 "
                        "9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 256 12 col_name:895";
  *(_QWORD *)(v2 + 16) = data::DailyTaskRewardExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862748] = -202116109;
  v4[536862749] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 128), &this->id) != 0;
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "init",
      899);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AC01DC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
    goto LABEL_23;
  }
  std::vector<data::DailyTaskDropConfig>::resize(&this->drop_vec, 0x14uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 0x13 )
    {
      std::vector<data::DailyTaskDropConfig>::resize(&this->drop_vec, array_count);
      result = 0;
      goto LABEL_23;
    }
    snprintf((char *)(v2 + 640), 0x100uLL, asc_1AC50300, i + 1);
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      (const char *)(v2 + 640),
      (const std::allocator<char> *)(v2 + 64));
    v8 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v8 )
    {
      p_drop_id = &std::vector<data::DailyTaskDropConfig>::operator[](&this->drop_vec, i)->drop_id;
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 320),
        (const char *)(v2 + 640),
        (const std::allocator<char> *)(v2 + 80));
      LOBYTE(p_drop_id) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 320),
                            p_drop_id) != 0;
      std::string::~string((void *)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( (_BYTE)p_drop_id )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
          "init",
          911);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1ABFD420);
        v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 640));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1ABFD460);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        result = -1;
        goto LABEL_23;
      }
      snprintf((char *)(v2 + 640), 0x100uLL, asc_1AC50340, i + 1);
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 448),
        (const char *)(v2 + 640),
        (const std::allocator<char> *)(v2 + 96));
      v13 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 448));
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( !v13 )
        break;
    }
LABEL_21:
    ;
  }
  p_preview_reward_id = &std::vector<data::DailyTaskDropConfig>::operator[](&this->drop_vec, i)->preview_reward_id;
  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 112);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 512),
    (const char *)(v2 + 640),
    (const std::allocator<char> *)(v2 + 112));
  LOBYTE(p_preview_reward_id) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 512),
                                  p_preview_reward_id) != 0;
  std::string::~string((void *)(v2 + 512));
  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 112);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)p_preview_reward_id )
  {
    array_count = i + 1;
    goto LABEL_21;
  }
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
    4u,
    "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
    "init",
    919);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 576),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])byte_1ABFD420);
  v17 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v16, (const char (*)[256])(v2 + 640));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1ABFD460);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
  result = -1;
LABEL_23:
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 931: range 00000000139FBB7E-00000000139FCB03
int32_t __cdecl data::DailyTaskLevelExcelConfig::init(
        data::DailyTaskLevelExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  char v18[944]; // [rsp+10h] [rbp-3B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <"
                        "unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <u"
                        "nknown> 768 32 9 <unknown> 832 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DailyTaskLevelExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "ID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 128), &this->id) != 0;
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "init",
      934);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AC01DC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "MinPlayerLevel",
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 256),
           &this->min_player_level) != 0;
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "init",
        939);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v9, (const char (*)[35])byte_1AC503E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        "MaxPlayerLevel",
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 384),
              &this->max_player_level) != 0;
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
          "init",
          944);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v11, (const char (*)[35])byte_1AC50480);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        result = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          &byte_1AC16D40,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 512),
                &this->group_revise_level) != 0;
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
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
            4u,
            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
            "init",
            949);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1AC16D80);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          result = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 640),
            &byte_1AC504E0,
            (const std::allocator<char> *)(v2 + 96));
          v14 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 640),
                  &this->score_drop_id) != 0;
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
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
              "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
              "init",
              954);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v15, (const char (*)[33])byte_1AC50520);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 768),
              &byte_1AC50580,
              (const std::allocator<char> *)(v2 + 112));
            v16 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 768),
                    &this->score_preview_reward_id) != 0;
            std::string::~string((void *)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( v16 )
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
                "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                "init",
                959);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 832),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v17, (const char (*)[41])byte_1AC505C0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
              result = -1;
            }
            else
            {
              result = 0;
            }
          }
        }
      }
    }
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 967: range 00000000139FCB04-00000000139FD953
int32_t __cdecl data::CityTaskOpenExcelConfig::init(
        data::CityTaskOpenExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  _DWORD *v10; // rax
  bool v11; // r15
  unsigned __int64 v12; // rax
  char *i; // r14
  _DWORD *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  bool t; // [rsp+8h] [rbp-368h]
  bool ta; // [rsp+8h] [rbp-368h]
  bool tb; // [rsp+8h] [rbp-368h]
  char v20[848]; // [rsp+20h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 24 9 <unknown> 192 32 11 val_str:968 256 32 9 <unknown> 320 32 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::CityTaskOpenExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862744] = -202116109;
  std::string::basic_string(v2 + 192);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 256),
    &byte_1AC34B00,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 256), &this->city_id) != 0;
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "init",
      971);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AC34B40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      &byte_1AC50760,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 384), &this->quest_id) != 0;
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "init",
        976);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v7, (const char (*)[45])byte_1AC507A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 512),
        &byte_1AC50800,
        (const std::allocator<char> *)(v2 + 64));
      tb = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 512), (std::string *)(v2 + 192)) != 0;
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          4u,
          "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
          "init",
          981);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 576),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v8, (const char (*)[36])byte_1AC50840);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v9 = ((v2 + 128) >> 3) + 2147450880;
        *(_WORD *)v9 = 0;
        *(_BYTE *)(v9 + 2) = 0;
        v10 = (_DWORD *)(((v2 + 704) >> 3) + 2147450880);
        *v10 = 0;
        v10[1] = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 704),
          ";",
          (const std::allocator<char> *)(v2 + 80));
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 736),
          ",",
          (const std::allocator<char> *)(v2 + 96));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 128),
          (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 704),
          (const std::vector<std::string>::allocator_type *)(v2 + 112));
        v11 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                (const std::string *)(v2 + 192),
                (const std::vector<std::string> *)(v2 + 128),
                &this->backup_vec,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 128));
        v12 = ((v2 + 128) >> 3) + 2147450880;
        *(_WORD *)v12 = -1800;
        *(_BYTE *)(v12 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        for ( i = (char *)(v2 + 768); i != (char *)(v2 + 704); std::string::~string(i) )
          i -= 32;
        v14 = (_DWORD *)(((v2 + 704) >> 3) + 2147450880);
        *v14 = -117901064;
        v14[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v11 )
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
            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
            "init",
            986);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v15, (const char (*)[36])byte_1AC50840);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
      }
    }
  }
  std::string::~string((void *)(v2 + 192));
  result = v6;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 995: range 00000000139FD954-00000000139FE99E
int32_t __cdecl data::DailyTaskExcelConfigMgrBase::loadDailyTaskExcelConfig(
        data::DailyTaskExcelConfigMgrBase *const this,
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
  data::DailyTaskExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::DailyTaskExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-86B8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8698h]
  char v37[34448]; // [rsp+50h] [rbp-8690h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34400LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1010 80 4 9 <unknown> 96 32 9 paths:996 160 32 9 <unknown> 224 32 9"
                        " <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 200 9"
                        " data:1013 816 376 25 debug_message_stream:1021 1264 32880 13 txt_file:1004";
  *(_QWORD *)(v3 + 16) = data::DailyTaskExcelConfigMgrBase::loadDailyTaskExcelConfig;
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
  v5[536862743] = -218959360;
  v5[536862744] = -218959118;
  v5[536862745] = 62194;
  v5[536862757] = -218959360;
  v5[536862758] = -218959118;
  v5[536862759] = 62194;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  v5[536863793] = -202116109;
  v5[536863794] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/DailyTaskData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 96); __for_begin != (std::string *)(v3 + 128); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 160, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 160), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 160);
    std::string::~string((void *)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1264, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1264));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1264), v7) )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "loadDailyTaskExcelConfig",
        1007);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1264));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1264), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_DWORD *)(v13 + 12) = 0;
        *(_DWORD *)(v13 + 16) = 0;
        *(_DWORD *)(v13 + 20) = 0;
        *(_BYTE *)(v13 + 24) = 0;
        data::DailyTaskExcelConfig::DailyTaskExcelConfig((data::DailyTaskExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::DailyTaskExcelConfig::init((data::DailyTaskExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 816, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 816);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 816, &unk_1AC50A40);
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
              "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
              "loadDailyTaskExcelConfig",
              1023);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 816);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 816);
            __asan_poison_stack_memory(v3 + 816, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::DailyTaskExcelConfig &>((data::DailyTaskExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::emplace<unsigned int &,data::DailyTaskExcelConfig>(
                    &this->daily_task_excel_config_map,
                    (unsigned int *)(v3 + 552),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 480, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 480),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                "loadDailyTaskExcelConfig",
                1028);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AC50A80);
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
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
            "loadDailyTaskExcelConfig",
            1016);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::DailyTaskExcelConfig::~DailyTaskExcelConfig((data::DailyTaskExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_DWORD *)(v30 + 12) = -117901064;
        *(_DWORD *)(v30 + 16) = -117901064;
        *(_DWORD *)(v30 + 20) = -117901064;
        *(_BYTE *)(v30 + 24) = -8;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1264));
    __asan_poison_stack_memory(v3 + 1264, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4284) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34400LL, v37);
  }
  return v2;
};

// Line 1037: range 00000000139FE9A0-00000000139FF970
int32_t __cdecl data::DailyTaskExcelConfigMgrBase::loadDailyTaskRewardExcelConfig(
        data::DailyTaskExcelConfigMgrBase *const this,
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
  data::DailyTaskRewardExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::DailyTaskRewardExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1052 80 4 9 <unknown> 96 32 10 paths:1038 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 40 "
                        "9 data:1055 624 376 25 debug_message_stream:1063 1072 32880 13 txt_file:1046";
  *(_QWORD *)(v3 + 16) = data::DailyTaskExcelConfigMgrBase::loadDailyTaskRewardExcelConfig;
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
  v5[536862738] = -218959360;
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
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/DailyTaskRewardData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1072, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1072), v7) )
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "loadDailyTaskRewardExcelConfig",
        1049);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1072));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1072), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_BYTE *)(v13 + 4) = 0;
        data::DailyTaskRewardExcelConfig::DailyTaskRewardExcelConfig((data::DailyTaskRewardExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::DailyTaskRewardExcelConfig::init((data::DailyTaskRewardExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1AC50A40);
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
              "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
              "loadDailyTaskRewardExcelConfig",
              1065);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 624);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 624);
            __asan_poison_stack_memory(v3 + 624, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::DailyTaskRewardExcelConfig &>((data::DailyTaskRewardExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::emplace<unsigned int &,data::DailyTaskRewardExcelConfig>(
                    &this->daily_task_reward_excel_config_map,
                    (unsigned int *)(v3 + 552),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
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
                "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
                "loadDailyTaskRewardExcelConfig",
                1070);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AC50A80);
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
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
            "loadDailyTaskRewardExcelConfig",
            1058);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::DailyTaskRewardExcelConfig::~DailyTaskRewardExcelConfig((data::DailyTaskRewardExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_BYTE *)(v30 + 4) = -8;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    __asan_poison_stack_memory(v3 + 1072, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4260) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34208LL, v37);
  }
  return v2;
};

// Line 1079: range 00000000139FF972-0000000013A00EE7
int32_t __cdecl data::DailyTaskExcelConfigMgrBase::loadDailyTaskLevelExcelConfig(
        data::DailyTaskExcelConfigMgrBase *const this,
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
  __int64 v15; // rsi
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  int v18; // r14d
  unsigned __int64 v19; // rax
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  std::map<long unsigned int,std::string>::mapped_type *v23; // rdx
  std::vector<std::string>::size_type v24; // rdx
  const char *v25; // rax
  __int64 v26; // r14
  std::map<long unsigned int,std::string>::mapped_type *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  const std::vector<std::string> *p_data_vec; // rax
  std::vector<std::string>::const_reference v31; // rax
  unsigned __int64 v32; // rax
  const char *v33; // rax
  __int64 v34; // r14
  std::vector<std::string>::const_reference v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rcx
  __int64 v40; // rsi
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  data::DailyTaskLevelExcelConfig *v43; // rax
  data::DailyTaskLevelExcelConfig *v44; // rdx
  int v45; // edx
  char *j; // r14
  std::string *__for_begin; // [rsp+20h] [rbp-86A0h]
  size_t i; // [rsp+28h] [rbp-8698h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8678h]
  std::map<std::string,short unsigned int> *__for_range_0; // [rsp+50h] [rbp-8670h]
  std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::reference v53; // [rsp+58h] [rbp-8668h]
  std::tuple_element<0,std::pair<const std::string,short unsigned int> >::type *col_name; // [rsp+60h] [rbp-8660h]
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *col_id; // [rsp+68h] [rbp-8658h]
  char v56[34384]; // [rsp+70h] [rbp-8650h] BYREF

  v3 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34336LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 48 1 9 <unknown> 64 4 6 r:1094 80 4 9 <unknown> 96 8 16 __for_begin:1109 128 8 14 __for_end:1"
                        "109 160 8 9 <unknown> 192 8 6 i:1113 224 32 10 paths:1080 288 32 9 <unknown> 352 32 9 <unknown> "
                        "416 32 9 data:1097 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 48 20 col_id_nam"
                        "e_map:1108 752 376 25 debug_message_stream:1105 1200 32880 13 txt_file:1088";
  *(_QWORD *)(v3 + 16) = data::DailyTaskExcelConfigMgrBase::loadDailyTaskLevelExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862755] = -218959360;
  v5[536862756] = -218959118;
  v5[536862757] = 62194;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "/txt/DailyTaskLevelData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 224); __for_begin != (std::string *)(v3 + 256); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 288, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 288), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 288);
    std::string::~string((void *)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1200, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1200), v7) )
    {
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "loadDailyTaskLevelExcelConfig",
        1091);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1200));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        v13 = *(unsigned int *)(v3 + 64);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1200), v13);
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        v14 = &`vtable for'data::DailyTaskLevelExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 416, v13);
        *(_QWORD *)(v3 + 416) = v14;
        if ( *(_BYTE *)(((v3 + 424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 424) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 424, v13);
        *(_DWORD *)(v3 + 424) = 0;
        v15 = (((_BYTE)v3 - 84) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 428) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 84) & 7) + 3) >= *(_BYTE *)(((v3 + 428) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 428, v15);
        }
        *(_DWORD *)(v3 + 428) = 0;
        if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 432, v15);
        *(_DWORD *)(v3 + 432) = 0;
        v16 = (((_BYTE)v3 - 76) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 436) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 76) & 7) + 3) >= *(_BYTE *)(((v3 + 436) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 436, v16);
        }
        *(_DWORD *)(v3 + 436) = 0;
        if ( *(_BYTE *)(((v3 + 440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 440) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 440, v16);
        *(_DWORD *)(v3 + 440) = 0;
        if ( *(_BYTE *)(((v3 + 444) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 68) & 7) + 3) >= *(_BYTE *)(((v3 + 444) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 444, (((_BYTE)v3 - 68) & 7u) + 3);
        }
        *(_DWORD *)(v3 + 444) = 0;
        if ( row_ptr )
        {
          if ( data::DailyTaskLevelExcelConfig::init((data::DailyTaskLevelExcelConfig *const)(v3 + 416), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 752, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 752);
            if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(&row_ptr->col_name_map_ptr);
            if ( row_ptr->col_name_map_ptr )
            {
              v19 = ((v3 + 672) >> 3) + 2147450880;
              *(_DWORD *)v19 = 0;
              *(_WORD *)(v19 + 4) = 0;
              std::map<unsigned long,std::string>::map((std::map<long unsigned int,std::string> *const)(v3 + 672));
              if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8(&row_ptr->col_name_map_ptr);
              __for_range_0 = row_ptr->col_name_map_ptr;
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 96, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 96) = std::map<std::string,unsigned short>::begin(__for_range_0);
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 128, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 128) = std::map<std::string,unsigned short>::end(__for_range_0);
              while ( std::operator!=(
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 96),
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 128)) )
              {
                v53 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 96));
                col_name = std::get<0ul,std::string const,unsigned short>(v53);
                v20 = (std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *)std::get<1ul,std::string const,unsigned short>(v53);
                col_id = v20;
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
                v21 = ((unsigned __int8)v20 & 7u) + 1;
                if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v20 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load2(v20);
                }
                v22 = *col_id;
                if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 160, v21);
                *(_QWORD *)(v3 + 160) = v22;
                v23 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 672),
                        (std::map<long unsigned int,std::string>::key_type *)(v3 + 160));
                std::string::operator=(v23, col_name);
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
                std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 96));
              }
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 192, v3 + 128);
              for ( *(_QWORD *)(v3 + 192) = 0LL; ; ++*(_QWORD *)(v3 + 192) )
              {
                v24 = std::vector<std::string>::size(&row_ptr->data_vec);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                if ( v24 <= *(_QWORD *)(v3 + 192) )
                  break;
                if ( *(_QWORD *)(v3 + 192) )
                  v25 = " ";
                else
                  v25 = byte_1ABBC960;
                v26 = std::operator<<<std::char_traits<char>>(v3 + 752, v25);
                v27 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 672),
                        (const std::map<long unsigned int,std::string>::key_type *)(v3 + 192));
                v28 = std::operator<<<char>(v26, v27);
                v29 = std::operator<<<std::char_traits<char>>(v28, &off_1AC08640);
                p_data_vec = &row_ptr->data_vec;
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                v31 = std::vector<std::string>::operator[](p_data_vec, *(_QWORD *)(v3 + 192));
                std::operator<<<char>(v29, v31);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
              }
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
              std::map<unsigned long,std::string>::~map((std::map<long unsigned int,std::string> *const)(v3 + 672));
              v32 = ((v3 + 672) >> 3) + 2147450880;
              *(_DWORD *)v32 = -117901064;
              *(_WORD *)(v32 + 4) = -1800;
            }
            else
            {
              for ( i = 0LL; i < std::vector<std::string>::size(&row_ptr->data_vec); ++i )
              {
                if ( i )
                  v33 = (const char *)&unk_1AC08680;
                else
                  v33 = byte_1ABBC960;
                v34 = std::operator<<<std::char_traits<char>>(v3 + 752, v33);
                v35 = std::vector<std::string>::operator[](&row_ptr->data_vec, i);
                std::operator<<<char>(v34, v35);
              }
            }
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 544, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 544),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
              "loadDailyTaskLevelExcelConfig",
              1125);
            v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v37 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v36, (const char (*)[2])"<");
            v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, __for_begin);
            v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v38,
                    (const char (*)[11])byte_1ABFF1E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v40 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v40);
            *(_DWORD *)(v3 + 80) = v40;
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v3 + 80));
            v42 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v41,
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 608, 32LL);
            }
            std::ostringstream::str(v3 + 608, v3 + 752);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, (const std::string *)(v3 + 608));
            std::string::~string((void *)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 752);
            __asan_poison_stack_memory(v3 + 752, 376LL);
            v18 = 0;
          }
          else
          {
            v43 = std::move<data::DailyTaskLevelExcelConfig &>((data::DailyTaskLevelExcelConfig *)(v3 + 416));
            std::vector<data::DailyTaskLevelExcelConfig>::emplace_back<data::DailyTaskLevelExcelConfig>(
              &this->daily_task_level_excel_config_vec,
              v43,
              v44);
            v18 = 1;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
            "loadDailyTaskLevelExcelConfig",
            1100);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::DailyTaskLevelExcelConfig::~DailyTaskLevelExcelConfig((data::DailyTaskLevelExcelConfig *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        if ( v18 != 1 )
        {
          v45 = 0;
          goto LABEL_90;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v45 = 1;
LABEL_90:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v45 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    __asan_poison_stack_memory(v3 + 1200, 32880LL);
    if ( !v10 )
      goto LABEL_94;
  }
  v2 = 0;
LABEL_94:
  for ( j = (char *)(v3 + 256); j != (char *)(v3 + 224); std::string::~string(j) )
    j -= 32;
  if ( v56 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862730) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450912 - (((_DWORD)v5 + 2147450920) & 0xFFFFFFF8) + 4260) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34336LL, v56);
  }
  return v2;
};

// Line 1135: range 0000000013A00EE8-0000000013A02301
int32_t __cdecl data::DailyTaskExcelConfigMgrBase::loadCityTaskOpenExcelConfig(
        data::DailyTaskExcelConfigMgrBase *const this,
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
  unsigned __int64 v16; // rax
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  std::map<long unsigned int,std::string>::mapped_type *v20; // rdx
  std::vector<std::string>::size_type v21; // rdx
  const char *v22; // rax
  __int64 v23; // r14
  std::map<long unsigned int,std::string>::mapped_type *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  const std::vector<std::string> *p_data_vec; // rax
  std::vector<std::string>::const_reference v28; // rax
  unsigned __int64 v29; // rax
  const char *v30; // rax
  __int64 v31; // r14
  std::vector<std::string>::const_reference v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rcx
  __int64 v37; // rsi
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  data::CityTaskOpenExcelConfig *v40; // rax
  data::CityTaskOpenExcelConfig *v41; // rdx
  unsigned __int64 v42; // rax
  int v43; // edx
  char *j; // r14
  std::string *__for_begin; // [rsp+20h] [rbp-86A0h]
  size_t i; // [rsp+28h] [rbp-8698h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8678h]
  std::map<std::string,short unsigned int> *__for_range_0; // [rsp+50h] [rbp-8670h]
  std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::reference v51; // [rsp+58h] [rbp-8668h]
  std::tuple_element<0,std::pair<const std::string,short unsigned int> >::type *col_name; // [rsp+60h] [rbp-8660h]
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *col_id; // [rsp+68h] [rbp-8658h]
  char v54[34384]; // [rsp+70h] [rbp-8650h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34336LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 32 1 9 <unknown> 48 4 6 r:1150 64 4 9 <unknown> 80 8 16 __for_begin:1165 112 8 14 __for_end:1"
                        "165 144 8 9 <unknown> 176 8 6 i:1169 208 32 10 paths:1136 272 32 9 <unknown> 336 32 9 <unknown> "
                        "400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 40 9 data:1153 672 48 20 col_id_nam"
                        "e_map:1164 752 376 25 debug_message_stream:1161 1200 32880 13 txt_file:1144";
  *(_QWORD *)(v3 + 16) = data::DailyTaskExcelConfigMgrBase::loadCityTaskOpenExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
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
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862755] = -218959360;
  v5[536862756] = -218959118;
  v5[536862757] = 62194;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 208),
    "/txt/CityTaskOpenData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 208); __for_begin != (std::string *)(v3 + 240); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 272, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 272), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 272);
    std::string::~string((void *)(v3 + 272));
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1200, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1200), v7) )
    {
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
        "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
        "loadCityTaskOpenExcelConfig",
        1147);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 336),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1200));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1200), *(_DWORD *)(v3 + 48));
        v13 = ((v3 + 592) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_BYTE *)(v13 + 4) = 0;
        data::CityTaskOpenExcelConfig::CityTaskOpenExcelConfig((data::CityTaskOpenExcelConfig *const)(v3 + 592));
        if ( row_ptr )
        {
          if ( data::CityTaskOpenExcelConfig::init((data::CityTaskOpenExcelConfig *const)(v3 + 592), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 752, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 752);
            if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(&row_ptr->col_name_map_ptr);
            if ( row_ptr->col_name_map_ptr )
            {
              v16 = ((v3 + 672) >> 3) + 2147450880;
              *(_DWORD *)v16 = 0;
              *(_WORD *)(v16 + 4) = 0;
              std::map<unsigned long,std::string>::map((std::map<long unsigned int,std::string> *const)(v3 + 672));
              if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8(&row_ptr->col_name_map_ptr);
              __for_range_0 = row_ptr->col_name_map_ptr;
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 80, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 80) = std::map<std::string,unsigned short>::begin(__for_range_0);
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 112, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 112) = std::map<std::string,unsigned short>::end(__for_range_0);
              while ( std::operator!=(
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 80),
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 112)) )
              {
                v51 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 80));
                col_name = std::get<0ul,std::string const,unsigned short>(v51);
                v17 = (std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *)std::get<1ul,std::string const,unsigned short>(v51);
                col_id = v17;
                *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
                v18 = ((unsigned __int8)v17 & 7u) + 1;
                if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v17 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load2(v17);
                }
                v19 = *col_id;
                if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 144, v18);
                *(_QWORD *)(v3 + 144) = v19;
                v20 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 672),
                        (std::map<long unsigned int,std::string>::key_type *)(v3 + 144));
                std::string::operator=(v20, col_name);
                *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
                std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 80));
              }
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 176, v3 + 112);
              for ( *(_QWORD *)(v3 + 176) = 0LL; ; ++*(_QWORD *)(v3 + 176) )
              {
                v21 = std::vector<std::string>::size(&row_ptr->data_vec);
                if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 176);
                if ( v21 <= *(_QWORD *)(v3 + 176) )
                  break;
                if ( *(_QWORD *)(v3 + 176) )
                  v22 = " ";
                else
                  v22 = byte_1ABBC960;
                v23 = std::operator<<<std::char_traits<char>>(v3 + 752, v22);
                v24 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 672),
                        (const std::map<long unsigned int,std::string>::key_type *)(v3 + 176));
                v25 = std::operator<<<char>(v23, v24);
                v26 = std::operator<<<std::char_traits<char>>(v25, &off_1AC08640);
                p_data_vec = &row_ptr->data_vec;
                if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 176);
                v28 = std::vector<std::string>::operator[](p_data_vec, *(_QWORD *)(v3 + 176));
                std::operator<<<char>(v26, v28);
                if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 176);
              }
              *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
              std::map<unsigned long,std::string>::~map((std::map<long unsigned int,std::string> *const)(v3 + 672));
              v29 = ((v3 + 672) >> 3) + 2147450880;
              *(_DWORD *)v29 = -117901064;
              *(_WORD *)(v29 + 4) = -1800;
            }
            else
            {
              for ( i = 0LL; i < std::vector<std::string>::size(&row_ptr->data_vec); ++i )
              {
                if ( i )
                  v30 = (const char *)&unk_1AC08680;
                else
                  v30 = byte_1ABBC960;
                v31 = std::operator<<<std::char_traits<char>>(v3 + 752, v30);
                v32 = std::vector<std::string>::operator[](&row_ptr->data_vec, i);
                std::operator<<<char>(v31, v32);
              }
            }
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
              "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
              "loadCityTaskOpenExcelConfig",
              1181);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 464),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v33, (const char (*)[2])"<");
            v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, __for_begin);
            v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v35,
                    (const char (*)[11])byte_1ABFF1E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v37 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v37);
            *(_DWORD *)(v3 + 64) = v37;
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v3 + 64));
            v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v38,
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 528, 32LL);
            }
            std::ostringstream::str(v3 + 528, v3 + 752);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)(v3 + 528));
            std::string::~string((void *)(v3 + 528));
            *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 752);
            __asan_poison_stack_memory(v3 + 752, 376LL);
            v15 = 0;
          }
          else
          {
            v40 = std::move<data::CityTaskOpenExcelConfig &>((data::CityTaskOpenExcelConfig *)(v3 + 592));
            std::vector<data::CityTaskOpenExcelConfig>::emplace_back<data::CityTaskOpenExcelConfig>(
              &this->city_task_open_excel_config_vec,
              v40,
              v41);
            v15 = 1;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 400, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 400),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
            "loadCityTaskOpenExcelConfig",
            1156);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 400),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::CityTaskOpenExcelConfig::~CityTaskOpenExcelConfig((data::CityTaskOpenExcelConfig *const)(v3 + 592));
        v42 = ((v3 + 592) >> 3) + 2147450880;
        *(_DWORD *)v42 = -117901064;
        *(_BYTE *)(v42 + 4) = -8;
        if ( v15 != 1 )
        {
          v43 = 0;
          goto LABEL_76;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v43 = 1;
LABEL_76:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v43 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    __asan_poison_stack_memory(v3 + 1200, 32880LL);
    if ( !v10 )
      goto LABEL_80;
  }
  v2 = 0;
LABEL_80:
  for ( j = (char *)(v3 + 240); j != (char *)(v3 + 208); std::string::~string(j) )
    j -= 32;
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4292) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34336LL, v54);
  }
  return v2;
};

// Line 1191: range 0000000013A02302-0000000013A028AC
int32_t __cdecl data::DailyTaskExcelConfigMgrBase::loadConfig(
        data::DailyTaskExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  char v10[320]; // [rsp+10h] [rbp-140h] BYREF

  v2 = (common::milog::MiLogStream *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::DailyTaskExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( data::DailyTaskExcelConfigMgrBase::loadDailyTaskExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "loadConfig",
      1194);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v5,
      (const char (*)[32])"loadDailyTaskExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::DailyTaskExcelConfigMgrBase::loadDailyTaskRewardExcelConfig(this, config) )
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
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "loadConfig",
      1199);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v7,
      (const char (*)[38])"loadDailyTaskRewardExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::DailyTaskExcelConfigMgrBase::loadDailyTaskLevelExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "loadConfig",
      1204);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v8,
      (const char (*)[37])"loadDailyTaskLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::DailyTaskExcelConfigMgrBase::loadCityTaskOpenExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/DailyTaskExcelConfig.gen.cpp",
      "loadConfig",
      1209);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v9,
      (const char (*)[35])"loadCityTaskOpenExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1216: range 0000000013A028AE-0000000013A028C0
int32_t __cdecl data::DailyTaskExcelConfigMgrBase::rewriteConfig(
        data::DailyTaskExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1221: range 0000000013A028C2-0000000013A028D4
int32_t __cdecl data::DailyTaskExcelConfigMgrBase::finalConfig(
        data::DailyTaskExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1226: range 0000000013A028D6-0000000013A02A91
data::DailyTaskExcelConfig *__fastcall data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
        data::DailyTaskExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DailyTaskExcelConfigMap *p_daily_task_excel_config_map; // rdx
  data::DailyTaskExcelConfigMap *v6; // rdx
  bool v7; // al
  data::DailyTaskExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1225 64 8 9 iter:1227 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_daily_task_excel_config_map = &this->daily_task_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::find(
                                                                                          p_daily_task_excel_config_map,
                                                                                          (const std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->daily_task_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1239: range 0000000013A02A92-0000000013A02C4D
const data::DailyTaskExcelConfig *__fastcall data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
        const data::DailyTaskExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DailyTaskExcelConfigMap *p_daily_task_excel_config_map; // rdx
  data::DailyTaskExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::DailyTaskExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1238 64 8 9 iter:1240 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_daily_task_excel_config_map = &this->daily_task_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::find(
                                                                                                p_daily_task_excel_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->daily_task_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1252: range 0000000013A02C4E-0000000013A02E09
data::DailyTaskRewardExcelConfig *__fastcall data::DailyTaskExcelConfigMgrBase::findDailyTaskRewardExcelConfig(
        data::DailyTaskExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DailyTaskRewardExcelConfigMap *p_daily_task_reward_excel_config_map; // rdx
  data::DailyTaskRewardExcelConfigMap *v6; // rdx
  bool v7; // al
  data::DailyTaskRewardExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1251 64 8 9 iter:1253 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DailyTaskExcelConfigMgrBase::findDailyTaskRewardExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_daily_task_reward_excel_config_map = &this->daily_task_reward_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::find(
                                                                                                p_daily_task_reward_excel_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->daily_task_reward_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1265: range 0000000013A02E0A-0000000013A02FC5
const data::DailyTaskRewardExcelConfig *__fastcall data::DailyTaskExcelConfigMgrBase::findDailyTaskRewardExcelConfig(
        const data::DailyTaskExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DailyTaskRewardExcelConfigMap *p_daily_task_reward_excel_config_map; // rdx
  data::DailyTaskRewardExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::DailyTaskRewardExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1264 64 8 9 iter:1266 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DailyTaskExcelConfigMgrBase::findDailyTaskRewardExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_daily_task_reward_excel_config_map = &this->daily_task_reward_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::find(p_daily_task_reward_excel_config_map, (const std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->daily_task_reward_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false> *const)(v2 + 64))->second;
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

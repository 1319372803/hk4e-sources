// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/DungeonEntryDataConfig.gen.cpp

// Line 12: range 0000000013A320BA-0000000013A3242D
const char *__fastcall data::enumValToStr(data::DungeonEntrySatisfiedConditionType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string>>::find(map, (const std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
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
    result = "INVALID_DungeonEntrySatisfiedConditionType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::DungeonEntrySatisfiedConditionType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 0000000013A3242E-0000000013A329E6
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType>,false,true>::pointer v10; // rax
  data::DungeonEntrySatisfiedConditionType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::find(m, (const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
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

// Line 45: range 0000000013A329E7-0000000013A333B0
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType>,false,true>::pointer v12; // rax
  data::DungeonEntrySatisfiedConditionType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::DungeonEntrySatisfiedConditionType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::DungeonEntrySatisfiedConditionType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>::pair<char const(&)[13],data::DungeonEntrySatisfiedConditionType,true>(
        (std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *const)(v2 + 432),
        (const char (*)[13])byte_1AC56BE0,
        (data::DungeonEntrySatisfiedConditionType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC56BE0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>::pair<char const(&)[13],data::DungeonEntrySatisfiedConditionType,true>(
        (std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *const)(v2 + 472),
        (const char (*)[13])byte_1AC0DBE0,
        (data::DungeonEntrySatisfiedConditionType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>>::allocator((std::allocator<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::unordered_map(
        &data::enumStrToVal(char const*,data::DungeonEntrySatisfiedConditionType &)::m,
        (std::initializer_list<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::DungeonEntrySatisfiedConditionType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::~unordered_map,
        &data::enumStrToVal(char const*,data::DungeonEntrySatisfiedConditionType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>>::~allocator((std::allocator<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *)(v2 + 512);
            i != (std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *)(v2 + 432);
            std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::find(&data::enumStrToVal(char const*,data::DungeonEntrySatisfiedConditionType &)::m, (const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::end(&data::enumStrToVal(char const*,data::DungeonEntrySatisfiedConditionType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
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

// Line 70: range 0000000013A333B1-0000000013A333C7
const char *__cdecl data::getDescription(data::DungeonEntrySatisfiedConditionType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 75: range 0000000013A333C8-0000000013A3357D
bool __cdecl data::isValidDungeonEntrySatisfiedConditionType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidDungeonEntrySatisfiedConditionType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 81: range 0000000013A3357E-0000000013A336DF
bool __cdecl data::isValidDungeonEntrySatisfiedConditionTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType> *v5; // rcx
  const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidDungeonEntrySatisfiedConditionTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::end(v5);
  v6 = data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::find(v6, name);
  result = std::__detail::operator!=<std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType>,true> *)(v2 + 64));
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

// Line 86: range 0000000013A336E0-0000000013A33BA2
const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType> *__cdecl data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *i; // r14
  const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>::pair<char const(&)[29],data::DungeonEntrySatisfiedConditionType,true>(
      (std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *const)(v1 + 128),
      (const char (*)[29])"DUNGEON_ENTRY_CONDITION_NONE",
      (data::DungeonEntrySatisfiedConditionType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "DUNGEON_ENTRY_CONDITION_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>::pair<char const(&)[30],data::DungeonEntrySatisfiedConditionType,true>(
      (std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *const)(v1 + 168),
      (const char (*)[30])"DUNGEON_ENTRY_CONDITION_LEVEL",
      (data::DungeonEntrySatisfiedConditionType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "DUNGEON_ENTRY_CONDITION_LEVEL");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>::pair<char const(&)[30],data::DungeonEntrySatisfiedConditionType,true>(
      (std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *const)(v1 + 208),
      (const char (*)[30])"DUNGEON_ENTRY_CONDITION_QUEST",
      (data::DungeonEntrySatisfiedConditionType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>>::allocator((std::allocator<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::unordered_map(
      &data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::DungeonEntrySatisfiedConditionType>::~unordered_map,
      &data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>>::~allocator((std::allocator<std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *)(v1 + 248);
          i != (std::pair<const std::string,data::DungeonEntrySatisfiedConditionType> *)(v1 + 128);
          std::pair<std::string const,data::DungeonEntrySatisfiedConditionType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getDungeonEntrySatisfiedConditionTypeNameMap[abi:cxx11](void)::m;
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

// Line 97: range 0000000013A33BA3-0000000013A342A1
const std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >> *__cdecl data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[29])"DUNGEON_ENTRY_CONDITION_NONE");
    std::pair<data::DungeonEntrySatisfiedConditionType const,std::pair<std::string,std::string>>::pair<data::DungeonEntrySatisfiedConditionType,true>(
      (std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::DungeonEntrySatisfiedConditionType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[13])byte_1AC56BE0,
      (const char (*)[30])"DUNGEON_ENTRY_CONDITION_LEVEL");
    std::pair<data::DungeonEntrySatisfiedConditionType const,std::pair<std::string,std::string>>::pair<data::DungeonEntrySatisfiedConditionType,true>(
      (std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::DungeonEntrySatisfiedConditionType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[13])byte_1AC0DBE0,
      (const char (*)[30])"DUNGEON_ENTRY_CONDITION_QUEST");
    std::pair<data::DungeonEntrySatisfiedConditionType const,std::pair<std::string,std::string>>::pair<data::DungeonEntrySatisfiedConditionType,true>(
      (std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::DungeonEntrySatisfiedConditionType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::DungeonEntrySatisfiedConditionType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string>>::map(
      &data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::DungeonEntrySatisfiedConditionType> *)(v1 + 48),
      (const std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string>>::~map,
      &data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::DungeonEntrySatisfiedConditionType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::DungeonEntrySatisfiedConditionType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::DungeonEntrySatisfiedConditionType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getDungeonEntrySatisfiedConditionTypeEnumMap[abi:cxx11](void)::m;
};

// Line 108: range 0000000013A342A2-0000000013A34615
const char *__fastcall data::enumValToStr(data::DungunEntryType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::DungunEntryType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getDungunEntryTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::DungunEntryType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DungunEntryType,std::pair<std::string,std::string>>::find(map, (const std::map<data::DungunEntryType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::DungunEntryType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DungunEntryType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
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
    result = "INVALID_DungunEntryType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 120: range 0000000013A34616-0000000013A34BCE
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::DungunEntryType>,false,true>::pointer v10; // rax
  data::DungunEntryType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::DungunEntryType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getDungunEntryTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::DungunEntryType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DungunEntryType>::find(
                                                                                            m,
                                                                                            (const std::unordered_map<std::string,data::DungunEntryType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::DungunEntryType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::DungunEntryType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::DungunEntryType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungunEntryType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungunEntryType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::DungunEntryType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::DungunEntryType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
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

// Line 141: range 0000000013A34BCF-0000000013A35D7E
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  std::pair<const std::string,data::DungunEntryType> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::DungunEntryType>,false,true>::pointer v11; // rax
  data::DungunEntryType second; // ecx
  char v13; // dl
  unsigned int v14; // ebx
  char v17[1456]; // [rsp+20h] [rbp-5B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1408LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "27 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 8 6 it:168 384 8 9 <un"
                        "known> 416 8 5 s:140 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 640 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234556924;
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
  v4[536862760] = -202116109;
  v4[536862761] = -202116109;
  v4[536862762] = -202116109;
  v4[536862763] = -202116109;
  *(_QWORD *)(v2 + 416) = s;
  if ( *(_QWORD *)(v2 + 416) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::DungunEntryType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::DungunEntryType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[19],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 640),
        (const char (*)[19])byte_1AC56F20,
        (data::DungunEntryType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AC56F20);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[19],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 680),
        (const char (*)[19])byte_1AC56F60,
        (data::DungunEntryType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC56F60);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[19],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 720),
        (const char (*)[19])byte_1AC56FA0,
        (data::DungunEntryType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC56FA0);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[10],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 760),
        (const char (*)[10])byte_1AC516A0,
        (data::DungunEntryType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AC516A0);
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[7],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 800),
        (const char (*)[7])byte_1AC32FA0,
        (data::DungunEntryType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1AC32FA0);
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[7],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 840),
        (const char (*)[7])byte_1AC56FE0,
        (data::DungunEntryType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1AC56FE0);
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[7],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 880),
        (const char (*)[7])byte_1ABFA8A0,
        (data::DungunEntryType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1ABFA8A0);
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[7],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 920),
        (const char (*)[7])byte_1AC57020,
        (data::DungunEntryType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1AC57020);
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[13],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 960),
        (const char (*)[13])byte_1AC57060,
        (data::DungunEntryType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1AC57060);
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[10],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 1000),
        (const char (*)[10])byte_1AC570A0,
        (data::DungunEntryType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1AC570A0);
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[25],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 1040),
        (const char (*)[25])byte_1AC570E0,
        (data::DungunEntryType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, byte_1AC570E0);
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[28],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 1080),
        (const char (*)[28])byte_1AC57120,
        (data::DungunEntryType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, byte_1AC57120);
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[13],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 1120),
        (const char (*)[13])byte_1AC57160,
        (data::DungunEntryType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, byte_1AC57160);
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[13],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 1160),
        (const char (*)[13])byte_1AC571A0,
        (data::DungunEntryType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, byte_1AC571A0);
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[13],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 1200),
        (const char (*)[13])byte_1AC571E0,
        (data::DungunEntryType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, byte_1AC571E0);
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[13],data::DungunEntryType,true>(
        (std::pair<const std::string,data::DungunEntryType> *const)(v2 + 1240),
        (const char (*)[13])byte_1AC57220,
        (data::DungunEntryType *)(v2 + 336));
      std::allocator<std::pair<std::string const,data::DungunEntryType>>::allocator((std::allocator<std::pair<const std::string,data::DungunEntryType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::DungunEntryType>::unordered_map(
        &data::enumStrToVal(char const*,data::DungunEntryType &)::m,
        (std::initializer_list<std::pair<const std::string,data::DungunEntryType> >)__PAIR128__(16LL, v2 + 640),
        0LL,
        (const std::unordered_map<std::string,data::DungunEntryType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::DungunEntryType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::DungunEntryType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::DungunEntryType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::DungunEntryType>::~unordered_map,
        &data::enumStrToVal(char const*,data::DungunEntryType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::DungunEntryType>>::~allocator((std::allocator<std::pair<const std::string,data::DungunEntryType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::DungunEntryType> *)(v2 + 1280);
            i != (std::pair<const std::string,data::DungunEntryType> *)(v2 + 640);
            std::pair<std::string const,data::DungunEntryType>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 640, 640LL);
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
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v7 = *(const char **)(v2 + 416);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 512),
      v7,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, v7);
    *(std::unordered_map<std::string,data::DungunEntryType>::iterator *)(v2 + 352) = std::unordered_map<std::string,data::DungunEntryType>::find(
                                                                                       &data::enumStrToVal(char const*,data::DungunEntryType &)::m,
                                                                                       (const std::unordered_map<std::string,data::DungunEntryType>::key_type *)(v2 + 512));
    std::string::~string((void *)(v2 + 512));
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 384, v2 + 512);
    *(std::unordered_map<std::string,data::DungunEntryType>::iterator *)(v2 + 384) = std::unordered_map<std::string,data::DungunEntryType>::end(&data::enumStrToVal(char const*,data::DungunEntryType &)::m);
    v8 = (char *)(v2 + 384);
    v9 = std::__detail::operator==<std::pair<std::string const,data::DungunEntryType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungunEntryType>,true> *)(v2 + 352),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungunEntryType>,true> *)(v2 + 384));
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
        "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
        "enumStrToVal",
        171);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 576),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 416));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
      v5 = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::DungunEntryType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::DungunEntryType>,false,true> *const)(v2 + 352));
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
      "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862741) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450956 - (((_DWORD)v4 + 2147450964) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1408LL, v17);
  }
  return v14;
};

// Line 180: range 0000000013A35D7F-0000000013A35D95
const char *__cdecl data::getDescription(data::DungunEntryType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 185: range 0000000013A35D96-0000000013A35F4B
bool __cdecl data::isValidDungunEntryType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::DungunEntryType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::DungunEntryType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:186 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidDungunEntryType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getDungunEntryTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::DungunEntryType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DungunEntryType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getDungunEntryTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::DungunEntryType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DungunEntryType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::DungunEntryType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 191: range 0000000013A35F4C-0000000013A360AD
bool __cdecl data::isValidDungunEntryTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::DungunEntryType> *v5; // rcx
  const std::unordered_map<std::string,data::DungunEntryType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidDungunEntryTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getDungunEntryTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::DungunEntryType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DungunEntryType>::end(v5);
  v6 = data::getDungunEntryTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::DungunEntryType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::DungunEntryType>::find(
                                                                                          v6,
                                                                                          name);
  result = std::__detail::operator!=<std::pair<std::string const,data::DungunEntryType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungunEntryType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DungunEntryType>,true> *)(v2 + 64));
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

// Line 196: range 0000000013A360AE-0000000013A36C6B
const std::unordered_map<std::string,data::DungunEntryType> *__cdecl data::getDungunEntryTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::DungunEntryType> *i; // r14
  char v6[1232]; // [rsp+10h] [rbp-4D0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1184LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "21 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 680 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getDungunEntryTypeNameMap[abi:cxx11];
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
  v3[536862731] = 61956;
  v3[536862752] = -218103808;
  v3[536862753] = -202116109;
  v3[536862754] = -202116109;
  v3[536862755] = -202116109;
  v3[536862756] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDungunEntryTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDungunEntryTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[23],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 368),
      (const char (*)[23])"DUNGEN_ENTRY_TYPE_NONE",
      (data::DungunEntryType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "DUNGEN_ENTRY_TYPE_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[29],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 408),
      (const char (*)[29])"DUNGEN_ENTRY_TYPE_AVATAR_EXP",
      (data::DungunEntryType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "DUNGEN_ENTRY_TYPE_AVATAR_EXP");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[33],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 448),
      (const char (*)[33])"DUNGEN_ENTRY_TYPE_WEAPON_PROMOTE",
      (data::DungunEntryType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "DUNGEN_ENTRY_TYPE_WEAPON_PROMOTE");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[32],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 488),
      (const char (*)[32])"DUNGEN_ENTRY_TYPE_AVATAR_TALENT",
      (data::DungunEntryType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "DUNGEN_ENTRY_TYPE_AVATAR_TALENT");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[28],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 528),
      (const char (*)[28])"DUNGEN_ENTRY_TYPE_RELIQUARY",
      (data::DungunEntryType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "DUNGEN_ENTRY_TYPE_RELIQUARY");
    *(_DWORD *)(v1 + 176) = 5;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[24],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 568),
      (const char (*)[24])"DUNGEN_ENTRY_TYPE_SCOIN",
      (data::DungunEntryType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "DUNGEN_ENTRY_TYPE_SCOIN");
    *(_DWORD *)(v1 + 192) = 6;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[28],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 608),
      (const char (*)[28])"DUNGEON_ENTRY_TYPE_OBSCURAE",
      (data::DungunEntryType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "DUNGEON_ENTRY_TYPE_OBSCURAE");
    *(_DWORD *)(v1 + 208) = 7;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[26],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 648),
      (const char (*)[26])"DUNGEON_ENTRY_TYPE_NORMAL",
      (data::DungunEntryType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "DUNGEON_ENTRY_TYPE_NORMAL");
    *(_DWORD *)(v1 + 224) = 8;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[25],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 688),
      (const char (*)[25])"DUNGEON_ENTRY_TYPE_TRIAL",
      (data::DungunEntryType *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "DUNGEON_ENTRY_TYPE_TRIAL");
    *(_DWORD *)(v1 + 240) = 9;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[26],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 728),
      (const char (*)[26])"DUNGEON_ENTRY_TYPE_EFFIGY",
      (data::DungunEntryType *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "DUNGEON_ENTRY_TYPE_EFFIGY");
    *(_DWORD *)(v1 + 256) = 10;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[30],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 768),
      (const char (*)[30])"DUNGEON_ENTRY_TYPE_FLEUR_FAIR",
      (data::DungunEntryType *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "DUNGEON_ENTRY_TYPE_FLEUR_FAIR");
    *(_DWORD *)(v1 + 272) = 11;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[40],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 808),
      (const char (*)[40])"DUNGEON_ENTRY_TYPE_CHANNELLER_SLAB_LOOP",
      (data::DungunEntryType *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "DUNGEON_ENTRY_TYPE_CHANNELLER_SLAB_LOOP");
    *(_DWORD *)(v1 + 288) = 12;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[43],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 848),
      (const char (*)[43])"DUNGEON_ENTRY_TYPE_CHANNELLER_SLAB_ONE_OFF",
      (data::DungunEntryType *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "DUNGEON_ENTRY_TYPE_CHANNELLER_SLAB_ONE_OFF");
    *(_DWORD *)(v1 + 304) = 13;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[30],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 888),
      (const char (*)[30])"DUNGEON_ENTRY_TYPE_BLITZ_RUSH",
      (data::DungunEntryType *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "DUNGEON_ENTRY_TYPE_BLITZ_RUSH");
    *(_DWORD *)(v1 + 320) = 14;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[24],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 928),
      (const char (*)[24])"DUNGEON_ENTRY_TYPE_SUMO",
      (data::DungunEntryType *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "DUNGEON_ENTRY_TYPE_SUMO");
    *(_DWORD *)(v1 + 336) = 15;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[28],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 968),
      (const char (*)[28])"DUNGEON_ENTRY_TYPE_ACTIVITY",
      (data::DungunEntryType *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, "DUNGEON_ENTRY_TYPE_ACTIVITY");
    *(_DWORD *)(v1 + 352) = 16;
    std::pair<std::string const,data::DungunEntryType>::pair<char const(&)[25],data::DungunEntryType,true>(
      (std::pair<const std::string,data::DungunEntryType> *const)(v1 + 1008),
      (const char (*)[25])"DUNGEON_ENTRY_TYPE_HACHI",
      (data::DungunEntryType *)(v1 + 352));
    std::allocator<std::pair<std::string const,data::DungunEntryType>>::allocator((std::allocator<std::pair<const std::string,data::DungunEntryType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::DungunEntryType>::unordered_map(
      &data::getDungunEntryTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::DungunEntryType> >)__PAIR128__(17LL, v1 + 368),
      0LL,
      (const std::unordered_map<std::string,data::DungunEntryType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::DungunEntryType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::DungunEntryType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getDungunEntryTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::DungunEntryType>::~unordered_map,
      &data::getDungunEntryTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::DungunEntryType>>::~allocator((std::allocator<std::pair<const std::string,data::DungunEntryType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::DungunEntryType> *)(v1 + 1048);
          i != (std::pair<const std::string,data::DungunEntryType> *)(v1 + 368);
          std::pair<std::string const,data::DungunEntryType>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF808C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 148) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1184LL, v6);
  }
  return &data::getDungunEntryTypeNameMap[abi:cxx11](void)::m;
};

// Line 221: range 0000000013A36C6C-0000000013A38395
const std::map<data::DungunEntryType,std::pair<std::string,std::string >> *__cdecl data::getDungunEntryTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *i; // r14
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
  _DWORD *v20; // rax
  char v22[3376]; // [rsp+10h] [rbp-D30h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(3328LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "37 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 64 9 <unknown> 432 64 9 <unknown> 528 64"
                        " 9 <unknown> 624 64 9 <unknown> 720 64 9 <unknown> 816 64 9 <unknown> 912 64 9 <unknown> 1008 64"
                        " 9 <unknown> 1104 64 9 <unknown> 1200 64 9 <unknown> 1296 64 9 <unknown> 1392 64 9 <unknown> 148"
                        "8 64 9 <unknown> 1584 64 9 <unknown> 1680 64 9 <unknown> 1776 64 9 <unknown> 1872 64 9 <unknown>"
                        " 1968 1224 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getDungunEntryTypeEnumMap[abi:cxx11];
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
  v3[536862730] = 61956;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862735] = -219021312;
  v3[536862736] = 62194;
  v3[536862738] = -219021312;
  v3[536862739] = 62194;
  v3[536862741] = -219021312;
  v3[536862742] = 62194;
  v3[536862744] = -219021312;
  v3[536862745] = 62194;
  v3[536862747] = -219021312;
  v3[536862748] = 62194;
  v3[536862750] = -219021312;
  v3[536862751] = 62194;
  v3[536862753] = -219021312;
  v3[536862754] = 62194;
  v3[536862756] = -219021312;
  v3[536862757] = 62194;
  v3[536862759] = -219021312;
  v3[536862760] = 62194;
  v3[536862762] = -219021312;
  v3[536862763] = 62194;
  v3[536862765] = -219021312;
  v3[536862766] = 62194;
  v3[536862768] = -219021312;
  v3[536862769] = 62194;
  v3[536862771] = -219021312;
  v3[536862772] = 62194;
  v3[536862774] = -219021312;
  v3[536862775] = 62194;
  v3[536862777] = -219021312;
  v3[536862778] = 62194;
  v3[536862780] = -219021312;
  v3[536862781] = 62194;
  v3[536862819] = -218103808;
  v3[536862820] = -202116109;
  v3[536862821] = -202116109;
  v3[536862822] = -202116109;
  v3[536862823] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDungunEntryTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDungunEntryTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[23])"DUNGEN_ENTRY_TYPE_NONE");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 1968),
      (data::DungunEntryType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[19])byte_1AC56F20,
      (const char (*)[29])"DUNGEN_ENTRY_TYPE_AVATAR_EXP");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2040),
      (data::DungunEntryType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[19])byte_1AC56F60,
      (const char (*)[33])"DUNGEN_ENTRY_TYPE_WEAPON_PROMOTE");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2112),
      (data::DungunEntryType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 624),
      (const char (*)[19])byte_1AC56FA0,
      (const char (*)[32])"DUNGEN_ENTRY_TYPE_AVATAR_TALENT");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2184),
      (data::DungunEntryType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 624));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 720),
      (const char (*)[10])byte_1AC516A0,
      (const char (*)[28])"DUNGEN_ENTRY_TYPE_RELIQUARY");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2256),
      (data::DungunEntryType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 720));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 816),
      (const char (*)[7])byte_1AC32FA0,
      (const char (*)[24])"DUNGEN_ENTRY_TYPE_SCOIN");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2328),
      (data::DungunEntryType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 816));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 912),
      (const char (*)[7])byte_1AC56FE0,
      (const char (*)[28])"DUNGEON_ENTRY_TYPE_OBSCURAE");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2400),
      (data::DungunEntryType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 912));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1008),
      (const char (*)[7])byte_1ABFA8A0,
      (const char (*)[26])"DUNGEON_ENTRY_TYPE_NORMAL");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2472),
      (data::DungunEntryType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 1008));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1104),
      (const char (*)[7])byte_1AC57020,
      (const char (*)[25])"DUNGEON_ENTRY_TYPE_TRIAL");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2544),
      (data::DungunEntryType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 1104));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1200),
      (const char (*)[13])byte_1AC57060,
      (const char (*)[26])"DUNGEON_ENTRY_TYPE_EFFIGY");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2616),
      (data::DungunEntryType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1200));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 10;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1296),
      (const char (*)[10])byte_1AC570A0,
      (const char (*)[30])"DUNGEON_ENTRY_TYPE_FLEUR_FAIR");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2688),
      (data::DungunEntryType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1296));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 11;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1392),
      (const char (*)[25])byte_1AC570E0,
      (const char (*)[40])"DUNGEON_ENTRY_TYPE_CHANNELLER_SLAB_LOOP");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2760),
      (data::DungunEntryType *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 1392));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 12;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[43],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1488),
      (const char (*)[28])byte_1AC57120,
      (const char (*)[43])"DUNGEON_ENTRY_TYPE_CHANNELLER_SLAB_ONE_OFF");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2832),
      (data::DungunEntryType *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 1488));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 13;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1584),
      (const char (*)[13])byte_1AC57160,
      (const char (*)[30])"DUNGEON_ENTRY_TYPE_BLITZ_RUSH");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2904),
      (data::DungunEntryType *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 1584));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 14;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1680),
      (const char (*)[13])byte_1AC571A0,
      (const char (*)[24])"DUNGEON_ENTRY_TYPE_SUMO");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 2976),
      (data::DungunEntryType *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 1680));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 15;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1776),
      (const char (*)[13])byte_1AC571E0,
      (const char (*)[28])"DUNGEON_ENTRY_TYPE_ACTIVITY");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 3048),
      (data::DungunEntryType *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 1776));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, v1 + 304);
    *(_DWORD *)(v1 + 320) = 16;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1872),
      (const char (*)[13])byte_1AC57220,
      (const char (*)[25])"DUNGEON_ENTRY_TYPE_HACHI");
    std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::pair<data::DungunEntryType,true>(
      (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *const)(v1 + 3120),
      (data::DungunEntryType *)(v1 + 320),
      (const std::pair<std::string,std::string > *)(v1 + 1872));
    std::allocator<std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::DungunEntryType,std::pair<std::string,std::string>>::map(
      &data::getDungunEntryTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > >)__PAIR128__(17LL, v1 + 1968),
      (const std::less<data::DungunEntryType> *)(v1 + 32),
      (const std::map<data::DungunEntryType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getDungunEntryTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::DungunEntryType,std::pair<std::string,std::string>>::~map,
      &data::getDungunEntryTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *)(v1 + 3192);
          i != (std::pair<const data::DungunEntryType,std::pair<std::string,std::string > > *)(v1 + 1968);
          std::pair<data::DungunEntryType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 1968, 1224LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1872));
    v5 = (_DWORD *)(((v1 + 1872) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1776));
    v6 = (_DWORD *)(((v1 + 1776) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1680));
    v7 = (_DWORD *)(((v1 + 1680) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1584));
    v8 = (_DWORD *)(((v1 + 1584) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1488));
    v9 = (_DWORD *)(((v1 + 1488) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1392));
    v10 = (_DWORD *)(((v1 + 1392) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1296));
    v11 = (_DWORD *)(((v1 + 1296) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1200));
    v12 = (_DWORD *)(((v1 + 1200) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1104));
    v13 = (_DWORD *)(((v1 + 1104) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1008));
    v14 = (_DWORD *)(((v1 + 1008) >> 3) + 2147450880);
    *v14 = -117901064;
    v14[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 912));
    v15 = (_DWORD *)(((v1 + 912) >> 3) + 2147450880);
    *v15 = -117901064;
    v15[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 816));
    v16 = (_DWORD *)(((v1 + 816) >> 3) + 2147450880);
    *v16 = -117901064;
    v16[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 720));
    v17 = (_DWORD *)(((v1 + 720) >> 3) + 2147450880);
    *v17 = -117901064;
    v17[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 624));
    v18 = (_DWORD *)(((v1 + 624) >> 3) + 2147450880);
    *v18 = -117901064;
    v18[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 528));
    v19 = (_DWORD *)(((v1 + 528) >> 3) + 2147450880);
    *v19 = -117901064;
    v19[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 432));
    v20 = (_DWORD *)(((v1 + 432) >> 3) + 2147450880);
    *v20 = -117901064;
    v20[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 336));
  }
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8198) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 416) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 3328LL, v22);
  }
  return &data::getDungunEntryTypeEnumMap[abi:cxx11](void)::m;
};

// Line 247: range 0000000013A38396-0000000013A38BB8
int32_t __cdecl data::DungeonEntrySatisfiedCond::init(
        data::DungeonEntrySatisfiedCond *const this,
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
  char v12[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DungeonEntrySatisfiedCond::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    &byte_1ABFE3C0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToEnum<data::DungeonEntrySatisfiedConditionType>(
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
      "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
      "init",
      250);
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
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      &byte_1AC4EAA0,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->param1) != 0;
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
        "init",
        255);
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
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        &byte_1AC4EB20,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->param2) != 0;
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
          "init",
          260);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v11, (const char (*)[28])byte_1AC4EB60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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

// Line 268: range 0000000013A38BBA-0000000013A3B91A
int32_t __cdecl data::DungeonEntryExcelConfig::init(
        data::DungeonEntryExcelConfig *const this,
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
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  bool v14; // r15
  unsigned __int64 v15; // rax
  char *j; // r14
  _DWORD *v17; // rax
  common::milog::MiLogStream *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  bool v23; // r14
  data::DungeonEntrySatisfiedConditionType *p_type; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  bool v28; // r14
  unsigned int *p_param1; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  bool v33; // r14
  unsigned int *p_param2; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  bool v38; // r14
  common::milog::MiLogStream *v39; // rax
  bool v40; // r14
  common::milog::MiLogStream *v41; // rax
  bool t; // [rsp+0h] [rbp-B60h]
  bool ta; // [rsp+0h] [rbp-B60h]
  bool tb; // [rsp+0h] [rbp-B60h]
  bool tc; // [rsp+0h] [rbp-B60h]
  bool td; // [rsp+0h] [rbp-B60h]
  bool te; // [rsp+0h] [rbp-B60h]
  uint32_t array_count; // [rsp+28h] [rbp-B38h]
  uint32_t i; // [rsp+2Ch] [rbp-B34h]
  char v51[2864]; // [rsp+30h] [rbp-B30h] BYREF

  v2 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2816LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "53 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 24 9 <unknown> 416 32 11 val_str:271 48"
                        "0 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800"
                        " 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 112"
                        "0 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown>"
                        " 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unkn"
                        "own> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <"
                        "unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32"
                        " 9 <unknown> 2400 64 9 <unknown> 2496 256 12 col_name:269";
  *(_QWORD *)(v2 + 16) = data::DungeonEntryExcelConfig::init;
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
  v4[536862731] = -234881024;
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
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -218959118;
  v4[536862772] = -218959118;
  v4[536862774] = -218959118;
  v4[536862776] = -218959118;
  v4[536862778] = -218959118;
  v4[536862780] = -218959118;
  v4[536862782] = -218959118;
  v4[536862784] = -218959118;
  v4[536862786] = -218959118;
  v4[536862788] = -218959118;
  v4[536862790] = -218959118;
  v4[536862792] = -218959118;
  v4[536862794] = -218959118;
  v4[536862797] = -218959118;
  v4[536862806] = -202116109;
  v4[536862807] = -202116109;
  std::string::basic_string(v2 + 416);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 480),
    &byte_1AC27960,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 480), &this->id) != 0;
  std::string::~string((void *)(v2 + 480));
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
      "init",
      274);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 544),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v5, (const char (*)[27])byte_1AC279A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 608),
      &byte_1AC57F80,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 608), &this->scene_id) != 0;
    std::string::~string((void *)(v2 + 608));
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
        "init",
        279);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 672),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1AC57FC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 736),
        &byte_1AC58000,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(
             row,
             (const std::string *)(v2 + 736),
             &this->dungeon_entry_id) != 0;
      std::string::~string((void *)(v2 + 736));
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
      {
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
          "init",
          284);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 800),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v8, (const char (*)[35])byte_1AC58040);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 864),
          &byte_1ABFE3C0,
          (const std::allocator<char> *)(v2 + 96));
        tc = common::tools::TxtFile::Row::assignToEnum<data::DungunEntryType>(
               row,
               (const std::string *)(v2 + 864),
               &this->type) != 0;
        std::string::~string((void *)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
        {
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 928, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 928),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
            "init",
            289);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 928),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1ABFE400);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 992),
            &byte_1AC580A0,
            (const std::allocator<char> *)(v2 + 112));
          td = common::tools::TxtFile::Row::assignToNum<bool>(
                 row,
                 (const std::string *)(v2 + 992),
                 &this->is_show_in_adv_handbook) != 0;
          std::string::~string((void *)(v2 + 992));
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( td )
          {
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1056, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1056),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
              "init",
              294);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1056),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v10, (const char (*)[48])byte_1AC580E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1120),
              &byte_1AC58140,
              (const std::allocator<char> *)(v2 + 128));
            te = common::tools::TxtFile::Row::assignToStr(
                   row,
                   (const std::string *)(v2 + 1120),
                   (std::string *)(v2 + 416)) != 0;
            std::string::~string((void *)(v2 + 1120));
            *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( te )
            {
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1184, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1184),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
                "init",
                299);
              v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1184),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v11, (const char (*)[35])byte_1AC58180);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              v12 = ((v2 + 352) >> 3) + 2147450880;
              *(_WORD *)v12 = 0;
              *(_BYTE *)(v12 + 2) = 0;
              v13 = (_DWORD *)(((v2 + 2400) >> 3) + 2147450880);
              *v13 = 0;
              v13[1] = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 2400),
                ";",
                (const std::allocator<char> *)(v2 + 144));
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 160);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 2432),
                ",",
                (const std::allocator<char> *)(v2 + 160));
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
              std::vector<std::string>::vector(
                (std::vector<std::string> *const)(v2 + 352),
                (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 2400),
                (const std::vector<std::string>::allocator_type *)(v2 + 176));
              v14 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                      (const std::string *)(v2 + 416),
                      (const std::vector<std::string> *)(v2 + 352),
                      &this->cooldown_tips_dungeon_id,
                      1) != 0;
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 352));
              v15 = ((v2 + 352) >> 3) + 2147450880;
              *(_WORD *)v15 = -1800;
              *(_BYTE *)(v15 + 2) = -8;
              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              for ( j = (char *)(v2 + 2464); j != (char *)(v2 + 2400); std::string::~string(j) )
                j -= 32;
              v17 = (_DWORD *)(((v2 + 2400) >> 3) + 2147450880);
              *v17 = -117901064;
              v17[1] = -117901064;
              std::allocator<char>::~allocator(v2 + 160);
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( v14 )
              {
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1248, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1248),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
                  "init",
                  304);
                v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1248),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v18, (const char (*)[35])byte_1AC58180);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 192);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1312),
                  &byte_1AC581E0,
                  (const std::allocator<char> *)(v2 + 192));
                v19 = common::tools::TxtFile::Row::assignToNum<bool>(
                        row,
                        (const std::string *)(v2 + 1312),
                        &this->is_default_open) != 0;
                std::string::~string((void *)(v2 + 1312));
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 192);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                if ( v19 )
                {
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1376, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1376),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
                    "init",
                    309);
                  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1376),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v20,
                    (const char (*)[39])byte_1AC58220);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 208);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1440),
                    &byte_1AC58280,
                    (const std::allocator<char> *)(v2 + 208));
                  v21 = common::tools::TxtFile::Row::assignToEnum<data::LogicType>(
                          row,
                          (const std::string *)(v2 + 1440),
                          &this->cond_comb) != 0;
                  std::string::~string((void *)(v2 + 1440));
                  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 208);
                  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                  if ( v21 )
                  {
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1504, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1504),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
                      "init",
                      314);
                    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1504),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v22,
                      (const char (*)[33])byte_1AC582C0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    std::vector<data::DungeonEntrySatisfiedCond>::resize(&this->satisfied_cond, 2uLL);
                    array_count = 0;
                    for ( i = 0; i <= 1; ++i )
                    {
                      snprintf((char *)(v2 + 2496), 0x100uLL, asc_1AC58320, i + 1);
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 224);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1568),
                        (const char *)(v2 + 2496),
                        (const std::allocator<char> *)(v2 + 224));
                      v23 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1568));
                      std::string::~string((void *)(v2 + 1568));
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 224);
                      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                      if ( !v23 )
                      {
                        p_type = &std::vector<data::DungeonEntrySatisfiedCond>::operator[](&this->satisfied_cond, i)->type;
                        *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 240);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1632),
                          (const char *)(v2 + 2496),
                          (const std::allocator<char> *)(v2 + 240));
                        LOBYTE(p_type) = common::tools::TxtFile::Row::assignToEnum<data::DungeonEntrySatisfiedConditionType>(
                                           row,
                                           (const std::string *)(v2 + 1632),
                                           p_type) != 0;
                        std::string::~string((void *)(v2 + 1632));
                        *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 240);
                        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                        if ( (_BYTE)p_type )
                        {
                          *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1696, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1696),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
                            "init",
                            326);
                          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1696),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                  v25,
                                  (const char (*)[14])byte_1ABFD420);
                          v27 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                  v26,
                                  (const char (*)[256])(v2 + 2496));
                          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v27,
                            (const char (*)[7])byte_1ABFD460);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                          *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                          goto LABEL_71;
                        }
                        snprintf((char *)(v2 + 2496), 0x100uLL, asc_1AC58360, i + 1);
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 256);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1760),
                          (const char *)(v2 + 2496),
                          (const std::allocator<char> *)(v2 + 256));
                        v28 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1760));
                        std::string::~string((void *)(v2 + 1760));
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 256);
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                        if ( !v28 )
                        {
                          p_param1 = &std::vector<data::DungeonEntrySatisfiedCond>::operator[](&this->satisfied_cond, i)->param1;
                          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 272);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1824),
                            (const char *)(v2 + 2496),
                            (const std::allocator<char> *)(v2 + 272));
                          LOBYTE(p_param1) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                               row,
                                               (const std::string *)(v2 + 1824),
                                               p_param1) != 0;
                          std::string::~string((void *)(v2 + 1824));
                          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 272);
                          *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                          if ( (_BYTE)p_param1 )
                          {
                            *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 1888) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 1919) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1919) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 1888, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 1888),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
                              "init",
                              334);
                            v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 1888),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                    v30,
                                    (const char (*)[14])byte_1ABFD420);
                            v32 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                    v31,
                                    (const char (*)[256])(v2 + 2496));
                            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                              v32,
                              (const char (*)[7])byte_1ABFD460);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                            *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                            goto LABEL_71;
                          }
                          snprintf((char *)(v2 + 2496), 0x100uLL, asc_1AC583A0, i + 1);
                          *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 288);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1952),
                            (const char *)(v2 + 2496),
                            (const std::allocator<char> *)(v2 + 288));
                          v33 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1952));
                          std::string::~string((void *)(v2 + 1952));
                          *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 288);
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                          if ( !v33 )
                          {
                            p_param2 = &std::vector<data::DungeonEntrySatisfiedCond>::operator[](
                                          &this->satisfied_cond,
                                          i)->param2;
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 304);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2016),
                              (const char *)(v2 + 2496),
                              (const std::allocator<char> *)(v2 + 304));
                            LOBYTE(p_param2) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                 row,
                                                 (const std::string *)(v2 + 2016),
                                                 p_param2) != 0;
                            std::string::~string((void *)(v2 + 2016));
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 304);
                            *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                            if ( (_BYTE)p_param2 )
                            {
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2080) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2080, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2080),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
                                "init",
                                342);
                              v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2080),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                      v35,
                                      (const char (*)[14])byte_1ABFD420);
                              v37 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                      v36,
                                      (const char (*)[256])(v2 + 2496));
                              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                v37,
                                (const char (*)[7])byte_1ABFD460);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                              v6 = -1;
                              goto LABEL_71;
                            }
                            array_count = i + 1;
                          }
                        }
                      }
                    }
                    std::vector<data::DungeonEntrySatisfiedCond>::resize(&this->satisfied_cond, array_count);
                    *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 320);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2144),
                      &byte_1AC583E0,
                      (const std::allocator<char> *)(v2 + 320));
                    v38 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 2144),
                            &this->system_open_ui_id) != 0;
                    std::string::~string((void *)(v2 + 2144));
                    *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 320);
                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                    if ( v38 )
                    {
                      *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 2208) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 2208, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 2208),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
                        "init",
                        351);
                      v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2208),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        v39,
                        (const char (*)[41])byte_1AC58420);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                      *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 336);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2272),
                        &byte_1AC19520,
                        (const std::allocator<char> *)(v2 + 336));
                      v40 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 2272),
                              &this->reward_data_id) != 0;
                      std::string::~string((void *)(v2 + 2272));
                      *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 336);
                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                      if ( v40 )
                      {
                        *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2336) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2336, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2336),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
                          "init",
                          356);
                        v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2336),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                          v41,
                          (const char (*)[29])byte_1AC19560);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                        *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
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
LABEL_71:
  std::string::~string((void *)(v2 + 416));
  if ( v51 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8130) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862736) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450936 - (((_DWORD)v4 + 2147450944) & 0xFFFFFFF8) + 256) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8158) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2816LL, v51);
  }
  return v6;
};

// Line 365: range 0000000013A3B91C-0000000013A3C94B
int32_t __cdecl data::DungeonEntryDataConfigMgrBase::loadDungeonEntryExcelConfig(
        data::DungeonEntryDataConfigMgrBase *const this,
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
  data::DungeonEntryExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::DungeonEntryExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  _DWORD *v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:380 64 4 9 <unknown> 80 32 9 paths:366 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 96 8 d"
                        "ata:383 656 376 24 debug_message_stream:391 1104 32880 12 txt_file:374";
  *(_QWORD *)(v3 + 16) = data::DungeonEntryDataConfigMgrBase::loadDungeonEntryExcelConfig;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/DungeonEntryData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1104, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1104), v7) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 47) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
        "loadDungeonEntryExcelConfig",
        377);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1104));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1104), *(_DWORD *)(v3 + 48));
        v13 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        v13[2] = 0;
        data::DungeonEntryExcelConfig::DungeonEntryExcelConfig((data::DungeonEntryExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::DungeonEntryExcelConfig::init((data::DungeonEntryExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1ABFF160);
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
              "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
              "loadDungeonEntryExcelConfig",
              393);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 656);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 656);
            __asan_poison_stack_memory(v3 + 656, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::DungeonEntryExcelConfig &>((data::DungeonEntryExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::emplace<unsigned int &,data::DungeonEntryExcelConfig>(
                    &this->dungeon_entry_excel_config_map,
                    (unsigned int *)(v3 + 536),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 47) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
                "loadDungeonEntryExcelConfig",
                398);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1ABFF260);
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
            && (char)((v3 - 64 + 111) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
            "loadDungeonEntryExcelConfig",
            386);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::DungeonEntryExcelConfig::~DungeonEntryExcelConfig((data::DungeonEntryExcelConfig *const)(v3 + 528));
        v30 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v30 = -117901064;
        v30[1] = -117901064;
        v30[2] = -117901064;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    __asan_poison_stack_memory(v3 + 1104, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4280) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34240LL, v37);
  }
  return v2;
};

// Line 407: range 0000000013A3C94C-0000000013A3CB2F
int32_t __cdecl data::DungeonEntryDataConfigMgrBase::loadConfig(
        data::DungeonEntryDataConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DungeonEntryDataConfigMgrBase::loadConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( data::DungeonEntryDataConfigMgrBase::loadDungeonEntryExcelConfig(this, config) )
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
      "./src/txt_data_auto/DungeonEntryDataConfig.gen.cpp",
      "loadConfig",
      410);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v5,
      (const char (*)[35])"loadDungeonEntryExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 417: range 0000000013A3CB30-0000000013A3CB42
int32_t __cdecl data::DungeonEntryDataConfigMgrBase::rewriteConfig(
        data::DungeonEntryDataConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 422: range 0000000013A3CB44-0000000013A3CB56
int32_t __cdecl data::DungeonEntryDataConfigMgrBase::finalConfig(
        data::DungeonEntryDataConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 427: range 0000000013A3CB58-0000000013A3CD13
data::DungeonEntryExcelConfig *__fastcall data::DungeonEntryDataConfigMgrBase::findDungeonEntryExcelConfig(
        data::DungeonEntryDataConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DungeonEntryExcelConfigMap *p_dungeon_entry_excel_config_map; // rdx
  data::DungeonEntryExcelConfigMap *v6; // rdx
  bool v7; // al
  data::DungeonEntryExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:426 64 8 8 iter:428 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DungeonEntryDataConfigMgrBase::findDungeonEntryExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_dungeon_entry_excel_config_map = &this->dungeon_entry_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::find(
                                                                                             p_dungeon_entry_excel_config_map,
                                                                                             (const std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->dungeon_entry_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 440: range 0000000013A3CD14-0000000013A3CECF
const data::DungeonEntryExcelConfig *__fastcall data::DungeonEntryDataConfigMgrBase::findDungeonEntryExcelConfig(
        const data::DungeonEntryDataConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DungeonEntryExcelConfigMap *p_dungeon_entry_excel_config_map; // rdx
  data::DungeonEntryExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::DungeonEntryExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:439 64 8 8 iter:441 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DungeonEntryDataConfigMgrBase::findDungeonEntryExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_dungeon_entry_excel_config_map = &this->dungeon_entry_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::find(
                                                                                                   p_dungeon_entry_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->dungeon_entry_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false> *const)(v2 + 64))->second;
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

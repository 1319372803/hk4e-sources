// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/MonsterExcelConfig.gen.cpp

// Line 12: range 0000000014573F1E-0000000014574291
const char *__fastcall data::enumValToStr(data::MonsterSecurityLevel e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getMonsterSecurityLevelEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string>>::find(map, (const std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
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
    result = "INVALID_MonsterSecurityLevel";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::MonsterSecurityLevel const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 0000000014574292-000000001457484A
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::MonsterSecurityLevel>,false,true>::pointer v10; // rax
  data::MonsterSecurityLevel second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::MonsterSecurityLevel> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getMonsterSecurityLevelNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::MonsterSecurityLevel>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MonsterSecurityLevel>::find(
                                                                                                 m,
                                                                                                 (const std::unordered_map<std::string,data::MonsterSecurityLevel>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::MonsterSecurityLevel>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::MonsterSecurityLevel>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::MonsterSecurityLevel>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterSecurityLevel>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterSecurityLevel>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::MonsterSecurityLevel>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::MonsterSecurityLevel>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
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

// Line 45: range 000000001457484B-00000000145752A6
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::MonsterSecurityLevel> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::MonsterSecurityLevel>,false,true>::pointer v12; // rax
  data::MonsterSecurityLevel second; // ecx
  char v14; // dl
  char v16[656]; // [rsp+20h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 8 5 it:59 192 8 9 <unknown> 224 8 4 s:44 256 32 9 <unknown> 320"
                        " 32 9 <unknown> 384 32 9 <unknown> 448 120 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556927;
  v4[536862724] = -234556924;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862737] = -218103808;
  v4[536862738] = -202116109;
  *(_QWORD *)(v2 + 224) = s;
  if ( *(_QWORD *)(v2 + 224) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::MonsterSecurityLevel &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::MonsterSecurityLevel &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::MonsterSecurityLevel>::pair<char const(&)[7],data::MonsterSecurityLevel,true>(
        (std::pair<const std::string,data::MonsterSecurityLevel> *const)(v2 + 448),
        (const char (*)[7])"NORMAL",
        (data::MonsterSecurityLevel *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "NORMAL");
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::MonsterSecurityLevel>::pair<char const(&)[6],data::MonsterSecurityLevel,true>(
        (std::pair<const std::string,data::MonsterSecurityLevel> *const)(v2 + 488),
        (const char (*)[6])"ELITE",
        (data::MonsterSecurityLevel *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "ELITE");
      *(_DWORD *)(v2 + 144) = 2;
      std::pair<std::string const,data::MonsterSecurityLevel>::pair<char const(&)[5],data::MonsterSecurityLevel,true>(
        (std::pair<const std::string,data::MonsterSecurityLevel> *const)(v2 + 528),
        (const char (*)[5])"BOSS",
        (data::MonsterSecurityLevel *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::MonsterSecurityLevel>>::allocator((std::allocator<std::pair<const std::string,data::MonsterSecurityLevel> > *const)(v2 + 80));
      std::unordered_map<std::string,data::MonsterSecurityLevel>::unordered_map(
        &data::enumStrToVal(char const*,data::MonsterSecurityLevel &)::m,
        (std::initializer_list<std::pair<const std::string,data::MonsterSecurityLevel> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::MonsterSecurityLevel>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::MonsterSecurityLevel>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::MonsterSecurityLevel>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::MonsterSecurityLevel &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::MonsterSecurityLevel>::~unordered_map,
        &data::enumStrToVal(char const*,data::MonsterSecurityLevel &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MonsterSecurityLevel>>::~allocator((std::allocator<std::pair<const std::string,data::MonsterSecurityLevel> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MonsterSecurityLevel> *)(v2 + 568);
            i != (std::pair<const std::string,data::MonsterSecurityLevel> *)(v2 + 448);
            std::pair<std::string const,data::MonsterSecurityLevel>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 448) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_WORD *)(v7 + 12) = -1800;
      *(_BYTE *)(v7 + 14) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    v8 = *(const char **)(v2 + 224);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 320),
      v8,
      (const std::allocator<char> *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v8);
    *(std::unordered_map<std::string,data::MonsterSecurityLevel>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::MonsterSecurityLevel>::find(
                                                                                            &data::enumStrToVal(char const*,data::MonsterSecurityLevel &)::m,
                                                                                            (const std::unordered_map<std::string,data::MonsterSecurityLevel>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::MonsterSecurityLevel>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::MonsterSecurityLevel>::end(&data::enumStrToVal(char const*,data::MonsterSecurityLevel &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::MonsterSecurityLevel>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterSecurityLevel>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterSecurityLevel>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "enumStrToVal",
        62);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::MonsterSecurityLevel>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::MonsterSecurityLevel>,false,true> *const)(v2 + 160));
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
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "enumStrToVal",
      48);
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

// Line 71: range 00000000145752A7-00000000145752BD
const char *__cdecl data::getDescription(data::MonsterSecurityLevel e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 76: range 00000000145752BE-0000000014575473
bool __cdecl data::isValidMonsterSecurityLevel(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:77 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidMonsterSecurityLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getMonsterSecurityLevelEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getMonsterSecurityLevelEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string>>::find(v6, (const std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 82: range 0000000014575474-00000000145755D5
bool __cdecl data::isValidMonsterSecurityLevelName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::MonsterSecurityLevel> *v5; // rcx
  const std::unordered_map<std::string,data::MonsterSecurityLevel> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidMonsterSecurityLevelName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getMonsterSecurityLevelNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::MonsterSecurityLevel>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MonsterSecurityLevel>::end(v5);
  v6 = data::getMonsterSecurityLevelNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::MonsterSecurityLevel>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::MonsterSecurityLevel>::find(
                                                                                               v6,
                                                                                               name);
  result = std::__detail::operator!=<std::pair<std::string const,data::MonsterSecurityLevel>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterSecurityLevel>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterSecurityLevel>,true> *)(v2 + 64));
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

// Line 87: range 00000000145755D6-0000000014575A98
const std::unordered_map<std::string,data::MonsterSecurityLevel> *__cdecl data::getMonsterSecurityLevelNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::MonsterSecurityLevel> *i; // r14
  const std::unordered_map<std::string,data::MonsterSecurityLevel> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getMonsterSecurityLevelNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getMonsterSecurityLevelNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMonsterSecurityLevelNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::MonsterSecurityLevel>::pair<char const(&)[7],data::MonsterSecurityLevel,true>(
      (std::pair<const std::string,data::MonsterSecurityLevel> *const)(v1 + 128),
      (const char (*)[7])"NORMAL",
      (data::MonsterSecurityLevel *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "NORMAL");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::MonsterSecurityLevel>::pair<char const(&)[6],data::MonsterSecurityLevel,true>(
      (std::pair<const std::string,data::MonsterSecurityLevel> *const)(v1 + 168),
      (const char (*)[6])"ELITE",
      (data::MonsterSecurityLevel *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ELITE");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::MonsterSecurityLevel>::pair<char const(&)[5],data::MonsterSecurityLevel,true>(
      (std::pair<const std::string,data::MonsterSecurityLevel> *const)(v1 + 208),
      (const char (*)[5])"BOSS",
      (data::MonsterSecurityLevel *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::MonsterSecurityLevel>>::allocator((std::allocator<std::pair<const std::string,data::MonsterSecurityLevel> > *const)(v1 + 64));
    std::unordered_map<std::string,data::MonsterSecurityLevel>::unordered_map(
      &data::getMonsterSecurityLevelNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::MonsterSecurityLevel> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::MonsterSecurityLevel>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::MonsterSecurityLevel>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::MonsterSecurityLevel>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getMonsterSecurityLevelNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::MonsterSecurityLevel>::~unordered_map,
      &data::getMonsterSecurityLevelNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::MonsterSecurityLevel>>::~allocator((std::allocator<std::pair<const std::string,data::MonsterSecurityLevel> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::MonsterSecurityLevel> *)(v1 + 248);
          i != (std::pair<const std::string,data::MonsterSecurityLevel> *)(v1 + 128);
          std::pair<std::string const,data::MonsterSecurityLevel>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getMonsterSecurityLevelNameMap[abi:cxx11](void)::m;
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

// Line 98: range 0000000014575A99-0000000014576197
const std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >> *__cdecl data::getMonsterSecurityLevelEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getMonsterSecurityLevelEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getMonsterSecurityLevelEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMonsterSecurityLevelEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[7],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[7])"NORMAL",
      (const char (*)[7])"NORMAL");
    std::pair<data::MonsterSecurityLevel const,std::pair<std::string,std::string>>::pair<data::MonsterSecurityLevel,true>(
      (std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::MonsterSecurityLevel *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[6],char const(&)[6],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[6])"ELITE",
      (const char (*)[6])"ELITE");
    std::pair<data::MonsterSecurityLevel const,std::pair<std::string,std::string>>::pair<data::MonsterSecurityLevel,true>(
      (std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::MonsterSecurityLevel *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[5],char const(&)[5],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[5])"BOSS",
      (const char (*)[5])"BOSS");
    std::pair<data::MonsterSecurityLevel const,std::pair<std::string,std::string>>::pair<data::MonsterSecurityLevel,true>(
      (std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::MonsterSecurityLevel *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::MonsterSecurityLevel const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string>>::map(
      &data::getMonsterSecurityLevelEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::MonsterSecurityLevel> *)(v1 + 48),
      (const std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getMonsterSecurityLevelEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::MonsterSecurityLevel,std::pair<std::string,std::string>>::~map,
      &data::getMonsterSecurityLevelEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::MonsterSecurityLevel const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::MonsterSecurityLevel,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::MonsterSecurityLevel const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getMonsterSecurityLevelEnumMap[abi:cxx11](void)::m;
};

// Line 109: range 0000000014576198-000000001457650B
const char *__fastcall data::enumValToStr(data::MonsterRarityType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::MonsterRarityType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:108 64 8 8 iter:111 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getMonsterRarityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::MonsterRarityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MonsterRarityType,std::pair<std::string,std::string>>::find(map, (const std::map<data::MonsterRarityType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::MonsterRarityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MonsterRarityType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "enumValToStr",
      114);
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
    result = "INVALID_MonsterRarityType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::MonsterRarityType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 121: range 000000001457650C-0000000014576AC4
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::MonsterRarityType>,false,true>::pointer v10; // rax
  data::MonsterRarityType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::MonsterRarityType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:130 96 8 9 <unknown> 128 8 5 s:120 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getMonsterRarityTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::MonsterRarityType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MonsterRarityType>::find(
                                                                                              m,
                                                                                              (const std::unordered_map<std::string,data::MonsterRarityType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::MonsterRarityType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::MonsterRarityType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::MonsterRarityType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterRarityType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterRarityType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "enumNameToVal",
        133);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::MonsterRarityType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::MonsterRarityType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "enumNameToVal",
      124);
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

// Line 142: range 0000000014576AC5-00000000145776A9
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::MonsterRarityType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::MonsterRarityType>,false,true>::pointer v12; // rax
  data::MonsterRarityType second; // ecx
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
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 6 it:158 208 8 9 <unknown>"
                        " 240 8 5 s:141 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 200 9 <unknown>";
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::MonsterRarityType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::MonsterRarityType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[7],data::MonsterRarityType,true>(
        (std::pair<const std::string,data::MonsterRarityType> *const)(v2 + 464),
        (const char (*)[7])byte_1ADA8880,
        (data::MonsterRarityType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1ADA8880);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[7],data::MonsterRarityType,true>(
        (std::pair<const std::string,data::MonsterRarityType> *const)(v2 + 504),
        (const char (*)[7])byte_1ADA88C0,
        (data::MonsterRarityType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ADA88C0);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[5],data::MonsterRarityType,true>(
        (std::pair<const std::string,data::MonsterRarityType> *const)(v2 + 544),
        (const char (*)[5])"BOSS",
        (data::MonsterRarityType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "BOSS");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[8],data::MonsterRarityType,true>(
        (std::pair<const std::string,data::MonsterRarityType> *const)(v2 + 584),
        (const char (*)[8])byte_1ADA8900,
        (data::MonsterRarityType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1ADA8900);
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[10],data::MonsterRarityType,true>(
        (std::pair<const std::string,data::MonsterRarityType> *const)(v2 + 624),
        (const char (*)[10])byte_1ADA8940,
        (data::MonsterRarityType *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::MonsterRarityType>>::allocator((std::allocator<std::pair<const std::string,data::MonsterRarityType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::MonsterRarityType>::unordered_map(
        &data::enumStrToVal(char const*,data::MonsterRarityType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MonsterRarityType> >)__PAIR128__(5LL, v2 + 464),
        0LL,
        (const std::unordered_map<std::string,data::MonsterRarityType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::MonsterRarityType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::MonsterRarityType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::MonsterRarityType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::MonsterRarityType>::~unordered_map,
        &data::enumStrToVal(char const*,data::MonsterRarityType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MonsterRarityType>>::~allocator((std::allocator<std::pair<const std::string,data::MonsterRarityType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MonsterRarityType> *)(v2 + 664);
            i != (std::pair<const std::string,data::MonsterRarityType> *)(v2 + 464);
            std::pair<std::string const,data::MonsterRarityType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::MonsterRarityType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::MonsterRarityType>::find(
                                                                                         &data::enumStrToVal(char const*,data::MonsterRarityType &)::m,
                                                                                         (const std::unordered_map<std::string,data::MonsterRarityType>::key_type *)(v2 + 336));
    std::string::~string((void *)(v2 + 336));
    *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v2 + 336);
    *(std::unordered_map<std::string,data::MonsterRarityType>::iterator *)(v2 + 208) = std::unordered_map<std::string,data::MonsterRarityType>::end(&data::enumStrToVal(char const*,data::MonsterRarityType &)::m);
    v9 = (char *)(v2 + 208);
    v10 = std::__detail::operator==<std::pair<std::string const,data::MonsterRarityType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterRarityType>,true> *)(v2 + 176),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterRarityType>,true> *)(v2 + 208));
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "enumStrToVal",
        161);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 400),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 240));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
      LODWORD(result) = -1;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::MonsterRarityType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::MonsterRarityType>,false,true> *const)(v2 + 176));
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "enumStrToVal",
      145);
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

// Line 170: range 00000000145776AA-00000000145776C0
const char *__cdecl data::getDescription(data::MonsterRarityType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 175: range 00000000145776C1-0000000014577876
bool __cdecl data::isValidMonsterRarityType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::MonsterRarityType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::MonsterRarityType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:176 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidMonsterRarityType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getMonsterRarityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::MonsterRarityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MonsterRarityType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getMonsterRarityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::MonsterRarityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MonsterRarityType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::MonsterRarityType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 181: range 0000000014577877-00000000145779D8
bool __cdecl data::isValidMonsterRarityTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::MonsterRarityType> *v5; // rcx
  const std::unordered_map<std::string,data::MonsterRarityType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidMonsterRarityTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getMonsterRarityTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::MonsterRarityType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MonsterRarityType>::end(v5);
  v6 = data::getMonsterRarityTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::MonsterRarityType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::MonsterRarityType>::find(
                                                                                            v6,
                                                                                            name);
  result = std::__detail::operator!=<std::pair<std::string const,data::MonsterRarityType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterRarityType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterRarityType>,true> *)(v2 + 64));
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

// Line 186: range 00000000145779D9-0000000014578082
const std::unordered_map<std::string,data::MonsterRarityType> *__cdecl data::getMonsterRarityTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::MonsterRarityType> *i; // r14
  const std::unordered_map<std::string,data::MonsterRarityType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getMonsterRarityTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = 61956;
  v3[536862733] = -202116109;
  v3[536862734] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getMonsterRarityTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMonsterRarityTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[20],data::MonsterRarityType,true>(
      (std::pair<const std::string,data::MonsterRarityType> *const)(v1 + 176),
      (const char (*)[20])"MONSTER_RARITY_NONE",
      (data::MonsterRarityType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "MONSTER_RARITY_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[29],data::MonsterRarityType,true>(
      (std::pair<const std::string,data::MonsterRarityType> *const)(v1 + 216),
      (const char (*)[29])"MONSTER_RARITY_SMALL_MONSTER",
      (data::MonsterRarityType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "MONSTER_RARITY_SMALL_MONSTER");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[29],data::MonsterRarityType,true>(
      (std::pair<const std::string,data::MonsterRarityType> *const)(v1 + 256),
      (const char (*)[29])"MONSTER_RARITY_ELITE_MONSTER",
      (data::MonsterRarityType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "MONSTER_RARITY_ELITE_MONSTER");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[28],data::MonsterRarityType,true>(
      (std::pair<const std::string,data::MonsterRarityType> *const)(v1 + 296),
      (const char (*)[28])"MONSTER_RARITY_BOSS_MONSTER",
      (data::MonsterRarityType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "MONSTER_RARITY_BOSS_MONSTER");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[32],data::MonsterRarityType,true>(
      (std::pair<const std::string,data::MonsterRarityType> *const)(v1 + 336),
      (const char (*)[32])"MONSTER_RARITY_BIG_BOSS_MONSTER",
      (data::MonsterRarityType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "MONSTER_RARITY_BIG_BOSS_MONSTER");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::MonsterRarityType>::pair<char const(&)[32],data::MonsterRarityType,true>(
      (std::pair<const std::string,data::MonsterRarityType> *const)(v1 + 376),
      (const char (*)[32])"MONSTER_RARITY_SMALL_ENV_ANIMAL",
      (data::MonsterRarityType *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::MonsterRarityType>>::allocator((std::allocator<std::pair<const std::string,data::MonsterRarityType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::MonsterRarityType>::unordered_map(
      &data::getMonsterRarityTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::MonsterRarityType> >)__PAIR128__(6LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::MonsterRarityType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::MonsterRarityType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::MonsterRarityType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getMonsterRarityTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::MonsterRarityType>::~unordered_map,
      &data::getMonsterRarityTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::MonsterRarityType>>::~allocator((std::allocator<std::pair<const std::string,data::MonsterRarityType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::MonsterRarityType> *)(v1 + 416);
          i != (std::pair<const std::string,data::MonsterRarityType> *)(v1 + 176);
          std::pair<std::string const,data::MonsterRarityType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getMonsterRarityTypeNameMap[abi:cxx11](void)::m;
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

// Line 200: range 0000000014578083-0000000014578A73
const std::map<data::MonsterRarityType,std::pair<std::string,std::string >> *__cdecl data::getMonsterRarityTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getMonsterRarityTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getMonsterRarityTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMonsterRarityTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 176),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[20])"MONSTER_RARITY_NONE");
    std::pair<data::MonsterRarityType const,std::pair<std::string,std::string>>::pair<data::MonsterRarityType,true>(
      (std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > *const)(v1 + 752),
      (data::MonsterRarityType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 272),
      (const char (*)[7])byte_1ADA8880,
      (const char (*)[29])"MONSTER_RARITY_SMALL_MONSTER");
    std::pair<data::MonsterRarityType const,std::pair<std::string,std::string>>::pair<data::MonsterRarityType,true>(
      (std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > *const)(v1 + 824),
      (data::MonsterRarityType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 368),
      (const char (*)[7])byte_1ADA88C0,
      (const char (*)[29])"MONSTER_RARITY_ELITE_MONSTER");
    std::pair<data::MonsterRarityType const,std::pair<std::string,std::string>>::pair<data::MonsterRarityType,true>(
      (std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > *const)(v1 + 896),
      (data::MonsterRarityType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 368));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[5],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 464),
      (const char (*)[5])"BOSS",
      (const char (*)[28])"MONSTER_RARITY_BOSS_MONSTER");
    std::pair<data::MonsterRarityType const,std::pair<std::string,std::string>>::pair<data::MonsterRarityType,true>(
      (std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > *const)(v1 + 968),
      (data::MonsterRarityType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 464));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[8],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 560),
      (const char (*)[8])byte_1ADA8900,
      (const char (*)[32])"MONSTER_RARITY_BIG_BOSS_MONSTER");
    std::pair<data::MonsterRarityType const,std::pair<std::string,std::string>>::pair<data::MonsterRarityType,true>(
      (std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > *const)(v1 + 1040),
      (data::MonsterRarityType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 560));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 656),
      (const char (*)[10])byte_1ADA8940,
      (const char (*)[32])"MONSTER_RARITY_SMALL_ENV_ANIMAL");
    std::pair<data::MonsterRarityType const,std::pair<std::string,std::string>>::pair<data::MonsterRarityType,true>(
      (std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > *const)(v1 + 1112),
      (data::MonsterRarityType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 656));
    std::allocator<std::pair<data::MonsterRarityType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::MonsterRarityType,std::pair<std::string,std::string>>::map(
      &data::getMonsterRarityTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > >)__PAIR128__(6LL, v1 + 752),
      (const std::less<data::MonsterRarityType> *)(v1 + 48),
      (const std::map<data::MonsterRarityType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getMonsterRarityTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::MonsterRarityType,std::pair<std::string,std::string>>::~map,
      &data::getMonsterRarityTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::MonsterRarityType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > *)(v1 + 1184);
          i != (std::pair<const data::MonsterRarityType,std::pair<std::string,std::string > > *)(v1 + 752);
          std::pair<data::MonsterRarityType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getMonsterRarityTypeEnumMap[abi:cxx11](void)::m;
};

// Line 214: range 0000000014578A74-0000000014578DE7
const char *__fastcall data::enumValToStr(data::MonsterPolyDropListenType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:213 64 8 8 iter:216 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string>>::find(map, (const std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "enumValToStr",
      219);
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
    result = "INVALID_MonsterPolyDropListenType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::MonsterPolyDropListenType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 226: range 0000000014578DE8-00000000145793A0
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::MonsterPolyDropListenType>,false,true>::pointer v10; // rax
  data::MonsterPolyDropListenType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::MonsterPolyDropListenType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:235 96 8 9 <unknown> 128 8 5 s:225 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getMonsterPolyDropListenTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::MonsterPolyDropListenType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MonsterPolyDropListenType>::find(m, (const std::unordered_map<std::string,data::MonsterPolyDropListenType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::MonsterPolyDropListenType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::MonsterPolyDropListenType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::MonsterPolyDropListenType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterPolyDropListenType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterPolyDropListenType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "enumNameToVal",
        238);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::MonsterPolyDropListenType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::MonsterPolyDropListenType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "enumNameToVal",
      229);
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

// Line 247: range 00000000145793A1-0000000014579CC6
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::MonsterPolyDropListenType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::MonsterPolyDropListenType>,false,true>::pointer v12; // rax
  data::MonsterPolyDropListenType second; // ecx
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
                        "it:259 144 8 9 <unknown> 176 8 5 s:246 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::MonsterPolyDropListenType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::MonsterPolyDropListenType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::MonsterPolyDropListenType>::pair<char const(&)[3],data::MonsterPolyDropListenType,true>(
        (std::pair<const std::string,data::MonsterPolyDropListenType> *const)(v2 + 400),
        (const char (*)[3])"GV",
        (data::MonsterPolyDropListenType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::MonsterPolyDropListenType>>::allocator((std::allocator<std::pair<const std::string,data::MonsterPolyDropListenType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::MonsterPolyDropListenType>::unordered_map(
        &data::enumStrToVal(char const*,data::MonsterPolyDropListenType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MonsterPolyDropListenType> >)__PAIR128__(1LL, v2 + 400),
        0LL,
        (const std::unordered_map<std::string,data::MonsterPolyDropListenType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::MonsterPolyDropListenType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::MonsterPolyDropListenType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::MonsterPolyDropListenType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::MonsterPolyDropListenType>::~unordered_map,
        &data::enumStrToVal(char const*,data::MonsterPolyDropListenType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MonsterPolyDropListenType>>::~allocator((std::allocator<std::pair<const std::string,data::MonsterPolyDropListenType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MonsterPolyDropListenType> *)(v2 + 440);
            i != (std::pair<const std::string,data::MonsterPolyDropListenType> *)(v2 + 400);
            std::pair<std::string const,data::MonsterPolyDropListenType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::MonsterPolyDropListenType>::iterator *)(v2 + 112) = std::unordered_map<std::string,data::MonsterPolyDropListenType>::find(
                                                                                                 &data::enumStrToVal(char const*,data::MonsterPolyDropListenType &)::m,
                                                                                                 (const std::unordered_map<std::string,data::MonsterPolyDropListenType>::key_type *)(v2 + 272));
    std::string::~string((void *)(v2 + 272));
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v2 + 272);
    *(std::unordered_map<std::string,data::MonsterPolyDropListenType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::MonsterPolyDropListenType>::end(&data::enumStrToVal(char const*,data::MonsterPolyDropListenType &)::m);
    v9 = (char *)(v2 + 144);
    v10 = std::__detail::operator==<std::pair<std::string const,data::MonsterPolyDropListenType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterPolyDropListenType>,true> *)(v2 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterPolyDropListenType>,true> *)(v2 + 144));
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "enumStrToVal",
        262);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 336),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 176));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::MonsterPolyDropListenType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::MonsterPolyDropListenType>,false,true> *const)(v2 + 112));
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "enumStrToVal",
      250);
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

// Line 271: range 0000000014579CC7-0000000014579CDD
const char *__cdecl data::getDescription(data::MonsterPolyDropListenType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 276: range 0000000014579CDE-0000000014579E93
bool __cdecl data::isValidMonsterPolyDropListenType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:277 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidMonsterPolyDropListenType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 282: range 0000000014579E94-0000000014579FF5
bool __cdecl data::isValidMonsterPolyDropListenTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::MonsterPolyDropListenType> *v5; // rcx
  const std::unordered_map<std::string,data::MonsterPolyDropListenType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidMonsterPolyDropListenTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getMonsterPolyDropListenTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::MonsterPolyDropListenType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MonsterPolyDropListenType>::end(v5);
  v6 = data::getMonsterPolyDropListenTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::MonsterPolyDropListenType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::MonsterPolyDropListenType>::find(
                                                                                                    v6,
                                                                                                    name);
  result = std::__detail::operator!=<std::pair<std::string const,data::MonsterPolyDropListenType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterPolyDropListenType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterPolyDropListenType>,true> *)(v2 + 64));
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

// Line 287: range 0000000014579FF6-000000001457A3FC
const std::unordered_map<std::string,data::MonsterPolyDropListenType> *__cdecl data::getMonsterPolyDropListenTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::MonsterPolyDropListenType> *i; // r14
  const std::unordered_map<std::string,data::MonsterPolyDropListenType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getMonsterPolyDropListenTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getMonsterPolyDropListenTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMonsterPolyDropListenTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::MonsterPolyDropListenType>::pair<char const(&)[23],data::MonsterPolyDropListenType,true>(
      (std::pair<const std::string,data::MonsterPolyDropListenType> *const)(v1 + 112),
      (const char (*)[23])"MONSTER_POLY_DROP_NONE",
      (data::MonsterPolyDropListenType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "MONSTER_POLY_DROP_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::MonsterPolyDropListenType>::pair<char const(&)[21],data::MonsterPolyDropListenType,true>(
      (std::pair<const std::string,data::MonsterPolyDropListenType> *const)(v1 + 152),
      (const char (*)[21])"MONSTER_POLY_DROP_GV",
      (data::MonsterPolyDropListenType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::MonsterPolyDropListenType>>::allocator((std::allocator<std::pair<const std::string,data::MonsterPolyDropListenType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::MonsterPolyDropListenType>::unordered_map(
      &data::getMonsterPolyDropListenTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::MonsterPolyDropListenType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::MonsterPolyDropListenType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::MonsterPolyDropListenType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::MonsterPolyDropListenType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getMonsterPolyDropListenTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::MonsterPolyDropListenType>::~unordered_map,
      &data::getMonsterPolyDropListenTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::MonsterPolyDropListenType>>::~allocator((std::allocator<std::pair<const std::string,data::MonsterPolyDropListenType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::MonsterPolyDropListenType> *)(v1 + 192);
          i != (std::pair<const std::string,data::MonsterPolyDropListenType> *)(v1 + 112);
          std::pair<std::string const,data::MonsterPolyDropListenType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getMonsterPolyDropListenTypeNameMap[abi:cxx11](void)::m;
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

// Line 297: range 000000001457A3FD-000000001457A9BA
const std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >> *__cdecl data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[23])"MONSTER_POLY_DROP_NONE");
    std::pair<data::MonsterPolyDropListenType const,std::pair<std::string,std::string>>::pair<data::MonsterPolyDropListenType,true>(
      (std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::MonsterPolyDropListenType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[3],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[3])"GV",
      (const char (*)[21])"MONSTER_POLY_DROP_GV");
    std::pair<data::MonsterPolyDropListenType const,std::pair<std::string,std::string>>::pair<data::MonsterPolyDropListenType,true>(
      (std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::MonsterPolyDropListenType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::MonsterPolyDropListenType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string>>::map(
      &data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::MonsterPolyDropListenType> *)(v1 + 48),
      (const std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::MonsterPolyDropListenType,std::pair<std::string,std::string>>::~map,
      &data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::MonsterPolyDropListenType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::MonsterPolyDropListenType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::MonsterPolyDropListenType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getMonsterPolyDropListenTypeEnumMap[abi:cxx11](void)::m;
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

// Line 308: range 000000001457A9BC-000000001457AF44
int32_t __cdecl data::MonsterDrop::init(data::MonsterDrop *const this, const common::tools::TxtFile::Row *row)
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
  *(_QWORD *)(v2 + 16) = data::MonsterDrop::init;
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
    "ID",
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      311);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
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
      &byte_1ADA8D40,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<float>(row, (const std::string *)(v2 + 192), &this->hp_percent) != 0;
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "init",
        316);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1ADA8D80);
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

// Line 324: range 000000001457AF46-0000000014584EB7
int32_t __cdecl data::MonsterExcelConfig::init(
        data::MonsterExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r13d
  bool v8; // r13
  common::milog::MiLogStream *v9; // rax
  bool v10; // r13
  common::milog::MiLogStream *v11; // rax
  bool v12; // r13
  common::milog::MiLogStream *v13; // rax
  bool v14; // r13
  common::milog::MiLogStream *v15; // rax
  bool v16; // r13
  common::milog::MiLogStream *v17; // rax
  bool v18; // r13
  common::milog::MiLogStream *v19; // rax
  bool v20; // r13
  common::milog::MiLogStream *v21; // rax
  bool v22; // r13
  common::milog::MiLogStream *v23; // rax
  bool v24; // r13
  common::milog::MiLogStream *v25; // rax
  bool v26; // r13
  common::milog::MiLogStream *v27; // rax
  bool v28; // r13
  common::milog::MiLogStream *v29; // rax
  bool v30; // r13
  common::milog::MiLogStream *v31; // rax
  bool v32; // r13
  common::milog::MiLogStream *v33; // rax
  bool v34; // r13
  common::milog::MiLogStream *v35; // rax
  bool v36; // r13
  common::milog::MiLogStream *v37; // rax
  bool v38; // r13
  common::milog::MiLogStream *v39; // rax
  bool v40; // r13
  common::milog::MiLogStream *v41; // rax
  bool v42; // r13
  common::milog::MiLogStream *v43; // rax
  bool v44; // r13
  common::milog::MiLogStream *v45; // rax
  bool v46; // r13
  common::milog::MiLogStream *v47; // rax
  bool v48; // r13
  common::milog::MiLogStream *v49; // rax
  bool v50; // r13
  common::milog::MiLogStream *v51; // rax
  bool v52; // r13
  common::milog::MiLogStream *v53; // rax
  bool v54; // r13
  common::milog::MiLogStream *v55; // rax
  bool v56; // r13
  common::milog::MiLogStream *v57; // rax
  bool v58; // r13
  common::milog::MiLogStream *v59; // rax
  bool v60; // r13
  data::FightPropType *p_type; // r13
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  bool v65; // r13
  data::GrowCurveType *p_grow_curve; // r13
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  bool v70; // r13
  common::milog::MiLogStream *v71; // rax
  bool v72; // r13
  common::milog::MiLogStream *v73; // rax
  bool v74; // r13
  common::milog::MiLogStream *v75; // rax
  bool v76; // r13
  common::milog::MiLogStream *v77; // rax
  bool v78; // r13
  common::milog::MiLogStream *v79; // rax
  bool v80; // r13
  common::milog::MiLogStream *v81; // rax
  bool v82; // r13
  common::milog::MiLogStream *v83; // rax
  bool v84; // r13
  common::milog::MiLogStream *v85; // rax
  unsigned __int64 v86; // rax
  _DWORD *v87; // rax
  unsigned __int64 v88; // rax
  char *j; // r13
  _DWORD *v90; // rax
  common::milog::MiLogStream *v91; // rax
  bool v92; // r13
  common::milog::MiLogStream *v93; // rax
  bool v94; // r13
  common::milog::MiLogStream *v95; // rax
  bool v96; // r13
  unsigned int *v97; // r13
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  bool v101; // r13
  common::milog::MiLogStream *v102; // rax
  bool v103; // r13
  unsigned int *p_drop_id; // r13
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  bool v108; // r13
  float *p_hp_percent; // r13
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  bool v113; // r13
  common::milog::MiLogStream *v114; // rax
  bool v115; // r13
  common::milog::MiLogStream *v116; // rax
  bool v117; // r13
  common::milog::MiLogStream *v118; // rax
  bool v119; // r13
  common::milog::MiLogStream *v120; // rax
  bool v121; // r13
  common::milog::MiLogStream *v122; // rax
  bool v123; // r13
  common::milog::MiLogStream *v124; // rax
  bool v125; // r13
  common::milog::MiLogStream *v126; // rax
  bool v127; // r13
  common::milog::MiLogStream *v128; // rax
  bool v129; // r13
  common::milog::MiLogStream *v130; // rax
  bool v131; // r13
  common::milog::MiLogStream *v132; // rax
  bool v133; // r13
  common::milog::MiLogStream *v134; // rax
  bool v135; // r13
  common::milog::MiLogStream *v136; // rax
  bool v137; // r13
  common::milog::MiLogStream *v138; // rax
  std::initializer_list<std::string > __la; // [rsp+0h] [rbp-2420h]
  bool __l; // [rsp+0h] [rbp-2420h]
  uint32_t array_count; // [rsp+20h] [rbp-2400h]
  uint32_t array_counta; // [rsp+20h] [rbp-2400h]
  uint32_t array_countb; // [rsp+20h] [rbp-2400h]
  uint32_t i; // [rsp+24h] [rbp-23FCh]
  uint32_t i_0; // [rsp+28h] [rbp-23F8h]
  uint32_t i_1; // [rsp+2Ch] [rbp-23F4h]
  char v148[9200]; // [rsp+30h] [rbp-23F0h] BYREF

  v2 = (unsigned __int64)v148;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_8(9152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "186 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9"
                        " <unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkn"
                        "own> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 5"
                        "44 1 9 <unknown> 560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9"
                        " <unknown> 640 1 9 <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 1 9 <unkn"
                        "own> 720 1 9 <unknown> 736 1 9 <unknown> 752 1 9 <unknown> 768 1 9 <unknown> 784 1 9 <unknown> 8"
                        "00 1 9 <unknown> 816 1 9 <unknown> 832 1 9 <unknown> 848 1 9 <unknown> 864 1 9 <unknown> 880 1 9"
                        " <unknown> 896 1 9 <unknown> 912 1 9 <unknown> 928 1 9 <unknown> 944 1 9 <unknown> 960 1 9 <unkn"
                        "own> 976 1 9 <unknown> 992 1 9 <unknown> 1008 1 9 <unknown> 1024 1 9 <unknown> 1040 1 9 <unknown"
                        "> 1056 24 9 <unknown> 1120 32 11 val_str:327 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <"
                        "unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32"
                        " 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 195"
                        "2 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown>"
                        " 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unkn"
                        "own> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <"
                        "unknown> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknown> 3104 32 9 <unknown> 3168 32"
                        " 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <unknown> 3360 32 9 <unknown> 3424 32 9 <unknown> 348"
                        "8 32 9 <unknown> 3552 32 9 <unknown> 3616 32 9 <unknown> 3680 32 9 <unknown> 3744 32 9 <unknown>"
                        " 3808 32 9 <unknown> 3872 32 9 <unknown> 3936 32 9 <unknown> 4000 32 9 <unknown> 4064 32 9 <unkn"
                        "own> 4128 32 9 <unknown> 4192 32 9 <unknown> 4256 32 9 <unknown> 4320 32 9 <unknown> 4384 32 9 <"
                        "unknown> 4448 32 9 <unknown> 4512 32 9 <unknown> 4576 32 9 <unknown> 4640 32 9 <unknown> 4704 32"
                        " 9 <unknown> 4768 32 9 <unknown> 4832 32 9 <unknown> 4896 32 9 <unknown> 4960 32 9 <unknown> 502"
                        "4 32 9 <unknown> 5088 32 9 <unknown> 5152 32 9 <unknown> 5216 32 9 <unknown> 5280 32 9 <unknown>"
                        " 5344 32 9 <unknown> 5408 32 9 <unknown> 5472 32 9 <unknown> 5536 32 9 <unknown> 5600 32 9 <unkn"
                        "own> 5664 32 9 <unknown> 5728 32 9 <unknown> 5792 32 9 <unknown> 5856 32 9 <unknown> 5920 32 9 <"
                        "unknown> 5984 32 9 <unknown> 6048 32 9 <unknown> 6112 32 9 <unknown> 6176 32 9 <unknown> 6240 32"
                        " 9 <unknown> 6304 32 9 <unknown> 6368 32 9 <unknown> 6432 32 9 <unknown> 6496 32 9 <unknown> 656"
                        "0 32 9 <unknown> 6624 32 9 <unknown> 6688 32 9 <unknown> 6752 32 9 <unknown> 6816 32 9 <unknown>"
                        " 6880 32 9 <unknown> 6944 32 9 <unknown> 7008 32 9 <unknown> 7072 32 9 <unknown> 7136 32 9 <unkn"
                        "own> 7200 32 9 <unknown> 7264 32 9 <unknown> 7328 32 9 <unknown> 7392 32 9 <unknown> 7456 32 9 <"
                        "unknown> 7520 32 9 <unknown> 7584 32 9 <unknown> 7648 32 9 <unknown> 7712 32 9 <unknown> 7776 32"
                        " 9 <unknown> 7840 32 9 <unknown> 7904 32 9 <unknown> 7968 32 9 <unknown> 8032 32 9 <unknown> 809"
                        "6 32 9 <unknown> 8160 32 9 <unknown> 8224 32 9 <unknown> 8288 32 9 <unknown> 8352 32 9 <unknown>"
                        " 8416 32 9 <unknown> 8480 32 9 <unknown> 8544 32 9 <unknown> 8608 32 9 <unknown> 8672 32 9 <unkn"
                        "own> 8736 64 9 <unknown> 8832 256 12 col_name:325";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfig::init;
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
  v4[536862746] = -234753535;
  v4[536862747] = -234753535;
  v4[536862748] = -234753535;
  v4[536862749] = -234753535;
  v4[536862750] = -234753535;
  v4[536862751] = -234753535;
  v4[536862752] = -234753535;
  v4[536862753] = -234881024;
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
  v4[536862796] = -218959118;
  v4[536862798] = -218959118;
  v4[536862800] = -218959118;
  v4[536862802] = -218959118;
  v4[536862804] = -218959118;
  v4[536862806] = -218959118;
  v4[536862808] = -218959118;
  v4[536862810] = -218959118;
  v4[536862812] = -218959118;
  v4[536862814] = -218959118;
  v4[536862816] = -218959118;
  v4[536862818] = -218959118;
  v4[536862820] = -218959118;
  v4[536862822] = -218959118;
  v4[536862824] = -218959118;
  v4[536862826] = -218959118;
  v4[536862828] = -218959118;
  v4[536862830] = -218959118;
  v4[536862832] = -218959118;
  v4[536862834] = -218959118;
  v4[536862836] = -218959118;
  v4[536862838] = -218959118;
  v4[536862840] = -218959118;
  v4[536862842] = -218959118;
  v4[536862844] = -218959118;
  v4[536862846] = -218959118;
  v4[536862848] = -218959118;
  v4[536862850] = -218959118;
  v4[536862852] = -218959118;
  v4[536862854] = -218959118;
  v4[536862856] = -218959118;
  v4[536862858] = -218959118;
  v4[536862860] = -218959118;
  v4[536862862] = -218959118;
  v4[536862864] = -218959118;
  v4[536862866] = -218959118;
  v4[536862868] = -218959118;
  v4[536862870] = -218959118;
  v4[536862872] = -218959118;
  v4[536862874] = -218959118;
  v4[536862876] = -218959118;
  v4[536862878] = -218959118;
  v4[536862880] = -218959118;
  v4[536862882] = -218959118;
  v4[536862884] = -218959118;
  v4[536862886] = -218959118;
  v4[536862888] = -218959118;
  v4[536862890] = -218959118;
  v4[536862892] = -218959118;
  v4[536862894] = -218959118;
  v4[536862896] = -218959118;
  v4[536862898] = -218959118;
  v4[536862900] = -218959118;
  v4[536862902] = -218959118;
  v4[536862904] = -218959118;
  v4[536862906] = -218959118;
  v4[536862908] = -218959118;
  v4[536862910] = -218959118;
  v4[536862912] = -218959118;
  v4[536862914] = -218959118;
  v4[536862916] = -218959118;
  v4[536862918] = -218959118;
  v4[536862920] = -218959118;
  v4[536862922] = -218959118;
  v4[536862924] = -218959118;
  v4[536862926] = -218959118;
  v4[536862928] = -218959118;
  v4[536862930] = -218959118;
  v4[536862932] = -218959118;
  v4[536862934] = -218959118;
  v4[536862936] = -218959118;
  v4[536862938] = -218959118;
  v4[536862940] = -218959118;
  v4[536862942] = -218959118;
  v4[536862944] = -218959118;
  v4[536862946] = -218959118;
  v4[536862948] = -218959118;
  v4[536862950] = -218959118;
  v4[536862952] = -218959118;
  v4[536862954] = -218959118;
  v4[536862956] = -218959118;
  v4[536862958] = -218959118;
  v4[536862960] = -218959118;
  v4[536862962] = -218959118;
  v4[536862964] = -218959118;
  v4[536862966] = -218959118;
  v4[536862968] = -218959118;
  v4[536862970] = -218959118;
  v4[536862972] = -218959118;
  v4[536862974] = -218959118;
  v4[536862976] = -218959118;
  v4[536862978] = -218959118;
  v4[536862980] = -218959118;
  v4[536862982] = -218959118;
  v4[536862984] = -218959118;
  v4[536862986] = -218959118;
  v4[536862988] = -218959118;
  v4[536862990] = -218959118;
  v4[536862992] = -218959118;
  v4[536862995] = -218959118;
  v4[536863004] = -202116109;
  v4[536863005] = -202116109;
  std::string::basic_string(v2 + 1120);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1184),
    "ID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1184), &this->id) != 0;
  std::string::~string((void *)(v2 + 1184));
  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1248, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1248),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      330);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1248),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
    *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1312),
      &byte_1AD5A900,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1312), &this->name) != 0;
    std::string::~string((void *)(v2 + 1312));
    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "init",
        335);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1376),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v9, (const char (*)[42])byte_1AD5A940);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
      *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1440),
        aPrefab_2,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1440), &this->prefab_path) != 0;
      std::string::~string((void *)(v2 + 1440));
      *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1504, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1504),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          340);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1504),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1AD504A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
        *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1568),
          aPrefabRemote_1,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1568), &this->prefab_path_remote) != 0;
        std::string::~string((void *)(v2 + 1568));
        *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
        {
          *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1632) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1632, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1632),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "init",
            345);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1632),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v13, (const char (*)[40])byte_1AD5A9E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
          *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1696),
            aController_1,
            (const std::allocator<char> *)(v2 + 96));
          v14 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1696), &this->controller_path) != 0;
          std::string::~string((void *)(v2 + 1696));
          *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
          {
            *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1760) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1760, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1760),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "init",
              350);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1760),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v15, (const char (*)[37])byte_1AD5AA80);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
            *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1824),
              aControllerRemo_1,
              (const std::allocator<char> *)(v2 + 112));
            v16 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1824),
                    &this->controller_path_remote) != 0;
            std::string::~string((void *)(v2 + 1824));
            *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( v16 )
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
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "init",
                355);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1888),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v17, (const char (*)[44])byte_1AD5AB20);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
              *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1952),
                &byte_1AD5AB80,
                (const std::allocator<char> *)(v2 + 128));
              v18 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1952),
                      &this->camp_id) != 0;
              std::string::~string((void *)(v2 + 1952));
              *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( v18 )
              {
                *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 2016) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 2016, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 2016),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                  "init",
                  360);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 2016),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v19, (const char (*)[33])byte_1AD5ABC0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2080),
                  &byte_1ADA9C00,
                  (const std::allocator<char> *)(v2 + 144));
                v20 = common::tools::TxtFile::Row::assignToNum<float>(
                        row,
                        (const std::string *)(v2 + 2080),
                        &this->hp_base) != 0;
                std::string::~string((void *)(v2 + 2080));
                *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( v20 )
                {
                  *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 2144) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 2144, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 2144),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                    "init",
                    365);
                  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 2144),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v21,
                    (const char (*)[36])byte_1ADA9C40);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
                  *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 2208),
                    &byte_1AD4CCE0,
                    (const std::allocator<char> *)(v2 + 160));
                  v22 = common::tools::TxtFile::Row::assignToNum<float>(
                          row,
                          (const std::string *)(v2 + 2208),
                          &this->attack_base) != 0;
                  std::string::~string((void *)(v2 + 2208));
                  *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( v22 )
                  {
                    *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 2272) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 2272, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 2272),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                      "init",
                      370);
                    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 2272),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v23,
                      (const char (*)[36])byte_1AD4CD20);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                    *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2336),
                      &byte_1ADA9CA0,
                      (const std::allocator<char> *)(v2 + 176));
                    v24 = common::tools::TxtFile::Row::assignToNum<float>(
                            row,
                            (const std::string *)(v2 + 2336),
                            &this->defense_base) != 0;
                    std::string::~string((void *)(v2 + 2336));
                    *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( v24 )
                    {
                      *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 2400) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 2431) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2431) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 2400, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 2400),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                        "init",
                        375);
                      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2400),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        v25,
                        (const char (*)[36])byte_1ADA9CE0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
                      *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2464),
                        &byte_1ADA9D40,
                        (const std::allocator<char> *)(v2 + 192));
                      v26 = common::tools::TxtFile::Row::assignToNum<float>(
                              row,
                              (const std::string *)(v2 + 2464),
                              &this->critical) != 0;
                      std::string::~string((void *)(v2 + 2464));
                      *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( v26 )
                      {
                        *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2528) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2528, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2528),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                          "init",
                          380);
                        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2528),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          v27,
                          (const char (*)[30])byte_1ADA9D80);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2528));
                        *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                        v7 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2592),
                          &byte_1ADA9DC0,
                          (const std::allocator<char> *)(v2 + 208));
                        v28 = common::tools::TxtFile::Row::assignToNum<float>(
                                row,
                                (const std::string *)(v2 + 2592),
                                &this->anti_critical) != 0;
                        std::string::~string((void *)(v2 + 2592));
                        *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( v28 )
                        {
                          *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2656) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2687) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2687) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2656, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2656),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                            "init",
                            385);
                          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2656),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            v29,
                            (const char (*)[33])byte_1ADA9E00);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2656));
                          *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                          v7 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2720),
                            &byte_1ADA9E60,
                            (const std::allocator<char> *)(v2 + 224));
                          v30 = common::tools::TxtFile::Row::assignToNum<float>(
                                  row,
                                  (const std::string *)(v2 + 2720),
                                  &this->critical_hurt) != 0;
                          std::string::~string((void *)(v2 + 2720));
                          *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( v30 )
                          {
                            *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2784) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2784, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2784),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                              "init",
                              390);
                            v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2784),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              v31,
                              (const char (*)[33])byte_1ADA9EA0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2784));
                            *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                            v7 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2848),
                              &byte_1ADA9F00,
                              (const std::allocator<char> *)(v2 + 240));
                            v32 = common::tools::TxtFile::Row::assignToNum<float>(
                                    row,
                                    (const std::string *)(v2 + 2848),
                                    &this->fire_sub_hurt) != 0;
                            std::string::~string((void *)(v2 + 2848));
                            *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( v32 )
                            {
                              *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2912) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2943) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2943) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2912, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2912),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                "init",
                                395);
                              v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2912),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                v33,
                                (const char (*)[36])byte_1ADA9F40);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2912));
                              *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                              v7 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 256);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2976),
                                &byte_1ADA9FA0,
                                (const std::allocator<char> *)(v2 + 256));
                              v34 = common::tools::TxtFile::Row::assignToNum<float>(
                                      row,
                                      (const std::string *)(v2 + 2976),
                                      &this->grass_sub_hurt) != 0;
                              std::string::~string((void *)(v2 + 2976));
                              *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                              if ( v34 )
                              {
                                *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 3040) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 3071) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 3071) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 3040, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 3040),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                  "init",
                                  400);
                                v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 3040),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                  v35,
                                  (const char (*)[36])byte_1ADA9FE0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3040));
                                *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                                v7 = -1;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 272);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3104),
                                  &byte_1ADAA040,
                                  (const std::allocator<char> *)(v2 + 272));
                                v36 = common::tools::TxtFile::Row::assignToNum<float>(
                                        row,
                                        (const std::string *)(v2 + 3104),
                                        &this->water_sub_hurt) != 0;
                                std::string::~string((void *)(v2 + 3104));
                                *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 272);
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                if ( v36 )
                                {
                                  *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 3168) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 3199) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 3199) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 3168, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 3168),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                    "init",
                                    405);
                                  v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3168),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                    v37,
                                    (const char (*)[36])byte_1ADAA080);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3168));
                                  *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                                  v7 = -1;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 288);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3232),
                                    &byte_1ADAA0E0,
                                    (const std::allocator<char> *)(v2 + 288));
                                  v38 = common::tools::TxtFile::Row::assignToNum<float>(
                                          row,
                                          (const std::string *)(v2 + 3232),
                                          &this->elec_sub_hurt) != 0;
                                  std::string::~string((void *)(v2 + 3232));
                                  *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 288);
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                  if ( v38 )
                                  {
                                    *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 3296) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 3296, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 3296),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                      "init",
                                      410);
                                    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3296),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                      v39,
                                      (const char (*)[36])byte_1ADAA120);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3296));
                                    *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
                                    v7 = -1;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 304);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3360),
                                      &byte_1ADAA180,
                                      (const std::allocator<char> *)(v2 + 304));
                                    v40 = common::tools::TxtFile::Row::assignToNum<float>(
                                            row,
                                            (const std::string *)(v2 + 3360),
                                            &this->wind_sub_hurt) != 0;
                                    std::string::~string((void *)(v2 + 3360));
                                    *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 304);
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                    if ( v40 )
                                    {
                                      *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 3424) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 3455) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 3455) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 3424, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 3424),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                        "init",
                                        415);
                                      v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3424),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                        v41,
                                        (const char (*)[36])byte_1ADAA1C0);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3424));
                                      *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -117901064;
                                      v7 = -1;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 320);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3488),
                                        &byte_1ADAA220,
                                        (const std::allocator<char> *)(v2 + 320));
                                      v42 = common::tools::TxtFile::Row::assignToNum<float>(
                                              row,
                                              (const std::string *)(v2 + 3488),
                                              &this->ice_sub_hurt) != 0;
                                      std::string::~string((void *)(v2 + 3488));
                                      *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 320);
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                      if ( v42 )
                                      {
                                        *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3552) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3583) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 3583) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3552, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3552),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                          "init",
                                          420);
                                        v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3552),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                          v43,
                                          (const char (*)[36])byte_1ADAA260);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3552));
                                        *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -117901064;
                                        v7 = -1;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 336);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3616),
                                          &byte_1ADAA2C0,
                                          (const std::allocator<char> *)(v2 + 336));
                                        v44 = common::tools::TxtFile::Row::assignToNum<float>(
                                                row,
                                                (const std::string *)(v2 + 3616),
                                                &this->rock_sub_hurt) != 0;
                                        std::string::~string((void *)(v2 + 3616));
                                        *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 336);
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                        if ( v44 )
                                        {
                                          *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3680) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3711) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 3711) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3680, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3680),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                            "init",
                                            425);
                                          v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3680),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                            v45,
                                            (const char (*)[36])byte_1ADAA300);
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3680));
                                          *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = -117901064;
                                          v7 = -1;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 352);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3744),
                                            &byte_1ADAA360,
                                            (const std::allocator<char> *)(v2 + 352));
                                          v46 = common::tools::TxtFile::Row::assignToNum<float>(
                                                  row,
                                                  (const std::string *)(v2 + 3744),
                                                  &this->fire_add_hurt) != 0;
                                          std::string::~string((void *)(v2 + 3744));
                                          *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 352);
                                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                          if ( v46 )
                                          {
                                            *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3808) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3839) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 3839) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3808, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3808),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                              "init",
                                              430);
                                            v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3808),
                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                              v47,
                                              (const char (*)[42])byte_1ADAA3A0);
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3808));
                                            *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = -117901064;
                                            v7 = -1;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 368);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3872),
                                              &byte_1ADAA400,
                                              (const std::allocator<char> *)(v2 + 368));
                                            v48 = common::tools::TxtFile::Row::assignToNum<float>(
                                                    row,
                                                    (const std::string *)(v2 + 3872),
                                                    &this->grass_add_hurt) != 0;
                                            std::string::~string((void *)(v2 + 3872));
                                            *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 368);
                                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                            if ( v48 )
                                            {
                                              *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3936) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3967) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 3967) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3936, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3936),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                "init",
                                                435);
                                              v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 3936),
                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                v49,
                                                (const char (*)[42])byte_1ADAA440);
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3936));
                                              *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = -117901064;
                                              v7 = -1;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 384);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 4000),
                                                &byte_1ADAA4A0,
                                                (const std::allocator<char> *)(v2 + 384));
                                              v50 = common::tools::TxtFile::Row::assignToNum<float>(
                                                      row,
                                                      (const std::string *)(v2 + 4000),
                                                      &this->water_add_hurt) != 0;
                                              std::string::~string((void *)(v2 + 4000));
                                              *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 384);
                                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                              if ( v50 )
                                              {
                                                *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 4064) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 4095) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 4095) >> 3)
                                                                                            + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 4064, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 4064),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                  "init",
                                                  440);
                                                v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4064),
                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                  v51,
                                                  (const char (*)[42])byte_1ADAA4E0);
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4064));
                                                *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = -117901064;
                                                v7 = -1;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 400);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 4128),
                                                  &byte_1ADAA540,
                                                  (const std::allocator<char> *)(v2 + 400));
                                                v52 = common::tools::TxtFile::Row::assignToNum<float>(
                                                        row,
                                                        (const std::string *)(v2 + 4128),
                                                        &this->elec_add_hurt) != 0;
                                                std::string::~string((void *)(v2 + 4128));
                                                *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 400);
                                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                                if ( v52 )
                                                {
                                                  *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 4192) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 4223) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 4223) >> 3)
                                                                                          + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 4192, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 4192),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                    "init",
                                                    445);
                                                  v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4192),
                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                    v53,
                                                    (const char (*)[42])byte_1ADAA580);
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4192));
                                                  *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = -117901064;
                                                  v7 = -1;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 416);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 4256),
                                                    &byte_1ADAA5E0,
                                                    (const std::allocator<char> *)(v2 + 416));
                                                  v54 = common::tools::TxtFile::Row::assignToNum<float>(
                                                          row,
                                                          (const std::string *)(v2 + 4256),
                                                          &this->wind_add_hurt) != 0;
                                                  std::string::~string((void *)(v2 + 4256));
                                                  *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 416);
                                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                  if ( v54 )
                                                  {
                                                    *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 4320) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 4351) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 4351) >> 3)
                                                                                                + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 4320, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 4320),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                      "init",
                                                      450);
                                                    v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4320),
                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                      v55,
                                                      (const char (*)[42])byte_1ADAA620);
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4320));
                                                    *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = -117901064;
                                                    v7 = -1;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 432);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 4384),
                                                      &byte_1ADAA680,
                                                      (const std::allocator<char> *)(v2 + 432));
                                                    v56 = common::tools::TxtFile::Row::assignToNum<float>(
                                                            row,
                                                            (const std::string *)(v2 + 4384),
                                                            &this->ice_add_hurt) != 0;
                                                    std::string::~string((void *)(v2 + 4384));
                                                    *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 432);
                                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                    if ( v56 )
                                                    {
                                                      *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 4448) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 4479) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 4479) >> 3)
                                                                                              + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 4448, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 4448),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                        "init",
                                                        455);
                                                      v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4448),
                                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                        v57,
                                                        (const char (*)[42])byte_1ADAA6C0);
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4448));
                                                      *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = -117901064;
                                                      v7 = -1;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 448);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 4512),
                                                        &byte_1ADAA720,
                                                        (const std::allocator<char> *)(v2 + 448));
                                                      v58 = common::tools::TxtFile::Row::assignToNum<float>(
                                                              row,
                                                              (const std::string *)(v2 + 4512),
                                                              &this->rock_add_hurt) != 0;
                                                      std::string::~string((void *)(v2 + 4512));
                                                      *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 448);
                                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                      if ( v58 )
                                                      {
                                                        *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v2 + 4576) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v2 + 4607) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 4607) >> 3) + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v2 + 4576, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v2 + 4576),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                          "init",
                                                          460);
                                                        v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4576),
                                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                                        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                          v59,
                                                          (const char (*)[42])byte_1ADAA760);
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4576));
                                                        *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = -117901064;
                                                        v7 = -1;
                                                      }
                                                      else
                                                      {
                                                        std::vector<data::FightPropGrowConfig>::resize(
                                                          &this->prop_grow_curves,
                                                          5uLL);
                                                        array_count = 0;
                                                        for ( i = 0; i <= 4; ++i )
                                                        {
                                                          snprintf((char *)(v2 + 8832), 0x100uLL, asc_1ADAA7C0, i + 1);
                                                          *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 464);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 4640),
                                                            (const char *)(v2 + 8832),
                                                            (const std::allocator<char> *)(v2 + 464));
                                                          v60 = !common::tools::TxtFile::Row::hasKey(
                                                                   row,
                                                                   (const std::string *)(v2 + 4640));
                                                          std::string::~string((void *)(v2 + 4640));
                                                          *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 464);
                                                          *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                          if ( !v60 )
                                                          {
                                                            p_type = &std::vector<data::FightPropGrowConfig>::operator[](
                                                                        &this->prop_grow_curves,
                                                                        i)->type;
                                                            *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 480);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4704),
                                                              (const char *)(v2 + 8832),
                                                              (const std::allocator<char> *)(v2 + 480));
                                                            LOBYTE(p_type) = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
                                                                               row,
                                                                               (const std::string *)(v2 + 4704),
                                                                               p_type) != 0;
                                                            std::string::~string((void *)(v2 + 4704));
                                                            *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 480);
                                                            *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                            if ( (_BYTE)p_type )
                                                            {
                                                              *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 4768) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 4799) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 4799) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 4768, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 4768),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                "init",
                                                                472);
                                                              v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 4768),
                                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                                              v63 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                                      v62,
                                                                      (const char (*)[14])byte_1AD38B80);
                                                              v64 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                                      v63,
                                                                      (const char (*)[256])(v2 + 8832));
                                                              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                                v64,
                                                                (const char (*)[7])byte_1AD38BC0);
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4768));
                                                              *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = -117901064;
                                                              v7 = -1;
                                                              goto LABEL_253;
                                                            }
                                                            snprintf((char *)(v2 + 8832), 0x100uLL, asc_1ADAA800, i + 1);
                                                            *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 496);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4832),
                                                              (const char *)(v2 + 8832),
                                                              (const std::allocator<char> *)(v2 + 496));
                                                            v65 = !common::tools::TxtFile::Row::hasKey(
                                                                     row,
                                                                     (const std::string *)(v2 + 4832));
                                                            std::string::~string((void *)(v2 + 4832));
                                                            *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 496);
                                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                            if ( !v65 )
                                                            {
                                                              p_grow_curve = &std::vector<data::FightPropGrowConfig>::operator[](
                                                                                &this->prop_grow_curves,
                                                                                i)->grow_curve;
                                                              *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = 0;
                                                              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 512);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 4896),
                                                                (const char *)(v2 + 8832),
                                                                (const std::allocator<char> *)(v2 + 512));
                                                              LOBYTE(p_grow_curve) = common::tools::TxtFile::Row::assignToEnum<data::GrowCurveType>(
                                                                                       row,
                                                                                       (const std::string *)(v2 + 4896),
                                                                                       p_grow_curve) != 0;
                                                              std::string::~string((void *)(v2 + 4896));
                                                              *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 512);
                                                              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                                              if ( (_BYTE)p_grow_curve )
                                                              {
                                                                *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v2 + 4960) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v2 + 4991) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 4991) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v2 + 4960, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v2 + 4960),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                  "init",
                                                                  480);
                                                                v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                        (common::milog::MiLogStream *const)(v2 + 4960),
                                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                                v68 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                                        v67,
                                                                        (const char (*)[14])byte_1AD38B80);
                                                                v69 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                                        v68,
                                                                        (const char (*)[256])(v2 + 8832));
                                                                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                                  v69,
                                                                  (const char (*)[7])byte_1AD38BC0);
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4960));
                                                                *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = -117901064;
                                                                v7 = -1;
                                                                goto LABEL_253;
                                                              }
                                                              array_count = i + 1;
                                                            }
                                                          }
                                                        }
                                                        std::vector<data::FightPropGrowConfig>::resize(
                                                          &this->prop_grow_curves,
                                                          array_count);
                                                        *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 528);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 5024),
                                                          &byte_1ADAA840,
                                                          (const std::allocator<char> *)(v2 + 528));
                                                        v70 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                row,
                                                                (const std::string *)(v2 + 5024),
                                                                &this->element_mastery) != 0;
                                                        std::string::~string((void *)(v2 + 5024));
                                                        *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 528);
                                                        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                                        if ( v70 )
                                                        {
                                                          *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 5088) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 5119) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 5119) >> 3) + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 5088, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 5088),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                            "init",
                                                            489);
                                                          v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                  (common::milog::MiLogStream *const)(v2 + 5088),
                                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                            v71,
                                                            (const char (*)[33])byte_1ADAA880);
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5088));
                                                          *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = -117901064;
                                                          v7 = -1;
                                                        }
                                                        else
                                                        {
                                                          *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 544);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 5152),
                                                            &byte_1ADAA8E0,
                                                            (const std::allocator<char> *)(v2 + 544));
                                                          v72 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                  row,
                                                                  (const std::string *)(v2 + 5152),
                                                                  &this->physical_sub_hurt) != 0;
                                                          std::string::~string((void *)(v2 + 5152));
                                                          *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 544);
                                                          *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                                          if ( v72 )
                                                          {
                                                            *(_DWORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 5216) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 5247) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 5247) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 5216, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v2 + 5216),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              4u,
                                                              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                              "init",
                                                              494);
                                                            v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                    (common::milog::MiLogStream *const)(v2 + 5216),
                                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                              v73,
                                                              (const char (*)[33])byte_1ADAA920);
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5216));
                                                            *(_DWORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = -117901064;
                                                            v7 = -1;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 560);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 5280),
                                                              &byte_1ADAA980,
                                                              (const std::allocator<char> *)(v2 + 560));
                                                            v74 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                    row,
                                                                    (const std::string *)(v2 + 5280),
                                                                    &this->physical_add_hurt) != 0;
                                                            std::string::~string((void *)(v2 + 5280));
                                                            *(_DWORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 560);
                                                            *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                                            if ( v74 )
                                                            {
                                                              *(_DWORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 5344) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 5375) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 5375) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 5344, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 5344),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                "init",
                                                                499);
                                                              v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 5344),
                                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                                              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                v75,
                                                                (const char (*)[39])byte_1ADAA9C0);
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5344));
                                                              *(_DWORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = -117901064;
                                                              v7 = -1;
                                                            }
                                                            else
                                                            {
                                                              *(_DWORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = 0;
                                                              *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 576);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 5408),
                                                                &byte_1AD3FD80,
                                                                (const std::allocator<char> *)(v2 + 576));
                                                              v76 = common::tools::TxtFile::Row::assignToEnum<data::MonsterType>(
                                                                      row,
                                                                      (const std::string *)(v2 + 5408),
                                                                      &this->type) != 0;
                                                              std::string::~string((void *)(v2 + 5408));
                                                              *(_DWORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 576);
                                                              *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                                                              if ( v76 )
                                                              {
                                                                *(_DWORD *)(((v2 + 5472) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v2 + 5472) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v2 + 5503) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 5503) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v2 + 5472, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v2 + 5472),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                  "init",
                                                                  504);
                                                                v77 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                        (common::milog::MiLogStream *const)(v2 + 5472),
                                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                                                  v77,
                                                                  (const char (*)[27])byte_1AD3FDC0);
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5472));
                                                                *(_DWORD *)(((v2 + 5472) >> 3) + 0x7FFF8000) = -117901064;
                                                                v7 = -1;
                                                              }
                                                              else
                                                              {
                                                                *(_DWORD *)(((v2 + 5536) >> 3) + 0x7FFF8000) = 0;
                                                                *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
                                                                std::allocator<char>::allocator(v2 + 592);
                                                                std::string::basic_string<std::allocator<char>>(
                                                                  (std::string *const)(v2 + 5536),
                                                                  &byte_1ADAAA20,
                                                                  (const std::allocator<char> *)(v2 + 592));
                                                                v78 = common::tools::TxtFile::Row::assignToEnum<data::MonsterSecurityLevel>(
                                                                        row,
                                                                        (const std::string *)(v2 + 5536),
                                                                        &this->security_level) != 0;
                                                                std::string::~string((void *)(v2 + 5536));
                                                                *(_DWORD *)(((v2 + 5536) >> 3) + 0x7FFF8000) = -117901064;
                                                                std::allocator<char>::~allocator(v2 + 592);
                                                                *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                                                                if ( v78 )
                                                                {
                                                                  *(_DWORD *)(((v2 + 5600) >> 3) + 0x7FFF8000) = 0;
                                                                  if ( *(char *)(((v2 + 5600) >> 3) + 0x7FFF8000) < 0
                                                                    || *(_BYTE *)(((v2 + 5631) >> 3) + 0x7FFF8000) != 0
                                                                    && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 5631) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    __asan_report_store_n(v2 + 5600, 32LL);
                                                                  }
                                                                  common::milog::MiLogStream::create(
                                                                    (common::milog::MiLogStream *)(v2 + 5600),
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    4u,
                                                                    "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                    "init",
                                                                    509);
                                                                  v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                          (common::milog::MiLogStream *const)(v2 + 5600),
                                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                    v79,
                                                                    (const char (*)[33])byte_1ADAAA60);
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5600));
                                                                  *(_DWORD *)(((v2 + 5600) >> 3) + 0x7FFF8000) = -117901064;
                                                                  v7 = -1;
                                                                }
                                                                else
                                                                {
                                                                  *(_DWORD *)(((v2 + 5664) >> 3) + 0x7FFF8000) = 0;
                                                                  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
                                                                  std::allocator<char>::allocator(v2 + 608);
                                                                  std::string::basic_string<std::allocator<char>>(
                                                                    (std::string *const)(v2 + 5664),
                                                                    &byte_1AD5AFC0,
                                                                    (const std::allocator<char> *)(v2 + 608));
                                                                  v80 = common::tools::TxtFile::Row::assignToStr(
                                                                          row,
                                                                          (const std::string *)(v2 + 5664),
                                                                          &this->server_script) != 0;
                                                                  std::string::~string((void *)(v2 + 5664));
                                                                  *(_DWORD *)(((v2 + 5664) >> 3) + 0x7FFF8000) = -117901064;
                                                                  std::allocator<char>::~allocator(v2 + 608);
                                                                  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                                                                  if ( v80 )
                                                                  {
                                                                    *(_DWORD *)(((v2 + 5728) >> 3) + 0x7FFF8000) = 0;
                                                                    if ( *(char *)(((v2 + 5728) >> 3) + 0x7FFF8000) < 0
                                                                      || *(_BYTE *)(((v2 + 5759) >> 3) + 0x7FFF8000) != 0
                                                                      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 5759) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      __asan_report_store_n(v2 + 5728, 32LL);
                                                                    }
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)(v2 + 5728),
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      4u,
                                                                      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                      "init",
                                                                      514);
                                                                    v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                            (common::milog::MiLogStream *const)(v2 + 5728),
                                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                                      v81,
                                                                      (const char (*)[36])byte_1AD5B000);
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5728));
                                                                    *(_DWORD *)(((v2 + 5728) >> 3) + 0x7FFF8000) = -117901064;
                                                                    v7 = -1;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(((v2 + 5792) >> 3) + 0x7FFF8000) = 0;
                                                                    *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
                                                                    std::allocator<char>::allocator(v2 + 624);
                                                                    std::string::basic_string<std::allocator<char>>(
                                                                      (std::string *const)(v2 + 5792),
                                                                      &byte_1ADAAAC0,
                                                                      (const std::allocator<char> *)(v2 + 624));
                                                                    v82 = common::tools::TxtFile::Row::assignToStr(
                                                                            row,
                                                                            (const std::string *)(v2 + 5792),
                                                                            &this->combat_config) != 0;
                                                                    std::string::~string((void *)(v2 + 5792));
                                                                    *(_DWORD *)(((v2 + 5792) >> 3) + 0x7FFF8000) = -117901064;
                                                                    std::allocator<char>::~allocator(v2 + 624);
                                                                    *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                                                                    if ( v82 )
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5856) >> 3) + 0x7FFF8000) = 0;
                                                                      if ( *(char *)(((v2 + 5856) >> 3) + 0x7FFF8000) < 0
                                                                        || *(_BYTE *)(((v2 + 5887) >> 3) + 0x7FFF8000) != 0
                                                                        && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 5887) >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_store_n(v2 + 5856, 32LL);
                                                                      }
                                                                      common::milog::MiLogStream::create(
                                                                        (common::milog::MiLogStream *)(v2 + 5856),
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        4u,
                                                                        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                        "init",
                                                                        519);
                                                                      v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                              (common::milog::MiLogStream *const)(v2 + 5856),
                                                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                                                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                        v83,
                                                                        (const char (*)[33])byte_1ADAAB00);
                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5856));
                                                                      *(_DWORD *)(((v2 + 5856) >> 3) + 0x7FFF8000) = -117901064;
                                                                      v7 = -1;
                                                                    }
                                                                    else
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5920) >> 3) + 0x7FFF8000) = 0;
                                                                      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
                                                                      std::allocator<char>::allocator(v2 + 640);
                                                                      std::string::basic_string<std::allocator<char>>(
                                                                        (std::string *const)(v2 + 5920),
                                                                        &byte_1ADAAB60,
                                                                        (const std::allocator<char> *)(v2 + 640));
                                                                      v84 = common::tools::TxtFile::Row::assignToStr(
                                                                              row,
                                                                              (const std::string *)(v2 + 5920),
                                                                              (std::string *)(v2 + 1120)) != 0;
                                                                      std::string::~string((void *)(v2 + 5920));
                                                                      *(_DWORD *)(((v2 + 5920) >> 3) + 0x7FFF8000) = -117901064;
                                                                      std::allocator<char>::~allocator(v2 + 640);
                                                                      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
                                                                      if ( v84 )
                                                                      {
                                                                        *(_DWORD *)(((v2 + 5984) >> 3) + 0x7FFF8000) = 0;
                                                                        if ( *(char *)(((v2 + 5984) >> 3) + 0x7FFF8000) < 0
                                                                          || *(_BYTE *)(((v2 + 6015) >> 3) + 0x7FFF8000) != 0
                                                                          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 6015) >> 3) + 0x7FFF8000) )
                                                                        {
                                                                          __asan_report_store_n(v2 + 5984, 32LL);
                                                                        }
                                                                        common::milog::MiLogStream::create(
                                                                          (common::milog::MiLogStream *)(v2 + 5984),
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          4u,
                                                                          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                          "init",
                                                                          524);
                                                                        v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                (common::milog::MiLogStream *const)(v2 + 5984),
                                                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                                                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                          v85,
                                                                          (const char (*)[33])byte_1ADAABA0);
                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5984));
                                                                        *(_DWORD *)(((v2 + 5984) >> 3) + 0x7FFF8000) = -117901064;
                                                                        v7 = -1;
                                                                      }
                                                                      else
                                                                      {
                                                                        v86 = ((v2 + 1056) >> 3) + 2147450880;
                                                                        *(_WORD *)v86 = 0;
                                                                        *(_BYTE *)(v86 + 2) = 0;
                                                                        v87 = (_DWORD *)(((v2 + 8736) >> 3) + 2147450880);
                                                                        *v87 = 0;
                                                                        v87[1] = 0;
                                                                        *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
                                                                        std::allocator<char>::allocator(v2 + 656);
                                                                        std::string::basic_string<std::allocator<char>>(
                                                                          (std::string *const)(v2 + 8736),
                                                                          ";",
                                                                          (const std::allocator<char> *)(v2 + 656));
                                                                        *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 1;
                                                                        std::allocator<char>::allocator(v2 + 672);
                                                                        std::string::basic_string<std::allocator<char>>(
                                                                          (std::string *const)(v2 + 8768),
                                                                          ",",
                                                                          (const std::allocator<char> *)(v2 + 672));
                                                                        __la._M_array = (std::initializer_list<std::string >::iterator)(v2 + 8736);
                                                                        __la._M_len = 2LL;
                                                                        *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = 1;
                                                                        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 688));
                                                                        std::vector<std::string>::vector(
                                                                          (std::vector<std::string> *const)(v2 + 1056),
                                                                          __la,
                                                                          (const std::vector<std::string>::allocator_type *)(v2 + 688));
                                                                        __l = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                                                                (const std::string *)(v2 + 1120),
                                                                                (const std::vector<std::string> *)(v2 + 1056),
                                                                                &this->affix,
                                                                                1) != 0;
                                                                        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 1056));
                                                                        v88 = ((v2 + 1056) >> 3) + 2147450880;
                                                                        *(_WORD *)v88 = -1800;
                                                                        *(_BYTE *)(v88 + 2) = -8;
                                                                        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 688));
                                                                        *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
                                                                        for ( j = (char *)(v2 + 8800);
                                                                              j != (char *)(v2 + 8736);
                                                                              std::string::~string(j) )
                                                                        {
                                                                          j -= 32;
                                                                        }
                                                                        v90 = (_DWORD *)(((v2 + 8736) >> 3) + 2147450880);
                                                                        *v90 = -117901064;
                                                                        v90[1] = -117901064;
                                                                        std::allocator<char>::~allocator(v2 + 672);
                                                                        *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
                                                                        std::allocator<char>::~allocator(v2 + 656);
                                                                        *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                                                                        if ( __l )
                                                                        {
                                                                          *(_DWORD *)(((v2 + 6048) >> 3) + 0x7FFF8000) = 0;
                                                                          if ( *(char *)(((v2 + 6048) >> 3) + 0x7FFF8000) < 0
                                                                            || *(_BYTE *)(((v2 + 6079) >> 3) + 0x7FFF8000) != 0
                                                                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 6079) >> 3) + 0x7FFF8000) )
                                                                          {
                                                                            __asan_report_store_n(v2 + 6048, 32LL);
                                                                          }
                                                                          common::milog::MiLogStream::create(
                                                                            (common::milog::MiLogStream *)(v2 + 6048),
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            4u,
                                                                            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                            "init",
                                                                            529);
                                                                          v91 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                  (common::milog::MiLogStream *const)(v2 + 6048),
                                                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                                                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                            v91,
                                                                            (const char (*)[33])byte_1ADAABA0);
                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6048));
                                                                          *(_DWORD *)(((v2 + 6048) >> 3) + 0x7FFF8000) = -117901064;
                                                                          v7 = -1;
                                                                        }
                                                                        else
                                                                        {
                                                                          *(_DWORD *)(((v2 + 6112) >> 3) + 0x7FFF8000) = 0;
                                                                          *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = 1;
                                                                          std::allocator<char>::allocator(v2 + 704);
                                                                          std::string::basic_string<std::allocator<char>>(
                                                                            (std::string *const)(v2 + 6112),
                                                                            "AI",
                                                                            (const std::allocator<char> *)(v2 + 704));
                                                                          v92 = common::tools::TxtFile::Row::assignToStr(
                                                                                  row,
                                                                                  (const std::string *)(v2 + 6112),
                                                                                  &this->ai) != 0;
                                                                          std::string::~string((void *)(v2 + 6112));
                                                                          *(_DWORD *)(((v2 + 6112) >> 3) + 0x7FFF8000) = -117901064;
                                                                          std::allocator<char>::~allocator(v2 + 704);
                                                                          *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
                                                                          if ( v92 )
                                                                          {
                                                                            *(_DWORD *)(((v2 + 6176) >> 3) + 0x7FFF8000) = 0;
                                                                            if ( *(char *)(((v2 + 6176) >> 3)
                                                                                         + 0x7FFF8000) < 0
                                                                              || *(_BYTE *)(((v2 + 6207) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 6207) >> 3) + 0x7FFF8000) )
                                                                            {
                                                                              __asan_report_store_n(v2 + 6176, 32LL);
                                                                            }
                                                                            common::milog::MiLogStream::create(
                                                                              (common::milog::MiLogStream *)(v2 + 6176),
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              4u,
                                                                              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                              "init",
                                                                              534);
                                                                            v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                    (common::milog::MiLogStream *const)(v2 + 6176),
                                                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                                                            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                                                                              v93,
                                                                              (const char (*)[23])byte_1ADAAC40);
                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6176));
                                                                            *(_DWORD *)(((v2 + 6176) >> 3) + 0x7FFF8000) = -117901064;
                                                                            v7 = -1;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)(((v2 + 6240) >> 3) + 0x7FFF8000) = 0;
                                                                            *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = 1;
                                                                            std::allocator<char>::allocator(v2 + 720);
                                                                            std::string::basic_string<std::allocator<char>>(
                                                                              (std::string *const)(v2 + 6240),
                                                                              &byte_1ADAAC80,
                                                                              (const std::allocator<char> *)(v2 + 720));
                                                                            v94 = common::tools::TxtFile::Row::assignToNum<bool>(
                                                                                    row,
                                                                                    (const std::string *)(v2 + 6240),
                                                                                    &this->is_ai_hash_check) != 0;
                                                                            std::string::~string((void *)(v2 + 6240));
                                                                            *(_DWORD *)(((v2 + 6240) >> 3) + 0x7FFF8000) = -117901064;
                                                                            std::allocator<char>::~allocator(v2 + 720);
                                                                            *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
                                                                            if ( v94 )
                                                                            {
                                                                              *(_DWORD *)(((v2 + 6304) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v2 + 6304) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v2 + 6335) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 6335) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v2 + 6304, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v2 + 6304),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                                "init",
                                                                                539);
                                                                              v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                      (common::milog::MiLogStream *const)(v2 + 6304),
                                                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                                                              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                                                v95,
                                                                                (const char (*)[35])byte_1ADAACC0);
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6304));
                                                                              *(_DWORD *)(((v2 + 6304) >> 3) + 0x7FFF8000) = -117901064;
                                                                              v7 = -1;
                                                                            }
                                                                            else
                                                                            {
                                                                              std::vector<unsigned int>::resize(
                                                                                &this->equips,
                                                                                4uLL);
                                                                              array_counta = 0;
                                                                              for ( i_0 = 0; i_0 <= 3; ++i_0 )
                                                                              {
                                                                                snprintf(
                                                                                  (char *)(v2 + 8832),
                                                                                  0x100uLL,
                                                                                  &byte_1ADAAD20,
                                                                                  i_0 + 1);
                                                                                *(_DWORD *)(((v2 + 6368) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = 1;
                                                                                std::allocator<char>::allocator(v2 + 736);
                                                                                std::string::basic_string<std::allocator<char>>(
                                                                                  (std::string *const)(v2 + 6368),
                                                                                  (const char *)(v2 + 8832),
                                                                                  (const std::allocator<char> *)(v2 + 736));
                                                                                v96 = !common::tools::TxtFile::Row::hasKey(
                                                                                         row,
                                                                                         (const std::string *)(v2 + 6368));
                                                                                std::string::~string((void *)(v2 + 6368));
                                                                                *(_DWORD *)(((v2 + 6368) >> 3)
                                                                                          + 0x7FFF8000) = -117901064;
                                                                                std::allocator<char>::~allocator(v2 + 736);
                                                                                *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
                                                                                if ( !v96 )
                                                                                {
                                                                                  v97 = std::vector<unsigned int>::operator[](
                                                                                          &this->equips,
                                                                                          i_0);
                                                                                  *(_DWORD *)(((v2 + 6432) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  *(_BYTE *)(((v2 + 752) >> 3)
                                                                                           + 0x7FFF8000) = 1;
                                                                                  std::allocator<char>::allocator(v2 + 752);
                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                    (std::string *const)(v2 + 6432),
                                                                                    (const char *)(v2 + 8832),
                                                                                    (const std::allocator<char> *)(v2 + 752));
                                                                                  LOBYTE(v97) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                                                                  row,
                                                                                                  (const std::string *)(v2 + 6432),
                                                                                                  v97) != 0;
                                                                                  std::string::~string((void *)(v2 + 6432));
                                                                                  *(_DWORD *)(((v2 + 6432) >> 3)
                                                                                            + 0x7FFF8000) = -117901064;
                                                                                  std::allocator<char>::~allocator(v2 + 752);
                                                                                  *(_BYTE *)(((v2 + 752) >> 3)
                                                                                           + 0x7FFF8000) = -8;
                                                                                  if ( (_BYTE)v97 )
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 6496) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    if ( *(char *)(((v2 + 6496) >> 3)
                                                                                                 + 0x7FFF8000) < 0
                                                                                      || *(_BYTE *)(((v2 + 6527) >> 3)
                                                                                                  + 0x7FFF8000) != 0
                                                                                      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 6527) >> 3) + 0x7FFF8000) )
                                                                                    {
                                                                                      __asan_report_store_n(
                                                                                        v2 + 6496,
                                                                                        32LL);
                                                                                    }
                                                                                    common::milog::MiLogStream::create(
                                                                                      (common::milog::MiLogStream *)(v2 + 6496),
                                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                                      4u,
                                                                                      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                                      "init",
                                                                                      551);
                                                                                    v98 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                            (common::milog::MiLogStream *const)(v2 + 6496),
                                                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                    v99 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                                                            v98,
                                                                                            (const char (*)[14])byte_1AD38B80);
                                                                                    v100 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                                                             v99,
                                                                                             (const char (*)[256])(v2 + 8832));
                                                                                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                                                      v100,
                                                                                      (const char (*)[7])byte_1AD38BC0);
                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6496));
                                                                                    *(_DWORD *)(((v2 + 6496) >> 3)
                                                                                              + 0x7FFF8000) = -117901064;
                                                                                    v7 = -1;
                                                                                    goto LABEL_253;
                                                                                  }
                                                                                  array_counta = i_0 + 1;
                                                                                }
                                                                              }
                                                                              std::vector<unsigned int>::resize(
                                                                                &this->equips,
                                                                                array_counta);
                                                                              *(_DWORD *)(((v2 + 6560) >> 3) + 0x7FFF8000) = 0;
                                                                              *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = 1;
                                                                              std::allocator<char>::allocator(v2 + 768);
                                                                              std::string::basic_string<std::allocator<char>>(
                                                                                (std::string *const)(v2 + 6560),
                                                                                &byte_1ADAAD60,
                                                                                (const std::allocator<char> *)(v2 + 768));
                                                                              v101 = common::tools::TxtFile::Row::assignToNum<bool>(
                                                                                       row,
                                                                                       (const std::string *)(v2 + 6560),
                                                                                       &this->can_swim) != 0;
                                                                              std::string::~string((void *)(v2 + 6560));
                                                                              *(_DWORD *)(((v2 + 6560) >> 3) + 0x7FFF8000) = -117901064;
                                                                              std::allocator<char>::~allocator(v2 + 768);
                                                                              *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
                                                                              if ( v101 )
                                                                              {
                                                                                *(_DWORD *)(((v2 + 6624) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                if ( *(char *)(((v2 + 6624) >> 3)
                                                                                             + 0x7FFF8000) < 0
                                                                                  || *(_BYTE *)(((v2 + 6655) >> 3)
                                                                                              + 0x7FFF8000) != 0
                                                                                  && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 6655) >> 3) + 0x7FFF8000) )
                                                                                {
                                                                                  __asan_report_store_n(v2 + 6624, 32LL);
                                                                                }
                                                                                common::milog::MiLogStream::create(
                                                                                  (common::milog::MiLogStream *)(v2 + 6624),
                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                  4u,
                                                                                  "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                                  "init",
                                                                                  560);
                                                                                v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                         (common::milog::MiLogStream *const)(v2 + 6624),
                                                                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                                                                  v102,
                                                                                  (const char (*)[30])byte_1ADAADA0);
                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6624));
                                                                                *(_DWORD *)(((v2 + 6624) >> 3)
                                                                                          + 0x7FFF8000) = -117901064;
                                                                                v7 = -1;
                                                                              }
                                                                              else
                                                                              {
                                                                                std::vector<data::MonsterDrop>::resize(
                                                                                  &this->hp_drops,
                                                                                  5uLL);
                                                                                array_countb = 0;
                                                                                for ( i_1 = 0; i_1 <= 4; ++i_1 )
                                                                                {
                                                                                  snprintf(
                                                                                    (char *)(v2 + 8832),
                                                                                    0x100uLL,
                                                                                    asc_1ADAADE0,
                                                                                    i_1 + 1);
                                                                                  *(_DWORD *)(((v2 + 6688) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  *(_BYTE *)(((v2 + 784) >> 3)
                                                                                           + 0x7FFF8000) = 1;
                                                                                  std::allocator<char>::allocator(v2 + 784);
                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                    (std::string *const)(v2 + 6688),
                                                                                    (const char *)(v2 + 8832),
                                                                                    (const std::allocator<char> *)(v2 + 784));
                                                                                  v103 = !common::tools::TxtFile::Row::hasKey(
                                                                                            row,
                                                                                            (const std::string *)(v2 + 6688));
                                                                                  std::string::~string((void *)(v2 + 6688));
                                                                                  *(_DWORD *)(((v2 + 6688) >> 3)
                                                                                            + 0x7FFF8000) = -117901064;
                                                                                  std::allocator<char>::~allocator(v2 + 784);
                                                                                  *(_BYTE *)(((v2 + 784) >> 3)
                                                                                           + 0x7FFF8000) = -8;
                                                                                  if ( !v103 )
                                                                                  {
                                                                                    p_drop_id = &std::vector<data::MonsterDrop>::operator[](
                                                                                                   &this->hp_drops,
                                                                                                   i_1)->drop_id;
                                                                                    *(_DWORD *)(((v2 + 6752) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    *(_BYTE *)(((v2 + 800) >> 3)
                                                                                             + 0x7FFF8000) = 1;
                                                                                    std::allocator<char>::allocator(v2 + 800);
                                                                                    std::string::basic_string<std::allocator<char>>(
                                                                                      (std::string *const)(v2 + 6752),
                                                                                      (const char *)(v2 + 8832),
                                                                                      (const std::allocator<char> *)(v2 + 800));
                                                                                    LOBYTE(p_drop_id) = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 6752), p_drop_id) != 0;
                                                                                    std::string::~string((void *)(v2 + 6752));
                                                                                    *(_DWORD *)(((v2 + 6752) >> 3)
                                                                                              + 0x7FFF8000) = -117901064;
                                                                                    std::allocator<char>::~allocator(v2 + 800);
                                                                                    *(_BYTE *)(((v2 + 800) >> 3)
                                                                                             + 0x7FFF8000) = -8;
                                                                                    if ( (_BYTE)p_drop_id )
                                                                                    {
                                                                                      *(_DWORD *)(((v2 + 6816) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      if ( *(char *)(((v2 + 6816) >> 3) + 0x7FFF8000) < 0
                                                                                        || *(_BYTE *)(((v2 + 6847) >> 3) + 0x7FFF8000) != 0
                                                                                        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 6847) >> 3) + 0x7FFF8000) )
                                                                                      {
                                                                                        __asan_report_store_n(
                                                                                          v2 + 6816,
                                                                                          32LL);
                                                                                      }
                                                                                      common::milog::MiLogStream::create(
                                                                                        (common::milog::MiLogStream *)(v2 + 6816),
                                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                                        4u,
                                                                                        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                                        "init",
                                                                                        572);
                                                                                      v105 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                               (common::milog::MiLogStream *const)(v2 + 6816),
                                                                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                      v106 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                                                               v105,
                                                                                               (const char (*)[14])byte_1AD38B80);
                                                                                      v107 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                                                               v106,
                                                                                               (const char (*)[256])(v2 + 8832));
                                                                                      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                                                        v107,
                                                                                        (const char (*)[7])byte_1AD38BC0);
                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6816));
                                                                                      *(_DWORD *)(((v2 + 6816) >> 3)
                                                                                                + 0x7FFF8000) = -117901064;
                                                                                      v7 = -1;
                                                                                      goto LABEL_253;
                                                                                    }
                                                                                    snprintf(
                                                                                      (char *)(v2 + 8832),
                                                                                      0x100uLL,
                                                                                      asc_1ADAAE20,
                                                                                      i_1 + 1);
                                                                                    *(_DWORD *)(((v2 + 6880) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    *(_BYTE *)(((v2 + 816) >> 3)
                                                                                             + 0x7FFF8000) = 1;
                                                                                    std::allocator<char>::allocator(v2 + 816);
                                                                                    std::string::basic_string<std::allocator<char>>(
                                                                                      (std::string *const)(v2 + 6880),
                                                                                      (const char *)(v2 + 8832),
                                                                                      (const std::allocator<char> *)(v2 + 816));
                                                                                    v108 = !common::tools::TxtFile::Row::hasKey(
                                                                                              row,
                                                                                              (const std::string *)(v2 + 6880));
                                                                                    std::string::~string((void *)(v2 + 6880));
                                                                                    *(_DWORD *)(((v2 + 6880) >> 3)
                                                                                              + 0x7FFF8000) = -117901064;
                                                                                    std::allocator<char>::~allocator(v2 + 816);
                                                                                    *(_BYTE *)(((v2 + 816) >> 3)
                                                                                             + 0x7FFF8000) = -8;
                                                                                    if ( !v108 )
                                                                                    {
                                                                                      p_hp_percent = &std::vector<data::MonsterDrop>::operator[](&this->hp_drops, i_1)->hp_percent;
                                                                                      *(_DWORD *)(((v2 + 6944) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      *(_BYTE *)(((v2 + 832) >> 3)
                                                                                               + 0x7FFF8000) = 1;
                                                                                      std::allocator<char>::allocator(v2 + 832);
                                                                                      std::string::basic_string<std::allocator<char>>(
                                                                                        (std::string *const)(v2 + 6944),
                                                                                        (const char *)(v2 + 8832),
                                                                                        (const std::allocator<char> *)(v2 + 832));
                                                                                      LOBYTE(p_hp_percent) = common::tools::TxtFile::Row::assignToNum<float>(row, (const std::string *)(v2 + 6944), p_hp_percent) != 0;
                                                                                      std::string::~string((void *)(v2 + 6944));
                                                                                      *(_DWORD *)(((v2 + 6944) >> 3)
                                                                                                + 0x7FFF8000) = -117901064;
                                                                                      std::allocator<char>::~allocator(v2 + 832);
                                                                                      *(_BYTE *)(((v2 + 832) >> 3)
                                                                                               + 0x7FFF8000) = -8;
                                                                                      if ( (_BYTE)p_hp_percent )
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 7008) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        if ( *(char *)(((v2 + 7008) >> 3) + 0x7FFF8000) < 0
                                                                                          || *(_BYTE *)(((v2 + 7039) >> 3) + 0x7FFF8000) != 0
                                                                                          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 7039) >> 3) + 0x7FFF8000) )
                                                                                        {
                                                                                          __asan_report_store_n(
                                                                                            v2 + 7008,
                                                                                            32LL);
                                                                                        }
                                                                                        common::milog::MiLogStream::create(
                                                                                          (common::milog::MiLogStream *)(v2 + 7008),
                                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                                          4u,
                                                                                          "./src/txt_data_auto/MonsterExc"
                                                                                          "elConfig.gen.cpp",
                                                                                          "init",
                                                                                          580);
                                                                                        v110 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                                 (common::milog::MiLogStream *const)(v2 + 7008),
                                                                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                        v111 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                                                                 v110,
                                                                                                 (const char (*)[14])byte_1AD38B80);
                                                                                        v112 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                                                                 v111,
                                                                                                 (const char (*)[256])(v2 + 8832));
                                                                                        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                                                          v112,
                                                                                          (const char (*)[7])byte_1AD38BC0);
                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7008));
                                                                                        *(_DWORD *)(((v2 + 7008) >> 3)
                                                                                                  + 0x7FFF8000) = -117901064;
                                                                                        v7 = -1;
                                                                                        goto LABEL_253;
                                                                                      }
                                                                                      array_countb = i_1 + 1;
                                                                                    }
                                                                                  }
                                                                                }
                                                                                std::vector<data::MonsterDrop>::resize(
                                                                                  &this->hp_drops,
                                                                                  array_countb);
                                                                                *(_DWORD *)(((v2 + 7072) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = 1;
                                                                                std::allocator<char>::allocator(v2 + 848);
                                                                                std::string::basic_string<std::allocator<char>>(
                                                                                  (std::string *const)(v2 + 7072),
                                                                                  &byte_1ADAAE60,
                                                                                  (const std::allocator<char> *)(v2 + 848));
                                                                                v113 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                                                         row,
                                                                                         (const std::string *)(v2 + 7072),
                                                                                         &this->kill_drop_id) != 0;
                                                                                std::string::~string((void *)(v2 + 7072));
                                                                                *(_DWORD *)(((v2 + 7072) >> 3)
                                                                                          + 0x7FFF8000) = -117901064;
                                                                                std::allocator<char>::~allocator(v2 + 848);
                                                                                *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
                                                                                if ( v113 )
                                                                                {
                                                                                  *(_DWORD *)(((v2 + 7136) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  if ( *(char *)(((v2 + 7136) >> 3)
                                                                                               + 0x7FFF8000) < 0
                                                                                    || *(_BYTE *)(((v2 + 7167) >> 3)
                                                                                                + 0x7FFF8000) != 0
                                                                                    && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 7167) >> 3) + 0x7FFF8000) )
                                                                                  {
                                                                                    __asan_report_store_n(
                                                                                      v2 + 7136,
                                                                                      32LL);
                                                                                  }
                                                                                  common::milog::MiLogStream::create(
                                                                                    (common::milog::MiLogStream *)(v2 + 7136),
                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                    4u,
                                                                                    "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                                    "init",
                                                                                    589);
                                                                                  v114 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                           (common::milog::MiLogStream *const)(v2 + 7136),
                                                                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                                                    v114,
                                                                                    (const char (*)[35])byte_1ADAAEA0);
                                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7136));
                                                                                  *(_DWORD *)(((v2 + 7136) >> 3)
                                                                                            + 0x7FFF8000) = -117901064;
                                                                                  v7 = -1;
                                                                                }
                                                                                else
                                                                                {
                                                                                  *(_DWORD *)(((v2 + 7200) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  *(_BYTE *)(((v2 + 864) >> 3)
                                                                                           + 0x7FFF8000) = 1;
                                                                                  std::allocator<char>::allocator(v2 + 864);
                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                    (std::string *const)(v2 + 7200),
                                                                                    &byte_1ADAAF00,
                                                                                    (const std::allocator<char> *)(v2 + 864));
                                                                                  v115 = common::tools::TxtFile::Row::assignToNum<bool>(
                                                                                           row,
                                                                                           (const std::string *)(v2 + 7200),
                                                                                           &this->is_scene_reward) != 0;
                                                                                  std::string::~string((void *)(v2 + 7200));
                                                                                  *(_DWORD *)(((v2 + 7200) >> 3)
                                                                                            + 0x7FFF8000) = -117901064;
                                                                                  std::allocator<char>::~allocator(v2 + 864);
                                                                                  *(_BYTE *)(((v2 + 864) >> 3)
                                                                                           + 0x7FFF8000) = -8;
                                                                                  if ( v115 )
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 7264) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    if ( *(char *)(((v2 + 7264) >> 3)
                                                                                                 + 0x7FFF8000) < 0
                                                                                      || *(_BYTE *)(((v2 + 7295) >> 3)
                                                                                                  + 0x7FFF8000) != 0
                                                                                      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 7295) >> 3) + 0x7FFF8000) )
                                                                                    {
                                                                                      __asan_report_store_n(
                                                                                        v2 + 7264,
                                                                                        32LL);
                                                                                    }
                                                                                    common::milog::MiLogStream::create(
                                                                                      (common::milog::MiLogStream *)(v2 + 7264),
                                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                                      4u,
                                                                                      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                                      "init",
                                                                                      594);
                                                                                    v116 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                             (common::milog::MiLogStream *const)(v2 + 7264),
                                                                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                                                      v116,
                                                                                      (const char (*)[36])byte_1ADAAF40);
                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7264));
                                                                                    *(_DWORD *)(((v2 + 7264) >> 3)
                                                                                              + 0x7FFF8000) = -117901064;
                                                                                    v7 = -1;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 7328) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    *(_BYTE *)(((v2 + 880) >> 3)
                                                                                             + 0x7FFF8000) = 1;
                                                                                    std::allocator<char>::allocator(v2 + 880);
                                                                                    std::string::basic_string<std::allocator<char>>(
                                                                                      (std::string *const)(v2 + 7328),
                                                                                      &byte_1AD5AF20,
                                                                                      (const std::allocator<char> *)(v2 + 880));
                                                                                    v117 = common::tools::TxtFile::Row::assignToEnum<data::VisionLevelType>(
                                                                                             row,
                                                                                             (const std::string *)(v2 + 7328),
                                                                                             &this->vision_level) != 0;
                                                                                    std::string::~string((void *)(v2 + 7328));
                                                                                    *(_DWORD *)(((v2 + 7328) >> 3)
                                                                                              + 0x7FFF8000) = -117901064;
                                                                                    std::allocator<char>::~allocator(v2 + 880);
                                                                                    *(_BYTE *)(((v2 + 880) >> 3)
                                                                                             + 0x7FFF8000) = -8;
                                                                                    if ( v117 )
                                                                                    {
                                                                                      *(_DWORD *)(((v2 + 7392) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      if ( *(char *)(((v2 + 7392) >> 3) + 0x7FFF8000) < 0
                                                                                        || *(_BYTE *)(((v2 + 7423) >> 3) + 0x7FFF8000) != 0
                                                                                        && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 7423) >> 3) + 0x7FFF8000) )
                                                                                      {
                                                                                        __asan_report_store_n(
                                                                                          v2 + 7392,
                                                                                          32LL);
                                                                                      }
                                                                                      common::milog::MiLogStream::create(
                                                                                        (common::milog::MiLogStream *)(v2 + 7392),
                                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                                        4u,
                                                                                        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                                        "init",
                                                                                        599);
                                                                                      v118 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                               (common::milog::MiLogStream *const)(v2 + 7392),
                                                                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                                        v118,
                                                                                        (const char (*)[33])byte_1AD5AF60);
                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7392));
                                                                                      *(_DWORD *)(((v2 + 7392) >> 3)
                                                                                                + 0x7FFF8000) = -117901064;
                                                                                      v7 = -1;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      *(_DWORD *)(((v2 + 7456) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      *(_BYTE *)(((v2 + 896) >> 3)
                                                                                               + 0x7FFF8000) = 1;
                                                                                      std::allocator<char>::allocator(v2 + 896);
                                                                                      std::string::basic_string<std::allocator<char>>(
                                                                                        (std::string *const)(v2 + 7456),
                                                                                        &byte_1ADAAFA0,
                                                                                        (const std::allocator<char> *)(v2 + 896));
                                                                                      v119 = common::tools::TxtFile::Row::assignToNum<bool>(
                                                                                               row,
                                                                                               (const std::string *)(v2 + 7456),
                                                                                               &this->is_invisible_reset) != 0;
                                                                                      std::string::~string((void *)(v2 + 7456));
                                                                                      *(_DWORD *)(((v2 + 7456) >> 3)
                                                                                                + 0x7FFF8000) = -117901064;
                                                                                      std::allocator<char>::~allocator(v2 + 896);
                                                                                      *(_BYTE *)(((v2 + 896) >> 3)
                                                                                               + 0x7FFF8000) = -8;
                                                                                      if ( v119 )
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 7520) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        if ( *(char *)(((v2 + 7520) >> 3) + 0x7FFF8000) < 0
                                                                                          || *(_BYTE *)(((v2 + 7551) >> 3) + 0x7FFF8000) != 0
                                                                                          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 7551) >> 3) + 0x7FFF8000) )
                                                                                        {
                                                                                          __asan_report_store_n(
                                                                                            v2 + 7520,
                                                                                            32LL);
                                                                                        }
                                                                                        common::milog::MiLogStream::create(
                                                                                          (common::milog::MiLogStream *)(v2 + 7520),
                                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                                          4u,
                                                                                          "./src/txt_data_auto/MonsterExc"
                                                                                          "elConfig.gen.cpp",
                                                                                          "init",
                                                                                          604);
                                                                                        v120 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                                 (common::milog::MiLogStream *const)(v2 + 7520),
                                                                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                                          v120,
                                                                                          (const char (*)[39])byte_1ADAAFE0);
                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7520));
                                                                                        *(_DWORD *)(((v2 + 7520) >> 3)
                                                                                                  + 0x7FFF8000) = -117901064;
                                                                                        v7 = -1;
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 7584) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        *(_BYTE *)(((v2 + 912) >> 3)
                                                                                                 + 0x7FFF8000) = 1;
                                                                                        std::allocator<char>::allocator(v2 + 912);
                                                                                        std::string::basic_string<std::allocator<char>>(
                                                                                          (std::string *const)(v2 + 7584),
                                                                                          &byte_1ADAB040,
                                                                                          (const std::allocator<char> *)(v2 + 912));
                                                                                        v121 = common::tools::TxtFile::Row::assignToStr(
                                                                                                 row,
                                                                                                 (const std::string *)(v2 + 7584),
                                                                                                 &this->exclude_weathers) != 0;
                                                                                        std::string::~string((void *)(v2 + 7584));
                                                                                        *(_DWORD *)(((v2 + 7584) >> 3)
                                                                                                  + 0x7FFF8000) = -117901064;
                                                                                        std::allocator<char>::~allocator(v2 + 912);
                                                                                        *(_BYTE *)(((v2 + 912) >> 3)
                                                                                                 + 0x7FFF8000) = -8;
                                                                                        if ( v121 )
                                                                                        {
                                                                                          *(_DWORD *)(((v2 + 7648) >> 3) + 0x7FFF8000) = 0;
                                                                                          if ( *(char *)(((v2 + 7648) >> 3) + 0x7FFF8000) < 0
                                                                                            || *(_BYTE *)(((v2 + 7679) >> 3) + 0x7FFF8000) != 0
                                                                                            && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 7679) >> 3) + 0x7FFF8000) )
                                                                                          {
                                                                                            __asan_report_store_n(
                                                                                              v2 + 7648,
                                                                                              32LL);
                                                                                          }
                                                                                          common::milog::MiLogStream::create(
                                                                                            (common::milog::MiLogStream *)(v2 + 7648),
                                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                                            4u,
                                                                                            "./src/txt_data_auto/MonsterE"
                                                                                            "xcelConfig.gen.cpp",
                                                                                            "init",
                                                                                            609);
                                                                                          v122 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                                   (common::milog::MiLogStream *const)(v2 + 7648),
                                                                                                   (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                                                                            v122,
                                                                                            (const char (*)[48])byte_1ADAB080);
                                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7648));
                                                                                          *(_DWORD *)(((v2 + 7648) >> 3) + 0x7FFF8000) = -117901064;
                                                                                          v7 = -1;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          *(_DWORD *)(((v2 + 7712) >> 3) + 0x7FFF8000) = 0;
                                                                                          *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = 1;
                                                                                          std::allocator<char>::allocator(v2 + 928);
                                                                                          std::string::basic_string<std::allocator<char>>(
                                                                                            (std::string *const)(v2 + 7712),
                                                                                            &byte_1AD44040,
                                                                                            (const std::allocator<char> *)(v2 + 928));
                                                                                          v123 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                                                                   row,
                                                                                                   (const std::string *)(v2 + 7712),
                                                                                                   &this->feature_tag_group_id) != 0;
                                                                                          std::string::~string((void *)(v2 + 7712));
                                                                                          *(_DWORD *)(((v2 + 7712) >> 3) + 0x7FFF8000) = -117901064;
                                                                                          std::allocator<char>::~allocator(v2 + 928);
                                                                                          *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
                                                                                          if ( v123 )
                                                                                          {
                                                                                            *(_DWORD *)(((v2 + 7776) >> 3) + 0x7FFF8000) = 0;
                                                                                            if ( *(char *)(((v2 + 7776) >> 3) + 0x7FFF8000) < 0
                                                                                              || *(_BYTE *)(((v2 + 7807) >> 3) + 0x7FFF8000) != 0
                                                                                              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 7807) >> 3) + 0x7FFF8000) )
                                                                                            {
                                                                                              __asan_report_store_n(
                                                                                                v2 + 7776,
                                                                                                32LL);
                                                                                            }
                                                                                            common::milog::MiLogStream::create(
                                                                                              (common::milog::MiLogStream *)(v2 + 7776),
                                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                                              4u,
                                                                                              "./src/txt_data_auto/Monste"
                                                                                              "rExcelConfig.gen.cpp",
                                                                                              "init",
                                                                                              614);
                                                                                            v124 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                                     (common::milog::MiLogStream *const)(v2 + 7776),
                                                                                                     (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                                                              v124,
                                                                                              (const char (*)[32])byte_1AD440E0);
                                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7776));
                                                                                            *(_DWORD *)(((v2 + 7776) >> 3) + 0x7FFF8000) = -117901064;
                                                                                            v7 = -1;
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            *(_DWORD *)(((v2 + 7840) >> 3) + 0x7FFF8000) = 0;
                                                                                            *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = 1;
                                                                                            std::allocator<char>::allocator(v2 + 944);
                                                                                            std::string::basic_string<std::allocator<char>>(
                                                                                              (std::string *const)(v2 + 7840),
                                                                                              &byte_1AD5B100,
                                                                                              (const std::allocator<char> *)(v2 + 944));
                                                                                            v125 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                                                                     row,
                                                                                                     (const std::string *)(v2 + 7840),
                                                                                                     &this->mp_prop_id) != 0;
                                                                                            std::string::~string((void *)(v2 + 7840));
                                                                                            *(_DWORD *)(((v2 + 7840) >> 3) + 0x7FFF8000) = -117901064;
                                                                                            std::allocator<char>::~allocator(v2 + 944);
                                                                                            *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
                                                                                            if ( v125 )
                                                                                            {
                                                                                              *(_DWORD *)(((v2 + 7904) >> 3) + 0x7FFF8000) = 0;
                                                                                              if ( *(char *)(((v2 + 7904) >> 3) + 0x7FFF8000) < 0
                                                                                                || *(_BYTE *)(((v2 + 7935) >> 3) + 0x7FFF8000) != 0
                                                                                                && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 7935) >> 3) + 0x7FFF8000) )
                                                                                              {
                                                                                                __asan_report_store_n(
                                                                                                  v2 + 7904,
                                                                                                  32LL);
                                                                                              }
                                                                                              common::milog::MiLogStream::create(
                                                                                                (common::milog::MiLogStream *)(v2 + 7904),
                                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                                4u,
                                                                                                "./src/txt_data_auto/Mons"
                                                                                                "terExcelConfig.gen.cpp",
                                                                                                "init",
                                                                                                619);
                                                                                              v126 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 7904), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                                                                                v126,
                                                                                                (const char (*)[41])byte_1AD5B140);
                                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7904));
                                                                                              *(_DWORD *)(((v2 + 7904) >> 3) + 0x7FFF8000) = -117901064;
                                                                                              v7 = -1;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              *(_DWORD *)(((v2 + 7968) >> 3) + 0x7FFF8000) = 0;
                                                                                              *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = 1;
                                                                                              std::allocator<char>::allocator(v2 + 960);
                                                                                              std::string::basic_string<std::allocator<char>>(
                                                                                                (std::string *const)(v2 + 7968),
                                                                                                &byte_1ADAB0E0,
                                                                                                (const std::allocator<char> *)(v2 + 960));
                                                                                              v127 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 7968), &this->skin) != 0;
                                                                                              std::string::~string((void *)(v2 + 7968));
                                                                                              *(_DWORD *)(((v2 + 7968) >> 3) + 0x7FFF8000) = -117901064;
                                                                                              std::allocator<char>::~allocator(v2 + 960);
                                                                                              *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
                                                                                              if ( v127 )
                                                                                              {
                                                                                                *(_DWORD *)(((v2 + 8032) >> 3) + 0x7FFF8000) = 0;
                                                                                                if ( *(char *)(((v2 + 8032) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 8063) >> 3) + 0x7FFF8000) != 0 && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 8063) >> 3) + 0x7FFF8000) )
                                                                                                  __asan_report_store_n(
                                                                                                    v2 + 8032,
                                                                                                    32LL);
                                                                                                common::milog::MiLogStream::create(
                                                                                                  (common::milog::MiLogStream *)(v2 + 8032),
                                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                                  4u,
                                                                                                  "./src/txt_data_auto/Mo"
                                                                                                  "nsterExcelConfig.gen.cpp",
                                                                                                  "init",
                                                                                                  624);
                                                                                                v128 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 8032), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                                                                                  v128,
                                                                                                  (const char (*)[27])byte_1ADAB120);
                                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 8032));
                                                                                                *(_DWORD *)(((v2 + 8032) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                v7 = -1;
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                *(_DWORD *)(((v2 + 8096) >> 3) + 0x7FFF8000) = 0;
                                                                                                *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = 1;
                                                                                                std::allocator<char>::allocator(v2 + 976);
                                                                                                std::string::basic_string<std::allocator<char>>(
                                                                                                  (std::string *const)(v2 + 8096),
                                                                                                  &byte_1ADAB160,
                                                                                                  (const std::allocator<char> *)(v2 + 976));
                                                                                                v129 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 8096), &this->describe_id) != 0;
                                                                                                std::string::~string((void *)(v2 + 8096));
                                                                                                *(_DWORD *)(((v2 + 8096) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                std::allocator<char>::~allocator(v2 + 976);
                                                                                                *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
                                                                                                if ( v129 )
                                                                                                {
                                                                                                  *(_DWORD *)(((v2 + 8160) >> 3) + 0x7FFF8000) = 0;
                                                                                                  if ( *(char *)(((v2 + 8160) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 0x1FFF) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 0x1FFF) >> 3) + 0x7FFF8000) )
                                                                                                    __asan_report_store_n(v2 + 8160, 32LL);
                                                                                                  common::milog::MiLogStream::create(
                                                                                                    (common::milog::MiLogStream *)(v2 + 8160),
                                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                                    4u,
                                                                                                    "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                                                                                                    "init",
                                                                                                    629);
                                                                                                  v130 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 8160), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                                                                    v130,
                                                                                                    (const char (*)[35])byte_1ADAB1A0);
                                                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 8160));
                                                                                                  *(_DWORD *)(((v2 + 8160) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                  v7 = -1;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  *(_DWORD *)(((v2 + 8224) >> 3) + 0x7FFF8000) = 0;
                                                                                                  *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = 1;
                                                                                                  std::allocator<char>::allocator(v2 + 992);
                                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                                    (std::string *const)(v2 + 8224),
                                                                                                    &byte_1ADAB200,
                                                                                                    (const std::allocator<char> *)(v2 + 992));
                                                                                                  v131 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 8224), &this->safety_check) != 0;
                                                                                                  std::string::~string((void *)(v2 + 8224));
                                                                                                  *(_DWORD *)(((v2 + 8224) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                  std::allocator<char>::~allocator(v2 + 992);
                                                                                                  *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
                                                                                                  if ( v131 )
                                                                                                  {
                                                                                                    *(_DWORD *)(((v2 + 8288) >> 3) + 0x7FFF8000) = 0;
                                                                                                    if ( *(char *)(((v2 + 8288) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 8319) >> 3) + 0x7FFF8000) != 0 && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 8319) >> 3) + 0x7FFF8000) )
                                                                                                      __asan_report_store_n(v2 + 8288, 32LL);
                                                                                                    common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 8288), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_auto/MonsterExcelConfig.gen.cpp", "init", 634);
                                                                                                    v132 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 8288), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v132, (const char (*)[33])byte_1ADAB240);
                                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 8288));
                                                                                                    *(_DWORD *)(((v2 + 8288) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                    v7 = -1;
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    *(_DWORD *)(((v2 + 8352) >> 3) + 0x7FFF8000) = 0;
                                                                                                    *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = 1;
                                                                                                    std::allocator<char>::allocator(v2 + 1008);
                                                                                                    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 8352), &byte_1ADAB2A0, (const std::allocator<char> *)(v2 + 1008));
                                                                                                    v133 = common::tools::TxtFile::Row::assignToNum<int>(row, (const std::string *)(v2 + 8352), &this->combat_bgm_level) != 0;
                                                                                                    std::string::~string((void *)(v2 + 8352));
                                                                                                    *(_DWORD *)(((v2 + 8352) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                    std::allocator<char>::~allocator(v2 + 1008);
                                                                                                    *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
                                                                                                    if ( v133 )
                                                                                                    {
                                                                                                      *(_DWORD *)(((v2 + 8416) >> 3) + 0x7FFF8000) = 0;
                                                                                                      if ( *(char *)(((v2 + 8416) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 8447) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 8447) >> 3) + 0x7FFF8000) )
                                                                                                        __asan_report_store_n(v2 + 8416, 32LL);
                                                                                                      common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 8416), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_auto/MonsterExcelConfig.gen.cpp", "init", 639);
                                                                                                      v134 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 8416), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v134, (const char (*)[33])byte_1ADAB2E0);
                                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 8416));
                                                                                                      *(_DWORD *)(((v2 + 8416) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                      v7 = -1;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      *(_DWORD *)(((v2 + 8480) >> 3) + 0x7FFF8000) = 0;
                                                                                                      *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 1;
                                                                                                      std::allocator<char>::allocator(v2 + 1024);
                                                                                                      std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 8480), aEntitybudget, (const std::allocator<char> *)(v2 + 1024));
                                                                                                      v135 = common::tools::TxtFile::Row::assignToNum<int>(row, (const std::string *)(v2 + 8480), &this->entity_budget_level) != 0;
                                                                                                      std::string::~string((void *)(v2 + 8480));
                                                                                                      *(_DWORD *)(((v2 + 8480) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                      std::allocator<char>::~allocator(v2 + 1024);
                                                                                                      *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
                                                                                                      if ( v135 )
                                                                                                      {
                                                                                                        *(_DWORD *)(((v2 + 8544) >> 3) + 0x7FFF8000) = 0;
                                                                                                        if ( *(char *)(((v2 + 8544) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 8575) >> 3) + 0x7FFF8000) != 0 && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 8575) >> 3) + 0x7FFF8000) )
                                                                                                          __asan_report_store_n(v2 + 8544, 32LL);
                                                                                                        common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 8544), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_auto/MonsterExcelConfig.gen.cpp", "init", 644);
                                                                                                        v136 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 8544), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v136, (const char (*)[39])byte_1ADAB380);
                                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 8544));
                                                                                                        *(_DWORD *)(((v2 + 8544) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                        v7 = -1;
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        *(_DWORD *)(((v2 + 8608) >> 3) + 0x7FFF8000) = 0;
                                                                                                        *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = 1;
                                                                                                        std::allocator<char>::allocator(v2 + 1040);
                                                                                                        std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 8608), &byte_1ADAB3E0, (const std::allocator<char> *)(v2 + 1040));
                                                                                                        v137 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 8608), &this->hide_name_in_element_view) != 0;
                                                                                                        std::string::~string((void *)(v2 + 8608));
                                                                                                        *(_DWORD *)(((v2 + 8608) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                        std::allocator<char>::~allocator(v2 + 1040);
                                                                                                        *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
                                                                                                        if ( v137 )
                                                                                                        {
                                                                                                          *(_DWORD *)(((v2 + 8672) >> 3) + 0x7FFF8000) = 0;
                                                                                                          if ( *(char *)(((v2 + 8672) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 8703) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 8703) >> 3) + 0x7FFF8000) )
                                                                                                            __asan_report_store_n(v2 + 8672, 32LL);
                                                                                                          common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 8672), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_auto/MonsterExcelConfig.gen.cpp", "init", 649);
                                                                                                          v138 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 8672), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v138, (const char (*)[48])byte_1ADAB420);
                                                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 8672));
                                                                                                          *(_DWORD *)(((v2 + 8672) >> 3) + 0x7FFF8000) = -117901064;
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
            }
          }
        }
      }
    }
  }
LABEL_253:
  std::string::~string((void *)(v2 + 1120));
  if ( v148 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8448) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862758) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147451024 - (((_DWORD)v4 + 2147451032) & 0xFFFFFFF8) + 960) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8470) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_8(v2, 9152LL, v148);
  }
  return v7;
};

// Line 657: range 0000000014584EB8-0000000014586429
int32_t __cdecl data::MonsterAffixExcelConfig::init(
        data::MonsterAffixExcelConfig *const this,
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
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  bool v18; // r14
  common::milog::MiLogStream *v19; // rax
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  bool t; // [rsp+0h] [rbp-530h]
  bool ta; // [rsp+0h] [rbp-530h]
  bool tb; // [rsp+0h] [rbp-530h]
  char v26[1296]; // [rsp+20h] [rbp-510h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1248LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 24 9 <unknown> 256 32 11 va"
                        "l_str:658 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <"
                        "unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <u"
                        "nknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterAffixExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234881024;
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
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862758] = -202116109;
  std::string::basic_string(v2 + 256);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 320),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 320), &this->id) != 0;
  std::string::~string((void *)(v2 + 320));
  *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      661);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 384),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 448),
      &byte_1ADAB660,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 448), &this->comment) != 0;
    std::string::~string((void *)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "init",
        666);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 512),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v7, (const char (*)[27])byte_1ADAB6A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 576),
        "AbilityName",
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 576), (std::string *)(v2 + 256)) != 0;
      std::string::~string((void *)(v2 + 576));
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          671);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 640),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v8, (const char (*)[32])byte_1ADAB720);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v9 = ((v2 + 192) >> 3) + 2147450880;
        *(_WORD *)v9 = 0;
        *(_BYTE *)(v9 + 2) = 0;
        v10 = (_DWORD *)(((v2 + 1152) >> 3) + 2147450880);
        *v10 = 0;
        v10[1] = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1152),
          ";",
          (const std::allocator<char> *)(v2 + 96));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1184),
          ",",
          (const std::allocator<char> *)(v2 + 112));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 128));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 192),
          (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1152),
          (const std::vector<std::string>::allocator_type *)(v2 + 128));
        v11 = common::tools::StringUtils::splitToListBySeps(
                (const std::string *)(v2 + 256),
                (const std::vector<std::string> *)(v2 + 192),
                &this->ability_name,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 192));
        v12 = ((v2 + 192) >> 3) + 2147450880;
        *(_WORD *)v12 = -1800;
        *(_BYTE *)(v12 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 128));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        for ( i = (char *)(v2 + 1216); i != (char *)(v2 + 1152); std::string::~string(i) )
          i -= 32;
        v14 = (_DWORD *)(((v2 + 1152) >> 3) + 2147450880);
        *v14 = -117901064;
        v14[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v11 )
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "init",
            676);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 704),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v15, (const char (*)[32])byte_1ADAB720);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 768),
            &byte_1ADAB760,
            (const std::allocator<char> *)(v2 + 144));
          v16 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 768), &this->is_common) != 0;
          std::string::~string((void *)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v16 )
          {
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 832, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 832),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "init",
              681);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 832),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v17, (const char (*)[33])byte_1ADAB7A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 896),
              &byte_1ADAB800,
              (const std::allocator<char> *)(v2 + 160));
            v18 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 896), &this->pre_add) != 0;
            std::string::~string((void *)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( v18 )
            {
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 960, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 960),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "init",
                686);
              v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 960),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v19, (const char (*)[33])byte_1ADAB840);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 176);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1024),
                byte_1ADAB8A0,
                (const std::allocator<char> *)(v2 + 176));
              v20 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1024), &this->icon_path) != 0;
              std::string::~string((void *)(v2 + 1024));
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( v20 )
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
                  "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                  "init",
                  691);
                v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1088),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v21, (const char (*)[27])byte_1ADAB8E0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 256));
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862731) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450916 - (((_DWORD)v4 + 2147450924) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1248LL, v26);
  }
  return v6;
};

// Line 699: range 000000001458642A-0000000014587139
int32_t __cdecl data::MonsterRelationshipExcelConfig::init(
        data::MonsterRelationshipExcelConfig *const this,
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
  char v16[816]; // [rsp+10h] [rbp-330h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 32 "
                        "9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterRelationshipExcelConfig::init;
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
  v4[536862741] = -218959118;
  v4[536862743] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    &byte_1ADAB920,
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      702);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1ADAB960);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      &byte_1ADAB9A0,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 256), &this->tag_str) != 0;
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "init",
        707);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1ADAB9E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        &byte_1ADABA40,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToEnum<data::MonsterRarityType>(
              row,
              (const std::string *)(v2 + 384),
              &this->monster_rarity) != 0;
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          712);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v11, (const char (*)[30])byte_1ADABA80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        result = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          &byte_1ADABAC0,
          (const std::allocator<char> *)(v2 + 96));
        v12 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 512), &this->monster_tag_str) != 0;
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "init",
            717);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1ADABB00);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          result = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 640),
            &byte_1ADABB60,
            (const std::allocator<char> *)(v2 + 112));
          v14 = common::tools::TxtFile::Row::assignToNum<bool>(
                  row,
                  (const std::string *)(v2 + 640),
                  &this->is_poly_drop) != 0;
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
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
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "init",
              722);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v15, (const char (*)[39])byte_1ADABBA0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
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
  if ( v16 == (char *)v2 )
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
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
  }
  return result;
};

// Line 730: range 000000001458713A-000000001458795C
int32_t __cdecl data::MonsterDescribeExcelConfig::init(
        data::MonsterDescribeExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::MonsterDescribeExcelConfig::init;
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
    &byte_1ADAB920,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 96), &this->id) != 0;
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      733);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1ADAB960);
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
      &byte_1ADABC00,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->title_id) != 0;
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "init",
        738);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1ADABC40);
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
        &byte_1ADABCA0,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 352),
              &this->special_name_lab_id) != 0;
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
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          743);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v11, (const char (*)[36])byte_1ADABCE0);
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

// Line 751: range 000000001458795E-0000000014587C69
int32_t __cdecl data::AnimalDescribeExcelConfig::init(
        data::AnimalDescribeExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::AnimalDescribeExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    &byte_1ADAB920,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->id) != 0;
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      754);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1ADAB960);
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

// Line 762: range 0000000014587C6A-0000000014587F75
int32_t __cdecl data::MonsterTitleExcelConfig::init(
        data::MonsterTitleExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::MonsterTitleExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    &byte_1ADABC00,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->title_id) != 0;
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      765);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1ADABC40);
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

// Line 773: range 0000000014587F76-0000000014588798
int32_t __cdecl data::MonsterSpecialNameExcelConfig::init(
        data::MonsterSpecialNameExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::MonsterSpecialNameExcelConfig::init;
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
    &byte_1ADABD40,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
         row,
         (const std::string *)(v2 + 96),
         &this->special_name_id) != 0;
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      776);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1ADABD80);
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
      &byte_1ADABCA0,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 224),
           &this->special_name_lab_id) != 0;
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "init",
        781);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1ADABCE0);
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
        &byte_1ADABDE0,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<bool>(
              row,
              (const std::string *)(v2 + 352),
              &this->is_in_random_list) != 0;
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
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          786);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v11, (const char (*)[39])byte_1ADABE20);
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

// Line 794: range 000000001458879A-0000000014588FBC
int32_t __cdecl data::CaptureTagConfig::init(
        data::CaptureTagConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::CaptureTagConfig::init;
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
    &byte_1AD3FD80,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 96), &this->capture_type) != 0;
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      797);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1AD3FDC0);
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
      "DropID",
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->drop_id) != 0;
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "init",
        802);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1ADABE80);
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
        &byte_1ADABEC0,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->item_id) != 0;
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
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          807);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1ADABF00);
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

// Line 815: range 0000000014588FBE-0000000014589FC4
int32_t __cdecl data::CaptureExcelConfig::init(
        data::CaptureExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  bool v8; // r15
  unsigned int *p_capture_type; // r15
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r15
  unsigned int *p_drop_id; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool v18; // r15
  unsigned int *p_item_id; // r15
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t v23; // ebx
  uint32_t array_count; // [rsp+18h] [rbp-4D8h]
  uint32_t i; // [rsp+1Ch] [rbp-4D4h]
  char v27[1232]; // [rsp+20h] [rbp-4D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1184LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <"
                        "unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <u"
                        "nknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 256 12 col_name:816";
  *(_QWORD *)(v2 + 16) = data::CaptureExcelConfig::init;
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
  v4[536862755] = -202116109;
  v4[536862756] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "MonsterID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 160), &this->monster_id) != 0;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      820);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v6, (const char (*)[30])byte_1ADAC120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v7 = -1;
    goto LABEL_28;
  }
  std::vector<data::CaptureTagConfig>::resize(&this->capture_tag_config, 0x40uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 0x3F )
    {
      std::vector<data::CaptureTagConfig>::resize(&this->capture_tag_config, array_count);
      v7 = 0;
      goto LABEL_28;
    }
    snprintf((char *)(v2 + 864), 0x100uLL, aCapturetagD, i + 1);
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      (const char *)(v2 + 864),
      (const std::allocator<char> *)(v2 + 64));
    v8 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v8 )
    {
      p_capture_type = &std::vector<data::CaptureTagConfig>::operator[](&this->capture_tag_config, i)->capture_type;
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        (const char *)(v2 + 864),
        (const std::allocator<char> *)(v2 + 80));
      LOBYTE(p_capture_type) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                 row,
                                 (const std::string *)(v2 + 352),
                                 p_capture_type) != 0;
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( (_BYTE)p_capture_type )
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
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          832);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1AD38B80);
        v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 864));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AD38BC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        v7 = -1;
        goto LABEL_28;
      }
      snprintf((char *)(v2 + 864), 0x100uLL, "[CaptureTag]%dDropID", i + 1);
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        (const char *)(v2 + 864),
        (const std::allocator<char> *)(v2 + 96));
      v13 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( !v13 )
      {
        p_drop_id = &std::vector<data::CaptureTagConfig>::operator[](&this->capture_tag_config, i)->drop_id;
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          (const char *)(v2 + 864),
          (const std::allocator<char> *)(v2 + 112));
        LOBYTE(p_drop_id) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 544),
                              p_drop_id) != 0;
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)p_drop_id )
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "init",
            840);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])byte_1AD38B80);
          v17 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v16, (const char (*)[256])(v2 + 864));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1AD38BC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          v7 = -1;
          goto LABEL_28;
        }
        snprintf((char *)(v2 + 864), 0x100uLL, aCapturetagD_0, i + 1);
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 672),
          (const char *)(v2 + 864),
          (const std::allocator<char> *)(v2 + 128));
        v18 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 672));
        std::string::~string((void *)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( !v18 )
          break;
      }
    }
LABEL_26:
    ;
  }
  p_item_id = &std::vector<data::CaptureTagConfig>::operator[](&this->capture_tag_config, i)->item_id;
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 144);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 736),
    (const char *)(v2 + 864),
    (const std::allocator<char> *)(v2 + 144));
  LOBYTE(p_item_id) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 736),
                        p_item_id) != 0;
  std::string::~string((void *)(v2 + 736));
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 144);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)p_item_id )
  {
    array_count = i + 1;
    goto LABEL_26;
  }
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
    "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
    "init",
    848);
  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 800),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])byte_1AD38B80);
  v22 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v21, (const char (*)[256])(v2 + 864));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1AD38BC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
  v7 = -1;
LABEL_28:
  v23 = v7;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1184LL, v27);
  }
  return v23;
};

// Line 860: range 0000000014589FC6-000000001458A7E8
int32_t __cdecl data::CaptureTagsExcelConfig::init(
        data::CaptureTagsExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::CaptureTagsExcelConfig::init;
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
    "CaptureTagID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
         row,
         (const std::string *)(v2 + 96),
         &this->capture_tag_id) != 0;
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      863);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1ADAC260);
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
      &byte_1ADAC2C0,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToEnum<data::CaptureCodexShowType>(
           row,
           (const std::string *)(v2 + 224),
           &this->codex_show_type) != 0;
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "init",
        868);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v9, (const char (*)[39])byte_1ADAC300);
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
        &byte_1ADAC360,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToEnum<data::ItemLimitType>(
              row,
              (const std::string *)(v2 + 352),
              &this->item_limit_type) != 0;
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
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          873);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v11, (const char (*)[39])byte_1ADAC3A0);
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

// Line 881: range 000000001458A7EA-000000001458B615
int32_t __cdecl data::PolyMonsterDropConfig::init(
        data::PolyMonsterDropConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  unsigned __int64 v7; // rax
  _DWORD *v8; // rax
  bool v9; // r15
  unsigned __int64 v10; // rax
  char *i; // r14
  _DWORD *v12; // rax
  common::milog::MiLogStream *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  bool split_list; // [rsp+8h] [rbp-368h]
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
                        "<unknown> 128 24 9 <unknown> 192 32 11 val_str:882 256 32 9 <unknown> 320 32 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::PolyMonsterDropConfig::init;
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
    &byte_1ADAC540,
    (const std::allocator<char> *)(v2 + 32));
  split_list = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 256), (std::string *)(v2 + 192)) != 0;
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( split_list )
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      885);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v5, (const char (*)[33])byte_1ADAC580);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v7 = 0;
    *(_BYTE *)(v7 + 2) = 0;
    v8 = (_DWORD *)(((v2 + 704) >> 3) + 2147450880);
    *v8 = 0;
    v8[1] = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 704),
      ";",
      (const std::allocator<char> *)(v2 + 48));
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 736),
      ",",
      (const std::allocator<char> *)(v2 + 64));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 80));
    std::vector<std::string>::vector(
      (std::vector<std::string> *const)(v2 + 128),
      (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 704),
      (const std::vector<std::string>::allocator_type *)(v2 + 80));
    v9 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
           (const std::string *)(v2 + 192),
           (const std::vector<std::string> *)(v2 + 128),
           &this->param_list,
           1) != 0;
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 128));
    v10 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v10 = -1800;
    *(_BYTE *)(v10 + 2) = -8;
    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 80));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    for ( i = (char *)(v2 + 768); i != (char *)(v2 + 704); std::string::~string(i) )
      i -= 32;
    v12 = (_DWORD *)(((v2 + 704) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "init",
        890);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1ADAC580);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 448),
        &byte_1ADAB9A0,
        (const std::allocator<char> *)(v2 + 96));
      v14 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 448), &this->drop_tag_str) != 0;
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          895);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v15, (const char (*)[33])byte_1ADAB9E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 576),
          &byte_1ADABA40,
          (const std::allocator<char> *)(v2 + 112));
        v16 = common::tools::TxtFile::Row::assignToEnum<data::MonsterRarityType>(
                row,
                (const std::string *)(v2 + 576),
                &this->monster_rarity) != 0;
        std::string::~string((void *)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v16 )
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "init",
            900);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v17, (const char (*)[30])byte_1ADABA80);
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

// Line 908: range 000000001458B616-000000001458D11D
int32_t __cdecl data::MonsterRelOverloadExcelConfig::init(
        data::MonsterRelOverloadExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  bool v12; // r14
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::vector<unsigned int> *p_param_list; // r14
  unsigned __int64 v18; // rax
  _DWORD *v19; // rax
  unsigned __int64 v20; // rax
  char *j; // r14
  _DWORD *v22; // rax
  common::milog::MiLogStream *v23; // rax
  bool v24; // r14
  std::string *p_drop_tag_str; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  bool v29; // r14
  data::MonsterRarityType *p_monster_rarity; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  bool v35; // [rsp+Fh] [rbp-761h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-760h]
  uint32_t array_count; // [rsp+38h] [rbp-738h]
  uint32_t i; // [rsp+3Ch] [rbp-734h]
  char v39[1840]; // [rsp+40h] [rbp-730h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1792LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "32 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 24 9 <unknown> 288 32 11 val_str:911 352 32 9 <unknown> 416 32 9 <unkn"
                        "own> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unkno"
                        "wn> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unkno"
                        "wn> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 64 9 <u"
                        "nknown> 1472 256 12 col_name:909";
  *(_QWORD *)(v2 + 16) = data::MonsterRelOverloadExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234881024;
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
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862765] = -218959118;
  v4[536862774] = -202116109;
  v4[536862775] = -202116109;
  std::string::basic_string(v2 + 288);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    &byte_1ADAB920,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->id) != 0;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      914);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1ADAB960);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_43;
  }
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 480),
    &byte_1ADAC860,
    (const std::allocator<char> *)(v2 + 48));
  v8 = common::tools::TxtFile::Row::assignToEnum<data::MonsterPolyDropListenType>(
         row,
         (const std::string *)(v2 + 480),
         &this->listen_type) != 0;
  std::string::~string((void *)(v2 + 480));
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      919);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 544),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1ADAC8A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_43;
  }
  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 608),
    &byte_1ADAC900,
    (const std::allocator<char> *)(v2 + 64));
  v10 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 608), &this->listen_param_str) != 0;
  std::string::~string((void *)(v2 + 608));
  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "init",
      924);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 672),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v11, (const char (*)[36])byte_1ADAC940);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_43;
  }
  std::vector<data::PolyMonsterDropConfig>::resize(&this->poly_monster_drop_config_list, 3uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 2 )
    {
      std::vector<data::PolyMonsterDropConfig>::resize(&this->poly_monster_drop_config_list, array_count);
      v7 = 0;
      goto LABEL_43;
    }
    snprintf((char *)(v2 + 1472), 0x100uLL, asc_1ADAC9A0, i + 1);
    *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 736),
      (const char *)(v2 + 1472),
      (const std::allocator<char> *)(v2 + 80));
    v12 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 736));
    std::string::~string((void *)(v2 + 736));
    *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( !v12 )
    {
      *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 800),
        (const char *)(v2 + 1472),
        (const std::allocator<char> *)(v2 + 96));
      v13 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 800), (std::string *)(v2 + 288)) != 0;
      std::string::~string((void *)(v2 + 800));
      *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
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
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          936);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])byte_1AD38B80);
        v16 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v15, (const char (*)[256])(v2 + 1472));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1AD38BC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
        goto LABEL_43;
      }
      p_param_list = &std::vector<data::PolyMonsterDropConfig>::operator[](&this->poly_monster_drop_config_list, i)->param_list;
      v18 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v18 = 0;
      *(_BYTE *)(v18 + 2) = 0;
      v19 = (_DWORD *)(((v2 + 1376) >> 3) + 2147450880);
      *v19 = 0;
      v19[1] = 0;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 112);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1376),
        ";",
        (const std::allocator<char> *)(v2 + 112));
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 128);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1408),
        ",",
        (const std::allocator<char> *)(v2 + 128));
      __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1376);
      __l._M_len = 2LL;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 144));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 224),
        __l,
        (const std::vector<std::string>::allocator_type *)(v2 + 144));
      v35 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 288),
              (const std::vector<std::string> *)(v2 + 224),
              p_param_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 224));
      v20 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v20 = -1800;
      *(_BYTE *)(v20 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 144));
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      for ( j = (char *)(v2 + 1440); j != (char *)(v2 + 1376); std::string::~string(j) )
        j -= 32;
      v22 = (_DWORD *)(((v2 + 1376) >> 3) + 2147450880);
      *v22 = -117901064;
      v22[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 128);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 112);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( v35 )
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
          "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
          "init",
          941);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 928),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v23, (const char (*)[49])byte_1ADAC9E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
        goto LABEL_43;
      }
      snprintf((char *)(v2 + 1472), 0x100uLL, asc_1ADACA40, i + 1);
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 160);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 992),
        (const char *)(v2 + 1472),
        (const std::allocator<char> *)(v2 + 160));
      v24 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 992));
      std::string::~string((void *)(v2 + 992));
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 160);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( !v24 )
      {
        p_drop_tag_str = &std::vector<data::PolyMonsterDropConfig>::operator[](&this->poly_monster_drop_config_list, i)->drop_tag_str;
        *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 176);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1056),
          (const char *)(v2 + 1472),
          (const std::allocator<char> *)(v2 + 176));
        LOBYTE(p_drop_tag_str) = common::tools::TxtFile::Row::assignToStr(
                                   row,
                                   (const std::string *)(v2 + 1056),
                                   p_drop_tag_str) != 0;
        std::string::~string((void *)(v2 + 1056));
        *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 176);
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)p_drop_tag_str )
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "init",
            949);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1120),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v26, (const char (*)[14])byte_1AD38B80);
          v28 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v27, (const char (*)[256])(v2 + 1472));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])byte_1AD38BC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
          *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
          goto LABEL_43;
        }
        snprintf((char *)(v2 + 1472), 0x100uLL, asc_1ADACA80, i + 1);
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 192);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1184),
          (const char *)(v2 + 1472),
          (const std::allocator<char> *)(v2 + 192));
        v29 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1184));
        std::string::~string((void *)(v2 + 1184));
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 192);
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( !v29 )
          break;
      }
    }
LABEL_41:
    ;
  }
  p_monster_rarity = &std::vector<data::PolyMonsterDropConfig>::operator[](&this->poly_monster_drop_config_list, i)->monster_rarity;
  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 208);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1248),
    (const char *)(v2 + 1472),
    (const std::allocator<char> *)(v2 + 208));
  LOBYTE(p_monster_rarity) = common::tools::TxtFile::Row::assignToEnum<data::MonsterRarityType>(
                               row,
                               (const std::string *)(v2 + 1248),
                               p_monster_rarity) != 0;
  std::string::~string((void *)(v2 + 1248));
  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 208);
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)p_monster_rarity )
  {
    array_count = i + 1;
    goto LABEL_41;
  }
  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 1312, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 1312),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
    "init",
    957);
  v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 1312),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v31, (const char (*)[14])byte_1AD38B80);
  v33 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v32, (const char (*)[256])(v2 + 1472));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])byte_1AD38BC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
  v7 = -1;
LABEL_43:
  std::string::~string((void *)(v2 + 288));
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862732) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450920 - (((_DWORD)v4 + 2147450928) & 0xFFFFFFF8) + 144) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1792LL, v39);
  }
  return v7;
};

// Line 970: range 000000001458D11E-000000001458E261
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadMonsterExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::string *p_real_data_base_dir; // rsi
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // r14d
  int v10; // eax
  uint32_t v11; // ecx
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  __int64 v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  __int64 v19; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  data::MonsterExcelConfig *v22; // rax
  unsigned int *v23; // rcx
  data::MonsterExcelConfig *v24; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false>,bool> v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  char *i; // r14
  int32_t v31; // [rsp+1Ch] [rbp-8994h]
  std::string *__for_begin; // [rsp+38h] [rbp-8978h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+58h] [rbp-8958h]
  char v35[35152]; // [rsp+60h] [rbp-8950h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_10(35104LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 5 r:986 96 4 9 <unknown> 112 32 9 <unknown> 176 32 9 <"
                        "unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 64 9 pa"
                        "ths:971 592 376 24 debug_message_stream:997 1040 800 8 data:989 1968 32880 12 txt_file:980";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::loadMonsterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862750] = -218959360;
  v4[536862751] = -218959118;
  v4[536862752] = 62194;
  v4[536862777] = -219021312;
  v4[536862778] = -218959118;
  v4[536862779] = -218959118;
  v4[536862780] = -218959118;
  v4[536862781] = 62194;
  v4[536863809] = -202116109;
  v4[536863810] = -202116109;
  v4[536863811] = -202116109;
  v4[536863812] = -202116109;
  v4[536863813] = -202116109;
  v4[536863814] = -202116109;
  v4[536863815] = -202116109;
  v4[536863816] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 496),
    "/txt/MonsterData.txt",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 528),
    "/txt/PartnerData.txt",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v2 + 496); __for_begin != (std::string *)(v2 + 560); ++__for_begin )
  {
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v2 + 112, 32LL);
    }
    std::operator+<char>((std::string *)(v2 + 112), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v2 + 112);
    std::string::~string((void *)(v2 + 112));
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v2 + 1968, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v2 + 1968));
    v6 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v2 + 1968), v6) )
    {
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "loadMonsterExcelConfig",
        983);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[8])byte_1AD383A0);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])byte_1AD383E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v31 = -1;
      v9 = 0;
    }
    else
    {
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
      v10 = *(unsigned __int8 *)(((v2 + 80) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v10 != 0 && (char)v10 <= 3 )
        __asan_report_store4(v2 + 80, v6);
      for ( *(_DWORD *)(v2 + 80) = 0; ; ++*(_DWORD *)(v2 + 80) )
      {
        v11 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v2 + 1968));
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 80);
        if ( v11 <= *(_DWORD *)(v2 + 80) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v2 + 1968), *(_DWORD *)(v2 + 80));
        __asan_unpoison_stack_memory(v2 + 1040, 800LL);
        data::MonsterExcelConfig::MonsterExcelConfig((data::MonsterExcelConfig *const)(v2 + 1040));
        if ( row_ptr )
        {
          if ( data::MonsterExcelConfig::init((data::MonsterExcelConfig *const)(v2 + 1040), row_ptr) )
          {
            __asan_unpoison_stack_memory(v2 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v2 + 592);
            v14 = std::operator<<<std::char_traits<char>>(v2 + 592, &unk_1AD3B5A0);
            if ( *(_BYTE *)(((v2 + 1048) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1048) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 1048);
            std::ostream::operator<<(v14, *(unsigned int *)(v2 + 1048));
            *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 304, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 304),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "loadMonsterExcelConfig",
              999);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 304),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])"<");
            v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, __for_begin);
            v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v17,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 80);
            v19 = (unsigned int)(*(_DWORD *)(v2 + 80) + 1);
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 96, v19);
            *(_DWORD *)(v2 + 96) = v19;
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 96));
            v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v20,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 368, 32LL);
            }
            std::ostringstream::str(v2 + 368, v2 + 592);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, (const std::string *)(v2 + 368));
            std::string::~string((void *)(v2 + 368));
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
            *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
            v31 = -1;
            std::ostringstream::~ostringstream(v2 + 592);
            __asan_poison_stack_memory(v2 + 592, 376LL);
            v13 = 0;
          }
          else
          {
            v22 = std::move<data::MonsterExcelConfig &>((data::MonsterExcelConfig *)(v2 + 1040));
            v25 = std::unordered_map<unsigned int,data::MonsterExcelConfig>::emplace<unsigned int &,data::MonsterExcelConfig>(
                    &this->monster_excel_config_map,
                    (unsigned int *)(v2 + 1048),
                    v22,
                    v23,
                    v24);
            if ( !v25.second )
            {
              *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 432, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 432),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "loadMonsterExcelConfig",
                1004);
              v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 432),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])byte_1AD3B5E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v2 + 1048));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
              *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
              v31 = -1;
              v13 = 0;
            }
            else
            {
              v13 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 240, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 240),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "loadMonsterExcelConfig",
            992);
          v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v2 + 240),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
          *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
          v31 = -1;
          v13 = 0;
        }
        data::MonsterExcelConfig::~MonsterExcelConfig((data::MonsterExcelConfig *const)(v2 + 1040));
        __asan_poison_stack_memory(v2 + 1040, 800LL);
        if ( v13 != 1 )
        {
          v28 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 80);
      }
      v28 = 1;
LABEL_45:
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      v9 = v28 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v2 + 1968));
    __asan_poison_stack_memory(v2 + 1968, 32880LL);
    if ( !v9 )
      goto LABEL_49;
  }
  v31 = 0;
LABEL_49:
  for ( i = (char *)(v2 + 560); i != (char *)(v2 + 496); std::string::~string(i) )
    i -= 32;
  if ( v35 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF911C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862739) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450948 - (((_DWORD)v4 + 2147450956) & 0xFFFFFFF8) + 4320) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_10(v2, 35104LL, v35);
  }
  return v31;
};

// Line 1013: range 000000001458E262-000000001458F267
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadMonsterAffixExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
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
  data::MonsterAffixExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::MonsterAffixExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1028 80 4 9 <unknown> 96 32 10 paths:1014 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 112"
                        " 9 data:1031 688 376 25 debug_message_stream:1039 1136 32880 13 txt_file:1022";
  *(_QWORD *)(v3 + 16) = data::MonsterExcelConfigMgrBase::loadMonsterAffixExcelConfig;
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
  v5[536862740] = -219021312;
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
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/MonsterAffixData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1136, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1136));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1136), v7) )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "loadMonsterAffixExcelConfig",
        1025);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1136));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1136), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_WORD *)(v13 + 12) = 0;
        data::MonsterAffixExcelConfig::MonsterAffixExcelConfig((data::MonsterAffixExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::MonsterAffixExcelConfig::init((data::MonsterAffixExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 688, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 688);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 688, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "loadMonsterAffixExcelConfig",
              1041);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AD384E0);
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
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 688);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 688);
            __asan_poison_stack_memory(v3 + 688, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::MonsterAffixExcelConfig &>((data::MonsterAffixExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::emplace<unsigned int &,data::MonsterAffixExcelConfig>(
                    &this->monster_affix_excel_config_map,
                    (unsigned int *)(v3 + 552),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
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
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "loadMonsterAffixExcelConfig",
                1046);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AD3B5E0);
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
            && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "loadMonsterAffixExcelConfig",
            1034);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::MonsterAffixExcelConfig::~MonsterAffixExcelConfig((data::MonsterAffixExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_WORD *)(v30 + 12) = -1800;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1136));
    __asan_poison_stack_memory(v3 + 1136, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4268) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34272LL, v37);
  }
  return v2;
};

// Line 1055: range 000000001458F268-0000000014590297
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadMonsterRelationshipExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
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
  data::MonsterRelationshipExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::MonsterRelationshipExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1070 64 4 9 <unknown> 80 32 10 paths:1056 144 32 9 <unknown> 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 96 "
                        "9 data:1073 656 376 25 debug_message_stream:1081 1104 32880 13 txt_file:1064";
  *(_QWORD *)(v3 + 16) = data::MonsterExcelConfigMgrBase::loadMonsterRelationshipExcelConfig;
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
    "/txt/MonsterRelationshipData.txt",
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "loadMonsterRelationshipExcelConfig",
        1067);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1AD383A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AD383E0);
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
        data::MonsterRelationshipExcelConfig::MonsterRelationshipExcelConfig((data::MonsterRelationshipExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::MonsterRelationshipExcelConfig::init(
                 (data::MonsterRelationshipExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "loadMonsterRelationshipExcelConfig",
              1083);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AD384E0);
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
                    (const char (*)[13])byte_1AD38520);
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
            v24 = std::move<data::MonsterRelationshipExcelConfig &>((data::MonsterRelationshipExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::emplace<unsigned int &,data::MonsterRelationshipExcelConfig>(
                    &this->monster_relationship_excel_config_map,
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
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "loadMonsterRelationshipExcelConfig",
                1088);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AD3B5E0);
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "loadMonsterRelationshipExcelConfig",
            1076);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::MonsterRelationshipExcelConfig::~MonsterRelationshipExcelConfig((data::MonsterRelationshipExcelConfig *const)(v3 + 528));
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

// Line 1097: range 0000000014590298-0000000014591393
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadMonsterDescribeExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
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
  unsigned __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  int v18; // r14d
  __int64 v19; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  __int64 v24; // rsi
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  data::MonsterDescribeExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::MonsterDescribeExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  int v34; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85B8h]
  char v40[34224]; // [rsp+50h] [rbp-85B0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34176LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1112 64 4 9 <unknown> 80 24 9 data:1115 144 32 10 paths:1098 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 "
                        "9 <unknown> 592 376 25 debug_message_stream:1123 1040 32880 13 txt_file:1106";
  *(_QWORD *)(v3 + 16) = data::MonsterExcelConfigMgrBase::loadMonsterDescribeExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = -218959360;
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
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862750] = -218959360;
  v5[536862751] = -218959118;
  v5[536862752] = 62194;
  v5[536863780] = -202116109;
  v5[536863781] = -202116109;
  v5[536863782] = -202116109;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 144),
    "/txt/MonsterDescribeData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 144); __for_begin != (std::string *)(v3 + 176); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 208, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 208), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 208);
    std::string::~string((void *)(v3 + 208));
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1040, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1040), v7) )
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "loadMonsterDescribeExcelConfig",
        1109);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[8])byte_1AD383A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AD383E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1040));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        v13 = *(unsigned int *)(v3 + 48);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1040), v13);
        v14 = ((v3 + 80) >> 3) + 2147450880;
        *(_WORD *)v14 = 0;
        *(_BYTE *)(v14 + 2) = 0;
        v15 = &`vtable for'data::MonsterDescribeExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v15;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        v16 = (((_BYTE)v3 + 92) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 92) & 7) + 3) >= *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 92, v16);
        }
        *(_DWORD *)(v3 + 92) = 0;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 96, v16);
        *(_DWORD *)(v3 + 96) = 0;
        if ( row_ptr )
        {
          if ( data::MonsterDescribeExcelConfig::init((data::MonsterDescribeExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 592);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 592, &unk_1AD3B5A0);
            if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 88);
            std::ostream::operator<<(v19, *(unsigned int *)(v3 + 88));
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
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "loadMonsterDescribeExcelConfig",
              1125);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v20, (const char (*)[2])"<");
            v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, __for_begin);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v22,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v24 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v24);
            *(_DWORD *)(v3 + 64) = v24;
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 64));
            v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v25,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 464, 32LL);
            }
            std::ostringstream::str(v3 + 464, v3 + 592);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)(v3 + 464));
            std::string::~string((void *)(v3 + 464));
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 592);
            __asan_poison_stack_memory(v3 + 592, 376LL);
            v18 = 0;
          }
          else
          {
            v27 = std::move<data::MonsterDescribeExcelConfig &>((data::MonsterDescribeExcelConfig *)(v3 + 80));
            v30 = std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::emplace<unsigned int &,data::MonsterDescribeExcelConfig>(
                    &this->monster_describe_excel_config_map,
                    (unsigned int *)(v3 + 88),
                    v27,
                    v28,
                    v29);
            if ( !v30.second )
            {
              *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 528, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 528),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "loadMonsterDescribeExcelConfig",
                1130);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 528),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])byte_1AD3B5E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v3 + 88));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
              *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v18 = 0;
            }
            else
            {
              v18 = 1;
            }
          }
        }
        else
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "loadMonsterDescribeExcelConfig",
            1118);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::MonsterDescribeExcelConfig::~MonsterDescribeExcelConfig((data::MonsterDescribeExcelConfig *const)(v3 + 80));
        v33 = ((v3 + 80) >> 3) + 2147450880;
        *(_WORD *)v33 = -1800;
        *(_BYTE *)(v33 + 2) = -8;
        if ( v18 != 1 )
        {
          v34 = 0;
          goto LABEL_53;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v34 = 1;
LABEL_53:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v34 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    __asan_poison_stack_memory(v3 + 1040, 32880LL);
    if ( !v10 )
      goto LABEL_57;
  }
  v2 = 0;
LABEL_57:
  for ( i = (char *)(v3 + 176); i != (char *)(v3 + 144); std::string::~string(i) )
    i -= 32;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4272) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34176LL, v40);
  }
  return v2;
};

// Line 1139: range 0000000014591394-00000000145923EF
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadAnimalDescribeExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
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
  data::AnimalDescribeExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::AnimalDescribeExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1154 64 4 9 <unknown> 80 16 9 data:1157 112 32 10 paths:1140 176 32"
                        " 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 "
                        "9 <unknown> 560 376 25 debug_message_stream:1165 1008 32880 13 txt_file:1148";
  *(_QWORD *)(v3 + 16) = data::MonsterExcelConfigMgrBase::loadAnimalDescribeExcelConfig;
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
    "/txt/AnimalDescribeData.txt",
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "loadAnimalDescribeExcelConfig",
        1151);
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
        v14 = &`vtable for'data::AnimalDescribeExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( row_ptr )
        {
          if ( data::AnimalDescribeExcelConfig::init((data::AnimalDescribeExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "loadAnimalDescribeExcelConfig",
              1167);
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
            v25 = std::move<data::AnimalDescribeExcelConfig &>((data::AnimalDescribeExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::emplace<unsigned int &,data::AnimalDescribeExcelConfig>(
                    &this->animal_describe_excel_config_map,
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
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "loadAnimalDescribeExcelConfig",
                1172);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])byte_1AD3B5E0);
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "loadAnimalDescribeExcelConfig",
            1160);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::AnimalDescribeExcelConfig::~AnimalDescribeExcelConfig((data::AnimalDescribeExcelConfig *const)(v3 + 80));
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

// Line 1181: range 00000000145923F0-000000001459344B
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadMonsterTitleExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
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
  data::MonsterTitleExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::MonsterTitleExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1196 64 4 9 <unknown> 80 16 9 data:1199 112 32 10 paths:1182 176 32"
                        " 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 "
                        "9 <unknown> 560 376 25 debug_message_stream:1207 1008 32880 13 txt_file:1190";
  *(_QWORD *)(v3 + 16) = data::MonsterExcelConfigMgrBase::loadMonsterTitleExcelConfig;
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
    "/txt/MonsterTitleData.txt",
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "loadMonsterTitleExcelConfig",
        1193);
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
        v14 = &`vtable for'data::MonsterTitleExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( row_ptr )
        {
          if ( data::MonsterTitleExcelConfig::init((data::MonsterTitleExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1ADAD560);
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
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "loadMonsterTitleExcelConfig",
              1209);
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
            v25 = std::move<data::MonsterTitleExcelConfig &>((data::MonsterTitleExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::emplace<unsigned int &,data::MonsterTitleExcelConfig>(
                    &this->monster_title_excel_config_map,
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
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "loadMonsterTitleExcelConfig",
                1214);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v29,
                      (const char (*)[14])byte_1ADAD5A0);
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "loadMonsterTitleExcelConfig",
            1202);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::MonsterTitleExcelConfig::~MonsterTitleExcelConfig((data::MonsterTitleExcelConfig *const)(v3 + 80));
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

// Line 1223: range 000000001459344C-0000000014594544
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadMonsterSpecialNameExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
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
  unsigned __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  int v18; // r14d
  __int64 v19; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  __int64 v24; // rsi
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  data::MonsterSpecialNameExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::MonsterSpecialNameExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  int v34; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85B8h]
  char v40[34224]; // [rsp+50h] [rbp-85B0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34176LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1238 64 4 9 <unknown> 80 24 9 data:1241 144 32 10 paths:1224 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 "
                        "9 <unknown> 592 376 25 debug_message_stream:1249 1040 32880 13 txt_file:1232";
  *(_QWORD *)(v3 + 16) = data::MonsterExcelConfigMgrBase::loadMonsterSpecialNameExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = -218959360;
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
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862750] = -218959360;
  v5[536862751] = -218959118;
  v5[536862752] = 62194;
  v5[536863780] = -202116109;
  v5[536863781] = -202116109;
  v5[536863782] = -202116109;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 144),
    "/txt/MonsterSpecialNameData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 144); __for_begin != (std::string *)(v3 + 176); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 208, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 208), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 208);
    std::string::~string((void *)(v3 + 208));
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1040, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1040), v7) )
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "loadMonsterSpecialNameExcelConfig",
        1235);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[8])byte_1AD383A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AD383E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1040));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        v13 = *(unsigned int *)(v3 + 48);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1040), v13);
        v14 = ((v3 + 80) >> 3) + 2147450880;
        *(_WORD *)v14 = 0;
        *(_BYTE *)(v14 + 2) = 0;
        v15 = &`vtable for'data::MonsterSpecialNameExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v15;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        v16 = (((_BYTE)v3 + 92) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 92) & 7) + 3) >= *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 92, v16);
        }
        *(_DWORD *)(v3 + 92) = 0;
        if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v3 + 96, v16, v3 + 96);
        *(_BYTE *)(v3 + 96) = 0;
        if ( row_ptr )
        {
          if ( data::MonsterSpecialNameExcelConfig::init((data::MonsterSpecialNameExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 592);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 592, &unk_1ADAD7A0);
            if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 88);
            std::ostream::operator<<(v19, *(unsigned int *)(v3 + 88));
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
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "loadMonsterSpecialNameExcelConfig",
              1251);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v20, (const char (*)[2])"<");
            v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, __for_begin);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v22,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v24 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v24);
            *(_DWORD *)(v3 + 64) = v24;
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 64));
            v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v25,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 464, 32LL);
            }
            std::ostringstream::str(v3 + 464, v3 + 592);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)(v3 + 464));
            std::string::~string((void *)(v3 + 464));
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 592);
            __asan_poison_stack_memory(v3 + 592, 376LL);
            v18 = 0;
          }
          else
          {
            v27 = std::move<data::MonsterSpecialNameExcelConfig &>((data::MonsterSpecialNameExcelConfig *)(v3 + 80));
            v30 = std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::emplace<unsigned int &,data::MonsterSpecialNameExcelConfig>(
                    &this->monster_special_name_excel_config_map,
                    (unsigned int *)(v3 + 88),
                    v27,
                    v28,
                    v29);
            if ( !v30.second )
            {
              *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 528, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 528),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "loadMonsterSpecialNameExcelConfig",
                1256);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 528),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v31,
                      (const char (*)[20])byte_1ADAD7E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v3 + 88));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
              *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v18 = 0;
            }
            else
            {
              v18 = 1;
            }
          }
        }
        else
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "loadMonsterSpecialNameExcelConfig",
            1244);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::MonsterSpecialNameExcelConfig::~MonsterSpecialNameExcelConfig((data::MonsterSpecialNameExcelConfig *const)(v3 + 80));
        v33 = ((v3 + 80) >> 3) + 2147450880;
        *(_WORD *)v33 = -1800;
        *(_BYTE *)(v33 + 2) = -8;
        if ( v18 != 1 )
        {
          v34 = 0;
          goto LABEL_53;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v34 = 1;
LABEL_53:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v34 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    __asan_poison_stack_memory(v3 + 1040, 32880LL);
    if ( !v10 )
      goto LABEL_57;
  }
  v2 = 0;
LABEL_57:
  for ( i = (char *)(v3 + 176); i != (char *)(v3 + 144); std::string::~string(i) )
    i -= 32;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4272) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34176LL, v40);
  }
  return v2;
};

// Line 1265: range 0000000014594546-0000000014595519
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadCaptureExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
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
  data::CaptureExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::CaptureExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1280 80 4 9 <unknown> 96 32 10 paths:1266 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 40 "
                        "9 data:1283 624 376 25 debug_message_stream:1291 1072 32880 13 txt_file:1274";
  *(_QWORD *)(v3 + 16) = data::MonsterExcelConfigMgrBase::loadCaptureExcelConfig;
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
    "/txt/CaptureData.txt",
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "loadCaptureExcelConfig",
        1277);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1072));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1072), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_BYTE *)(v13 + 4) = 0;
        data::CaptureExcelConfig::CaptureExcelConfig((data::CaptureExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::CaptureExcelConfig::init((data::CaptureExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1ADAD9C0);
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
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "loadCaptureExcelConfig",
              1293);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AD384E0);
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
                    (const char (*)[13])byte_1AD38520);
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
            v24 = std::move<data::CaptureExcelConfig &>((data::CaptureExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::CaptureExcelConfig>::emplace<unsigned int &,data::CaptureExcelConfig>(
                    &this->capture_excel_config_map,
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
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "loadCaptureExcelConfig",
                1298);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v28,
                      (const char (*)[16])byte_1ADADA00);
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "loadCaptureExcelConfig",
            1286);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::CaptureExcelConfig::~CaptureExcelConfig((data::CaptureExcelConfig *const)(v3 + 544));
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

// Line 1307: range 000000001459551A-0000000014596615
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadCaptureTagsExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
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
  unsigned __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  int v18; // r14d
  __int64 v19; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  __int64 v24; // rsi
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  data::CaptureTagsExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::CaptureTagsExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  int v34; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85B8h]
  char v40[34224]; // [rsp+50h] [rbp-85B0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34176LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1322 64 4 9 <unknown> 80 24 9 data:1325 144 32 10 paths:1308 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 "
                        "9 <unknown> 592 376 25 debug_message_stream:1333 1040 32880 13 txt_file:1316";
  *(_QWORD *)(v3 + 16) = data::MonsterExcelConfigMgrBase::loadCaptureTagsExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = -218959360;
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
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862750] = -218959360;
  v5[536862751] = -218959118;
  v5[536862752] = 62194;
  v5[536863780] = -202116109;
  v5[536863781] = -202116109;
  v5[536863782] = -202116109;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 144),
    "/txt/CaptureTagsData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 144); __for_begin != (std::string *)(v3 + 176); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 208, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 208), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 208);
    std::string::~string((void *)(v3 + 208));
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1040, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1040), v7) )
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "loadCaptureTagsExcelConfig",
        1319);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[8])byte_1AD383A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AD383E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1040));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        v13 = *(unsigned int *)(v3 + 48);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1040), v13);
        v14 = ((v3 + 80) >> 3) + 2147450880;
        *(_WORD *)v14 = 0;
        *(_BYTE *)(v14 + 2) = 0;
        v15 = &`vtable for'data::CaptureTagsExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v15;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        v16 = (((_BYTE)v3 + 92) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 92) & 7) + 3) >= *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 92, v16);
        }
        *(_DWORD *)(v3 + 92) = 0;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 96, v16);
        *(_DWORD *)(v3 + 96) = 0;
        if ( row_ptr )
        {
          if ( data::CaptureTagsExcelConfig::init((data::CaptureTagsExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 592);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 592, &unk_1ADADBE0);
            if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 88);
            std::ostream::operator<<(v19, *(unsigned int *)(v3 + 88));
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
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "loadCaptureTagsExcelConfig",
              1335);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v20, (const char (*)[2])"<");
            v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, __for_begin);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v22,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v24 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v24);
            *(_DWORD *)(v3 + 64) = v24;
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 64));
            v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v25,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 464, 32LL);
            }
            std::ostringstream::str(v3 + 464, v3 + 592);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)(v3 + 464));
            std::string::~string((void *)(v3 + 464));
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 592);
            __asan_poison_stack_memory(v3 + 592, 376LL);
            v18 = 0;
          }
          else
          {
            v27 = std::move<data::CaptureTagsExcelConfig &>((data::CaptureTagsExcelConfig *)(v3 + 80));
            v30 = std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::emplace<unsigned int &,data::CaptureTagsExcelConfig>(
                    &this->capture_tags_excel_config_map,
                    (unsigned int *)(v3 + 88),
                    v27,
                    v28,
                    v29);
            if ( !v30.second )
            {
              *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 528, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 528),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "loadCaptureTagsExcelConfig",
                1340);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 528),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v31,
                      (const char (*)[19])byte_1ADADC20);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v3 + 88));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
              *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v18 = 0;
            }
            else
            {
              v18 = 1;
            }
          }
        }
        else
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "loadCaptureTagsExcelConfig",
            1328);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::CaptureTagsExcelConfig::~CaptureTagsExcelConfig((data::CaptureTagsExcelConfig *const)(v3 + 80));
        v33 = ((v3 + 80) >> 3) + 2147450880;
        *(_WORD *)v33 = -1800;
        *(_BYTE *)(v33 + 2) = -8;
        if ( v18 != 1 )
        {
          v34 = 0;
          goto LABEL_53;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v34 = 1;
LABEL_53:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v34 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    __asan_poison_stack_memory(v3 + 1040, 32880LL);
    if ( !v10 )
      goto LABEL_57;
  }
  v2 = 0;
LABEL_57:
  for ( i = (char *)(v3 + 176); i != (char *)(v3 + 144); std::string::~string(i) )
    i -= 32;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4272) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34176LL, v40);
  }
  return v2;
};

// Line 1349: range 0000000014596616-0000000014597603
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadMonsterRelOverloadExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
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
  data::MonsterRelOverloadExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::MonsterRelOverloadExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1364 80 4 9 <unknown> 96 32 10 paths:1350 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 72 "
                        "9 data:1367 656 376 25 debug_message_stream:1375 1104 32880 13 txt_file:1358";
  *(_QWORD *)(v3 + 16) = data::MonsterExcelConfigMgrBase::loadMonsterRelOverloadExcelConfig;
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
  v5[536862739] = -218959360;
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
    "/txt/MonsterRelOverloadData.txt",
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
        "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
        "loadMonsterRelOverloadExcelConfig",
        1361);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1104));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1104), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_BYTE *)(v13 + 8) = 0;
        data::MonsterRelOverloadExcelConfig::MonsterRelOverloadExcelConfig((data::MonsterRelOverloadExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::MonsterRelOverloadExcelConfig::init(
                 (data::MonsterRelOverloadExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
              "loadMonsterRelOverloadExcelConfig",
              1377);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AD384E0);
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
                    (const char (*)[13])byte_1AD38520);
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
            v24 = std::move<data::MonsterRelOverloadExcelConfig &>((data::MonsterRelOverloadExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::emplace<unsigned int &,data::MonsterRelOverloadExcelConfig>(
                    &this->monster_rel_overload_excel_config_map,
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
                "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
                "loadMonsterRelOverloadExcelConfig",
                1382);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AD3B5E0);
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
            "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
            "loadMonsterRelOverloadExcelConfig",
            1370);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::MonsterRelOverloadExcelConfig::~MonsterRelOverloadExcelConfig((data::MonsterRelOverloadExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_BYTE *)(v30 + 8) = -8;
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

// Line 1391: range 0000000014597604-0000000014598319
int32_t __cdecl data::MonsterExcelConfigMgrBase::loadConfig(
        data::MonsterExcelConfigMgrBase *const this,
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
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  char v16[704]; // [rsp+10h] [rbp-2C0h] BYREF

  v2 = (common::milog::MiLogStream *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"10 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::MonsterExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -202116109;
  if ( data::MonsterExcelConfigMgrBase::loadMonsterExcelConfig(this, config) )
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "loadConfig",
      1394);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"loadMonsterExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::MonsterExcelConfigMgrBase::loadMonsterAffixExcelConfig(this, config) )
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "loadConfig",
      1399);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v7,
      (const char (*)[35])"loadMonsterAffixExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::MonsterExcelConfigMgrBase::loadMonsterRelationshipExcelConfig(this, config) )
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
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "loadConfig",
      1404);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v8,
      (const char (*)[42])"loadMonsterRelationshipExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::MonsterExcelConfigMgrBase::loadMonsterDescribeExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "loadConfig",
      1409);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v9,
      (const char (*)[38])"loadMonsterDescribeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( data::MonsterExcelConfigMgrBase::loadAnimalDescribeExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "loadConfig",
      1414);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v10,
      (const char (*)[37])"loadAnimalDescribeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( data::MonsterExcelConfigMgrBase::loadMonsterTitleExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[11], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "loadConfig",
      1419);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v11,
      (const char (*)[35])"loadMonsterTitleExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( data::MonsterExcelConfigMgrBase::loadMonsterSpecialNameExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[13], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "loadConfig",
      1424);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v12,
      (const char (*)[41])"loadMonsterSpecialNameExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( data::MonsterExcelConfigMgrBase::loadCaptureExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[15], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "loadConfig",
      1429);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v13,
      (const char (*)[30])"loadCaptureExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else if ( data::MonsterExcelConfigMgrBase::loadCaptureTagsExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[17] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[17], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "loadConfig",
      1434);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 17,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v14,
      (const char (*)[34])"loadCaptureTagsExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
    result = -1;
  }
  else if ( data::MonsterExcelConfigMgrBase::loadMonsterRelOverloadExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[19] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[19].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[19].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[19], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MonsterExcelConfig.gen.cpp",
      "loadConfig",
      1439);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 19,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v15,
      (const char (*)[41])"loadMonsterRelOverloadExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 19);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v16 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8050) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 1446: range 000000001459831A-000000001459832C
int32_t __cdecl data::MonsterExcelConfigMgrBase::rewriteConfig(
        data::MonsterExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1451: range 000000001459832E-0000000014598340
int32_t __cdecl data::MonsterExcelConfigMgrBase::finalConfig(
        data::MonsterExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1456: range 0000000014598342-00000000145984FD
data::MonsterExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterExcelConfigMap *p_monster_excel_config_map; // rdx
  data::MonsterExcelConfigMap *v6; // rdx
  bool v7; // al
  data::MonsterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1455 64 8 9 iter:1457 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_excel_config_map = &this->monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MonsterExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterExcelConfig>::find(
                                                                                        p_monster_excel_config_map,
                                                                                        (const std::unordered_map<unsigned int,data::MonsterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1469: range 00000000145984FE-00000000145986B9
const data::MonsterExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
        const data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterExcelConfigMap *p_monster_excel_config_map; // rdx
  data::MonsterExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::MonsterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1468 64 8 9 iter:1470 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_excel_config_map = &this->monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MonsterExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterExcelConfig>::find(
                                                                                              p_monster_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::MonsterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1482: range 00000000145986BA-0000000014598875
data::MonsterAffixExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterAffixExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterAffixExcelConfigMap *p_monster_affix_excel_config_map; // rdx
  data::MonsterAffixExcelConfigMap *v6; // rdx
  bool v7; // al
  data::MonsterAffixExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1481 64 8 9 iter:1483 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterAffixExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_affix_excel_config_map = &this->monster_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::find(
                                                                                             p_monster_affix_excel_config_map,
                                                                                             (const std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1495: range 0000000014598876-0000000014598A31
const data::MonsterAffixExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterAffixExcelConfig(
        const data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterAffixExcelConfigMap *p_monster_affix_excel_config_map; // rdx
  data::MonsterAffixExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::MonsterAffixExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1494 64 8 9 iter:1496 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterAffixExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_affix_excel_config_map = &this->monster_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::find(
                                                                                                   p_monster_affix_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterAffixExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterAffixExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1508: range 0000000014598A32-0000000014598BED
data::MonsterRelationshipExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterRelationshipExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterRelationshipExcelConfigMap *p_monster_relationship_excel_config_map; // rdx
  data::MonsterRelationshipExcelConfigMap *v6; // rdx
  bool v7; // al
  data::MonsterRelationshipExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1507 64 8 9 iter:1509 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterRelationshipExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_relationship_excel_config_map = &this->monster_relationship_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::find(
                                                                                                    p_monster_relationship_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_relationship_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1521: range 0000000014598BEE-0000000014598DA9
const data::MonsterRelationshipExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterRelationshipExcelConfig(
        const data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterRelationshipExcelConfigMap *p_monster_relationship_excel_config_map; // rdx
  data::MonsterRelationshipExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::MonsterRelationshipExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1520 64 8 9 iter:1522 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterRelationshipExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_relationship_excel_config_map = &this->monster_relationship_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::find(p_monster_relationship_excel_config_map, (const std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_relationship_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1534: range 0000000014598DAA-0000000014598F6B
data::MonsterDescribeExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterDescribeExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterDescribeExcelConfigMap *p_monster_describe_excel_config_map; // rdx
  data::MonsterDescribeExcelConfigMap *v6; // rdx
  bool v7; // al
  data::MonsterDescribeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1533 64 8 9 iter:1535 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterDescribeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_describe_excel_config_map = &this->monster_describe_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::find(
                                                                                                p_monster_describe_excel_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_describe_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1547: range 0000000014598F6C-000000001459912D
const data::MonsterDescribeExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterDescribeExcelConfig(
        const data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterDescribeExcelConfigMap *p_monster_describe_excel_config_map; // rdx
  data::MonsterDescribeExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::MonsterDescribeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1546 64 8 9 iter:1548 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterDescribeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_describe_excel_config_map = &this->monster_describe_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::find(p_monster_describe_excel_config_map, (const std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_describe_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1560: range 000000001459912E-00000000145992EF
data::AnimalDescribeExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findAnimalDescribeExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AnimalDescribeExcelConfigMap *p_animal_describe_excel_config_map; // rdx
  data::AnimalDescribeExcelConfigMap *v6; // rdx
  bool v7; // al
  data::AnimalDescribeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1559 64 8 9 iter:1561 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findAnimalDescribeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_animal_describe_excel_config_map = &this->animal_describe_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::find(
                                                                                               p_animal_describe_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->animal_describe_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1573: range 00000000145992F0-00000000145994B1
const data::AnimalDescribeExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findAnimalDescribeExcelConfig(
        const data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AnimalDescribeExcelConfigMap *p_animal_describe_excel_config_map; // rdx
  data::AnimalDescribeExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::AnimalDescribeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1572 64 8 9 iter:1574 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findAnimalDescribeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_animal_describe_excel_config_map = &this->animal_describe_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::find(
                                                                                                     p_animal_describe_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->animal_describe_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1586: range 00000000145994B2-0000000014599673
data::MonsterTitleExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterTitleExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        __int64 title_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterTitleExcelConfigMap *p_monster_title_excel_config_map; // rdx
  data::MonsterTitleExcelConfigMap *v6; // rdx
  bool v7; // al
  data::MonsterTitleExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 title_id:1585 64 8 9 iter:1587 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterTitleExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = title_id;
  p_monster_title_excel_config_map = &this->monster_title_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, title_id);
  *(std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::find(
                                                                                             p_monster_title_excel_config_map,
                                                                                             (const std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_title_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1599: range 0000000014599674-0000000014599835
const data::MonsterTitleExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterTitleExcelConfig(
        const data::MonsterExcelConfigMgrBase *const this,
        __int64 title_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterTitleExcelConfigMap *p_monster_title_excel_config_map; // rdx
  data::MonsterTitleExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::MonsterTitleExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 title_id:1598 64 8 9 iter:1600 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterTitleExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = title_id;
  p_monster_title_excel_config_map = &this->monster_title_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, title_id);
  *(std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::find(
                                                                                                   p_monster_title_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_title_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1612: range 0000000014599836-00000000145999F7
data::MonsterSpecialNameExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterSpecialNameExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        __int64 special_name_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterSpecialNameExcelConfigMap *p_monster_special_name_excel_config_map; // rdx
  data::MonsterSpecialNameExcelConfigMap *v6; // rdx
  bool v7; // al
  data::MonsterSpecialNameExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 special_name_id:1611 64 8 9 iter:1613 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterSpecialNameExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = special_name_id;
  p_monster_special_name_excel_config_map = &this->monster_special_name_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, special_name_id);
  *(std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::find(
                                                                                                   p_monster_special_name_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_special_name_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1625: range 00000000145999F8-0000000014599BB9
const data::MonsterSpecialNameExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterSpecialNameExcelConfig(
        const data::MonsterExcelConfigMgrBase *const this,
        __int64 special_name_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterSpecialNameExcelConfigMap *p_monster_special_name_excel_config_map; // rdx
  data::MonsterSpecialNameExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::MonsterSpecialNameExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 special_name_id:1624 64 8 9 iter:1626 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterSpecialNameExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = special_name_id;
  p_monster_special_name_excel_config_map = &this->monster_special_name_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, special_name_id);
  *(std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::find(p_monster_special_name_excel_config_map, (const std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_special_name_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1638: range 0000000014599BBA-0000000014599D7B
data::CaptureExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findCaptureExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        __int64 monster_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::CaptureExcelConfigMap *p_capture_excel_config_map; // rdx
  data::CaptureExcelConfigMap *v6; // rdx
  bool v7; // al
  data::CaptureExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 monster_id:1637 64 8 9 iter:1639 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findCaptureExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_id;
  p_capture_excel_config_map = &this->capture_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_id);
  *(std::unordered_map<unsigned int,data::CaptureExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CaptureExcelConfig>::find(
                                                                                        p_capture_excel_config_map,
                                                                                        (const std::unordered_map<unsigned int,data::CaptureExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->capture_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CaptureExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CaptureExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::CaptureExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1651: range 0000000014599D7C-0000000014599F3D
const data::CaptureExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findCaptureExcelConfig(
        const data::MonsterExcelConfigMgrBase *const this,
        __int64 monster_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::CaptureExcelConfigMap *p_capture_excel_config_map; // rdx
  data::CaptureExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::CaptureExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 monster_id:1650 64 8 9 iter:1652 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findCaptureExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_id;
  p_capture_excel_config_map = &this->capture_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_id);
  *(std::unordered_map<unsigned int,data::CaptureExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CaptureExcelConfig>::find(
                                                                                              p_capture_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::CaptureExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->capture_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CaptureExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CaptureExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::CaptureExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1664: range 0000000014599F3E-000000001459A0FF
data::CaptureTagsExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findCaptureTagsExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        __int64 capture_tag_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::CaptureTagsExcelConfigMap *p_capture_tags_excel_config_map; // rdx
  data::CaptureTagsExcelConfigMap *v6; // rdx
  bool v7; // al
  data::CaptureTagsExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 capture_tag_id:1663 64 8 9 iter:1665 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findCaptureTagsExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = capture_tag_id;
  p_capture_tags_excel_config_map = &this->capture_tags_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, capture_tag_id);
  *(std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::find(
                                                                                            p_capture_tags_excel_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->capture_tags_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1677: range 000000001459A100-000000001459A2C1
const data::CaptureTagsExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findCaptureTagsExcelConfig(
        const data::MonsterExcelConfigMgrBase *const this,
        __int64 capture_tag_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::CaptureTagsExcelConfigMap *p_capture_tags_excel_config_map; // rdx
  data::CaptureTagsExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::CaptureTagsExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 capture_tag_id:1676 64 8 9 iter:1678 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findCaptureTagsExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = capture_tag_id;
  p_capture_tags_excel_config_map = &this->capture_tags_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, capture_tag_id);
  *(std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::find(
                                                                                                  p_capture_tags_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->capture_tags_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1690: range 000000001459A2C2-000000001459A483
data::MonsterRelOverloadExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterRelOverloadExcelConfig(
        data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterRelOverloadExcelConfigMap *p_monster_rel_overload_excel_config_map; // rdx
  data::MonsterRelOverloadExcelConfigMap *v6; // rdx
  bool v7; // al
  data::MonsterRelOverloadExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1689 64 8 9 iter:1691 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterRelOverloadExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_rel_overload_excel_config_map = &this->monster_rel_overload_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::find(
                                                                                                   p_monster_rel_overload_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_rel_overload_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1703: range 000000001459A484-000000001459A645
const data::MonsterRelOverloadExcelConfig *__fastcall data::MonsterExcelConfigMgrBase::findMonsterRelOverloadExcelConfig(
        const data::MonsterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MonsterRelOverloadExcelConfigMap *p_monster_rel_overload_excel_config_map; // rdx
  data::MonsterRelOverloadExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::MonsterRelOverloadExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1702 64 8 9 iter:1704 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfigMgrBase::findMonsterRelOverloadExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_rel_overload_excel_config_map = &this->monster_rel_overload_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::find(p_monster_rel_overload_excel_config_map, (const std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_rel_overload_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp

// Line 12: range 0000000012CE51F2-0000000012CE556A
const char *__fastcall data::enumValToStr(data::ActivityGachaRobot e, __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // al
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rcx
  int v8; // edi
  char v9; // al
  const char *result; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getActivityGachaRobotEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ActivityGachaRobot,std::pair<std::string,std::string>>::find(map, (const std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ActivityGachaRobot,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
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
      v8 = v2 + 32;
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v2 + 32, v6);
    }
    *(_DWORD *)(v2 + 32) = v8;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = "INVALID_ActivityGachaRobot";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ActivityGachaRobot const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 0000000012CE556B-0000000012CE5B23
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ActivityGachaRobot>,false,true>::pointer v10; // rax
  data::ActivityGachaRobot second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ActivityGachaRobot> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getActivityGachaRobotNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ActivityGachaRobot>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ActivityGachaRobot>::find(
                                                                                               m,
                                                                                               (const std::unordered_map<std::string,data::ActivityGachaRobot>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ActivityGachaRobot>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ActivityGachaRobot>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ActivityGachaRobot>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobot>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobot>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ActivityGachaRobot>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ActivityGachaRobot>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
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

// Line 45: range 0000000012CE5B24-0000000012CE64ED
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ActivityGachaRobot> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ActivityGachaRobot>,false,true>::pointer v12; // rax
  data::ActivityGachaRobot second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ActivityGachaRobot &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ActivityGachaRobot &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ActivityGachaRobot>::pair<char const(&)[10],data::ActivityGachaRobot,true>(
        (std::pair<const std::string,data::ActivityGachaRobot> *const)(v2 + 432),
        (const char (*)[10])byte_1AA7B780,
        (data::ActivityGachaRobot *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AA7B780);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ActivityGachaRobot>::pair<char const(&)[10],data::ActivityGachaRobot,true>(
        (std::pair<const std::string,data::ActivityGachaRobot> *const)(v2 + 472),
        (const char (*)[10])byte_1AA7B7C0,
        (data::ActivityGachaRobot *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::ActivityGachaRobot>>::allocator((std::allocator<std::pair<const std::string,data::ActivityGachaRobot> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ActivityGachaRobot>::unordered_map(
        &data::enumStrToVal(char const*,data::ActivityGachaRobot &)::m,
        (std::initializer_list<std::pair<const std::string,data::ActivityGachaRobot> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::ActivityGachaRobot>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ActivityGachaRobot>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ActivityGachaRobot>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ActivityGachaRobot &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ActivityGachaRobot>::~unordered_map,
        &data::enumStrToVal(char const*,data::ActivityGachaRobot &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ActivityGachaRobot>>::~allocator((std::allocator<std::pair<const std::string,data::ActivityGachaRobot> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ActivityGachaRobot> *)(v2 + 512);
            i != (std::pair<const std::string,data::ActivityGachaRobot> *)(v2 + 432);
            std::pair<std::string const,data::ActivityGachaRobot>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ActivityGachaRobot>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::ActivityGachaRobot>::find(
                                                                                          &data::enumStrToVal(char const*,data::ActivityGachaRobot &)::m,
                                                                                          (const std::unordered_map<std::string,data::ActivityGachaRobot>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::ActivityGachaRobot>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::ActivityGachaRobot>::end(&data::enumStrToVal(char const*,data::ActivityGachaRobot &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ActivityGachaRobot>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobot>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobot>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ActivityGachaRobot>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ActivityGachaRobot>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
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

// Line 70: range 0000000012CE64EE-0000000012CE6504
const char *__cdecl data::getDescription(data::ActivityGachaRobot e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 75: range 0000000012CE6505-0000000012CE66BB
bool __cdecl data::isValidActivityGachaRobot(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  char v6; // al
  const std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >> *v7; // rcx
  const std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >> *v8; // rcx
  bool result; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:76 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidActivityGachaRobot;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  v5 = n;
  v6 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v6 != 0;
  if ( v6 != 0 && v6 <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = v5;
  v7 = data::getActivityGachaRobotEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ActivityGachaRobot,std::pair<std::string,std::string>>::end(v7);
  v8 = data::getActivityGachaRobotEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ActivityGachaRobot,std::pair<std::string,std::string>>::find(v8, (const std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
  if ( v10 == (char *)v2 )
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

// Line 81: range 0000000012CE66BC-0000000012CE681D
bool __cdecl data::isValidActivityGachaRobotName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ActivityGachaRobot> *v5; // rcx
  const std::unordered_map<std::string,data::ActivityGachaRobot> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidActivityGachaRobotName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getActivityGachaRobotNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ActivityGachaRobot>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ActivityGachaRobot>::end(v5);
  v6 = data::getActivityGachaRobotNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ActivityGachaRobot>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ActivityGachaRobot>::find(
                                                                                             v6,
                                                                                             name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ActivityGachaRobot>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobot>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobot>,true> *)(v2 + 64));
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

// Line 86: range 0000000012CE681E-0000000012CE6CE0
const std::unordered_map<std::string,data::ActivityGachaRobot> *__cdecl data::getActivityGachaRobotNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ActivityGachaRobot> *i; // r14
  const std::unordered_map<std::string,data::ActivityGachaRobot> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getActivityGachaRobotNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getActivityGachaRobotNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getActivityGachaRobotNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::ActivityGachaRobot>::pair<char const(&)[16],data::ActivityGachaRobot,true>(
      (std::pair<const std::string,data::ActivityGachaRobot> *const)(v1 + 128),
      (const char (*)[16])"ROBOT_TYPE_NONE",
      (data::ActivityGachaRobot *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "ROBOT_TYPE_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::ActivityGachaRobot>::pair<char const(&)[18],data::ActivityGachaRobot,true>(
      (std::pair<const std::string,data::ActivityGachaRobot> *const)(v1 + 168),
      (const char (*)[18])"ROBOT_TYPE_NORMAL",
      (data::ActivityGachaRobot *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ROBOT_TYPE_NORMAL");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::ActivityGachaRobot>::pair<char const(&)[18],data::ActivityGachaRobot,true>(
      (std::pair<const std::string,data::ActivityGachaRobot> *const)(v1 + 208),
      (const char (*)[18])"ROBOT_TYPE_HIDDEN",
      (data::ActivityGachaRobot *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::ActivityGachaRobot>>::allocator((std::allocator<std::pair<const std::string,data::ActivityGachaRobot> > *const)(v1 + 64));
    std::unordered_map<std::string,data::ActivityGachaRobot>::unordered_map(
      &data::getActivityGachaRobotNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ActivityGachaRobot> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::ActivityGachaRobot>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::ActivityGachaRobot>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::ActivityGachaRobot>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getActivityGachaRobotNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ActivityGachaRobot>::~unordered_map,
      &data::getActivityGachaRobotNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ActivityGachaRobot>>::~allocator((std::allocator<std::pair<const std::string,data::ActivityGachaRobot> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ActivityGachaRobot> *)(v1 + 248);
          i != (std::pair<const std::string,data::ActivityGachaRobot> *)(v1 + 128);
          std::pair<std::string const,data::ActivityGachaRobot>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getActivityGachaRobotNameMap[abi:cxx11](void)::m;
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

// Line 97: range 0000000012CE6CE1-0000000012CE73DF
const std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >> *__cdecl data::getActivityGachaRobotEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getActivityGachaRobotEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getActivityGachaRobotEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getActivityGachaRobotEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[16],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A9D7400,
      (const char (*)[16])"ROBOT_TYPE_NONE");
    std::pair<data::ActivityGachaRobot const,std::pair<std::string,std::string>>::pair<data::ActivityGachaRobot,true>(
      (std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::ActivityGachaRobot *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[10])byte_1AA7B780,
      (const char (*)[18])"ROBOT_TYPE_NORMAL");
    std::pair<data::ActivityGachaRobot const,std::pair<std::string,std::string>>::pair<data::ActivityGachaRobot,true>(
      (std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::ActivityGachaRobot *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[10])byte_1AA7B7C0,
      (const char (*)[18])"ROBOT_TYPE_HIDDEN");
    std::pair<data::ActivityGachaRobot const,std::pair<std::string,std::string>>::pair<data::ActivityGachaRobot,true>(
      (std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::ActivityGachaRobot *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::ActivityGachaRobot const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::ActivityGachaRobot,std::pair<std::string,std::string>>::map(
      &data::getActivityGachaRobotEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::ActivityGachaRobot> *)(v1 + 48),
      (const std::map<data::ActivityGachaRobot,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getActivityGachaRobotEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ActivityGachaRobot,std::pair<std::string,std::string>>::~map,
      &data::getActivityGachaRobotEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ActivityGachaRobot const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::ActivityGachaRobot,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::ActivityGachaRobot const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getActivityGachaRobotEnumMap[abi:cxx11](void)::m;
};

// Line 108: range 0000000012CE73E0-0000000012CE7758
const char *__fastcall data::enumValToStr(data::ActivityGachaTargetType e, __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // al
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rcx
  int v8; // edi
  char v9; // al
  const char *result; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getActivityGachaTargetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
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
      v8 = v2 + 32;
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v2 + 32, v6);
    }
    *(_DWORD *)(v2 + 32) = v8;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = "INVALID_ActivityGachaTargetType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ActivityGachaTargetType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 120: range 0000000012CE7759-0000000012CE7D11
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ActivityGachaTargetType>,false,true>::pointer v10; // rax
  data::ActivityGachaTargetType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ActivityGachaTargetType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getActivityGachaTargetTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ActivityGachaTargetType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ActivityGachaTargetType>::find(
                                                                                                    m,
                                                                                                    (const std::unordered_map<std::string,data::ActivityGachaTargetType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ActivityGachaTargetType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ActivityGachaTargetType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ActivityGachaTargetType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaTargetType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaTargetType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ActivityGachaTargetType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ActivityGachaTargetType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
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

// Line 141: range 0000000012CE7D12-0000000012CE876D
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ActivityGachaTargetType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ActivityGachaTargetType>,false,true>::pointer v12; // rax
  data::ActivityGachaTargetType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:155 192 8 9 <unknown> 224 8 5 s:140 256 32 9 <unknown> 3"
                        "20 32 9 <unknown> 384 32 9 <unknown> 448 120 9 <unknown>";
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ActivityGachaTargetType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ActivityGachaTargetType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ActivityGachaTargetType>::pair<char const(&)[10],data::ActivityGachaTargetType,true>(
        (std::pair<const std::string,data::ActivityGachaTargetType> *const)(v2 + 448),
        (const char (*)[10])byte_1AA3AE20,
        (data::ActivityGachaTargetType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AA3AE20);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ActivityGachaTargetType>::pair<char const(&)[7],data::ActivityGachaTargetType,true>(
        (std::pair<const std::string,data::ActivityGachaTargetType> *const)(v2 + 488),
        (const char (*)[7])byte_1AA7BA00,
        (data::ActivityGachaTargetType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AA7BA00);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::ActivityGachaTargetType>::pair<char const(&)[7],data::ActivityGachaTargetType,true>(
        (std::pair<const std::string,data::ActivityGachaTargetType> *const)(v2 + 528),
        (const char (*)[7])byte_1AA369E0,
        (data::ActivityGachaTargetType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::ActivityGachaTargetType>>::allocator((std::allocator<std::pair<const std::string,data::ActivityGachaTargetType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ActivityGachaTargetType>::unordered_map(
        &data::enumStrToVal(char const*,data::ActivityGachaTargetType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ActivityGachaTargetType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::ActivityGachaTargetType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ActivityGachaTargetType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ActivityGachaTargetType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ActivityGachaTargetType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ActivityGachaTargetType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ActivityGachaTargetType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ActivityGachaTargetType>>::~allocator((std::allocator<std::pair<const std::string,data::ActivityGachaTargetType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ActivityGachaTargetType> *)(v2 + 568);
            i != (std::pair<const std::string,data::ActivityGachaTargetType> *)(v2 + 448);
            std::pair<std::string const,data::ActivityGachaTargetType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ActivityGachaTargetType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::ActivityGachaTargetType>::find(
                                                                                               &data::enumStrToVal(char const*,data::ActivityGachaTargetType &)::m,
                                                                                               (const std::unordered_map<std::string,data::ActivityGachaTargetType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::ActivityGachaTargetType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::ActivityGachaTargetType>::end(&data::enumStrToVal(char const*,data::ActivityGachaTargetType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ActivityGachaTargetType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaTargetType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaTargetType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "enumStrToVal",
        158);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ActivityGachaTargetType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ActivityGachaTargetType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "enumStrToVal",
      144);
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

// Line 167: range 0000000012CE876E-0000000012CE8784
const char *__cdecl data::getDescription(data::ActivityGachaTargetType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 172: range 0000000012CE8785-0000000012CE893B
bool __cdecl data::isValidActivityGachaTargetType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  char v6; // al
  const std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >> *v7; // rcx
  const std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >> *v8; // rcx
  bool result; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:173 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidActivityGachaTargetType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  v5 = n;
  v6 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v6 != 0;
  if ( v6 != 0 && v6 <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = v5;
  v7 = data::getActivityGachaTargetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string>>::end(v7);
  v8 = data::getActivityGachaTargetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string>>::find(v8, (const std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
  if ( v10 == (char *)v2 )
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

// Line 178: range 0000000012CE893C-0000000012CE8A9D
bool __cdecl data::isValidActivityGachaTargetTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ActivityGachaTargetType> *v5; // rcx
  const std::unordered_map<std::string,data::ActivityGachaTargetType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidActivityGachaTargetTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getActivityGachaTargetTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ActivityGachaTargetType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ActivityGachaTargetType>::end(v5);
  v6 = data::getActivityGachaTargetTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ActivityGachaTargetType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ActivityGachaTargetType>::find(
                                                                                                  v6,
                                                                                                  name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ActivityGachaTargetType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaTargetType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaTargetType>,true> *)(v2 + 64));
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

// Line 183: range 0000000012CE8A9E-0000000012CE8FFD
const std::unordered_map<std::string,data::ActivityGachaTargetType> *__cdecl data::getActivityGachaTargetTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ActivityGachaTargetType> *i; // r14
  const std::unordered_map<std::string,data::ActivityGachaTargetType> *result; // rax
  char v6[432]; // [rsp+10h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9 "
                        "<unknown> 144 4 9 <unknown> 160 160 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getActivityGachaTargetTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getActivityGachaTargetTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getActivityGachaTargetTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ActivityGachaTargetType>::pair<char const(&)[17],data::ActivityGachaTargetType,true>(
      (std::pair<const std::string,data::ActivityGachaTargetType> *const)(v1 + 160),
      (const char (*)[17])"TARGET_TYPE_NONE",
      (data::ActivityGachaTargetType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "TARGET_TYPE_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ActivityGachaTargetType>::pair<char const(&)[19],data::ActivityGachaTargetType,true>(
      (std::pair<const std::string,data::ActivityGachaTargetType> *const)(v1 + 200),
      (const char (*)[19])"TARGET_TYPE_GATHER",
      (data::ActivityGachaTargetType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "TARGET_TYPE_GATHER");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ActivityGachaTargetType>::pair<char const(&)[17],data::ActivityGachaTargetType,true>(
      (std::pair<const std::string,data::ActivityGachaTargetType> *const)(v1 + 240),
      (const char (*)[17])"TARGET_TYPE_ELEM",
      (data::ActivityGachaTargetType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "TARGET_TYPE_ELEM");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ActivityGachaTargetType>::pair<char const(&)[20],data::ActivityGachaTargetType,true>(
      (std::pair<const std::string,data::ActivityGachaTargetType> *const)(v1 + 280),
      (const char (*)[20])"TARGET_TYPE_MONSTER",
      (data::ActivityGachaTargetType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::ActivityGachaTargetType>>::allocator((std::allocator<std::pair<const std::string,data::ActivityGachaTargetType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ActivityGachaTargetType>::unordered_map(
      &data::getActivityGachaTargetTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ActivityGachaTargetType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::ActivityGachaTargetType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ActivityGachaTargetType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ActivityGachaTargetType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getActivityGachaTargetTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ActivityGachaTargetType>::~unordered_map,
      &data::getActivityGachaTargetTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ActivityGachaTargetType>>::~allocator((std::allocator<std::pair<const std::string,data::ActivityGachaTargetType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ActivityGachaTargetType> *)(v1 + 320);
          i != (std::pair<const std::string,data::ActivityGachaTargetType> *)(v1 + 160);
          std::pair<std::string const,data::ActivityGachaTargetType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getActivityGachaTargetTypeNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 195: range 0000000012CE8FFE-0000000012CE97CE
const std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >> *__cdecl data::getActivityGachaTargetTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  char v9[912]; // [rsp+10h] [rbp-390h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(864LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 64 9 <unknown> 224 64 9 <unknown> 320 64 9 <unknown> 416 64 9 <unknown> 512 288 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getActivityGachaTargetTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862726] = -218959118;
  v3[536862729] = -218959118;
  v3[536862732] = -218959118;
  v3[536862735] = -218959118;
  v3[536862745] = -202116109;
  v3[536862746] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getActivityGachaTargetTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getActivityGachaTargetTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A9D7400,
      (const char (*)[17])"TARGET_TYPE_NONE");
    std::pair<data::ActivityGachaTargetType const,std::pair<std::string,std::string>>::pair<data::ActivityGachaTargetType,true>(
      (std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::ActivityGachaTargetType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[10])byte_1AA3AE20,
      (const char (*)[19])"TARGET_TYPE_GATHER");
    std::pair<data::ActivityGachaTargetType const,std::pair<std::string,std::string>>::pair<data::ActivityGachaTargetType,true>(
      (std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::ActivityGachaTargetType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1AA7BA00,
      (const char (*)[17])"TARGET_TYPE_ELEM");
    std::pair<data::ActivityGachaTargetType const,std::pair<std::string,std::string>>::pair<data::ActivityGachaTargetType,true>(
      (std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::ActivityGachaTargetType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[7])byte_1AA369E0,
      (const char (*)[20])"TARGET_TYPE_MONSTER");
    std::pair<data::ActivityGachaTargetType const,std::pair<std::string,std::string>>::pair<data::ActivityGachaTargetType,true>(
      (std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::ActivityGachaTargetType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::ActivityGachaTargetType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string>>::map(
      &data::getActivityGachaTargetTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::ActivityGachaTargetType> *)(v1 + 32),
      (const std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getActivityGachaTargetTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ActivityGachaTargetType,std::pair<std::string,std::string>>::~map,
      &data::getActivityGachaTargetTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ActivityGachaTargetType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::ActivityGachaTargetType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::ActivityGachaTargetType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 512, 288LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 416));
    v5 = (_DWORD *)(((v1 + 416) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 320));
    v6 = (_DWORD *)(((v1 + 320) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 224));
    v7 = (_DWORD *)(((v1 + 224) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 128));
  }
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8068) = -168430091;
  }
  return &data::getActivityGachaTargetTypeEnumMap[abi:cxx11](void)::m;
};

// Line 207: range 0000000012CE97CF-0000000012CE9B47
const char *__fastcall data::enumValToStr(data::ActivityGachaRobotType e, __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // al
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rcx
  int v8; // edi
  char v9; // al
  const char *result; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:206 64 8 8 iter:209 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getActivityGachaRobotTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "enumValToStr",
      212);
    v6 = "invalid e:";
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[11])"invalid e:");
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v8 = *(_DWORD *)(v2 + 48);
    v9 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      v8 = v2 + 32;
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v2 + 32, v6);
    }
    *(_DWORD *)(v2 + 32) = v8;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = "INVALID_ActivityGachaRobotType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ActivityGachaRobotType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 219: range 0000000012CE9B48-0000000012CEA100
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ActivityGachaRobotType>,false,true>::pointer v10; // rax
  data::ActivityGachaRobotType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ActivityGachaRobotType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:228 96 8 9 <unknown> 128 8 5 s:218 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getActivityGachaRobotTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ActivityGachaRobotType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ActivityGachaRobotType>::find(
                                                                                                   m,
                                                                                                   (const std::unordered_map<std::string,data::ActivityGachaRobotType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ActivityGachaRobotType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ActivityGachaRobotType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ActivityGachaRobotType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobotType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobotType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "enumNameToVal",
        231);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ActivityGachaRobotType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ActivityGachaRobotType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "enumNameToVal",
      222);
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

// Line 240: range 0000000012CEA101-0000000012CEABFF
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ActivityGachaRobotType> *i; // r14
  _DWORD *v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ActivityGachaRobotType>,false,true>::pointer v12; // rax
  data::ActivityGachaRobotType second; // ecx
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
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 8 6 it:255 192 8 9 <unknown> 224 8 5 s:239 256"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ActivityGachaRobotType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ActivityGachaRobotType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ActivityGachaRobotType>::pair<char const(&)[7],data::ActivityGachaRobotType,true>(
        (std::pair<const std::string,data::ActivityGachaRobotType> *const)(v2 + 448),
        (const char (*)[7])byte_1AA7BCE0,
        (data::ActivityGachaRobotType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AA7BCE0);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ActivityGachaRobotType>::pair<char const(&)[7],data::ActivityGachaRobotType,true>(
        (std::pair<const std::string,data::ActivityGachaRobotType> *const)(v2 + 488),
        (const char (*)[7])byte_1AA7BD20,
        (data::ActivityGachaRobotType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AA7BD20);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::ActivityGachaRobotType>::pair<char const(&)[7],data::ActivityGachaRobotType,true>(
        (std::pair<const std::string,data::ActivityGachaRobotType> *const)(v2 + 528),
        (const char (*)[7])byte_1AA7BD60,
        (data::ActivityGachaRobotType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AA7BD60);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::ActivityGachaRobotType>::pair<char const(&)[17],data::ActivityGachaRobotType,true>(
        (std::pair<const std::string,data::ActivityGachaRobotType> *const)(v2 + 568),
        (const char (*)[17])byte_1AA7BDA0,
        (data::ActivityGachaRobotType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::ActivityGachaRobotType>>::allocator((std::allocator<std::pair<const std::string,data::ActivityGachaRobotType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::ActivityGachaRobotType>::unordered_map(
        &data::enumStrToVal(char const*,data::ActivityGachaRobotType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ActivityGachaRobotType> >)__PAIR128__(4LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::ActivityGachaRobotType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::ActivityGachaRobotType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::ActivityGachaRobotType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ActivityGachaRobotType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ActivityGachaRobotType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ActivityGachaRobotType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ActivityGachaRobotType>>::~allocator((std::allocator<std::pair<const std::string,data::ActivityGachaRobotType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ActivityGachaRobotType> *)(v2 + 608);
            i != (std::pair<const std::string,data::ActivityGachaRobotType> *)(v2 + 448);
            std::pair<std::string const,data::ActivityGachaRobotType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ActivityGachaRobotType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::ActivityGachaRobotType>::find(
                                                                                              &data::enumStrToVal(char const*,data::ActivityGachaRobotType &)::m,
                                                                                              (const std::unordered_map<std::string,data::ActivityGachaRobotType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::ActivityGachaRobotType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::ActivityGachaRobotType>::end(&data::enumStrToVal(char const*,data::ActivityGachaRobotType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ActivityGachaRobotType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobotType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobotType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "enumStrToVal",
        258);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ActivityGachaRobotType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ActivityGachaRobotType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "enumStrToVal",
      243);
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

// Line 267: range 0000000012CEAC00-0000000012CEAC16
const char *__cdecl data::getDescription(data::ActivityGachaRobotType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 272: range 0000000012CEAC17-0000000012CEADCD
bool __cdecl data::isValidActivityGachaRobotType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  char v6; // al
  const std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >> *v7; // rcx
  const std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >> *v8; // rcx
  bool result; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:273 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidActivityGachaRobotType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  v5 = n;
  v6 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v6 != 0;
  if ( v6 != 0 && v6 <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = v5;
  v7 = data::getActivityGachaRobotTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string>>::end(v7);
  v8 = data::getActivityGachaRobotTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string>>::find(v8, (const std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
  if ( v10 == (char *)v2 )
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

// Line 278: range 0000000012CEADCE-0000000012CEAF2F
bool __cdecl data::isValidActivityGachaRobotTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ActivityGachaRobotType> *v5; // rcx
  const std::unordered_map<std::string,data::ActivityGachaRobotType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidActivityGachaRobotTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getActivityGachaRobotTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ActivityGachaRobotType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ActivityGachaRobotType>::end(v5);
  v6 = data::getActivityGachaRobotTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ActivityGachaRobotType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ActivityGachaRobotType>::find(
                                                                                                 v6,
                                                                                                 name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ActivityGachaRobotType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobotType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ActivityGachaRobotType>,true> *)(v2 + 64));
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

// Line 283: range 0000000012CEAF30-0000000012CEB54A
const std::unordered_map<std::string,data::ActivityGachaRobotType> *__cdecl data::getActivityGachaRobotTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ActivityGachaRobotType> *i; // r14
  const std::unordered_map<std::string,data::ActivityGachaRobotType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getActivityGachaRobotTypeNameMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getActivityGachaRobotTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getActivityGachaRobotTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ActivityGachaRobotType>::pair<char const(&)[16],data::ActivityGachaRobotType,true>(
      (std::pair<const std::string,data::ActivityGachaRobotType> *const)(v1 + 176),
      (const char (*)[16])"ROBOT_TYPE_NONE",
      (data::ActivityGachaRobotType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ROBOT_TYPE_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ActivityGachaRobotType>::pair<char const(&)[17],data::ActivityGachaRobotType,true>(
      (std::pair<const std::string,data::ActivityGachaRobotType> *const)(v1 + 216),
      (const char (*)[17])"ROBOT_TYPE_SHAPE",
      (data::ActivityGachaRobotType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "ROBOT_TYPE_SHAPE");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ActivityGachaRobotType>::pair<char const(&)[17],data::ActivityGachaRobotType,true>(
      (std::pair<const std::string,data::ActivityGachaRobotType> *const)(v1 + 256),
      (const char (*)[17])"ROBOT_TYPE_COLOR",
      (data::ActivityGachaRobotType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "ROBOT_TYPE_COLOR");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ActivityGachaRobotType>::pair<char const(&)[18],data::ActivityGachaRobotType,true>(
      (std::pair<const std::string,data::ActivityGachaRobotType> *const)(v1 + 296),
      (const char (*)[18])"ROBOT_TYPE_ACTION",
      (data::ActivityGachaRobotType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "ROBOT_TYPE_ACTION");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::ActivityGachaRobotType>::pair<char const(&)[15],data::ActivityGachaRobotType,true>(
      (std::pair<const std::string,data::ActivityGachaRobotType> *const)(v1 + 336),
      (const char (*)[15])"ROBOT_TYPE_NUM",
      (data::ActivityGachaRobotType *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::ActivityGachaRobotType>>::allocator((std::allocator<std::pair<const std::string,data::ActivityGachaRobotType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ActivityGachaRobotType>::unordered_map(
      &data::getActivityGachaRobotTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ActivityGachaRobotType> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::ActivityGachaRobotType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ActivityGachaRobotType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ActivityGachaRobotType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getActivityGachaRobotTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ActivityGachaRobotType>::~unordered_map,
      &data::getActivityGachaRobotTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ActivityGachaRobotType>>::~allocator((std::allocator<std::pair<const std::string,data::ActivityGachaRobotType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ActivityGachaRobotType> *)(v1 + 376);
          i != (std::pair<const std::string,data::ActivityGachaRobotType> *)(v1 + 176);
          std::pair<std::string const,data::ActivityGachaRobotType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getActivityGachaRobotTypeNameMap[abi:cxx11](void)::m;
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

// Line 296: range 0000000012CEB54B-0000000012CEBE10
const std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >> *__cdecl data::getActivityGachaRobotTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getActivityGachaRobotTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getActivityGachaRobotTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getActivityGachaRobotTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[16],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[1])byte_1A9D7400,
      (const char (*)[16])"ROBOT_TYPE_NONE");
    std::pair<data::ActivityGachaRobotType const,std::pair<std::string,std::string>>::pair<data::ActivityGachaRobotType,true>(
      (std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::ActivityGachaRobotType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[7])byte_1AA7BCE0,
      (const char (*)[17])"ROBOT_TYPE_SHAPE");
    std::pair<data::ActivityGachaRobotType const,std::pair<std::string,std::string>>::pair<data::ActivityGachaRobotType,true>(
      (std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::ActivityGachaRobotType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[7])byte_1AA7BD20,
      (const char (*)[17])"ROBOT_TYPE_COLOR");
    std::pair<data::ActivityGachaRobotType const,std::pair<std::string,std::string>>::pair<data::ActivityGachaRobotType,true>(
      (std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::ActivityGachaRobotType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[7])byte_1AA7BD60,
      (const char (*)[18])"ROBOT_TYPE_ACTION");
    std::pair<data::ActivityGachaRobotType const,std::pair<std::string,std::string>>::pair<data::ActivityGachaRobotType,true>(
      (std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::ActivityGachaRobotType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[17])byte_1AA7BDA0,
      (const char (*)[15])"ROBOT_TYPE_NUM");
    std::pair<data::ActivityGachaRobotType const,std::pair<std::string,std::string>>::pair<data::ActivityGachaRobotType,true>(
      (std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::ActivityGachaRobotType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::ActivityGachaRobotType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string>>::map(
      &data::getActivityGachaRobotTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::ActivityGachaRobotType> *)(v1 + 32),
      (const std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getActivityGachaRobotTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ActivityGachaRobotType,std::pair<std::string,std::string>>::~map,
      &data::getActivityGachaRobotTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ActivityGachaRobotType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::ActivityGachaRobotType,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::ActivityGachaRobotType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getActivityGachaRobotTypeEnumMap[abi:cxx11](void)::m;
};

// Line 310: range 0000000012CEBE12-0000000012CEDD12
int32_t __cdecl data::ActivityGachaRobotExcelConfig::init(
        data::ActivityGachaRobotExcelConfig *const this,
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
  common::milog::MiLogStream *v36; // rax
  bool t; // [rsp+0h] [rbp-770h]
  bool ta; // [rsp+0h] [rbp-770h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-760h]
  std::initializer_list<std::string > v41; // [rsp+20h] [rbp-750h]
  char v42[1840]; // [rsp+40h] [rbp-730h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1792LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "37 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 24 9 <unknown> "
                        "352 24 9 <unknown> 416 24 9 <unknown> 480 32 11 val_str:311 544 32 9 <unknown> 608 32 9 <unknown"
                        "> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown>"
                        " 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unkno"
                        "wn> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 64 9 <unknown> 1600 64 9 <u"
                        "nknown> 1696 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaRobotExcelConfig::init;
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
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862731] = -234881024;
  v4[536862732] = -218959118;
  v4[536862733] = -234881024;
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
  v4[536862769] = -218959118;
  v4[536862772] = -218959118;
  v4[536862775] = -202116109;
  std::string::basic_string(v2 + 480);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 544),
    &byte_1AA7C1E0,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 544), &this->robot_id) != 0;
  std::string::~string((void *)(v2 + 544));
  *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "init",
      314);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 608),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v5, (const char (*)[32])byte_1AA7C220);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 672),
      byte_1AA7BCE0,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 672), (std::string *)(v2 + 480)) != 0;
    std::string::~string((void *)(v2 + 672));
    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "init",
        319);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 736),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v7, (const char (*)[27])byte_1AA7C260);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 288) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 1504) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1504),
        ";",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1536),
        ",",
        (const std::allocator<char> *)(v2 + 96));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 288),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1504),
        (const std::vector<std::string>::allocator_type *)(v2 + 112));
      v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 480),
              (const std::vector<std::string> *)(v2 + 288),
              &this->shape_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 288));
      v11 = ((v2 + 288) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 1568); i != (char *)(v2 + 1504); std::string::~string(i) )
        i -= 32;
      v13 = (_DWORD *)(((v2 + 1504) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
          "init",
          324);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v14, (const char (*)[27])byte_1AA7C260);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 864),
          byte_1AA7BD20,
          (const std::allocator<char> *)(v2 + 128));
        v15 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 864), (std::string *)(v2 + 480)) != 0;
        std::string::~string((void *)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v15 )
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
            "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
            "init",
            329);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 928),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v16, (const char (*)[27])byte_1AA7C2A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v17 = ((v2 + 352) >> 3) + 2147450880;
          *(_WORD *)v17 = 0;
          *(_BYTE *)(v17 + 2) = 0;
          v18 = (_DWORD *)(((v2 + 1600) >> 3) + 2147450880);
          *v18 = 0;
          v18[1] = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1600),
            ";",
            (const std::allocator<char> *)(v2 + 144));
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 160);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1632),
            ",",
            (const std::allocator<char> *)(v2 + 160));
          __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1600);
          __l._M_len = 2LL;
          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 352),
            __l,
            (const std::vector<std::string>::allocator_type *)(v2 + 176));
          v19 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 480),
                  (const std::vector<std::string> *)(v2 + 352),
                  &this->color_list,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 352));
          v20 = ((v2 + 352) >> 3) + 2147450880;
          *(_WORD *)v20 = -1800;
          *(_BYTE *)(v20 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
          for ( j = (char *)(v2 + 1664); j != (char *)(v2 + 1600); std::string::~string(j) )
            j -= 32;
          v22 = (_DWORD *)(((v2 + 1600) >> 3) + 2147450880);
          *v22 = -117901064;
          v22[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 160);
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
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
              "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
              "init",
              334);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 992),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v23, (const char (*)[27])byte_1AA7C2A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 192);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1056),
              byte_1AA7BD60,
              (const std::allocator<char> *)(v2 + 192));
            v24 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1056),
                    (std::string *)(v2 + 480)) != 0;
            std::string::~string((void *)(v2 + 1056));
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 192);
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            if ( v24 )
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
                "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                "init",
                339);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1120),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v25, (const char (*)[27])byte_1AA7C2E0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              v26 = ((v2 + 416) >> 3) + 2147450880;
              *(_WORD *)v26 = 0;
              *(_BYTE *)(v26 + 2) = 0;
              v27 = (_DWORD *)(((v2 + 1696) >> 3) + 2147450880);
              *v27 = 0;
              v27[1] = 0;
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 208);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1696),
                ";",
                (const std::allocator<char> *)(v2 + 208));
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 224);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1728),
                ",",
                (const std::allocator<char> *)(v2 + 224));
              v41._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1696);
              v41._M_len = 2LL;
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 240));
              std::vector<std::string>::vector(
                (std::vector<std::string> *const)(v2 + 416),
                v41,
                (const std::vector<std::string>::allocator_type *)(v2 + 240));
              v28 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                      (const std::string *)(v2 + 480),
                      (const std::vector<std::string> *)(v2 + 416),
                      &this->action_list,
                      1) != 0;
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 416));
              v29 = ((v2 + 416) >> 3) + 2147450880;
              *(_WORD *)v29 = -1800;
              *(_BYTE *)(v29 + 2) = -8;
              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 240));
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
              for ( k = (char *)(v2 + 1760); k != (char *)(v2 + 1696); std::string::~string(k) )
                k -= 32;
              v31 = (_DWORD *)(((v2 + 1696) >> 3) + 2147450880);
              *v31 = -117901064;
              v31[1] = -117901064;
              std::allocator<char>::~allocator(v2 + 224);
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
              std::allocator<char>::~allocator(v2 + 208);
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
              if ( v28 )
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
                  "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                  "init",
                  344);
                v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1184),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v32, (const char (*)[27])byte_1AA7C2E0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 256);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1248),
                  &byte_1AA4D700,
                  (const std::allocator<char> *)(v2 + 256));
                v33 = common::tools::TxtFile::Row::assignToEnum<data::ActivityGachaRobot>(
                        row,
                        (const std::string *)(v2 + 1248),
                        &this->type) != 0;
                std::string::~string((void *)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 256);
                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                if ( v33 )
                {
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
                    "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                    "init",
                    349);
                  v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1312),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v34,
                    (const char (*)[27])byte_1AA4D740);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 272);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1376),
                    &byte_1AA7C320,
                    (const std::allocator<char> *)(v2 + 272));
                  v35 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1376),
                          &this->furniture_id) != 0;
                  std::string::~string((void *)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 272);
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                  if ( v35 )
                  {
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1440, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1440),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                      "init",
                      354);
                    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1440),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v36,
                      (const char (*)[39])byte_1AA7C360);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 480));
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862738) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450944 - (((_DWORD)v4 + 2147450952) & 0xFFFFFFF8) + 160) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1792LL, v42);
  }
  return v6;
};

// Line 362: range 0000000012CEDD14-0000000012CEF7BD
int32_t __cdecl data::ActivityGachaTargetExcelConfig::init(
        data::ActivityGachaTargetExcelConfig *const this,
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
  unsigned __int64 v10; // rax
  _DWORD *v11; // rax
  bool v12; // r15
  unsigned __int64 v13; // rax
  char *i; // r14
  _DWORD *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  bool v23; // r14
  common::milog::MiLogStream *v24; // rax
  bool t; // [rsp+0h] [rbp-650h]
  bool ta; // [rsp+0h] [rbp-650h]
  bool tb; // [rsp+0h] [rbp-650h]
  bool tc; // [rsp+0h] [rbp-650h]
  char v30[1584]; // [rsp+20h] [rbp-630h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1536LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "31 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 24 9 <unknown> 288 32 11 val_str:363 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <un"
                        "known> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unk"
                        "nown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <un"
                        "known> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaTargetExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
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
  v4[536862764] = -218959118;
  v4[536862767] = -202116109;
  std::string::basic_string(v2 + 288);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->id) != 0;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "init",
      366);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])byte_1AA2F280);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 480),
      &byte_1AA4D700,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToEnum<data::ActivityGachaTargetType>(
           row,
           (const std::string *)(v2 + 480),
           &this->type) != 0;
    std::string::~string((void *)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "init",
        371);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 544),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v7, (const char (*)[27])byte_1AA4D740);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 608),
        &byte_1AA3B300,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(
             row,
             (const std::string *)(v2 + 608),
             &this->target_id) != 0;
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
          "init",
          376);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 672),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v8, (const char (*)[29])byte_1AA3B340);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 736),
          &byte_1AA7C620,
          (const std::allocator<char> *)(v2 + 96));
        tc = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 736), (std::string *)(v2 + 288)) != 0;
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
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
            "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
            "init",
            381);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 800),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AA7C660);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v10 = ((v2 + 224) >> 3) + 2147450880;
          *(_WORD *)v10 = 0;
          *(_BYTE *)(v10 + 2) = 0;
          v11 = (_DWORD *)(((v2 + 1440) >> 3) + 2147450880);
          *v11 = 0;
          v11[1] = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1440),
            ";",
            (const std::allocator<char> *)(v2 + 112));
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1472),
            ",",
            (const std::allocator<char> *)(v2 + 128));
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 144));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 224),
            (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1440),
            (const std::vector<std::string>::allocator_type *)(v2 + 144));
          v12 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 288),
                  (const std::vector<std::string> *)(v2 + 224),
                  &this->group_id_list,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 224));
          v13 = ((v2 + 224) >> 3) + 2147450880;
          *(_WORD *)v13 = -1800;
          *(_BYTE *)(v13 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 144));
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          for ( i = (char *)(v2 + 1504); i != (char *)(v2 + 1440); std::string::~string(i) )
            i -= 32;
          v15 = (_DWORD *)(((v2 + 1440) >> 3) + 2147450880);
          *v15 = -117901064;
          v15[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( v12 )
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
              "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
              "init",
              386);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 864),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v16, (const char (*)[33])byte_1AA7C660);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 928),
              &byte_1AA7C6C0,
              (const std::allocator<char> *)(v2 + 160));
            v17 = common::tools::TxtFile::Row::assignToEnum<data::ActivityGachaRobotType>(
                    row,
                    (const std::string *)(v2 + 928),
                    &this->robot_type) != 0;
            std::string::~string((void *)(v2 + 928));
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( v17 )
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
                "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                "init",
                391);
              v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 992),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v18, (const char (*)[33])byte_1AA7C700);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 176);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1056),
                &byte_1AA7C760,
                (const std::allocator<char> *)(v2 + 176));
              v19 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1056),
                      &this->robot_num) != 0;
              std::string::~string((void *)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( v19 )
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
                  "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                  "init",
                  396);
                v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1120),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v20, (const char (*)[33])byte_1AA7C7A0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 192);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1184),
                  &byte_1AA477A0,
                  (const std::allocator<char> *)(v2 + 192));
                v21 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1184),
                        &this->weight) != 0;
                std::string::~string((void *)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 192);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                if ( v21 )
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
                    "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                    "init",
                    401);
                  v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1248),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v22,
                    (const char (*)[33])byte_1AA477E0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 208);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1312),
                    &byte_1AA7C800,
                    (const std::allocator<char> *)(v2 + 208));
                  v23 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1312),
                          &this->scale) != 0;
                  std::string::~string((void *)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 208);
                  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                  if ( v23 )
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
                      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                      "init",
                      406);
                    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1376),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v24,
                      (const char (*)[33])byte_1AA7C840);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 288));
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862732) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450920 - (((_DWORD)v4 + 2147450928) & 0xFFFFFFF8) + 152) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1536LL, v30);
  }
  return v6;
};

// Line 414: range 0000000012CEF7BE-0000000012CF2C01
int32_t __cdecl data::ActivityGachaStageExcelConfig::init(
        data::ActivityGachaStageExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rax
  _DWORD *v4; // r14
  bool v5; // bl
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // ebx
  bool v8; // bl
  common::milog::MiLogStream *v9; // rax
  bool v10; // bl
  common::milog::MiLogStream *v11; // rax
  bool v12; // bl
  common::milog::MiLogStream *v13; // rax
  bool v14; // bl
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  _DWORD *v17; // rax
  bool v18; // r13
  unsigned __int64 v19; // rax
  char *i; // rbx
  _DWORD *v21; // rax
  common::milog::MiLogStream *v22; // rax
  bool v23; // bl
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  _DWORD *v26; // rax
  bool v27; // r13
  unsigned __int64 v28; // rax
  char *j; // rbx
  _DWORD *v30; // rax
  common::milog::MiLogStream *v31; // rax
  bool v32; // bl
  common::milog::MiLogStream *v33; // rax
  unsigned __int64 v34; // rax
  _DWORD *v35; // rax
  bool v36; // r13
  unsigned __int64 v37; // rax
  char *k; // rbx
  _DWORD *v39; // rax
  common::milog::MiLogStream *v40; // rax
  bool v41; // bl
  common::milog::MiLogStream *v42; // rax
  unsigned __int64 v43; // rax
  _DWORD *v44; // rax
  bool v45; // r13
  unsigned __int64 v46; // rax
  char *m; // rbx
  _DWORD *v48; // rax
  common::milog::MiLogStream *v49; // rax
  bool v50; // bl
  common::milog::MiLogStream *v51; // rax
  bool v52; // bl
  common::milog::MiLogStream *v53; // rax
  bool v54; // bl
  common::milog::MiLogStream *v55; // rax
  bool v56; // bl
  common::milog::MiLogStream *v57; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-BE0h]
  std::initializer_list<std::string > v60; // [rsp+20h] [rbp-BD0h]
  std::initializer_list<std::string > v61; // [rsp+30h] [rbp-BC0h]
  std::initializer_list<std::string > v62; // [rsp+40h] [rbp-BB0h]
  char v63[2960]; // [rsp+60h] [rbp-B90h] BYREF

  v2 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2912LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "61 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 "
                        "<unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 24 9 <unknown> 480 24 9 <unknown> 544 24 9 <un"
                        "known> 608 24 9 <unknown> 672 32 11 val_str:415 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <"
                        "unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9"
                        " <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 "
                        "32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1"
                        "824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknow"
                        "n> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <un"
                        "known> 2464 32 9 <unknown> 2528 64 9 <unknown> 2624 64 9 <unknown> 2720 64 9 <unknown> 2816 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaStageExcelConfig::init;
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
  v4[536862733] = -234881024;
  v4[536862734] = -218959118;
  v4[536862735] = -234881024;
  v4[536862736] = -218959118;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862739] = -234881024;
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
  v4[536862796] = -218959118;
  v4[536862798] = -218959118;
  v4[536862801] = -218959118;
  v4[536862804] = -218959118;
  v4[536862807] = -218959118;
  v4[536862810] = -202116109;
  std::string::basic_string(v2 + 672);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 736),
    &byte_1AA3F000,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 736), &this->stage_id) != 0;
  std::string::~string((void *)(v2 + 736));
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "init",
      418);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 800),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AA3F040);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 864),
      &byte_1AA7CD40,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 864),
           &this->next_stage_id) != 0;
    std::string::~string((void *)(v2 + 864));
    *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 928, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 928),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "init",
        423);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 928),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AA7CD80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 992),
        &byte_1AA7CDE0,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 992), &this->is_tech) != 0;
      std::string::~string((void *)(v2 + 992));
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
          "init",
          428);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1056),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1AA7CE20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
        *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1120),
          &byte_1AA4D700,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToEnum<data::ActivityGachaTargetType>(
                row,
                (const std::string *)(v2 + 1120),
                &this->type) != 0;
        std::string::~string((void *)(v2 + 1120));
        *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
        {
          *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1184, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1184),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
            "init",
            433);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1184),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1AA4D740);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
          *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1248),
            &byte_1AA7CE80,
            (const std::allocator<char> *)(v2 + 96));
          v14 = common::tools::TxtFile::Row::assignToStr(
                  row,
                  (const std::string *)(v2 + 1248),
                  (std::string *)(v2 + 672)) != 0;
          std::string::~string((void *)(v2 + 1248));
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
          {
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
              "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
              "init",
              438);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1312),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v15, (const char (*)[39])byte_1AA7CEC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
            *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            v16 = ((v2 + 416) >> 3) + 2147450880;
            *(_WORD *)v16 = 0;
            *(_BYTE *)(v16 + 2) = 0;
            v17 = (_DWORD *)(((v2 + 2528) >> 3) + 2147450880);
            *v17 = 0;
            v17[1] = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2528),
              ";",
              (const std::allocator<char> *)(v2 + 112));
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2560),
              ",",
              (const std::allocator<char> *)(v2 + 128));
            __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2528);
            __l._M_len = 2LL;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 144));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 416),
              __l,
              (const std::vector<std::string>::allocator_type *)(v2 + 144));
            v18 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 672),
                    (const std::vector<std::string> *)(v2 + 416),
                    &this->group_id_list,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 416));
            v19 = ((v2 + 416) >> 3) + 2147450880;
            *(_WORD *)v19 = -1800;
            *(_BYTE *)(v19 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 144));
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            for ( i = (char *)(v2 + 2592); i != (char *)(v2 + 2528); std::string::~string(i) )
              i -= 32;
            v21 = (_DWORD *)(((v2 + 2528) >> 3) + 2147450880);
            *v21 = -117901064;
            v21[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( v18 )
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
                "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                "init",
                443);
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1376),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v22, (const char (*)[39])byte_1AA7CEC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
              *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 160);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1440),
                &byte_1AA7CF20,
                (const std::allocator<char> *)(v2 + 160));
              v23 = common::tools::TxtFile::Row::assignToStr(
                      row,
                      (const std::string *)(v2 + 1440),
                      (std::string *)(v2 + 672)) != 0;
              std::string::~string((void *)(v2 + 1440));
              *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 160);
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              if ( v23 )
              {
                *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1504, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1504),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                  "init",
                  448);
                v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1504),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v24, (const char (*)[39])byte_1AA7CF60);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                v7 = -1;
              }
              else
              {
                v25 = ((v2 + 480) >> 3) + 2147450880;
                *(_WORD *)v25 = 0;
                *(_BYTE *)(v25 + 2) = 0;
                v26 = (_DWORD *)(((v2 + 2624) >> 3) + 2147450880);
                *v26 = 0;
                v26[1] = 0;
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 176);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2624),
                  ";",
                  (const std::allocator<char> *)(v2 + 176));
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 192);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2656),
                  ",",
                  (const std::allocator<char> *)(v2 + 192));
                v60._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2624);
                v60._M_len = 2LL;
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 208));
                std::vector<std::string>::vector(
                  (std::vector<std::string> *const)(v2 + 480),
                  v60,
                  (const std::vector<std::string>::allocator_type *)(v2 + 208));
                v27 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                        (const std::string *)(v2 + 672),
                        (const std::vector<std::string> *)(v2 + 480),
                        &this->group_num_list,
                        1) != 0;
                std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 480));
                v28 = ((v2 + 480) >> 3) + 2147450880;
                *(_WORD *)v28 = -1800;
                *(_BYTE *)(v28 + 2) = -8;
                std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 208));
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                for ( j = (char *)(v2 + 2688); j != (char *)(v2 + 2624); std::string::~string(j) )
                  j -= 32;
                v30 = (_DWORD *)(((v2 + 2624) >> 3) + 2147450880);
                *v30 = -117901064;
                v30[1] = -117901064;
                std::allocator<char>::~allocator(v2 + 192);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                std::allocator<char>::~allocator(v2 + 176);
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                if ( v27 )
                {
                  *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1568, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1568),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                    "init",
                    453);
                  v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1568),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v31,
                    (const char (*)[39])byte_1AA7CF60);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                  *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 224);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1632),
                    &byte_1AA7CFC0,
                    (const std::allocator<char> *)(v2 + 224));
                  v32 = common::tools::TxtFile::Row::assignToStr(
                          row,
                          (const std::string *)(v2 + 1632),
                          (std::string *)(v2 + 672)) != 0;
                  std::string::~string((void *)(v2 + 1632));
                  *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 224);
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                  if ( v32 )
                  {
                    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1696, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1696),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                      "init",
                      458);
                    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1696),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      v33,
                      (const char (*)[32])byte_1AA7D000);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                    v7 = -1;
                  }
                  else
                  {
                    v34 = ((v2 + 544) >> 3) + 2147450880;
                    *(_WORD *)v34 = 0;
                    *(_BYTE *)(v34 + 2) = 0;
                    v35 = (_DWORD *)(((v2 + 2720) >> 3) + 2147450880);
                    *v35 = 0;
                    v35[1] = 0;
                    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 240);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2720),
                      ";",
                      (const std::allocator<char> *)(v2 + 240));
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 256);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2752),
                      ",",
                      (const std::allocator<char> *)(v2 + 256));
                    v61._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2720);
                    v61._M_len = 2LL;
                    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 272));
                    std::vector<std::string>::vector(
                      (std::vector<std::string> *const)(v2 + 544),
                      v61,
                      (const std::vector<std::string>::allocator_type *)(v2 + 272));
                    v36 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                            (const std::string *)(v2 + 672),
                            (const std::vector<std::string> *)(v2 + 544),
                            &this->stage_group_id_list,
                            1) != 0;
                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 544));
                    v37 = ((v2 + 544) >> 3) + 2147450880;
                    *(_WORD *)v37 = -1800;
                    *(_BYTE *)(v37 + 2) = -8;
                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 272));
                    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                    for ( k = (char *)(v2 + 2784); k != (char *)(v2 + 2720); std::string::~string(k) )
                      k -= 32;
                    v39 = (_DWORD *)(((v2 + 2720) >> 3) + 2147450880);
                    *v39 = -117901064;
                    v39[1] = -117901064;
                    std::allocator<char>::~allocator(v2 + 256);
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                    std::allocator<char>::~allocator(v2 + 240);
                    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                    if ( v36 )
                    {
                      *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1760) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1760, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1760),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                        "init",
                        463);
                      v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1760),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        v40,
                        (const char (*)[32])byte_1AA7D000);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                      *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 288);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1824),
                        &byte_1AA7D040,
                        (const std::allocator<char> *)(v2 + 288));
                      v41 = common::tools::TxtFile::Row::assignToStr(
                              row,
                              (const std::string *)(v2 + 1824),
                              (std::string *)(v2 + 672)) != 0;
                      std::string::~string((void *)(v2 + 1824));
                      *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 288);
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                      if ( v41 )
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
                          "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                          "init",
                          468);
                        v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1888),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          v42,
                          (const char (*)[45])byte_1AA7D080);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                        *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                        v7 = -1;
                      }
                      else
                      {
                        v43 = ((v2 + 608) >> 3) + 2147450880;
                        *(_WORD *)v43 = 0;
                        *(_BYTE *)(v43 + 2) = 0;
                        v44 = (_DWORD *)(((v2 + 2816) >> 3) + 2147450880);
                        *v44 = 0;
                        v44[1] = 0;
                        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 304);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2816),
                          ";",
                          (const std::allocator<char> *)(v2 + 304));
                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 320);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2848),
                          ",",
                          (const std::allocator<char> *)(v2 + 320));
                        v62._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2816);
                        v62._M_len = 2LL;
                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 336));
                        std::vector<std::string>::vector(
                          (std::vector<std::string> *const)(v2 + 608),
                          v62,
                          (const std::vector<std::string>::allocator_type *)(v2 + 336));
                        v45 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                (const std::string *)(v2 + 672),
                                (const std::vector<std::string> *)(v2 + 608),
                                &this->task_content_list,
                                1) != 0;
                        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 608));
                        v46 = ((v2 + 608) >> 3) + 2147450880;
                        *(_WORD *)v46 = -1800;
                        *(_BYTE *)(v46 + 2) = -8;
                        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 336));
                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                        for ( m = (char *)(v2 + 2880); m != (char *)(v2 + 2816); std::string::~string(m) )
                          m -= 32;
                        v48 = (_DWORD *)(((v2 + 2816) >> 3) + 2147450880);
                        *v48 = -117901064;
                        v48[1] = -117901064;
                        std::allocator<char>::~allocator(v2 + 320);
                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                        std::allocator<char>::~allocator(v2 + 304);
                        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                        if ( v45 )
                        {
                          *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1952) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1952, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1952),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                            "init",
                            473);
                          v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1952),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            v49,
                            (const char (*)[45])byte_1AA7D080);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
                          *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                          v7 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 352);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2016),
                            &byte_1AA7D0E0,
                            (const std::allocator<char> *)(v2 + 352));
                          v50 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 2016),
                                  &this->cond_id) != 0;
                          std::string::~string((void *)(v2 + 2016));
                          *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 352);
                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                          if ( v50 )
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
                              "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                              "init",
                              478);
                            v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2080),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                              v51,
                              (const char (*)[31])byte_1AA7D120);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                            *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                            v7 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 368);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2144),
                              &byte_1AA7D160,
                              (const std::allocator<char> *)(v2 + 368));
                            v52 = common::tools::TxtFile::Row::assignToNum<bool>(
                                    row,
                                    (const std::string *)(v2 + 2144),
                                    &this->is_need_finish) != 0;
                            std::string::~string((void *)(v2 + 2144));
                            *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 368);
                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                            if ( v52 )
                            {
                              *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2208) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2208, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2208),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                                "init",
                                483);
                              v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2208),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                v53,
                                (const char (*)[39])byte_1AA7D1A0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                              *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                              v7 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 384);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2272),
                                &byte_1AA7D200,
                                (const std::allocator<char> *)(v2 + 384));
                              v54 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                      row,
                                      (const std::string *)(v2 + 2272),
                                      &this->watcher_id) != 0;
                              std::string::~string((void *)(v2 + 2272));
                              *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 384);
                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                              if ( v54 )
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
                                  "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                                  "init",
                                  488);
                                v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2336),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                  v55,
                                  (const char (*)[34])byte_1AA7D240);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                                *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                                v7 = -1;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 400);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2400),
                                  &byte_1AA7D2A0,
                                  (const std::allocator<char> *)(v2 + 400));
                                v56 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                        row,
                                        (const std::string *)(v2 + 2400),
                                        &this->open_quest_id) != 0;
                                std::string::~string((void *)(v2 + 2400));
                                *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 400);
                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                if ( v56 )
                                {
                                  *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2464) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2464, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2464),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                                    "init",
                                    493);
                                  v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2464),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                    v57,
                                    (const char (*)[39])byte_1AA7D2E0);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                                  *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 672));
  if ( v63 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8164) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862744) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450968 - (((_DWORD)v4 + 2147450976) & 0xFFFFFFF8) + 276) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2912LL, v63);
  }
  return v7;
};

// Line 501: range 0000000012CF2C02-0000000012CF5417
int32_t __cdecl data::ActivityGachaBaseExcelConfig::init(
        data::ActivityGachaBaseExcelConfig *const this,
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
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  bool v21; // r15
  unsigned __int64 v22; // rax
  char *i; // r14
  _DWORD *v24; // rax
  common::milog::MiLogStream *v25; // rax
  bool t; // [rsp+0h] [rbp-910h]
  bool ta; // [rsp+0h] [rbp-910h]
  bool tb; // [rsp+0h] [rbp-910h]
  bool tc; // [rsp+0h] [rbp-910h]
  bool td; // [rsp+0h] [rbp-910h]
  bool te; // [rsp+0h] [rbp-910h]
  bool tf; // [rsp+0h] [rbp-910h]
  bool tg; // [rsp+0h] [rbp-910h]
  bool th; // [rsp+0h] [rbp-910h]
  bool ti; // [rsp+0h] [rbp-910h]
  bool tj; // [rsp+0h] [rbp-910h]
  bool tk; // [rsp+0h] [rbp-910h]
  bool tl; // [rsp+0h] [rbp-910h]
  char v40[2288]; // [rsp+20h] [rbp-8F0h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2240LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "46 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 24 9 <unknown> 352 32 11 val_str:502 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> "
                        "608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 9"
                        "28 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown>"
                        " 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unkn"
                        "own> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <"
                        "unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaBaseExcelConfig::init;
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
  v4[536862729] = -234881024;
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
  v4[536862789] = -202116109;
  std::string::basic_string(v2 + 352);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 416),
    &byte_1AA36B20,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 416), &this->activity_id) != 0;
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "init",
      505);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 480),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AA36B60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 544),
      &byte_1AA7D6C0,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 544),
           &this->material_id) != 0;
    std::string::~string((void *)(v2 + 544));
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "init",
        510);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 608),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v7, (const char (*)[32])byte_1AA7D700);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 672),
        &byte_1AA7D740,
        (const std::allocator<char> *)(v2 + 64));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(
             row,
             (const std::string *)(v2 + 672),
             &this->elem_time) != 0;
      std::string::~string((void *)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
          "init",
          515);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 736),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v8, (const char (*)[45])byte_1AA7D780);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 800),
          &byte_1AA7D7E0,
          (const std::allocator<char> *)(v2 + 80));
        tc = common::tools::TxtFile::Row::assignToNum<unsigned int>(
               row,
               (const std::string *)(v2 + 800),
               &this->task_content_id) != 0;
        std::string::~string((void *)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
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
            "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
            "init",
            520);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 864),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v9, (const char (*)[57])byte_1AA7D840);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 928),
            &byte_1AA7D8A0,
            (const std::allocator<char> *)(v2 + 96));
          td = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                 row,
                 (const std::string *)(v2 + 928),
                 &this->unlock_stage_id) != 0;
          std::string::~string((void *)(v2 + 928));
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( td )
          {
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 992, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 992),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
              "init",
              525);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 992),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v10, (const char (*)[39])byte_1AA7D8E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1056),
              &byte_1AA7D940,
              (const std::allocator<char> *)(v2 + 112));
            te = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                   row,
                   (const std::string *)(v2 + 1056),
                   &this->max_convert) != 0;
            std::string::~string((void *)(v2 + 1056));
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( te )
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
                "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                "init",
                530);
              v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1120),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v11, (const char (*)[39])byte_1AA7D980);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1184),
                &byte_1AA7D9E0,
                (const std::allocator<char> *)(v2 + 128));
              tf = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                     row,
                     (const std::string *)(v2 + 1184),
                     &this->robot_limit) != 0;
              std::string::~string((void *)(v2 + 1184));
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( tf )
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
                  "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                  "init",
                  535);
                v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1248),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v12, (const char (*)[39])byte_1AA7DA20);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1312),
                  &byte_1AA7DA80,
                  (const std::allocator<char> *)(v2 + 144));
                tg = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                       row,
                       (const std::string *)(v2 + 1312),
                       &this->robot_guar_num) != 0;
                std::string::~string((void *)(v2 + 1312));
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( tg )
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
                    "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                    "init",
                    540);
                  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1376),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v13,
                    (const char (*)[39])byte_1AA7DAC0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1440),
                    &byte_1AA7DB20,
                    (const std::allocator<char> *)(v2 + 160));
                  th = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                         row,
                         (const std::string *)(v2 + 1440),
                         &this->robot_hidden_first_guar_num) != 0;
                  std::string::~string((void *)(v2 + 1440));
                  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( th )
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
                      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                      "init",
                      545);
                    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1504),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      v14,
                      (const char (*)[48])byte_1AA7DB60);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1568),
                      &byte_1AA7DBC0,
                      (const std::allocator<char> *)(v2 + 176));
                    ti = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                           row,
                           (const std::string *)(v2 + 1568),
                           &this->robot_hidden_guar_num) != 0;
                    std::string::~string((void *)(v2 + 1568));
                    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( ti )
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
                        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                        "init",
                        550);
                      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1632),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        v15,
                        (const char (*)[42])byte_1AA7DC00);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1696),
                        &byte_1AA7DC60,
                        (const std::allocator<char> *)(v2 + 192));
                      tj = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                             row,
                             (const std::string *)(v2 + 1696),
                             &this->robot_guar_rate) != 0;
                      std::string::~string((void *)(v2 + 1696));
                      *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( tj )
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
                          "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                          "init",
                          555);
                        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1760),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                          v16,
                          (const char (*)[51])byte_1AA7DCA0);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1824),
                          &byte_1AA7DD00,
                          (const std::allocator<char> *)(v2 + 208));
                        tk = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                               row,
                               (const std::string *)(v2 + 1824),
                               &this->robot_hidden_guar_rate) != 0;
                        std::string::~string((void *)(v2 + 1824));
                        *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( tk )
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
                            "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                            "init",
                            560);
                          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1888),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            v17,
                            (const char (*)[45])byte_1AA7DD40);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                          *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1952),
                            &byte_1AA7DDA0,
                            (const std::allocator<char> *)(v2 + 224));
                          tl = common::tools::TxtFile::Row::assignToStr(
                                 row,
                                 (const std::string *)(v2 + 1952),
                                 (std::string *)(v2 + 352)) != 0;
                          std::string::~string((void *)(v2 + 1952));
                          *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( tl )
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
                              "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                              "init",
                              565);
                            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2016),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                              v18,
                              (const char (*)[34])byte_1AA7DDE0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                          }
                          else
                          {
                            v19 = ((v2 + 288) >> 3) + 2147450880;
                            *(_WORD *)v19 = 0;
                            *(_BYTE *)(v19 + 2) = 0;
                            v20 = (_DWORD *)(((v2 + 2144) >> 3) + 2147450880);
                            *v20 = 0;
                            v20[1] = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2144),
                              ";",
                              (const std::allocator<char> *)(v2 + 240));
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2176),
                              ",",
                              (const std::allocator<char> *)(v2 + 256));
                            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 272));
                            std::vector<std::string>::vector(
                              (std::vector<std::string> *const)(v2 + 288),
                              (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 2144),
                              (const std::vector<std::string>::allocator_type *)(v2 + 272));
                            v21 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                    (const std::string *)(v2 + 352),
                                    (const std::vector<std::string> *)(v2 + 288),
                                    &this->watcher_list,
                                    1) != 0;
                            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 288));
                            v22 = ((v2 + 288) >> 3) + 2147450880;
                            *(_WORD *)v22 = -1800;
                            *(_BYTE *)(v22 + 2) = -8;
                            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 272));
                            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                            for ( i = (char *)(v2 + 2208); i != (char *)(v2 + 2144); std::string::~string(i) )
                              i -= 32;
                            v24 = (_DWORD *)(((v2 + 2144) >> 3) + 2147450880);
                            *v24 = -117901064;
                            v24[1] = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( v21 )
                            {
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2080) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2080, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2080),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                                "init",
                                570);
                              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2080),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                v25,
                                (const char (*)[34])byte_1AA7DDE0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 352));
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8110) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862734) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450928 - (((_DWORD)v4 + 2147450936) & 0xFFFFFFF8) + 232) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2240LL, v40);
  }
  return v6;
};

// Line 579: range 0000000012CF5418-0000000012CF6447
int32_t __cdecl data::ActivityGachaExcelConfigMgrBase::loadActivityGachaRobotExcelConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
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
  data::ActivityGachaRobotExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityGachaRobotExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:594 64 4 9 <unknown> 80 32 9 paths:580 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 96 8 d"
                        "ata:597 656 376 24 debug_message_stream:605 1104 32880 12 txt_file:588";
  *(_QWORD *)(v3 + 16) = data::ActivityGachaExcelConfigMgrBase::loadActivityGachaRobotExcelConfig;
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
    "/txt/ActivityGachaRobotData.txt",
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "loadActivityGachaRobotExcelConfig",
        591);
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
        data::ActivityGachaRobotExcelConfig::ActivityGachaRobotExcelConfig((data::ActivityGachaRobotExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::ActivityGachaRobotExcelConfig::init(
                 (data::ActivityGachaRobotExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AA7E000);
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
              "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
              "loadActivityGachaRobotExcelConfig",
              607);
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
            v24 = std::move<data::ActivityGachaRobotExcelConfig &>((data::ActivityGachaRobotExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::emplace<unsigned int &,data::ActivityGachaRobotExcelConfig>(
                    &this->activity_gacha_robot_excel_config_map,
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
                "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                "loadActivityGachaRobotExcelConfig",
                612);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v28,
                      (const char (*)[14])byte_1AA7E040);
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
            "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
            "loadActivityGachaRobotExcelConfig",
            600);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityGachaRobotExcelConfig::~ActivityGachaRobotExcelConfig((data::ActivityGachaRobotExcelConfig *const)(v3 + 528));
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

// Line 621: range 0000000012CF6448-0000000012CF745D
int32_t __cdecl data::ActivityGachaExcelConfigMgrBase::loadActivityGachaTargetExcelConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
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
  data::ActivityGachaTargetExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityGachaTargetExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:636 64 4 9 <unknown> 80 32 9 paths:622 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 64 8 d"
                        "ata:639 624 376 24 debug_message_stream:647 1072 32880 12 txt_file:630";
  *(_QWORD *)(v3 + 16) = data::ActivityGachaExcelConfigMgrBase::loadActivityGachaTargetExcelConfig;
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
    "/txt/ActivityGachaTargetData.txt",
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "loadActivityGachaTargetExcelConfig",
        633);
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
        data::ActivityGachaTargetExcelConfig::ActivityGachaTargetExcelConfig((data::ActivityGachaTargetExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::ActivityGachaTargetExcelConfig::init(
                 (data::ActivityGachaTargetExcelConfig *const)(v3 + 528),
                 row_ptr) )
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
              "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
              "loadActivityGachaTargetExcelConfig",
              649);
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
            v24 = std::move<data::ActivityGachaTargetExcelConfig &>((data::ActivityGachaTargetExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::emplace<unsigned int &,data::ActivityGachaTargetExcelConfig>(
                    &this->activity_gacha_target_excel_config_map,
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
                "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                "loadActivityGachaTargetExcelConfig",
                654);
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
            "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
            "loadActivityGachaTargetExcelConfig",
            642);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityGachaTargetExcelConfig::~ActivityGachaTargetExcelConfig((data::ActivityGachaTargetExcelConfig *const)(v3 + 528));
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

// Line 663: range 0000000012CF745E-0000000012CF847E
int32_t __cdecl data::ActivityGachaExcelConfigMgrBase::loadActivityGachaStageExcelConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
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
  data::ActivityGachaStageExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityGachaStageExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8678h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8658h]
  char v37[34384]; // [rsp+50h] [rbp-8650h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34336LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:678 80 4 9 <unknown> 96 32 9 paths:664 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 136 8 "
                        "data:681 752 376 24 debug_message_stream:689 1200 32880 12 txt_file:672";
  *(_QWORD *)(v3 + 16) = data::ActivityGachaExcelConfigMgrBase::loadActivityGachaStageExcelConfig;
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
  v5[536862741] = -218959360;
  v5[536862742] = -218959118;
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
    (std::string *const)(v3 + 96),
    "/txt/ActivityGachaStageData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1200, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1200), v7) )
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "loadActivityGachaStageExcelConfig",
        675);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1200));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1200), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_DWORD *)(v13 + 12) = 0;
        *(_BYTE *)(v13 + 16) = 0;
        data::ActivityGachaStageExcelConfig::ActivityGachaStageExcelConfig((data::ActivityGachaStageExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::ActivityGachaStageExcelConfig::init(
                 (data::ActivityGachaStageExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 752, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 752);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 752, &unk_1AA47F60);
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
              "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
              "loadActivityGachaStageExcelConfig",
              691);
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
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 752);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 752);
            __asan_poison_stack_memory(v3 + 752, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::ActivityGachaStageExcelConfig &>((data::ActivityGachaStageExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::emplace<unsigned int &,data::ActivityGachaStageExcelConfig>(
                    &this->activity_gacha_stage_excel_config_map,
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
                "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                "loadActivityGachaStageExcelConfig",
                696);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v28,
                      (const char (*)[14])byte_1AA47FA0);
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
            "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
            "loadActivityGachaStageExcelConfig",
            684);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityGachaStageExcelConfig::~ActivityGachaStageExcelConfig((data::ActivityGachaStageExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_DWORD *)(v30 + 12) = -117901064;
        *(_BYTE *)(v30 + 16) = -8;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    __asan_poison_stack_memory(v3 + 1200, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4276) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34336LL, v37);
  }
  return v2;
};

// Line 705: range 0000000012CF8480-0000000012CF9473
int32_t __cdecl data::ActivityGachaExcelConfigMgrBase::loadActivityGachaBaseExcelConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
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
  data::ActivityGachaBaseExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityGachaBaseExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:720 80 4 9 <unknown> 96 32 9 paths:706 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 80 8 d"
                        "ata:723 656 376 24 debug_message_stream:731 1104 32880 12 txt_file:714";
  *(_QWORD *)(v3 + 16) = data::ActivityGachaExcelConfigMgrBase::loadActivityGachaBaseExcelConfig;
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
    "/txt/ActivityGachaBaseData.txt",
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
        "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
        "loadActivityGachaBaseExcelConfig",
        717);
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
        data::ActivityGachaBaseExcelConfig::ActivityGachaBaseExcelConfig((data::ActivityGachaBaseExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::ActivityGachaBaseExcelConfig::init((data::ActivityGachaBaseExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AA36300);
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
              "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
              "loadActivityGachaBaseExcelConfig",
              733);
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
            v24 = std::move<data::ActivityGachaBaseExcelConfig &>((data::ActivityGachaBaseExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::emplace<unsigned int &,data::ActivityGachaBaseExcelConfig>(
                    &this->activity_gacha_base_excel_config_map,
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
                "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
                "loadActivityGachaBaseExcelConfig",
                738);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v28,
                      (const char (*)[17])byte_1AA36340);
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
            "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
            "loadActivityGachaBaseExcelConfig",
            726);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityGachaBaseExcelConfig::~ActivityGachaBaseExcelConfig((data::ActivityGachaBaseExcelConfig *const)(v3 + 544));
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

// Line 747: range 0000000012CF9474-0000000012CF9A1E
int32_t __cdecl data::ActivityGachaExcelConfigMgrBase::loadConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::ActivityGachaExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( data::ActivityGachaExcelConfigMgrBase::loadActivityGachaRobotExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "loadConfig",
      750);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"loadActivityGachaRobotExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::ActivityGachaExcelConfigMgrBase::loadActivityGachaTargetExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "loadConfig",
      755);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v7,
      (const char (*)[42])"loadActivityGachaTargetExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::ActivityGachaExcelConfigMgrBase::loadActivityGachaStageExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "loadConfig",
      760);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v8,
      (const char (*)[41])"loadActivityGachaStageExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::ActivityGachaExcelConfigMgrBase::loadActivityGachaBaseExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityGachaExcelConfig.gen.cpp",
      "loadConfig",
      765);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v9,
      (const char (*)[40])"loadActivityGachaBaseExcelConfig failed");
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

// Line 772: range 0000000012CF9A20-0000000012CF9A32
int32_t __cdecl data::ActivityGachaExcelConfigMgrBase::rewriteConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 777: range 0000000012CF9A34-0000000012CF9A46
int32_t __cdecl data::ActivityGachaExcelConfigMgrBase::finalConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 782: range 0000000012CF9A48-0000000012CF9C03
data::ActivityGachaRobotExcelConfig *__fastcall data::ActivityGachaExcelConfigMgrBase::findActivityGachaRobotExcelConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
        __int64 robot_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityGachaRobotExcelConfigMap *p_activity_gacha_robot_excel_config_map; // rdx
  data::ActivityGachaRobotExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityGachaRobotExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 robot_id:781 64 8 8 iter:783 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaExcelConfigMgrBase::findActivityGachaRobotExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = robot_id;
  p_activity_gacha_robot_excel_config_map = &this->activity_gacha_robot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, robot_id);
  *(std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::find(
                                                                                                   p_activity_gacha_robot_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_gacha_robot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 795: range 0000000012CF9C04-0000000012CF9DBF
const data::ActivityGachaRobotExcelConfig *__fastcall data::ActivityGachaExcelConfigMgrBase::findActivityGachaRobotExcelConfig(
        const data::ActivityGachaExcelConfigMgrBase *const this,
        __int64 robot_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityGachaRobotExcelConfigMap *p_activity_gacha_robot_excel_config_map; // rdx
  data::ActivityGachaRobotExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityGachaRobotExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 robot_id:794 64 8 8 iter:796 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaExcelConfigMgrBase::findActivityGachaRobotExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = robot_id;
  p_activity_gacha_robot_excel_config_map = &this->activity_gacha_robot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, robot_id);
  *(std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::find(p_activity_gacha_robot_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_gacha_robot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 808: range 0000000012CF9DC0-0000000012CF9F7B
data::ActivityGachaTargetExcelConfig *__fastcall data::ActivityGachaExcelConfigMgrBase::findActivityGachaTargetExcelConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityGachaTargetExcelConfigMap *p_activity_gacha_target_excel_config_map; // rdx
  data::ActivityGachaTargetExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityGachaTargetExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:807 64 8 8 iter:809 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaExcelConfigMgrBase::findActivityGachaTargetExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_gacha_target_excel_config_map = &this->activity_gacha_target_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::find(
                                                                                                    p_activity_gacha_target_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_gacha_target_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 821: range 0000000012CF9F7C-0000000012CFA137
const data::ActivityGachaTargetExcelConfig *__fastcall data::ActivityGachaExcelConfigMgrBase::findActivityGachaTargetExcelConfig(
        const data::ActivityGachaExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityGachaTargetExcelConfigMap *p_activity_gacha_target_excel_config_map; // rdx
  data::ActivityGachaTargetExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityGachaTargetExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:820 64 8 8 iter:822 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaExcelConfigMgrBase::findActivityGachaTargetExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_gacha_target_excel_config_map = &this->activity_gacha_target_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::find(p_activity_gacha_target_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_gacha_target_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 834: range 0000000012CFA138-0000000012CFA2F3
data::ActivityGachaStageExcelConfig *__fastcall data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityGachaStageExcelConfigMap *p_activity_gacha_stage_excel_config_map; // rdx
  data::ActivityGachaStageExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityGachaStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:833 64 8 8 iter:835 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_activity_gacha_stage_excel_config_map = &this->activity_gacha_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::find(
                                                                                                   p_activity_gacha_stage_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_gacha_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 847: range 0000000012CFA2F4-0000000012CFA4AF
const data::ActivityGachaStageExcelConfig *__fastcall data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(
        const data::ActivityGachaExcelConfigMgrBase *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityGachaStageExcelConfigMap *p_activity_gacha_stage_excel_config_map; // rdx
  data::ActivityGachaStageExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityGachaStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:846 64 8 8 iter:848 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_activity_gacha_stage_excel_config_map = &this->activity_gacha_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::find(p_activity_gacha_stage_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_gacha_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 860: range 0000000012CFA4B0-0000000012CFA671
data::ActivityGachaBaseExcelConfig *__fastcall data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig(
        data::ActivityGachaExcelConfigMgrBase *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityGachaBaseExcelConfigMap *p_activity_gacha_base_excel_config_map; // rdx
  data::ActivityGachaBaseExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityGachaBaseExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:859 64 8 8 iter:861 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_gacha_base_excel_config_map = &this->activity_gacha_base_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::find(
                                                                                                  p_activity_gacha_base_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_gacha_base_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 873: range 0000000012CFA672-0000000012CFA833
const data::ActivityGachaBaseExcelConfig *__fastcall data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig(
        const data::ActivityGachaExcelConfigMgrBase *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityGachaBaseExcelConfigMap *p_activity_gacha_base_excel_config_map; // rdx
  data::ActivityGachaBaseExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityGachaBaseExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:872 64 8 8 iter:874 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_gacha_base_excel_config_map = &this->activity_gacha_base_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::find(p_activity_gacha_base_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_gacha_base_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false,false> *const)(v2 + 64))->second;
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

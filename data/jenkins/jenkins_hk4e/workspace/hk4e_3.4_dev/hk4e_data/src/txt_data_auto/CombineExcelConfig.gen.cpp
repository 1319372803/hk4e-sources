// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/CombineExcelConfig.gen.cpp

// Line 12: range 0000000013994A5F-0000000013994DD2
const char *__fastcall data::enumValToStr(data::CombineUnlockMethod e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getCombineUnlockMethodEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::CombineUnlockMethod,std::pair<std::string,std::string>>::find(map, (const std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::CombineUnlockMethod,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
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
    result = "INVALID_CombineUnlockMethod";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::CombineUnlockMethod const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 0000000013994DD3-000000001399538B
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::CombineUnlockMethod>,false,true>::pointer v10; // rax
  data::CombineUnlockMethod second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::CombineUnlockMethod> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getCombineUnlockMethodNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::CombineUnlockMethod>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::CombineUnlockMethod>::find(
                                                                                                m,
                                                                                                (const std::unordered_map<std::string,data::CombineUnlockMethod>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::CombineUnlockMethod>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::CombineUnlockMethod>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::CombineUnlockMethod>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CombineUnlockMethod>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CombineUnlockMethod>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::CombineUnlockMethod>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::CombineUnlockMethod>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
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

// Line 45: range 000000001399538C-0000000013995E8A
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::CombineUnlockMethod> *i; // r14
  _DWORD *v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::CombineUnlockMethod>,false,true>::pointer v12; // rax
  data::CombineUnlockMethod second; // ecx
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
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 8 5 it:60 192 8 9 <unknown> 224 8 4 s:44 256 3"
                        "2 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 160 9 <unknown>";
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::CombineUnlockMethod &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::CombineUnlockMethod &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::CombineUnlockMethod>::pair<char const(&)[13],data::CombineUnlockMethod,true>(
        (std::pair<const std::string,data::CombineUnlockMethod> *const)(v2 + 448),
        (const char (*)[13])byte_1AC41FA0,
        (data::CombineUnlockMethod *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AC41FA0);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::CombineUnlockMethod>::pair<char const(&)[13],data::CombineUnlockMethod,true>(
        (std::pair<const std::string,data::CombineUnlockMethod> *const)(v2 + 488),
        (const char (*)[13])byte_1AC41FE0,
        (data::CombineUnlockMethod *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC41FE0);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::CombineUnlockMethod>::pair<char const(&)[43],data::CombineUnlockMethod,true>(
        (std::pair<const std::string,data::CombineUnlockMethod> *const)(v2 + 528),
        (const char (*)[43])byte_1AC42020,
        (data::CombineUnlockMethod *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC42020);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::CombineUnlockMethod>::pair<char const(&)[19],data::CombineUnlockMethod,true>(
        (std::pair<const std::string,data::CombineUnlockMethod> *const)(v2 + 568),
        (const char (*)[19])byte_1AC42080,
        (data::CombineUnlockMethod *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::CombineUnlockMethod>>::allocator((std::allocator<std::pair<const std::string,data::CombineUnlockMethod> > *const)(v2 + 64));
      std::unordered_map<std::string,data::CombineUnlockMethod>::unordered_map(
        &data::enumStrToVal(char const*,data::CombineUnlockMethod &)::m,
        (std::initializer_list<std::pair<const std::string,data::CombineUnlockMethod> >)__PAIR128__(4LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::CombineUnlockMethod>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::CombineUnlockMethod>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::CombineUnlockMethod>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::CombineUnlockMethod &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::CombineUnlockMethod>::~unordered_map,
        &data::enumStrToVal(char const*,data::CombineUnlockMethod &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::CombineUnlockMethod>>::~allocator((std::allocator<std::pair<const std::string,data::CombineUnlockMethod> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::CombineUnlockMethod> *)(v2 + 608);
            i != (std::pair<const std::string,data::CombineUnlockMethod> *)(v2 + 448);
            std::pair<std::string const,data::CombineUnlockMethod>::~pair(i) )
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
    *(std::unordered_map<std::string,data::CombineUnlockMethod>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::CombineUnlockMethod>::find(
                                                                                           &data::enumStrToVal(char const*,data::CombineUnlockMethod &)::m,
                                                                                           (const std::unordered_map<std::string,data::CombineUnlockMethod>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::CombineUnlockMethod>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::CombineUnlockMethod>::end(&data::enumStrToVal(char const*,data::CombineUnlockMethod &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::CombineUnlockMethod>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CombineUnlockMethod>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CombineUnlockMethod>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
        "enumStrToVal",
        63);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::CombineUnlockMethod>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::CombineUnlockMethod>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
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

// Line 72: range 0000000013995E8B-0000000013995EA1
const char *__cdecl data::getDescription(data::CombineUnlockMethod e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 77: range 0000000013995EA2-0000000013996057
bool __cdecl data::isValidCombineUnlockMethod(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:78 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidCombineUnlockMethod;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getCombineUnlockMethodEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::CombineUnlockMethod,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getCombineUnlockMethodEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::CombineUnlockMethod,std::pair<std::string,std::string>>::find(v6, (const std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 83: range 0000000013996058-00000000139961B9
bool __cdecl data::isValidCombineUnlockMethodName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::CombineUnlockMethod> *v5; // rcx
  const std::unordered_map<std::string,data::CombineUnlockMethod> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidCombineUnlockMethodName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getCombineUnlockMethodNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::CombineUnlockMethod>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::CombineUnlockMethod>::end(v5);
  v6 = data::getCombineUnlockMethodNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::CombineUnlockMethod>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::CombineUnlockMethod>::find(
                                                                                              v6,
                                                                                              name);
  result = std::__detail::operator!=<std::pair<std::string const,data::CombineUnlockMethod>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CombineUnlockMethod>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CombineUnlockMethod>,true> *)(v2 + 64));
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

// Line 88: range 00000000139961BA-00000000139967D4
const std::unordered_map<std::string,data::CombineUnlockMethod> *__cdecl data::getCombineUnlockMethodNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::CombineUnlockMethod> *i; // r14
  const std::unordered_map<std::string,data::CombineUnlockMethod> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getCombineUnlockMethodNameMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getCombineUnlockMethodNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getCombineUnlockMethodNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::CombineUnlockMethod>::pair<char const(&)[20],data::CombineUnlockMethod,true>(
      (std::pair<const std::string,data::CombineUnlockMethod> *const)(v1 + 176),
      (const char (*)[20])"COMBINE_UNLOCK_NONE",
      (data::CombineUnlockMethod *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "COMBINE_UNLOCK_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::CombineUnlockMethod>::pair<char const(&)[21],data::CombineUnlockMethod,true>(
      (std::pair<const std::string,data::CombineUnlockMethod> *const)(v1 + 216),
      (const char (*)[21])"COMBINE_UNLOCK_QUEST",
      (data::CombineUnlockMethod *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "COMBINE_UNLOCK_QUEST");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::CombineUnlockMethod>::pair<char const(&)[23],data::CombineUnlockMethod,true>(
      (std::pair<const std::string,data::CombineUnlockMethod> *const)(v1 + 256),
      (const char (*)[23])"COMBINE_UNLOCK_FORMULA",
      (data::CombineUnlockMethod *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "COMBINE_UNLOCK_FORMULA");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::CombineUnlockMethod>::pair<char const(&)[30],data::CombineUnlockMethod,true>(
      (std::pair<const std::string,data::CombineUnlockMethod> *const)(v1 + 296),
      (const char (*)[30])"COMBINE_UNLOCK_SEA_LAMP_QUEST",
      (data::CombineUnlockMethod *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "COMBINE_UNLOCK_SEA_LAMP_QUEST");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::CombineUnlockMethod>::pair<char const(&)[34],data::CombineUnlockMethod,true>(
      (std::pair<const std::string,data::CombineUnlockMethod> *const)(v1 + 336),
      (const char (*)[34])"COMBINE_UNLOCK_ACTIVITY_COND_MEET",
      (data::CombineUnlockMethod *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::CombineUnlockMethod>>::allocator((std::allocator<std::pair<const std::string,data::CombineUnlockMethod> > *const)(v1 + 80));
    std::unordered_map<std::string,data::CombineUnlockMethod>::unordered_map(
      &data::getCombineUnlockMethodNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::CombineUnlockMethod> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::CombineUnlockMethod>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::CombineUnlockMethod>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::CombineUnlockMethod>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getCombineUnlockMethodNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::CombineUnlockMethod>::~unordered_map,
      &data::getCombineUnlockMethodNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::CombineUnlockMethod>>::~allocator((std::allocator<std::pair<const std::string,data::CombineUnlockMethod> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::CombineUnlockMethod> *)(v1 + 376);
          i != (std::pair<const std::string,data::CombineUnlockMethod> *)(v1 + 176);
          std::pair<std::string const,data::CombineUnlockMethod>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getCombineUnlockMethodNameMap[abi:cxx11](void)::m;
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

// Line 101: range 00000000139967D5-000000001399709A
const std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >> *__cdecl data::getCombineUnlockMethodEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getCombineUnlockMethodEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getCombineUnlockMethodEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getCombineUnlockMethodEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[20])"COMBINE_UNLOCK_NONE");
    std::pair<data::CombineUnlockMethod const,std::pair<std::string,std::string>>::pair<data::CombineUnlockMethod,true>(
      (std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::CombineUnlockMethod *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[13])byte_1AC41FA0,
      (const char (*)[21])"COMBINE_UNLOCK_QUEST");
    std::pair<data::CombineUnlockMethod const,std::pair<std::string,std::string>>::pair<data::CombineUnlockMethod,true>(
      (std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::CombineUnlockMethod *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[13])byte_1AC41FE0,
      (const char (*)[23])"COMBINE_UNLOCK_FORMULA");
    std::pair<data::CombineUnlockMethod const,std::pair<std::string,std::string>>::pair<data::CombineUnlockMethod,true>(
      (std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::CombineUnlockMethod *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[43],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[43])byte_1AC42020,
      (const char (*)[30])"COMBINE_UNLOCK_SEA_LAMP_QUEST");
    std::pair<data::CombineUnlockMethod const,std::pair<std::string,std::string>>::pair<data::CombineUnlockMethod,true>(
      (std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::CombineUnlockMethod *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[19])byte_1AC42080,
      (const char (*)[34])"COMBINE_UNLOCK_ACTIVITY_COND_MEET");
    std::pair<data::CombineUnlockMethod const,std::pair<std::string,std::string>>::pair<data::CombineUnlockMethod,true>(
      (std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::CombineUnlockMethod *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::CombineUnlockMethod const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::CombineUnlockMethod,std::pair<std::string,std::string>>::map(
      &data::getCombineUnlockMethodEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::CombineUnlockMethod> *)(v1 + 32),
      (const std::map<data::CombineUnlockMethod,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getCombineUnlockMethodEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::CombineUnlockMethod,std::pair<std::string,std::string>>::~map,
      &data::getCombineUnlockMethodEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::CombineUnlockMethod const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::CombineUnlockMethod,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::CombineUnlockMethod const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getCombineUnlockMethodEnumMap[abi:cxx11](void)::m;
};

// Line 114: range 000000001399709B-000000001399740E
const char *__fastcall data::enumValToStr(data::RecipeType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::RecipeType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::RecipeType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:113 64 8 8 iter:116 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getRecipeTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::RecipeType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RecipeType,std::pair<std::string,std::string>>::find(
                                                                                                   map,
                                                                                                   (const std::map<data::RecipeType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RecipeType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RecipeType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RecipeType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RecipeType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
      "enumValToStr",
      119);
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
    result = "INVALID_RecipeType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::RecipeType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RecipeType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 126: range 000000001399740F-00000000139979C7
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::RecipeType>,false,true>::pointer v10; // rax
  data::RecipeType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::RecipeType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:135 96 8 9 <unknown> 128 8 5 s:125 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getRecipeTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RecipeType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RecipeType>::find(
                                                                                       m,
                                                                                       (const std::unordered_map<std::string,data::RecipeType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RecipeType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::RecipeType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RecipeType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RecipeType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RecipeType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
        "enumNameToVal",
        138);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::RecipeType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::RecipeType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
      "enumNameToVal",
      129);
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

// Line 147: range 00000000139979C8-0000000013998423
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::RecipeType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::RecipeType>,false,true>::pointer v12; // rax
  data::RecipeType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:161 192 8 9 <unknown> 224 8 5 s:146 256 32 9 <unknown> 3"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::RecipeType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::RecipeType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::RecipeType>::pair<char const(&)[7],data::RecipeType,true>(
        (std::pair<const std::string,data::RecipeType> *const)(v2 + 448),
        (const char (*)[7])byte_1AC42600,
        (data::RecipeType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC42600);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::RecipeType>::pair<char const(&)[7],data::RecipeType,true>(
        (std::pair<const std::string,data::RecipeType> *const)(v2 + 488),
        (const char (*)[7])byte_1AC42640,
        (data::RecipeType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC42640);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::RecipeType>::pair<char const(&)[13],data::RecipeType,true>(
        (std::pair<const std::string,data::RecipeType> *const)(v2 + 528),
        (const char (*)[13])byte_1AC42680,
        (data::RecipeType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::RecipeType>>::allocator((std::allocator<std::pair<const std::string,data::RecipeType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::RecipeType>::unordered_map(
        &data::enumStrToVal(char const*,data::RecipeType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RecipeType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::RecipeType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::RecipeType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::RecipeType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::RecipeType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::RecipeType>::~unordered_map,
        &data::enumStrToVal(char const*,data::RecipeType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RecipeType>>::~allocator((std::allocator<std::pair<const std::string,data::RecipeType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RecipeType> *)(v2 + 568);
            i != (std::pair<const std::string,data::RecipeType> *)(v2 + 448);
            std::pair<std::string const,data::RecipeType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::RecipeType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::RecipeType>::find(
                                                                                  &data::enumStrToVal(char const*,data::RecipeType &)::m,
                                                                                  (const std::unordered_map<std::string,data::RecipeType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::RecipeType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::RecipeType>::end(&data::enumStrToVal(char const*,data::RecipeType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::RecipeType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RecipeType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RecipeType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
        "enumStrToVal",
        164);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::RecipeType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::RecipeType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
      "enumStrToVal",
      150);
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

// Line 173: range 0000000013998424-000000001399843A
const char *__cdecl data::getDescription(data::RecipeType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 178: range 000000001399843B-00000000139985F0
bool __cdecl data::isValidRecipeType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::RecipeType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::RecipeType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:179 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRecipeType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getRecipeTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::RecipeType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RecipeType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getRecipeTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::RecipeType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RecipeType,std::pair<std::string,std::string>>::find(
                                                                                                   v6,
                                                                                                   (const std::map<data::RecipeType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RecipeType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::RecipeType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 184: range 00000000139985F1-0000000013998752
bool __cdecl data::isValidRecipeTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::RecipeType> *v5; // rcx
  const std::unordered_map<std::string,data::RecipeType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidRecipeTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getRecipeTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::RecipeType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RecipeType>::end(v5);
  v6 = data::getRecipeTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::RecipeType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::RecipeType>::find(
                                                                                     v6,
                                                                                     name);
  result = std::__detail::operator!=<std::pair<std::string const,data::RecipeType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RecipeType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RecipeType>,true> *)(v2 + 64));
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

// Line 189: range 0000000013998753-0000000013998CB2
const std::unordered_map<std::string,data::RecipeType> *__cdecl data::getRecipeTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::RecipeType> *i; // r14
  const std::unordered_map<std::string,data::RecipeType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getRecipeTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRecipeTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRecipeTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::RecipeType>::pair<char const(&)[17],data::RecipeType,true>(
      (std::pair<const std::string,data::RecipeType> *const)(v1 + 160),
      (const char (*)[17])"RECIPE_TYPE_NONE",
      (data::RecipeType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "RECIPE_TYPE_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::RecipeType>::pair<char const(&)[20],data::RecipeType,true>(
      (std::pair<const std::string,data::RecipeType> *const)(v1 + 200),
      (const char (*)[20])"RECIPE_TYPE_COMBINE",
      (data::RecipeType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "RECIPE_TYPE_COMBINE");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::RecipeType>::pair<char const(&)[20],data::RecipeType,true>(
      (std::pair<const std::string,data::RecipeType> *const)(v1 + 240),
      (const char (*)[20])"RECIPE_TYPE_CONVERT",
      (data::RecipeType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "RECIPE_TYPE_CONVERT");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::RecipeType>::pair<char const(&)[30],data::RecipeType,true>(
      (std::pair<const std::string,data::RecipeType> *const)(v1 + 280),
      (const char (*)[30])"RECIPE_TYPE_COMBINE_HOMEWORLD",
      (data::RecipeType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::RecipeType>>::allocator((std::allocator<std::pair<const std::string,data::RecipeType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::RecipeType>::unordered_map(
      &data::getRecipeTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::RecipeType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::RecipeType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::RecipeType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::RecipeType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getRecipeTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::RecipeType>::~unordered_map,
      &data::getRecipeTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::RecipeType>>::~allocator((std::allocator<std::pair<const std::string,data::RecipeType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::RecipeType> *)(v1 + 320);
          i != (std::pair<const std::string,data::RecipeType> *)(v1 + 160);
          std::pair<std::string const,data::RecipeType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getRecipeTypeNameMap[abi:cxx11](void)::m;
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

// Line 201: range 0000000013998CB3-0000000013999483
const std::map<data::RecipeType,std::pair<std::string,std::string >> *__cdecl data::getRecipeTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::RecipeType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getRecipeTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getRecipeTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRecipeTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[17])"RECIPE_TYPE_NONE");
    std::pair<data::RecipeType const,std::pair<std::string,std::string>>::pair<data::RecipeType,true>(
      (std::pair<const data::RecipeType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::RecipeType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1AC42600,
      (const char (*)[20])"RECIPE_TYPE_COMBINE");
    std::pair<data::RecipeType const,std::pair<std::string,std::string>>::pair<data::RecipeType,true>(
      (std::pair<const data::RecipeType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::RecipeType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1AC42640,
      (const char (*)[20])"RECIPE_TYPE_CONVERT");
    std::pair<data::RecipeType const,std::pair<std::string,std::string>>::pair<data::RecipeType,true>(
      (std::pair<const data::RecipeType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::RecipeType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[13])byte_1AC42680,
      (const char (*)[30])"RECIPE_TYPE_COMBINE_HOMEWORLD");
    std::pair<data::RecipeType const,std::pair<std::string,std::string>>::pair<data::RecipeType,true>(
      (std::pair<const data::RecipeType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::RecipeType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::RecipeType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::RecipeType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::RecipeType,std::pair<std::string,std::string>>::map(
      &data::getRecipeTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::RecipeType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::RecipeType> *)(v1 + 32),
      (const std::map<data::RecipeType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getRecipeTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RecipeType,std::pair<std::string,std::string>>::~map,
      &data::getRecipeTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::RecipeType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::RecipeType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::RecipeType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::RecipeType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::RecipeType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getRecipeTypeEnumMap[abi:cxx11](void)::m;
};

// Line 214: range 0000000013999484-0000000013999CC4
int32_t __cdecl data::CombineUnlockConfig::init(
        data::CombineUnlockConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  std::string *v9; // r14
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
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 256 12 col_name:215";
  *(_QWORD *)(v2 + 16) = data::CombineUnlockConfig::init;
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
    &byte_1AC428C0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToEnum<data::CombineUnlockMethod>(
         row,
         (const std::string *)(v2 + 96),
         &this->unlock_method) != 0;
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
      "init",
      219);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1AC42900);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
    goto LABEL_18;
  }
  std::vector<std::string>::resize(&this->unlock_param, 2uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 1 )
    {
      std::vector<std::string>::resize(&this->unlock_param, array_count);
      result = 0;
      goto LABEL_18;
    }
    snprintf((char *)(v2 + 416), 0x100uLL, &byte_1AC2E720, i + 1);
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
  v9 = std::vector<std::string>::operator[](&this->unlock_param, i);
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    (const char *)(v2 + 416),
    (const std::allocator<char> *)(v2 + 80));
  LOBYTE(v9) = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 288), v9) != 0;
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
    "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
    "init",
    231);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1ABFD420);
  v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 416));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1ABFD460);
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

// Line 243: range 0000000013999CC6-000000001399D892
int32_t __cdecl data::CombineExcelConfig::init(
        data::CombineExcelConfig *const this,
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
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  unsigned __int64 v34; // rax
  _DWORD *v35; // rax
  bool v36; // r15
  unsigned __int64 v37; // rax
  char *j; // r14
  _DWORD *v39; // rax
  common::milog::MiLogStream *v40; // rax
  bool t; // [rsp+0h] [rbp-E00h]
  bool ta; // [rsp+0h] [rbp-E00h]
  bool tb; // [rsp+0h] [rbp-E00h]
  bool tc; // [rsp+0h] [rbp-E00h]
  bool td; // [rsp+0h] [rbp-E00h]
  std::string *te; // [rsp+0h] [rbp-E00h]
  bool tf; // [rsp+0h] [rbp-E00h]
  bool tg; // [rsp+0h] [rbp-E00h]
  bool th; // [rsp+0h] [rbp-E00h]
  bool ti; // [rsp+0h] [rbp-E00h]
  bool tj; // [rsp+0h] [rbp-E00h]
  uint32_t *tk; // [rsp+0h] [rbp-E00h]
  bool tl; // [rsp+0h] [rbp-E00h]
  uint32_t *tm; // [rsp+0h] [rbp-E00h]
  bool tn; // [rsp+0h] [rbp-E00h]
  uint32_t *to; // [rsp+0h] [rbp-E00h]
  bool tp; // [rsp+0h] [rbp-E00h]
  uint32_t *tq; // [rsp+0h] [rbp-E00h]
  bool tr; // [rsp+0h] [rbp-E00h]
  uint32_t *ts; // [rsp+0h] [rbp-E00h]
  bool tt; // [rsp+0h] [rbp-E00h]
  bool tu; // [rsp+0h] [rbp-E00h]
  uint32_t array_count; // [rsp+20h] [rbp-DE0h]
  uint32_t array_counta; // [rsp+20h] [rbp-DE0h]
  uint32_t array_countb; // [rsp+20h] [rbp-DE0h]
  uint32_t i; // [rsp+24h] [rbp-DDCh]
  uint32_t i_0; // [rsp+28h] [rbp-DD8h]
  uint32_t i_1; // [rsp+2Ch] [rbp-DD4h]
  char v70[3536]; // [rsp+30h] [rbp-DD0h] BYREF

  v2 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3488LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "68 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 24 9 <unknown> 512 32 11 va"
                        "l_str:246 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <"
                        "unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9"
                        " <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 "
                        "32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1"
                        "792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknow"
                        "n> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <un"
                        "known> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9"
                        " <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unknown> 3008 "
                        "32 9 <unknown> 3072 64 9 <unknown> 3168 256 12 col_name:244";
  *(_QWORD *)(v2 + 16) = data::CombineExcelConfig::init;
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
  v4[536862818] = -218959118;
  v4[536862827] = -202116109;
  v4[536862828] = -202116109;
  std::string::basic_string(v2 + 512);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 576),
    &byte_1AC42E60,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 576), &this->combine_id) != 0;
  std::string::~string((void *)(v2 + 576));
  *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
      "init",
      249);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 640),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AC42EA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 704),
      &byte_1AC42EE0,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 704),
           &this->player_level) != 0;
    std::string::~string((void *)(v2 + 704));
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
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
        "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
        "init",
        254);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 768),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1AC42F20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 832),
        &byte_1AC42F80,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 832), &this->is_default_show) != 0;
      std::string::~string((void *)(v2 + 832));
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
          "init",
          259);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 896),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1AC42FC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 960),
          &byte_1AC43020,
          (const std::allocator<char> *)(v2 + 96));
        tc = common::tools::TxtFile::Row::assignToEnum<data::CombineUnlockMethod>(
               row,
               (const std::string *)(v2 + 960),
               &this->unlock_config.unlock_method) != 0;
        std::string::~string((void *)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
        {
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1024, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1024),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
            "init",
            264);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 1024),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AC43060);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          std::vector<std::string>::resize(&this->unlock_config.unlock_param, 2uLL);
          array_count = 0;
          for ( i = 0; i <= 1; ++i )
          {
            snprintf((char *)(v2 + 3168), 0x100uLL, &byte_1AC430C0, i + 1);
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1088),
              (const char *)(v2 + 3168),
              (const std::allocator<char> *)(v2 + 112));
            td = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1088));
            std::string::~string((void *)(v2 + 1088));
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( !td )
            {
              te = std::vector<std::string>::operator[](&this->unlock_config.unlock_param, i);
              *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1152),
                (const char *)(v2 + 3168),
                (const std::allocator<char> *)(v2 + 128));
              LOBYTE(te) = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1152), te) != 0;
              std::string::~string((void *)(v2 + 1152));
              *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( (_BYTE)te )
              {
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1216, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1216),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                  "init",
                  276);
                v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1216),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v10,
                        (const char (*)[14])byte_1ABFD420);
                v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                        v11,
                        (const char (*)[256])(v2 + 3168));
                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1ABFD460);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
                goto LABEL_94;
              }
              array_count = i + 1;
            }
          }
          std::vector<std::string>::resize(&this->unlock_config.unlock_param, array_count);
          *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1280),
            &byte_1AC43100,
            (const std::allocator<char> *)(v2 + 144));
          tf = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                 row,
                 (const std::string *)(v2 + 1280),
                 &this->combine_type) != 0;
          std::string::~string((void *)(v2 + 1280));
          *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( tf )
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
              "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
              "init",
              285);
            v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1344),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1AC43140);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
            *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1408),
              &byte_1AC431A0,
              (const std::allocator<char> *)(v2 + 160));
            tg = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                   row,
                   (const std::string *)(v2 + 1408),
                   &this->result_item_id) != 0;
            std::string::~string((void *)(v2 + 1408));
            *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( tg )
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
                "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                "init",
                290);
              v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1472),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v14, (const char (*)[33])byte_1AC431E0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
              *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 176);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1536),
                &byte_1AC43240,
                (const std::allocator<char> *)(v2 + 176));
              th = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                     row,
                     (const std::string *)(v2 + 1536),
                     &this->result_item_count) != 0;
              std::string::~string((void *)(v2 + 1536));
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( th )
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
                  "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                  "init",
                  295);
                v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1600),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v15, (const char (*)[33])byte_1AC43280);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 192);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1664),
                  &byte_1AC432E0,
                  (const std::allocator<char> *)(v2 + 192));
                ti = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                       row,
                       (const std::string *)(v2 + 1664),
                       &this->scoin_cost) != 0;
                std::string::~string((void *)(v2 + 1664));
                *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 192);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                if ( ti )
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
                    "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                    "init",
                    300);
                  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1728),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v16,
                    (const char (*)[33])byte_1AC43320);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                  *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  std::vector<data::RandomItemConfig>::resize(&this->random_items, 2uLL);
                  array_counta = 0;
                  for ( i_0 = 0; i_0 <= 1; ++i_0 )
                  {
                    snprintf((char *)(v2 + 3168), 0x100uLL, &byte_1AC43380, i_0 + 1);
                    *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 208);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1792),
                      (const char *)(v2 + 3168),
                      (const std::allocator<char> *)(v2 + 208));
                    tj = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1792));
                    std::string::~string((void *)(v2 + 1792));
                    *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 208);
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                    if ( !tj )
                    {
                      tk = &std::vector<data::RandomItemConfig>::operator[](&this->random_items, i_0)->item_id;
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 224);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1856),
                        (const char *)(v2 + 3168),
                        (const std::allocator<char> *)(v2 + 224));
                      LOBYTE(tk) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                     row,
                                     (const std::string *)(v2 + 1856),
                                     tk) != 0;
                      std::string::~string((void *)(v2 + 1856));
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 224);
                      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                      if ( (_BYTE)tk )
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
                          "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                          "init",
                          312);
                        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1920),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                v17,
                                (const char (*)[14])byte_1ABFD420);
                        v19 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                v18,
                                (const char (*)[256])(v2 + 3168));
                        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                          v19,
                          (const char (*)[7])byte_1ABFD460);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                        *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                        goto LABEL_94;
                      }
                      snprintf((char *)(v2 + 3168), 0x100uLL, &byte_1AC433C0, i_0 + 1);
                      *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 240);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1984),
                        (const char *)(v2 + 3168),
                        (const std::allocator<char> *)(v2 + 240));
                      tl = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1984));
                      std::string::~string((void *)(v2 + 1984));
                      *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 240);
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                      if ( !tl )
                      {
                        tm = &std::vector<data::RandomItemConfig>::operator[](&this->random_items, i_0)->count;
                        *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 256);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2048),
                          (const char *)(v2 + 3168),
                          (const std::allocator<char> *)(v2 + 256));
                        LOBYTE(tm) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                       row,
                                       (const std::string *)(v2 + 2048),
                                       tm) != 0;
                        std::string::~string((void *)(v2 + 2048));
                        *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 256);
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                        if ( (_BYTE)tm )
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
                            "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                            "init",
                            320);
                          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2112),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                  v20,
                                  (const char (*)[14])byte_1ABFD420);
                          v22 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                  v21,
                                  (const char (*)[256])(v2 + 3168));
                          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v22,
                            (const char (*)[7])byte_1ABFD460);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2112));
                          *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                          goto LABEL_94;
                        }
                        snprintf((char *)(v2 + 3168), 0x100uLL, &byte_1AC43400, i_0 + 1);
                        *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 272);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2176),
                          (const char *)(v2 + 3168),
                          (const std::allocator<char> *)(v2 + 272));
                        tn = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2176));
                        std::string::~string((void *)(v2 + 2176));
                        *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 272);
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                        if ( !tn )
                        {
                          to = &std::vector<data::RandomItemConfig>::operator[](&this->random_items, i_0)->weight;
                          *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 288);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2240),
                            (const char *)(v2 + 3168),
                            (const std::allocator<char> *)(v2 + 288));
                          LOBYTE(to) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                         row,
                                         (const std::string *)(v2 + 2240),
                                         to) != 0;
                          std::string::~string((void *)(v2 + 2240));
                          *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 288);
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                          if ( (_BYTE)to )
                          {
                            *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2304, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2304),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                              "init",
                              328);
                            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2304),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                    v23,
                                    (const char (*)[14])byte_1ABFD420);
                            v25 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                    v24,
                                    (const char (*)[256])(v2 + 3168));
                            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                              v25,
                              (const char (*)[7])byte_1ABFD460);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                            *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                            goto LABEL_94;
                          }
                          array_counta = i_0 + 1;
                        }
                      }
                    }
                  }
                  std::vector<data::RandomItemConfig>::resize(&this->random_items, array_counta);
                  std::vector<data::IdCountConfig>::resize(&this->material_items, 5uLL);
                  array_countb = 0;
                  for ( i_1 = 0; i_1 <= 4; ++i_1 )
                  {
                    snprintf((char *)(v2 + 3168), 0x100uLL, &byte_1AC43440, i_1 + 1);
                    *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 304);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2368),
                      (const char *)(v2 + 3168),
                      (const std::allocator<char> *)(v2 + 304));
                    tp = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2368));
                    std::string::~string((void *)(v2 + 2368));
                    *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 304);
                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                    if ( !tp )
                    {
                      tq = &std::vector<data::IdCountConfig>::operator[](&this->material_items, i_1)->id;
                      *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 320);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2432),
                        (const char *)(v2 + 3168),
                        (const std::allocator<char> *)(v2 + 320));
                      LOBYTE(tq) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                     row,
                                     (const std::string *)(v2 + 2432),
                                     tq) != 0;
                      std::string::~string((void *)(v2 + 2432));
                      *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 320);
                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                      if ( (_BYTE)tq )
                      {
                        *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2496) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2496, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2496),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                          "init",
                          344);
                        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2496),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                v26,
                                (const char (*)[14])byte_1ABFD420);
                        v28 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                v27,
                                (const char (*)[256])(v2 + 3168));
                        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                          v28,
                          (const char (*)[7])byte_1ABFD460);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
                        *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                        goto LABEL_94;
                      }
                      snprintf((char *)(v2 + 3168), 0x100uLL, &byte_1AC43480, i_1 + 1);
                      *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 336);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2560),
                        (const char *)(v2 + 3168),
                        (const std::allocator<char> *)(v2 + 336));
                      tr = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2560));
                      std::string::~string((void *)(v2 + 2560));
                      *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 336);
                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                      if ( !tr )
                      {
                        ts = &std::vector<data::IdCountConfig>::operator[](&this->material_items, i_1)->count;
                        *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 352);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2624),
                          (const char *)(v2 + 3168),
                          (const std::allocator<char> *)(v2 + 352));
                        LOBYTE(ts) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                       row,
                                       (const std::string *)(v2 + 2624),
                                       ts) != 0;
                        std::string::~string((void *)(v2 + 2624));
                        *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 352);
                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                        if ( (_BYTE)ts )
                        {
                          *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2688) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2688, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2688),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                            "init",
                            352);
                          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2688),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                  v29,
                                  (const char (*)[14])byte_1ABFD420);
                          v31 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                  v30,
                                  (const char (*)[256])(v2 + 3168));
                          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v31,
                            (const char (*)[7])byte_1ABFD460);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
                          *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                          goto LABEL_94;
                        }
                        array_countb = i_1 + 1;
                      }
                    }
                  }
                  std::vector<data::IdCountConfig>::resize(&this->material_items, array_countb);
                  *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 368);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 2752),
                    &byte_1AC434C0,
                    (const std::allocator<char> *)(v2 + 368));
                  tt = common::tools::TxtFile::Row::assignToEnum<data::RecipeType>(
                         row,
                         (const std::string *)(v2 + 2752),
                         &this->recipe_type) != 0;
                  std::string::~string((void *)(v2 + 2752));
                  *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 368);
                  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                  if ( tt )
                  {
                    *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 2816) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 2816, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 2816),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                      "init",
                      361);
                    v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 2816),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v32,
                      (const char (*)[33])byte_1AC43500);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2816));
                    *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 384);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2880),
                      &byte_1AC43560,
                      (const std::allocator<char> *)(v2 + 384));
                    tu = common::tools::TxtFile::Row::assignToStr(
                           row,
                           (const std::string *)(v2 + 2880),
                           (std::string *)(v2 + 512)) != 0;
                    std::string::~string((void *)(v2 + 2880));
                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 384);
                    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                    if ( tu )
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
                        "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                        "init",
                        366);
                      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2944),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        v33,
                        (const char (*)[35])byte_1AC435A0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2944));
                      *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      v34 = ((v2 + 448) >> 3) + 2147450880;
                      *(_WORD *)v34 = 0;
                      *(_BYTE *)(v34 + 2) = 0;
                      v35 = (_DWORD *)(((v2 + 3072) >> 3) + 2147450880);
                      *v35 = 0;
                      v35[1] = 0;
                      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 400);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 3072),
                        ";",
                        (const std::allocator<char> *)(v2 + 400));
                      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 416);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 3104),
                        ",",
                        (const std::allocator<char> *)(v2 + 416));
                      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 432));
                      std::vector<std::string>::vector(
                        (std::vector<std::string> *const)(v2 + 448),
                        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 3072),
                        (const std::vector<std::string>::allocator_type *)(v2 + 432));
                      v36 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                              (const std::string *)(v2 + 512),
                              (const std::vector<std::string> *)(v2 + 448),
                              &this->special_output_items,
                              1) != 0;
                      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 448));
                      v37 = ((v2 + 448) >> 3) + 2147450880;
                      *(_WORD *)v37 = -1800;
                      *(_BYTE *)(v37 + 2) = -8;
                      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 432));
                      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                      for ( j = (char *)(v2 + 3136); j != (char *)(v2 + 3072); std::string::~string(j) )
                        j -= 32;
                      v39 = (_DWORD *)(((v2 + 3072) >> 3) + 2147450880);
                      *v39 = -117901064;
                      v39[1] = -117901064;
                      std::allocator<char>::~allocator(v2 + 416);
                      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                      std::allocator<char>::~allocator(v2 + 400);
                      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                      if ( v36 )
                      {
                        *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 3008) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 3008, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 3008),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                          "init",
                          371);
                        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 3008),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          v40,
                          (const char (*)[35])byte_1AC435A0);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3008));
                        *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
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
LABEL_94:
  std::string::~string((void *)(v2 + 512));
  if ( v70 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8184) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862739) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450948 - (((_DWORD)v4 + 2147450956) & 0xFFFFFFF8) + 328) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF81AC) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3488LL, v70);
  }
  return v6;
};

// Line 379: range 000000001399D894-000000001399E32C
int32_t __cdecl data::ReliquaryDecomposeExcelConfig::init(
        data::ReliquaryDecomposeExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::ReliquaryDecomposeExcelConfig::init;
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
    "id",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 96), &this->id) != 0;
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
      "init",
      382);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1ABFDF00);
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
      "DropID",
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->drop_id) != 0;
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
        "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
        "init",
        387);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1AC34C60);
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
        &byte_1AC43600,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 352),
              &this->need_reliquary_count) != 0;
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
          "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
          "init",
          392);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v11, (const char (*)[39])byte_1AC43640);
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
          &byte_1AC436A0,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 480),
                &this->need_reliquary_rank_level) != 0;
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
            "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
            "init",
            397);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v13, (const char (*)[42])byte_1AC436E0);
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

// Line 406: range 000000001399E32E-000000001399F512
int32_t __cdecl data::CombineExcelConfigMgrBase::loadCombineExcelConfig(
        data::CombineExcelConfigMgrBase *const this,
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
  unsigned __int64 v12; // rax
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
  data::CombineExcelConfig *v23; // rax
  unsigned int *v24; // rcx
  data::CombineExcelConfig *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  int v30; // edx
  char *i; // r14
  int32_t v33; // [rsp+1Ch] [rbp-8714h]
  std::string *__for_begin; // [rsp+38h] [rbp-86F8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+58h] [rbp-86D8h]
  char v37[34512]; // [rsp+60h] [rbp-86D0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_10(34464LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 5 r:423 112 4 9 <unknown> 128 32 9 <u"
                        "nknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <un"
                        "known> 512 96 9 paths:407 640 176 8 data:426 880 376 24 debug_message_stream:434 1328 32880 12 txt_file:417";
  *(_QWORD *)(v2 + 16) = data::CombineExcelConfigMgrBase::loadCombineExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556924;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862739] = -218959118;
  v4[536862745] = -219021312;
  v4[536862746] = -218959118;
  v4[536862747] = 62194;
  v4[536862759] = -218959360;
  v4[536862760] = -218959118;
  v4[536862761] = 62194;
  v4[536863789] = -202116109;
  v4[536863790] = -202116109;
  v4[536863791] = -202116109;
  v4[536863792] = -202116109;
  v4[536863793] = -202116109;
  v4[536863794] = -202116109;
  v4[536863795] = -202116109;
  v4[536863796] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 512),
    "/txt/CombineData.txt",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 544),
    "/txt/ConvertData.txt",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 576),
    "/txt/ConvertHomeWorldData.txt",
    (const std::allocator<char> *)(v2 + 80));
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v2 + 512); __for_begin != (std::string *)(v2 + 608); ++__for_begin )
  {
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v2 + 128, 32LL);
    }
    std::operator+<char>((std::string *)(v2 + 128), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v2 + 128);
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v2 + 1328, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v2 + 1328));
    v6 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v2 + 1328), v6) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
        "loadCombineExcelConfig",
        420);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[8])byte_1ABFF0A0);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])byte_1ABFF0E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v33 = -1;
      v9 = 0;
    }
    else
    {
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
      v10 = *(unsigned __int8 *)(((v2 + 96) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v10 != 0 && (char)v10 <= 3 )
        __asan_report_store4(v2 + 96, v6);
      for ( *(_DWORD *)(v2 + 96) = 0; ; ++*(_DWORD *)(v2 + 96) )
      {
        v11 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v2 + 1328));
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 96);
        if ( v11 <= *(_DWORD *)(v2 + 96) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v2 + 1328), *(_DWORD *)(v2 + 96));
        v12 = ((v2 + 640) >> 3) + 2147450880;
        *(_DWORD *)v12 = 0;
        *(_DWORD *)(v12 + 4) = 0;
        *(_DWORD *)(v12 + 8) = 0;
        *(_DWORD *)(v12 + 12) = 0;
        *(_DWORD *)(v12 + 16) = 0;
        *(_WORD *)(v12 + 20) = 0;
        data::CombineExcelConfig::CombineExcelConfig((data::CombineExcelConfig *const)(v2 + 640));
        if ( row_ptr )
        {
          if ( data::CombineExcelConfig::init((data::CombineExcelConfig *const)(v2 + 640), row_ptr) )
          {
            __asan_unpoison_stack_memory(v2 + 880, 376LL);
            std::ostringstream::basic_ostringstream(v2 + 880);
            v15 = std::operator<<<std::char_traits<char>>(v2 + 880, &unk_1AC43980);
            if ( *(_BYTE *)(((v2 + 648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 648) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 648);
            std::ostream::operator<<(v15, *(unsigned int *)(v2 + 648));
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
              "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
              "loadCombineExcelConfig",
              436);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])"<");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, __for_begin);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v18,
                    (const char (*)[11])byte_1ABFF1E0);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 96);
            v20 = (unsigned int)(*(_DWORD *)(v2 + 96) + 1);
            if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 112, v20);
            *(_DWORD *)(v2 + 112) = v20;
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v2 + 112));
            v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v21,
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 384, 32LL);
            }
            std::ostringstream::str(v2 + 384, v2 + 880);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v2 + 384));
            std::string::~string((void *)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
            v33 = -1;
            std::ostringstream::~ostringstream(v2 + 880);
            __asan_poison_stack_memory(v2 + 880, 376LL);
            v14 = 0;
          }
          else
          {
            v23 = std::move<data::CombineExcelConfig &>((data::CombineExcelConfig *)(v2 + 640));
            v26 = std::unordered_map<unsigned int,data::CombineExcelConfig>::emplace<unsigned int &,data::CombineExcelConfig>(
                    &this->combine_excel_config_map,
                    (unsigned int *)(v2 + 648),
                    v23,
                    v24,
                    v25);
            if ( !v26.second )
            {
              *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 448, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 448),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                "loadCombineExcelConfig",
                441);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v27,
                      (const char (*)[16])byte_1AC439C0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v2 + 648));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
              *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
              v33 = -1;
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
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
            "loadCombineExcelConfig",
            429);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v33 = -1;
          v14 = 0;
        }
        data::CombineExcelConfig::~CombineExcelConfig((data::CombineExcelConfig *const)(v2 + 640));
        v29 = ((v2 + 640) >> 3) + 2147450880;
        *(_DWORD *)v29 = -117901064;
        *(_DWORD *)(v29 + 4) = -117901064;
        *(_DWORD *)(v29 + 8) = -117901064;
        *(_DWORD *)(v29 + 12) = -117901064;
        *(_DWORD *)(v29 + 16) = -117901064;
        *(_WORD *)(v29 + 20) = -1800;
        if ( v14 != 1 )
        {
          v30 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 96);
      }
      v30 = 1;
LABEL_45:
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      v9 = v30 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v2 + 1328));
    __asan_poison_stack_memory(v2 + 1328, 32880LL);
    if ( !v9 )
      goto LABEL_49;
  }
  v33 = 0;
LABEL_49:
  for ( i = (char *)(v2 + 608); i != (char *)(v2 + 512); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF90CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862741) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450956 - (((_DWORD)v4 + 2147450964) & 0xFFFFFFF8) + 4232) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_10(v2, 34464LL, v37);
  }
  return v33;
};

// Line 450: range 000000001399F514-00000000139A0654
int32_t __cdecl data::CombineExcelConfigMgrBase::loadReliquaryDecomposeExcelConfig(
        data::CombineExcelConfigMgrBase *const this,
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
  data::ReliquaryDecomposeExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::ReliquaryDecomposeExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false,false>,bool> v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:465 64 4 9 <unknown> 80 24 8 data:468 144 32 9 paths:451 208 32 9 <"
                        "unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <u"
                        "nknown> 592 376 24 debug_message_stream:476 1040 32880 12 txt_file:459";
  *(_QWORD *)(v3 + 16) = data::CombineExcelConfigMgrBase::loadReliquaryDecomposeExcelConfig;
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
    "/txt/ReliquaryDecomposeData.txt",
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
        "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
        "loadReliquaryDecomposeExcelConfig",
        462);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        v15 = &`vtable for'data::ReliquaryDecomposeExcelConfig + 2;
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
        if ( *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 100, (((_BYTE)v3 + 100) & 7u) + 3);
        }
        *(_DWORD *)(v3 + 100) = 0;
        if ( row_ptr )
        {
          if ( data::ReliquaryDecomposeExcelConfig::init((data::ReliquaryDecomposeExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 592);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 592, &unk_1ABFF160);
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
              "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
              "loadReliquaryDecomposeExcelConfig",
              478);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v20, (const char (*)[2])"<");
            v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, __for_begin);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v22,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
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
            v27 = std::move<data::ReliquaryDecomposeExcelConfig &>((data::ReliquaryDecomposeExcelConfig *)(v3 + 80));
            v30 = std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::emplace<unsigned int &,data::ReliquaryDecomposeExcelConfig>(
                    &this->reliquary_decompose_excel_config_map,
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
                "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
                "loadReliquaryDecomposeExcelConfig",
                483);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 528),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])byte_1ABFF260);
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
            "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
            "loadReliquaryDecomposeExcelConfig",
            471);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::ReliquaryDecomposeExcelConfig::~ReliquaryDecomposeExcelConfig((data::ReliquaryDecomposeExcelConfig *const)(v3 + 80));
        v33 = ((v3 + 80) >> 3) + 2147450880;
        *(_WORD *)v33 = -1800;
        *(_BYTE *)(v33 + 2) = -8;
        if ( v18 != 1 )
        {
          v34 = 0;
          goto LABEL_55;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v34 = 1;
LABEL_55:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v34 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    __asan_poison_stack_memory(v3 + 1040, 32880LL);
    if ( !v10 )
      goto LABEL_59;
  }
  v2 = 0;
LABEL_59:
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

// Line 492: range 00000000139A0656-00000000139A097A
int32_t __cdecl data::CombineExcelConfigMgrBase::loadConfig(
        data::CombineExcelConfigMgrBase *const this,
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
  *(_QWORD *)(v2 + 16) = data::CombineExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( data::CombineExcelConfigMgrBase::loadCombineExcelConfig(this, config) )
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
      "loadConfig",
      495);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"loadCombineExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( data::CombineExcelConfigMgrBase::loadReliquaryDecomposeExcelConfig(this, config) )
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
      "./src/txt_data_auto/CombineExcelConfig.gen.cpp",
      "loadConfig",
      500);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v7,
      (const char (*)[41])"loadReliquaryDecomposeExcelConfig failed");
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

// Line 507: range 00000000139A097C-00000000139A098E
int32_t __cdecl data::CombineExcelConfigMgrBase::rewriteConfig(
        data::CombineExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 512: range 00000000139A0990-00000000139A09A2
int32_t __cdecl data::CombineExcelConfigMgrBase::finalConfig(
        data::CombineExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 517: range 00000000139A09A4-00000000139A0B5F
data::CombineExcelConfig *__fastcall data::CombineExcelConfigMgrBase::findCombineExcelConfig(
        data::CombineExcelConfigMgrBase *const this,
        __int64 combine_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::CombineExcelConfigMap *p_combine_excel_config_map; // rdx
  data::CombineExcelConfigMap *v6; // rdx
  bool v7; // al
  data::CombineExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 combine_id:516 64 8 8 iter:518 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::CombineExcelConfigMgrBase::findCombineExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = combine_id;
  p_combine_excel_config_map = &this->combine_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, combine_id);
  *(std::unordered_map<unsigned int,data::CombineExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CombineExcelConfig>::find(
                                                                                        p_combine_excel_config_map,
                                                                                        (const std::unordered_map<unsigned int,data::CombineExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->combine_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CombineExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CombineExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::CombineExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombineExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombineExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 530: range 00000000139A0B60-00000000139A0D1B
const data::CombineExcelConfig *__fastcall data::CombineExcelConfigMgrBase::findCombineExcelConfig(
        const data::CombineExcelConfigMgrBase *const this,
        __int64 combine_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::CombineExcelConfigMap *p_combine_excel_config_map; // rdx
  data::CombineExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::CombineExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 combine_id:529 64 8 8 iter:531 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::CombineExcelConfigMgrBase::findCombineExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = combine_id;
  p_combine_excel_config_map = &this->combine_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, combine_id);
  *(std::unordered_map<unsigned int,data::CombineExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CombineExcelConfig>::find(
                                                                                              p_combine_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::CombineExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->combine_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CombineExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CombineExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::CombineExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombineExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombineExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 543: range 00000000139A0D1C-00000000139A0ED7
data::ReliquaryDecomposeExcelConfig *__fastcall data::CombineExcelConfigMgrBase::findReliquaryDecomposeExcelConfig(
        data::CombineExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ReliquaryDecomposeExcelConfigMap *p_reliquary_decompose_excel_config_map; // rdx
  data::ReliquaryDecomposeExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ReliquaryDecomposeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:542 64 8 8 iter:544 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::CombineExcelConfigMgrBase::findReliquaryDecomposeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_reliquary_decompose_excel_config_map = &this->reliquary_decompose_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::find(
                                                                                                   p_reliquary_decompose_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->reliquary_decompose_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 556: range 00000000139A0ED8-00000000139A1093
const data::ReliquaryDecomposeExcelConfig *__fastcall data::CombineExcelConfigMgrBase::findReliquaryDecomposeExcelConfig(
        const data::CombineExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ReliquaryDecomposeExcelConfigMap *p_reliquary_decompose_excel_config_map; // rdx
  data::ReliquaryDecomposeExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ReliquaryDecomposeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:555 64 8 8 iter:557 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::CombineExcelConfigMgrBase::findReliquaryDecomposeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_reliquary_decompose_excel_config_map = &this->reliquary_decompose_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::find(p_reliquary_decompose_excel_config_map, (const std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->reliquary_decompose_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false,false> *const)(v2 + 64))->second;
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
